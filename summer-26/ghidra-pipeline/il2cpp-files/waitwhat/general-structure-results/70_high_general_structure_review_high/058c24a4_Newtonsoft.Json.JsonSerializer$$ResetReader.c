/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$ResetReader
ENTRY_POINT: 058c24a4
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


void Newtonsoft_Json_JsonSerializer__ResetReader(long param_1)

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
  int iVar10;
  long lVar11;
  uint in_w8;
  uint uVar12;
  long in_x9;
  undefined8 uVar13;
  undefined8 in_x10;
  undefined8 uVar14;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  
  uVar13 = **(undefined8 **)(in_x9 + 0x3a0);
  *(undefined8 *)(param_1 + 0xc28) = in_x10;
  *(undefined8 *)(param_1 + 0xc20) = uVar13;
  if (in_w8 != 0xc1) {
    uVar13 = *(undefined8 *)PTR_DAT_07102af0;
    *(undefined8 *)(param_1 + 0xc38) = 0x4f36;
    *(undefined8 *)(param_1 + 0xc30) = uVar13;
    if (0xc2 < in_w8) {
      uVar13 = *(undefined8 *)PTR_DAT_07103098;
      *(undefined8 *)(param_1 + 0xc48) = 0x4f38;
      *(undefined8 *)(param_1 + 0xc40) = uVar13;
      if (in_w8 != 0xc3) {
        uVar13 = *(undefined8 *)PTR_DAT_07102a50;
        *(undefined8 *)(param_1 + 0xc58) = 0x4f3c;
        *(undefined8 *)(param_1 + 0xc50) = uVar13;
        if (0xc4 < in_w8) {
          uVar13 = *(undefined8 *)PTR_DAT_07102bb0;
          *(undefined8 *)(param_1 + 0xc68) = 0x4f3d;
          *(undefined8 *)(param_1 + 0xc60) = uVar13;
          if (in_w8 != 0xc5) {
            uVar13 = *(undefined8 *)PTR_DAT_071029a0;
            *(undefined8 *)(param_1 + 0xc78) = 0x4f42;
            *(undefined8 *)(param_1 + 0xc70) = uVar13;
            if (0xc6 < in_w8) {
              uVar13 = *(undefined8 *)PTR_DAT_07102a20;
              *(undefined8 *)(param_1 + 0xc88) = 0x4f49;
              *(undefined8 *)(param_1 + 0xc80) = uVar13;
              if (in_w8 != 199) {
                uVar13 = *(undefined8 *)PTR_DAT_07103378;
                *(undefined8 *)(param_1 + 0xc98) = 0x4e9f;
                *(undefined8 *)(param_1 + 0xc90) = uVar13;
                if (200 < in_w8) {
                  uVar13 = *(undefined8 *)PTR_DAT_07102b68;
                  *(undefined8 *)(param_1 + 0xca8) = 0x4fc4;
                  *(undefined8 *)(param_1 + 0xca0) = uVar13;
                  if (in_w8 != 0xc9) {
                    uVar13 = *(undefined8 *)PTR_DAT_07103030;
                    *(undefined8 *)(param_1 + 0xcb8) = 0x4fc7;
                    *(undefined8 *)(param_1 + 0xcb0) = uVar13;
                    if (0xca < in_w8) {
                      uVar13 = *(undefined8 *)PTR_DAT_07102eb8;
                      *(undefined8 *)(param_1 + 0xcc8) = 0x4fc8;
                      *(undefined8 *)(param_1 + 0xcc0) = uVar13;
                      puVar2 = PTR_DAT_07102cb8;
                      if (in_w8 != 0xcb) {
                        uVar13 = *(undefined8 *)PTR_DAT_07102cb8;
                        *(undefined8 *)(param_1 + 0xcd8) = 0x1b5;
                        *(undefined8 *)(param_1 + 0xcd0) = uVar13;
                        puVar4 = PTR_DAT_07103170;
                        if (0xcc < in_w8) {
                          uVar13 = *(undefined8 *)PTR_DAT_07103170;
                          *(undefined8 *)(param_1 + 0xce8) = 500;
                          *(undefined8 *)(param_1 + 0xce0) = uVar13;
                          puVar5 = PTR_DAT_07102e90;
                          if (in_w8 != 0xcd) {
                            uVar13 = *(undefined8 *)PTR_DAT_07102e90;
                            *(undefined8 *)(param_1 + 0xcf8) = 0x2e1;
                            *(undefined8 *)(param_1 + 0xcf0) = uVar13;
                            puVar6 = PTR_DAT_071030b8;
                            if (0xce < in_w8) {
                              uVar13 = *(undefined8 *)PTR_DAT_071030b8;
                              *(undefined8 *)(param_1 + 0xd08) = 0x307;
                              *(undefined8 *)(param_1 + 0xd00) = uVar13;
                              if (in_w8 != 0xcf) {
                                uVar13 = *(undefined8 *)PTR_DAT_07103360;
                                *(undefined8 *)(param_1 + 0xd18) = 0x6faf;
                                *(undefined8 *)(param_1 + 0xd10) = uVar13;
                                if (0xd0 < in_w8) {
                                  uVar13 = *(undefined8 *)PTR_DAT_07102bc0;
                                  *(undefined8 *)(param_1 + 0xd28) = 0x352;
                                  *(undefined8 *)(param_1 + 0xd20) = uVar13;
                                  if (in_w8 != 0xd1) {
                                    uVar13 = *(undefined8 *)PTR_DAT_071032a0;
                                    *(undefined8 *)(param_1 + 0xd38) = 0x354;
                                    *(undefined8 *)(param_1 + 0xd30) = uVar13;
                                    puVar7 = PTR_DAT_07103150;
                                    if (0xd2 < in_w8) {
                                      uVar13 = *(undefined8 *)PTR_DAT_07103150;
                                      *(undefined8 *)(param_1 + 0xd48) = 0x357;
                                      *(undefined8 *)(param_1 + 0xd40) = uVar13;
                                      if (in_w8 != 0xd3) {
                                        uVar13 = *(undefined8 *)PTR_DAT_071028d8;
                                        *(undefined8 *)(param_1 + 0xd58) = 0x359;
                                        *(undefined8 *)(param_1 + 0xd50) = uVar13;
                                        puVar9 = PTR_DAT_07103220;
                                        if (0xd4 < in_w8) {
                                          uVar13 = *(undefined8 *)PTR_DAT_07103220;
                                          *(undefined8 *)(param_1 + 0xd68) = 0x35c;
                                          *(undefined8 *)(param_1 + 0xd60) = uVar13;
                                          if (in_w8 != 0xd5) {
                                            uVar13 = *(undefined8 *)PTR_DAT_07102ea0;
                                            *(undefined8 *)(param_1 + 0xd78) = 0x35d;
                                            *(undefined8 *)(param_1 + 0xd70) = uVar13;
                                            if (0xd6 < in_w8) {
                                              uVar13 = *(undefined8 *)PTR_DAT_07103460;
                                              *(undefined8 *)(param_1 + 0xd88) = 0x35e;
                                              *(undefined8 *)(param_1 + 0xd80) = uVar13;
                                              if (in_w8 != 0xd7) {
                                                uVar13 = *(undefined8 *)PTR_DAT_071033e0;
                                                *(undefined8 *)(param_1 + 0xd98) = 0x35f;
                                                *(undefined8 *)(param_1 + 0xd90) = uVar13;
                                                if (0xd8 < in_w8) {
                                                  uVar13 = *(undefined8 *)PTR_DAT_071028c0;
                                                  *(undefined8 *)(param_1 + 0xda8) = 0x360;
                                                  *(undefined8 *)(param_1 + 0xda0) = uVar13;
                                                  if (in_w8 != 0xd9) {
                                                    uVar13 = *(undefined8 *)PTR_DAT_07103448;
                                                    *(undefined8 *)(param_1 + 0xdb8) = 0x361;
                                                    *(undefined8 *)(param_1 + 0xdb0) = uVar13;
                                                    if (0xda < in_w8) {
                                                      uVar13 = *(undefined8 *)PTR_DAT_07102fd8;
                                                      *(undefined8 *)(param_1 + 0xdc8) = 0x362;
                                                      *(undefined8 *)(param_1 + 0xdc0) = uVar13;
                                                      if (in_w8 != 0xdb) {
                                                        uVar13 = *(undefined8 *)PTR_DAT_07102898;
                                                        *(undefined8 *)(param_1 + 0xdd8) = 0x365;
                                                        *(undefined8 *)(param_1 + 0xdd0) = uVar13;
                                                        if (0xdc < in_w8) {
                                                          uVar13 = *(undefined8 *)PTR_DAT_07102d68;
                                                          *(undefined8 *)(param_1 + 0xde8) = 0x366;
                                                          *(undefined8 *)(param_1 + 0xde0) = uVar13;
                                                          if (in_w8 != 0xdd) {
                                                            uVar13 = *(undefined8 *)PTR_DAT_07102958
                                                            ;
                                                            *(undefined8 *)(param_1 + 0xdf8) =
                                                                 0x5187;
                                                            *(undefined8 *)(param_1 + 0xdf0) =
                                                                 uVar13;
                                                            if (0xde < in_w8) {
                                                              uVar13 = *(undefined8 *)
                                                                        PTR_DAT_07102e60;
                                                              *(undefined8 *)(param_1 + 0xe08) =
                                                                   0x5190;
                                                              *(undefined8 *)(param_1 + 0xe00) =
                                                                   uVar13;
                                                              if (in_w8 != 0xdf) {
                                                                uVar13 = *(undefined8 *)
                                                                          PTR_DAT_07103498;
                                                                *(undefined8 *)(param_1 + 0xe18) =
                                                                     0x51a9;
                                                                *(undefined8 *)(param_1 + 0xe10) =
                                                                     uVar13;
                                                                if (0xe0 < in_w8) {
                                                                  uVar13 = *(undefined8 *)
                                                                            PTR_DAT_07103260;
                                                                  *(undefined8 *)(param_1 + 0xe28) =
                                                                       0x4e89;
                                                                  *(undefined8 *)(param_1 + 0xe20) =
                                                                       uVar13;
                                                                  if (in_w8 != 0xe1) {
                                                                    uVar13 = *(undefined8 *)
                                                                              PTR_DAT_07103138;
                                                                    *(undefined8 *)(param_1 + 0xe38)
                                                                         = 0x4b0;
                                                                    *(undefined8 *)(param_1 + 0xe30)
                                                                         = uVar13;
                                                                    if (0xe2 < in_w8) {
                                                                      uVar13 = *(undefined8 *)
                                                                                PTR_DAT_07103480;
                                                                      *(undefined8 *)
                                                                       (param_1 + 0xe48) = 0xc42c;
                                                                      *(undefined8 *)
                                                                       (param_1 + 0xe40) = uVar13;
                                                                      if (in_w8 != 0xe3) {
                                                                        uVar13 = *(undefined8 *)
                                                                                  PTR_DAT_071034d8;
                                                                        *(undefined8 *)
                                                                         (param_1 + 0xe58) = 0xcadc;
                                                                        *(undefined8 *)
                                                                         (param_1 + 0xe50) = uVar13;
                                                                        if (0xe4 < in_w8) {
                                                                          uVar13 = *(undefined8 *)
                                                                                    PTR_DAT_071033d8
                                                                          ;
                                                                          *(undefined8 *)
                                                                           (param_1 + 0xe68) =
                                                                               0xc431;
                                                                          *(undefined8 *)
                                                                           (param_1 + 0xe60) =
                                                                               uVar13;
                                                                          if (in_w8 != 0xe5) {
                                                                            uVar13 = *(undefined8 *)
                                                                                                                                                                            
                                                  PTR_DAT_07102de0;
                                                  *(undefined8 *)(param_1 + 0xe78) = 0xc431;
                                                  *(undefined8 *)(param_1 + 0xe70) = uVar13;
                                                  if (0xe6 < in_w8) {
                                                    uVar13 = *(undefined8 *)PTR_DAT_07102a10;
                                                    *(undefined8 *)(param_1 + 0xe88) = 0xc431;
                                                    *(undefined8 *)(param_1 + 0xe80) = uVar13;
                                                    if (in_w8 != 0xe7) {
                                                      uVar13 = *(undefined8 *)PTR_DAT_07103130;
                                                      *(undefined8 *)(param_1 + 0xe98) = 0xcaed;
                                                      *(undefined8 *)(param_1 + 0xe90) = uVar13;
                                                      if (0xe8 < in_w8) {
                                                        uVar13 = *(undefined8 *)PTR_DAT_07103188;
                                                        *(undefined8 *)(param_1 + 0xea8) = 0xcaed;
                                                        *(undefined8 *)(param_1 + 0xea0) = uVar13;
                                                        if (in_w8 != 0xe9) {
                                                          uVar13 = *(undefined8 *)PTR_DAT_070cbca8;
                                                          *(undefined8 *)(param_1 + 0xeb8) = 0x6faf;
                                                          *(undefined8 *)(param_1 + 0xeb0) = uVar13;
                                                          if (0xea < in_w8) {
                                                            uVar13 = *(undefined8 *)PTR_DAT_07102d40
                                                            ;
                                                            *(undefined8 *)(param_1 + 0xec8) = 0x36a
                                                            ;
                                                            *(undefined8 *)(param_1 + 0xec0) =
                                                                 uVar13;
                                                            if (in_w8 != 0xeb) {
                                                              uVar13 = *(undefined8 *)
                                                                        PTR_DAT_07102f98;
                                                              *(undefined8 *)(param_1 + 0xed8) =
                                                                   0x6fbb;
                                                              *(undefined8 *)(param_1 + 0xed0) =
                                                                   uVar13;
                                                              if (0xec < in_w8) {
                                                                uVar13 = *(undefined8 *)
                                                                          PTR_DAT_071034c8;
                                                                *(undefined8 *)(param_1 + 0xee8) =
                                                                     0x6fbd;
                                                                *(undefined8 *)(param_1 + 0xee0) =
                                                                     uVar13;
                                                                if (in_w8 != 0xed) {
                                                                  uVar13 = *(undefined8 *)
                                                                            PTR_DAT_07103160;
                                                                  *(undefined8 *)(param_1 + 0xef8) =
                                                                       0x6fb0;
                                                                  *(undefined8 *)(param_1 + 0xef0) =
                                                                       uVar13;
                                                                  if (0xee < in_w8) {
                                                                    uVar13 = *(undefined8 *)
                                                                              PTR_DAT_07103008;
                                                                    *(undefined8 *)(param_1 + 0xf08)
                                                                         = 0x6fb1;
                                                                    *(undefined8 *)(param_1 + 0xf00)
                                                                         = uVar13;
                                                                    if (in_w8 != 0xef) {
                                                                      uVar13 = *(undefined8 *)
                                                                                PTR_DAT_071031d8;
                                                                      *(undefined8 *)
                                                                       (param_1 + 0xf18) = 0x6fb2;
                                                                      *(undefined8 *)
                                                                       (param_1 + 0xf10) = uVar13;
                                                                      if (0xf0 < in_w8) {
                                                                        uVar13 = *(undefined8 *)
                                                                                  PTR_DAT_07103230;
                                                                        *(undefined8 *)
                                                                         (param_1 + 0xf28) = 0x6fb3;
                                                                        *(undefined8 *)
                                                                         (param_1 + 0xf20) = uVar13;
                                                                        if (in_w8 != 0xf1) {
                                                                          uVar13 = *(undefined8 *)
                                                                                    PTR_DAT_07102848
                                                                          ;
                                                                          *(undefined8 *)
                                                                           (param_1 + 0xf38) =
                                                                               0x6fb4;
                                                                          *(undefined8 *)
                                                                           (param_1 + 0xf30) =
                                                                               uVar13;
                                                                          if (0xf2 < in_w8) {
                                                                            uVar13 = *(undefined8 *)
                                                                                                                                                                            
                                                  PTR_DAT_07102968;
                                                  *(undefined8 *)(param_1 + 0xf48) = 0x6fb5;
                                                  *(undefined8 *)(param_1 + 0xf40) = uVar13;
                                                  if (in_w8 != 0xf3) {
                                                    uVar13 = *(undefined8 *)PTR_DAT_07103208;
                                                    *(undefined8 *)(param_1 + 0xf58) = 0x6fb6;
                                                    *(undefined8 *)(param_1 + 0xf50) = uVar13;
                                                    if (0xf4 < in_w8) {
                                                      uVar13 = *(undefined8 *)PTR_DAT_07102ac8;
                                                      *(undefined8 *)(param_1 + 0xf68) = 0x6fb6;
                                                      *(undefined8 *)(param_1 + 0xf60) = uVar13;
                                                      if (in_w8 != 0xf5) {
                                                        uVar13 = *(undefined8 *)PTR_DAT_07102c78;
                                                        *(undefined8 *)(param_1 + 0xf78) = 0x96c6;
                                                        *(undefined8 *)(param_1 + 0xf70) = uVar13;
                                                        if (0xf6 < in_w8) {
                                                          uVar13 = *(undefined8 *)PTR_DAT_07102bd0;
                                                          *(undefined8 *)(param_1 + 0xf88) = 0x6fb7;
                                                          *(undefined8 *)(param_1 + 0xf80) = uVar13;
                                                          if (in_w8 != 0xf7) {
                                                            uVar13 = *(undefined8 *)PTR_DAT_07102858
                                                            ;
                                                            *(undefined8 *)(param_1 + 0xf98) =
                                                                 0x6faf;
                                                            *(undefined8 *)(param_1 + 0xf90) =
                                                                 uVar13;
                                                            if (0xf8 < in_w8) {
                                                              uVar13 = *(undefined8 *)
                                                                        PTR_DAT_07103020;
                                                              *(undefined8 *)(param_1 + 0xfa8) =
                                                                   0x6fb0;
                                                              *(undefined8 *)(param_1 + 4000) =
                                                                   uVar13;
                                                              if (in_w8 != 0xf9) {
                                                                uVar12 = *(uint *)(param_1 + 0x18);
                                                                uVar13 = *(undefined8 *)
                                                                          PTR_DAT_07102a60;
                                                                *(undefined8 *)(param_1 + 0xfb8) =
                                                                     0x6fb1;
                                                                *(undefined8 *)(param_1 + 0xfb0) =
                                                                     uVar13;
                                                                if (0xfa < uVar12) {
                                                                  uVar13 = *(undefined8 *)
                                                                            PTR_DAT_07103358;
                                                                  *(undefined8 *)(param_1 + 0xfc8) =
                                                                       0x6fb2;
                                                                  *(undefined8 *)(param_1 + 0xfc0) =
                                                                       uVar13;
                                                                  if (uVar12 != 0xfb) {
                                                                    uVar13 = *(undefined8 *)
                                                                              PTR_DAT_071031f8;
                                                                    *(undefined8 *)(param_1 + 0xfd8)
                                                                         = 0x6fb5;
                                                                    *(undefined8 *)(param_1 + 0xfd0)
                                                                         = uVar13;
                                                                    if (0xfc < uVar12) {
                                                                      uVar13 = *(undefined8 *)
                                                                                PTR_DAT_07102e30;
                                                                      *(undefined8 *)
                                                                       (param_1 + 0xfe8) = 0x6fb4;
                                                                      *(undefined8 *)
                                                                       (param_1 + 0xfe0) = uVar13;
                                                                      if (uVar12 != 0xfd) {
                                                                        uVar13 = *(undefined8 *)
                                                                                  PTR_DAT_07102b18;
                                                                        *(undefined8 *)
                                                                         (param_1 + 0xff8) = 0x6fb6;
                                                                        *(undefined8 *)
                                                                         (param_1 + 0xff0) = uVar13;
                                                                        if (0xfe < uVar12) {
                                                                          uVar13 = *(undefined8 *)
                                                                                    PTR_DAT_07103088
                                                                          ;
                                                                          *(undefined8 *)
                                                                           (param_1 + 0x1008) =
                                                                               0x6fb3;
                                                                          *(undefined8 *)
                                                                           (param_1 + 0x1000) =
                                                                               uVar13;
                                                                          if (uVar12 != 0xff) {
                                                                            uVar13 = *(undefined8 *)
                                                                                                                                                                            
                                                  PTR_DAT_07102cf8;
                                                  *(undefined8 *)(param_1 + 0x1018) = 0x6fb7;
                                                  *(undefined8 *)(param_1 + 0x1010) = uVar13;
                                                  if (0x100 < uVar12) {
                                                    uVar13 = *(undefined8 *)PTR_DAT_071029c8;
                                                    *(undefined8 *)(param_1 + 0x1028) = 0x3b5;
                                                    *(undefined8 *)(param_1 + 0x1020) = uVar13;
                                                    if (uVar12 != 0x101) {
                                                      uVar13 = *(undefined8 *)PTR_DAT_07102e98;
                                                      *(undefined8 *)(param_1 + 0x1038) = 0x3a8;
                                                      *(undefined8 *)(param_1 + 0x1030) = uVar13;
                                                      if (0x102 < uVar12) {
                                                        uVar13 = *(undefined8 *)PTR_DAT_07102b50;
                                                        *(undefined8 *)(param_1 + 0x1048) = 0x4e9f;
                                                        *(undefined8 *)(param_1 + 0x1040) = uVar13;
                                                        if (uVar12 != 0x103) {
                                                          uVar13 = *(undefined8 *)PTR_DAT_07102f08;
                                                          *(undefined8 *)(param_1 + 0x1058) = 0x4e9f
                                                          ;
                                                          *(undefined8 *)(param_1 + 0x1050) = uVar13
                                                          ;
                                                          if (0x104 < uVar12) {
                                                            uVar13 = *(undefined8 *)PTR_DAT_07102a80
                                                            ;
                                                            *(undefined8 *)(param_1 + 0x1068) =
                                                                 0x6faf;
                                                            *(undefined8 *)(param_1 + 0x1060) =
                                                                 uVar13;
                                                            if (uVar12 != 0x105) {
                                                              uVar13 = *(undefined8 *)
                                                                        PTR_DAT_07103268;
                                                              *(undefined8 *)(param_1 + 0x1078) =
                                                                   0x6fb0;
                                                              *(undefined8 *)(param_1 + 0x1070) =
                                                                   uVar13;
                                                              if (0x106 < uVar12) {
                                                                uVar13 = *(undefined8 *)
                                                                          PTR_DAT_071029e0;
                                                                *(undefined8 *)(param_1 + 0x1088) =
                                                                     0x4e9f;
                                                                *(undefined8 *)(param_1 + 0x1080) =
                                                                     uVar13;
                                                                if (uVar12 != 0x107) {
                                                                  uVar13 = *(undefined8 *)
                                                                            PTR_DAT_07102818;
                                                                  *(undefined8 *)(param_1 + 0x1098)
                                                                       = 0x6faf;
                                                                  *(undefined8 *)(param_1 + 0x1090)
                                                                       = uVar13;
                                                                  if (0x108 < uVar12) {
                                                                    uVar13 = *(undefined8 *)
                                                                              PTR_DAT_07102ef0;
                                                                    *(undefined8 *)
                                                                     (param_1 + 0x10a8) = 0x6fbd;
                                                                    *(undefined8 *)
                                                                     (param_1 + 0x10a0) = uVar13;
                                                                    if (uVar12 != 0x109) {
                                                                      uVar13 = *(undefined8 *)
                                                                                PTR_DAT_07102ef8;
                                                                      *(undefined8 *)
                                                                       (param_1 + 0x10b8) = 0x6faf;
                                                                      *(undefined8 *)
                                                                       (param_1 + 0x10b0) = uVar13;
                                                                      if (0x10a < uVar12) {
                                                                        uVar13 = *(undefined8 *)
                                                                                  PTR_DAT_07102b38;
                                                                        *(undefined8 *)
                                                                         (param_1 + 0x10c8) = 0x6fb0
                                                                        ;
                                                                        *(undefined8 *)
                                                                         (param_1 + 0x10c0) = uVar13
                                                                        ;
                                                                        if (uVar12 != 0x10b) {
                                                                          uVar13 = *(undefined8 *)
                                                                                    PTR_DAT_071030a0
                                                                          ;
                                                                          *(undefined8 *)
                                                                           (param_1 + 0x10d8) =
                                                                               0x6fb0;
                                                                          *(undefined8 *)
                                                                           (param_1 + 0x10d0) =
                                                                               uVar13;
                                                                          if (0x10c < uVar12) {
                                                                            uVar13 = *(undefined8 *)
                                                                                                                                                                            
                                                  PTR_DAT_07102e08;
                                                  *(undefined8 *)(param_1 + 0x10e8) = 0x6fb1;
                                                  *(undefined8 *)(param_1 + 0x10e0) = uVar13;
                                                  if (uVar12 != 0x10d) {
                                                    uVar13 = *(undefined8 *)PTR_DAT_07102e88;
                                                    *(undefined8 *)(param_1 + 0x10f8) = 0x6fb1;
                                                    *(undefined8 *)(param_1 + 0x10f0) = uVar13;
                                                    if (0x10e < uVar12) {
                                                      uVar13 = *(undefined8 *)PTR_DAT_07102888;
                                                      *(undefined8 *)(param_1 + 0x1108) = 0x6fb2;
                                                      *(undefined8 *)(param_1 + 0x1100) = uVar13;
                                                      if (uVar12 != 0x10f) {
                                                        uVar13 = *(undefined8 *)PTR_DAT_07102810;
                                                        *(undefined8 *)(param_1 + 0x1118) = 0x6fb2;
                                                        *(undefined8 *)(param_1 + 0x1110) = uVar13;
                                                        if (0x110 < uVar12) {
                                                          uVar13 = *(undefined8 *)PTR_DAT_071027f0;
                                                          *(undefined8 *)(param_1 + 0x1128) = 0x6fb3
                                                          ;
                                                          *(undefined8 *)(param_1 + 0x1120) = uVar13
                                                          ;
                                                          if (uVar12 != 0x111) {
                                                            uVar13 = *(undefined8 *)PTR_DAT_07103308
                                                            ;
                                                            *(undefined8 *)(param_1 + 0x1138) =
                                                                 0x6fb3;
                                                            *(undefined8 *)(param_1 + 0x1130) =
                                                                 uVar13;
                                                            if (0x112 < uVar12) {
                                                              uVar13 = *(undefined8 *)
                                                                        PTR_DAT_07102f78;
                                                              *(undefined8 *)(param_1 + 0x1148) =
                                                                   0x6fb4;
                                                              *(undefined8 *)(param_1 + 0x1140) =
                                                                   uVar13;
                                                              if (uVar12 != 0x113) {
                                                                uVar13 = *(undefined8 *)
                                                                          PTR_DAT_07103298;
                                                                *(undefined8 *)(param_1 + 0x1158) =
                                                                     0x6fb4;
                                                                *(undefined8 *)(param_1 + 0x1150) =
                                                                     uVar13;
                                                                if (0x114 < uVar12) {
                                                                  uVar13 = *(undefined8 *)
                                                                            PTR_DAT_07102980;
                                                                  *(undefined8 *)(param_1 + 0x1168)
                                                                       = 0x6fb5;
                                                                  *(undefined8 *)(param_1 + 0x1160)
                                                                       = uVar13;
                                                                  if (uVar12 != 0x115) {
                                                                    uVar13 = *(undefined8 *)
                                                                              PTR_DAT_071028b8;
                                                                    *(undefined8 *)
                                                                     (param_1 + 0x1178) = 0x6fb5;
                                                                    *(undefined8 *)
                                                                     (param_1 + 0x1170) = uVar13;
                                                                    if (0x116 < uVar12) {
                                                                      uVar13 = *(undefined8 *)
                                                                                PTR_DAT_07102b58;
                                                                      *(undefined8 *)
                                                                       (param_1 + 0x1188) = 0x6fb6;
                                                                      *(undefined8 *)
                                                                       (param_1 + 0x1180) = uVar13;
                                                                      if (uVar12 != 0x117) {
                                                                        uVar13 = *(undefined8 *)
                                                                                  PTR_DAT_07103100;
                                                                        *(undefined8 *)
                                                                         (param_1 + 0x1198) = 0x6fb6
                                                                        ;
                                                                        *(undefined8 *)
                                                                         (param_1 + 0x1190) = uVar13
                                                                        ;
                                                                        if (0x118 < uVar12) {
                                                                          uVar13 = *(undefined8 *)
                                                                                    PTR_DAT_07103428
                                                                          ;
                                                                          *(undefined8 *)
                                                                           (param_1 + 0x11a8) =
                                                                               0x6fb7;
                                                                          *(undefined8 *)
                                                                           (param_1 + 0x11a0) =
                                                                               uVar13;
                                                                          if (uVar12 != 0x119) {
                                                                            uVar13 = *(undefined8 *)
                                                                                                                                                                            
                                                  PTR_DAT_07103458;
                                                  *(undefined8 *)(param_1 + 0x11b8) = 0x6fb7;
                                                  *(undefined8 *)(param_1 + 0x11b0) = uVar13;
                                                  if (0x11a < uVar12) {
                                                    uVar13 = *(undefined8 *)PTR_DAT_071031b0;
                                                    *(undefined8 *)(param_1 + 0x11c8) = 0x551;
                                                    *(undefined8 *)(param_1 + 0x11c0) = uVar13;
                                                    if (uVar12 != 0x11b) {
                                                      uVar13 = *(undefined8 *)PTR_DAT_07102c00;
                                                      *(undefined8 *)(param_1 + 0x11d8) = 0x5182;
                                                      *(undefined8 *)(param_1 + 0x11d0) = uVar13;
                                                      if (0x11c < uVar12) {
                                                        uVar13 = *(undefined8 *)PTR_DAT_07102f30;
                                                        *(undefined8 *)(param_1 + 0x11e8) = 0x5182;
                                                        *(undefined8 *)(param_1 + 0x11e0) = uVar13;
                                                        if (uVar12 != 0x11d) {
                                                          uVar13 = *(undefined8 *)PTR_DAT_071033e8;
                                                          *(undefined8 *)(param_1 + 0x11f8) = 0x5182
                                                          ;
                                                          *(undefined8 *)(param_1 + 0x11f0) = uVar13
                                                          ;
                                                          if (0x11e < uVar12) {
                                                            uVar13 = *(undefined8 *)PTR_DAT_071028a0
                                                            ;
                                                            *(undefined8 *)(param_1 + 0x1208) =
                                                                 0x556a;
                                                            *(undefined8 *)(param_1 + 0x1200) =
                                                                 uVar13;
                                                            if (uVar12 != 0x11f) {
                                                              uVar13 = *(undefined8 *)
                                                                        PTR_DAT_07102990;
                                                              *(undefined8 *)(param_1 + 0x1218) =
                                                                   0x556a;
                                                              *(undefined8 *)(param_1 + 0x1210) =
                                                                   uVar13;
                                                              if (0x120 < uVar12) {
                                                                uVar13 = *(undefined8 *)
                                                                          PTR_DAT_07102c10;
                                                                *(undefined8 *)(param_1 + 0x1228) =
                                                                     0x5182;
                                                                *(undefined8 *)(param_1 + 0x1220) =
                                                                     uVar13;
                                                                if (uVar12 != 0x121) {
                                                                  uVar13 = *(undefined8 *)
                                                                            PTR_DAT_07103060;
                                                                  *(undefined8 *)(param_1 + 0x1238)
                                                                       = 0x3b5;
                                                                  *(undefined8 *)(param_1 + 0x1230)
                                                                       = uVar13;
                                                                  if (0x122 < uVar12) {
                                                                    uVar13 = *(undefined8 *)
                                                                              PTR_DAT_07102e68;
                                                                    *(undefined8 *)
                                                                     (param_1 + 0x1248) = 0x3b5;
                                                                    *(undefined8 *)
                                                                     (param_1 + 0x1240) = uVar13;
                                                                    if (uVar12 != 0x123) {
                                                                      uVar13 = *(undefined8 *)
                                                                                PTR_DAT_07102d90;
                                                                      *(undefined8 *)
                                                                       (param_1 + 0x1258) = 0x3b5;
                                                                      *(undefined8 *)
                                                                       (param_1 + 0x1250) = uVar13;
                                                                      if (0x124 < uVar12) {
                                                                        uVar13 = *(undefined8 *)
                                                                                  PTR_DAT_07102db8;
                                                                        *(undefined8 *)
                                                                         (param_1 + 0x1268) = 0x3b5;
                                                                        *(undefined8 *)
                                                                         (param_1 + 0x1260) = uVar13
                                                                        ;
                                                                        if (uVar12 != 0x125) {
                                                                          uVar13 = *(undefined8 *)
                                                                                    PTR_DAT_07102a78
                                                                          ;
                                                                          *(undefined8 *)
                                                                           (param_1 + 0x1278) =
                                                                               0x3b5;
                                                                          *(undefined8 *)
                                                                           (param_1 + 0x1270) =
                                                                               uVar13;
                                                                          if (0x126 < uVar12) {
                                                                            uVar13 = *(undefined8 *)
                                                                                                                                                                            
                                                  PTR_DAT_07103178;
                                                  *(undefined8 *)(param_1 + 0x1288) = 0x3b5;
                                                  *(undefined8 *)(param_1 + 0x1280) = uVar13;
                                                  if (uVar12 != 0x127) {
                                                    uVar13 = *(undefined8 *)PTR_DAT_071029f0;
                                                    *(undefined8 *)(param_1 + 0x1298) = 0x3b5;
                                                    *(undefined8 *)(param_1 + 0x1290) = uVar13;
                                                    if (0x128 < uVar12) {
                                                      uVar13 = *(undefined8 *)PTR_DAT_07102868;
                                                      *(undefined8 *)(param_1 + 0x12a8) = 0x3b5;
                                                      *(undefined8 *)(param_1 + 0x12a0) = uVar13;
                                                      if (uVar12 != 0x129) {
                                                        uVar13 = *(undefined8 *)PTR_DAT_071027f8;
                                                        *(undefined8 *)(param_1 + 0x12b8) = 0x3b5;
                                                        *(undefined8 *)(param_1 + 0x12b0) = uVar13;
                                                        if (0x12a < uVar12) {
                                                          uVar13 = *(undefined8 *)PTR_DAT_071033d0;
                                                          *(undefined8 *)(param_1 + 0x12c8) = 0x6faf
                                                          ;
                                                          *(undefined8 *)(param_1 + 0x12c0) = uVar13
                                                          ;
                                                          if (uVar12 != 299) {
                                                            uVar13 = *(undefined8 *)PTR_DAT_07102e10
                                                            ;
                                                            *(undefined8 *)(param_1 + 0x12d8) =
                                                                 0x6fb0;
                                                            *(undefined8 *)(param_1 + 0x12d0) =
                                                                 uVar13;
                                                            if (300 < uVar12) {
                                                              uVar13 = *(undefined8 *)
                                                                        PTR_DAT_07102998;
                                                              *(undefined8 *)(param_1 + 0x12e8) =
                                                                   0x6fb1;
                                                              *(undefined8 *)(param_1 + 0x12e0) =
                                                                   uVar13;
                                                              if (uVar12 != 0x12d) {
                                                                uVar13 = *(undefined8 *)
                                                                          PTR_DAT_071031d0;
                                                                *(undefined8 *)(param_1 + 0x12f8) =
                                                                     0x6fb2;
                                                                *(undefined8 *)(param_1 + 0x12f0) =
                                                                     uVar13;
                                                                if (0x12e < uVar12) {
                                                                  uVar13 = *(undefined8 *)
                                                                            PTR_DAT_07103238;
                                                                  *(undefined8 *)(param_1 + 0x1308)
                                                                       = 0x6fb7;
                                                                  *(undefined8 *)(param_1 + 0x1300)
                                                                       = uVar13;
                                                                  if (uVar12 != 0x12f) {
                                                                    uVar13 = *(undefined8 *)
                                                                              PTR_DAT_07103490;
                                                                    *(undefined8 *)
                                                                     (param_1 + 0x1318) = 0x6fbd;
                                                                    *(undefined8 *)
                                                                     (param_1 + 0x1310) = uVar13;
                                                                    if (0x130 < uVar12) {
                                                                      uVar13 = *(undefined8 *)
                                                                                PTR_DAT_07102af8;
                                                                      *(undefined8 *)
                                                                       (param_1 + 0x1328) = 0x6faf;
                                                                      *(undefined8 *)
                                                                       (param_1 + 0x1320) = uVar13;
                                                                      if (uVar12 != 0x131) {
                                                                        uVar13 = *(undefined8 *)
                                                                                  PTR_DAT_07102d78;
                                                                        *(undefined8 *)
                                                                         (param_1 + 0x1338) = 0x6fb0
                                                                        ;
                                                                        *(undefined8 *)
                                                                         (param_1 + 0x1330) = uVar13
                                                                        ;
                                                                        if (0x132 < uVar12) {
                                                                          uVar13 = *(undefined8 *)
                                                                                    PTR_DAT_071030c8
                                                                          ;
                                                                          *(undefined8 *)
                                                                           (param_1 + 0x1348) =
                                                                               0x6fb1;
                                                                          *(undefined8 *)
                                                                           (param_1 + 0x1340) =
                                                                               uVar13;
                                                                          if (uVar12 != 0x133) {
                                                                            uVar13 = *(undefined8 *)
                                                                                                                                                                            
                                                  PTR_DAT_07102a38;
                                                  *(undefined8 *)(param_1 + 0x1358) = 0x6fb2;
                                                  *(undefined8 *)(param_1 + 0x1350) = uVar13;
                                                  if (0x134 < uVar12) {
                                                    uVar13 = *(undefined8 *)PTR_DAT_07102b28;
                                                    *(undefined8 *)(param_1 + 0x1368) = 0x6fb7;
                                                    *(undefined8 *)(param_1 + 0x1360) = uVar13;
                                                    if (uVar12 != 0x135) {
                                                      uVar13 = *(undefined8 *)PTR_DAT_07102c68;
                                                      *(undefined8 *)(param_1 + 0x1378) = 0x6fbd;
                                                      *(undefined8 *)(param_1 + 0x1370) = uVar13;
                                                      if (0x136 < uVar12) {
                                                        uVar13 = *(undefined8 *)PTR_DAT_071034d0;
                                                        *(undefined8 *)(param_1 + 5000) = 0x6fb6;
                                                        *(undefined8 *)(param_1 + 0x1380) = uVar13;
                                                        if (uVar12 != 0x137) {
                                                          uVar13 = *(undefined8 *)PTR_DAT_07102fe8;
                                                          *(undefined8 *)(param_1 + 0x1398) = 10000;
                                                          *(undefined8 *)(param_1 + 0x1390) = uVar13
                                                          ;
                                                          if (0x138 < uVar12) {
                                                            uVar13 = *(undefined8 *)PTR_DAT_071028c8
                                                            ;
                                                            *(undefined8 *)(param_1 + 0x13a8) =
                                                                 0x3a4;
                                                            *(undefined8 *)(param_1 + 0x13a0) =
                                                                 uVar13;
                                                            if (uVar12 != 0x139) {
                                                              uVar13 = *(undefined8 *)
                                                                        PTR_DAT_07103420;
                                                              *(undefined8 *)(param_1 + 0x13b8) =
                                                                   0x4e8c;
                                                              *(undefined8 *)(param_1 + 0x13b0) =
                                                                   uVar13;
                                                              if (0x13a < uVar12) {
                                                                uVar13 = *(undefined8 *)
                                                                          PTR_DAT_07102800;
                                                                *(undefined8 *)(param_1 + 0x13c8) =
                                                                     0x4e8c;
                                                                *(undefined8 *)(param_1 + 0x13c0) =
                                                                     uVar13;
                                                                if (uVar12 != 0x13b) {
                                                                  uVar13 = *(undefined8 *)
                                                                            PTR_DAT_07102b00;
                                                                  *(undefined8 *)(param_1 + 0x13d8)
                                                                       = 0x35a;
                                                                  *(undefined8 *)(param_1 + 0x13d0)
                                                                       = uVar13;
                                                                  if (0x13c < uVar12) {
                                                                    uVar13 = *(undefined8 *)
                                                                              PTR_DAT_071032b8;
                                                                    *(undefined8 *)
                                                                     (param_1 + 0x13e8) = 0x4e8b;
                                                                    *(undefined8 *)
                                                                     (param_1 + 0x13e0) = uVar13;
                                                                    if (uVar12 != 0x13d) {
                                                                      uVar13 = *(undefined8 *)
                                                                                PTR_DAT_07102d60;
                                                                      *(undefined8 *)
                                                                       (param_1 + 0x13f8) = 0x3a4;
                                                                      *(undefined8 *)
                                                                       (param_1 + 0x13f0) = uVar13;
                                                                      if (0x13e < uVar12) {
                                                                        uVar13 = *(undefined8 *)
                                                                                  PTR_DAT_07102a70;
                                                                        *(undefined8 *)
                                                                         (param_1 + 0x1408) = 0x3a4;
                                                                        *(undefined8 *)
                                                                         (param_1 + 0x1400) = uVar13
                                                                        ;
                                                                        if (uVar12 != 0x13f) {
                                                                          uVar13 = *(undefined8 *)
                                                                                    PTR_DAT_07102d28
                                                                          ;
                                                                          *(undefined8 *)
                                                                           (param_1 + 0x1418) =
                                                                               0x3a4;
                                                                          *(undefined8 *)
                                                                           (param_1 + 0x1410) =
                                                                               uVar13;
                                                                          if (0x140 < uVar12) {
                                                                            uVar13 = *(undefined8 *)
                                                                                                                                                                            
                                                  PTR_DAT_07102cb0;
                                                  *(undefined8 *)(param_1 + 0x1428) = 0x4e8b;
                                                  *(undefined8 *)(param_1 + 0x1420) = uVar13;
                                                  if (uVar12 != 0x141) {
                                                    uVar13 = *(undefined8 *)PTR_DAT_071029d0;
                                                    *(undefined8 *)(param_1 + 0x1438) = 0x36a;
                                                    *(undefined8 *)(param_1 + 0x1430) = uVar13;
                                                    if (0x142 < uVar12) {
                                                      uVar13 = *(undefined8 *)PTR_DAT_07103228;
                                                      *(undefined8 *)(param_1 + 0x1448) = 0x4b0;
                                                      *(undefined8 *)(param_1 + 0x1440) = uVar13;
                                                      if (uVar12 != 0x143) {
                                                        uVar13 = *(undefined8 *)PTR_DAT_07102fa8;
                                                        *(undefined8 *)(param_1 + 0x1458) = 0x4b0;
                                                        *(undefined8 *)(param_1 + 0x1450) = uVar13;
                                                        if (0x144 < uVar12) {
                                                          uVar13 = *(undefined8 *)PTR_DAT_07102fd0;
                                                          *(undefined8 *)(param_1 + 0x1468) = 65000;
                                                          *(undefined8 *)(param_1 + 0x1460) = uVar13
                                                          ;
                                                          if (uVar12 != 0x145) {
                                                            uVar13 = *(undefined8 *)PTR_DAT_07102a40
                                                            ;
                                                            *(undefined8 *)(param_1 + 0x1478) =
                                                                 0xfde9;
                                                            *(undefined8 *)(param_1 + 0x1470) =
                                                                 uVar13;
                                                            if (0x146 < uVar12) {
                                                              uVar13 = *(undefined8 *)
                                                                        PTR_DAT_07102a58;
                                                              *(undefined8 *)(param_1 + 0x1488) =
                                                                   65000;
                                                              *(undefined8 *)(param_1 + 0x1480) =
                                                                   uVar13;
                                                              if (uVar12 != 0x147) {
                                                                uVar13 = *(undefined8 *)
                                                                          PTR_DAT_07102e48;
                                                                *(undefined8 *)(param_1 + 0x1498) =
                                                                     0xfde9;
                                                                *(undefined8 *)(param_1 + 0x1490) =
                                                                     uVar13;
                                                                if (0x148 < uVar12) {
                                                                  uVar13 = *(undefined8 *)
                                                                            PTR_DAT_07102ca8;
                                                                  *(undefined8 *)(param_1 + 0x14a8)
                                                                       = 0x4b1;
                                                                  *(undefined8 *)(param_1 + 0x14a0)
                                                                       = uVar13;
                                                                  if (uVar12 != 0x149) {
                                                                    uVar13 = *(undefined8 *)
                                                                              PTR_DAT_07102c70;
                                                                    *(undefined8 *)
                                                                     (param_1 + 0x14b8) = 0x4e9f;
                                                                    *(undefined8 *)
                                                                     (param_1 + 0x14b0) = uVar13;
                                                                    if (0x14a < uVar12) {
                                                                      uVar13 = *(undefined8 *)
                                                                                PTR_DAT_07103068;
                                                                      *(undefined8 *)
                                                                       (param_1 + 0x14c8) = 0x4e9f;
                                                                      *(undefined8 *)
                                                                       (param_1 + 0x14c0) = uVar13;
                                                                      if (uVar12 != 0x14b) {
                                                                        uVar13 = *(undefined8 *)
                                                                                  PTR_DAT_07102ab8;
                                                                        *(undefined8 *)
                                                                         (param_1 + 0x14d8) = 0x4b0;
                                                                        *(undefined8 *)
                                                                         (param_1 + 0x14d0) = uVar13
                                                                        ;
                                                                        if (0x14c < uVar12) {
                                                                          uVar13 = *(undefined8 *)
                                                                                    PTR_DAT_071030e0
                                                                          ;
                                                                          *(undefined8 *)
                                                                           (param_1 + 0x14e8) =
                                                                               0x4b1;
                                                                          *(undefined8 *)
                                                                           (param_1 + 0x14e0) =
                                                                               uVar13;
                                                                          if (uVar12 != 0x14d) {
                                                                            uVar13 = *(undefined8 *)
                                                                                                                                                                            
                                                  PTR_DAT_07103440;
                                                  *(undefined8 *)(param_1 + 0x14f8) = 0x4b0;
                                                  *(undefined8 *)(param_1 + 0x14f0) = uVar13;
                                                  if (0x14e < uVar12) {
                                                    uVar13 = *(undefined8 *)PTR_DAT_071032d8;
                                                    *(undefined8 *)(param_1 + 0x1508) = 12000;
                                                    *(undefined8 *)(param_1 + 0x1500) = uVar13;
                                                    if (uVar12 != 0x14f) {
                                                      uVar13 = *(undefined8 *)PTR_DAT_071032e8;
                                                      *(undefined8 *)(param_1 + 0x1518) = 0x2ee1;
                                                      *(undefined8 *)(param_1 + 0x1510) = uVar13;
                                                      if (0x150 < uVar12) {
                                                        uVar13 = *(undefined8 *)PTR_DAT_07103400;
                                                        *(undefined8 *)(param_1 + 0x1528) = 12000;
                                                        *(undefined8 *)(param_1 + 0x1520) = uVar13;
                                                        if (uVar12 != 0x151) {
                                                          uVar13 = *(undefined8 *)PTR_DAT_07102d00;
                                                          *(undefined8 *)(param_1 + 0x1538) = 65000;
                                                          *(undefined8 *)(param_1 + 0x1530) = uVar13
                                                          ;
                                                          if (0x152 < uVar12) {
                                                            uVar13 = *(undefined8 *)PTR_DAT_070c2af0
                                                            ;
                                                            *(undefined8 *)(param_1 + 0x1548) =
                                                                 0xfde9;
                                                            *(undefined8 *)(param_1 + 0x1540) =
                                                                 uVar13;
                                                            if (uVar12 != 0x153) {
                                                              uVar13 = *(undefined8 *)
                                                                        PTR_DAT_071031f0;
                                                              *(undefined8 *)(param_1 + 0x1558) =
                                                                   0x6fb6;
                                                              *(undefined8 *)(param_1 + 0x1550) =
                                                                   uVar13;
                                                              if (0x154 < uVar12) {
                                                                uVar13 = *(undefined8 *)
                                                                          PTR_DAT_07102fa0;
                                                                *(undefined8 *)(param_1 + 0x1568) =
                                                                     0x4e2;
                                                                *(undefined8 *)(param_1 + 0x1560) =
                                                                     uVar13;
                                                                if (uVar12 != 0x155) {
                                                                  uVar13 = *(undefined8 *)
                                                                            PTR_DAT_071033f0;
                                                                  *(undefined8 *)(param_1 + 0x1578)
                                                                       = 0x4e3;
                                                                  *(undefined8 *)(param_1 + 0x1570)
                                                                       = uVar13;
                                                                  if (0x156 < uVar12) {
                                                                    uVar13 = *(undefined8 *)
                                                                              PTR_DAT_071030d0;
                                                                    *(undefined8 *)
                                                                     (param_1 + 0x1588) = 0x4e4;
                                                                    *(undefined8 *)
                                                                     (param_1 + 0x1580) = uVar13;
                                                                    if (uVar12 != 0x157) {
                                                                      uVar13 = *(undefined8 *)
                                                                                PTR_DAT_07103058;
                                                                      *(undefined8 *)
                                                                       (param_1 + 0x1598) = 0x4e5;
                                                                      *(undefined8 *)
                                                                       (param_1 + 0x1590) = uVar13;
                                                                      if (0x158 < uVar12) {
                                                                        uVar13 = *(undefined8 *)
                                                                                  PTR_DAT_07103410;
                                                                        *(undefined8 *)
                                                                         (param_1 + 0x15a8) = 0x4e6;
                                                                        *(undefined8 *)
                                                                         (param_1 + 0x15a0) = uVar13
                                                                        ;
                                                                        if (uVar12 != 0x159) {
                                                                          uVar13 = *(undefined8 *)
                                                                                    PTR_DAT_07102bf0
                                                                          ;
                                                                          *(undefined8 *)
                                                                           (param_1 + 0x15b8) =
                                                                               0x4e7;
                                                                          *(undefined8 *)
                                                                           (param_1 + 0x15b0) =
                                                                               uVar13;
                                                                          if (0x15a < uVar12) {
                                                                            uVar13 = *(undefined8 *)
                                                                                                                                                                            
                                                  PTR_DAT_07102de8;
                                                  *(undefined8 *)(param_1 + 0x15c8) = 0x4e8;
                                                  *(undefined8 *)(param_1 + 0x15c0) = uVar13;
                                                  if (uVar12 != 0x15b) {
                                                    uVar13 = *(undefined8 *)PTR_DAT_07102da8;
                                                    *(undefined8 *)(param_1 + 0x15d8) = 0x4e9;
                                                    *(undefined8 *)(param_1 + 0x15d0) = uVar13;
                                                    if (0x15c < uVar12) {
                                                      uVar13 = *(undefined8 *)PTR_DAT_07102850;
                                                      *(undefined8 *)(param_1 + 0x15e8) = 0x4ea;
                                                      *(undefined8 *)(param_1 + 0x15e0) = uVar13;
                                                      if (uVar12 != 0x15d) {
                                                        uVar13 = *(undefined8 *)PTR_DAT_07103048;
                                                        *(undefined8 *)(param_1 + 0x15f8) = 0x36a;
                                                        *(undefined8 *)(param_1 + 0x15f0) = uVar13;
                                                        if (0x15e < uVar12) {
                                                          uVar13 = *(undefined8 *)PTR_DAT_07103470;
                                                          *(undefined8 *)(param_1 + 0x1608) = 0x4e4;
                                                          *(undefined8 *)(param_1 + 0x1600) = uVar13
                                                          ;
                                                          if (uVar12 != 0x15f) {
                                                            uVar13 = *(undefined8 *)PTR_DAT_07102d10
                                                            ;
                                                            *(undefined8 *)(param_1 + 0x1618) =
                                                                 20000;
                                                            *(undefined8 *)(param_1 + 0x1610) =
                                                                 uVar13;
                                                            if (0x160 < uVar12) {
                                                              uVar13 = *(undefined8 *)
                                                                        PTR_DAT_071032e0;
                                                              *(undefined8 *)(param_1 + 0x1628) =
                                                                   0x4e22;
                                                              *(undefined8 *)(param_1 + 0x1620) =
                                                                   uVar13;
                                                              if (uVar12 != 0x161) {
                                                                uVar13 = *(undefined8 *)
                                                                          PTR_DAT_07102950;
                                                                *(undefined8 *)(param_1 + 0x1638) =
                                                                     0x4e2;
                                                                *(undefined8 *)(param_1 + 0x1630) =
                                                                     uVar13;
                                                                if (0x162 < uVar12) {
                                                                  uVar13 = *(undefined8 *)
                                                                            PTR_DAT_07102f28;
                                                                  *(undefined8 *)(param_1 + 0x1648)
                                                                       = 0x4e3;
                                                                  *(undefined8 *)(param_1 + 0x1640)
                                                                       = uVar13;
                                                                  if (uVar12 != 0x163) {
                                                                    uVar13 = *(undefined8 *)
                                                                              PTR_DAT_07102a98;
                                                                    *(undefined8 *)
                                                                     (param_1 + 0x1658) = 0x4e21;
                                                                    *(undefined8 *)
                                                                     (param_1 + 0x1650) = uVar13;
                                                                    if (0x164 < uVar12) {
                                                                      uVar13 = *(undefined8 *)
                                                                                PTR_DAT_071030b0;
                                                                      *(undefined8 *)
                                                                       (param_1 + 0x1668) = 0x4e23;
                                                                      *(undefined8 *)
                                                                       (param_1 + 0x1660) = uVar13;
                                                                      if (uVar12 != 0x165) {
                                                                        uVar13 = *(undefined8 *)
                                                                                  PTR_DAT_07102f10;
                                                                        *(undefined8 *)
                                                                         (param_1 + 0x1678) = 0x4e24
                                                                        ;
                                                                        *(undefined8 *)
                                                                         (param_1 + 0x1670) = uVar13
                                                                        ;
                                                                        if (0x166 < uVar12) {
                                                                          uVar13 = *(undefined8 *)
                                                                                    PTR_DAT_071029d8
                                                                          ;
                                                                          *(undefined8 *)
                                                                           (param_1 + 0x1688) =
                                                                               0x4e25;
                                                                          *(undefined8 *)
                                                                           (param_1 + 0x1680) =
                                                                               uVar13;
                                                                          if (uVar12 != 0x167) {
                                                                            uVar13 = *(undefined8 *)
                                                                                                                                                                            
                                                  PTR_DAT_07102c50;
                                                  *(undefined8 *)(param_1 + 0x1698) = 0x4f25;
                                                  *(undefined8 *)(param_1 + 0x1690) = uVar13;
                                                  if (0x168 < uVar12) {
                                                    uVar13 = *(undefined8 *)PTR_DAT_07103418;
                                                    *(undefined8 *)(param_1 + 0x16a8) = 0x4f2d;
                                                    *(undefined8 *)(param_1 + 0x16a0) = uVar13;
                                                    if (uVar12 != 0x169) {
                                                      uVar13 = *(undefined8 *)PTR_DAT_07102d70;
                                                      *(undefined8 *)(param_1 + 0x16b8) = 0x51c8;
                                                      *(undefined8 *)(param_1 + 0x16b0) = uVar13;
                                                      if (0x16a < uVar12) {
                                                        uVar13 = *(undefined8 *)PTR_DAT_07102870;
                                                        *(undefined8 *)(param_1 + 0x16c8) = 0x51d5;
                                                        *(undefined8 *)(param_1 + 0x16c0) = uVar13;
                                                        if (uVar12 != 0x16b) {
                                                          uVar13 = *(undefined8 *)PTR_DAT_07102840;
                                                          *(undefined8 *)(param_1 + 0x16d8) = 0xc433
                                                          ;
                                                          *(undefined8 *)(param_1 + 0x16d0) = uVar13
                                                          ;
                                                          if (0x16c < uVar12) {
                                                            uVar13 = *(undefined8 *)PTR_DAT_07102f90
                                                            ;
                                                            *(undefined8 *)(param_1 + 0x16e8) =
                                                                 0x5161;
                                                            *(undefined8 *)(param_1 + 0x16e0) =
                                                                 uVar13;
                                                            if (uVar12 != 0x16d) {
                                                              uVar13 = *(undefined8 *)
                                                                        PTR_DAT_07102900;
                                                              *(undefined8 *)(param_1 + 0x16f8) =
                                                                   0xcadc;
                                                              *(undefined8 *)(param_1 + 0x16f0) =
                                                                   uVar13;
                                                              if (0x16e < uVar12) {
                                                                uVar13 = *(undefined8 *)
                                                                          PTR_DAT_07103318;
                                                                *(undefined8 *)(param_1 + 0x1708) =
                                                                     0xcae0;
                                                                *(undefined8 *)(param_1 + 0x1700) =
                                                                     uVar13;
                                                                if (uVar12 != 0x16f) {
                                                                  uVar13 = *(undefined8 *)
                                                                            PTR_DAT_071033b0;
                                                                  *(undefined8 *)(param_1 + 0x1718)
                                                                       = 0xcadc;
                                                                  *(undefined8 *)(param_1 + 0x1710)
                                                                       = uVar13;
                                                                  if (0x170 < uVar12) {
                                                                    uVar13 = *(undefined8 *)
                                                                              PTR_DAT_07103300;
                                                                    *(undefined8 *)
                                                                     (param_1 + 0x1728) = 0x7149;
                                                                    *(undefined8 *)
                                                                     (param_1 + 0x1720) = uVar13;
                                                                    if (uVar12 != 0x171) {
                                                                      uVar13 = *(undefined8 *)
                                                                                PTR_DAT_071027e8;
                                                                      *(undefined8 *)
                                                                       (param_1 + 0x1738) = 0x4e89;
                                                                      *(undefined8 *)
                                                                       (param_1 + 0x1730) = uVar13;
                                                                      if (0x172 < uVar12) {
                                                                        uVar13 = *(undefined8 *)
                                                                                  PTR_DAT_07102b20;
                                                                        *(undefined8 *)
                                                                         (param_1 + 0x1748) = 0x4e8a
                                                                        ;
                                                                        *(undefined8 *)
                                                                         (param_1 + 0x1740) = uVar13
                                                                        ;
                                                                        if (uVar12 != 0x173) {
                                                                          uVar13 = *(undefined8 *)
                                                                                    PTR_DAT_071032a8
                                                                          ;
                                                                          *(undefined8 *)
                                                                           (param_1 + 0x1758) =
                                                                               0x4e8c;
                                                                          *(undefined8 *)
                                                                           (param_1 + 0x1750) =
                                                                               uVar13;
                                                                          if (0x174 < uVar12) {
                                                                            uVar13 = *(undefined8 *)
                                                                                                                                                                            
                                                  PTR_DAT_07103258;
                                                  *(undefined8 *)(param_1 + 0x1768) = 0x4e8b;
                                                  *(undefined8 *)(param_1 + 0x1760) = uVar13;
                                                  if (uVar12 != 0x175) {
                                                    uVar13 = *(undefined8 *)PTR_DAT_07102b90;
                                                    *(undefined8 *)(param_1 + 0x1778) = 0xdeae;
                                                    *(undefined8 *)(param_1 + 6000) = uVar13;
                                                    if (0x176 < uVar12) {
                                                      uVar13 = *(undefined8 *)PTR_DAT_07102890;
                                                      *(undefined8 *)(param_1 + 0x1788) = 0xdeab;
                                                      *(undefined8 *)(param_1 + 0x1780) = uVar13;
                                                      if (uVar12 != 0x177) {
                                                        uVar13 = *(undefined8 *)PTR_DAT_07102df0;
                                                        *(undefined8 *)(param_1 + 0x1798) = 0xdeaa;
                                                        *(undefined8 *)(param_1 + 0x1790) = uVar13;
                                                        if (0x178 < uVar12) {
                                                          uVar13 = *(undefined8 *)PTR_DAT_07102860;
                                                          *(undefined8 *)(param_1 + 0x17a8) = 0xdeb2
                                                          ;
                                                          *(undefined8 *)(param_1 + 0x17a0) = uVar13
                                                          ;
                                                          if (uVar12 != 0x179) {
                                                            uVar13 = *(undefined8 *)PTR_DAT_07102a90
                                                            ;
                                                            *(undefined8 *)(param_1 + 0x17b8) =
                                                                 0xdeb0;
                                                            *(undefined8 *)(param_1 + 0x17b0) =
                                                                 uVar13;
                                                            if (0x17a < uVar12) {
                                                              uVar13 = *(undefined8 *)
                                                                        PTR_DAT_07103388;
                                                              *(undefined8 *)(param_1 + 0x17c8) =
                                                                   0xdeb1;
                                                              *(undefined8 *)(param_1 + 0x17c0) =
                                                                   uVar13;
                                                              if (uVar12 != 0x17b) {
                                                                uVar13 = *(undefined8 *)
                                                                          PTR_DAT_07102fe0;
                                                                *(undefined8 *)(param_1 + 0x17d8) =
                                                                     0xdeaf;
                                                                *(undefined8 *)(param_1 + 0x17d0) =
                                                                     uVar13;
                                                                if (0x17c < uVar12) {
                                                                  uVar13 = *(undefined8 *)
                                                                            PTR_DAT_071031c8;
                                                                  *(undefined8 *)(param_1 + 0x17e8)
                                                                       = 0xdeb3;
                                                                  *(undefined8 *)(param_1 + 0x17e0)
                                                                       = uVar13;
                                                                  if (uVar12 != 0x17d) {
                                                                    uVar13 = *(undefined8 *)
                                                                              PTR_DAT_07103028;
                                                                    *(undefined8 *)
                                                                     (param_1 + 0x17f8) = 0xdeac;
                                                                    *(undefined8 *)
                                                                     (param_1 + 0x17f0) = uVar13;
                                                                    if (0x17e < uVar12) {
                                                                      uVar13 = *(undefined8 *)
                                                                                PTR_DAT_07103148;
                                                                      *(undefined8 *)
                                                                       (param_1 + 0x1808) = 0xdead;
                                                                      *(undefined8 *)
                                                                       (param_1 + 0x1800) = uVar13;
                                                                      if (uVar12 != 0x17f) {
                                                                        uVar13 = *(undefined8 *)
                                                                                  PTR_DAT_07102d08;
                                                                        *(undefined8 *)
                                                                         (param_1 + 0x1818) = 0x2714
                                                                        ;
                                                                        *(undefined8 *)
                                                                         (param_1 + 0x1810) = uVar13
                                                                        ;
                                                                        if (0x180 < uVar12) {
                                                                          uVar13 = *(undefined8 *)
                                                                                    PTR_DAT_07102d58
                                                                          ;
                                                                          *(undefined8 *)
                                                                           (param_1 + 0x1828) =
                                                                               0x272d;
                                                                          *(undefined8 *)
                                                                           (param_1 + 0x1820) =
                                                                               uVar13;
                                                                          if (uVar12 != 0x181) {
                                                                            uVar13 = *(undefined8 *)
                                                                                                                                                                            
                                                  PTR_DAT_07102b10;
                                                  *(undefined8 *)(param_1 + 0x1838) = 0x2718;
                                                  *(undefined8 *)(param_1 + 0x1830) = uVar13;
                                                  if (0x182 < uVar12) {
                                                    uVar13 = *(undefined8 *)PTR_DAT_07103140;
                                                    *(undefined8 *)(param_1 + 0x1848) = 0x2712;
                                                    *(undefined8 *)(param_1 + 0x1840) = uVar13;
                                                    if (uVar12 != 0x183) {
                                                      uVar13 = *(undefined8 *)PTR_DAT_071028f0;
                                                      *(undefined8 *)(param_1 + 0x1858) = 0x2762;
                                                      *(undefined8 *)(param_1 + 0x1850) = uVar13;
                                                      if (0x184 < uVar12) {
                                                        uVar13 = *(undefined8 *)PTR_DAT_07102960;
                                                        *(undefined8 *)(param_1 + 0x1868) = 0x2717;
                                                        *(undefined8 *)(param_1 + 0x1860) = uVar13;
                                                        if (uVar12 != 0x185) {
                                                          uVar13 = *(undefined8 *)PTR_DAT_071028e0;
                                                          *(undefined8 *)(param_1 + 0x1878) = 0x2716
                                                          ;
                                                          *(undefined8 *)(param_1 + 0x1870) = uVar13
                                                          ;
                                                          if (0x186 < uVar12) {
                                                            uVar13 = *(undefined8 *)PTR_DAT_07102f70
                                                            ;
                                                            *(undefined8 *)(param_1 + 0x1888) =
                                                                 0x2715;
                                                            *(undefined8 *)(param_1 + 0x1880) =
                                                                 uVar13;
                                                            if (uVar12 != 0x187) {
                                                              uVar13 = *(undefined8 *)
                                                                        PTR_DAT_07102e80;
                                                              *(undefined8 *)(param_1 + 0x1898) =
                                                                   0x275f;
                                                              *(undefined8 *)(param_1 + 0x1890) =
                                                                   uVar13;
                                                              if (0x188 < uVar12) {
                                                                uVar13 = *(undefined8 *)
                                                                          PTR_DAT_07102f40;
                                                                *(undefined8 *)(param_1 + 0x18a8) =
                                                                     0x2711;
                                                                *(undefined8 *)(param_1 + 0x18a0) =
                                                                     uVar13;
                                                                if (uVar12 != 0x189) {
                                                                  uVar13 = *(undefined8 *)
                                                                            PTR_DAT_07103128;
                                                                  *(undefined8 *)(param_1 + 0x18b8)
                                                                       = 0x2713;
                                                                  *(undefined8 *)(param_1 + 0x18b0)
                                                                       = uVar13;
                                                                  if (0x18a < uVar12) {
                                                                    uVar13 = *(undefined8 *)
                                                                              PTR_DAT_07102f60;
                                                                    *(undefined8 *)
                                                                     (param_1 + 0x18c8) = 0x271a;
                                                                    *(undefined8 *)
                                                                     (param_1 + 0x18c0) = uVar13;
                                                                    if (uVar12 != 0x18b) {
                                                                      uVar13 = *(undefined8 *)
                                                                                PTR_DAT_07102ae8;
                                                                      *(undefined8 *)
                                                                       (param_1 + 0x18d8) = 0x2725;
                                                                      *(undefined8 *)
                                                                       (param_1 + 0x18d0) = uVar13;
                                                                      if (0x18c < uVar12) {
                                                                        uVar13 = *(undefined8 *)
                                                                                  PTR_DAT_07103120;
                                                                        *(undefined8 *)
                                                                         (param_1 + 0x18e8) = 0x2761
                                                                        ;
                                                                        *(undefined8 *)
                                                                         (param_1 + 0x18e0) = uVar13
                                                                        ;
                                                                        if (uVar12 != 0x18d) {
                                                                          uVar13 = *(undefined8 *)
                                                                                    PTR_DAT_07102ec0
                                                                          ;
                                                                          *(undefined8 *)
                                                                           (param_1 + 0x18f8) =
                                                                               0x2721;
                                                                          *(undefined8 *)
                                                                           (param_1 + 0x18f0) =
                                                                               uVar13;
                                                                          if (0x18e < uVar12) {
                                                                            uVar13 = *(undefined8 *)
                                                                                                                                                                            
                                                  PTR_DAT_07103110;
                                                  *(undefined8 *)(param_1 + 0x1908) = 0x3a4;
                                                  *(undefined8 *)(param_1 + 0x1900) = uVar13;
                                                  if (uVar12 != 399) {
                                                    uVar13 = *(undefined8 *)PTR_DAT_07102a48;
                                                    *(undefined8 *)(param_1 + 0x1918) = 0x3a4;
                                                    *(undefined8 *)(param_1 + 0x1910) = uVar13;
                                                    if (400 < uVar12) {
                                                      uVar13 = *(undefined8 *)PTR_DAT_07102e70;
                                                      *(undefined8 *)(param_1 + 0x1928) = 65000;
                                                      *(undefined8 *)(param_1 + 0x1920) = uVar13;
                                                      if (uVar12 != 0x191) {
                                                        uVar13 = *(undefined8 *)PTR_DAT_071034b0;
                                                        *(undefined8 *)(param_1 + 0x1938) = 0xfde9;
                                                        *(undefined8 *)(param_1 + 0x1930) = uVar13;
                                                        if (0x192 < uVar12) {
                                                          uVar13 = *(undefined8 *)PTR_DAT_07102fb0;
                                                          *(undefined8 *)(param_1 + 0x1948) = 65000;
                                                          *(undefined8 *)(param_1 + 0x1940) = uVar13
                                                          ;
                                                          if (uVar12 != 0x193) {
                                                            uVar13 = *(undefined8 *)PTR_DAT_07102d20
                                                            ;
                                                            *(undefined8 *)(param_1 + 0x1958) =
                                                                 0xfde9;
                                                            *(undefined8 *)(param_1 + 0x1950) =
                                                                 uVar13;
                                                            puVar3 = PTR_DAT_070fc608;
                                                            if (0x194 < uVar12) {
                                                              uVar13 = *(undefined8 *)
                                                                        PTR_DAT_07103368;
                                                              *(undefined8 *)(param_1 + 0x1968) =
                                                                   0x3b6;
                                                              *(undefined8 *)(param_1 + 0x1960) =
                                                                   uVar13;
                                                              puVar8 = PTR_DAT_071027d8;
                                                              **(long **)(*(long *)puVar3 + 0xb8) =
                                                                   param_1;
                                                              lVar11 = FUN_03188b1c(*(undefined8 *)
                                                                                     puVar8,0x62);
                                                              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                                                                FUN_03188cd8();
                                                              }
                                                              uVar12 = (uint)*(ulong *)(lVar11 + 
                                                  0x18);
                                                  if (uVar12 != 0) {
                                                    uVar13 = *unaff_x26;
                                                    *(undefined **)(lVar11 + 0x20) = &DAT_04e40025;
                                                    *(undefined8 *)(lVar11 + 0x28) = uVar13;
                                                    if (uVar12 != 1) {
                                                      uVar13 = *(undefined8 *)puVar2;
                                                      *(undefined8 *)(lVar11 + 0x30) = 0x4e401b5;
                                                      *(undefined8 *)(lVar11 + 0x38) = uVar13;
                                                      if (2 < uVar12) {
                                                        uVar13 = *(undefined8 *)puVar4;
                                                        *(undefined8 *)(lVar11 + 0x40) = 0x4e401f4;
                                                        *(undefined8 *)(lVar11 + 0x48) = uVar13;
                                                        if (uVar12 != 3) {
                                                          uVar13 = *unaff_x28;
                                                          *(undefined8 *)(lVar11 + 0x50) =
                                                               0x20204e802c4;
                                                          *(undefined8 *)(lVar11 + 0x58) = uVar13;
                                                          if (4 < uVar12) {
                                                            uVar13 = *(undefined8 *)puVar5;
                                                            *(undefined8 *)(lVar11 + 0x60) =
                                                                 0x4e502e1;
                                                            *(undefined8 *)(lVar11 + 0x68) = uVar13;
                                                            if (uVar12 != 5) {
                                                              uVar13 = *(undefined8 *)puVar6;
                                                              *(undefined8 *)(lVar11 + 0x70) =
                                                                   0x4e90307;
                                                              *(undefined8 *)(lVar11 + 0x78) =
                                                                   uVar13;
                                                              if (6 < uVar12) {
                                                                uVar13 = *(undefined8 *)
                                                                          PTR_DAT_07102b88;
                                                                *(undefined8 *)(lVar11 + 0x80) =
                                                                     0x4e40352;
                                                                *(undefined8 *)(lVar11 + 0x88) =
                                                                     uVar13;
                                                                if (uVar12 != 7) {
                                                                  uVar13 = *(undefined8 *)
                                                                            PTR_DAT_07102d88;
                                                                  *(undefined8 *)(lVar11 + 0x90) =
                                                                       0x20204e20354;
                                                                  *(undefined8 *)(lVar11 + 0x98) =
                                                                       uVar13;
                                                                  if (8 < uVar12) {
                                                                    uVar13 = *(undefined8 *)puVar7;
                                                                    *(undefined8 *)(lVar11 + 0xa0) =
                                                                         0x4e40357;
                                                                    *(undefined8 *)(lVar11 + 0xa8) =
                                                                         uVar13;
                                                                    if (uVar12 != 9) {
                                                                      uVar13 = *(undefined8 *)
                                                                                PTR_DAT_07102b48;
                                                                      *(undefined8 *)(lVar11 + 0xb0)
                                                                           = 0x4e60359;
                                                                      *(undefined8 *)(lVar11 + 0xb8)
                                                                           = uVar13;
                                                                      if (10 < uVar12) {
                                                                        uVar13 = *unaff_x25;
                                                                        *(undefined8 *)
                                                                         (lVar11 + 0xc0) = 0x4e4035a
                                                                        ;
                                                                        *(undefined8 *)
                                                                         (lVar11 + 200) = uVar13;
                                                                        if (uVar12 != 0xb) {
                                                                          uVar13 = *(undefined8 *)
                                                                                    puVar9;
                                                                          *(undefined8 *)
                                                                           (lVar11 + 0xd0) =
                                                                               0x4e4035c;
                                                                          *(undefined8 *)
                                                                           (lVar11 + 0xd8) = uVar13;
                                                                          if (0xc < uVar12) {
                                                                            uVar13 = *(undefined8 *)
                                                                                                                                                                            
                                                  PTR_DAT_07102da0;
                                                  *(undefined8 *)(lVar11 + 0xe0) = 0x4e4035d;
                                                  *(undefined8 *)(lVar11 + 0xe8) = uVar13;
                                                  if (uVar12 != 0xd) {
                                                    uVar13 = *unaff_x29;
                                                    *(undefined8 *)(lVar11 + 0xf0) = 0x20204e7035e;
                                                    *(undefined8 *)(lVar11 + 0xf8) = uVar13;
                                                    if (0xe < uVar12) {
                                                      uVar13 = *(undefined8 *)PTR_DAT_071033e0;
                                                      *(undefined8 *)(lVar11 + 0x100) = 0x4e4035f;
                                                      *(undefined8 *)(lVar11 + 0x108) = uVar13;
                                                      puVar2 = PTR_DAT_07103448;
                                                      if (uVar12 != 0xf) {
                                                        uVar13 = *(undefined8 *)PTR_DAT_071028c0;
                                                        *(undefined8 *)(lVar11 + 0x110) = 0x4e80360;
                                                        *(undefined8 *)(lVar11 + 0x118) = uVar13;
                                                        if (0x10 < uVar12) {
                                                          uVar13 = *(undefined8 *)puVar2;
                                                          *(undefined8 *)(lVar11 + 0x120) =
                                                               0x4e40361;
                                                          *(undefined8 *)(lVar11 + 0x128) = uVar13;
                                                          if (uVar12 != 0x11) {
                                                            uVar13 = *(undefined8 *)PTR_DAT_07102ca0
                                                            ;
                                                            *(undefined8 *)(lVar11 + 0x130) =
                                                                 0x20204e30362;
                                                            *(undefined8 *)(lVar11 + 0x138) = uVar13
                                                            ;
                                                            puVar2 = PTR_DAT_07102d68;
                                                            if (0x12 < uVar12) {
                                                              uVar13 = *(undefined8 *)
                                                                        PTR_DAT_07102940;
                                                              *(undefined8 *)(lVar11 + 0x140) =
                                                                   0x4e50365;
                                                              *(undefined8 *)(lVar11 + 0x148) =
                                                                   uVar13;
                                                              if (uVar12 != 0x13) {
                                                                uVar13 = *(undefined8 *)puVar2;
                                                                *(undefined8 *)(lVar11 + 0x150) =
                                                                     0x4e20366;
                                                                *(undefined8 *)(lVar11 + 0x158) =
                                                                     uVar13;
                                                                if (0x14 < uVar12) {
                                                                  uVar13 = *(undefined8 *)
                                                                            PTR_DAT_07103048;
                                                                  *(undefined8 *)(lVar11 + 0x160) =
                                                                       0x303036a036a;
                                                                  *(undefined8 *)(lVar11 + 0x168) =
                                                                       uVar13;
                                                                  puVar4 = PTR_DAT_071033e8;
                                                                  puVar2 = PTR_DAT_07102990;
                                                                  if (uVar12 != 0x15) {
                                                                    uVar13 = *(undefined8 *)
                                                                              PTR_DAT_07102ff8;
                                                                    *(undefined8 *)(lVar11 + 0x170)
                                                                         = 0x4e5036b;
                                                                    *(undefined8 *)(lVar11 + 0x178)
                                                                         = uVar13;
                                                                    if (0x16 < uVar12) {
                                                                      uVar13 = *(undefined8 *)
                                                                                PTR_DAT_071033a8;
                                                                      *(undefined8 *)
                                                                       (lVar11 + 0x180) =
                                                                           0x30303a403a4;
                                                                      *(undefined8 *)
                                                                       (lVar11 + 0x188) = uVar13;
                                                                      if (uVar12 != 0x17) {
                                                                        uVar13 = *(undefined8 *)
                                                                                  PTR_DAT_07102dd0;
                                                                        *(undefined8 *)
                                                                         (lVar11 + 400) =
                                                                             0x30303a803a8;
                                                                        *(undefined8 *)
                                                                         (lVar11 + 0x198) = uVar13;
                                                                        if (0x18 < uVar12) {
                                                                          uVar13 = *(undefined8 *)
                                                                                    PTR_DAT_071029f0
                                                                          ;
                                                                          *(undefined8 *)
                                                                           (lVar11 + 0x1a0) =
                                                                               0x30303b503b5;
                                                                          *(undefined8 *)
                                                                           (lVar11 + 0x1a8) = uVar13
                                                                          ;
                                                                          if (uVar12 != 0x19) {
                                                                            uVar13 = *(undefined8 *)
                                                                                                                                                                            
                                                  PTR_DAT_07102c88;
                                                  *(undefined8 *)(lVar11 + 0x1b0) = 0x30303b603b6;
                                                  *(undefined8 *)(lVar11 + 0x1b8) = uVar13;
                                                  if (0x1a < uVar12) {
                                                    uVar13 = *(undefined8 *)PTR_DAT_07102f88;
                                                    *(undefined8 *)(lVar11 + 0x1c0) = 0x4e60402;
                                                    *(undefined8 *)(lVar11 + 0x1c8) = uVar13;
                                                    if (uVar12 != 0x1b) {
                                                      uVar13 = *(undefined8 *)PTR_DAT_071027e0;
                                                      *(undefined8 *)(lVar11 + 0x1d0) = 0x4e40417;
                                                      *(undefined8 *)(lVar11 + 0x1d8) = uVar13;
                                                      if (0x1c < uVar12) {
                                                        uVar13 = *(undefined8 *)PTR_DAT_071028f8;
                                                        *(undefined8 *)(lVar11 + 0x1e0) = 0x4e40474;
                                                        *(undefined8 *)(lVar11 + 0x1e8) = uVar13;
                                                        if (uVar12 != 0x1d) {
                                                          uVar13 = *(undefined8 *)PTR_DAT_07102f80;
                                                          *(undefined8 *)(lVar11 + 0x1f0) =
                                                               0x4e40475;
                                                          *(undefined8 *)(lVar11 + 0x1f8) = uVar13;
                                                          if (0x1e < uVar12) {
                                                            uVar13 = *(undefined8 *)PTR_DAT_07102808
                                                            ;
                                                            *(undefined8 *)(lVar11 + 0x200) =
                                                                 0x4e40476;
                                                            *(undefined8 *)(lVar11 + 0x208) = uVar13
                                                            ;
                                                            if (uVar12 != 0x1f) {
                                                              uVar13 = *(undefined8 *)
                                                                        PTR_DAT_071030f8;
                                                              *(undefined8 *)(lVar11 + 0x210) =
                                                                   0x4e40477;
                                                              *(undefined8 *)(lVar11 + 0x218) =
                                                                   uVar13;
                                                              if (0x20 < uVar12) {
                                                                uVar13 = *(undefined8 *)
                                                                          PTR_DAT_07103198;
                                                                *(undefined8 *)(lVar11 + 0x220) =
                                                                     0x4e40478;
                                                                *(undefined8 *)(lVar11 + 0x228) =
                                                                     uVar13;
                                                                if (uVar12 != 0x21) {
                                                                  uVar13 = *(undefined8 *)
                                                                            PTR_DAT_07102aa0;
                                                                  *(undefined8 *)(lVar11 + 0x230) =
                                                                       0x4e40479;
                                                                  *(undefined8 *)(lVar11 + 0x238) =
                                                                       uVar13;
                                                                  puVar5 = PTR_DAT_07103480;
                                                                  if (0x22 < uVar12) {
                                                                    uVar13 = *(undefined8 *)
                                                                              PTR_DAT_07102ba0;
                                                                    *(undefined8 *)(lVar11 + 0x240)
                                                                         = 0x4e4047a;
                                                                    *(undefined8 *)(lVar11 + 0x248)
                                                                         = uVar13;
                                                                    if (uVar12 != 0x23) {
                                                                      uVar13 = *(undefined8 *)
                                                                                PTR_DAT_07103040;
                                                                      *(undefined8 *)
                                                                       (lVar11 + 0x250) = 0x4e4047b;
                                                                      *(undefined8 *)(lVar11 + 600)
                                                                           = uVar13;
                                                                      if (0x24 < uVar12) {
                                                                        uVar13 = *(undefined8 *)
                                                                                  PTR_DAT_07102fb8;
                                                                        *(undefined8 *)
                                                                         (lVar11 + 0x260) =
                                                                             0x4e4047c;
                                                                        *(undefined8 *)
                                                                         (lVar11 + 0x268) = uVar13;
                                                                        if (uVar12 != 0x25) {
                                                                          uVar13 = *(undefined8 *)
                                                                                    PTR_DAT_07103478
                                                                          ;
                                                                          *(undefined8 *)
                                                                           (lVar11 + 0x270) =
                                                                               0x4e4047d;
                                                                          *(undefined8 *)
                                                                           (lVar11 + 0x278) = uVar13
                                                                          ;
                                                                          if (0x26 < uVar12) {
                                                                            uVar13 = *(undefined8 *)
                                                                                                                                                                            
                                                  PTR_DAT_07102ab8;
                                                  *(undefined8 *)(lVar11 + 0x280) = 0x20004b004b0;
                                                  *(undefined8 *)(lVar11 + 0x288) = uVar13;
                                                  if (uVar12 != 0x27) {
                                                    uVar13 = *(undefined8 *)PTR_DAT_07103200;
                                                    *(undefined8 *)(lVar11 + 0x290) = 0x4b004b1;
                                                    *(undefined8 *)(lVar11 + 0x298) = uVar13;
                                                    if (0x28 < uVar12) {
                                                      uVar13 = *(undefined8 *)PTR_DAT_07102ed8;
                                                      *(undefined8 *)(lVar11 + 0x2a0) =
                                                           0x30304e204e2;
                                                      *(undefined8 *)(lVar11 + 0x2a8) = uVar13;
                                                      if (uVar12 != 0x29) {
                                                        uVar13 = *(undefined8 *)PTR_DAT_071034e8;
                                                        *(undefined8 *)(lVar11 + 0x2b0) =
                                                             0x30304e304e3;
                                                        *(undefined8 *)(lVar11 + 0x2b8) = uVar13;
                                                        if (0x2a < uVar12) {
                                                          uVar13 = *(undefined8 *)PTR_DAT_07102ad8;
                                                          *(undefined8 *)(lVar11 + 0x2c0) =
                                                               0x30304e404e4;
                                                          *(undefined8 *)(lVar11 + 0x2c8) = uVar13;
                                                          if (uVar12 != 0x2b) {
                                                            uVar13 = *(undefined8 *)PTR_DAT_07102948
                                                            ;
                                                            *(undefined8 *)(lVar11 + 0x2d0) =
                                                                 0x30304e504e5;
                                                            *(undefined8 *)(lVar11 + 0x2d8) = uVar13
                                                            ;
                                                            if (0x2c < uVar12) {
                                                              uVar13 = *(undefined8 *)
                                                                        PTR_DAT_07103250;
                                                              *(undefined8 *)(lVar11 + 0x2e0) =
                                                                   0x30304e604e6;
                                                              *(undefined8 *)(lVar11 + 0x2e8) =
                                                                   uVar13;
                                                              if (uVar12 != 0x2d) {
                                                                uVar13 = *(undefined8 *)
                                                                          PTR_DAT_07102bf0;
                                                                *(undefined8 *)(lVar11 + 0x2f0) =
                                                                     0x30304e704e7;
                                                                *(undefined8 *)(lVar11 + 0x2f8) =
                                                                     uVar13;
                                                                if (0x2e < uVar12) {
                                                                  uVar13 = *(undefined8 *)
                                                                            PTR_DAT_07102de8;
                                                                  *(undefined8 *)(lVar11 + 0x300) =
                                                                       0x30304e804e8;
                                                                  *(undefined8 *)(lVar11 + 0x308) =
                                                                       uVar13;
                                                                  if (uVar12 != 0x2f) {
                                                                    uVar13 = *(undefined8 *)
                                                                              PTR_DAT_07102da8;
                                                                    *(undefined8 *)(lVar11 + 0x310)
                                                                         = 0x30304e904e9;
                                                                    *(undefined8 *)(lVar11 + 0x318)
                                                                         = uVar13;
                                                                    if (0x30 < uVar12) {
                                                                      uVar13 = *(undefined8 *)
                                                                                PTR_DAT_07102850;
                                                                      *(undefined8 *)(lVar11 + 800)
                                                                           = 0x30304ea04ea;
                                                                      *(undefined8 *)
                                                                       (lVar11 + 0x328) = uVar13;
                                                                      if (uVar12 != 0x31) {
                                                                        uVar13 = *(undefined8 *)
                                                                                  PTR_DAT_07102fe8;
                                                                        *(undefined8 *)
                                                                         (lVar11 + 0x330) =
                                                                             0x4e42710;
                                                                        *(undefined8 *)
                                                                         (lVar11 + 0x338) = uVar13;
                                                                        if (0x32 < uVar12) {
                                                                          uVar13 = *(undefined8 *)
                                                                                    PTR_DAT_07102e80
                                                                          ;
                                                                          *(undefined8 *)
                                                                           (lVar11 + 0x340) =
                                                                               0x4e4275f;
                                                                          *(undefined8 *)
                                                                           (lVar11 + 0x348) = uVar13
                                                                          ;
                                                                          if (uVar12 != 0x33) {
                                                                            uVar13 = *(undefined8 *)
                                                                                                                                                                            
                                                  PTR_DAT_071032d8;
                                                  *(undefined8 *)(lVar11 + 0x350) = 0x4b02ee0;
                                                  *(undefined8 *)(lVar11 + 0x358) = uVar13;
                                                  if (0x34 < uVar12) {
                                                    uVar13 = *(undefined8 *)PTR_DAT_07102f58;
                                                    *(undefined8 *)(lVar11 + 0x360) = 0x4b02ee1;
                                                    *(undefined8 *)(lVar11 + 0x368) = uVar13;
                                                    if (uVar12 != 0x35) {
                                                      uVar13 = *(undefined8 *)PTR_DAT_07103068;
                                                      *(undefined8 *)(lVar11 + 0x370) =
                                                           0x10104e44e9f;
                                                      *(undefined8 *)(lVar11 + 0x378) = uVar13;
                                                      if (0x36 < uVar12) {
                                                        uVar13 = *(undefined8 *)PTR_DAT_07102aa8;
                                                        *(undefined8 *)(lVar11 + 0x380) = 0x4e44f31;
                                                        *(undefined8 *)(lVar11 + 0x388) = uVar13;
                                                        if (uVar12 != 0x37) {
                                                          uVar13 = *(undefined8 *)PTR_DAT_071033a0;
                                                          *(undefined8 *)(lVar11 + 0x390) =
                                                               0x4e44f35;
                                                          *(undefined8 *)(lVar11 + 0x398) = uVar13;
                                                          if (0x38 < uVar12) {
                                                            uVar13 = *(undefined8 *)PTR_DAT_07102af0
                                                            ;
                                                            *(undefined8 *)(lVar11 + 0x3a0) =
                                                                 0x4e44f36;
                                                            *(undefined8 *)(lVar11 + 0x3a8) = uVar13
                                                            ;
                                                            if (uVar12 != 0x39) {
                                                              uVar13 = *(undefined8 *)
                                                                        PTR_DAT_07103098;
                                                              *(undefined8 *)(lVar11 + 0x3b0) =
                                                                   0x4e44f38;
                                                              *(undefined8 *)(lVar11 + 0x3b8) =
                                                                   uVar13;
                                                              if (0x3a < uVar12) {
                                                                uVar13 = *(undefined8 *)
                                                                          PTR_DAT_07102a50;
                                                                *(undefined8 *)(lVar11 + 0x3c0) =
                                                                     0x4e44f3c;
                                                                *(undefined8 *)(lVar11 + 0x3c8) =
                                                                     uVar13;
                                                                if (uVar12 != 0x3b) {
                                                                  uVar13 = *(undefined8 *)
                                                                            PTR_DAT_07102bb0;
                                                                  *(undefined8 *)(lVar11 + 0x3d0) =
                                                                       0x4e44f3d;
                                                                  *(undefined8 *)(lVar11 + 0x3d8) =
                                                                       uVar13;
                                                                  if (0x3c < uVar12) {
                                                                    uVar13 = *(undefined8 *)
                                                                              PTR_DAT_071029a0;
                                                                    *(undefined8 *)(lVar11 + 0x3e0)
                                                                         = 0x3a44f42;
                                                                    *(undefined8 *)(lVar11 + 1000) =
                                                                         uVar13;
                                                                    if (uVar12 != 0x3d) {
                                                                      uVar13 = *(undefined8 *)
                                                                                PTR_DAT_07102a20;
                                                                      *(undefined8 *)
                                                                       (lVar11 + 0x3f0) = 0x4e44f49;
                                                                      *(undefined8 *)
                                                                       (lVar11 + 0x3f8) = uVar13;
                                                                      if (0x3e < uVar12) {
                                                                        uVar13 = *(undefined8 *)
                                                                                  PTR_DAT_07102b68;
                                                                        *(undefined8 *)
                                                                         (lVar11 + 0x400) =
                                                                             0x4e84fc4;
                                                                        *(undefined8 *)
                                                                         (lVar11 + 0x408) = uVar13;
                                                                        if ((*(ulong *)(lVar11 + 
                                                  0x18) & 0xffffffc0) != 0) {
                                                    uVar13 = *(undefined8 *)PTR_DAT_07102eb8;
                                                    *(undefined8 *)(lVar11 + 0x410) = 0x4e74fc8;
                                                    *(undefined8 *)(lVar11 + 0x418) = uVar13;
                                                    if (0x40 < uVar12) {
                                                      *(undefined8 *)(lVar11 + 0x428) =
                                                           *(undefined8 *)puVar4;
                                                      *(undefined8 *)(lVar11 + 0x420) =
                                                           0x30304e35182;
                                                      if (uVar12 != 0x41) {
                                                        uVar13 = *(undefined8 *)PTR_DAT_07102958;
                                                        *(undefined8 *)(lVar11 + 0x430) = 0x4e45187;
                                                        *(undefined8 *)(lVar11 + 0x438) = uVar13;
                                                        puVar4 = PTR_DAT_07102d00;
                                                        if (0x42 < uVar12) {
                                                          uVar13 = *(undefined8 *)PTR_DAT_07102eb0;
                                                          *(undefined8 *)(lVar11 + 0x440) =
                                                               0x4e35221;
                                                          *(undefined8 *)(lVar11 + 0x448) = uVar13;
                                                          if (uVar12 != 0x43) {
                                                            uVar13 = *(undefined8 *)puVar2;
                                                            *(undefined8 *)(lVar11 + 0x450) =
                                                                 0x30304e3556a;
                                                            *(undefined8 *)(lVar11 + 0x458) = uVar13
                                                            ;
                                                            if (0x44 < uVar12) {
                                                              uVar13 = *(undefined8 *)
                                                                        PTR_DAT_070cbca8;
                                                              *(undefined8 *)(lVar11 + 0x460) =
                                                                   0x30304e46faf;
                                                              *(undefined8 *)(lVar11 + 0x468) =
                                                                   uVar13;
                                                              if (uVar12 != 0x45) {
                                                                uVar13 = *(undefined8 *)
                                                                          PTR_DAT_07103160;
                                                                *(undefined8 *)(lVar11 + 0x470) =
                                                                     0x30304e26fb0;
                                                                *(undefined8 *)(lVar11 + 0x478) =
                                                                     uVar13;
                                                                if (0x46 < uVar12) {
                                                                  uVar13 = *(undefined8 *)
                                                                            PTR_DAT_07103008;
                                                                  *(undefined8 *)(lVar11 + 0x480) =
                                                                       0x10104e66fb1;
                                                                  *(undefined8 *)(lVar11 + 0x488) =
                                                                       uVar13;
                                                                  if (uVar12 != 0x47) {
                                                                    uVar13 = *(undefined8 *)
                                                                              PTR_DAT_071031d8;
                                                                    *(undefined8 *)(lVar11 + 0x490)
                                                                         = 0x30304e96fb2;
                                                                    *(undefined8 *)(lVar11 + 0x498)
                                                                         = uVar13;
                                                                    if (0x48 < uVar12) {
                                                                      uVar13 = *(undefined8 *)
                                                                                PTR_DAT_07103230;
                                                                      *(undefined8 *)
                                                                       (lVar11 + 0x4a0) =
                                                                           0x30304e36fb3;
                                                                      *(undefined8 *)
                                                                       (lVar11 + 0x4a8) = uVar13;
                                                                      if (uVar12 != 0x49) {
                                                                        uVar13 = *(undefined8 *)
                                                                                  PTR_DAT_07102848;
                                                                        *(undefined8 *)
                                                                         (lVar11 + 0x4b0) =
                                                                             0x30304e86fb4;
                                                                        *(undefined8 *)
                                                                         (lVar11 + 0x4b8) = uVar13;
                                                                        if (0x4a < uVar12) {
                                                                          uVar13 = *(undefined8 *)
                                                                                    PTR_DAT_07102968
                                                                          ;
                                                                          *(undefined8 *)
                                                                           (lVar11 + 0x4c0) =
                                                                               0x30304e56fb5;
                                                                          *(undefined8 *)
                                                                           (lVar11 + 0x4c8) = uVar13
                                                                          ;
                                                                          if (uVar12 != 0x4b) {
                                                                            uVar13 = *(undefined8 *)
                                                                                                                                                                            
                                                  PTR_DAT_07103208;
                                                  *(undefined8 *)(lVar11 + 0x4d0) = 0x20204e76fb6;
                                                  *(undefined8 *)(lVar11 + 0x4d8) = uVar13;
                                                  if (0x4c < uVar12) {
                                                    uVar13 = *(undefined8 *)PTR_DAT_07102bd0;
                                                    *(undefined8 *)(lVar11 + 0x4e0) = 0x30304e66fb7;
                                                    *(undefined8 *)(lVar11 + 0x4e8) = uVar13;
                                                    if (uVar12 != 0x4d) {
                                                      uVar13 = *(undefined8 *)PTR_DAT_071034c8;
                                                      *(undefined8 *)(lVar11 + 0x4f0) =
                                                           0x30104e46fbd;
                                                      *(undefined8 *)(lVar11 + 0x4f8) = uVar13;
                                                      if (0x4e < uVar12) {
                                                        uVar13 = *(undefined8 *)PTR_DAT_07102c78;
                                                        *(undefined8 *)(lVar11 + 0x500) =
                                                             0x30304e796c6;
                                                        *(undefined8 *)(lVar11 + 0x508) = uVar13;
                                                        if (uVar12 != 0x4f) {
                                                          *(undefined8 *)(lVar11 + 0x518) =
                                                               *(undefined8 *)puVar5;
                                                          *(undefined8 *)(lVar11 + 0x510) =
                                                               0x10103a4c42c;
                                                          if (0x50 < uVar12) {
                                                            uVar13 = *(undefined8 *)PTR_DAT_071034e0
                                                            ;
                                                            *(undefined8 *)(lVar11 + 0x520) =
                                                                 0x30103a4c42d;
                                                            *(undefined8 *)(lVar11 + 0x528) = uVar13
                                                            ;
                                                            if (uVar12 != 0x51) {
                                                              uVar13 = *(undefined8 *)puVar5;
                                                              *(undefined8 *)(lVar11 + 0x530) =
                                                                   0x3a4c42e;
                                                              *(undefined8 *)(lVar11 + 0x538) =
                                                                   uVar13;
                                                              if (0x52 < uVar12) {
                                                                uVar13 = *(undefined8 *)
                                                                          PTR_DAT_071029a8;
                                                                *(undefined8 *)(lVar11 + 0x540) =
                                                                     0x30303a4cadc;
                                                                *(undefined8 *)(lVar11 + 0x548) =
                                                                     uVar13;
                                                                if (uVar12 != 0x53) {
                                                                  uVar13 = *(undefined8 *)
                                                                            PTR_DAT_07103408;
                                                                  *(undefined8 *)(lVar11 + 0x550) =
                                                                       0x10103b5caed;
                                                                  *(undefined8 *)(lVar11 + 0x558) =
                                                                       uVar13;
                                                                  if (0x54 < uVar12) {
                                                                    uVar13 = *(undefined8 *)
                                                                              PTR_DAT_07102880;
                                                                    *(undefined8 *)(lVar11 + 0x560)
                                                                         = 0x30303a8d698;
                                                                    *(undefined8 *)(lVar11 + 0x568)
                                                                         = uVar13;
                                                                    if (uVar12 != 0x55) {
                                                                      uVar13 = *(undefined8 *)
                                                                                PTR_DAT_07102df0;
                                                                      *(undefined8 *)
                                                                       (lVar11 + 0x570) = 0xdeaadeaa
                                                                      ;
                                                                      *(undefined8 *)
                                                                       (lVar11 + 0x578) = uVar13;
                                                                      if (0x56 < uVar12) {
                                                                        uVar13 = *(undefined8 *)
                                                                                  PTR_DAT_07102890;
                                                                        *(undefined8 *)
                                                                         (lVar11 + 0x580) =
                                                                             0xdeabdeab;
                                                                        *(undefined8 *)
                                                                         (lVar11 + 0x588) = uVar13;
                                                                        if (uVar12 != 0x57) {
                                                                          uVar13 = *(undefined8 *)
                                                                                    PTR_DAT_07103028
                                                                          ;
                                                                          *(undefined8 *)
                                                                           (lVar11 + 0x590) =
                                                                               0xdeacdeac;
                                                                          *(undefined8 *)
                                                                           (lVar11 + 0x598) = uVar13
                                                                          ;
                                                                          if (0x58 < uVar12) {
                                                                            uVar13 = *(undefined8 *)
                                                                                                                                                                            
                                                  PTR_DAT_07103148;
                                                  *(undefined8 *)(lVar11 + 0x5a0) = 0xdeaddead;
                                                  *(undefined8 *)(lVar11 + 0x5a8) = uVar13;
                                                  if (uVar12 != 0x59) {
                                                    uVar13 = *(undefined8 *)PTR_DAT_07102b90;
                                                    *(undefined8 *)(lVar11 + 0x5b0) = 0xdeaedeae;
                                                    *(undefined8 *)(lVar11 + 0x5b8) = uVar13;
                                                    if (0x5a < uVar12) {
                                                      uVar13 = *(undefined8 *)PTR_DAT_07102fe0;
                                                      *(undefined8 *)(lVar11 + 0x5c0) = 0xdeafdeaf;
                                                      *(undefined8 *)(lVar11 + 0x5c8) = uVar13;
                                                      if (uVar12 != 0x5b) {
                                                        uVar13 = *(undefined8 *)PTR_DAT_07102a90;
                                                        *(undefined8 *)(lVar11 + 0x5d0) = 0xdeb0deb0
                                                        ;
                                                        *(undefined8 *)(lVar11 + 0x5d8) = uVar13;
                                                        if (0x5c < uVar12) {
                                                          uVar13 = *(undefined8 *)PTR_DAT_07103388;
                                                          *(undefined8 *)(lVar11 + 0x5e0) =
                                                               0xdeb1deb1;
                                                          *(undefined8 *)(lVar11 + 0x5e8) = uVar13;
                                                          if (uVar12 != 0x5d) {
                                                            uVar13 = *(undefined8 *)PTR_DAT_07102860
                                                            ;
                                                            *(undefined8 *)(lVar11 + 0x5f0) =
                                                                 0xdeb2deb2;
                                                            *(undefined8 *)(lVar11 + 0x5f8) = uVar13
                                                            ;
                                                            if (0x5e < uVar12) {
                                                              uVar13 = *(undefined8 *)
                                                                        PTR_DAT_071031c8;
                                                              *(undefined8 *)(lVar11 + 0x600) =
                                                                   0xdeb3deb3;
                                                              *(undefined8 *)(lVar11 + 0x608) =
                                                                   uVar13;
                                                              if (uVar12 != 0x5f) {
                                                                *(undefined8 *)(lVar11 + 0x618) =
                                                                     *(undefined8 *)puVar4;
                                                                *(undefined8 *)(lVar11 + 0x610) =
                                                                     0x10104b0fde8;
                                                                if (0x60 < uVar12) {
                                                                  uVar13 = *(undefined8 *)
                                                                            PTR_DAT_070c2af0;
                                                                  *(undefined8 *)(lVar11 + 0x620) =
                                                                       0x30304b0fde9;
                                                                  *(undefined8 *)(lVar11 + 0x628) =
                                                                       uVar13;
                                                                  if (uVar12 != 0x61) {
                                                                    *(undefined8 *)(lVar11 + 0x638)
                                                                         = 0;
                                                                    *(undefined8 *)(lVar11 + 0x630)
                                                                         = 0;
                                                                    puVar2 = PTR_DAT_070c2ef0;
                                                                    *(long *)(*(long *)(*(long *)
                                                  puVar3 + 0xb8) + 8) = lVar11;
                                                  iVar10 = FUN_058bf824();
                                                  iVar1 = *(int *)(*(long *)puVar2 + 0xe4);
                                                  *(int *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10)
                                                       = iVar10 + -1;
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
                                                  lVar11 = *(long *)puVar2;
                                                  if (*(int *)(lVar11 + 0xe4) == 0) {
                                                    thunk_FUN_031e5338();
                                                    lVar11 = *(long *)puVar2;
                                                  }
                                                  uVar14 = *(undefined8 *)
                                                            (*(long *)(lVar11 + 0xb8) + 0x18);
                                                  uVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (*(undefined8 *)puVar4);
                                                  FUN_05240ec0(uVar13,uVar14,*(undefined8 *)puVar5);
                                                  uVar14 = *(undefined8 *)puVar7;
                                                  *(undefined8 *)
                                                   (*(long *)(*(long *)puVar3 + 0xb8) + 0x18) =
                                                       uVar13;
                                                  uVar13 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar14);
                                                  FUN_05189a80(uVar13,*(undefined8 *)puVar6);
                                                  *(undefined8 *)
                                                   (*(long *)(*(long *)puVar3 + 0xb8) + 0x20) =
                                                       uVar13;
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
                    /* WARNING: Subroutine does not return */
  FUN_03188ce0();
}


