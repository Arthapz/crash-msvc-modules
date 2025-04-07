module;

// #include <stormkit/Core/FlagsMacro.hpp>
// #include <stormkit/Core/PlatformMacro.hpp>

export module mod;

import std;
// import frozen;

// import :TypeSafe.Boolean;
// import :TypeSafe.Flags;
// import :Meta.Traits;

export {
    namespace stormkit { inline namespace core {
        enum class ConsoleColor {
            Red,
            Green,
            Yellow,
            Blue,
            Magenta,
            Cyan,
            White,
            Black,
            Bright_Red,
            Bright_Green,
            Bright_Yellow,
            Bright_Blue,
            Bright_Magenta,
            Bright_Cyan,
            Bright_White,
            Bright_Black,
        };

        // enum class StyleModifier {
        //     None      = 0x0,
        //     Bold      = 0x1,
        //     Faint     = 0x2,
        //     Italic    = 0x4,
        //     Inverse   = 0x8,
        //     Underline = 0xA
        // };

        // template<typename T>
        // struct Stylized {
        //     T                           value;
        //     std::optional<ConsoleColor> fg;
        //     std::optional<ConsoleColor> bg;
        //     StyleModifier               modifiers = StyleModifier::None;
        // };

        struct ConsoleStyle {
            // template<typename T>
            // [[nodiscard]] constexpr auto operator|(T&& value) const noexcept -> Stylized<T>;
            std::optional<ConsoleColor>  fg;
            std::optional<ConsoleColor>  bg; // comment this and it build
            // StyleModifier                modifiers = StyleModifier::None;
        };

        inline constexpr auto RedTextStyle     = ConsoleStyle { .fg = ConsoleColor::Red };
        inline constexpr auto GreenTextStyle   = ConsoleStyle { .fg = ConsoleColor::Green };
        inline constexpr auto YellowTextStyle  = ConsoleStyle { .fg = ConsoleColor::Yellow };
        inline constexpr auto BlueTextStyle    = ConsoleStyle { .fg = ConsoleColor::Blue };
        inline constexpr auto MagentaTextStyle = ConsoleStyle { .fg = ConsoleColor::Magenta };
        inline constexpr auto CyanTextStyle    = ConsoleStyle { .fg = ConsoleColor::Cyan };
        inline constexpr auto WhiteTextStyle   = ConsoleStyle { .fg = ConsoleColor::White };
        inline constexpr auto BlackTextStyle   = ConsoleStyle { .fg = ConsoleColor::Black };
    }} // namespace stormkit::core

    // FLAG_ENUM(stormkit::core::StyleModifier)

    // namespace std {
    //     template<typename T, class CharT>
    //     struct formatter<stormkit::core::Stylized<T>, CharT>
    //         : formatter<stormkit::meta::CanonicalType<T>, CharT> {
    //         template<class FormatContext>
    //         auto format(const stormkit::core::Stylized<T>& stylized,
    //                     FormatContext& ctx) const noexcept -> decltype(ctx.out());
    //     };
    // } // namespace std
}

////////////////////////////////////////////////////////////////////
///                      IMPLEMENTATION                          ///
////////////////////////////////////////////////////////////////////

// using namespace std::literals;
// using namespace frozen::string_literals;

namespace stormkit { inline namespace core {
    namespace { namespace ecma48 {
        // constexpr auto Foreground = frozen::make_unordered_map<ConsoleColor, frozen::string>({
        // const auto Foreground = std::unordered_map<ConsoleColor, std::string_view>{
        //     { ConsoleColor::Black,          "\x1B[30m" },
        //     { ConsoleColor::Red,            "\x1B[31m" },
        //     { ConsoleColor::Green,          "\x1B[32m" },
        //     { ConsoleColor::Yellow,         "\x1B[33m" },
        //     { ConsoleColor::Blue,           "\x1B[34m" },
        //     { ConsoleColor::Magenta,        "\x1B[35m" },
        //     { ConsoleColor::Cyan,           "\x1B[36m" },
        //     { ConsoleColor::White,          "\x1B[37m" },
        //     { ConsoleColor::Bright_Black,   "\x1B[90m" },
        //     { ConsoleColor::Bright_Red,     "\x1B[91m" },
        //     { ConsoleColor::Bright_Green,   "\x1B[92m" },
        //     { ConsoleColor::Bright_Yellow,  "\x1B[93m" },
        //     { ConsoleColor::Bright_Blue,    "\x1B[94m" },
        //     { ConsoleColor::Bright_Magenta, "\x1B[95m" },
        //     { ConsoleColor::Bright_Cyan,    "\x1B[96m" },
        //     { ConsoleColor::Bright_White,   "\x1B[97m" },
        // };
        // });

        // constexpr auto Background = frozen::make_unordered_map<ConsoleColor, frozen::string>({
        // const auto Background = std::unordered_map<ConsoleColor, std::string_view>{
        //     { ConsoleColor::Black,          "\x1B[40m"  },
        //     { ConsoleColor::Red,            "\x1B[41m"  },
        //     { ConsoleColor::Green,          "\x1B[42m"  },
        //     { ConsoleColor::Yellow,         "\x1B[43m"  },
        //     { ConsoleColor::Blue,           "\x1B[44m"  },
        //     { ConsoleColor::Magenta,        "\x1B[45m"  },
        //     { ConsoleColor::Cyan,           "\x1B[46m"  },
        //     { ConsoleColor::White,          "\x1B[47m"  },
        //     { ConsoleColor::Bright_Black,   "\x1B[100m" },
        //     { ConsoleColor::Bright_Red,     "\x1B[101m" },
        //     { ConsoleColor::Bright_Green,   "\x1B[102m" },
        //     { ConsoleColor::Bright_Yellow,  "\x1B[103m" },
        //     { ConsoleColor::Bright_Blue,    "\x1B[104m" },
        //     { ConsoleColor::Bright_Magenta, "\x1B[105m" },
        //     { ConsoleColor::Bright_Cyan,    "\x1B[106m" },
        //     { ConsoleColor::Bright_White,   "\x1B[107m" },
        // };
        // });

        // constexpr auto Reset     = "\x1B[0m"sv;
        // constexpr auto Bold      = "\x1B[1m"sv;
        // constexpr auto Faint     = "\x1B[2m"sv;
        // constexpr auto Italic    = "\x1B[3m"sv;
        // constexpr auto Underline = "\x1B[4m"sv;
        // constexpr auto Inverse   = "\x1B[7m"sv;
    }} // namespace ::ecma48
}} // namespace stormkit::core

// using namespace stormkit;

// namespace std {
//     template<typename T, class CharT>
//     template<class FormatContext>
//     STORMKIT_FORCE_INLINE auto
//         formatter<Stylized<T>, CharT>::format(const Stylized<T>& stylized,
//                                               FormatContext&     ctx) const noexcept
//         -> decltype(ctx.out()) {
//         auto&& out = ctx.out();

//         const auto attributes = [&stylized] noexcept {
//             auto out = std::string {};
//             out.reserve(14);
            // if (stylized.fg) out += std::string_view { ecma48::Foreground.at(*stylized.fg) };
            // if (stylized.bg) out += std::string_view { ecma48::Background.at(*stylized.bg) };
            // if (checkFlag(stylized.modifiers, StyleModifier::Bold)) out += ecma48::Bold;
            // if (checkFlag(stylized.modifiers, StyleModifier::Faint)) out += ecma48::Faint;
            // if (checkFlag(stylized.modifiers, StyleModifier::Italic)) out += ecma48::Italic;
            // if (checkFlag(stylized.modifiers, StyleModifier::Inverse)) out += ecma48::Inverse;
            // if (checkFlag(stylized.modifiers, StyleModifier::Underline)) out += ecma48::Underline;
//             return out;
//         }();

//         return format_to(out, "{}{}{}", attributes, stylized.value, ecma48::Reset);
//     }
// } // namespace std
