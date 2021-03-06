// Copyright (c) 2013-2014 Vittorio Romeo
// License: Academic Free License ("AFL") v. 3.0
// AFL License page: http://opensource.org/licenses/AFL-3.0

#ifndef SSVUJ_OH_LINKEDVALUE
#define SSVUJ_OH_LINKEDVALUE

namespace ssvuj
{
	namespace Internal
	{
		class LinkedValueBase
		{
			protected:
				std::string name;

			public:
				inline LinkedValueBase(std::string mLinkedName) : name{std::move(mLinkedName)} { }
				inline virtual ~LinkedValueBase() { }

				virtual void syncFrom(const Obj& mRoot) = 0;
				virtual void syncTo(Obj& mRoot) const = 0;
		};
	}

	template<typename T> class LinkedValue final : public Internal::LinkedValueBase
	{
		private:
			T value;

		public:
			inline LinkedValue(std::string mLinkedName) : Internal::LinkedValueBase{std::move(mLinkedName)} { }

			inline operator T() const noexcept { return value; }
			inline auto& operator=(const T& mValue) { value = mValue; return *this; }

			inline void syncFrom(const Obj& mObj) override	{ extr(mObj, name, value); }
			inline void syncTo(Obj& mObj) const override	{ arch(mObj, name, value); }
	};

	class LinkedValueManager
	{
		private:
			using Container = ssvu::VecUPtr<Internal::LinkedValueBase>;
			Obj& obj;
			Container values;

		public:
			inline LinkedValueManager(Obj& mObj) : obj(mObj) { }

			template<typename T> inline auto& create(std::string mName) { return ssvu::getEmplaceUPtr<LinkedValue<T>>(values, std::move(mName)); }

			inline void syncFromObj()		{ for(auto& lv : values) lv->syncFrom(obj); }
			inline void syncToObj()	const	{ for(const auto& lv : values) lv->syncTo(obj); }

			inline const auto& getValues() const noexcept { return values; }
	};
}

#endif
