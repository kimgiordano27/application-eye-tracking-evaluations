/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$CreateTraceJsonReader
ENTRY_POINT: 058c241c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__CreateTraceJsonReader(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  long lVar12;
  uint in_w8;
  uint uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 *unaff_x25;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  
  uVar14 = *(undefined8 *)PTR_DAT_07103478;
  *(undefined8 *)(param_1 + 0xbe8) = 0x47d;
  *(undefined8 *)(param_1 + 0xbe0) = uVar14;
  puVar2 = PTR_DAT_07103038;
  if (in_w8 != 0xbd) {
    uVar14 = *(undefined8 *)PTR_DAT_07103038;
    *(undefined8 *)(param_1 + 0xbf8) = 0x25;
    *(undefined8 *)(param_1 + 0xbf0) = uVar14;
    if (0xbe < in_w8) {
      uVar14 = *(undefined8 *)PTR_DAT_07102f88;
      *(undefined8 *)(param_1 + 0xc08) = 0x402;
      *(undefined8 *)(param_1 + 0xc00) = uVar14;
      if (in_w8 != 0xbf) {
        uVar14 = *(undefined8 *)PTR_DAT_07102aa8;
        *(undefined8 *)(param_1 + 0xc18) = 0x4f31;
        *(undefined8 *)(param_1 + 0xc10) = uVar14;
        if (0xc0 < in_w8) {
          uVar14 = *(undefined8 *)PTR_DAT_071033a0;
          *(undefined8 *)(param_1 + 0xc28) = 0x4f35;
          *(undefined8 *)(param_1 + 0xc20) = uVar14;
          if (in_w8 != 0xc1) {
            uVar14 = *(undefined8 *)PTR_DAT_07102af0;
            *(undefined8 *)(param_1 + 0xc38) = 0x4f36;
            *(undefined8 *)(param_1 + 0xc30) = uVar14;
            if (0xc2 < in_w8) {
              uVar14 = *(undefined8 *)PTR_DAT_07103098;
              *(undefined8 *)(param_1 + 0xc48) = 0x4f38;
              *(undefined8 *)(param_1 + 0xc40) = uVar14;
              if (in_w8 != 0xc3) {
                uVar14 = *(undefined8 *)PTR_DAT_07102a50;
                *(undefined8 *)(param_1 + 0xc58) = 0x4f3c;
                *(undefined8 *)(param_1 + 0xc50) = uVar14;
                if (0xc4 < in_w8) {
                  uVar14 = *(undefined8 *)PTR_DAT_07102bb0;
                  *(undefined8 *)(param_1 + 0xc68) = 0x4f3d;
                  *(undefined8 *)(param_1 + 0xc60) = uVar14;
                  if (in_w8 != 0xc5) {
                    uVar14 = *(undefined8 *)PTR_DAT_071029a0;
                    *(undefined8 *)(param_1 + 0xc78) = 0x4f42;
                    *(undefined8 *)(param_1 + 0xc70) = uVar14;
                    if (0xc6 < in_w8) {
                      uVar14 = *(undefined8 *)PTR_DAT_07102a20;
                      *(undefined8 *)(param_1 + 0xc88) = 0x4f49;
                      *(undefined8 *)(param_1 + 0xc80) = uVar14;
                      if (in_w8 != 199) {
                        uVar14 = *(undefined8 *)PTR_DAT_07103378;
                        *(undefined8 *)(param_1 + 0xc98) = 0x4e9f;
                        *(undefined8 *)(param_1 + 0xc90) = uVar14;
                        if (200 < in_w8) {
                          uVar14 = *(undefined8 *)PTR_DAT_07102b68;
                          *(undefined8 *)(param_1 + 0xca8) = 0x4fc4;
                          *(undefined8 *)(param_1 + 0xca0) = uVar14;
                          if (in_w8 != 0xc9) {
                            uVar14 = *(undefined8 *)PTR_DAT_07103030;
                            *(undefined8 *)(param_1 + 0xcb8) = 0x4fc7;
                            *(undefined8 *)(param_1 + 0xcb0) = uVar14;
                            if (0xca < in_w8) {
                              uVar14 = *(undefined8 *)PTR_DAT_07102eb8;
                              *(undefined8 *)(param_1 + 0xcc8) = 0x4fc8;
                              *(undefined8 *)(param_1 + 0xcc0) = uVar14;
                              puVar4 = PTR_DAT_07102cb8;
                              if (in_w8 != 0xcb) {
                                uVar14 = *(undefined8 *)PTR_DAT_07102cb8;
                                *(undefined8 *)(param_1 + 0xcd8) = 0x1b5;
                                *(undefined8 *)(param_1 + 0xcd0) = uVar14;
                                puVar5 = PTR_DAT_07103170;
                                if (0xcc < in_w8) {
                                  uVar14 = *(undefined8 *)PTR_DAT_07103170;
                                  *(undefined8 *)(param_1 + 0xce8) = 500;
                                  *(undefined8 *)(param_1 + 0xce0) = uVar14;
                                  puVar6 = PTR_DAT_07102e90;
                                  if (in_w8 != 0xcd) {
                                    uVar14 = *(undefined8 *)PTR_DAT_07102e90;
                                    *(undefined8 *)(param_1 + 0xcf8) = 0x2e1;
                                    *(undefined8 *)(param_1 + 0xcf0) = uVar14;
                                    puVar7 = PTR_DAT_071030b8;
                                    if (0xce < in_w8) {
                                      uVar14 = *(undefined8 *)PTR_DAT_071030b8;
                                      *(undefined8 *)(param_1 + 0xd08) = 0x307;
                                      *(undefined8 *)(param_1 + 0xd00) = uVar14;
                                      if (in_w8 != 0xcf) {
                                        uVar14 = *(undefined8 *)PTR_DAT_07103360;
                                        *(undefined8 *)(param_1 + 0xd18) = 0x6faf;
                                        *(undefined8 *)(param_1 + 0xd10) = uVar14;
                                        if (0xd0 < in_w8) {
                                          uVar14 = *(undefined8 *)PTR_DAT_07102bc0;
                                          *(undefined8 *)(param_1 + 0xd28) = 0x352;
                                          *(undefined8 *)(param_1 + 0xd20) = uVar14;
                                          if (in_w8 != 0xd1) {
                                            uVar14 = *(undefined8 *)PTR_DAT_071032a0;
                                            *(undefined8 *)(param_1 + 0xd38) = 0x354;
                                            *(undefined8 *)(param_1 + 0xd30) = uVar14;
                                            puVar9 = PTR_DAT_07103150;
                                            if (0xd2 < in_w8) {
                                              uVar14 = *(undefined8 *)PTR_DAT_07103150;
                                              *(undefined8 *)(param_1 + 0xd48) = 0x357;
                                              *(undefined8 *)(param_1 + 0xd40) = uVar14;
                                              if (in_w8 != 0xd3) {
                                                uVar14 = *(undefined8 *)PTR_DAT_071028d8;
                                                *(undefined8 *)(param_1 + 0xd58) = 0x359;
                                                *(undefined8 *)(param_1 + 0xd50) = uVar14;
                                                puVar10 = PTR_DAT_07103220;
                                                if (0xd4 < in_w8) {
                                                  uVar14 = *(undefined8 *)PTR_DAT_07103220;
                                                  *(undefined8 *)(param_1 + 0xd68) = 0x35c;
                                                  *(undefined8 *)(param_1 + 0xd60) = uVar14;
                                                  if (in_w8 != 0xd5) {
                                                    uVar14 = *(undefined8 *)PTR_DAT_07102ea0;
                                                    *(undefined8 *)(param_1 + 0xd78) = 0x35d;
                                                    *(undefined8 *)(param_1 + 0xd70) = uVar14;
                                                    if (0xd6 < in_w8) {
                                                      uVar14 = *(undefined8 *)PTR_DAT_07103460;
                                                      *(undefined8 *)(param_1 + 0xd88) = 0x35e;
                                                      *(undefined8 *)(param_1 + 0xd80) = uVar14;
                                                      if (in_w8 != 0xd7) {
                                                        uVar14 = *(undefined8 *)PTR_DAT_071033e0;
                                                        *(undefined8 *)(param_1 + 0xd98) = 0x35f;
                                                        *(undefined8 *)(param_1 + 0xd90) = uVar14;
                                                        if (0xd8 < in_w8) {
                                                          uVar14 = *(undefined8 *)PTR_DAT_071028c0;
                                                          *(undefined8 *)(param_1 + 0xda8) = 0x360;
                                                          *(undefined8 *)(param_1 + 0xda0) = uVar14;
                                                          if (in_w8 != 0xd9) {
                                                            uVar14 = *(undefined8 *)PTR_DAT_07103448
                                                            ;
                                                            *(undefined8 *)(param_1 + 0xdb8) = 0x361
                                                            ;
                                                            *(undefined8 *)(param_1 + 0xdb0) =
                                                                 uVar14;
                                                            if (0xda < in_w8) {
                                                              uVar14 = *(undefined8 *)
                                                                        PTR_DAT_07102fd8;
                                                              *(undefined8 *)(param_1 + 0xdc8) =
                                                                   0x362;
                                                              *(undefined8 *)(param_1 + 0xdc0) =
                                                                   uVar14;
                                                              if (in_w8 != 0xdb) {
                                                                uVar14 = *(undefined8 *)
                                                                          PTR_DAT_07102898;
                                                                *(undefined8 *)(param_1 + 0xdd8) =
                                                                     0x365;
                                                                *(undefined8 *)(param_1 + 0xdd0) =
                                                                     uVar14;
                                                                if (0xdc < in_w8) {
                                                                  uVar14 = *(undefined8 *)
                                                                            PTR_DAT_07102d68;
                                                                  *(undefined8 *)(param_1 + 0xde8) =
                                                                       0x366;
                                                                  *(undefined8 *)(param_1 + 0xde0) =
                                                                       uVar14;
                                                                  if (in_w8 != 0xdd) {
                                                                    uVar14 = *(undefined8 *)
                                                                              PTR_DAT_07102958;
                                                                    *(undefined8 *)(param_1 + 0xdf8)
                                                                         = 0x5187;
                                                                    *(undefined8 *)(param_1 + 0xdf0)
                                                                         = uVar14;
                                                                    if (0xde < in_w8) {
                                                                      uVar14 = *(undefined8 *)
                                                                                PTR_DAT_07102e60;
                                                                      *(undefined8 *)
                                                                       (param_1 + 0xe08) = 0x5190;
                                                                      *(undefined8 *)
                                                                       (param_1 + 0xe00) = uVar14;
                                                                      if (in_w8 != 0xdf) {
                                                                        uVar14 = *(undefined8 *)
                                                                                  PTR_DAT_07103498;
                                                                        *(undefined8 *)
                                                                         (param_1 + 0xe18) = 0x51a9;
                                                                        *(undefined8 *)
                                                                         (param_1 + 0xe10) = uVar14;
                                                                        if (0xe0 < in_w8) {
                                                                          uVar14 = *(undefined8 *)
                                                                                    PTR_DAT_07103260
                                                                          ;
                                                                          *(undefined8 *)
                                                                           (param_1 + 0xe28) =
                                                                               0x4e89;
                                                                          *(undefined8 *)
                                                                           (param_1 + 0xe20) =
                                                                               uVar14;
                                                                          if (in_w8 != 0xe1) {
                                                                            uVar14 = *(undefined8 *)
                                                                                                                                                                            
                                                  PTR_DAT_07103138;
                                                  *(undefined8 *)(param_1 + 0xe38) = 0x4b0;
                                                  *(undefined8 *)(param_1 + 0xe30) = uVar14;
                                                  if (0xe2 < in_w8) {
                                                    uVar14 = *(undefined8 *)PTR_DAT_07103480;
                                                    *(undefined8 *)(param_1 + 0xe48) = 0xc42c;
                                                    *(undefined8 *)(param_1 + 0xe40) = uVar14;
                                                    if (in_w8 != 0xe3) {
                                                      uVar14 = *(undefined8 *)PTR_DAT_071034d8;
                                                      *(undefined8 *)(param_1 + 0xe58) = 0xcadc;
                                                      *(undefined8 *)(param_1 + 0xe50) = uVar14;
                                                      if (0xe4 < in_w8) {
                                                        uVar14 = *(undefined8 *)PTR_DAT_071033d8;
                                                        *(undefined8 *)(param_1 + 0xe68) = 0xc431;
                                                        *(undefined8 *)(param_1 + 0xe60) = uVar14;
                                                        if (in_w8 != 0xe5) {
                                                          uVar14 = *(undefined8 *)PTR_DAT_07102de0;
                                                          *(undefined8 *)(param_1 + 0xe78) = 0xc431;
                                                          *(undefined8 *)(param_1 + 0xe70) = uVar14;
                                                          if (0xe6 < in_w8) {
                                                            uVar14 = *(undefined8 *)PTR_DAT_07102a10
                                                            ;
                                                            *(undefined8 *)(param_1 + 0xe88) =
                                                                 0xc431;
                                                            *(undefined8 *)(param_1 + 0xe80) =
                                                                 uVar14;
                                                            if (in_w8 != 0xe7) {
                                                              uVar14 = *(undefined8 *)
                                                                        PTR_DAT_07103130;
                                                              *(undefined8 *)(param_1 + 0xe98) =
                                                                   0xcaed;
                                                              *(undefined8 *)(param_1 + 0xe90) =
                                                                   uVar14;
                                                              if (0xe8 < in_w8) {
                                                                uVar14 = *(undefined8 *)
                                                                          PTR_DAT_07103188;
                                                                *(undefined8 *)(param_1 + 0xea8) =
                                                                     0xcaed;
                                                                *(undefined8 *)(param_1 + 0xea0) =
                                                                     uVar14;
                                                                if (in_w8 != 0xe9) {
                                                                  uVar14 = *(undefined8 *)
                                                                            PTR_DAT_070cbca8;
                                                                  *(undefined8 *)(param_1 + 0xeb8) =
                                                                       0x6faf;
                                                                  *(undefined8 *)(param_1 + 0xeb0) =
                                                                       uVar14;
                                                                  if (0xea < in_w8) {
                                                                    uVar14 = *(undefined8 *)
                                                                              PTR_DAT_07102d40;
                                                                    *(undefined8 *)(param_1 + 0xec8)
                                                                         = 0x36a;
                                                                    *(undefined8 *)(param_1 + 0xec0)
                                                                         = uVar14;
                                                                    if (in_w8 != 0xeb) {
                                                                      uVar14 = *(undefined8 *)
                                                                                PTR_DAT_07102f98;
                                                                      *(undefined8 *)
                                                                       (param_1 + 0xed8) = 0x6fbb;
                                                                      *(undefined8 *)
                                                                       (param_1 + 0xed0) = uVar14;
                                                                      if (0xec < in_w8) {
                                                                        uVar14 = *(undefined8 *)
                                                                                  PTR_DAT_071034c8;
                                                                        *(undefined8 *)
                                                                         (param_1 + 0xee8) = 0x6fbd;
                                                                        *(undefined8 *)
                                                                         (param_1 + 0xee0) = uVar14;
                                                                        if (in_w8 != 0xed) {
                                                                          uVar14 = *(undefined8 *)
                                                                                    PTR_DAT_07103160
                                                                          ;
                                                                          *(undefined8 *)
                                                                           (param_1 + 0xef8) =
                                                                               0x6fb0;
                                                                          *(undefined8 *)
                                                                           (param_1 + 0xef0) =
                                                                               uVar14;
                                                                          if (0xee < in_w8) {
                                                                            uVar14 = *(undefined8 *)
                                                                                                                                                                            
                                                  PTR_DAT_07103008;
                                                  *(undefined8 *)(param_1 + 0xf08) = 0x6fb1;
                                                  *(undefined8 *)(param_1 + 0xf00) = uVar14;
                                                  if (in_w8 != 0xef) {
                                                    uVar14 = *(undefined8 *)PTR_DAT_071031d8;
                                                    *(undefined8 *)(param_1 + 0xf18) = 0x6fb2;
                                                    *(undefined8 *)(param_1 + 0xf10) = uVar14;
                                                    if (0xf0 < in_w8) {
                                                      uVar14 = *(undefined8 *)PTR_DAT_07103230;
                                                      *(undefined8 *)(param_1 + 0xf28) = 0x6fb3;
                                                      *(undefined8 *)(param_1 + 0xf20) = uVar14;
                                                      if (in_w8 != 0xf1) {
                                                        uVar14 = *(undefined8 *)PTR_DAT_07102848;
                                                        *(undefined8 *)(param_1 + 0xf38) = 0x6fb4;
                                                        *(undefined8 *)(param_1 + 0xf30) = uVar14;
                                                        if (0xf2 < in_w8) {
                                                          uVar14 = *(undefined8 *)PTR_DAT_07102968;
                                                          *(undefined8 *)(param_1 + 0xf48) = 0x6fb5;
                                                          *(undefined8 *)(param_1 + 0xf40) = uVar14;
                                                          if (in_w8 != 0xf3) {
                                                            uVar14 = *(undefined8 *)PTR_DAT_07103208
                                                            ;
                                                            *(undefined8 *)(param_1 + 0xf58) =
                                                                 0x6fb6;
                                                            *(undefined8 *)(param_1 + 0xf50) =
                                                                 uVar14;
                                                            if (0xf4 < in_w8) {
                                                              uVar14 = *(undefined8 *)
                                                                        PTR_DAT_07102ac8;
                                                              *(undefined8 *)(param_1 + 0xf68) =
                                                                   0x6fb6;
                                                              *(undefined8 *)(param_1 + 0xf60) =
                                                                   uVar14;
                                                              if (in_w8 != 0xf5) {
                                                                uVar14 = *(undefined8 *)
                                                                          PTR_DAT_07102c78;
                                                                *(undefined8 *)(param_1 + 0xf78) =
                                                                     0x96c6;
                                                                *(undefined8 *)(param_1 + 0xf70) =
                                                                     uVar14;
                                                                if (0xf6 < in_w8) {
                                                                  uVar14 = *(undefined8 *)
                                                                            PTR_DAT_07102bd0;
                                                                  *(undefined8 *)(param_1 + 0xf88) =
                                                                       0x6fb7;
                                                                  *(undefined8 *)(param_1 + 0xf80) =
                                                                       uVar14;
                                                                  if (in_w8 != 0xf7) {
                                                                    uVar14 = *(undefined8 *)
                                                                              PTR_DAT_07102858;
                                                                    *(undefined8 *)(param_1 + 0xf98)
                                                                         = 0x6faf;
                                                                    *(undefined8 *)(param_1 + 0xf90)
                                                                         = uVar14;
                                                                    if (0xf8 < in_w8) {
                                                                      uVar14 = *(undefined8 *)
                                                                                PTR_DAT_07103020;
                                                                      *(undefined8 *)
                                                                       (param_1 + 0xfa8) = 0x6fb0;
                                                                      *(undefined8 *)
                                                                       (param_1 + 4000) = uVar14;
                                                                      if (in_w8 != 0xf9) {
                                                                        uVar13 = *(uint *)(param_1 +
                                                                                          0x18);
                                                                        uVar14 = *(undefined8 *)
                                                                                  PTR_DAT_07102a60;
                                                                        *(undefined8 *)
                                                                         (param_1 + 0xfb8) = 0x6fb1;
                                                                        *(undefined8 *)
                                                                         (param_1 + 0xfb0) = uVar14;
                                                                        if (0xfa < uVar13) {
                                                                          uVar14 = *(undefined8 *)
                                                                                    PTR_DAT_07103358
                                                                          ;
                                                                          *(undefined8 *)
                                                                           (param_1 + 0xfc8) =
                                                                               0x6fb2;
                                                                          *(undefined8 *)
                                                                           (param_1 + 0xfc0) =
                                                                               uVar14;
                                                                          if (uVar13 != 0xfb) {
                                                                            uVar14 = *(undefined8 *)
                                                                                                                                                                            
                                                  PTR_DAT_071031f8;
                                                  *(undefined8 *)(param_1 + 0xfd8) = 0x6fb5;
                                                  *(undefined8 *)(param_1 + 0xfd0) = uVar14;
                                                  if (0xfc < uVar13) {
                                                    uVar14 = *(undefined8 *)PTR_DAT_07102e30;
                                                    *(undefined8 *)(param_1 + 0xfe8) = 0x6fb4;
                                                    *(undefined8 *)(param_1 + 0xfe0) = uVar14;
                                                    if (uVar13 != 0xfd) {
                                                      uVar14 = *(undefined8 *)PTR_DAT_07102b18;
                                                      *(undefined8 *)(param_1 + 0xff8) = 0x6fb6;
                                                      *(undefined8 *)(param_1 + 0xff0) = uVar14;
                                                      if (0xfe < uVar13) {
                                                        uVar14 = *(undefined8 *)PTR_DAT_07103088;
                                                        *(undefined8 *)(param_1 + 0x1008) = 0x6fb3;
                                                        *(undefined8 *)(param_1 + 0x1000) = uVar14;
                                                        if (uVar13 != 0xff) {
                                                          uVar14 = *(undefined8 *)PTR_DAT_07102cf8;
                                                          *(undefined8 *)(param_1 + 0x1018) = 0x6fb7
                                                          ;
                                                          *(undefined8 *)(param_1 + 0x1010) = uVar14
                                                          ;
                                                          if (0x100 < uVar13) {
                                                            uVar14 = *(undefined8 *)PTR_DAT_071029c8
                                                            ;
                                                            *(undefined8 *)(param_1 + 0x1028) =
                                                                 0x3b5;
                                                            *(undefined8 *)(param_1 + 0x1020) =
                                                                 uVar14;
                                                            if (uVar13 != 0x101) {
                                                              uVar14 = *(undefined8 *)
                                                                        PTR_DAT_07102e98;
                                                              *(undefined8 *)(param_1 + 0x1038) =
                                                                   0x3a8;
                                                              *(undefined8 *)(param_1 + 0x1030) =
                                                                   uVar14;
                                                              if (0x102 < uVar13) {
                                                                uVar14 = *(undefined8 *)
                                                                          PTR_DAT_07102b50;
                                                                *(undefined8 *)(param_1 + 0x1048) =
                                                                     0x4e9f;
                                                                *(undefined8 *)(param_1 + 0x1040) =
                                                                     uVar14;
                                                                if (uVar13 != 0x103) {
                                                                  uVar14 = *(undefined8 *)
                                                                            PTR_DAT_07102f08;
                                                                  *(undefined8 *)(param_1 + 0x1058)
                                                                       = 0x4e9f;
                                                                  *(undefined8 *)(param_1 + 0x1050)
                                                                       = uVar14;
                                                                  if (0x104 < uVar13) {
                                                                    uVar14 = *(undefined8 *)
                                                                              PTR_DAT_07102a80;
                                                                    *(undefined8 *)
                                                                     (param_1 + 0x1068) = 0x6faf;
                                                                    *(undefined8 *)
                                                                     (param_1 + 0x1060) = uVar14;
                                                                    if (uVar13 != 0x105) {
                                                                      uVar14 = *(undefined8 *)
                                                                                PTR_DAT_07103268;
                                                                      *(undefined8 *)
                                                                       (param_1 + 0x1078) = 0x6fb0;
                                                                      *(undefined8 *)
                                                                       (param_1 + 0x1070) = uVar14;
                                                                      if (0x106 < uVar13) {
                                                                        uVar14 = *(undefined8 *)
                                                                                  PTR_DAT_071029e0;
                                                                        *(undefined8 *)
                                                                         (param_1 + 0x1088) = 0x4e9f
                                                                        ;
                                                                        *(undefined8 *)
                                                                         (param_1 + 0x1080) = uVar14
                                                                        ;
                                                                        if (uVar13 != 0x107) {
                                                                          uVar14 = *(undefined8 *)
                                                                                    PTR_DAT_07102818
                                                                          ;
                                                                          *(undefined8 *)
                                                                           (param_1 + 0x1098) =
                                                                               0x6faf;
                                                                          *(undefined8 *)
                                                                           (param_1 + 0x1090) =
                                                                               uVar14;
                                                                          if (0x108 < uVar13) {
                                                                            uVar14 = *(undefined8 *)
                                                                                                                                                                            
                                                  PTR_DAT_07102ef0;
                                                  *(undefined8 *)(param_1 + 0x10a8) = 0x6fbd;
                                                  *(undefined8 *)(param_1 + 0x10a0) = uVar14;
                                                  if (uVar13 != 0x109) {
                                                    uVar14 = *(undefined8 *)PTR_DAT_07102ef8;
                                                    *(undefined8 *)(param_1 + 0x10b8) = 0x6faf;
                                                    *(undefined8 *)(param_1 + 0x10b0) = uVar14;
                                                    if (0x10a < uVar13) {
                                                      uVar14 = *(undefined8 *)PTR_DAT_07102b38;
                                                      *(undefined8 *)(param_1 + 0x10c8) = 0x6fb0;
                                                      *(undefined8 *)(param_1 + 0x10c0) = uVar14;
                                                      if (uVar13 != 0x10b) {
                                                        uVar14 = *(undefined8 *)PTR_DAT_071030a0;
                                                        *(undefined8 *)(param_1 + 0x10d8) = 0x6fb0;
                                                        *(undefined8 *)(param_1 + 0x10d0) = uVar14;
                                                        if (0x10c < uVar13) {
                                                          uVar14 = *(undefined8 *)PTR_DAT_07102e08;
                                                          *(undefined8 *)(param_1 + 0x10e8) = 0x6fb1
                                                          ;
                                                          *(undefined8 *)(param_1 + 0x10e0) = uVar14
                                                          ;
                                                          if (uVar13 != 0x10d) {
                                                            uVar14 = *(undefined8 *)PTR_DAT_07102e88
                                                            ;
                                                            *(undefined8 *)(param_1 + 0x10f8) =
                                                                 0x6fb1;
                                                            *(undefined8 *)(param_1 + 0x10f0) =
                                                                 uVar14;
                                                            if (0x10e < uVar13) {
                                                              uVar14 = *(undefined8 *)
                                                                        PTR_DAT_07102888;
                                                              *(undefined8 *)(param_1 + 0x1108) =
                                                                   0x6fb2;
                                                              *(undefined8 *)(param_1 + 0x1100) =
                                                                   uVar14;
                                                              if (uVar13 != 0x10f) {
                                                                uVar14 = *(undefined8 *)
                                                                          PTR_DAT_07102810;
                                                                *(undefined8 *)(param_1 + 0x1118) =
                                                                     0x6fb2;
                                                                *(undefined8 *)(param_1 + 0x1110) =
                                                                     uVar14;
                                                                if (0x110 < uVar13) {
                                                                  uVar14 = *(undefined8 *)
                                                                            PTR_DAT_071027f0;
                                                                  *(undefined8 *)(param_1 + 0x1128)
                                                                       = 0x6fb3;
                                                                  *(undefined8 *)(param_1 + 0x1120)
                                                                       = uVar14;
                                                                  if (uVar13 != 0x111) {
                                                                    uVar14 = *(undefined8 *)
                                                                              PTR_DAT_07103308;
                                                                    *(undefined8 *)
                                                                     (param_1 + 0x1138) = 0x6fb3;
                                                                    *(undefined8 *)
                                                                     (param_1 + 0x1130) = uVar14;
                                                                    if (0x112 < uVar13) {
                                                                      uVar14 = *(undefined8 *)
                                                                                PTR_DAT_07102f78;
                                                                      *(undefined8 *)
                                                                       (param_1 + 0x1148) = 0x6fb4;
                                                                      *(undefined8 *)
                                                                       (param_1 + 0x1140) = uVar14;
                                                                      if (uVar13 != 0x113) {
                                                                        uVar14 = *(undefined8 *)
                                                                                  PTR_DAT_07103298;
                                                                        *(undefined8 *)
                                                                         (param_1 + 0x1158) = 0x6fb4
                                                                        ;
                                                                        *(undefined8 *)
                                                                         (param_1 + 0x1150) = uVar14
                                                                        ;
                                                                        if (0x114 < uVar13) {
                                                                          uVar14 = *(undefined8 *)
                                                                                    PTR_DAT_07102980
                                                                          ;
                                                                          *(undefined8 *)
                                                                           (param_1 + 0x1168) =
                                                                               0x6fb5;
                                                                          *(undefined8 *)
                                                                           (param_1 + 0x1160) =
                                                                               uVar14;
                                                                          if (uVar13 != 0x115) {
                                                                            uVar14 = *(undefined8 *)
                                                                                                                                                                            
                                                  PTR_DAT_071028b8;
                                                  *(undefined8 *)(param_1 + 0x1178) = 0x6fb5;
                                                  *(undefined8 *)(param_1 + 0x1170) = uVar14;
                                                  if (0x116 < uVar13) {
                                                    uVar14 = *(undefined8 *)PTR_DAT_07102b58;
                                                    *(undefined8 *)(param_1 + 0x1188) = 0x6fb6;
                                                    *(undefined8 *)(param_1 + 0x1180) = uVar14;
                                                    if (uVar13 != 0x117) {
                                                      uVar14 = *(undefined8 *)PTR_DAT_07103100;
                                                      *(undefined8 *)(param_1 + 0x1198) = 0x6fb6;
                                                      *(undefined8 *)(param_1 + 0x1190) = uVar14;
                                                      if (0x118 < uVar13) {
                                                        uVar14 = *(undefined8 *)PTR_DAT_07103428;
                                                        *(undefined8 *)(param_1 + 0x11a8) = 0x6fb7;
                                                        *(undefined8 *)(param_1 + 0x11a0) = uVar14;
                                                        if (uVar13 != 0x119) {
                                                          uVar14 = *(undefined8 *)PTR_DAT_07103458;
                                                          *(undefined8 *)(param_1 + 0x11b8) = 0x6fb7
                                                          ;
                                                          *(undefined8 *)(param_1 + 0x11b0) = uVar14
                                                          ;
                                                          if (0x11a < uVar13) {
                                                            uVar14 = *(undefined8 *)PTR_DAT_071031b0
                                                            ;
                                                            *(undefined8 *)(param_1 + 0x11c8) =
                                                                 0x551;
                                                            *(undefined8 *)(param_1 + 0x11c0) =
                                                                 uVar14;
                                                            if (uVar13 != 0x11b) {
                                                              uVar14 = *(undefined8 *)
                                                                        PTR_DAT_07102c00;
                                                              *(undefined8 *)(param_1 + 0x11d8) =
                                                                   0x5182;
                                                              *(undefined8 *)(param_1 + 0x11d0) =
                                                                   uVar14;
                                                              if (0x11c < uVar13) {
                                                                uVar14 = *(undefined8 *)
                                                                          PTR_DAT_07102f30;
                                                                *(undefined8 *)(param_1 + 0x11e8) =
                                                                     0x5182;
                                                                *(undefined8 *)(param_1 + 0x11e0) =
                                                                     uVar14;
                                                                if (uVar13 != 0x11d) {
                                                                  uVar14 = *(undefined8 *)
                                                                            PTR_DAT_071033e8;
                                                                  *(undefined8 *)(param_1 + 0x11f8)
                                                                       = 0x5182;
                                                                  *(undefined8 *)(param_1 + 0x11f0)
                                                                       = uVar14;
                                                                  if (0x11e < uVar13) {
                                                                    uVar14 = *(undefined8 *)
                                                                              PTR_DAT_071028a0;
                                                                    *(undefined8 *)
                                                                     (param_1 + 0x1208) = 0x556a;
                                                                    *(undefined8 *)
                                                                     (param_1 + 0x1200) = uVar14;
                                                                    if (uVar13 != 0x11f) {
                                                                      uVar14 = *(undefined8 *)
                                                                                PTR_DAT_07102990;
                                                                      *(undefined8 *)
                                                                       (param_1 + 0x1218) = 0x556a;
                                                                      *(undefined8 *)
                                                                       (param_1 + 0x1210) = uVar14;
                                                                      if (0x120 < uVar13) {
                                                                        uVar14 = *(undefined8 *)
                                                                                  PTR_DAT_07102c10;
                                                                        *(undefined8 *)
                                                                         (param_1 + 0x1228) = 0x5182
                                                                        ;
                                                                        *(undefined8 *)
                                                                         (param_1 + 0x1220) = uVar14
                                                                        ;
                                                                        if (uVar13 != 0x121) {
                                                                          uVar14 = *(undefined8 *)
                                                                                    PTR_DAT_07103060
                                                                          ;
                                                                          *(undefined8 *)
                                                                           (param_1 + 0x1238) =
                                                                               0x3b5;
                                                                          *(undefined8 *)
                                                                           (param_1 + 0x1230) =
                                                                               uVar14;
                                                                          if (0x122 < uVar13) {
                                                                            uVar14 = *(undefined8 *)
                                                                                                                                                                            
                                                  PTR_DAT_07102e68;
                                                  *(undefined8 *)(param_1 + 0x1248) = 0x3b5;
                                                  *(undefined8 *)(param_1 + 0x1240) = uVar14;
                                                  if (uVar13 != 0x123) {
                                                    uVar14 = *(undefined8 *)PTR_DAT_07102d90;
                                                    *(undefined8 *)(param_1 + 0x1258) = 0x3b5;
                                                    *(undefined8 *)(param_1 + 0x1250) = uVar14;
                                                    if (0x124 < uVar13) {
                                                      uVar14 = *(undefined8 *)PTR_DAT_07102db8;
                                                      *(undefined8 *)(param_1 + 0x1268) = 0x3b5;
                                                      *(undefined8 *)(param_1 + 0x1260) = uVar14;
                                                      if (uVar13 != 0x125) {
                                                        uVar14 = *(undefined8 *)PTR_DAT_07102a78;
                                                        *(undefined8 *)(param_1 + 0x1278) = 0x3b5;
                                                        *(undefined8 *)(param_1 + 0x1270) = uVar14;
                                                        if (0x126 < uVar13) {
                                                          uVar14 = *(undefined8 *)PTR_DAT_07103178;
                                                          *(undefined8 *)(param_1 + 0x1288) = 0x3b5;
                                                          *(undefined8 *)(param_1 + 0x1280) = uVar14
                                                          ;
                                                          if (uVar13 != 0x127) {
                                                            uVar14 = *(undefined8 *)PTR_DAT_071029f0
                                                            ;
                                                            *(undefined8 *)(param_1 + 0x1298) =
                                                                 0x3b5;
                                                            *(undefined8 *)(param_1 + 0x1290) =
                                                                 uVar14;
                                                            if (0x128 < uVar13) {
                                                              uVar14 = *(undefined8 *)
                                                                        PTR_DAT_07102868;
                                                              *(undefined8 *)(param_1 + 0x12a8) =
                                                                   0x3b5;
                                                              *(undefined8 *)(param_1 + 0x12a0) =
                                                                   uVar14;
                                                              if (uVar13 != 0x129) {
                                                                uVar14 = *(undefined8 *)
                                                                          PTR_DAT_071027f8;
                                                                *(undefined8 *)(param_1 + 0x12b8) =
                                                                     0x3b5;
                                                                *(undefined8 *)(param_1 + 0x12b0) =
                                                                     uVar14;
                                                                if (0x12a < uVar13) {
                                                                  uVar14 = *(undefined8 *)
                                                                            PTR_DAT_071033d0;
                                                                  *(undefined8 *)(param_1 + 0x12c8)
                                                                       = 0x6faf;
                                                                  *(undefined8 *)(param_1 + 0x12c0)
                                                                       = uVar14;
                                                                  if (uVar13 != 299) {
                                                                    uVar14 = *(undefined8 *)
                                                                              PTR_DAT_07102e10;
                                                                    *(undefined8 *)
                                                                     (param_1 + 0x12d8) = 0x6fb0;
                                                                    *(undefined8 *)
                                                                     (param_1 + 0x12d0) = uVar14;
                                                                    if (300 < uVar13) {
                                                                      uVar14 = *(undefined8 *)
                                                                                PTR_DAT_07102998;
                                                                      *(undefined8 *)
                                                                       (param_1 + 0x12e8) = 0x6fb1;
                                                                      *(undefined8 *)
                                                                       (param_1 + 0x12e0) = uVar14;
                                                                      if (uVar13 != 0x12d) {
                                                                        uVar14 = *(undefined8 *)
                                                                                  PTR_DAT_071031d0;
                                                                        *(undefined8 *)
                                                                         (param_1 + 0x12f8) = 0x6fb2
                                                                        ;
                                                                        *(undefined8 *)
                                                                         (param_1 + 0x12f0) = uVar14
                                                                        ;
                                                                        if (0x12e < uVar13) {
                                                                          uVar14 = *(undefined8 *)
                                                                                    PTR_DAT_07103238
                                                                          ;
                                                                          *(undefined8 *)
                                                                           (param_1 + 0x1308) =
                                                                               0x6fb7;
                                                                          *(undefined8 *)
                                                                           (param_1 + 0x1300) =
                                                                               uVar14;
                                                                          if (uVar13 != 0x12f) {
                                                                            uVar14 = *(undefined8 *)
                                                                                                                                                                            
                                                  PTR_DAT_07103490;
                                                  *(undefined8 *)(param_1 + 0x1318) = 0x6fbd;
                                                  *(undefined8 *)(param_1 + 0x1310) = uVar14;
                                                  if (0x130 < uVar13) {
                                                    uVar14 = *(undefined8 *)PTR_DAT_07102af8;
                                                    *(undefined8 *)(param_1 + 0x1328) = 0x6faf;
                                                    *(undefined8 *)(param_1 + 0x1320) = uVar14;
                                                    if (uVar13 != 0x131) {
                                                      uVar14 = *(undefined8 *)PTR_DAT_07102d78;
                                                      *(undefined8 *)(param_1 + 0x1338) = 0x6fb0;
                                                      *(undefined8 *)(param_1 + 0x1330) = uVar14;
                                                      if (0x132 < uVar13) {
                                                        uVar14 = *(undefined8 *)PTR_DAT_071030c8;
                                                        *(undefined8 *)(param_1 + 0x1348) = 0x6fb1;
                                                        *(undefined8 *)(param_1 + 0x1340) = uVar14;
                                                        if (uVar13 != 0x133) {
                                                          uVar14 = *(undefined8 *)PTR_DAT_07102a38;
                                                          *(undefined8 *)(param_1 + 0x1358) = 0x6fb2
                                                          ;
                                                          *(undefined8 *)(param_1 + 0x1350) = uVar14
                                                          ;
                                                          if (0x134 < uVar13) {
                                                            uVar14 = *(undefined8 *)PTR_DAT_07102b28
                                                            ;
                                                            *(undefined8 *)(param_1 + 0x1368) =
                                                                 0x6fb7;
                                                            *(undefined8 *)(param_1 + 0x1360) =
                                                                 uVar14;
                                                            if (uVar13 != 0x135) {
                                                              uVar14 = *(undefined8 *)
                                                                        PTR_DAT_07102c68;
                                                              *(undefined8 *)(param_1 + 0x1378) =
                                                                   0x6fbd;
                                                              *(undefined8 *)(param_1 + 0x1370) =
                                                                   uVar14;
                                                              if (0x136 < uVar13) {
                                                                uVar14 = *(undefined8 *)
                                                                          PTR_DAT_071034d0;
                                                                *(undefined8 *)(param_1 + 5000) =
                                                                     0x6fb6;
                                                                *(undefined8 *)(param_1 + 0x1380) =
                                                                     uVar14;
                                                                if (uVar13 != 0x137) {
                                                                  uVar14 = *(undefined8 *)
                                                                            PTR_DAT_07102fe8;
                                                                  *(undefined8 *)(param_1 + 0x1398)
                                                                       = 10000;
                                                                  *(undefined8 *)(param_1 + 0x1390)
                                                                       = uVar14;
                                                                  if (0x138 < uVar13) {
                                                                    uVar14 = *(undefined8 *)
                                                                              PTR_DAT_071028c8;
                                                                    *(undefined8 *)
                                                                     (param_1 + 0x13a8) = 0x3a4;
                                                                    *(undefined8 *)
                                                                     (param_1 + 0x13a0) = uVar14;
                                                                    if (uVar13 != 0x139) {
                                                                      uVar14 = *(undefined8 *)
                                                                                PTR_DAT_07103420;
                                                                      *(undefined8 *)
                                                                       (param_1 + 0x13b8) = 0x4e8c;
                                                                      *(undefined8 *)
                                                                       (param_1 + 0x13b0) = uVar14;
                                                                      if (0x13a < uVar13) {
                                                                        uVar14 = *(undefined8 *)
                                                                                  PTR_DAT_07102800;
                                                                        *(undefined8 *)
                                                                         (param_1 + 0x13c8) = 0x4e8c
                                                                        ;
                                                                        *(undefined8 *)
                                                                         (param_1 + 0x13c0) = uVar14
                                                                        ;
                                                                        if (uVar13 != 0x13b) {
                                                                          uVar14 = *(undefined8 *)
                                                                                    PTR_DAT_07102b00
                                                                          ;
                                                                          *(undefined8 *)
                                                                           (param_1 + 0x13d8) =
                                                                               0x35a;
                                                                          *(undefined8 *)
                                                                           (param_1 + 0x13d0) =
                                                                               uVar14;
                                                                          if (0x13c < uVar13) {
                                                                            uVar14 = *(undefined8 *)
                                                                                                                                                                            
                                                  PTR_DAT_071032b8;
                                                  *(undefined8 *)(param_1 + 0x13e8) = 0x4e8b;
                                                  *(undefined8 *)(param_1 + 0x13e0) = uVar14;
                                                  if (uVar13 != 0x13d) {
                                                    uVar14 = *(undefined8 *)PTR_DAT_07102d60;
                                                    *(undefined8 *)(param_1 + 0x13f8) = 0x3a4;
                                                    *(undefined8 *)(param_1 + 0x13f0) = uVar14;
                                                    if (0x13e < uVar13) {
                                                      uVar14 = *(undefined8 *)PTR_DAT_07102a70;
                                                      *(undefined8 *)(param_1 + 0x1408) = 0x3a4;
                                                      *(undefined8 *)(param_1 + 0x1400) = uVar14;
                                                      if (uVar13 != 0x13f) {
                                                        uVar14 = *(undefined8 *)PTR_DAT_07102d28;
                                                        *(undefined8 *)(param_1 + 0x1418) = 0x3a4;
                                                        *(undefined8 *)(param_1 + 0x1410) = uVar14;
                                                        if (0x140 < uVar13) {
                                                          uVar14 = *(undefined8 *)PTR_DAT_07102cb0;
                                                          *(undefined8 *)(param_1 + 0x1428) = 0x4e8b
                                                          ;
                                                          *(undefined8 *)(param_1 + 0x1420) = uVar14
                                                          ;
                                                          if (uVar13 != 0x141) {
                                                            uVar14 = *(undefined8 *)PTR_DAT_071029d0
                                                            ;
                                                            *(undefined8 *)(param_1 + 0x1438) =
                                                                 0x36a;
                                                            *(undefined8 *)(param_1 + 0x1430) =
                                                                 uVar14;
                                                            if (0x142 < uVar13) {
                                                              uVar14 = *(undefined8 *)
                                                                        PTR_DAT_07103228;
                                                              *(undefined8 *)(param_1 + 0x1448) =
                                                                   0x4b0;
                                                              *(undefined8 *)(param_1 + 0x1440) =
                                                                   uVar14;
                                                              if (uVar13 != 0x143) {
                                                                uVar14 = *(undefined8 *)
                                                                          PTR_DAT_07102fa8;
                                                                *(undefined8 *)(param_1 + 0x1458) =
                                                                     0x4b0;
                                                                *(undefined8 *)(param_1 + 0x1450) =
                                                                     uVar14;
                                                                if (0x144 < uVar13) {
                                                                  uVar14 = *(undefined8 *)
                                                                            PTR_DAT_07102fd0;
                                                                  *(undefined8 *)(param_1 + 0x1468)
                                                                       = 65000;
                                                                  *(undefined8 *)(param_1 + 0x1460)
                                                                       = uVar14;
                                                                  if (uVar13 != 0x145) {
                                                                    uVar14 = *(undefined8 *)
                                                                              PTR_DAT_07102a40;
                                                                    *(undefined8 *)
                                                                     (param_1 + 0x1478) = 0xfde9;
                                                                    *(undefined8 *)
                                                                     (param_1 + 0x1470) = uVar14;
                                                                    if (0x146 < uVar13) {
                                                                      uVar14 = *(undefined8 *)
                                                                                PTR_DAT_07102a58;
                                                                      *(undefined8 *)
                                                                       (param_1 + 0x1488) = 65000;
                                                                      *(undefined8 *)
                                                                       (param_1 + 0x1480) = uVar14;
                                                                      if (uVar13 != 0x147) {
                                                                        uVar14 = *(undefined8 *)
                                                                                  PTR_DAT_07102e48;
                                                                        *(undefined8 *)
                                                                         (param_1 + 0x1498) = 0xfde9
                                                                        ;
                                                                        *(undefined8 *)
                                                                         (param_1 + 0x1490) = uVar14
                                                                        ;
                                                                        if (0x148 < uVar13) {
                                                                          uVar14 = *(undefined8 *)
                                                                                    PTR_DAT_07102ca8
                                                                          ;
                                                                          *(undefined8 *)
                                                                           (param_1 + 0x14a8) =
                                                                               0x4b1;
                                                                          *(undefined8 *)
                                                                           (param_1 + 0x14a0) =
                                                                               uVar14;
                                                                          if (uVar13 != 0x149) {
                                                                            uVar14 = *(undefined8 *)
                                                                                                                                                                            
                                                  PTR_DAT_07102c70;
                                                  *(undefined8 *)(param_1 + 0x14b8) = 0x4e9f;
                                                  *(undefined8 *)(param_1 + 0x14b0) = uVar14;
                                                  if (0x14a < uVar13) {
                                                    uVar14 = *(undefined8 *)PTR_DAT_07103068;
                                                    *(undefined8 *)(param_1 + 0x14c8) = 0x4e9f;
                                                    *(undefined8 *)(param_1 + 0x14c0) = uVar14;
                                                    if (uVar13 != 0x14b) {
                                                      uVar14 = *(undefined8 *)PTR_DAT_07102ab8;
                                                      *(undefined8 *)(param_1 + 0x14d8) = 0x4b0;
                                                      *(undefined8 *)(param_1 + 0x14d0) = uVar14;
                                                      if (0x14c < uVar13) {
                                                        uVar14 = *(undefined8 *)PTR_DAT_071030e0;
                                                        *(undefined8 *)(param_1 + 0x14e8) = 0x4b1;
                                                        *(undefined8 *)(param_1 + 0x14e0) = uVar14;
                                                        if (uVar13 != 0x14d) {
                                                          uVar14 = *(undefined8 *)PTR_DAT_07103440;
                                                          *(undefined8 *)(param_1 + 0x14f8) = 0x4b0;
                                                          *(undefined8 *)(param_1 + 0x14f0) = uVar14
                                                          ;
                                                          if (0x14e < uVar13) {
                                                            uVar14 = *(undefined8 *)PTR_DAT_071032d8
                                                            ;
                                                            *(undefined8 *)(param_1 + 0x1508) =
                                                                 12000;
                                                            *(undefined8 *)(param_1 + 0x1500) =
                                                                 uVar14;
                                                            if (uVar13 != 0x14f) {
                                                              uVar14 = *(undefined8 *)
                                                                        PTR_DAT_071032e8;
                                                              *(undefined8 *)(param_1 + 0x1518) =
                                                                   0x2ee1;
                                                              *(undefined8 *)(param_1 + 0x1510) =
                                                                   uVar14;
                                                              if (0x150 < uVar13) {
                                                                uVar14 = *(undefined8 *)
                                                                          PTR_DAT_07103400;
                                                                *(undefined8 *)(param_1 + 0x1528) =
                                                                     12000;
                                                                *(undefined8 *)(param_1 + 0x1520) =
                                                                     uVar14;
                                                                if (uVar13 != 0x151) {
                                                                  uVar14 = *(undefined8 *)
                                                                            PTR_DAT_07102d00;
                                                                  *(undefined8 *)(param_1 + 0x1538)
                                                                       = 65000;
                                                                  *(undefined8 *)(param_1 + 0x1530)
                                                                       = uVar14;
                                                                  if (0x152 < uVar13) {
                                                                    uVar14 = *(undefined8 *)
                                                                              PTR_DAT_070c2af0;
                                                                    *(undefined8 *)
                                                                     (param_1 + 0x1548) = 0xfde9;
                                                                    *(undefined8 *)
                                                                     (param_1 + 0x1540) = uVar14;
                                                                    if (uVar13 != 0x153) {
                                                                      uVar14 = *(undefined8 *)
                                                                                PTR_DAT_071031f0;
                                                                      *(undefined8 *)
                                                                       (param_1 + 0x1558) = 0x6fb6;
                                                                      *(undefined8 *)
                                                                       (param_1 + 0x1550) = uVar14;
                                                                      if (0x154 < uVar13) {
                                                                        uVar14 = *(undefined8 *)
                                                                                  PTR_DAT_07102fa0;
                                                                        *(undefined8 *)
                                                                         (param_1 + 0x1568) = 0x4e2;
                                                                        *(undefined8 *)
                                                                         (param_1 + 0x1560) = uVar14
                                                                        ;
                                                                        if (uVar13 != 0x155) {
                                                                          uVar14 = *(undefined8 *)
                                                                                    PTR_DAT_071033f0
                                                                          ;
                                                                          *(undefined8 *)
                                                                           (param_1 + 0x1578) =
                                                                               0x4e3;
                                                                          *(undefined8 *)
                                                                           (param_1 + 0x1570) =
                                                                               uVar14;
                                                                          if (0x156 < uVar13) {
                                                                            uVar14 = *(undefined8 *)
                                                                                                                                                                            
                                                  PTR_DAT_071030d0;
                                                  *(undefined8 *)(param_1 + 0x1588) = 0x4e4;
                                                  *(undefined8 *)(param_1 + 0x1580) = uVar14;
                                                  if (uVar13 != 0x157) {
                                                    uVar14 = *(undefined8 *)PTR_DAT_07103058;
                                                    *(undefined8 *)(param_1 + 0x1598) = 0x4e5;
                                                    *(undefined8 *)(param_1 + 0x1590) = uVar14;
                                                    if (0x158 < uVar13) {
                                                      uVar14 = *(undefined8 *)PTR_DAT_07103410;
                                                      *(undefined8 *)(param_1 + 0x15a8) = 0x4e6;
                                                      *(undefined8 *)(param_1 + 0x15a0) = uVar14;
                                                      if (uVar13 != 0x159) {
                                                        uVar14 = *(undefined8 *)PTR_DAT_07102bf0;
                                                        *(undefined8 *)(param_1 + 0x15b8) = 0x4e7;
                                                        *(undefined8 *)(param_1 + 0x15b0) = uVar14;
                                                        if (0x15a < uVar13) {
                                                          uVar14 = *(undefined8 *)PTR_DAT_07102de8;
                                                          *(undefined8 *)(param_1 + 0x15c8) = 0x4e8;
                                                          *(undefined8 *)(param_1 + 0x15c0) = uVar14
                                                          ;
                                                          if (uVar13 != 0x15b) {
                                                            uVar14 = *(undefined8 *)PTR_DAT_07102da8
                                                            ;
                                                            *(undefined8 *)(param_1 + 0x15d8) =
                                                                 0x4e9;
                                                            *(undefined8 *)(param_1 + 0x15d0) =
                                                                 uVar14;
                                                            if (0x15c < uVar13) {
                                                              uVar14 = *(undefined8 *)
                                                                        PTR_DAT_07102850;
                                                              *(undefined8 *)(param_1 + 0x15e8) =
                                                                   0x4ea;
                                                              *(undefined8 *)(param_1 + 0x15e0) =
                                                                   uVar14;
                                                              if (uVar13 != 0x15d) {
                                                                uVar14 = *(undefined8 *)
                                                                          PTR_DAT_07103048;
                                                                *(undefined8 *)(param_1 + 0x15f8) =
                                                                     0x36a;
                                                                *(undefined8 *)(param_1 + 0x15f0) =
                                                                     uVar14;
                                                                if (0x15e < uVar13) {
                                                                  uVar14 = *(undefined8 *)
                                                                            PTR_DAT_07103470;
                                                                  *(undefined8 *)(param_1 + 0x1608)
                                                                       = 0x4e4;
                                                                  *(undefined8 *)(param_1 + 0x1600)
                                                                       = uVar14;
                                                                  if (uVar13 != 0x15f) {
                                                                    uVar14 = *(undefined8 *)
                                                                              PTR_DAT_07102d10;
                                                                    *(undefined8 *)
                                                                     (param_1 + 0x1618) = 20000;
                                                                    *(undefined8 *)
                                                                     (param_1 + 0x1610) = uVar14;
                                                                    if (0x160 < uVar13) {
                                                                      uVar14 = *(undefined8 *)
                                                                                PTR_DAT_071032e0;
                                                                      *(undefined8 *)
                                                                       (param_1 + 0x1628) = 0x4e22;
                                                                      *(undefined8 *)
                                                                       (param_1 + 0x1620) = uVar14;
                                                                      if (uVar13 != 0x161) {
                                                                        uVar14 = *(undefined8 *)
                                                                                  PTR_DAT_07102950;
                                                                        *(undefined8 *)
                                                                         (param_1 + 0x1638) = 0x4e2;
                                                                        *(undefined8 *)
                                                                         (param_1 + 0x1630) = uVar14
                                                                        ;
                                                                        if (0x162 < uVar13) {
                                                                          uVar14 = *(undefined8 *)
                                                                                    PTR_DAT_07102f28
                                                                          ;
                                                                          *(undefined8 *)
                                                                           (param_1 + 0x1648) =
                                                                               0x4e3;
                                                                          *(undefined8 *)
                                                                           (param_1 + 0x1640) =
                                                                               uVar14;
                                                                          if (uVar13 != 0x163) {
                                                                            uVar14 = *(undefined8 *)
                                                                                                                                                                            
                                                  PTR_DAT_07102a98;
                                                  *(undefined8 *)(param_1 + 0x1658) = 0x4e21;
                                                  *(undefined8 *)(param_1 + 0x1650) = uVar14;
                                                  if (0x164 < uVar13) {
                                                    uVar14 = *(undefined8 *)PTR_DAT_071030b0;
                                                    *(undefined8 *)(param_1 + 0x1668) = 0x4e23;
                                                    *(undefined8 *)(param_1 + 0x1660) = uVar14;
                                                    if (uVar13 != 0x165) {
                                                      uVar14 = *(undefined8 *)PTR_DAT_07102f10;
                                                      *(undefined8 *)(param_1 + 0x1678) = 0x4e24;
                                                      *(undefined8 *)(param_1 + 0x1670) = uVar14;
                                                      if (0x166 < uVar13) {
                                                        uVar14 = *(undefined8 *)PTR_DAT_071029d8;
                                                        *(undefined8 *)(param_1 + 0x1688) = 0x4e25;
                                                        *(undefined8 *)(param_1 + 0x1680) = uVar14;
                                                        if (uVar13 != 0x167) {
                                                          uVar14 = *(undefined8 *)PTR_DAT_07102c50;
                                                          *(undefined8 *)(param_1 + 0x1698) = 0x4f25
                                                          ;
                                                          *(undefined8 *)(param_1 + 0x1690) = uVar14
                                                          ;
                                                          if (0x168 < uVar13) {
                                                            uVar14 = *(undefined8 *)PTR_DAT_07103418
                                                            ;
                                                            *(undefined8 *)(param_1 + 0x16a8) =
                                                                 0x4f2d;
                                                            *(undefined8 *)(param_1 + 0x16a0) =
                                                                 uVar14;
                                                            if (uVar13 != 0x169) {
                                                              uVar14 = *(undefined8 *)
                                                                        PTR_DAT_07102d70;
                                                              *(undefined8 *)(param_1 + 0x16b8) =
                                                                   0x51c8;
                                                              *(undefined8 *)(param_1 + 0x16b0) =
                                                                   uVar14;
                                                              if (0x16a < uVar13) {
                                                                uVar14 = *(undefined8 *)
                                                                          PTR_DAT_07102870;
                                                                *(undefined8 *)(param_1 + 0x16c8) =
                                                                     0x51d5;
                                                                *(undefined8 *)(param_1 + 0x16c0) =
                                                                     uVar14;
                                                                if (uVar13 != 0x16b) {
                                                                  uVar14 = *(undefined8 *)
                                                                            PTR_DAT_07102840;
                                                                  *(undefined8 *)(param_1 + 0x16d8)
                                                                       = 0xc433;
                                                                  *(undefined8 *)(param_1 + 0x16d0)
                                                                       = uVar14;
                                                                  if (0x16c < uVar13) {
                                                                    uVar14 = *(undefined8 *)
                                                                              PTR_DAT_07102f90;
                                                                    *(undefined8 *)
                                                                     (param_1 + 0x16e8) = 0x5161;
                                                                    *(undefined8 *)
                                                                     (param_1 + 0x16e0) = uVar14;
                                                                    if (uVar13 != 0x16d) {
                                                                      uVar14 = *(undefined8 *)
                                                                                PTR_DAT_07102900;
                                                                      *(undefined8 *)
                                                                       (param_1 + 0x16f8) = 0xcadc;
                                                                      *(undefined8 *)
                                                                       (param_1 + 0x16f0) = uVar14;
                                                                      if (0x16e < uVar13) {
                                                                        uVar14 = *(undefined8 *)
                                                                                  PTR_DAT_07103318;
                                                                        *(undefined8 *)
                                                                         (param_1 + 0x1708) = 0xcae0
                                                                        ;
                                                                        *(undefined8 *)
                                                                         (param_1 + 0x1700) = uVar14
                                                                        ;
                                                                        if (uVar13 != 0x16f) {
                                                                          uVar14 = *(undefined8 *)
                                                                                    PTR_DAT_071033b0
                                                                          ;
                                                                          *(undefined8 *)
                                                                           (param_1 + 0x1718) =
                                                                               0xcadc;
                                                                          *(undefined8 *)
                                                                           (param_1 + 0x1710) =
                                                                               uVar14;
                                                                          if (0x170 < uVar13) {
                                                                            uVar14 = *(undefined8 *)
                                                                                                                                                                            
                                                  PTR_DAT_07103300;
                                                  *(undefined8 *)(param_1 + 0x1728) = 0x7149;
                                                  *(undefined8 *)(param_1 + 0x1720) = uVar14;
                                                  if (uVar13 != 0x171) {
                                                    uVar14 = *(undefined8 *)PTR_DAT_071027e8;
                                                    *(undefined8 *)(param_1 + 0x1738) = 0x4e89;
                                                    *(undefined8 *)(param_1 + 0x1730) = uVar14;
                                                    if (0x172 < uVar13) {
                                                      uVar14 = *(undefined8 *)PTR_DAT_07102b20;
                                                      *(undefined8 *)(param_1 + 0x1748) = 0x4e8a;
                                                      *(undefined8 *)(param_1 + 0x1740) = uVar14;
                                                      if (uVar13 != 0x173) {
                                                        uVar14 = *(undefined8 *)PTR_DAT_071032a8;
                                                        *(undefined8 *)(param_1 + 0x1758) = 0x4e8c;
                                                        *(undefined8 *)(param_1 + 0x1750) = uVar14;
                                                        if (0x174 < uVar13) {
                                                          uVar14 = *(undefined8 *)PTR_DAT_07103258;
                                                          *(undefined8 *)(param_1 + 0x1768) = 0x4e8b
                                                          ;
                                                          *(undefined8 *)(param_1 + 0x1760) = uVar14
                                                          ;
                                                          if (uVar13 != 0x175) {
                                                            uVar14 = *(undefined8 *)PTR_DAT_07102b90
                                                            ;
                                                            *(undefined8 *)(param_1 + 0x1778) =
                                                                 0xdeae;
                                                            *(undefined8 *)(param_1 + 6000) = uVar14
                                                            ;
                                                            if (0x176 < uVar13) {
                                                              uVar14 = *(undefined8 *)
                                                                        PTR_DAT_07102890;
                                                              *(undefined8 *)(param_1 + 0x1788) =
                                                                   0xdeab;
                                                              *(undefined8 *)(param_1 + 0x1780) =
                                                                   uVar14;
                                                              if (uVar13 != 0x177) {
                                                                uVar14 = *(undefined8 *)
                                                                          PTR_DAT_07102df0;
                                                                *(undefined8 *)(param_1 + 0x1798) =
                                                                     0xdeaa;
                                                                *(undefined8 *)(param_1 + 0x1790) =
                                                                     uVar14;
                                                                if (0x178 < uVar13) {
                                                                  uVar14 = *(undefined8 *)
                                                                            PTR_DAT_07102860;
                                                                  *(undefined8 *)(param_1 + 0x17a8)
                                                                       = 0xdeb2;
                                                                  *(undefined8 *)(param_1 + 0x17a0)
                                                                       = uVar14;
                                                                  if (uVar13 != 0x179) {
                                                                    uVar14 = *(undefined8 *)
                                                                              PTR_DAT_07102a90;
                                                                    *(undefined8 *)
                                                                     (param_1 + 0x17b8) = 0xdeb0;
                                                                    *(undefined8 *)
                                                                     (param_1 + 0x17b0) = uVar14;
                                                                    if (0x17a < uVar13) {
                                                                      uVar14 = *(undefined8 *)
                                                                                PTR_DAT_07103388;
                                                                      *(undefined8 *)
                                                                       (param_1 + 0x17c8) = 0xdeb1;
                                                                      *(undefined8 *)
                                                                       (param_1 + 0x17c0) = uVar14;
                                                                      if (uVar13 != 0x17b) {
                                                                        uVar14 = *(undefined8 *)
                                                                                  PTR_DAT_07102fe0;
                                                                        *(undefined8 *)
                                                                         (param_1 + 0x17d8) = 0xdeaf
                                                                        ;
                                                                        *(undefined8 *)
                                                                         (param_1 + 0x17d0) = uVar14
                                                                        ;
                                                                        if (0x17c < uVar13) {
                                                                          uVar14 = *(undefined8 *)
                                                                                    PTR_DAT_071031c8
                                                                          ;
                                                                          *(undefined8 *)
                                                                           (param_1 + 0x17e8) =
                                                                               0xdeb3;
                                                                          *(undefined8 *)
                                                                           (param_1 + 0x17e0) =
                                                                               uVar14;
                                                                          if (uVar13 != 0x17d) {
                                                                            uVar14 = *(undefined8 *)
                                                                                                                                                                            
                                                  PTR_DAT_07103028;
                                                  *(undefined8 *)(param_1 + 0x17f8) = 0xdeac;
                                                  *(undefined8 *)(param_1 + 0x17f0) = uVar14;
                                                  if (0x17e < uVar13) {
                                                    uVar14 = *(undefined8 *)PTR_DAT_07103148;
                                                    *(undefined8 *)(param_1 + 0x1808) = 0xdead;
                                                    *(undefined8 *)(param_1 + 0x1800) = uVar14;
                                                    if (uVar13 != 0x17f) {
                                                      uVar14 = *(undefined8 *)PTR_DAT_07102d08;
                                                      *(undefined8 *)(param_1 + 0x1818) = 0x2714;
                                                      *(undefined8 *)(param_1 + 0x1810) = uVar14;
                                                      if (0x180 < uVar13) {
                                                        uVar14 = *(undefined8 *)PTR_DAT_07102d58;
                                                        *(undefined8 *)(param_1 + 0x1828) = 0x272d;
                                                        *(undefined8 *)(param_1 + 0x1820) = uVar14;
                                                        if (uVar13 != 0x181) {
                                                          uVar14 = *(undefined8 *)PTR_DAT_07102b10;
                                                          *(undefined8 *)(param_1 + 0x1838) = 0x2718
                                                          ;
                                                          *(undefined8 *)(param_1 + 0x1830) = uVar14
                                                          ;
                                                          if (0x182 < uVar13) {
                                                            uVar14 = *(undefined8 *)PTR_DAT_07103140
                                                            ;
                                                            *(undefined8 *)(param_1 + 0x1848) =
                                                                 0x2712;
                                                            *(undefined8 *)(param_1 + 0x1840) =
                                                                 uVar14;
                                                            if (uVar13 != 0x183) {
                                                              uVar14 = *(undefined8 *)
                                                                        PTR_DAT_071028f0;
                                                              *(undefined8 *)(param_1 + 0x1858) =
                                                                   0x2762;
                                                              *(undefined8 *)(param_1 + 0x1850) =
                                                                   uVar14;
                                                              if (0x184 < uVar13) {
                                                                uVar14 = *(undefined8 *)
                                                                          PTR_DAT_07102960;
                                                                *(undefined8 *)(param_1 + 0x1868) =
                                                                     0x2717;
                                                                *(undefined8 *)(param_1 + 0x1860) =
                                                                     uVar14;
                                                                if (uVar13 != 0x185) {
                                                                  uVar14 = *(undefined8 *)
                                                                            PTR_DAT_071028e0;
                                                                  *(undefined8 *)(param_1 + 0x1878)
                                                                       = 0x2716;
                                                                  *(undefined8 *)(param_1 + 0x1870)
                                                                       = uVar14;
                                                                  if (0x186 < uVar13) {
                                                                    uVar14 = *(undefined8 *)
                                                                              PTR_DAT_07102f70;
                                                                    *(undefined8 *)
                                                                     (param_1 + 0x1888) = 0x2715;
                                                                    *(undefined8 *)
                                                                     (param_1 + 0x1880) = uVar14;
                                                                    if (uVar13 != 0x187) {
                                                                      uVar14 = *(undefined8 *)
                                                                                PTR_DAT_07102e80;
                                                                      *(undefined8 *)
                                                                       (param_1 + 0x1898) = 0x275f;
                                                                      *(undefined8 *)
                                                                       (param_1 + 0x1890) = uVar14;
                                                                      if (0x188 < uVar13) {
                                                                        uVar14 = *(undefined8 *)
                                                                                  PTR_DAT_07102f40;
                                                                        *(undefined8 *)
                                                                         (param_1 + 0x18a8) = 0x2711
                                                                        ;
                                                                        *(undefined8 *)
                                                                         (param_1 + 0x18a0) = uVar14
                                                                        ;
                                                                        if (uVar13 != 0x189) {
                                                                          uVar14 = *(undefined8 *)
                                                                                    PTR_DAT_07103128
                                                                          ;
                                                                          *(undefined8 *)
                                                                           (param_1 + 0x18b8) =
                                                                               0x2713;
                                                                          *(undefined8 *)
                                                                           (param_1 + 0x18b0) =
                                                                               uVar14;
                                                                          if (0x18a < uVar13) {
                                                                            uVar14 = *(undefined8 *)
                                                                                                                                                                            
                                                  PTR_DAT_07102f60;
                                                  *(undefined8 *)(param_1 + 0x18c8) = 0x271a;
                                                  *(undefined8 *)(param_1 + 0x18c0) = uVar14;
                                                  if (uVar13 != 0x18b) {
                                                    uVar14 = *(undefined8 *)PTR_DAT_07102ae8;
                                                    *(undefined8 *)(param_1 + 0x18d8) = 0x2725;
                                                    *(undefined8 *)(param_1 + 0x18d0) = uVar14;
                                                    if (0x18c < uVar13) {
                                                      uVar14 = *(undefined8 *)PTR_DAT_07103120;
                                                      *(undefined8 *)(param_1 + 0x18e8) = 0x2761;
                                                      *(undefined8 *)(param_1 + 0x18e0) = uVar14;
                                                      if (uVar13 != 0x18d) {
                                                        uVar14 = *(undefined8 *)PTR_DAT_07102ec0;
                                                        *(undefined8 *)(param_1 + 0x18f8) = 0x2721;
                                                        *(undefined8 *)(param_1 + 0x18f0) = uVar14;
                                                        if (0x18e < uVar13) {
                                                          uVar14 = *(undefined8 *)PTR_DAT_07103110;
                                                          *(undefined8 *)(param_1 + 0x1908) = 0x3a4;
                                                          *(undefined8 *)(param_1 + 0x1900) = uVar14
                                                          ;
                                                          if (uVar13 != 399) {
                                                            uVar14 = *(undefined8 *)PTR_DAT_07102a48
                                                            ;
                                                            *(undefined8 *)(param_1 + 0x1918) =
                                                                 0x3a4;
                                                            *(undefined8 *)(param_1 + 0x1910) =
                                                                 uVar14;
                                                            if (400 < uVar13) {
                                                              uVar14 = *(undefined8 *)
                                                                        PTR_DAT_07102e70;
                                                              *(undefined8 *)(param_1 + 0x1928) =
                                                                   65000;
                                                              *(undefined8 *)(param_1 + 0x1920) =
                                                                   uVar14;
                                                              if (uVar13 != 0x191) {
                                                                uVar14 = *(undefined8 *)
                                                                          PTR_DAT_071034b0;
                                                                *(undefined8 *)(param_1 + 0x1938) =
                                                                     0xfde9;
                                                                *(undefined8 *)(param_1 + 0x1930) =
                                                                     uVar14;
                                                                if (0x192 < uVar13) {
                                                                  uVar14 = *(undefined8 *)
                                                                            PTR_DAT_07102fb0;
                                                                  *(undefined8 *)(param_1 + 0x1948)
                                                                       = 65000;
                                                                  *(undefined8 *)(param_1 + 0x1940)
                                                                       = uVar14;
                                                                  if (uVar13 != 0x193) {
                                                                    uVar14 = *(undefined8 *)
                                                                              PTR_DAT_07102d20;
                                                                    *(undefined8 *)
                                                                     (param_1 + 0x1958) = 0xfde9;
                                                                    *(undefined8 *)
                                                                     (param_1 + 0x1950) = uVar14;
                                                                    puVar3 = PTR_DAT_070fc608;
                                                                    if (0x194 < uVar13) {
                                                                      uVar14 = *(undefined8 *)
                                                                                PTR_DAT_07103368;
                                                                      *(undefined8 *)
                                                                       (param_1 + 0x1968) = 0x3b6;
                                                                      *(undefined8 *)
                                                                       (param_1 + 0x1960) = uVar14;
                                                                      puVar8 = PTR_DAT_071027d8;
                                                                      **(long **)(*(long *)puVar3 +
                                                                                 0xb8) = param_1;
                                                                      lVar12 = FUN_03188b1c(*(
                                                  undefined8 *)puVar8,0x62);
                                                  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                                                    FUN_03188cd8();
                                                  }
                                                  uVar13 = (uint)*(ulong *)(lVar12 + 0x18);
                                                  if (uVar13 != 0) {
                                                    uVar14 = *(undefined8 *)puVar2;
                                                    *(undefined **)(lVar12 + 0x20) = &DAT_04e40025;
                                                    *(undefined8 *)(lVar12 + 0x28) = uVar14;
                                                    if (uVar13 != 1) {
                                                      uVar14 = *(undefined8 *)puVar4;
                                                      *(undefined8 *)(lVar12 + 0x30) = 0x4e401b5;
                                                      *(undefined8 *)(lVar12 + 0x38) = uVar14;
                                                      if (2 < uVar13) {
                                                        uVar14 = *(undefined8 *)puVar5;
                                                        *(undefined8 *)(lVar12 + 0x40) = 0x4e401f4;
                                                        *(undefined8 *)(lVar12 + 0x48) = uVar14;
                                                        if (uVar13 != 3) {
                                                          uVar14 = *unaff_x28;
                                                          *(undefined8 *)(lVar12 + 0x50) =
                                                               0x20204e802c4;
                                                          *(undefined8 *)(lVar12 + 0x58) = uVar14;
                                                          if (4 < uVar13) {
                                                            uVar14 = *(undefined8 *)puVar6;
                                                            *(undefined8 *)(lVar12 + 0x60) =
                                                                 0x4e502e1;
                                                            *(undefined8 *)(lVar12 + 0x68) = uVar14;
                                                            if (uVar13 != 5) {
                                                              uVar14 = *(undefined8 *)puVar7;
                                                              *(undefined8 *)(lVar12 + 0x70) =
                                                                   0x4e90307;
                                                              *(undefined8 *)(lVar12 + 0x78) =
                                                                   uVar14;
                                                              if (6 < uVar13) {
                                                                uVar14 = *(undefined8 *)
                                                                          PTR_DAT_07102b88;
                                                                *(undefined8 *)(lVar12 + 0x80) =
                                                                     0x4e40352;
                                                                *(undefined8 *)(lVar12 + 0x88) =
                                                                     uVar14;
                                                                if (uVar13 != 7) {
                                                                  uVar14 = *(undefined8 *)
                                                                            PTR_DAT_07102d88;
                                                                  *(undefined8 *)(lVar12 + 0x90) =
                                                                       0x20204e20354;
                                                                  *(undefined8 *)(lVar12 + 0x98) =
                                                                       uVar14;
                                                                  if (8 < uVar13) {
                                                                    uVar14 = *(undefined8 *)puVar9;
                                                                    *(undefined8 *)(lVar12 + 0xa0) =
                                                                         0x4e40357;
                                                                    *(undefined8 *)(lVar12 + 0xa8) =
                                                                         uVar14;
                                                                    if (uVar13 != 9) {
                                                                      uVar14 = *(undefined8 *)
                                                                                PTR_DAT_07102b48;
                                                                      *(undefined8 *)(lVar12 + 0xb0)
                                                                           = 0x4e60359;
                                                                      *(undefined8 *)(lVar12 + 0xb8)
                                                                           = uVar14;
                                                                      if (10 < uVar13) {
                                                                        uVar14 = *unaff_x25;
                                                                        *(undefined8 *)
                                                                         (lVar12 + 0xc0) = 0x4e4035a
                                                                        ;
                                                                        *(undefined8 *)
                                                                         (lVar12 + 200) = uVar14;
                                                                        if (uVar13 != 0xb) {
                                                                          uVar14 = *(undefined8 *)
                                                                                    puVar10;
                                                                          *(undefined8 *)
                                                                           (lVar12 + 0xd0) =
                                                                               0x4e4035c;
                                                                          *(undefined8 *)
                                                                           (lVar12 + 0xd8) = uVar14;
                                                                          if (0xc < uVar13) {
                                                                            uVar14 = *(undefined8 *)
                                                                                                                                                                            
                                                  PTR_DAT_07102da0;
                                                  *(undefined8 *)(lVar12 + 0xe0) = 0x4e4035d;
                                                  *(undefined8 *)(lVar12 + 0xe8) = uVar14;
                                                  if (uVar13 != 0xd) {
                                                    uVar14 = *unaff_x29;
                                                    *(undefined8 *)(lVar12 + 0xf0) = 0x20204e7035e;
                                                    *(undefined8 *)(lVar12 + 0xf8) = uVar14;
                                                    if (0xe < uVar13) {
                                                      uVar14 = *(undefined8 *)PTR_DAT_071033e0;
                                                      *(undefined8 *)(lVar12 + 0x100) = 0x4e4035f;
                                                      *(undefined8 *)(lVar12 + 0x108) = uVar14;
                                                      puVar2 = PTR_DAT_07103448;
                                                      if (uVar13 != 0xf) {
                                                        uVar14 = *(undefined8 *)PTR_DAT_071028c0;
                                                        *(undefined8 *)(lVar12 + 0x110) = 0x4e80360;
                                                        *(undefined8 *)(lVar12 + 0x118) = uVar14;
                                                        if (0x10 < uVar13) {
                                                          uVar14 = *(undefined8 *)puVar2;
                                                          *(undefined8 *)(lVar12 + 0x120) =
                                                               0x4e40361;
                                                          *(undefined8 *)(lVar12 + 0x128) = uVar14;
                                                          if (uVar13 != 0x11) {
                                                            uVar14 = *(undefined8 *)PTR_DAT_07102ca0
                                                            ;
                                                            *(undefined8 *)(lVar12 + 0x130) =
                                                                 0x20204e30362;
                                                            *(undefined8 *)(lVar12 + 0x138) = uVar14
                                                            ;
                                                            puVar2 = PTR_DAT_07102d68;
                                                            if (0x12 < uVar13) {
                                                              uVar14 = *(undefined8 *)
                                                                        PTR_DAT_07102940;
                                                              *(undefined8 *)(lVar12 + 0x140) =
                                                                   0x4e50365;
                                                              *(undefined8 *)(lVar12 + 0x148) =
                                                                   uVar14;
                                                              if (uVar13 != 0x13) {
                                                                uVar14 = *(undefined8 *)puVar2;
                                                                *(undefined8 *)(lVar12 + 0x150) =
                                                                     0x4e20366;
                                                                *(undefined8 *)(lVar12 + 0x158) =
                                                                     uVar14;
                                                                if (0x14 < uVar13) {
                                                                  uVar14 = *(undefined8 *)
                                                                            PTR_DAT_07103048;
                                                                  *(undefined8 *)(lVar12 + 0x160) =
                                                                       0x303036a036a;
                                                                  *(undefined8 *)(lVar12 + 0x168) =
                                                                       uVar14;
                                                                  puVar4 = PTR_DAT_071033e8;
                                                                  puVar2 = PTR_DAT_07102990;
                                                                  if (uVar13 != 0x15) {
                                                                    uVar14 = *(undefined8 *)
                                                                              PTR_DAT_07102ff8;
                                                                    *(undefined8 *)(lVar12 + 0x170)
                                                                         = 0x4e5036b;
                                                                    *(undefined8 *)(lVar12 + 0x178)
                                                                         = uVar14;
                                                                    if (0x16 < uVar13) {
                                                                      uVar14 = *(undefined8 *)
                                                                                PTR_DAT_071033a8;
                                                                      *(undefined8 *)
                                                                       (lVar12 + 0x180) =
                                                                           0x30303a403a4;
                                                                      *(undefined8 *)
                                                                       (lVar12 + 0x188) = uVar14;
                                                                      if (uVar13 != 0x17) {
                                                                        uVar14 = *(undefined8 *)
                                                                                  PTR_DAT_07102dd0;
                                                                        *(undefined8 *)
                                                                         (lVar12 + 400) =
                                                                             0x30303a803a8;
                                                                        *(undefined8 *)
                                                                         (lVar12 + 0x198) = uVar14;
                                                                        if (0x18 < uVar13) {
                                                                          uVar14 = *(undefined8 *)
                                                                                    PTR_DAT_071029f0
                                                                          ;
                                                                          *(undefined8 *)
                                                                           (lVar12 + 0x1a0) =
                                                                               0x30303b503b5;
                                                                          *(undefined8 *)
                                                                           (lVar12 + 0x1a8) = uVar14
                                                                          ;
                                                                          if (uVar13 != 0x19) {
                                                                            uVar14 = *(undefined8 *)
                                                                                                                                                                            
                                                  PTR_DAT_07102c88;
                                                  *(undefined8 *)(lVar12 + 0x1b0) = 0x30303b603b6;
                                                  *(undefined8 *)(lVar12 + 0x1b8) = uVar14;
                                                  if (0x1a < uVar13) {
                                                    uVar14 = *(undefined8 *)PTR_DAT_07102f88;
                                                    *(undefined8 *)(lVar12 + 0x1c0) = 0x4e60402;
                                                    *(undefined8 *)(lVar12 + 0x1c8) = uVar14;
                                                    if (uVar13 != 0x1b) {
                                                      uVar14 = *(undefined8 *)PTR_DAT_071027e0;
                                                      *(undefined8 *)(lVar12 + 0x1d0) = 0x4e40417;
                                                      *(undefined8 *)(lVar12 + 0x1d8) = uVar14;
                                                      if (0x1c < uVar13) {
                                                        uVar14 = *(undefined8 *)PTR_DAT_071028f8;
                                                        *(undefined8 *)(lVar12 + 0x1e0) = 0x4e40474;
                                                        *(undefined8 *)(lVar12 + 0x1e8) = uVar14;
                                                        if (uVar13 != 0x1d) {
                                                          uVar14 = *(undefined8 *)PTR_DAT_07102f80;
                                                          *(undefined8 *)(lVar12 + 0x1f0) =
                                                               0x4e40475;
                                                          *(undefined8 *)(lVar12 + 0x1f8) = uVar14;
                                                          if (0x1e < uVar13) {
                                                            uVar14 = *(undefined8 *)PTR_DAT_07102808
                                                            ;
                                                            *(undefined8 *)(lVar12 + 0x200) =
                                                                 0x4e40476;
                                                            *(undefined8 *)(lVar12 + 0x208) = uVar14
                                                            ;
                                                            if (uVar13 != 0x1f) {
                                                              uVar14 = *(undefined8 *)
                                                                        PTR_DAT_071030f8;
                                                              *(undefined8 *)(lVar12 + 0x210) =
                                                                   0x4e40477;
                                                              *(undefined8 *)(lVar12 + 0x218) =
                                                                   uVar14;
                                                              if (0x20 < uVar13) {
                                                                uVar14 = *(undefined8 *)
                                                                          PTR_DAT_07103198;
                                                                *(undefined8 *)(lVar12 + 0x220) =
                                                                     0x4e40478;
                                                                *(undefined8 *)(lVar12 + 0x228) =
                                                                     uVar14;
                                                                if (uVar13 != 0x21) {
                                                                  uVar14 = *(undefined8 *)
                                                                            PTR_DAT_07102aa0;
                                                                  *(undefined8 *)(lVar12 + 0x230) =
                                                                       0x4e40479;
                                                                  *(undefined8 *)(lVar12 + 0x238) =
                                                                       uVar14;
                                                                  puVar5 = PTR_DAT_07103480;
                                                                  if (0x22 < uVar13) {
                                                                    uVar14 = *(undefined8 *)
                                                                              PTR_DAT_07102ba0;
                                                                    *(undefined8 *)(lVar12 + 0x240)
                                                                         = 0x4e4047a;
                                                                    *(undefined8 *)(lVar12 + 0x248)
                                                                         = uVar14;
                                                                    if (uVar13 != 0x23) {
                                                                      uVar14 = *(undefined8 *)
                                                                                PTR_DAT_07103040;
                                                                      *(undefined8 *)
                                                                       (lVar12 + 0x250) = 0x4e4047b;
                                                                      *(undefined8 *)(lVar12 + 600)
                                                                           = uVar14;
                                                                      if (0x24 < uVar13) {
                                                                        uVar14 = *(undefined8 *)
                                                                                  PTR_DAT_07102fb8;
                                                                        *(undefined8 *)
                                                                         (lVar12 + 0x260) =
                                                                             0x4e4047c;
                                                                        *(undefined8 *)
                                                                         (lVar12 + 0x268) = uVar14;
                                                                        if (uVar13 != 0x25) {
                                                                          uVar14 = *(undefined8 *)
                                                                                    PTR_DAT_07103478
                                                                          ;
                                                                          *(undefined8 *)
                                                                           (lVar12 + 0x270) =
                                                                               0x4e4047d;
                                                                          *(undefined8 *)
                                                                           (lVar12 + 0x278) = uVar14
                                                                          ;
                                                                          if (0x26 < uVar13) {
                                                                            uVar14 = *(undefined8 *)
                                                                                                                                                                            
                                                  PTR_DAT_07102ab8;
                                                  *(undefined8 *)(lVar12 + 0x280) = 0x20004b004b0;
                                                  *(undefined8 *)(lVar12 + 0x288) = uVar14;
                                                  if (uVar13 != 0x27) {
                                                    uVar14 = *(undefined8 *)PTR_DAT_07103200;
                                                    *(undefined8 *)(lVar12 + 0x290) = 0x4b004b1;
                                                    *(undefined8 *)(lVar12 + 0x298) = uVar14;
                                                    if (0x28 < uVar13) {
                                                      uVar14 = *(undefined8 *)PTR_DAT_07102ed8;
                                                      *(undefined8 *)(lVar12 + 0x2a0) =
                                                           0x30304e204e2;
                                                      *(undefined8 *)(lVar12 + 0x2a8) = uVar14;
                                                      if (uVar13 != 0x29) {
                                                        uVar14 = *(undefined8 *)PTR_DAT_071034e8;
                                                        *(undefined8 *)(lVar12 + 0x2b0) =
                                                             0x30304e304e3;
                                                        *(undefined8 *)(lVar12 + 0x2b8) = uVar14;
                                                        if (0x2a < uVar13) {
                                                          uVar14 = *(undefined8 *)PTR_DAT_07102ad8;
                                                          *(undefined8 *)(lVar12 + 0x2c0) =
                                                               0x30304e404e4;
                                                          *(undefined8 *)(lVar12 + 0x2c8) = uVar14;
                                                          if (uVar13 != 0x2b) {
                                                            uVar14 = *(undefined8 *)PTR_DAT_07102948
                                                            ;
                                                            *(undefined8 *)(lVar12 + 0x2d0) =
                                                                 0x30304e504e5;
                                                            *(undefined8 *)(lVar12 + 0x2d8) = uVar14
                                                            ;
                                                            if (0x2c < uVar13) {
                                                              uVar14 = *(undefined8 *)
                                                                        PTR_DAT_07103250;
                                                              *(undefined8 *)(lVar12 + 0x2e0) =
                                                                   0x30304e604e6;
                                                              *(undefined8 *)(lVar12 + 0x2e8) =
                                                                   uVar14;
                                                              if (uVar13 != 0x2d) {
                                                                uVar14 = *(undefined8 *)
                                                                          PTR_DAT_07102bf0;
                                                                *(undefined8 *)(lVar12 + 0x2f0) =
                                                                     0x30304e704e7;
                                                                *(undefined8 *)(lVar12 + 0x2f8) =
                                                                     uVar14;
                                                                if (0x2e < uVar13) {
                                                                  uVar14 = *(undefined8 *)
                                                                            PTR_DAT_07102de8;
                                                                  *(undefined8 *)(lVar12 + 0x300) =
                                                                       0x30304e804e8;
                                                                  *(undefined8 *)(lVar12 + 0x308) =
                                                                       uVar14;
                                                                  if (uVar13 != 0x2f) {
                                                                    uVar14 = *(undefined8 *)
                                                                              PTR_DAT_07102da8;
                                                                    *(undefined8 *)(lVar12 + 0x310)
                                                                         = 0x30304e904e9;
                                                                    *(undefined8 *)(lVar12 + 0x318)
                                                                         = uVar14;
                                                                    if (0x30 < uVar13) {
                                                                      uVar14 = *(undefined8 *)
                                                                                PTR_DAT_07102850;
                                                                      *(undefined8 *)(lVar12 + 800)
                                                                           = 0x30304ea04ea;
                                                                      *(undefined8 *)
                                                                       (lVar12 + 0x328) = uVar14;
                                                                      if (uVar13 != 0x31) {
                                                                        uVar14 = *(undefined8 *)
                                                                                  PTR_DAT_07102fe8;
                                                                        *(undefined8 *)
                                                                         (lVar12 + 0x330) =
                                                                             0x4e42710;
                                                                        *(undefined8 *)
                                                                         (lVar12 + 0x338) = uVar14;
                                                                        if (0x32 < uVar13) {
                                                                          uVar14 = *(undefined8 *)
                                                                                    PTR_DAT_07102e80
                                                                          ;
                                                                          *(undefined8 *)
                                                                           (lVar12 + 0x340) =
                                                                               0x4e4275f;
                                                                          *(undefined8 *)
                                                                           (lVar12 + 0x348) = uVar14
                                                                          ;
                                                                          if (uVar13 != 0x33) {
                                                                            uVar14 = *(undefined8 *)
                                                                                                                                                                            
                                                  PTR_DAT_071032d8;
                                                  *(undefined8 *)(lVar12 + 0x350) = 0x4b02ee0;
                                                  *(undefined8 *)(lVar12 + 0x358) = uVar14;
                                                  if (0x34 < uVar13) {
                                                    uVar14 = *(undefined8 *)PTR_DAT_07102f58;
                                                    *(undefined8 *)(lVar12 + 0x360) = 0x4b02ee1;
                                                    *(undefined8 *)(lVar12 + 0x368) = uVar14;
                                                    if (uVar13 != 0x35) {
                                                      uVar14 = *(undefined8 *)PTR_DAT_07103068;
                                                      *(undefined8 *)(lVar12 + 0x370) =
                                                           0x10104e44e9f;
                                                      *(undefined8 *)(lVar12 + 0x378) = uVar14;
                                                      if (0x36 < uVar13) {
                                                        uVar14 = *(undefined8 *)PTR_DAT_07102aa8;
                                                        *(undefined8 *)(lVar12 + 0x380) = 0x4e44f31;
                                                        *(undefined8 *)(lVar12 + 0x388) = uVar14;
                                                        if (uVar13 != 0x37) {
                                                          uVar14 = *(undefined8 *)PTR_DAT_071033a0;
                                                          *(undefined8 *)(lVar12 + 0x390) =
                                                               0x4e44f35;
                                                          *(undefined8 *)(lVar12 + 0x398) = uVar14;
                                                          if (0x38 < uVar13) {
                                                            uVar14 = *(undefined8 *)PTR_DAT_07102af0
                                                            ;
                                                            *(undefined8 *)(lVar12 + 0x3a0) =
                                                                 0x4e44f36;
                                                            *(undefined8 *)(lVar12 + 0x3a8) = uVar14
                                                            ;
                                                            if (uVar13 != 0x39) {
                                                              uVar14 = *(undefined8 *)
                                                                        PTR_DAT_07103098;
                                                              *(undefined8 *)(lVar12 + 0x3b0) =
                                                                   0x4e44f38;
                                                              *(undefined8 *)(lVar12 + 0x3b8) =
                                                                   uVar14;
                                                              if (0x3a < uVar13) {
                                                                uVar14 = *(undefined8 *)
                                                                          PTR_DAT_07102a50;
                                                                *(undefined8 *)(lVar12 + 0x3c0) =
                                                                     0x4e44f3c;
                                                                *(undefined8 *)(lVar12 + 0x3c8) =
                                                                     uVar14;
                                                                if (uVar13 != 0x3b) {
                                                                  uVar14 = *(undefined8 *)
                                                                            PTR_DAT_07102bb0;
                                                                  *(undefined8 *)(lVar12 + 0x3d0) =
                                                                       0x4e44f3d;
                                                                  *(undefined8 *)(lVar12 + 0x3d8) =
                                                                       uVar14;
                                                                  if (0x3c < uVar13) {
                                                                    uVar14 = *(undefined8 *)
                                                                              PTR_DAT_071029a0;
                                                                    *(undefined8 *)(lVar12 + 0x3e0)
                                                                         = 0x3a44f42;
                                                                    *(undefined8 *)(lVar12 + 1000) =
                                                                         uVar14;
                                                                    if (uVar13 != 0x3d) {
                                                                      uVar14 = *(undefined8 *)
                                                                                PTR_DAT_07102a20;
                                                                      *(undefined8 *)
                                                                       (lVar12 + 0x3f0) = 0x4e44f49;
                                                                      *(undefined8 *)
                                                                       (lVar12 + 0x3f8) = uVar14;
                                                                      if (0x3e < uVar13) {
                                                                        uVar14 = *(undefined8 *)
                                                                                  PTR_DAT_07102b68;
                                                                        *(undefined8 *)
                                                                         (lVar12 + 0x400) =
                                                                             0x4e84fc4;
                                                                        *(undefined8 *)
                                                                         (lVar12 + 0x408) = uVar14;
                                                                        if ((*(ulong *)(lVar12 + 
                                                  0x18) & 0xffffffc0) != 0) {
                                                    uVar14 = *(undefined8 *)PTR_DAT_07102eb8;
                                                    *(undefined8 *)(lVar12 + 0x410) = 0x4e74fc8;
                                                    *(undefined8 *)(lVar12 + 0x418) = uVar14;
                                                    if (0x40 < uVar13) {
                                                      *(undefined8 *)(lVar12 + 0x428) =
                                                           *(undefined8 *)puVar4;
                                                      *(undefined8 *)(lVar12 + 0x420) =
                                                           0x30304e35182;
                                                      if (uVar13 != 0x41) {
                                                        uVar14 = *(undefined8 *)PTR_DAT_07102958;
                                                        *(undefined8 *)(lVar12 + 0x430) = 0x4e45187;
                                                        *(undefined8 *)(lVar12 + 0x438) = uVar14;
                                                        puVar4 = PTR_DAT_07102d00;
                                                        if (0x42 < uVar13) {
                                                          uVar14 = *(undefined8 *)PTR_DAT_07102eb0;
                                                          *(undefined8 *)(lVar12 + 0x440) =
                                                               0x4e35221;
                                                          *(undefined8 *)(lVar12 + 0x448) = uVar14;
                                                          if (uVar13 != 0x43) {
                                                            uVar14 = *(undefined8 *)puVar2;
                                                            *(undefined8 *)(lVar12 + 0x450) =
                                                                 0x30304e3556a;
                                                            *(undefined8 *)(lVar12 + 0x458) = uVar14
                                                            ;
                                                            if (0x44 < uVar13) {
                                                              uVar14 = *(undefined8 *)
                                                                        PTR_DAT_070cbca8;
                                                              *(undefined8 *)(lVar12 + 0x460) =
                                                                   0x30304e46faf;
                                                              *(undefined8 *)(lVar12 + 0x468) =
                                                                   uVar14;
                                                              if (uVar13 != 0x45) {
                                                                uVar14 = *(undefined8 *)
                                                                          PTR_DAT_07103160;
                                                                *(undefined8 *)(lVar12 + 0x470) =
                                                                     0x30304e26fb0;
                                                                *(undefined8 *)(lVar12 + 0x478) =
                                                                     uVar14;
                                                                if (0x46 < uVar13) {
                                                                  uVar14 = *(undefined8 *)
                                                                            PTR_DAT_07103008;
                                                                  *(undefined8 *)(lVar12 + 0x480) =
                                                                       0x10104e66fb1;
                                                                  *(undefined8 *)(lVar12 + 0x488) =
                                                                       uVar14;
                                                                  if (uVar13 != 0x47) {
                                                                    uVar14 = *(undefined8 *)
                                                                              PTR_DAT_071031d8;
                                                                    *(undefined8 *)(lVar12 + 0x490)
                                                                         = 0x30304e96fb2;
                                                                    *(undefined8 *)(lVar12 + 0x498)
                                                                         = uVar14;
                                                                    if (0x48 < uVar13) {
                                                                      uVar14 = *(undefined8 *)
                                                                                PTR_DAT_07103230;
                                                                      *(undefined8 *)
                                                                       (lVar12 + 0x4a0) =
                                                                           0x30304e36fb3;
                                                                      *(undefined8 *)
                                                                       (lVar12 + 0x4a8) = uVar14;
                                                                      if (uVar13 != 0x49) {
                                                                        uVar14 = *(undefined8 *)
                                                                                  PTR_DAT_07102848;
                                                                        *(undefined8 *)
                                                                         (lVar12 + 0x4b0) =
                                                                             0x30304e86fb4;
                                                                        *(undefined8 *)
                                                                         (lVar12 + 0x4b8) = uVar14;
                                                                        if (0x4a < uVar13) {
                                                                          uVar14 = *(undefined8 *)
                                                                                    PTR_DAT_07102968
                                                                          ;
                                                                          *(undefined8 *)
                                                                           (lVar12 + 0x4c0) =
                                                                               0x30304e56fb5;
                                                                          *(undefined8 *)
                                                                           (lVar12 + 0x4c8) = uVar14
                                                                          ;
                                                                          if (uVar13 != 0x4b) {
                                                                            uVar14 = *(undefined8 *)
                                                                                                                                                                            
                                                  PTR_DAT_07103208;
                                                  *(undefined8 *)(lVar12 + 0x4d0) = 0x20204e76fb6;
                                                  *(undefined8 *)(lVar12 + 0x4d8) = uVar14;
                                                  if (0x4c < uVar13) {
                                                    uVar14 = *(undefined8 *)PTR_DAT_07102bd0;
                                                    *(undefined8 *)(lVar12 + 0x4e0) = 0x30304e66fb7;
                                                    *(undefined8 *)(lVar12 + 0x4e8) = uVar14;
                                                    if (uVar13 != 0x4d) {
                                                      uVar14 = *(undefined8 *)PTR_DAT_071034c8;
                                                      *(undefined8 *)(lVar12 + 0x4f0) =
                                                           0x30104e46fbd;
                                                      *(undefined8 *)(lVar12 + 0x4f8) = uVar14;
                                                      if (0x4e < uVar13) {
                                                        uVar14 = *(undefined8 *)PTR_DAT_07102c78;
                                                        *(undefined8 *)(lVar12 + 0x500) =
                                                             0x30304e796c6;
                                                        *(undefined8 *)(lVar12 + 0x508) = uVar14;
                                                        if (uVar13 != 0x4f) {
                                                          *(undefined8 *)(lVar12 + 0x518) =
                                                               *(undefined8 *)puVar5;
                                                          *(undefined8 *)(lVar12 + 0x510) =
                                                               0x10103a4c42c;
                                                          if (0x50 < uVar13) {
                                                            uVar14 = *(undefined8 *)PTR_DAT_071034e0
                                                            ;
                                                            *(undefined8 *)(lVar12 + 0x520) =
                                                                 0x30103a4c42d;
                                                            *(undefined8 *)(lVar12 + 0x528) = uVar14
                                                            ;
                                                            if (uVar13 != 0x51) {
                                                              uVar14 = *(undefined8 *)puVar5;
                                                              *(undefined8 *)(lVar12 + 0x530) =
                                                                   0x3a4c42e;
                                                              *(undefined8 *)(lVar12 + 0x538) =
                                                                   uVar14;
                                                              if (0x52 < uVar13) {
                                                                uVar14 = *(undefined8 *)
                                                                          PTR_DAT_071029a8;
                                                                *(undefined8 *)(lVar12 + 0x540) =
                                                                     0x30303a4cadc;
                                                                *(undefined8 *)(lVar12 + 0x548) =
                                                                     uVar14;
                                                                if (uVar13 != 0x53) {
                                                                  uVar14 = *(undefined8 *)
                                                                            PTR_DAT_07103408;
                                                                  *(undefined8 *)(lVar12 + 0x550) =
                                                                       0x10103b5caed;
                                                                  *(undefined8 *)(lVar12 + 0x558) =
                                                                       uVar14;
                                                                  if (0x54 < uVar13) {
                                                                    uVar14 = *(undefined8 *)
                                                                              PTR_DAT_07102880;
                                                                    *(undefined8 *)(lVar12 + 0x560)
                                                                         = 0x30303a8d698;
                                                                    *(undefined8 *)(lVar12 + 0x568)
                                                                         = uVar14;
                                                                    if (uVar13 != 0x55) {
                                                                      uVar14 = *(undefined8 *)
                                                                                PTR_DAT_07102df0;
                                                                      *(undefined8 *)
                                                                       (lVar12 + 0x570) = 0xdeaadeaa
                                                                      ;
                                                                      *(undefined8 *)
                                                                       (lVar12 + 0x578) = uVar14;
                                                                      if (0x56 < uVar13) {
                                                                        uVar14 = *(undefined8 *)
                                                                                  PTR_DAT_07102890;
                                                                        *(undefined8 *)
                                                                         (lVar12 + 0x580) =
                                                                             0xdeabdeab;
                                                                        *(undefined8 *)
                                                                         (lVar12 + 0x588) = uVar14;
                                                                        if (uVar13 != 0x57) {
                                                                          uVar14 = *(undefined8 *)
                                                                                    PTR_DAT_07103028
                                                                          ;
                                                                          *(undefined8 *)
                                                                           (lVar12 + 0x590) =
                                                                               0xdeacdeac;
                                                                          *(undefined8 *)
                                                                           (lVar12 + 0x598) = uVar14
                                                                          ;
                                                                          if (0x58 < uVar13) {
                                                                            uVar14 = *(undefined8 *)
                                                                                                                                                                            
                                                  PTR_DAT_07103148;
                                                  *(undefined8 *)(lVar12 + 0x5a0) = 0xdeaddead;
                                                  *(undefined8 *)(lVar12 + 0x5a8) = uVar14;
                                                  if (uVar13 != 0x59) {
                                                    uVar14 = *(undefined8 *)PTR_DAT_07102b90;
                                                    *(undefined8 *)(lVar12 + 0x5b0) = 0xdeaedeae;
                                                    *(undefined8 *)(lVar12 + 0x5b8) = uVar14;
                                                    if (0x5a < uVar13) {
                                                      uVar14 = *(undefined8 *)PTR_DAT_07102fe0;
                                                      *(undefined8 *)(lVar12 + 0x5c0) = 0xdeafdeaf;
                                                      *(undefined8 *)(lVar12 + 0x5c8) = uVar14;
                                                      if (uVar13 != 0x5b) {
                                                        uVar14 = *(undefined8 *)PTR_DAT_07102a90;
                                                        *(undefined8 *)(lVar12 + 0x5d0) = 0xdeb0deb0
                                                        ;
                                                        *(undefined8 *)(lVar12 + 0x5d8) = uVar14;
                                                        if (0x5c < uVar13) {
                                                          uVar14 = *(undefined8 *)PTR_DAT_07103388;
                                                          *(undefined8 *)(lVar12 + 0x5e0) =
                                                               0xdeb1deb1;
                                                          *(undefined8 *)(lVar12 + 0x5e8) = uVar14;
                                                          if (uVar13 != 0x5d) {
                                                            uVar14 = *(undefined8 *)PTR_DAT_07102860
                                                            ;
                                                            *(undefined8 *)(lVar12 + 0x5f0) =
                                                                 0xdeb2deb2;
                                                            *(undefined8 *)(lVar12 + 0x5f8) = uVar14
                                                            ;
                                                            if (0x5e < uVar13) {
                                                              uVar14 = *(undefined8 *)
                                                                        PTR_DAT_071031c8;
                                                              *(undefined8 *)(lVar12 + 0x600) =
                                                                   0xdeb3deb3;
                                                              *(undefined8 *)(lVar12 + 0x608) =
                                                                   uVar14;
                                                              if (uVar13 != 0x5f) {
                                                                *(undefined8 *)(lVar12 + 0x618) =
                                                                     *(undefined8 *)puVar4;
                                                                *(undefined8 *)(lVar12 + 0x610) =
                                                                     0x10104b0fde8;
                                                                if (0x60 < uVar13) {
                                                                  uVar14 = *(undefined8 *)
                                                                            PTR_DAT_070c2af0;
                                                                  *(undefined8 *)(lVar12 + 0x620) =
                                                                       0x30304b0fde9;
                                                                  *(undefined8 *)(lVar12 + 0x628) =
                                                                       uVar14;
                                                                  if (uVar13 != 0x61) {
                                                                    *(undefined8 *)(lVar12 + 0x638)
                                                                         = 0;
                                                                    *(undefined8 *)(lVar12 + 0x630)
                                                                         = 0;
                                                                    puVar2 = PTR_DAT_070c2ef0;
                                                                    *(long *)(*(long *)(*(long *)
                                                  puVar3 + 0xb8) + 8) = lVar12;
                                                  iVar11 = FUN_058bf824();
                                                  iVar1 = *(int *)(*(long *)puVar2 + 0xe4);
                                                  *(int *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10)
                                                       = iVar11 + -1;
                                                  if (iVar1 == 0) {
                                                    thunk_FUN_031e5338();
                                                  }
                                                  if (DAT_075458a9 == '\0') {
                                                    FUN_03188a78(PTR_DAT_070c2ef0);
                                                    DAT_075458a9 = '\x01';
                                                  }
                                                  puVar7 = PTR_DAT_071027d0;
                                                  puVar6 = PTR_DAT_071027c8;
                                                  puVar5 = PTR_DAT_071027c0;
                                                  puVar4 = PTR_DAT_070feac8;
                                                  lVar12 = *(long *)puVar2;
                                                  if (*(int *)(lVar12 + 0xe4) == 0) {
                                                    thunk_FUN_031e5338();
                                                    lVar12 = *(long *)puVar2;
                                                  }
                                                  uVar15 = *(undefined8 *)
                                                            (*(long *)(lVar12 + 0xb8) + 0x18);
                                                  uVar14 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar4);
                                                  FUN_05240ec0(uVar14,uVar15,*(undefined8 *)puVar5);
                                                  uVar15 = *(undefined8 *)puVar7;
                                                  *(undefined8 *)
                                                   (*(long *)(*(long *)puVar3 + 0xb8) + 0x18) =
                                                       uVar14;
                                                  uVar14 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar15);
                                                  FUN_05189a80(uVar14,*(undefined8 *)puVar6);
                                                  *(undefined8 *)
                                                   (*(long *)(*(long *)puVar3 + 0xb8) + 0x20) =
                                                       uVar14;
                                                  return;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188ce0();
}


