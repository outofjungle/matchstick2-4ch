// Gradient palette "red_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/ds9/tn/red.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 8 bytes of program space.

DEFINE_GRADIENT_PALETTE(red_gp){
    0, 0, 0, 0,
    255, 255, 0, 0};

// Gradient palette "es_emerald_dragon_10_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/es/emerald_dragon/tn/es_emerald_dragon_10.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 12 bytes of program space.

DEFINE_GRADIENT_PALETTE(es_emerald_dragon_10_gp){
    0, 1, 8, 1,
    119, 79, 213, 1,
    255, 249, 239, 188};

// Gradient palette "GMT_ocean_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/gmt/tn/GMT_ocean.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 36 bytes of program space.

DEFINE_GRADIENT_PALETTE(GMT_ocean_gp){
    0, 0, 0, 0,
    31, 0, 1, 1,
    63, 0, 1, 4,
    95, 0, 19, 42,
    127, 0, 79, 138,
    159, 15, 144, 112,
    191, 91, 233, 89,
    223, 155, 244, 158,
    255, 242, 255, 255};

// Gradient palette "Spectral_08_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/cb/div/tn/Spectral_08.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 64 bytes of program space.

DEFINE_GRADIENT_PALETTE(Spectral_08_gp){
    0, 159, 11, 13,
    31, 159, 11, 13,
    31, 227, 39, 9,
    63, 227, 39, 9,
    63, 249, 109, 22,
    95, 249, 109, 22,
    95, 252, 191, 55,
    127, 252, 191, 55,
    127, 194, 233, 69,
    159, 194, 233, 69,
    159, 90, 186, 84,
    191, 90, 186, 84,
    191, 23, 139, 85,
    223, 23, 139, 85,
    223, 3, 63, 120,
    255, 3, 63, 120};

// Gradient palette "b_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/ds9/tn/b.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 20 bytes of program space.

DEFINE_GRADIENT_PALETTE(b_gp){
    0, 0, 0, 0,
    63, 0, 0, 255,
    127, 255, 0, 0,
    191, 255, 255, 0,
    255, 255, 255, 255};

// Gradient palette "nunoftheabove_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/pj/6/tn/nunoftheabove.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 32 bytes of program space.

DEFINE_GRADIENT_PALETTE(nunoftheabove_gp){
    0, 1, 1, 1,
    51, 1, 1, 1,
    56, 255, 255, 255,
    94, 255, 255, 255,
    101, 1, 1, 1,
    135, 1, 1, 1,
    153, 18, 7, 230,
    255, 224, 10, 9};

const TProgmemRGBGradientPalettePtr palettes[] = {
    red_gp,
    es_emerald_dragon_10_gp,
    GMT_ocean_gp,
    Spectral_08_gp,
    b_gp,
    nunoftheabove_gp};
