/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeObject
ENTRY_POINT: 07440bcc
PROGRAM: cac-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonConvert__SerializeObject(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
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
  long *plVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  long unaff_x19;
  undefined8 uVar15;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000008 = 0;
  uStack0000000000000000 = param_2;
  thunk_FUN_03f86000();
  puVar3 = PTR_DAT_0912ff58;
  uStack0000000000000008 = CONCAT62(uStack0000000000000008._2_6_,0x6fb7);
  if ((*(uint *)(unaff_x19 + 0x18) & 0xffffff00) != 0) {
    *(undefined8 *)(unaff_x19 + 0x1018) = uStack0000000000000008;
    *(undefined8 *)(unaff_x19 + 0x1010) = uStack0000000000000000;
    thunk_FUN_03f86000(unaff_x19 + 0x1010,0);
    uStack0000000000000000 = *(undefined8 *)puVar3;
    uStack0000000000000008 = 0;
    thunk_FUN_03f86000();
    puVar3 = PTR_DAT_09130428;
    uStack0000000000000008 = CONCAT62(uStack0000000000000008._2_6_,0x3b5);
    if (0x100 < *(uint *)(unaff_x19 + 0x18)) {
      *(undefined8 *)(unaff_x19 + 0x1028) = uStack0000000000000008;
      *(undefined8 *)(unaff_x19 + 0x1020) = uStack0000000000000000;
      thunk_FUN_03f86000(unaff_x19 + 0x1020,0);
      uStack0000000000000000 = *(undefined8 *)puVar3;
      uStack0000000000000008 = 0;
      thunk_FUN_03f86000();
      puVar3 = PTR_DAT_091300e0;
      uStack0000000000000008 = CONCAT62(uStack0000000000000008._2_6_,0x3a8);
      if (0x101 < *(uint *)(unaff_x19 + 0x18)) {
        *(undefined8 *)(unaff_x19 + 0x1038) = uStack0000000000000008;
        *(undefined8 *)(unaff_x19 + 0x1030) = uStack0000000000000000;
        thunk_FUN_03f86000(unaff_x19 + 0x1030,0);
        uStack0000000000000000 = *(undefined8 *)puVar3;
        uStack0000000000000008 = 0;
        thunk_FUN_03f86000();
        puVar3 = PTR_DAT_09130498;
        uStack0000000000000008 = CONCAT62(uStack0000000000000008._2_6_,0x4e9f);
        if (0x102 < *(uint *)(unaff_x19 + 0x18)) {
          *(undefined8 *)(unaff_x19 + 0x1048) = uStack0000000000000008;
          *(undefined8 *)(unaff_x19 + 0x1040) = uStack0000000000000000;
          thunk_FUN_03f86000(unaff_x19 + 0x1040,0);
          uStack0000000000000000 = *(undefined8 *)puVar3;
          uStack0000000000000008 = 0;
          thunk_FUN_03f86000();
          puVar3 = PTR_DAT_09130010;
          uStack0000000000000008 = CONCAT62(uStack0000000000000008._2_6_,0x4e9f);
          if (0x103 < *(uint *)(unaff_x19 + 0x18)) {
            *(undefined8 *)(unaff_x19 + 0x1058) = uStack0000000000000008;
            *(undefined8 *)(unaff_x19 + 0x1050) = uStack0000000000000000;
            thunk_FUN_03f86000(unaff_x19 + 0x1050,0);
            uStack0000000000000000 = *(undefined8 *)puVar3;
            uStack0000000000000008 = 0;
            thunk_FUN_03f86000();
            puVar3 = PTR_DAT_091307f8;
            uStack0000000000000008 = CONCAT62(uStack0000000000000008._2_6_,0x6faf);
            if (0x104 < *(uint *)(unaff_x19 + 0x18)) {
              *(undefined8 *)(unaff_x19 + 0x1068) = uStack0000000000000008;
              *(undefined8 *)(unaff_x19 + 0x1060) = uStack0000000000000000;
              thunk_FUN_03f86000(unaff_x19 + 0x1060,0);
              uStack0000000000000000 = *(undefined8 *)puVar3;
              uStack0000000000000008 = 0;
              thunk_FUN_03f86000();
              puVar3 = PTR_DAT_0912ff70;
              uStack0000000000000008 = CONCAT62(uStack0000000000000008._2_6_,0x6fb0);
              if (0x105 < *(uint *)(unaff_x19 + 0x18)) {
                *(undefined8 *)(unaff_x19 + 0x1078) = uStack0000000000000008;
                *(undefined8 *)(unaff_x19 + 0x1070) = uStack0000000000000000;
                thunk_FUN_03f86000(unaff_x19 + 0x1070,0);
                uStack0000000000000000 = *(undefined8 *)puVar3;
                uStack0000000000000008 = 0;
                thunk_FUN_03f86000();
                puVar3 = PTR_DAT_0912fda8;
                uStack0000000000000008 = CONCAT62(uStack0000000000000008._2_6_,0x4e9f);
                if (0x106 < *(uint *)(unaff_x19 + 0x18)) {
                  *(undefined8 *)(unaff_x19 + 0x1088) = uStack0000000000000008;
                  *(undefined8 *)(unaff_x19 + 0x1080) = uStack0000000000000000;
                  thunk_FUN_03f86000(unaff_x19 + 0x1080,0);
                  uStack0000000000000000 = *(undefined8 *)puVar3;
                  uStack0000000000000008 = 0;
                  thunk_FUN_03f86000();
                  puVar3 = PTR_DAT_09130480;
                  uStack0000000000000008 = CONCAT62(uStack0000000000000008._2_6_,0x6faf);
                  if (0x107 < *(uint *)(unaff_x19 + 0x18)) {
                    *(undefined8 *)(unaff_x19 + 0x1098) = uStack0000000000000008;
                    *(undefined8 *)(unaff_x19 + 0x1090) = uStack0000000000000000;
                    thunk_FUN_03f86000(unaff_x19 + 0x1090,0);
                    uStack0000000000000000 = *(undefined8 *)puVar3;
                    uStack0000000000000008 = 0;
                    thunk_FUN_03f86000();
                    puVar3 = PTR_DAT_09130488;
                    uStack0000000000000008 = CONCAT62(uStack0000000000000008._2_6_,0x6fbd);
                    if (0x108 < *(uint *)(unaff_x19 + 0x18)) {
                      *(undefined8 *)(unaff_x19 + 0x10a8) = uStack0000000000000008;
                      *(undefined8 *)(unaff_x19 + 0x10a0) = uStack0000000000000000;
                      thunk_FUN_03f86000(unaff_x19 + 0x10a0,0);
                      uStack0000000000000000 = *(undefined8 *)puVar3;
                      uStack0000000000000008 = 0;
                      thunk_FUN_03f86000();
                      puVar3 = PTR_DAT_091300c8;
                      uStack0000000000000008 = CONCAT62(uStack0000000000000008._2_6_,0x6faf);
                      if (0x109 < *(uint *)(unaff_x19 + 0x18)) {
                        *(undefined8 *)(unaff_x19 + 0x10b8) = uStack0000000000000008;
                        *(undefined8 *)(unaff_x19 + 0x10b0) = uStack0000000000000000;
                        thunk_FUN_03f86000(unaff_x19 + 0x10b0,0);
                        uStack0000000000000000 = *(undefined8 *)puVar3;
                        uStack0000000000000008 = 0;
                        thunk_FUN_03f86000();
                        puVar3 = PTR_DAT_09130628;
                        uStack0000000000000008 = CONCAT62(uStack0000000000000008._2_6_,0x6fb0);
                        if (0x10a < *(uint *)(unaff_x19 + 0x18)) {
                          *(undefined8 *)(unaff_x19 + 0x10c8) = uStack0000000000000008;
                          *(undefined8 *)(unaff_x19 + 0x10c0) = uStack0000000000000000;
                          thunk_FUN_03f86000(unaff_x19 + 0x10c0,0);
                          uStack0000000000000000 = *(undefined8 *)puVar3;
                          uStack0000000000000008 = 0;
                          thunk_FUN_03f86000();
                          puVar3 = PTR_DAT_09130398;
                          uStack0000000000000008 = CONCAT62(uStack0000000000000008._2_6_,0x6fb0);
                          if (0x10b < *(uint *)(unaff_x19 + 0x18)) {
                            *(undefined8 *)(unaff_x19 + 0x10d8) = uStack0000000000000008;
                            *(undefined8 *)(unaff_x19 + 0x10d0) = uStack0000000000000000;
                            thunk_FUN_03f86000(unaff_x19 + 0x10d0,0);
                            uStack0000000000000000 = *(undefined8 *)puVar3;
                            uStack0000000000000008 = 0;
                            thunk_FUN_03f86000();
                            puVar3 = PTR_DAT_09130418;
                            uStack0000000000000008 = CONCAT62(uStack0000000000000008._2_6_,0x6fb1);
                            if (0x10c < *(uint *)(unaff_x19 + 0x18)) {
                              *(undefined8 *)(unaff_x19 + 0x10e8) = uStack0000000000000008;
                              *(undefined8 *)(unaff_x19 + 0x10e0) = uStack0000000000000000;
                              thunk_FUN_03f86000(unaff_x19 + 0x10e0,0);
                              uStack0000000000000000 = *(undefined8 *)puVar3;
                              uStack0000000000000008 = 0;
                              thunk_FUN_03f86000();
                              puVar3 = PTR_DAT_0912fe18;
                              uStack0000000000000008 = CONCAT62(uStack0000000000000008._2_6_,0x6fb1)
                              ;
                              if (0x10d < *(uint *)(unaff_x19 + 0x18)) {
                                *(undefined8 *)(unaff_x19 + 0x10f8) = uStack0000000000000008;
                                *(undefined8 *)(unaff_x19 + 0x10f0) = uStack0000000000000000;
                                thunk_FUN_03f86000(unaff_x19 + 0x10f0,0);
                                uStack0000000000000000 = *(undefined8 *)puVar3;
                                uStack0000000000000008 = 0;
                                thunk_FUN_03f86000();
                                puVar3 = PTR_DAT_0912fda0;
                                uStack0000000000000008 =
                                     CONCAT62(uStack0000000000000008._2_6_,0x6fb2);
                                if (0x10e < *(uint *)(unaff_x19 + 0x18)) {
                                  *(undefined8 *)(unaff_x19 + 0x1108) = uStack0000000000000008;
                                  *(undefined8 *)(unaff_x19 + 0x1100) = uStack0000000000000000;
                                  thunk_FUN_03f86000(unaff_x19 + 0x1100,0);
                                  uStack0000000000000000 = *(undefined8 *)puVar3;
                                  uStack0000000000000008 = 0;
                                  thunk_FUN_03f86000();
                                  puVar3 = PTR_DAT_0912fd80;
                                  uStack0000000000000008 =
                                       CONCAT62(uStack0000000000000008._2_6_,0x6fb2);
                                  if (0x10f < *(uint *)(unaff_x19 + 0x18)) {
                                    *(undefined8 *)(unaff_x19 + 0x1118) = uStack0000000000000008;
                                    *(undefined8 *)(unaff_x19 + 0x1110) = uStack0000000000000000;
                                    thunk_FUN_03f86000(unaff_x19 + 0x1110,0);
                                    uStack0000000000000000 = *(undefined8 *)puVar3;
                                    uStack0000000000000008 = 0;
                                    thunk_FUN_03f86000();
                                    puVar3 = PTR_DAT_09130898;
                                    uStack0000000000000008 =
                                         CONCAT62(uStack0000000000000008._2_6_,0x6fb3);
                                    if (0x110 < *(uint *)(unaff_x19 + 0x18)) {
                                      *(undefined8 *)(unaff_x19 + 0x1128) = uStack0000000000000008;
                                      *(undefined8 *)(unaff_x19 + 0x1120) = uStack0000000000000000;
                                      thunk_FUN_03f86000(unaff_x19 + 0x1120,0);
                                      uStack0000000000000000 = *(undefined8 *)puVar3;
                                      uStack0000000000000008 = 0;
                                      thunk_FUN_03f86000();
                                      puVar3 = PTR_DAT_09130500;
                                      uStack0000000000000008 =
                                           CONCAT62(uStack0000000000000008._2_6_,0x6fb3);
                                      if (0x111 < *(uint *)(unaff_x19 + 0x18)) {
                                        *(undefined8 *)(unaff_x19 + 0x1138) = uStack0000000000000008
                                        ;
                                        *(undefined8 *)(unaff_x19 + 0x1130) = uStack0000000000000000
                                        ;
                                        thunk_FUN_03f86000(unaff_x19 + 0x1130,0);
                                        uStack0000000000000000 = *(undefined8 *)puVar3;
                                        uStack0000000000000008 = 0;
                                        thunk_FUN_03f86000();
                                        puVar3 = PTR_DAT_09130828;
                                        uStack0000000000000008 =
                                             CONCAT62(uStack0000000000000008._2_6_,0x6fb4);
                                        if (0x112 < *(uint *)(unaff_x19 + 0x18)) {
                                          *(undefined8 *)(unaff_x19 + 0x1148) =
                                               uStack0000000000000008;
                                          *(undefined8 *)(unaff_x19 + 0x1140) =
                                               uStack0000000000000000;
                                          thunk_FUN_03f86000(unaff_x19 + 0x1140,0);
                                          uStack0000000000000000 = *(undefined8 *)puVar3;
                                          uStack0000000000000008 = 0;
                                          thunk_FUN_03f86000();
                                          puVar3 = PTR_DAT_0912ff10;
                                          uStack0000000000000008 =
                                               CONCAT62(uStack0000000000000008._2_6_,0x6fb4);
                                          if (0x113 < *(uint *)(unaff_x19 + 0x18)) {
                                            *(undefined8 *)(unaff_x19 + 0x1158) =
                                                 uStack0000000000000008;
                                            *(undefined8 *)(unaff_x19 + 0x1150) =
                                                 uStack0000000000000000;
                                            thunk_FUN_03f86000(unaff_x19 + 0x1150,0);
                                            uStack0000000000000000 = *(undefined8 *)puVar3;
                                            uStack0000000000000008 = 0;
                                            thunk_FUN_03f86000();
                                            puVar3 = PTR_DAT_0912fe48;
                                            uStack0000000000000008 =
                                                 CONCAT62(uStack0000000000000008._2_6_,0x6fb5);
                                            if (0x114 < *(uint *)(unaff_x19 + 0x18)) {
                                              *(undefined8 *)(unaff_x19 + 0x1168) =
                                                   uStack0000000000000008;
                                              *(undefined8 *)(unaff_x19 + 0x1160) =
                                                   uStack0000000000000000;
                                              thunk_FUN_03f86000(unaff_x19 + 0x1160,0);
                                              uStack0000000000000000 = *(undefined8 *)puVar3;
                                              uStack0000000000000008 = 0;
                                              thunk_FUN_03f86000();
                                              puVar3 = PTR_DAT_091300e8;
                                              uStack0000000000000008 =
                                                   CONCAT62(uStack0000000000000008._2_6_,0x6fb5);
                                              if (0x115 < *(uint *)(unaff_x19 + 0x18)) {
                                                *(undefined8 *)(unaff_x19 + 0x1178) =
                                                     uStack0000000000000008;
                                                *(undefined8 *)(unaff_x19 + 0x1170) =
                                                     uStack0000000000000000;
                                                thunk_FUN_03f86000(unaff_x19 + 0x1170,0);
                                                uStack0000000000000000 = *(undefined8 *)puVar3;
                                                uStack0000000000000008 = 0;
                                                thunk_FUN_03f86000();
                                                puVar3 = PTR_DAT_09130688;
                                                uStack0000000000000008 =
                                                     CONCAT62(uStack0000000000000008._2_6_,0x6fb6);
                                                if (0x116 < *(uint *)(unaff_x19 + 0x18)) {
                                                  *(undefined8 *)(unaff_x19 + 0x1188) =
                                                       uStack0000000000000008;
                                                  *(undefined8 *)(unaff_x19 + 0x1180) =
                                                       uStack0000000000000000;
                                                  thunk_FUN_03f86000(unaff_x19 + 0x1180,0);
                                                  uStack0000000000000000 = *(undefined8 *)puVar3;
                                                  uStack0000000000000008 = 0;
                                                  thunk_FUN_03f86000();
                                                  puVar3 = PTR_DAT_091309b8;
                                                  uStack0000000000000008 =
                                                       CONCAT62(uStack0000000000000008._2_6_,0x6fb6)
                                                  ;
                                                  if (0x117 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x1198) =
                                                         uStack0000000000000008;
                                                    *(undefined8 *)(unaff_x19 + 0x1190) =
                                                         uStack0000000000000000;
                                                    thunk_FUN_03f86000(unaff_x19 + 0x1190,0);
                                                    uStack0000000000000000 = *(undefined8 *)puVar3;
                                                    uStack0000000000000008 = 0;
                                                    thunk_FUN_03f86000();
                                                    puVar3 = PTR_DAT_091309e8;
                                                    uStack0000000000000008 =
                                                         CONCAT62(uStack0000000000000008._2_6_,
                                                                  0x6fb7);
                                                    if (0x118 < *(uint *)(unaff_x19 + 0x18)) {
                                                      *(undefined8 *)(unaff_x19 + 0x11a8) =
                                                           uStack0000000000000008;
                                                      *(undefined8 *)(unaff_x19 + 0x11a0) =
                                                           uStack0000000000000000;
                                                      thunk_FUN_03f86000(unaff_x19 + 0x11a0,0);
                                                      uStack0000000000000000 = *(undefined8 *)puVar3
                                                      ;
                                                      uStack0000000000000008 = 0;
                                                      thunk_FUN_03f86000();
                                                      puVar3 = PTR_DAT_09130740;
                                                      uStack0000000000000008 =
                                                           CONCAT62(uStack0000000000000008._2_6_,
                                                                    0x6fb7);
                                                      if (0x119 < *(uint *)(unaff_x19 + 0x18)) {
                                                        *(undefined8 *)(unaff_x19 + 0x11b8) =
                                                             uStack0000000000000008;
                                                        *(undefined8 *)(unaff_x19 + 0x11b0) =
                                                             uStack0000000000000000;
                                                        thunk_FUN_03f86000(unaff_x19 + 0x11b0,0);
                                                        uStack0000000000000000 =
                                                             *(undefined8 *)puVar3;
                                                        uStack0000000000000008 = 0;
                                                        thunk_FUN_03f86000();
                                                        puVar3 = PTR_DAT_09130190;
                                                        uStack0000000000000008 =
                                                             CONCAT62(uStack0000000000000008._2_6_,
                                                                      0x551);
                                                        if (0x11a < *(uint *)(unaff_x19 + 0x18)) {
                                                          *(undefined8 *)(unaff_x19 + 0x11c8) =
                                                               uStack0000000000000008;
                                                          *(undefined8 *)(unaff_x19 + 0x11c0) =
                                                               uStack0000000000000000;
                                                          thunk_FUN_03f86000(unaff_x19 + 0x11c0,0);
                                                          uStack0000000000000000 =
                                                               *(undefined8 *)puVar3;
                                                          uStack0000000000000008 = 0;
                                                          thunk_FUN_03f86000();
                                                          puVar3 = PTR_DAT_091304c0;
                                                          uStack0000000000000008 =
                                                               CONCAT62(uStack0000000000000008._2_6_
                                                                        ,0x5182);
                                                          if (0x11b < *(uint *)(unaff_x19 + 0x18)) {
                                                            *(undefined8 *)(unaff_x19 + 0x11d8) =
                                                                 uStack0000000000000008;
                                                            *(undefined8 *)(unaff_x19 + 0x11d0) =
                                                                 uStack0000000000000000;
                                                            thunk_FUN_03f86000(unaff_x19 + 0x11d0,0)
                                                            ;
                                                            uStack0000000000000000 =
                                                                 *(undefined8 *)puVar3;
                                                            uStack0000000000000008 = 0;
                                                            thunk_FUN_03f86000();
                                                            puVar3 = PTR_DAT_09130978;
                                                            uStack0000000000000008 =
                                                                 CONCAT62(uStack0000000000000008.
                                                                          _2_6_,0x5182);
                                                            if (0x11c < *(uint *)(unaff_x19 + 0x18))
                                                            {
                                                              *(undefined8 *)(unaff_x19 + 0x11e8) =
                                                                   uStack0000000000000008;
                                                              *(undefined8 *)(unaff_x19 + 0x11e0) =
                                                                   uStack0000000000000000;
                                                              thunk_FUN_03f86000(unaff_x19 + 0x11e0,
                                                                                 0);
                                                              uStack0000000000000000 =
                                                                   *(undefined8 *)puVar3;
                                                              uStack0000000000000008 = 0;
                                                              thunk_FUN_03f86000();
                                                              puVar3 = PTR_DAT_0912fe30;
                                                              uStack0000000000000008 =
                                                                   CONCAT62(uStack0000000000000008.
                                                                            _2_6_,0x5182);
                                                              if (0x11d < *(uint *)(unaff_x19 + 0x18
                                                                                   )) {
                                                                *(undefined8 *)(unaff_x19 + 0x11f8)
                                                                     = uStack0000000000000008;
                                                                *(undefined8 *)(unaff_x19 + 0x11f0)
                                                                     = uStack0000000000000000;
                                                                thunk_FUN_03f86000(unaff_x19 +
                                                                                   0x11f0,0);
                                                                uStack0000000000000000 =
                                                                     *(undefined8 *)puVar3;
                                                                uStack0000000000000008 = 0;
                                                                thunk_FUN_03f86000();
                                                                puVar3 = PTR_DAT_0912ff20;
                                                                uStack0000000000000008 =
                                                                     CONCAT62(uStack0000000000000008
                                                                              ._2_6_,0x556a);
                                                                if (0x11e < *(uint *)(unaff_x19 +
                                                                                     0x18)) {
                                                                  *(undefined8 *)
                                                                   (unaff_x19 + 0x1208) =
                                                                       uStack0000000000000008;
                                                                  *(undefined8 *)
                                                                   (unaff_x19 + 0x1200) =
                                                                       uStack0000000000000000;
                                                                  thunk_FUN_03f86000(unaff_x19 +
                                                                                     0x1200,0);
                                                                  uStack0000000000000000 =
                                                                       *(undefined8 *)puVar3;
                                                                  uStack0000000000000008 = 0;
                                                                  thunk_FUN_03f86000();
                                                                  puVar3 = PTR_DAT_091301a0;
                                                                  uStack0000000000000008 =
                                                                       CONCAT62(
                                                  uStack0000000000000008._2_6_,0x556a);
                                                  if (0x11f < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x1218) =
                                                         uStack0000000000000008;
                                                    *(undefined8 *)(unaff_x19 + 0x1210) =
                                                         uStack0000000000000000;
                                                    thunk_FUN_03f86000(unaff_x19 + 0x1210,0);
                                                    uStack0000000000000000 = *(undefined8 *)puVar3;
                                                    uStack0000000000000008 = 0;
                                                    thunk_FUN_03f86000();
                                                    puVar3 = PTR_DAT_091305e8;
                                                    uStack0000000000000008 =
                                                         CONCAT62(uStack0000000000000008._2_6_,
                                                                  0x5182);
                                                    if (0x120 < *(uint *)(unaff_x19 + 0x18)) {
                                                      *(undefined8 *)(unaff_x19 + 0x1228) =
                                                           uStack0000000000000008;
                                                      *(undefined8 *)(unaff_x19 + 0x1220) =
                                                           uStack0000000000000000;
                                                      thunk_FUN_03f86000(unaff_x19 + 0x1220,0);
                                                      uStack0000000000000000 = *(undefined8 *)puVar3
                                                      ;
                                                      uStack0000000000000008 = 0;
                                                      thunk_FUN_03f86000();
                                                      puVar3 = PTR_DAT_091303f8;
                                                      uStack0000000000000008 =
                                                           CONCAT62(uStack0000000000000008._2_6_,
                                                                    0x3b5);
                                                      if (0x121 < *(uint *)(unaff_x19 + 0x18)) {
                                                        *(undefined8 *)(unaff_x19 + 0x1238) =
                                                             uStack0000000000000008;
                                                        *(undefined8 *)(unaff_x19 + 0x1230) =
                                                             uStack0000000000000000;
                                                        thunk_FUN_03f86000(unaff_x19 + 0x1230,0);
                                                        uStack0000000000000000 =
                                                             *(undefined8 *)puVar3;
                                                        uStack0000000000000008 = 0;
                                                        thunk_FUN_03f86000();
                                                        puVar3 = PTR_DAT_09130320;
                                                        uStack0000000000000008 =
                                                             CONCAT62(uStack0000000000000008._2_6_,
                                                                      0x3b5);
                                                        if (0x122 < *(uint *)(unaff_x19 + 0x18)) {
                                                          *(undefined8 *)(unaff_x19 + 0x1248) =
                                                               uStack0000000000000008;
                                                          *(undefined8 *)(unaff_x19 + 0x1240) =
                                                               uStack0000000000000000;
                                                          thunk_FUN_03f86000(unaff_x19 + 0x1240,0);
                                                          uStack0000000000000000 =
                                                               *(undefined8 *)puVar3;
                                                          uStack0000000000000008 = 0;
                                                          thunk_FUN_03f86000();
                                                          puVar3 = PTR_DAT_09130348;
                                                          uStack0000000000000008 =
                                                               CONCAT62(uStack0000000000000008._2_6_
                                                                        ,0x3b5);
                                                          if (0x123 < *(uint *)(unaff_x19 + 0x18)) {
                                                            *(undefined8 *)(unaff_x19 + 0x1258) =
                                                                 uStack0000000000000008;
                                                            *(undefined8 *)(unaff_x19 + 0x1250) =
                                                                 uStack0000000000000000;
                                                            thunk_FUN_03f86000(unaff_x19 + 0x1250,0)
                                                            ;
                                                            uStack0000000000000000 =
                                                                 *(undefined8 *)puVar3;
                                                            uStack0000000000000008 = 0;
                                                            thunk_FUN_03f86000();
                                                            puVar3 = PTR_DAT_09130008;
                                                            uStack0000000000000008 =
                                                                 CONCAT62(uStack0000000000000008.
                                                                          _2_6_,0x3b5);
                                                            if (0x124 < *(uint *)(unaff_x19 + 0x18))
                                                            {
                                                              *(undefined8 *)(unaff_x19 + 0x1268) =
                                                                   uStack0000000000000008;
                                                              *(undefined8 *)(unaff_x19 + 0x1260) =
                                                                   uStack0000000000000000;
                                                              thunk_FUN_03f86000(unaff_x19 + 0x1260,
                                                                                 0);
                                                              uStack0000000000000000 =
                                                                   *(undefined8 *)puVar3;
                                                              uStack0000000000000008 = 0;
                                                              thunk_FUN_03f86000();
                                                              puVar3 = PTR_DAT_09130708;
                                                              uStack0000000000000008 =
                                                                   CONCAT62(uStack0000000000000008.
                                                                            _2_6_,0x3b5);
                                                              if (0x125 < *(uint *)(unaff_x19 + 0x18
                                                                                   )) {
                                                                *(undefined8 *)(unaff_x19 + 0x1278)
                                                                     = uStack0000000000000008;
                                                                *(undefined8 *)(unaff_x19 + 0x1270)
                                                                     = uStack0000000000000000;
                                                                thunk_FUN_03f86000(unaff_x19 +
                                                                                   0x1270,0);
                                                                uStack0000000000000000 =
                                                                     *(undefined8 *)puVar3;
                                                                uStack0000000000000008 = 0;
                                                                thunk_FUN_03f86000();
                                                                puVar3 = PTR_DAT_0912ff80;
                                                                uStack0000000000000008 =
                                                                     CONCAT62(uStack0000000000000008
                                                                              ._2_6_,0x3b5);
                                                                if (0x126 < *(uint *)(unaff_x19 +
                                                                                     0x18)) {
                                                                  *(undefined8 *)
                                                                   (unaff_x19 + 0x1288) =
                                                                       uStack0000000000000008;
                                                                  *(undefined8 *)
                                                                   (unaff_x19 + 0x1280) =
                                                                       uStack0000000000000000;
                                                                  thunk_FUN_03f86000(unaff_x19 +
                                                                                     0x1280,0);
                                                                  uStack0000000000000000 =
                                                                       *(undefined8 *)puVar3;
                                                                  uStack0000000000000008 = 0;
                                                                  thunk_FUN_03f86000();
                                                                  puVar3 = PTR_DAT_0912fdf8;
                                                                  uStack0000000000000008 =
                                                                       CONCAT62(
                                                  uStack0000000000000008._2_6_,0x3b5);
                                                  if (0x127 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x1298) =
                                                         uStack0000000000000008;
                                                    *(undefined8 *)(unaff_x19 + 0x1290) =
                                                         uStack0000000000000000;
                                                    thunk_FUN_03f86000(unaff_x19 + 0x1290,0);
                                                    uStack0000000000000000 = *(undefined8 *)puVar3;
                                                    uStack0000000000000008 = 0;
                                                    thunk_FUN_03f86000();
                                                    puVar3 = PTR_DAT_0912fd88;
                                                    uStack0000000000000008 =
                                                         CONCAT62(uStack0000000000000008._2_6_,0x3b5
                                                                 );
                                                    if (0x128 < *(uint *)(unaff_x19 + 0x18)) {
                                                      *(undefined8 *)(unaff_x19 + 0x12a8) =
                                                           uStack0000000000000008;
                                                      *(undefined8 *)(unaff_x19 + 0x12a0) =
                                                           uStack0000000000000000;
                                                      thunk_FUN_03f86000(unaff_x19 + 0x12a0,0);
                                                      uStack0000000000000000 = *(undefined8 *)puVar3
                                                      ;
                                                      uStack0000000000000008 = 0;
                                                      thunk_FUN_03f86000();
                                                      puVar3 = PTR_DAT_09130960;
                                                      uStack0000000000000008 =
                                                           CONCAT62(uStack0000000000000008._2_6_,
                                                                    0x3b5);
                                                      if (0x129 < *(uint *)(unaff_x19 + 0x18)) {
                                                        *(undefined8 *)(unaff_x19 + 0x12b8) =
                                                             uStack0000000000000008;
                                                        *(undefined8 *)(unaff_x19 + 0x12b0) =
                                                             uStack0000000000000000;
                                                        thunk_FUN_03f86000(unaff_x19 + 0x12b0,0);
                                                        uStack0000000000000000 =
                                                             *(undefined8 *)puVar3;
                                                        uStack0000000000000008 = 0;
                                                        thunk_FUN_03f86000();
                                                        puVar3 = PTR_DAT_091303a0;
                                                        uStack0000000000000008 =
                                                             CONCAT62(uStack0000000000000008._2_6_,
                                                                      0x6faf);
                                                        if (0x12a < *(uint *)(unaff_x19 + 0x18)) {
                                                          *(undefined8 *)(unaff_x19 + 0x12c8) =
                                                               uStack0000000000000008;
                                                          *(undefined8 *)(unaff_x19 + 0x12c0) =
                                                               uStack0000000000000000;
                                                          thunk_FUN_03f86000(unaff_x19 + 0x12c0,0);
                                                          uStack0000000000000000 =
                                                               *(undefined8 *)puVar3;
                                                          uStack0000000000000008 = 0;
                                                          thunk_FUN_03f86000();
                                                          puVar3 = PTR_DAT_0912ff28;
                                                          uStack0000000000000008 =
                                                               CONCAT62(uStack0000000000000008._2_6_
                                                                        ,0x6fb0);
                                                          if (299 < *(uint *)(unaff_x19 + 0x18)) {
                                                            *(undefined8 *)(unaff_x19 + 0x12d8) =
                                                                 uStack0000000000000008;
                                                            *(undefined8 *)(unaff_x19 + 0x12d0) =
                                                                 uStack0000000000000000;
                                                            thunk_FUN_03f86000(unaff_x19 + 0x12d0,0)
                                                            ;
                                                            uStack0000000000000000 =
                                                                 *(undefined8 *)puVar3;
                                                            uStack0000000000000008 = 0;
                                                            thunk_FUN_03f86000();
                                                            puVar3 = PTR_DAT_09130760;
                                                            uStack0000000000000008 =
                                                                 CONCAT62(uStack0000000000000008.
                                                                          _2_6_,0x6fb1);
                                                            if (300 < *(uint *)(unaff_x19 + 0x18)) {
                                                              *(undefined8 *)(unaff_x19 + 0x12e8) =
                                                                   uStack0000000000000008;
                                                              *(undefined8 *)(unaff_x19 + 0x12e0) =
                                                                   uStack0000000000000000;
                                                              thunk_FUN_03f86000(unaff_x19 + 0x12e0,
                                                                                 0);
                                                              uStack0000000000000000 =
                                                                   *(undefined8 *)puVar3;
                                                              uStack0000000000000008 = 0;
                                                              thunk_FUN_03f86000();
                                                              puVar3 = PTR_DAT_091307c8;
                                                              uStack0000000000000008 =
                                                                   CONCAT62(uStack0000000000000008.
                                                                            _2_6_,0x6fb2);
                                                              if (0x12d < *(uint *)(unaff_x19 + 0x18
                                                                                   )) {
                                                                *(undefined8 *)(unaff_x19 + 0x12f8)
                                                                     = uStack0000000000000008;
                                                                *(undefined8 *)(unaff_x19 + 0x12f0)
                                                                     = uStack0000000000000000;
                                                                thunk_FUN_03f86000(unaff_x19 +
                                                                                   0x12f0,0);
                                                                uStack0000000000000000 =
                                                                     *(undefined8 *)puVar3;
                                                                uStack0000000000000008 = 0;
                                                                thunk_FUN_03f86000();
                                                                puVar3 = PTR_DAT_09130a20;
                                                                uStack0000000000000008 =
                                                                     CONCAT62(uStack0000000000000008
                                                                              ._2_6_,0x6fb7);
                                                                if (0x12e < *(uint *)(unaff_x19 +
                                                                                     0x18)) {
                                                                  *(undefined8 *)
                                                                   (unaff_x19 + 0x1308) =
                                                                       uStack0000000000000008;
                                                                  *(undefined8 *)
                                                                   (unaff_x19 + 0x1300) =
                                                                       uStack0000000000000000;
                                                                  thunk_FUN_03f86000(unaff_x19 +
                                                                                     0x1300,0);
                                                                  uStack0000000000000000 =
                                                                       *(undefined8 *)puVar3;
                                                                  uStack0000000000000008 = 0;
                                                                  thunk_FUN_03f86000();
                                                                  puVar3 = PTR_DAT_09130088;
                                                                  uStack0000000000000008 =
                                                                       CONCAT62(
                                                  uStack0000000000000008._2_6_,0x6fbd);
                                                  if (0x12f < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x1318) =
                                                         uStack0000000000000008;
                                                    *(undefined8 *)(unaff_x19 + 0x1310) =
                                                         uStack0000000000000000;
                                                    thunk_FUN_03f86000(unaff_x19 + 0x1310,0);
                                                    uStack0000000000000000 = *(undefined8 *)puVar3;
                                                    uStack0000000000000008 = 0;
                                                    thunk_FUN_03f86000();
                                                    puVar3 = PTR_DAT_09130308;
                                                    uStack0000000000000008 =
                                                         CONCAT62(uStack0000000000000008._2_6_,
                                                                  0x6faf);
                                                    if (0x130 < *(uint *)(unaff_x19 + 0x18)) {
                                                      *(undefined8 *)(unaff_x19 + 0x1328) =
                                                           uStack0000000000000008;
                                                      *(undefined8 *)(unaff_x19 + 0x1320) =
                                                           uStack0000000000000000;
                                                      thunk_FUN_03f86000(unaff_x19 + 0x1320,0);
                                                      uStack0000000000000000 = *(undefined8 *)puVar3
                                                      ;
                                                      uStack0000000000000008 = 0;
                                                      thunk_FUN_03f86000();
                                                      puVar3 = PTR_DAT_09130650;
                                                      uStack0000000000000008 =
                                                           CONCAT62(uStack0000000000000008._2_6_,
                                                                    0x6fb0);
                                                      if (0x131 < *(uint *)(unaff_x19 + 0x18)) {
                                                        *(undefined8 *)(unaff_x19 + 0x1338) =
                                                             uStack0000000000000008;
                                                        *(undefined8 *)(unaff_x19 + 0x1330) =
                                                             uStack0000000000000000;
                                                        thunk_FUN_03f86000(unaff_x19 + 0x1330,0);
                                                        uStack0000000000000000 =
                                                             *(undefined8 *)puVar3;
                                                        uStack0000000000000008 = 0;
                                                        thunk_FUN_03f86000();
                                                        puVar3 = PTR_DAT_0912ffc8;
                                                        uStack0000000000000008 =
                                                             CONCAT62(uStack0000000000000008._2_6_,
                                                                      0x6fb1);
                                                        if (0x132 < *(uint *)(unaff_x19 + 0x18)) {
                                                          *(undefined8 *)(unaff_x19 + 0x1348) =
                                                               uStack0000000000000008;
                                                          *(undefined8 *)(unaff_x19 + 0x1340) =
                                                               uStack0000000000000000;
                                                          thunk_FUN_03f86000(unaff_x19 + 0x1340,0);
                                                          uStack0000000000000000 =
                                                               *(undefined8 *)puVar3;
                                                          uStack0000000000000008 = 0;
                                                          thunk_FUN_03f86000();
                                                          puVar3 = PTR_DAT_091300b8;
                                                          uStack0000000000000008 =
                                                               CONCAT62(uStack0000000000000008._2_6_
                                                                        ,0x6fb2);
                                                          if (0x133 < *(uint *)(unaff_x19 + 0x18)) {
                                                            *(undefined8 *)(unaff_x19 + 0x1358) =
                                                                 uStack0000000000000008;
                                                            *(undefined8 *)(unaff_x19 + 0x1350) =
                                                                 uStack0000000000000000;
                                                            thunk_FUN_03f86000(unaff_x19 + 0x1350,0)
                                                            ;
                                                            uStack0000000000000000 =
                                                                 *(undefined8 *)puVar3;
                                                            uStack0000000000000008 = 0;
                                                            thunk_FUN_03f86000();
                                                            puVar3 = PTR_DAT_091301f8;
                                                            uStack0000000000000008 =
                                                                 CONCAT62(uStack0000000000000008.
                                                                          _2_6_,0x6fb7);
                                                            if (0x134 < *(uint *)(unaff_x19 + 0x18))
                                                            {
                                                              *(undefined8 *)(unaff_x19 + 0x1368) =
                                                                   uStack0000000000000008;
                                                              *(undefined8 *)(unaff_x19 + 0x1360) =
                                                                   uStack0000000000000000;
                                                              thunk_FUN_03f86000(unaff_x19 + 0x1360,
                                                                                 0);
                                                              uStack0000000000000000 =
                                                                   *(undefined8 *)puVar3;
                                                              uStack0000000000000008 = 0;
                                                              thunk_FUN_03f86000();
                                                              puVar3 = PTR_DAT_09130a68;
                                                              uStack0000000000000008 =
                                                                   CONCAT62(uStack0000000000000008.
                                                                            _2_6_,0x6fbd);
                                                              if (0x135 < *(uint *)(unaff_x19 + 0x18
                                                                                   )) {
                                                                *(undefined8 *)(unaff_x19 + 0x1378)
                                                                     = uStack0000000000000008;
                                                                *(undefined8 *)(unaff_x19 + 0x1370)
                                                                     = uStack0000000000000000;
                                                                thunk_FUN_03f86000(unaff_x19 +
                                                                                   0x1370,0);
                                                                uStack0000000000000000 =
                                                                     *(undefined8 *)puVar3;
                                                                uStack0000000000000008 = 0;
                                                                thunk_FUN_03f86000();
                                                                puVar3 = PTR_DAT_09130570;
                                                                uStack0000000000000008 =
                                                                     CONCAT62(uStack0000000000000008
                                                                              ._2_6_,0x6fb6);
                                                                if (0x136 < *(uint *)(unaff_x19 +
                                                                                     0x18)) {
                                                                  *(undefined8 *)(unaff_x19 + 5000)
                                                                       = uStack0000000000000008;
                                                                  *(undefined8 *)
                                                                   (unaff_x19 + 0x1380) =
                                                                       uStack0000000000000000;
                                                                  thunk_FUN_03f86000(unaff_x19 +
                                                                                     0x1380,0);
                                                                  uStack0000000000000000 =
                                                                       *(undefined8 *)puVar3;
                                                                  uStack0000000000000008 = 0;
                                                                  thunk_FUN_03f86000();
                                                                  puVar3 = PTR_DAT_0912fe58;
                                                                  uStack0000000000000008 =
                                                                       CONCAT62(
                                                  uStack0000000000000008._2_6_,10000);
                                                  if (0x137 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x1398) =
                                                         uStack0000000000000008;
                                                    *(undefined8 *)(unaff_x19 + 0x1390) =
                                                         uStack0000000000000000;
                                                    thunk_FUN_03f86000(unaff_x19 + 0x1390,0);
                                                    uStack0000000000000000 = *(undefined8 *)puVar3;
                                                    uStack0000000000000008 = 0;
                                                    thunk_FUN_03f86000();
                                                    puVar3 = PTR_DAT_091309b0;
                                                    uStack0000000000000008 =
                                                         CONCAT62(uStack0000000000000008._2_6_,0x3a4
                                                                 );
                                                    if (0x138 < *(uint *)(unaff_x19 + 0x18)) {
                                                      *(undefined8 *)(unaff_x19 + 0x13a8) =
                                                           uStack0000000000000008;
                                                      *(undefined8 *)(unaff_x19 + 0x13a0) =
                                                           uStack0000000000000000;
                                                      thunk_FUN_03f86000(unaff_x19 + 0x13a0,0);
                                                      uStack0000000000000000 = *(undefined8 *)puVar3
                                                      ;
                                                      uStack0000000000000008 = 0;
                                                      thunk_FUN_03f86000();
                                                      puVar3 = PTR_DAT_0912fd90;
                                                      uStack0000000000000008 =
                                                           CONCAT62(uStack0000000000000008._2_6_,
                                                                    0x4e8c);
                                                      if (0x139 < *(uint *)(unaff_x19 + 0x18)) {
                                                        *(undefined8 *)(unaff_x19 + 0x13b8) =
                                                             uStack0000000000000008;
                                                        *(undefined8 *)(unaff_x19 + 0x13b0) =
                                                             uStack0000000000000000;
                                                        thunk_FUN_03f86000(unaff_x19 + 0x13b0,0);
                                                        uStack0000000000000000 =
                                                             *(undefined8 *)puVar3;
                                                        uStack0000000000000008 = 0;
                                                        thunk_FUN_03f86000();
                                                        puVar3 = PTR_DAT_09130090;
                                                        uStack0000000000000008 =
                                                             CONCAT62(uStack0000000000000008._2_6_,
                                                                      0x4e8c);
                                                        if (0x13a < *(uint *)(unaff_x19 + 0x18)) {
                                                          *(undefined8 *)(unaff_x19 + 0x13c8) =
                                                               uStack0000000000000008;
                                                          *(undefined8 *)(unaff_x19 + 0x13c0) =
                                                               uStack0000000000000000;
                                                          thunk_FUN_03f86000(unaff_x19 + 0x13c0,0);
                                                          uStack0000000000000000 =
                                                               *(undefined8 *)puVar3;
                                                          uStack0000000000000008 = 0;
                                                          thunk_FUN_03f86000();
                                                          puVar3 = PTR_DAT_09130848;
                                                          uStack0000000000000008 =
                                                               CONCAT62(uStack0000000000000008._2_6_
                                                                        ,0x35a);
                                                          if (0x13b < *(uint *)(unaff_x19 + 0x18)) {
                                                            *(undefined8 *)(unaff_x19 + 0x13d8) =
                                                                 uStack0000000000000008;
                                                            *(undefined8 *)(unaff_x19 + 0x13d0) =
                                                                 uStack0000000000000000;
                                                            thunk_FUN_03f86000(unaff_x19 + 0x13d0,0)
                                                            ;
                                                            uStack0000000000000000 =
                                                                 *(undefined8 *)puVar3;
                                                            uStack0000000000000008 = 0;
                                                            thunk_FUN_03f86000();
                                                            puVar3 = PTR_DAT_091302f0;
                                                            uStack0000000000000008 =
                                                                 CONCAT62(uStack0000000000000008.
                                                                          _2_6_,0x4e8b);
                                                            if (0x13c < *(uint *)(unaff_x19 + 0x18))
                                                            {
                                                              *(undefined8 *)(unaff_x19 + 0x13e8) =
                                                                   uStack0000000000000008;
                                                              *(undefined8 *)(unaff_x19 + 0x13e0) =
                                                                   uStack0000000000000000;
                                                              thunk_FUN_03f86000(unaff_x19 + 0x13e0,
                                                                                 0);
                                                              uStack0000000000000000 =
                                                                   *(undefined8 *)puVar3;
                                                              uStack0000000000000008 = 0;
                                                              thunk_FUN_03f86000();
                                                              puVar3 = PTR_DAT_09130000;
                                                              uStack0000000000000008 =
                                                                   CONCAT62(uStack0000000000000008.
                                                                            _2_6_,0x3a4);
                                                              if (0x13d < *(uint *)(unaff_x19 + 0x18
                                                                                   )) {
                                                                *(undefined8 *)(unaff_x19 + 0x13f8)
                                                                     = uStack0000000000000008;
                                                                *(undefined8 *)(unaff_x19 + 0x13f0)
                                                                     = uStack0000000000000000;
                                                                thunk_FUN_03f86000(unaff_x19 +
                                                                                   0x13f0,0);
                                                                uStack0000000000000000 =
                                                                     *(undefined8 *)puVar3;
                                                                uStack0000000000000008 = 0;
                                                                thunk_FUN_03f86000();
                                                                puVar3 = PTR_DAT_091302b8;
                                                                uStack0000000000000008 =
                                                                     CONCAT62(uStack0000000000000008
                                                                              ._2_6_,0x3a4);
                                                                if (0x13e < *(uint *)(unaff_x19 +
                                                                                     0x18)) {
                                                                  *(undefined8 *)
                                                                   (unaff_x19 + 0x1408) =
                                                                       uStack0000000000000008;
                                                                  *(undefined8 *)
                                                                   (unaff_x19 + 0x1400) =
                                                                       uStack0000000000000000;
                                                                  thunk_FUN_03f86000(unaff_x19 +
                                                                                     0x1400,0);
                                                                  uStack0000000000000000 =
                                                                       *(undefined8 *)puVar3;
                                                                  uStack0000000000000008 = 0;
                                                                  thunk_FUN_03f86000();
                                                                  puVar3 = PTR_DAT_09130240;
                                                                  uStack0000000000000008 =
                                                                       CONCAT62(
                                                  uStack0000000000000008._2_6_,0x3a4);
                                                  if (0x13f < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x1418) =
                                                         uStack0000000000000008;
                                                    *(undefined8 *)(unaff_x19 + 0x1410) =
                                                         uStack0000000000000000;
                                                    thunk_FUN_03f86000(unaff_x19 + 0x1410,0);
                                                    uStack0000000000000000 = *(undefined8 *)puVar3;
                                                    uStack0000000000000008 = 0;
                                                    thunk_FUN_03f86000();
                                                    puVar3 = PTR_DAT_0912ff60;
                                                    uStack0000000000000008 =
                                                         CONCAT62(uStack0000000000000008._2_6_,
                                                                  0x4e8b);
                                                    if (0x140 < *(uint *)(unaff_x19 + 0x18)) {
                                                      *(undefined8 *)(unaff_x19 + 0x1428) =
                                                           uStack0000000000000008;
                                                      *(undefined8 *)(unaff_x19 + 0x1420) =
                                                           uStack0000000000000000;
                                                      thunk_FUN_03f86000(unaff_x19 + 0x1420,0);
                                                      uStack0000000000000000 = *(undefined8 *)puVar3
                                                      ;
                                                      uStack0000000000000008 = 0;
                                                      thunk_FUN_03f86000();
                                                      puVar3 = PTR_DAT_091307b8;
                                                      uStack0000000000000008 =
                                                           CONCAT62(uStack0000000000000008._2_6_,
                                                                    0x36a);
                                                      if (0x141 < *(uint *)(unaff_x19 + 0x18)) {
                                                        *(undefined8 *)(unaff_x19 + 0x1438) =
                                                             uStack0000000000000008;
                                                        *(undefined8 *)(unaff_x19 + 0x1430) =
                                                             uStack0000000000000000;
                                                        thunk_FUN_03f86000(unaff_x19 + 0x1430,0);
                                                        uStack0000000000000000 =
                                                             *(undefined8 *)puVar3;
                                                        uStack0000000000000008 = 0;
                                                        thunk_FUN_03f86000();
                                                        puVar3 = PTR_DAT_09130530;
                                                        uStack0000000000000008 =
                                                             CONCAT62(uStack0000000000000008._2_6_,
                                                                      0x4b0);
                                                        if (0x142 < *(uint *)(unaff_x19 + 0x18)) {
                                                          *(undefined8 *)(unaff_x19 + 0x1448) =
                                                               uStack0000000000000008;
                                                          *(undefined8 *)(unaff_x19 + 0x1440) =
                                                               uStack0000000000000000;
                                                          thunk_FUN_03f86000(unaff_x19 + 0x1440,0);
                                                          uStack0000000000000000 =
                                                               *(undefined8 *)puVar3;
                                                          uStack0000000000000008 = 0;
                                                          thunk_FUN_03f86000();
                                                          puVar3 = PTR_DAT_09130558;
                                                          uStack0000000000000008 =
                                                               CONCAT62(uStack0000000000000008._2_6_
                                                                        ,0x4b0);
                                                          if (0x143 < *(uint *)(unaff_x19 + 0x18)) {
                                                            *(undefined8 *)(unaff_x19 + 0x1458) =
                                                                 uStack0000000000000008;
                                                            *(undefined8 *)(unaff_x19 + 0x1450) =
                                                                 uStack0000000000000000;
                                                            thunk_FUN_03f86000(unaff_x19 + 0x1450,0)
                                                            ;
                                                            uStack0000000000000000 =
                                                                 *(undefined8 *)puVar3;
                                                            uStack0000000000000008 = 0;
                                                            thunk_FUN_03f86000();
                                                            puVar3 = PTR_DAT_0912ffd0;
                                                            uStack0000000000000008 =
                                                                 CONCAT62(uStack0000000000000008.
                                                                          _2_6_,65000);
                                                            if (0x144 < *(uint *)(unaff_x19 + 0x18))
                                                            {
                                                              *(undefined8 *)(unaff_x19 + 0x1468) =
                                                                   uStack0000000000000008;
                                                              *(undefined8 *)(unaff_x19 + 0x1460) =
                                                                   uStack0000000000000000;
                                                              thunk_FUN_03f86000(unaff_x19 + 0x1460,
                                                                                 0);
                                                              uStack0000000000000000 =
                                                                   *(undefined8 *)puVar3;
                                                              uStack0000000000000008 = 0;
                                                              thunk_FUN_03f86000();
                                                              puVar3 = PTR_DAT_0912ffe8;
                                                              uStack0000000000000008 =
                                                                   CONCAT62(uStack0000000000000008.
                                                                            _2_6_,0xfde9);
                                                              if (0x145 < *(uint *)(unaff_x19 + 0x18
                                                                                   )) {
                                                                *(undefined8 *)(unaff_x19 + 0x1478)
                                                                     = uStack0000000000000008;
                                                                *(undefined8 *)(unaff_x19 + 0x1470)
                                                                     = uStack0000000000000000;
                                                                thunk_FUN_03f86000(unaff_x19 +
                                                                                   0x1470,0);
                                                                uStack0000000000000000 =
                                                                     *(undefined8 *)puVar3;
                                                                uStack0000000000000008 = 0;
                                                                thunk_FUN_03f86000();
                                                                puVar3 = PTR_DAT_091303d8;
                                                                uStack0000000000000008 =
                                                                     CONCAT62(uStack0000000000000008
                                                                              ._2_6_,65000);
                                                                if (0x146 < *(uint *)(unaff_x19 +
                                                                                     0x18)) {
                                                                  *(undefined8 *)
                                                                   (unaff_x19 + 0x1488) =
                                                                       uStack0000000000000008;
                                                                  *(undefined8 *)
                                                                   (unaff_x19 + 0x1480) =
                                                                       uStack0000000000000000;
                                                                  thunk_FUN_03f86000(unaff_x19 +
                                                                                     0x1480,0);
                                                                  uStack0000000000000000 =
                                                                       *(undefined8 *)puVar3;
                                                                  uStack0000000000000008 = 0;
                                                                  thunk_FUN_03f86000();
                                                                  puVar3 = PTR_DAT_09130238;
                                                                  uStack0000000000000008 =
                                                                       CONCAT62(
                                                  uStack0000000000000008._2_6_,0xfde9);
                                                  if (0x147 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x1498) =
                                                         uStack0000000000000008;
                                                    *(undefined8 *)(unaff_x19 + 0x1490) =
                                                         uStack0000000000000000;
                                                    thunk_FUN_03f86000(unaff_x19 + 0x1490,0);
                                                    uStack0000000000000000 = *(undefined8 *)puVar3;
                                                    uStack0000000000000008 = 0;
                                                    thunk_FUN_03f86000();
                                                    puVar3 = PTR_DAT_09130200;
                                                    uStack0000000000000008 =
                                                         CONCAT62(uStack0000000000000008._2_6_,0x4b1
                                                                 );
                                                    if (0x148 < *(uint *)(unaff_x19 + 0x18)) {
                                                      *(undefined8 *)(unaff_x19 + 0x14a8) =
                                                           uStack0000000000000008;
                                                      *(undefined8 *)(unaff_x19 + 0x14a0) =
                                                           uStack0000000000000000;
                                                      thunk_FUN_03f86000(unaff_x19 + 0x14a0,0);
                                                      uStack0000000000000000 = *(undefined8 *)puVar3
                                                      ;
                                                      uStack0000000000000008 = 0;
                                                      thunk_FUN_03f86000();
                                                      puVar3 = PTR_DAT_091305f0;
                                                      uStack0000000000000008 =
                                                           CONCAT62(uStack0000000000000008._2_6_,
                                                                    0x4e9f);
                                                      if (0x149 < *(uint *)(unaff_x19 + 0x18)) {
                                                        *(undefined8 *)(unaff_x19 + 0x14b8) =
                                                             uStack0000000000000008;
                                                        *(undefined8 *)(unaff_x19 + 0x14b0) =
                                                             uStack0000000000000000;
                                                        thunk_FUN_03f86000(unaff_x19 + 0x14b0,0);
                                                        uStack0000000000000000 =
                                                             *(undefined8 *)puVar3;
                                                        uStack0000000000000008 = 0;
                                                        thunk_FUN_03f86000();
                                                        puVar3 = PTR_DAT_09130048;
                                                        uStack0000000000000008 =
                                                             CONCAT62(uStack0000000000000008._2_6_,
                                                                      0x4e9f);
                                                        if (0x14a < *(uint *)(unaff_x19 + 0x18)) {
                                                          *(undefined8 *)(unaff_x19 + 0x14c8) =
                                                               uStack0000000000000008;
                                                          *(undefined8 *)(unaff_x19 + 0x14c0) =
                                                               uStack0000000000000000;
                                                          thunk_FUN_03f86000(unaff_x19 + 0x14c0,0);
                                                          uStack0000000000000000 =
                                                               *(undefined8 *)puVar3;
                                                          uStack0000000000000008 = 0;
                                                          thunk_FUN_03f86000();
                                                          puVar3 = PTR_DAT_09130668;
                                                          uStack0000000000000008 =
                                                               CONCAT62(uStack0000000000000008._2_6_
                                                                        ,0x4b0);
                                                          if (0x14b < *(uint *)(unaff_x19 + 0x18)) {
                                                            *(undefined8 *)(unaff_x19 + 0x14d8) =
                                                                 uStack0000000000000008;
                                                            *(undefined8 *)(unaff_x19 + 0x14d0) =
                                                                 uStack0000000000000000;
                                                            thunk_FUN_03f86000(unaff_x19 + 0x14d0,0)
                                                            ;
                                                            uStack0000000000000000 =
                                                                 *(undefined8 *)puVar3;
                                                            uStack0000000000000008 = 0;
                                                            thunk_FUN_03f86000();
                                                            puVar3 = PTR_DAT_091309d0;
                                                            uStack0000000000000008 =
                                                                 CONCAT62(uStack0000000000000008.
                                                                          _2_6_,0x4b1);
                                                            if (0x14c < *(uint *)(unaff_x19 + 0x18))
                                                            {
                                                              *(undefined8 *)(unaff_x19 + 0x14e8) =
                                                                   uStack0000000000000008;
                                                              *(undefined8 *)(unaff_x19 + 0x14e0) =
                                                                   uStack0000000000000000;
                                                              thunk_FUN_03f86000(unaff_x19 + 0x14e0,
                                                                                 0);
                                                              uStack0000000000000000 =
                                                                   *(undefined8 *)puVar3;
                                                              uStack0000000000000008 = 0;
                                                              thunk_FUN_03f86000();
                                                              puVar3 = PTR_DAT_09130868;
                                                              uStack0000000000000008 =
                                                                   CONCAT62(uStack0000000000000008.
                                                                            _2_6_,0x4b0);
                                                              if (0x14d < *(uint *)(unaff_x19 + 0x18
                                                                                   )) {
                                                                *(undefined8 *)(unaff_x19 + 0x14f8)
                                                                     = uStack0000000000000008;
                                                                *(undefined8 *)(unaff_x19 + 0x14f0)
                                                                     = uStack0000000000000000;
                                                                thunk_FUN_03f86000(unaff_x19 +
                                                                                   0x14f0,0);
                                                                uStack0000000000000000 =
                                                                     *(undefined8 *)puVar3;
                                                                uStack0000000000000008 = 0;
                                                                thunk_FUN_03f86000();
                                                                puVar3 = PTR_DAT_09130878;
                                                                uStack0000000000000008 =
                                                                     CONCAT62(uStack0000000000000008
                                                                              ._2_6_,12000);
                                                                if (0x14e < *(uint *)(unaff_x19 +
                                                                                     0x18)) {
                                                                  *(undefined8 *)
                                                                   (unaff_x19 + 0x1508) =
                                                                       uStack0000000000000008;
                                                                  *(undefined8 *)
                                                                   (unaff_x19 + 0x1500) =
                                                                       uStack0000000000000000;
                                                                  thunk_FUN_03f86000(unaff_x19 +
                                                                                     0x1500,0);
                                                                  uStack0000000000000000 =
                                                                       *(undefined8 *)puVar3;
                                                                  uStack0000000000000008 = 0;
                                                                  thunk_FUN_03f86000();
                                                                  puVar3 = PTR_DAT_09130990;
                                                                  uStack0000000000000008 =
                                                                       CONCAT62(
                                                  uStack0000000000000008._2_6_,0x2ee1);
                                                  if (0x14f < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x1518) =
                                                         uStack0000000000000008;
                                                    *(undefined8 *)(unaff_x19 + 0x1510) =
                                                         uStack0000000000000000;
                                                    thunk_FUN_03f86000(unaff_x19 + 0x1510,0);
                                                    uStack0000000000000000 = *(undefined8 *)puVar3;
                                                    uStack0000000000000008 = 0;
                                                    thunk_FUN_03f86000();
                                                    puVar3 = PTR_DAT_09130290;
                                                    uStack0000000000000008 =
                                                         CONCAT62(uStack0000000000000008._2_6_,12000
                                                                 );
                                                    if (0x150 < *(uint *)(unaff_x19 + 0x18)) {
                                                      *(undefined8 *)(unaff_x19 + 0x1528) =
                                                           uStack0000000000000008;
                                                      *(undefined8 *)(unaff_x19 + 0x1520) =
                                                           uStack0000000000000000;
                                                      thunk_FUN_03f86000(unaff_x19 + 0x1520,0);
                                                      uStack0000000000000000 = *(undefined8 *)puVar3
                                                      ;
                                                      uStack0000000000000008 = 0;
                                                      thunk_FUN_03f86000();
                                                      puVar3 = PTR_DAT_091306c0;
                                                      uStack0000000000000008 =
                                                           CONCAT62(uStack0000000000000008._2_6_,
                                                                    65000);
                                                      if (0x151 < *(uint *)(unaff_x19 + 0x18)) {
                                                        *(undefined8 *)(unaff_x19 + 0x1538) =
                                                             uStack0000000000000008;
                                                        *(undefined8 *)(unaff_x19 + 0x1530) =
                                                             uStack0000000000000000;
                                                        thunk_FUN_03f86000(unaff_x19 + 0x1530,0);
                                                        uStack0000000000000000 =
                                                             *(undefined8 *)puVar3;
                                                        uStack0000000000000008 = 0;
                                                        thunk_FUN_03f86000();
                                                        puVar3 = PTR_DAT_09130780;
                                                        uStack0000000000000008 =
                                                             CONCAT62(uStack0000000000000008._2_6_,
                                                                      0xfde9);
                                                        if (0x152 < *(uint *)(unaff_x19 + 0x18)) {
                                                          *(undefined8 *)(unaff_x19 + 0x1548) =
                                                               uStack0000000000000008;
                                                          *(undefined8 *)(unaff_x19 + 0x1540) =
                                                               uStack0000000000000000;
                                                          thunk_FUN_03f86000(unaff_x19 + 0x1540,0);
                                                          uStack0000000000000000 =
                                                               *(undefined8 *)puVar3;
                                                          uStack0000000000000008 = 0;
                                                          thunk_FUN_03f86000();
                                                          puVar3 = PTR_DAT_09130528;
                                                          uStack0000000000000008 =
                                                               CONCAT62(uStack0000000000000008._2_6_
                                                                        ,0x6fb6);
                                                          if (0x153 < *(uint *)(unaff_x19 + 0x18)) {
                                                            *(undefined8 *)(unaff_x19 + 0x1558) =
                                                                 uStack0000000000000008;
                                                            *(undefined8 *)(unaff_x19 + 0x1550) =
                                                                 uStack0000000000000000;
                                                            thunk_FUN_03f86000(unaff_x19 + 0x1550,0)
                                                            ;
                                                            uStack0000000000000000 =
                                                                 *(undefined8 *)puVar3;
                                                            uStack0000000000000008 = 0;
                                                            thunk_FUN_03f86000();
                                                            puVar3 = PTR_DAT_09130980;
                                                            uStack0000000000000008 =
                                                                 CONCAT62(uStack0000000000000008.
                                                                          _2_6_,0x4e2);
                                                            if (0x154 < *(uint *)(unaff_x19 + 0x18))
                                                            {
                                                              *(undefined8 *)(unaff_x19 + 0x1568) =
                                                                   uStack0000000000000008;
                                                              *(undefined8 *)(unaff_x19 + 0x1560) =
                                                                   uStack0000000000000000;
                                                              thunk_FUN_03f86000(unaff_x19 + 0x1560,
                                                                                 0);
                                                              uStack0000000000000000 =
                                                                   *(undefined8 *)puVar3;
                                                              uStack0000000000000008 = 0;
                                                              thunk_FUN_03f86000();
                                                              puVar3 = PTR_DAT_09130658;
                                                              uStack0000000000000008 =
                                                                   CONCAT62(uStack0000000000000008.
                                                                            _2_6_,0x4e3);
                                                              if (0x155 < *(uint *)(unaff_x19 + 0x18
                                                                                   )) {
                                                                *(undefined8 *)(unaff_x19 + 0x1578)
                                                                     = uStack0000000000000008;
                                                                *(undefined8 *)(unaff_x19 + 0x1570)
                                                                     = uStack0000000000000000;
                                                                thunk_FUN_03f86000(unaff_x19 +
                                                                                   0x1570,0);
                                                                uStack0000000000000000 =
                                                                     *(undefined8 *)puVar3;
                                                                uStack0000000000000008 = 0;
                                                                thunk_FUN_03f86000();
                                                                puVar3 = PTR_DAT_091305e0;
                                                                uStack0000000000000008 =
                                                                     CONCAT62(uStack0000000000000008
                                                                              ._2_6_,0x4e4);
                                                                if (0x156 < *(uint *)(unaff_x19 +
                                                                                     0x18)) {
                                                                  *(undefined8 *)
                                                                   (unaff_x19 + 0x1588) =
                                                                       uStack0000000000000008;
                                                                  *(undefined8 *)
                                                                   (unaff_x19 + 0x1580) =
                                                                       uStack0000000000000000;
                                                                  thunk_FUN_03f86000(unaff_x19 +
                                                                                     0x1580,0);
                                                                  uStack0000000000000000 =
                                                                       *(undefined8 *)puVar3;
                                                                  uStack0000000000000008 = 0;
                                                                  thunk_FUN_03f86000();
                                                                  puVar3 = PTR_DAT_091309a0;
                                                                  uStack0000000000000008 =
                                                                       CONCAT62(
                                                  uStack0000000000000008._2_6_,0x4e5);
                                                  if (0x157 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x1598) =
                                                         uStack0000000000000008;
                                                    *(undefined8 *)(unaff_x19 + 0x1590) =
                                                         uStack0000000000000000;
                                                    thunk_FUN_03f86000(unaff_x19 + 0x1590,0);
                                                    uStack0000000000000000 = *(undefined8 *)puVar3;
                                                    uStack0000000000000008 = 0;
                                                    thunk_FUN_03f86000();
                                                    puVar3 = PTR_DAT_09130180;
                                                    uStack0000000000000008 =
                                                         CONCAT62(uStack0000000000000008._2_6_,0x4e6
                                                                 );
                                                    if (0x158 < *(uint *)(unaff_x19 + 0x18)) {
                                                      *(undefined8 *)(unaff_x19 + 0x15a8) =
                                                           uStack0000000000000008;
                                                      *(undefined8 *)(unaff_x19 + 0x15a0) =
                                                           uStack0000000000000000;
                                                      thunk_FUN_03f86000(unaff_x19 + 0x15a0,0);
                                                      uStack0000000000000000 = *(undefined8 *)puVar3
                                                      ;
                                                      uStack0000000000000008 = 0;
                                                      thunk_FUN_03f86000();
                                                      puVar3 = PTR_DAT_09130378;
                                                      uStack0000000000000008 =
                                                           CONCAT62(uStack0000000000000008._2_6_,
                                                                    0x4e7);
                                                      if (0x159 < *(uint *)(unaff_x19 + 0x18)) {
                                                        *(undefined8 *)(unaff_x19 + 0x15b8) =
                                                             uStack0000000000000008;
                                                        *(undefined8 *)(unaff_x19 + 0x15b0) =
                                                             uStack0000000000000000;
                                                        thunk_FUN_03f86000(unaff_x19 + 0x15b0,0);
                                                        uStack0000000000000000 =
                                                             *(undefined8 *)puVar3;
                                                        uStack0000000000000008 = 0;
                                                        thunk_FUN_03f86000();
                                                        puVar3 = PTR_DAT_09130338;
                                                        uStack0000000000000008 =
                                                             CONCAT62(uStack0000000000000008._2_6_,
                                                                      0x4e8);
                                                        if (0x15a < *(uint *)(unaff_x19 + 0x18)) {
                                                          *(undefined8 *)(unaff_x19 + 0x15c8) =
                                                               uStack0000000000000008;
                                                          *(undefined8 *)(unaff_x19 + 0x15c0) =
                                                               uStack0000000000000000;
                                                          thunk_FUN_03f86000(unaff_x19 + 0x15c0,0);
                                                          uStack0000000000000000 =
                                                               *(undefined8 *)puVar3;
                                                          uStack0000000000000008 = 0;
                                                          thunk_FUN_03f86000();
                                                          puVar3 = PTR_DAT_0912fde0;
                                                          uStack0000000000000008 =
                                                               CONCAT62(uStack0000000000000008._2_6_
                                                                        ,0x4e9);
                                                          if (0x15b < *(uint *)(unaff_x19 + 0x18)) {
                                                            *(undefined8 *)(unaff_x19 + 0x15d8) =
                                                                 uStack0000000000000008;
                                                            *(undefined8 *)(unaff_x19 + 0x15d0) =
                                                                 uStack0000000000000000;
                                                            thunk_FUN_03f86000(unaff_x19 + 0x15d0,0)
                                                            ;
                                                            uStack0000000000000000 =
                                                                 *(undefined8 *)puVar3;
                                                            uStack0000000000000008 = 0;
                                                            thunk_FUN_03f86000();
                                                            puVar3 = PTR_DAT_091305d0;
                                                            uStack0000000000000008 =
                                                                 CONCAT62(uStack0000000000000008.
                                                                          _2_6_,0x4ea);
                                                            if (0x15c < *(uint *)(unaff_x19 + 0x18))
                                                            {
                                                              *(undefined8 *)(unaff_x19 + 0x15e8) =
                                                                   uStack0000000000000008;
                                                              *(undefined8 *)(unaff_x19 + 0x15e0) =
                                                                   uStack0000000000000000;
                                                              thunk_FUN_03f86000(unaff_x19 + 0x15e0,
                                                                                 0);
                                                              uStack0000000000000000 =
                                                                   *(undefined8 *)puVar3;
                                                              uStack0000000000000008 = 0;
                                                              thunk_FUN_03f86000();
                                                              puVar3 = PTR_DAT_09130a00;
                                                              uStack0000000000000008 =
                                                                   CONCAT62(uStack0000000000000008.
                                                                            _2_6_,0x36a);
                                                              if (0x15d < *(uint *)(unaff_x19 + 0x18
                                                                                   )) {
                                                                *(undefined8 *)(unaff_x19 + 0x15f8)
                                                                     = uStack0000000000000008;
                                                                *(undefined8 *)(unaff_x19 + 0x15f0)
                                                                     = uStack0000000000000000;
                                                                thunk_FUN_03f86000(unaff_x19 +
                                                                                   0x15f0,0);
                                                                uStack0000000000000000 =
                                                                     *(undefined8 *)puVar3;
                                                                uStack0000000000000008 = 0;
                                                                thunk_FUN_03f86000();
                                                                puVar3 = PTR_DAT_091302a0;
                                                                uStack0000000000000008 =
                                                                     CONCAT62(uStack0000000000000008
                                                                              ._2_6_,0x4e4);
                                                                if (0x15e < *(uint *)(unaff_x19 +
                                                                                     0x18)) {
                                                                  *(undefined8 *)
                                                                   (unaff_x19 + 0x1608) =
                                                                       uStack0000000000000008;
                                                                  *(undefined8 *)
                                                                   (unaff_x19 + 0x1600) =
                                                                       uStack0000000000000000;
                                                                  thunk_FUN_03f86000(unaff_x19 +
                                                                                     0x1600,0);
                                                                  uStack0000000000000000 =
                                                                       *(undefined8 *)puVar3;
                                                                  uStack0000000000000008 = 0;
                                                                  thunk_FUN_03f86000();
                                                                  puVar3 = PTR_DAT_09130870;
                                                                  uStack0000000000000008 =
                                                                       CONCAT62(
                                                  uStack0000000000000008._2_6_,20000);
                                                  if (0x15f < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x1618) =
                                                         uStack0000000000000008;
                                                    *(undefined8 *)(unaff_x19 + 0x1610) =
                                                         uStack0000000000000000;
                                                    thunk_FUN_03f86000(unaff_x19 + 0x1610,0);
                                                    uStack0000000000000000 = *(undefined8 *)puVar3;
                                                    uStack0000000000000008 = 0;
                                                    thunk_FUN_03f86000();
                                                    puVar3 = PTR_DAT_0912fee0;
                                                    uStack0000000000000008 =
                                                         CONCAT62(uStack0000000000000008._2_6_,
                                                                  0x4e22);
                                                    if (0x160 < *(uint *)(unaff_x19 + 0x18)) {
                                                      *(undefined8 *)(unaff_x19 + 0x1628) =
                                                           uStack0000000000000008;
                                                      *(undefined8 *)(unaff_x19 + 0x1620) =
                                                           uStack0000000000000000;
                                                      thunk_FUN_03f86000(unaff_x19 + 0x1620,0);
                                                      uStack0000000000000000 = *(undefined8 *)puVar3
                                                      ;
                                                      uStack0000000000000008 = 0;
                                                      thunk_FUN_03f86000();
                                                      puVar3 = PTR_DAT_091304b8;
                                                      uStack0000000000000008 =
                                                           CONCAT62(uStack0000000000000008._2_6_,
                                                                    0x4e2);
                                                      if (0x161 < *(uint *)(unaff_x19 + 0x18)) {
                                                        *(undefined8 *)(unaff_x19 + 0x1638) =
                                                             uStack0000000000000008;
                                                        *(undefined8 *)(unaff_x19 + 0x1630) =
                                                             uStack0000000000000000;
                                                        thunk_FUN_03f86000(unaff_x19 + 0x1630,0);
                                                        uStack0000000000000000 =
                                                             *(undefined8 *)puVar3;
                                                        uStack0000000000000008 = 0;
                                                        thunk_FUN_03f86000();
                                                        puVar3 = PTR_DAT_09130028;
                                                        uStack0000000000000008 =
                                                             CONCAT62(uStack0000000000000008._2_6_,
                                                                      0x4e3);
                                                        if (0x162 < *(uint *)(unaff_x19 + 0x18)) {
                                                          *(undefined8 *)(unaff_x19 + 0x1648) =
                                                               uStack0000000000000008;
                                                          *(undefined8 *)(unaff_x19 + 0x1640) =
                                                               uStack0000000000000000;
                                                          thunk_FUN_03f86000(unaff_x19 + 0x1640,0);
                                                          uStack0000000000000000 =
                                                               *(undefined8 *)puVar3;
                                                          uStack0000000000000008 = 0;
                                                          thunk_FUN_03f86000();
                                                          puVar3 = PTR_DAT_09130638;
                                                          uStack0000000000000008 =
                                                               CONCAT62(uStack0000000000000008._2_6_
                                                                        ,0x4e21);
                                                          if (0x163 < *(uint *)(unaff_x19 + 0x18)) {
                                                            *(undefined8 *)(unaff_x19 + 0x1658) =
                                                                 uStack0000000000000008;
                                                            *(undefined8 *)(unaff_x19 + 0x1650) =
                                                                 uStack0000000000000000;
                                                            thunk_FUN_03f86000(unaff_x19 + 0x1650,0)
                                                            ;
                                                            uStack0000000000000000 =
                                                                 *(undefined8 *)puVar3;
                                                            uStack0000000000000008 = 0;
                                                            thunk_FUN_03f86000();
                                                            puVar3 = PTR_DAT_091304a0;
                                                            uStack0000000000000008 =
                                                                 CONCAT62(uStack0000000000000008.
                                                                          _2_6_,0x4e23);
                                                            if (0x164 < *(uint *)(unaff_x19 + 0x18))
                                                            {
                                                              *(undefined8 *)(unaff_x19 + 0x1668) =
                                                                   uStack0000000000000008;
                                                              *(undefined8 *)(unaff_x19 + 0x1660) =
                                                                   uStack0000000000000000;
                                                              thunk_FUN_03f86000(unaff_x19 + 0x1660,
                                                                                 0);
                                                              uStack0000000000000000 =
                                                                   *(undefined8 *)puVar3;
                                                              uStack0000000000000008 = 0;
                                                              thunk_FUN_03f86000();
                                                              puVar3 = PTR_DAT_0912ff68;
                                                              uStack0000000000000008 =
                                                                   CONCAT62(uStack0000000000000008.
                                                                            _2_6_,0x4e24);
                                                              if (0x165 < *(uint *)(unaff_x19 + 0x18
                                                                                   )) {
                                                                *(undefined8 *)(unaff_x19 + 0x1678)
                                                                     = uStack0000000000000008;
                                                                *(undefined8 *)(unaff_x19 + 0x1670)
                                                                     = uStack0000000000000000;
                                                                thunk_FUN_03f86000(unaff_x19 +
                                                                                   0x1670,0);
                                                                uStack0000000000000000 =
                                                                     *(undefined8 *)puVar3;
                                                                uStack0000000000000008 = 0;
                                                                thunk_FUN_03f86000();
                                                                puVar3 = PTR_DAT_091301e0;
                                                                uStack0000000000000008 =
                                                                     CONCAT62(uStack0000000000000008
                                                                              ._2_6_,0x4e25);
                                                                if (0x166 < *(uint *)(unaff_x19 +
                                                                                     0x18)) {
                                                                  *(undefined8 *)
                                                                   (unaff_x19 + 0x1688) =
                                                                       uStack0000000000000008;
                                                                  *(undefined8 *)
                                                                   (unaff_x19 + 0x1680) =
                                                                       uStack0000000000000000;
                                                                  thunk_FUN_03f86000(unaff_x19 +
                                                                                     0x1680,0);
                                                                  uStack0000000000000000 =
                                                                       *(undefined8 *)puVar3;
                                                                  uStack0000000000000008 = 0;
                                                                  thunk_FUN_03f86000();
                                                                  puVar3 = PTR_DAT_091309a8;
                                                                  uStack0000000000000008 =
                                                                       CONCAT62(
                                                  uStack0000000000000008._2_6_,0x4f25);
                                                  if (0x167 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x1698) =
                                                         uStack0000000000000008;
                                                    *(undefined8 *)(unaff_x19 + 0x1690) =
                                                         uStack0000000000000000;
                                                    thunk_FUN_03f86000(unaff_x19 + 0x1690,0);
                                                    uStack0000000000000000 = *(undefined8 *)puVar3;
                                                    uStack0000000000000008 = 0;
                                                    thunk_FUN_03f86000();
                                                    puVar3 = PTR_DAT_09130300;
                                                    uStack0000000000000008 =
                                                         CONCAT62(uStack0000000000000008._2_6_,
                                                                  0x4f2d);
                                                    if (0x168 < *(uint *)(unaff_x19 + 0x18)) {
                                                      *(undefined8 *)(unaff_x19 + 0x16a8) =
                                                           uStack0000000000000008;
                                                      *(undefined8 *)(unaff_x19 + 0x16a0) =
                                                           uStack0000000000000000;
                                                      thunk_FUN_03f86000(unaff_x19 + 0x16a0,0);
                                                      uStack0000000000000000 = *(undefined8 *)puVar3
                                                      ;
                                                      uStack0000000000000008 = 0;
                                                      thunk_FUN_03f86000();
                                                      puVar3 = PTR_DAT_0912fe00;
                                                      uStack0000000000000008 =
                                                           CONCAT62(uStack0000000000000008._2_6_,
                                                                    0x51c8);
                                                      if (0x169 < *(uint *)(unaff_x19 + 0x18)) {
                                                        *(undefined8 *)(unaff_x19 + 0x16b8) =
                                                             uStack0000000000000008;
                                                        *(undefined8 *)(unaff_x19 + 0x16b0) =
                                                             uStack0000000000000000;
                                                        thunk_FUN_03f86000(unaff_x19 + 0x16b0,0);
                                                        uStack0000000000000000 =
                                                             *(undefined8 *)puVar3;
                                                        uStack0000000000000008 = 0;
                                                        thunk_FUN_03f86000();
                                                        puVar3 = PTR_DAT_0912fdd0;
                                                        uStack0000000000000008 =
                                                             CONCAT62(uStack0000000000000008._2_6_,
                                                                      0x51d5);
                                                        if (0x16a < *(uint *)(unaff_x19 + 0x18)) {
                                                          *(undefined8 *)(unaff_x19 + 0x16c8) =
                                                               uStack0000000000000008;
                                                          *(undefined8 *)(unaff_x19 + 0x16c0) =
                                                               uStack0000000000000000;
                                                          thunk_FUN_03f86000(unaff_x19 + 0x16c0,0);
                                                          uStack0000000000000000 =
                                                               *(undefined8 *)puVar3;
                                                          uStack0000000000000008 = 0;
                                                          thunk_FUN_03f86000();
                                                          puVar3 = PTR_DAT_09130518;
                                                          uStack0000000000000008 =
                                                               CONCAT62(uStack0000000000000008._2_6_
                                                                        ,0xc433);
                                                          if (0x16b < *(uint *)(unaff_x19 + 0x18)) {
                                                            *(undefined8 *)(unaff_x19 + 0x16d8) =
                                                                 uStack0000000000000008;
                                                            *(undefined8 *)(unaff_x19 + 0x16d0) =
                                                                 uStack0000000000000000;
                                                            thunk_FUN_03f86000(unaff_x19 + 0x16d0,0)
                                                            ;
                                                            uStack0000000000000000 =
                                                                 *(undefined8 *)puVar3;
                                                            uStack0000000000000008 = 0;
                                                            thunk_FUN_03f86000();
                                                            puVar3 = PTR_DAT_0912fe90;
                                                            uStack0000000000000008 =
                                                                 CONCAT62(uStack0000000000000008.
                                                                          _2_6_,0x5161);
                                                            if (0x16c < *(uint *)(unaff_x19 + 0x18))
                                                            {
                                                              *(undefined8 *)(unaff_x19 + 0x16e8) =
                                                                   uStack0000000000000008;
                                                              *(undefined8 *)(unaff_x19 + 0x16e0) =
                                                                   uStack0000000000000000;
                                                              thunk_FUN_03f86000(unaff_x19 + 0x16e0,
                                                                                 0);
                                                              uStack0000000000000000 =
                                                                   *(undefined8 *)puVar3;
                                                              uStack0000000000000008 = 0;
                                                              thunk_FUN_03f86000();
                                                              puVar3 = PTR_DAT_091308a8;
                                                              uStack0000000000000008 =
                                                                   CONCAT62(uStack0000000000000008.
                                                                            _2_6_,0xcadc);
                                                              if (0x16d < *(uint *)(unaff_x19 + 0x18
                                                                                   )) {
                                                                *(undefined8 *)(unaff_x19 + 0x16f8)
                                                                     = uStack0000000000000008;
                                                                *(undefined8 *)(unaff_x19 + 0x16f0)
                                                                     = uStack0000000000000000;
                                                                thunk_FUN_03f86000(unaff_x19 +
                                                                                   0x16f0,0);
                                                                uStack0000000000000000 =
                                                                     *(undefined8 *)puVar3;
                                                                uStack0000000000000008 = 0;
                                                                thunk_FUN_03f86000();
                                                                puVar3 = PTR_DAT_09130940;
                                                                uStack0000000000000008 =
                                                                     CONCAT62(uStack0000000000000008
                                                                              ._2_6_,0xcae0);
                                                                if (0x16e < *(uint *)(unaff_x19 +
                                                                                     0x18)) {
                                                                  *(undefined8 *)
                                                                   (unaff_x19 + 0x1708) =
                                                                       uStack0000000000000008;
                                                                  *(undefined8 *)
                                                                   (unaff_x19 + 0x1700) =
                                                                       uStack0000000000000000;
                                                                  thunk_FUN_03f86000(unaff_x19 +
                                                                                     0x1700,0);
                                                                  uStack0000000000000000 =
                                                                       *(undefined8 *)puVar3;
                                                                  uStack0000000000000008 = 0;
                                                                  thunk_FUN_03f86000();
                                                                  puVar3 = PTR_DAT_09130890;
                                                                  uStack0000000000000008 =
                                                                       CONCAT62(
                                                  uStack0000000000000008._2_6_,0xcadc);
                                                  if (0x16f < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x1718) =
                                                         uStack0000000000000008;
                                                    *(undefined8 *)(unaff_x19 + 0x1710) =
                                                         uStack0000000000000000;
                                                    thunk_FUN_03f86000(unaff_x19 + 0x1710,0);
                                                    uStack0000000000000000 = *(undefined8 *)puVar3;
                                                    uStack0000000000000008 = 0;
                                                    thunk_FUN_03f86000();
                                                    puVar3 = PTR_DAT_0912fd78;
                                                    uStack0000000000000008 =
                                                         CONCAT62(uStack0000000000000008._2_6_,
                                                                  0x7149);
                                                    if (0x170 < *(uint *)(unaff_x19 + 0x18)) {
                                                      *(undefined8 *)(unaff_x19 + 0x1728) =
                                                           uStack0000000000000008;
                                                      *(undefined8 *)(unaff_x19 + 0x1720) =
                                                           uStack0000000000000000;
                                                      thunk_FUN_03f86000(unaff_x19 + 0x1720,0);
                                                      uStack0000000000000000 = *(undefined8 *)puVar3
                                                      ;
                                                      uStack0000000000000008 = 0;
                                                      thunk_FUN_03f86000();
                                                      puVar3 = PTR_DAT_091300b0;
                                                      uStack0000000000000008 =
                                                           CONCAT62(uStack0000000000000008._2_6_,
                                                                    0x4e89);
                                                      if (0x171 < *(uint *)(unaff_x19 + 0x18)) {
                                                        *(undefined8 *)(unaff_x19 + 0x1738) =
                                                             uStack0000000000000008;
                                                        *(undefined8 *)(unaff_x19 + 0x1730) =
                                                             uStack0000000000000000;
                                                        thunk_FUN_03f86000(unaff_x19 + 0x1730,0);
                                                        uStack0000000000000000 =
                                                             *(undefined8 *)puVar3;
                                                        uStack0000000000000008 = 0;
                                                        thunk_FUN_03f86000();
                                                        puVar3 = PTR_DAT_09130838;
                                                        uStack0000000000000008 =
                                                             CONCAT62(uStack0000000000000008._2_6_,
                                                                      0x4e8a);
                                                        if (0x172 < *(uint *)(unaff_x19 + 0x18)) {
                                                          *(undefined8 *)(unaff_x19 + 0x1748) =
                                                               uStack0000000000000008;
                                                          *(undefined8 *)(unaff_x19 + 0x1740) =
                                                               uStack0000000000000000;
                                                          thunk_FUN_03f86000(unaff_x19 + 0x1740,0);
                                                          uStack0000000000000000 =
                                                               *(undefined8 *)puVar3;
                                                          uStack0000000000000008 = 0;
                                                          thunk_FUN_03f86000();
                                                          puVar3 = PTR_DAT_091307e8;
                                                          uStack0000000000000008 =
                                                               CONCAT62(uStack0000000000000008._2_6_
                                                                        ,0x4e8c);
                                                          if (0x173 < *(uint *)(unaff_x19 + 0x18)) {
                                                            *(undefined8 *)(unaff_x19 + 0x1758) =
                                                                 uStack0000000000000008;
                                                            *(undefined8 *)(unaff_x19 + 0x1750) =
                                                                 uStack0000000000000000;
                                                            thunk_FUN_03f86000(unaff_x19 + 0x1750,0)
                                                            ;
                                                            uStack0000000000000000 =
                                                                 *(undefined8 *)puVar3;
                                                            uStack0000000000000008 = 0;
                                                            thunk_FUN_03f86000();
                                                            puVar3 = PTR_DAT_09130120;
                                                            uStack0000000000000008 =
                                                                 CONCAT62(uStack0000000000000008.
                                                                          _2_6_,0x4e8b);
                                                            if (0x174 < *(uint *)(unaff_x19 + 0x18))
                                                            {
                                                              *(undefined8 *)(unaff_x19 + 0x1768) =
                                                                   uStack0000000000000008;
                                                              *(undefined8 *)(unaff_x19 + 0x1760) =
                                                                   uStack0000000000000000;
                                                              thunk_FUN_03f86000(unaff_x19 + 0x1760,
                                                                                 0);
                                                              uStack0000000000000000 =
                                                                   *(undefined8 *)puVar3;
                                                              uStack0000000000000008 = 0;
                                                              thunk_FUN_03f86000();
                                                              puVar3 = PTR_DAT_0912fe20;
                                                              uStack0000000000000008 =
                                                                   CONCAT62(uStack0000000000000008.
                                                                            _2_6_,0xdeae);
                                                              if (0x175 < *(uint *)(unaff_x19 + 0x18
                                                                                   )) {
                                                                *(undefined8 *)(unaff_x19 + 0x1778)
                                                                     = uStack0000000000000008;
                                                                *(undefined8 *)(unaff_x19 + 6000) =
                                                                     uStack0000000000000000;
                                                                thunk_FUN_03f86000(unaff_x19 + 6000,
                                                                                   0);
                                                                uStack0000000000000000 =
                                                                     *(undefined8 *)puVar3;
                                                                uStack0000000000000008 = 0;
                                                                thunk_FUN_03f86000();
                                                                puVar3 = PTR_DAT_09130380;
                                                                uStack0000000000000008 =
                                                                     CONCAT62(uStack0000000000000008
                                                                              ._2_6_,0xdeab);
                                                                if (0x176 < *(uint *)(unaff_x19 +
                                                                                     0x18)) {
                                                                  *(undefined8 *)
                                                                   (unaff_x19 + 0x1788) =
                                                                       uStack0000000000000008;
                                                                  *(undefined8 *)
                                                                   (unaff_x19 + 0x1780) =
                                                                       uStack0000000000000000;
                                                                  thunk_FUN_03f86000(unaff_x19 +
                                                                                     0x1780,0);
                                                                  uStack0000000000000000 =
                                                                       *(undefined8 *)puVar3;
                                                                  uStack0000000000000008 = 0;
                                                                  thunk_FUN_03f86000();
                                                                  puVar3 = PTR_DAT_0912fdf0;
                                                                  uStack0000000000000008 =
                                                                       CONCAT62(
                                                  uStack0000000000000008._2_6_,0xdeaa);
                                                  if (0x177 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x1798) =
                                                         uStack0000000000000008;
                                                    *(undefined8 *)(unaff_x19 + 0x1790) =
                                                         uStack0000000000000000;
                                                    thunk_FUN_03f86000(unaff_x19 + 0x1790,0);
                                                    uStack0000000000000000 = *(undefined8 *)puVar3;
                                                    uStack0000000000000008 = 0;
                                                    thunk_FUN_03f86000();
                                                    puVar3 = PTR_DAT_09130020;
                                                    uStack0000000000000008 =
                                                         CONCAT62(uStack0000000000000008._2_6_,
                                                                  0xdeb2);
                                                    if (0x178 < *(uint *)(unaff_x19 + 0x18)) {
                                                      *(undefined8 *)(unaff_x19 + 0x17a8) =
                                                           uStack0000000000000008;
                                                      *(undefined8 *)(unaff_x19 + 0x17a0) =
                                                           uStack0000000000000000;
                                                      thunk_FUN_03f86000(unaff_x19 + 0x17a0,0);
                                                      uStack0000000000000000 = *(undefined8 *)puVar3
                                                      ;
                                                      uStack0000000000000008 = 0;
                                                      thunk_FUN_03f86000();
                                                      puVar3 = PTR_DAT_09130918;
                                                      uStack0000000000000008 =
                                                           CONCAT62(uStack0000000000000008._2_6_,
                                                                    0xdeb0);
                                                      if (0x179 < *(uint *)(unaff_x19 + 0x18)) {
                                                        *(undefined8 *)(unaff_x19 + 0x17b8) =
                                                             uStack0000000000000008;
                                                        *(undefined8 *)(unaff_x19 + 0x17b0) =
                                                             uStack0000000000000000;
                                                        thunk_FUN_03f86000(unaff_x19 + 0x17b0,0);
                                                        uStack0000000000000000 =
                                                             *(undefined8 *)puVar3;
                                                        uStack0000000000000008 = 0;
                                                        thunk_FUN_03f86000();
                                                        puVar3 = PTR_DAT_09130568;
                                                        uStack0000000000000008 =
                                                             CONCAT62(uStack0000000000000008._2_6_,
                                                                      0xdeb1);
                                                        if (0x17a < *(uint *)(unaff_x19 + 0x18)) {
                                                          *(undefined8 *)(unaff_x19 + 0x17c8) =
                                                               uStack0000000000000008;
                                                          *(undefined8 *)(unaff_x19 + 0x17c0) =
                                                               uStack0000000000000000;
                                                          thunk_FUN_03f86000(unaff_x19 + 0x17c0,0);
                                                          uStack0000000000000000 =
                                                               *(undefined8 *)puVar3;
                                                          uStack0000000000000008 = 0;
                                                          thunk_FUN_03f86000();
                                                          puVar3 = PTR_DAT_09130758;
                                                          uStack0000000000000008 =
                                                               CONCAT62(uStack0000000000000008._2_6_
                                                                        ,0xdeaf);
                                                          if (0x17b < *(uint *)(unaff_x19 + 0x18)) {
                                                            *(undefined8 *)(unaff_x19 + 0x17d8) =
                                                                 uStack0000000000000008;
                                                            *(undefined8 *)(unaff_x19 + 0x17d0) =
                                                                 uStack0000000000000000;
                                                            thunk_FUN_03f86000(unaff_x19 + 0x17d0,0)
                                                            ;
                                                            uStack0000000000000000 =
                                                                 *(undefined8 *)puVar3;
                                                            uStack0000000000000008 = 0;
                                                            thunk_FUN_03f86000();
                                                            puVar3 = PTR_DAT_091305b0;
                                                            uStack0000000000000008 =
                                                                 CONCAT62(uStack0000000000000008.
                                                                          _2_6_,0xdeb3);
                                                            if (0x17c < *(uint *)(unaff_x19 + 0x18))
                                                            {
                                                              *(undefined8 *)(unaff_x19 + 0x17e8) =
                                                                   uStack0000000000000008;
                                                              *(undefined8 *)(unaff_x19 + 0x17e0) =
                                                                   uStack0000000000000000;
                                                              thunk_FUN_03f86000(unaff_x19 + 0x17e0,
                                                                                 0);
                                                              uStack0000000000000000 =
                                                                   *(undefined8 *)puVar3;
                                                              uStack0000000000000008 = 0;
                                                              thunk_FUN_03f86000();
                                                              puVar3 = PTR_DAT_091306d8;
                                                              uStack0000000000000008 =
                                                                   CONCAT62(uStack0000000000000008.
                                                                            _2_6_,0xdeac);
                                                              if (0x17d < *(uint *)(unaff_x19 + 0x18
                                                                                   )) {
                                                                *(undefined8 *)(unaff_x19 + 0x17f8)
                                                                     = uStack0000000000000008;
                                                                *(undefined8 *)(unaff_x19 + 0x17f0)
                                                                     = uStack0000000000000000;
                                                                thunk_FUN_03f86000(unaff_x19 +
                                                                                   0x17f0,0);
                                                                uStack0000000000000000 =
                                                                     *(undefined8 *)puVar3;
                                                                uStack0000000000000008 = 0;
                                                                thunk_FUN_03f86000();
                                                                puVar3 = PTR_DAT_09130298;
                                                                uStack0000000000000008 =
                                                                     CONCAT62(uStack0000000000000008
                                                                              ._2_6_,0xdead);
                                                                if (0x17e < *(uint *)(unaff_x19 +
                                                                                     0x18)) {
                                                                  *(undefined8 *)
                                                                   (unaff_x19 + 0x1808) =
                                                                       uStack0000000000000008;
                                                                  *(undefined8 *)
                                                                   (unaff_x19 + 0x1800) =
                                                                       uStack0000000000000000;
                                                                  thunk_FUN_03f86000(unaff_x19 +
                                                                                     0x1800,0);
                                                                  uStack0000000000000000 =
                                                                       *(undefined8 *)puVar3;
                                                                  uStack0000000000000008 = 0;
                                                                  thunk_FUN_03f86000();
                                                                  puVar3 = PTR_DAT_091302e8;
                                                                  uStack0000000000000008 =
                                                                       CONCAT62(
                                                  uStack0000000000000008._2_6_,0x2714);
                                                  if (0x17f < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x1818) =
                                                         uStack0000000000000008;
                                                    *(undefined8 *)(unaff_x19 + 0x1810) =
                                                         uStack0000000000000000;
                                                    thunk_FUN_03f86000(unaff_x19 + 0x1810,0);
                                                    uStack0000000000000000 = *(undefined8 *)puVar3;
                                                    uStack0000000000000008 = 0;
                                                    thunk_FUN_03f86000();
                                                    puVar3 = PTR_DAT_091300a0;
                                                    uStack0000000000000008 =
                                                         CONCAT62(uStack0000000000000008._2_6_,
                                                                  0x272d);
                                                    if (0x180 < *(uint *)(unaff_x19 + 0x18)) {
                                                      *(undefined8 *)(unaff_x19 + 0x1828) =
                                                           uStack0000000000000008;
                                                      *(undefined8 *)(unaff_x19 + 0x1820) =
                                                           uStack0000000000000000;
                                                      thunk_FUN_03f86000(unaff_x19 + 0x1820,0);
                                                      uStack0000000000000000 = *(undefined8 *)puVar3
                                                      ;
                                                      uStack0000000000000008 = 0;
                                                      thunk_FUN_03f86000();
                                                      puVar3 = PTR_DAT_091306d0;
                                                      uStack0000000000000008 =
                                                           CONCAT62(uStack0000000000000008._2_6_,
                                                                    0x2718);
                                                      if (0x181 < *(uint *)(unaff_x19 + 0x18)) {
                                                        *(undefined8 *)(unaff_x19 + 0x1838) =
                                                             uStack0000000000000008;
                                                        *(undefined8 *)(unaff_x19 + 0x1830) =
                                                             uStack0000000000000000;
                                                        thunk_FUN_03f86000(unaff_x19 + 0x1830,0);
                                                        uStack0000000000000000 =
                                                             *(undefined8 *)puVar3;
                                                        uStack0000000000000008 = 0;
                                                        thunk_FUN_03f86000();
                                                        puVar3 = PTR_DAT_0912fe80;
                                                        uStack0000000000000008 =
                                                             CONCAT62(uStack0000000000000008._2_6_,
                                                                      0x2712);
                                                        if (0x182 < *(uint *)(unaff_x19 + 0x18)) {
                                                          *(undefined8 *)(unaff_x19 + 0x1848) =
                                                               uStack0000000000000008;
                                                          *(undefined8 *)(unaff_x19 + 0x1840) =
                                                               uStack0000000000000000;
                                                          thunk_FUN_03f86000(unaff_x19 + 0x1840,0);
                                                          uStack0000000000000000 =
                                                               *(undefined8 *)puVar3;
                                                          uStack0000000000000008 = 0;
                                                          thunk_FUN_03f86000();
                                                          puVar3 = PTR_DAT_0912fef0;
                                                          uStack0000000000000008 =
                                                               CONCAT62(uStack0000000000000008._2_6_
                                                                        ,0x2762);
                                                          if (0x183 < *(uint *)(unaff_x19 + 0x18)) {
                                                            *(undefined8 *)(unaff_x19 + 0x1858) =
                                                                 uStack0000000000000008;
                                                            *(undefined8 *)(unaff_x19 + 0x1850) =
                                                                 uStack0000000000000000;
                                                            thunk_FUN_03f86000(unaff_x19 + 0x1850,0)
                                                            ;
                                                            uStack0000000000000000 =
                                                                 *(undefined8 *)puVar3;
                                                            uStack0000000000000008 = 0;
                                                            thunk_FUN_03f86000();
                                                            puVar3 = PTR_DAT_0912fe70;
                                                            uStack0000000000000008 =
                                                                 CONCAT62(uStack0000000000000008.
                                                                          _2_6_,0x2717);
                                                            if (0x184 < *(uint *)(unaff_x19 + 0x18))
                                                            {
                                                              *(undefined8 *)(unaff_x19 + 0x1868) =
                                                                   uStack0000000000000008;
                                                              *(undefined8 *)(unaff_x19 + 0x1860) =
                                                                   uStack0000000000000000;
                                                              thunk_FUN_03f86000(unaff_x19 + 0x1860,
                                                                                 0);
                                                              uStack0000000000000000 =
                                                                   *(undefined8 *)puVar3;
                                                              uStack0000000000000008 = 0;
                                                              thunk_FUN_03f86000();
                                                              puVar3 = PTR_DAT_091304f8;
                                                              uStack0000000000000008 =
                                                                   CONCAT62(uStack0000000000000008.
                                                                            _2_6_,0x2716);
                                                              if (0x185 < *(uint *)(unaff_x19 + 0x18
                                                                                   )) {
                                                                *(undefined8 *)(unaff_x19 + 0x1878)
                                                                     = uStack0000000000000008;
                                                                *(undefined8 *)(unaff_x19 + 0x1870)
                                                                     = uStack0000000000000000;
                                                                thunk_FUN_03f86000(unaff_x19 +
                                                                                   0x1870,0);
                                                                uStack0000000000000000 =
                                                                     *(undefined8 *)puVar3;
                                                                uStack0000000000000008 = 0;
                                                                thunk_FUN_03f86000();
                                                                puVar3 = PTR_DAT_09130410;
                                                                uStack0000000000000008 =
                                                                     CONCAT62(uStack0000000000000008
                                                                              ._2_6_,0x2715);
                                                                if (0x186 < *(uint *)(unaff_x19 +
                                                                                     0x18)) {
                                                                  *(undefined8 *)
                                                                   (unaff_x19 + 0x1888) =
                                                                       uStack0000000000000008;
                                                                  *(undefined8 *)
                                                                   (unaff_x19 + 0x1880) =
                                                                       uStack0000000000000000;
                                                                  thunk_FUN_03f86000(unaff_x19 +
                                                                                     0x1880,0);
                                                                  uStack0000000000000000 =
                                                                       *(undefined8 *)puVar3;
                                                                  uStack0000000000000008 = 0;
                                                                  thunk_FUN_03f86000();
                                                                  puVar3 = PTR_DAT_091304d0;
                                                                  uStack0000000000000008 =
                                                                       CONCAT62(
                                                  uStack0000000000000008._2_6_,0x275f);
                                                  if (0x187 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x1898) =
                                                         uStack0000000000000008;
                                                    *(undefined8 *)(unaff_x19 + 0x1890) =
                                                         uStack0000000000000000;
                                                    thunk_FUN_03f86000(unaff_x19 + 0x1890,0);
                                                    uStack0000000000000000 = *(undefined8 *)puVar3;
                                                    uStack0000000000000008 = 0;
                                                    thunk_FUN_03f86000();
                                                    puVar3 = PTR_DAT_091306b0;
                                                    uStack0000000000000008 =
                                                         CONCAT62(uStack0000000000000008._2_6_,
                                                                  0x2711);
                                                    if (0x188 < *(uint *)(unaff_x19 + 0x18)) {
                                                      *(undefined8 *)(unaff_x19 + 0x18a8) =
                                                           uStack0000000000000008;
                                                      *(undefined8 *)(unaff_x19 + 0x18a0) =
                                                           uStack0000000000000000;
                                                      thunk_FUN_03f86000(unaff_x19 + 0x18a0,0);
                                                      uStack0000000000000000 = *(undefined8 *)puVar3
                                                      ;
                                                      uStack0000000000000008 = 0;
                                                      thunk_FUN_03f86000();
                                                      puVar3 = PTR_DAT_091304f0;
                                                      uStack0000000000000008 =
                                                           CONCAT62(uStack0000000000000008._2_6_,
                                                                    0x2713);
                                                      if (0x189 < *(uint *)(unaff_x19 + 0x18)) {
                                                        *(undefined8 *)(unaff_x19 + 0x18b8) =
                                                             uStack0000000000000008;
                                                        *(undefined8 *)(unaff_x19 + 0x18b0) =
                                                             uStack0000000000000000;
                                                        thunk_FUN_03f86000(unaff_x19 + 0x18b0,0);
                                                        uStack0000000000000000 =
                                                             *(undefined8 *)puVar3;
                                                        uStack0000000000000008 = 0;
                                                        thunk_FUN_03f86000();
                                                        puVar3 = PTR_DAT_09130078;
                                                        uStack0000000000000008 =
                                                             CONCAT62(uStack0000000000000008._2_6_,
                                                                      0x271a);
                                                        if (0x18a < *(uint *)(unaff_x19 + 0x18)) {
                                                          *(undefined8 *)(unaff_x19 + 0x18c8) =
                                                               uStack0000000000000008;
                                                          *(undefined8 *)(unaff_x19 + 0x18c0) =
                                                               uStack0000000000000000;
                                                          thunk_FUN_03f86000(unaff_x19 + 0x18c0,0);
                                                          uStack0000000000000000 =
                                                               *(undefined8 *)puVar3;
                                                          uStack0000000000000008 = 0;
                                                          thunk_FUN_03f86000();
                                                          puVar3 = PTR_DAT_091306a8;
                                                          uStack0000000000000008 =
                                                               CONCAT62(uStack0000000000000008._2_6_
                                                                        ,0x2725);
                                                          if (0x18b < *(uint *)(unaff_x19 + 0x18)) {
                                                            *(undefined8 *)(unaff_x19 + 0x18d8) =
                                                                 uStack0000000000000008;
                                                            *(undefined8 *)(unaff_x19 + 0x18d0) =
                                                                 uStack0000000000000000;
                                                            thunk_FUN_03f86000(unaff_x19 + 0x18d0,0)
                                                            ;
                                                            uStack0000000000000000 =
                                                                 *(undefined8 *)puVar3;
                                                            uStack0000000000000008 = 0;
                                                            thunk_FUN_03f86000();
                                                            puVar3 = PTR_DAT_09130450;
                                                            uStack0000000000000008 =
                                                                 CONCAT62(uStack0000000000000008.
                                                                          _2_6_,0x2761);
                                                            if (0x18c < *(uint *)(unaff_x19 + 0x18))
                                                            {
                                                              *(undefined8 *)(unaff_x19 + 0x18e8) =
                                                                   uStack0000000000000008;
                                                              *(undefined8 *)(unaff_x19 + 0x18e0) =
                                                                   uStack0000000000000000;
                                                              thunk_FUN_03f86000(unaff_x19 + 0x18e0,
                                                                                 0);
                                                              uStack0000000000000000 =
                                                                   *(undefined8 *)puVar3;
                                                              uStack0000000000000008 = 0;
                                                              thunk_FUN_03f86000();
                                                              puVar3 = PTR_DAT_09130698;
                                                              uStack0000000000000008 =
                                                                   CONCAT62(uStack0000000000000008.
                                                                            _2_6_,0x2721);
                                                              if (0x18d < *(uint *)(unaff_x19 + 0x18
                                                                                   )) {
                                                                *(undefined8 *)(unaff_x19 + 0x18f8)
                                                                     = uStack0000000000000008;
                                                                *(undefined8 *)(unaff_x19 + 0x18f0)
                                                                     = uStack0000000000000000;
                                                                thunk_FUN_03f86000(unaff_x19 +
                                                                                   0x18f0,0);
                                                                uStack0000000000000000 =
                                                                     *(undefined8 *)puVar3;
                                                                uStack0000000000000008 = 0;
                                                                thunk_FUN_03f86000();
                                                                puVar3 = PTR_DAT_0912ffd8;
                                                                uStack0000000000000008 =
                                                                     CONCAT62(uStack0000000000000008
                                                                              ._2_6_,0x3a4);
                                                                if (0x18e < *(uint *)(unaff_x19 +
                                                                                     0x18)) {
                                                                  *(undefined8 *)
                                                                   (unaff_x19 + 0x1908) =
                                                                       uStack0000000000000008;
                                                                  *(undefined8 *)
                                                                   (unaff_x19 + 0x1900) =
                                                                       uStack0000000000000000;
                                                                  thunk_FUN_03f86000(unaff_x19 +
                                                                                     0x1900,0);
                                                                  uStack0000000000000000 =
                                                                       *(undefined8 *)puVar3;
                                                                  uStack0000000000000008 = 0;
                                                                  thunk_FUN_03f86000();
                                                                  puVar3 = PTR_DAT_09130400;
                                                                  uStack0000000000000008 =
                                                                       CONCAT62(
                                                  uStack0000000000000008._2_6_,0x3a4);
                                                  if (399 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x1918) =
                                                         uStack0000000000000008;
                                                    *(undefined8 *)(unaff_x19 + 0x1910) =
                                                         uStack0000000000000000;
                                                    thunk_FUN_03f86000(unaff_x19 + 0x1910,0);
                                                    uStack0000000000000000 = *(undefined8 *)puVar3;
                                                    uStack0000000000000008 = 0;
                                                    thunk_FUN_03f86000();
                                                    puVar3 = PTR_DAT_09130a40;
                                                    uStack0000000000000008 =
                                                         CONCAT62(uStack0000000000000008._2_6_,65000
                                                                 );
                                                    if (400 < *(uint *)(unaff_x19 + 0x18)) {
                                                      *(undefined8 *)(unaff_x19 + 0x1928) =
                                                           uStack0000000000000008;
                                                      *(undefined8 *)(unaff_x19 + 0x1920) =
                                                           uStack0000000000000000;
                                                      thunk_FUN_03f86000(unaff_x19 + 0x1920,0);
                                                      uStack0000000000000000 = *(undefined8 *)puVar3
                                                      ;
                                                      uStack0000000000000008 = 0;
                                                      thunk_FUN_03f86000();
                                                      puVar3 = PTR_DAT_09130538;
                                                      uStack0000000000000008 =
                                                           CONCAT62(uStack0000000000000008._2_6_,
                                                                    0xfde9);
                                                      if (0x191 < *(uint *)(unaff_x19 + 0x18)) {
                                                        *(undefined8 *)(unaff_x19 + 0x1938) =
                                                             uStack0000000000000008;
                                                        *(undefined8 *)(unaff_x19 + 0x1930) =
                                                             uStack0000000000000000;
                                                        thunk_FUN_03f86000(unaff_x19 + 0x1930,0);
                                                        uStack0000000000000000 =
                                                             *(undefined8 *)puVar3;
                                                        uStack0000000000000008 = 0;
                                                        thunk_FUN_03f86000();
                                                        puVar3 = PTR_DAT_091302b0;
                                                        uStack0000000000000008 =
                                                             CONCAT62(uStack0000000000000008._2_6_,
                                                                      65000);
                                                        if (0x192 < *(uint *)(unaff_x19 + 0x18)) {
                                                          *(undefined8 *)(unaff_x19 + 0x1948) =
                                                               uStack0000000000000008;
                                                          *(undefined8 *)(unaff_x19 + 0x1940) =
                                                               uStack0000000000000000;
                                                          thunk_FUN_03f86000(unaff_x19 + 0x1940,0);
                                                          uStack0000000000000000 =
                                                               *(undefined8 *)puVar3;
                                                          uStack0000000000000008 = 0;
                                                          thunk_FUN_03f86000();
                                                          puVar3 = PTR_DAT_091308f8;
                                                          uStack0000000000000008 =
                                                               CONCAT62(uStack0000000000000008._2_6_
                                                                        ,0xfde9);
                                                          if (0x193 < *(uint *)(unaff_x19 + 0x18)) {
                                                            *(undefined8 *)(unaff_x19 + 0x1958) =
                                                                 uStack0000000000000008;
                                                            *(undefined8 *)(unaff_x19 + 0x1950) =
                                                                 uStack0000000000000000;
                                                            thunk_FUN_03f86000(unaff_x19 + 0x1950,0)
                                                            ;
                                                            uStack0000000000000000 =
                                                                 *(undefined8 *)puVar3;
                                                            uStack0000000000000008 = 0;
                                                            thunk_FUN_03f86000();
                                                            puVar2 = PTR_DAT_0912fd68;
                                                            puVar3 = PTR_DAT_091299d8;
                                                            uStack0000000000000008 =
                                                                 CONCAT62(uStack0000000000000008.
                                                                          _2_6_,0x3b6);
                                                            if (0x194 < *(uint *)(unaff_x19 + 0x18))
                                                            {
                                                              *(undefined8 *)(unaff_x19 + 0x1968) =
                                                                   uStack0000000000000008;
                                                              *(undefined8 *)(unaff_x19 + 0x1960) =
                                                                   uStack0000000000000000;
                                                              thunk_FUN_03f86000(unaff_x19 + 0x1960,
                                                                                 0);
                                                              **(long **)(*(long *)puVar3 + 0xb8) =
                                                                   unaff_x19;
                                                              thunk_FUN_03f86000(*(undefined8 *)
                                                                                  (*(long *)puVar3 +
                                                                                  0xb8));
                                                              lVar11 = FUN_03f13470(*(undefined8 *)
                                                                                     puVar2,0x62);
                                                              uStack0000000000000008 = *unaff_x28;
                                                              uStack0000000000000000 = 0x4e40025;
                                                              thunk_FUN_03f86000((ulong)&
                                                  stack0x00000000 | 8);
                                                  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                                                    FUN_03f1362c();
                                                  }
                                                  if (*(int *)(lVar11 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar11 + 0x28) =
                                                         uStack0000000000000008;
                                                    *(undefined8 *)(lVar11 + 0x20) =
                                                         uStack0000000000000000;
                                                    thunk_FUN_03f86000(lVar11 + 0x28,0);
                                                    uStack0000000000000008 = *unaff_x26;
                                                    uStack0000000000000000 = 0x4e401b5;
                                                    thunk_FUN_03f86000((ulong)&stack0x00000000 | 8);
                                                    if ((*(uint *)(lVar11 + 0x18) & 0xfffffffe) != 0
                                                       ) {
                                                      *(undefined8 *)(lVar11 + 0x38) =
                                                           uStack0000000000000008;
                                                      *(undefined8 *)(lVar11 + 0x30) =
                                                           uStack0000000000000000;
                                                      thunk_FUN_03f86000(lVar11 + 0x38,0);
                                                      uStack0000000000000008 = *unaff_x24;
                                                      uStack0000000000000000 = 0x4e401f4;
                                                      thunk_FUN_03f86000((ulong)&stack0x00000000 | 8
                                                                        );
                                                      if (2 < *(uint *)(lVar11 + 0x18)) {
                                                        *(undefined8 *)(lVar11 + 0x48) =
                                                             uStack0000000000000008;
                                                        *(undefined8 *)(lVar11 + 0x40) =
                                                             uStack0000000000000000;
                                                        thunk_FUN_03f86000(lVar11 + 0x48,0);
                                                        uStack0000000000000008 = *unaff_x25;
                                                        uStack0000000000000000 = 0x20204e802c4;
                                                        thunk_FUN_03f86000((ulong)&stack0x00000000 |
                                                                           8);
                                                        if ((*(uint *)(lVar11 + 0x18) & 0xfffffffc)
                                                            != 0) {
                                                          *(undefined8 *)(lVar11 + 0x58) =
                                                               uStack0000000000000008;
                                                          *(undefined8 *)(lVar11 + 0x50) =
                                                               uStack0000000000000000;
                                                          thunk_FUN_03f86000(lVar11 + 0x58,0);
                                                          uStack0000000000000008 = *unaff_x29;
                                                          uStack0000000000000000 = 0x4e502e1;
                                                          thunk_FUN_03f86000((ulong)&stack0x00000000
                                                                             | 8);
                                                          if (4 < *(uint *)(lVar11 + 0x18)) {
                                                            *(undefined8 *)(lVar11 + 0x68) =
                                                                 uStack0000000000000008;
                                                            *(undefined8 *)(lVar11 + 0x60) =
                                                                 uStack0000000000000000;
                                                            thunk_FUN_03f86000(lVar11 + 0x68,0);
                                                            uStack0000000000000008 = *unaff_x22;
                                                            uStack0000000000000000 = 0x4e90307;
                                                            thunk_FUN_03f86000((ulong)&
                                                  stack0x00000000 | 8);
                                                  puVar8 = PTR_DAT_091309d8;
                                                  puVar7 = PTR_DAT_09130970;
                                                  puVar6 = PTR_DAT_091306e0;
                                                  puVar5 = PTR_DAT_091302f8;
                                                  puVar4 = PTR_DAT_09130118;
                                                  puVar1 = PTR_DAT_0912ff20;
                                                  puVar2 = PTR_DAT_0912fe50;
                                                  if (5 < *(uint *)(lVar11 + 0x18)) {
                                                    *(undefined8 *)(lVar11 + 0x78) =
                                                         uStack0000000000000008;
                                                    *(undefined8 *)(lVar11 + 0x70) =
                                                         uStack0000000000000000;
                                                    thunk_FUN_03f86000(lVar11 + 0x78,0);
                                                    uStack0000000000000008 = *(undefined8 *)puVar4;
                                                    uStack0000000000000000 = 0x4e40352;
                                                    thunk_FUN_03f86000((ulong)&stack0x00000000 | 8);
                                                    puVar4 = PTR_DAT_09130318;
                                                    if (6 < *(uint *)(lVar11 + 0x18)) {
                                                      *(undefined8 *)(lVar11 + 0x88) =
                                                           uStack0000000000000008;
                                                      *(undefined8 *)(lVar11 + 0x80) =
                                                           uStack0000000000000000;
                                                      thunk_FUN_03f86000(lVar11 + 0x88,0);
                                                      uStack0000000000000008 = *(undefined8 *)puVar4
                                                      ;
                                                      uStack0000000000000000 = 0x20204e20354;
                                                      thunk_FUN_03f86000((ulong)&stack0x00000000 | 8
                                                                        );
                                                      if ((*(uint *)(lVar11 + 0x18) & 0xfffffff8) !=
                                                          0) {
                                                        *(undefined8 *)(lVar11 + 0x98) =
                                                             uStack0000000000000008;
                                                        *(undefined8 *)(lVar11 + 0x90) =
                                                             uStack0000000000000000;
                                                        thunk_FUN_03f86000(lVar11 + 0x98,0);
                                                        uStack0000000000000008 =
                                                             *(undefined8 *)puVar6;
                                                        uStack0000000000000000 = 0x4e40357;
                                                        thunk_FUN_03f86000((ulong)&stack0x00000000 |
                                                                           8);
                                                        puVar4 = PTR_DAT_091300d8;
                                                        if (8 < *(uint *)(lVar11 + 0x18)) {
                                                          *(undefined8 *)(lVar11 + 0xa8) =
                                                               uStack0000000000000008;
                                                          *(undefined8 *)(lVar11 + 0xa0) =
                                                               uStack0000000000000000;
                                                          thunk_FUN_03f86000(lVar11 + 0xa8,0);
                                                          uStack0000000000000008 =
                                                               *(undefined8 *)puVar4;
                                                          uStack0000000000000000 = 0x4e60359;
                                                          thunk_FUN_03f86000((ulong)&stack0x00000000
                                                                             | 8);
                                                          if (9 < *(uint *)(lVar11 + 0x18)) {
                                                            *(undefined8 *)(lVar11 + 0xb8) =
                                                                 uStack0000000000000008;
                                                            *(undefined8 *)(lVar11 + 0xb0) =
                                                                 uStack0000000000000000;
                                                            thunk_FUN_03f86000(lVar11 + 0xb8,0);
                                                            uStack0000000000000008 =
                                                                 *(undefined8 *)PTR_DAT_09130988;
                                                            uStack0000000000000000 = 0x4e4035a;
                                                            thunk_FUN_03f86000((ulong)&
                                                  stack0x00000000 | 8);
                                                  if (10 < *(uint *)(lVar11 + 0x18)) {
                                                    *(undefined8 *)(lVar11 + 200) =
                                                         uStack0000000000000008;
                                                    *(undefined8 *)(lVar11 + 0xc0) =
                                                         uStack0000000000000000;
                                                    thunk_FUN_03f86000(lVar11 + 200,0);
                                                    uStack0000000000000008 = *unaff_x23;
                                                    uStack0000000000000000 = 0x4e4035c;
                                                    thunk_FUN_03f86000((ulong)&stack0x00000000 | 8);
                                                    puVar4 = PTR_DAT_09130330;
                                                    if (0xb < *(uint *)(lVar11 + 0x18)) {
                                                      *(undefined8 *)(lVar11 + 0xd8) =
                                                           uStack0000000000000008;
                                                      *(undefined8 *)(lVar11 + 0xd0) =
                                                           uStack0000000000000000;
                                                      thunk_FUN_03f86000(lVar11 + 0xd8,0);
                                                      uStack0000000000000008 = *(undefined8 *)puVar4
                                                      ;
                                                      uStack0000000000000000 = 0x4e4035d;
                                                      thunk_FUN_03f86000((ulong)&stack0x00000000 | 8
                                                                        );
                                                      if (0xc < *(uint *)(lVar11 + 0x18)) {
                                                        *(undefined8 *)(lVar11 + 0xe8) =
                                                             uStack0000000000000008;
                                                        *(undefined8 *)(lVar11 + 0xe0) =
                                                             uStack0000000000000000;
                                                        thunk_FUN_03f86000(lVar11 + 0xe8,0);
                                                        uStack0000000000000008 =
                                                             *(undefined8 *)PTR_DAT_09130588;
                                                        uStack0000000000000000 = 0x20204e7035e;
                                                        thunk_FUN_03f86000((ulong)&stack0x00000000 |
                                                                           8);
                                                        if (0xd < *(uint *)(lVar11 + 0x18)) {
                                                          *(undefined8 *)(lVar11 + 0xf8) =
                                                               uStack0000000000000008;
                                                          *(undefined8 *)(lVar11 + 0xf0) =
                                                               uStack0000000000000000;
                                                          thunk_FUN_03f86000(lVar11 + 0xf8,0);
                                                          uStack0000000000000008 =
                                                               *(undefined8 *)puVar7;
                                                          uStack0000000000000000 = 0x4e4035f;
                                                          thunk_FUN_03f86000((ulong)&stack0x00000000
                                                                             | 8);
                                                          if (0xe < *(uint *)(lVar11 + 0x18)) {
                                                            *(undefined8 *)(lVar11 + 0x108) =
                                                                 uStack0000000000000008;
                                                            *(undefined8 *)(lVar11 + 0x100) =
                                                                 uStack0000000000000000;
                                                            thunk_FUN_03f86000(lVar11 + 0x108,0);
                                                            uStack0000000000000008 =
                                                                 *(undefined8 *)puVar2;
                                                            uStack0000000000000000 = 0x4e80360;
                                                            thunk_FUN_03f86000((ulong)&
                                                  stack0x00000000 | 8);
                                                  if ((*(uint *)(lVar11 + 0x18) & 0xfffffff0) != 0)
                                                  {
                                                    *(undefined8 *)(lVar11 + 0x118) =
                                                         uStack0000000000000008;
                                                    *(undefined8 *)(lVar11 + 0x110) =
                                                         uStack0000000000000000;
                                                    thunk_FUN_03f86000(lVar11 + 0x118,0);
                                                    uStack0000000000000008 = *(undefined8 *)puVar8;
                                                    uStack0000000000000000 = 0x4e40361;
                                                    thunk_FUN_03f86000((ulong)&stack0x00000000 | 8);
                                                    if (0x10 < *(uint *)(lVar11 + 0x18)) {
                                                      *(undefined8 *)(lVar11 + 0x128) =
                                                           uStack0000000000000008;
                                                      *(undefined8 *)(lVar11 + 0x120) =
                                                           uStack0000000000000000;
                                                      thunk_FUN_03f86000(lVar11 + 0x128,0);
                                                      uStack0000000000000008 =
                                                           *(undefined8 *)PTR_DAT_09130230;
                                                      uStack0000000000000000 = 0x20204e30362;
                                                      thunk_FUN_03f86000((ulong)&stack0x00000000 | 8
                                                                        );
                                                      puVar2 = PTR_DAT_0912fed0;
                                                      if (0x11 < *(uint *)(lVar11 + 0x18)) {
                                                        *(undefined8 *)(lVar11 + 0x138) =
                                                             uStack0000000000000008;
                                                        *(undefined8 *)(lVar11 + 0x130) =
                                                             uStack0000000000000000;
                                                        thunk_FUN_03f86000(lVar11 + 0x138,0);
                                                        uStack0000000000000008 =
                                                             *(undefined8 *)puVar2;
                                                        uStack0000000000000000 = 0x4e50365;
                                                        thunk_FUN_03f86000((ulong)&stack0x00000000 |
                                                                           8);
                                                        puVar2 = PTR_DAT_09130580;
                                                        if (0x12 < *(uint *)(lVar11 + 0x18)) {
                                                          *(undefined8 *)(lVar11 + 0x148) =
                                                               uStack0000000000000008;
                                                          *(undefined8 *)(lVar11 + 0x140) =
                                                               uStack0000000000000000;
                                                          thunk_FUN_03f86000(lVar11 + 0x148,0);
                                                          uStack0000000000000008 =
                                                               *(undefined8 *)puVar5;
                                                          uStack0000000000000000 = 0x4e20366;
                                                          thunk_FUN_03f86000((ulong)&stack0x00000000
                                                                             | 8);
                                                          if (0x13 < *(uint *)(lVar11 + 0x18)) {
                                                            *(undefined8 *)(lVar11 + 0x158) =
                                                                 uStack0000000000000008;
                                                            *(undefined8 *)(lVar11 + 0x150) =
                                                                 uStack0000000000000000;
                                                            thunk_FUN_03f86000(lVar11 + 0x158,0);
                                                            uStack0000000000000008 =
                                                                 *(undefined8 *)PTR_DAT_091305d0;
                                                            uStack0000000000000000 = 0x303036a036a;
                                                            thunk_FUN_03f86000((ulong)&
                                                  stack0x00000000 | 8);
                                                  if (0x14 < *(uint *)(lVar11 + 0x18)) {
                                                    *(undefined8 *)(lVar11 + 0x168) =
                                                         uStack0000000000000008;
                                                    *(undefined8 *)(lVar11 + 0x160) =
                                                         uStack0000000000000000;
                                                    thunk_FUN_03f86000(lVar11 + 0x168,0);
                                                    uStack0000000000000008 = *(undefined8 *)puVar2;
                                                    uStack0000000000000000 = 0x4e5036b;
                                                    thunk_FUN_03f86000((ulong)&stack0x00000000 | 8);
                                                    puVar2 = PTR_DAT_09130938;
                                                    if (0x15 < *(uint *)(lVar11 + 0x18)) {
                                                      *(undefined8 *)(lVar11 + 0x178) =
                                                           uStack0000000000000008;
                                                      *(undefined8 *)(lVar11 + 0x170) =
                                                           uStack0000000000000000;
                                                      thunk_FUN_03f86000(lVar11 + 0x178,0);
                                                      uStack0000000000000008 = *(undefined8 *)puVar2
                                                      ;
                                                      uStack0000000000000000 = 0x30303a403a4;
                                                      thunk_FUN_03f86000((ulong)&stack0x00000000 | 8
                                                                        );
                                                      puVar2 = PTR_DAT_09130360;
                                                      if (0x16 < *(uint *)(lVar11 + 0x18)) {
                                                        *(undefined8 *)(lVar11 + 0x188) =
                                                             uStack0000000000000008;
                                                        *(undefined8 *)(lVar11 + 0x180) =
                                                             uStack0000000000000000;
                                                        thunk_FUN_03f86000(lVar11 + 0x188,0);
                                                        uStack0000000000000008 =
                                                             *(undefined8 *)puVar2;
                                                        uStack0000000000000000 = 0x30303a803a8;
                                                        thunk_FUN_03f86000((ulong)&stack0x00000000 |
                                                                           8);
                                                        if (0x17 < *(uint *)(lVar11 + 0x18)) {
                                                          *(undefined8 *)(lVar11 + 0x198) =
                                                               uStack0000000000000008;
                                                          *(undefined8 *)(lVar11 + 400) =
                                                               uStack0000000000000000;
                                                          thunk_FUN_03f86000(lVar11 + 0x198,0);
                                                          uStack0000000000000008 =
                                                               *(undefined8 *)PTR_DAT_0912ff80;
                                                          uStack0000000000000000 = 0x30303b503b5;
                                                          thunk_FUN_03f86000((ulong)&stack0x00000000
                                                                             | 8);
                                                          puVar2 = PTR_DAT_09130218;
                                                          if (0x18 < *(uint *)(lVar11 + 0x18)) {
                                                            *(undefined8 *)(lVar11 + 0x1a8) =
                                                                 uStack0000000000000008;
                                                            *(undefined8 *)(lVar11 + 0x1a0) =
                                                                 uStack0000000000000000;
                                                            thunk_FUN_03f86000(lVar11 + 0x1a8,0);
                                                            uStack0000000000000008 =
                                                                 *(undefined8 *)puVar2;
                                                            uStack0000000000000000 = 0x30303b603b6;
                                                            thunk_FUN_03f86000((ulong)&
                                                  stack0x00000000 | 8);
                                                  if (0x19 < *(uint *)(lVar11 + 0x18)) {
                                                    *(undefined8 *)(lVar11 + 0x1b8) =
                                                         uStack0000000000000008;
                                                    *(undefined8 *)(lVar11 + 0x1b0) =
                                                         uStack0000000000000000;
                                                    thunk_FUN_03f86000(lVar11 + 0x1b8,0);
                                                    uStack0000000000000008 =
                                                         *(undefined8 *)PTR_DAT_09130510;
                                                    uStack0000000000000000 = 0x4e60402;
                                                    thunk_FUN_03f86000((ulong)&stack0x00000000 | 8);
                                                    if (0x1a < *(uint *)(lVar11 + 0x18)) {
                                                      *(undefined8 *)(lVar11 + 0x1c8) =
                                                           uStack0000000000000008;
                                                      *(undefined8 *)(lVar11 + 0x1c0) =
                                                           uStack0000000000000000;
                                                      thunk_FUN_03f86000(lVar11 + 0x1c8,0);
                                                      uStack0000000000000008 =
                                                           *(undefined8 *)PTR_DAT_0912fd70;
                                                      uStack0000000000000000 = 0x4e40417;
                                                      thunk_FUN_03f86000((ulong)&stack0x00000000 | 8
                                                                        );
                                                      if (0x1b < *(uint *)(lVar11 + 0x18)) {
                                                        *(undefined8 *)(lVar11 + 0x1d8) =
                                                             uStack0000000000000008;
                                                        *(undefined8 *)(lVar11 + 0x1d0) =
                                                             uStack0000000000000000;
                                                        thunk_FUN_03f86000(lVar11 + 0x1d8,0);
                                                        uStack0000000000000008 =
                                                             *(undefined8 *)PTR_DAT_0912fe88;
                                                        uStack0000000000000000 = 0x4e40474;
                                                        thunk_FUN_03f86000((ulong)&stack0x00000000 |
                                                                           8);
                                                        if (0x1c < *(uint *)(lVar11 + 0x18)) {
                                                          *(undefined8 *)(lVar11 + 0x1e8) =
                                                               uStack0000000000000008;
                                                          *(undefined8 *)(lVar11 + 0x1e0) =
                                                               uStack0000000000000000;
                                                          thunk_FUN_03f86000(lVar11 + 0x1e8,0);
                                                          uStack0000000000000008 =
                                                               *(undefined8 *)PTR_DAT_09130508;
                                                          uStack0000000000000000 = 0x4e40475;
                                                          thunk_FUN_03f86000((ulong)&stack0x00000000
                                                                             | 8);
                                                          puVar8 = PTR_DAT_09130728;
                                                          puVar7 = PTR_DAT_09130680;
                                                          puVar6 = PTR_DAT_091305c8;
                                                          puVar5 = PTR_DAT_09130130;
                                                          puVar4 = PTR_DAT_09130030;
                                                          puVar2 = PTR_DAT_0912fd98;
                                                          if (0x1d < *(uint *)(lVar11 + 0x18)) {
                                                            *(undefined8 *)(lVar11 + 0x1f8) =
                                                                 uStack0000000000000008;
                                                            *(undefined8 *)(lVar11 + 0x1f0) =
                                                                 uStack0000000000000000;
                                                            thunk_FUN_03f86000(lVar11 + 0x1f8,0);
                                                            uStack0000000000000008 =
                                                                 *(undefined8 *)puVar2;
                                                            uStack0000000000000000 = 0x4e40476;
                                                            thunk_FUN_03f86000((ulong)&
                                                  stack0x00000000 | 8);
                                                  if (0x1e < *(uint *)(lVar11 + 0x18)) {
                                                    *(undefined8 *)(lVar11 + 0x208) =
                                                         uStack0000000000000008;
                                                    *(undefined8 *)(lVar11 + 0x200) =
                                                         uStack0000000000000000;
                                                    thunk_FUN_03f86000(lVar11 + 0x208,0);
                                                    uStack0000000000000008 = *(undefined8 *)puVar7;
                                                    uStack0000000000000000 = 0x4e40477;
                                                    thunk_FUN_03f86000((ulong)&stack0x00000000 | 8);
                                                    if ((*(uint *)(lVar11 + 0x18) & 0xffffffe0) != 0
                                                       ) {
                                                      *(undefined8 *)(lVar11 + 0x218) =
                                                           uStack0000000000000008;
                                                      *(undefined8 *)(lVar11 + 0x210) =
                                                           uStack0000000000000000;
                                                      thunk_FUN_03f86000(lVar11 + 0x218,0);
                                                      uStack0000000000000008 = *(undefined8 *)puVar8
                                                      ;
                                                      uStack0000000000000000 = 0x4e40478;
                                                      thunk_FUN_03f86000((ulong)&stack0x00000000 | 8
                                                                        );
                                                      if (0x20 < *(uint *)(lVar11 + 0x18)) {
                                                        *(undefined8 *)(lVar11 + 0x228) =
                                                             uStack0000000000000008;
                                                        *(undefined8 *)(lVar11 + 0x220) =
                                                             uStack0000000000000000;
                                                        thunk_FUN_03f86000(lVar11 + 0x228,0);
                                                        uStack0000000000000008 =
                                                             *(undefined8 *)puVar4;
                                                        uStack0000000000000000 = 0x4e40479;
                                                        thunk_FUN_03f86000((ulong)&stack0x00000000 |
                                                                           8);
                                                        if (0x21 < *(uint *)(lVar11 + 0x18)) {
                                                          *(undefined8 *)(lVar11 + 0x238) =
                                                               uStack0000000000000008;
                                                          *(undefined8 *)(lVar11 + 0x230) =
                                                               uStack0000000000000000;
                                                          thunk_FUN_03f86000(lVar11 + 0x238,0);
                                                          uStack0000000000000008 =
                                                               *(undefined8 *)puVar5;
                                                          uStack0000000000000000 = 0x4e4047a;
                                                          thunk_FUN_03f86000((ulong)&stack0x00000000
                                                                             | 8);
                                                          if (0x22 < *(uint *)(lVar11 + 0x18)) {
                                                            *(undefined8 *)(lVar11 + 0x248) =
                                                                 uStack0000000000000008;
                                                            *(undefined8 *)(lVar11 + 0x240) =
                                                                 uStack0000000000000000;
                                                            thunk_FUN_03f86000(lVar11 + 0x248,0);
                                                            uStack0000000000000008 =
                                                                 *(undefined8 *)puVar6;
                                                            uStack0000000000000000 = 0x4e4047b;
                                                            thunk_FUN_03f86000((ulong)&
                                                  stack0x00000000 | 8);
                                                  if (0x23 < *(uint *)(lVar11 + 0x18)) {
                                                    *(undefined8 *)(lVar11 + 600) =
                                                         uStack0000000000000008;
                                                    *(undefined8 *)(lVar11 + 0x250) =
                                                         uStack0000000000000000;
                                                    thunk_FUN_03f86000(lVar11 + 600,0);
                                                    uStack0000000000000008 =
                                                         *(undefined8 *)PTR_DAT_09130540;
                                                    uStack0000000000000000 = 0x4e4047c;
                                                    thunk_FUN_03f86000((ulong)&stack0x00000000 | 8);
                                                    puVar2 = PTR_DAT_09130a08;
                                                    if (0x24 < *(uint *)(lVar11 + 0x18)) {
                                                      *(undefined8 *)(lVar11 + 0x268) =
                                                           uStack0000000000000008;
                                                      *(undefined8 *)(lVar11 + 0x260) =
                                                           uStack0000000000000000;
                                                      thunk_FUN_03f86000(lVar11 + 0x268,0);
                                                      uStack0000000000000008 = *(undefined8 *)puVar2
                                                      ;
                                                      uStack0000000000000000 = 0x4e4047d;
                                                      thunk_FUN_03f86000((ulong)&stack0x00000000 | 8
                                                                        );
                                                      if (0x25 < *(uint *)(lVar11 + 0x18)) {
                                                        *(undefined8 *)(lVar11 + 0x278) =
                                                             uStack0000000000000008;
                                                        *(undefined8 *)(lVar11 + 0x270) =
                                                             uStack0000000000000000;
                                                        thunk_FUN_03f86000(lVar11 + 0x278,0);
                                                        uStack0000000000000008 =
                                                             *(undefined8 *)PTR_DAT_09130048;
                                                        uStack0000000000000000 = 0x20004b004b0;
                                                        thunk_FUN_03f86000((ulong)&stack0x00000000 |
                                                                           8);
                                                        puVar2 = PTR_DAT_09130790;
                                                        if (0x26 < *(uint *)(lVar11 + 0x18)) {
                                                          *(undefined8 *)(lVar11 + 0x288) =
                                                               uStack0000000000000008;
                                                          *(undefined8 *)(lVar11 + 0x280) =
                                                               uStack0000000000000000;
                                                          thunk_FUN_03f86000(lVar11 + 0x288,0);
                                                          uStack0000000000000008 =
                                                               *(undefined8 *)puVar2;
                                                          uStack0000000000000000 = 0x4b004b1;
                                                          thunk_FUN_03f86000((ulong)&stack0x00000000
                                                                             | 8);
                                                          puVar2 = PTR_DAT_09130468;
                                                          if (0x27 < *(uint *)(lVar11 + 0x18)) {
                                                            *(undefined8 *)(lVar11 + 0x298) =
                                                                 uStack0000000000000008;
                                                            *(undefined8 *)(lVar11 + 0x290) =
                                                                 uStack0000000000000000;
                                                            thunk_FUN_03f86000(lVar11 + 0x298,0);
                                                            uStack0000000000000008 =
                                                                 *(undefined8 *)puVar2;
                                                            uStack0000000000000000 = 0x30304e204e2;
                                                            thunk_FUN_03f86000((ulong)&
                                                  stack0x00000000 | 8);
                                                  puVar2 = PTR_DAT_09130a80;
                                                  if (0x28 < *(uint *)(lVar11 + 0x18)) {
                                                    *(undefined8 *)(lVar11 + 0x2a8) =
                                                         uStack0000000000000008;
                                                    *(undefined8 *)(lVar11 + 0x2a0) =
                                                         uStack0000000000000000;
                                                    thunk_FUN_03f86000(lVar11 + 0x2a8,0);
                                                    uStack0000000000000008 = *(undefined8 *)puVar2;
                                                    uStack0000000000000000 = 0x30304e304e3;
                                                    thunk_FUN_03f86000((ulong)&stack0x00000000 | 8);
                                                    puVar2 = PTR_DAT_09130068;
                                                    if (0x29 < *(uint *)(lVar11 + 0x18)) {
                                                      *(undefined8 *)(lVar11 + 0x2b8) =
                                                           uStack0000000000000008;
                                                      *(undefined8 *)(lVar11 + 0x2b0) =
                                                           uStack0000000000000000;
                                                      thunk_FUN_03f86000(lVar11 + 0x2b8,0);
                                                      uStack0000000000000008 = *(undefined8 *)puVar2
                                                      ;
                                                      uStack0000000000000000 = 0x30304e404e4;
                                                      thunk_FUN_03f86000((ulong)&stack0x00000000 | 8
                                                                        );
                                                      puVar2 = PTR_DAT_0912fed8;
                                                      if (0x2a < *(uint *)(lVar11 + 0x18)) {
                                                        *(undefined8 *)(lVar11 + 0x2c8) =
                                                             uStack0000000000000008;
                                                        *(undefined8 *)(lVar11 + 0x2c0) =
                                                             uStack0000000000000000;
                                                        thunk_FUN_03f86000(lVar11 + 0x2c8,0);
                                                        uStack0000000000000008 =
                                                             *(undefined8 *)puVar2;
                                                        uStack0000000000000000 = 0x30304e504e5;
                                                        thunk_FUN_03f86000((ulong)&stack0x00000000 |
                                                                           8);
                                                        puVar2 = PTR_DAT_091307e0;
                                                        if (0x2b < *(uint *)(lVar11 + 0x18)) {
                                                          *(undefined8 *)(lVar11 + 0x2d8) =
                                                               uStack0000000000000008;
                                                          *(undefined8 *)(lVar11 + 0x2d0) =
                                                               uStack0000000000000000;
                                                          thunk_FUN_03f86000(lVar11 + 0x2d8,0);
                                                          uStack0000000000000008 =
                                                               *(undefined8 *)puVar2;
                                                          uStack0000000000000000 = 0x30304e604e6;
                                                          thunk_FUN_03f86000((ulong)&stack0x00000000
                                                                             | 8);
                                                          if (0x2c < *(uint *)(lVar11 + 0x18)) {
                                                            *(undefined8 *)(lVar11 + 0x2e8) =
                                                                 uStack0000000000000008;
                                                            *(undefined8 *)(lVar11 + 0x2e0) =
                                                                 uStack0000000000000000;
                                                            thunk_FUN_03f86000(lVar11 + 0x2e8,0);
                                                            uStack0000000000000008 =
                                                                 *(undefined8 *)PTR_DAT_09130180;
                                                            uStack0000000000000000 = 0x30304e704e7;
                                                            thunk_FUN_03f86000((ulong)&
                                                  stack0x00000000 | 8);
                                                  if (0x2d < *(uint *)(lVar11 + 0x18)) {
                                                    *(undefined8 *)(lVar11 + 0x2f8) =
                                                         uStack0000000000000008;
                                                    *(undefined8 *)(lVar11 + 0x2f0) =
                                                         uStack0000000000000000;
                                                    thunk_FUN_03f86000(lVar11 + 0x2f8,0);
                                                    uStack0000000000000008 =
                                                         *(undefined8 *)PTR_DAT_09130378;
                                                    uStack0000000000000000 = 0x30304e804e8;
                                                    thunk_FUN_03f86000((ulong)&stack0x00000000 | 8);
                                                    if (0x2e < *(uint *)(lVar11 + 0x18)) {
                                                      *(undefined8 *)(lVar11 + 0x308) =
                                                           uStack0000000000000008;
                                                      *(undefined8 *)(lVar11 + 0x300) =
                                                           uStack0000000000000000;
                                                      thunk_FUN_03f86000(lVar11 + 0x308,0);
                                                      uStack0000000000000008 =
                                                           *(undefined8 *)PTR_DAT_09130338;
                                                      uStack0000000000000000 = 0x30304e904e9;
                                                      thunk_FUN_03f86000((ulong)&stack0x00000000 | 8
                                                                        );
                                                      if (0x2f < *(uint *)(lVar11 + 0x18)) {
                                                        *(undefined8 *)(lVar11 + 0x318) =
                                                             uStack0000000000000008;
                                                        *(undefined8 *)(lVar11 + 0x310) =
                                                             uStack0000000000000000;
                                                        thunk_FUN_03f86000(lVar11 + 0x318,0);
                                                        uStack0000000000000008 =
                                                             *(undefined8 *)PTR_DAT_0912fde0;
                                                        uStack0000000000000000 = 0x30304ea04ea;
                                                        thunk_FUN_03f86000((ulong)&stack0x00000000 |
                                                                           8);
                                                        if (0x30 < *(uint *)(lVar11 + 0x18)) {
                                                          *(undefined8 *)(lVar11 + 0x328) =
                                                               uStack0000000000000008;
                                                          *(undefined8 *)(lVar11 + 800) =
                                                               uStack0000000000000000;
                                                          thunk_FUN_03f86000(lVar11 + 0x328,0);
                                                          uStack0000000000000008 =
                                                               *(undefined8 *)PTR_DAT_09130570;
                                                          uStack0000000000000000 = 0x4e42710;
                                                          thunk_FUN_03f86000((ulong)&stack0x00000000
                                                                             | 8);
                                                          if (0x31 < *(uint *)(lVar11 + 0x18)) {
                                                            *(undefined8 *)(lVar11 + 0x338) =
                                                                 uStack0000000000000008;
                                                            *(undefined8 *)(lVar11 + 0x330) =
                                                                 uStack0000000000000000;
                                                            thunk_FUN_03f86000(lVar11 + 0x338,0);
                                                            uStack0000000000000008 =
                                                                 *(undefined8 *)PTR_DAT_09130410;
                                                            uStack0000000000000000 = 0x4e4275f;
                                                            thunk_FUN_03f86000((ulong)&
                                                  stack0x00000000 | 8);
                                                  if (0x32 < *(uint *)(lVar11 + 0x18)) {
                                                    *(undefined8 *)(lVar11 + 0x348) =
                                                         uStack0000000000000008;
                                                    *(undefined8 *)(lVar11 + 0x340) =
                                                         uStack0000000000000000;
                                                    thunk_FUN_03f86000(lVar11 + 0x348,0);
                                                    uStack0000000000000008 =
                                                         *(undefined8 *)PTR_DAT_09130868;
                                                    uStack0000000000000000 = 0x4b02ee0;
                                                    thunk_FUN_03f86000((ulong)&stack0x00000000 | 8);
                                                    puVar2 = PTR_DAT_091304e8;
                                                    if (0x33 < *(uint *)(lVar11 + 0x18)) {
                                                      *(undefined8 *)(lVar11 + 0x358) =
                                                           uStack0000000000000008;
                                                      *(undefined8 *)(lVar11 + 0x350) =
                                                           uStack0000000000000000;
                                                      thunk_FUN_03f86000(lVar11 + 0x358,0);
                                                      uStack0000000000000008 = *(undefined8 *)puVar2
                                                      ;
                                                      uStack0000000000000000 = 0x4b02ee1;
                                                      thunk_FUN_03f86000((ulong)&stack0x00000000 | 8
                                                                        );
                                                      if (0x34 < *(uint *)(lVar11 + 0x18)) {
                                                        *(undefined8 *)(lVar11 + 0x368) =
                                                             uStack0000000000000008;
                                                        *(undefined8 *)(lVar11 + 0x360) =
                                                             uStack0000000000000000;
                                                        thunk_FUN_03f86000(lVar11 + 0x368,0);
                                                        uStack0000000000000008 =
                                                             *(undefined8 *)PTR_DAT_091305f0;
                                                        uStack0000000000000000 = 0x10104e44e9f;
                                                        thunk_FUN_03f86000((ulong)&stack0x00000000 |
                                                                           8);
                                                        puVar2 = PTR_DAT_09130038;
                                                        if (0x35 < *(uint *)(lVar11 + 0x18)) {
                                                          *(undefined8 *)(lVar11 + 0x378) =
                                                               uStack0000000000000008;
                                                          *(undefined8 *)(lVar11 + 0x370) =
                                                               uStack0000000000000000;
                                                          thunk_FUN_03f86000(lVar11 + 0x378,0);
                                                          uStack0000000000000008 =
                                                               *(undefined8 *)puVar2;
                                                          uStack0000000000000000 = 0x4e44f31;
                                                          thunk_FUN_03f86000((ulong)&stack0x00000000
                                                                             | 8);
                                                          if (0x36 < *(uint *)(lVar11 + 0x18)) {
                                                            *(undefined8 *)(lVar11 + 0x388) =
                                                                 uStack0000000000000008;
                                                            *(undefined8 *)(lVar11 + 0x380) =
                                                                 uStack0000000000000000;
                                                            thunk_FUN_03f86000(lVar11 + 0x388,0);
                                                            uStack0000000000000008 =
                                                                 *(undefined8 *)PTR_DAT_09130930;
                                                            uStack0000000000000000 = 0x4e44f35;
                                                            thunk_FUN_03f86000((ulong)&
                                                  stack0x00000000 | 8);
                                                  puVar9 = PTR_DAT_09130620;
                                                  puVar8 = PTR_DAT_09130140;
                                                  puVar7 = PTR_DAT_091300f8;
                                                  puVar6 = PTR_DAT_09130080;
                                                  puVar5 = PTR_DAT_0912ffe0;
                                                  puVar4 = PTR_DAT_0912ffb0;
                                                  puVar2 = PTR_DAT_0912ff30;
                                                  if (0x37 < *(uint *)(lVar11 + 0x18)) {
                                                    *(undefined8 *)(lVar11 + 0x398) =
                                                         uStack0000000000000008;
                                                    *(undefined8 *)(lVar11 + 0x390) =
                                                         uStack0000000000000000;
                                                    thunk_FUN_03f86000(lVar11 + 0x398,0);
                                                    uStack0000000000000008 = *(undefined8 *)puVar6;
                                                    uStack0000000000000000 = 0x4e44f36;
                                                    thunk_FUN_03f86000((ulong)&stack0x00000000 | 8);
                                                    if (0x38 < *(uint *)(lVar11 + 0x18)) {
                                                      *(undefined8 *)(lVar11 + 0x3a8) =
                                                           uStack0000000000000008;
                                                      *(undefined8 *)(lVar11 + 0x3a0) =
                                                           uStack0000000000000000;
                                                      thunk_FUN_03f86000(lVar11 + 0x3a8,0);
                                                      uStack0000000000000008 = *(undefined8 *)puVar9
                                                      ;
                                                      uStack0000000000000000 = 0x4e44f38;
                                                      thunk_FUN_03f86000((ulong)&stack0x00000000 | 8
                                                                        );
                                                      if (0x39 < *(uint *)(lVar11 + 0x18)) {
                                                        *(undefined8 *)(lVar11 + 0x3b8) =
                                                             uStack0000000000000008;
                                                        *(undefined8 *)(lVar11 + 0x3b0) =
                                                             uStack0000000000000000;
                                                        thunk_FUN_03f86000(lVar11 + 0x3b8,0);
                                                        uStack0000000000000008 =
                                                             *(undefined8 *)puVar5;
                                                        uStack0000000000000000 = 0x4e44f3c;
                                                        thunk_FUN_03f86000((ulong)&stack0x00000000 |
                                                                           8);
                                                        if (0x3a < *(uint *)(lVar11 + 0x18)) {
                                                          *(undefined8 *)(lVar11 + 0x3c8) =
                                                               uStack0000000000000008;
                                                          *(undefined8 *)(lVar11 + 0x3c0) =
                                                               uStack0000000000000000;
                                                          thunk_FUN_03f86000(lVar11 + 0x3c8,0);
                                                          uStack0000000000000008 =
                                                               *(undefined8 *)puVar8;
                                                          uStack0000000000000000 = 0x4e44f3d;
                                                          thunk_FUN_03f86000((ulong)&stack0x00000000
                                                                             | 8);
                                                          if (0x3b < *(uint *)(lVar11 + 0x18)) {
                                                            *(undefined8 *)(lVar11 + 0x3d8) =
                                                                 uStack0000000000000008;
                                                            *(undefined8 *)(lVar11 + 0x3d0) =
                                                                 uStack0000000000000000;
                                                            thunk_FUN_03f86000(lVar11 + 0x3d8,0);
                                                            uStack0000000000000008 =
                                                                 *(undefined8 *)puVar2;
                                                            uStack0000000000000000 = 0x3a44f42;
                                                            thunk_FUN_03f86000((ulong)&
                                                  stack0x00000000 | 8);
                                                  if (0x3c < *(uint *)(lVar11 + 0x18)) {
                                                    *(undefined8 *)(lVar11 + 1000) =
                                                         uStack0000000000000008;
                                                    *(undefined8 *)(lVar11 + 0x3e0) =
                                                         uStack0000000000000000;
                                                    thunk_FUN_03f86000(lVar11 + 1000,0);
                                                    uStack0000000000000008 = *(undefined8 *)puVar4;
                                                    uStack0000000000000000 = 0x4e44f49;
                                                    thunk_FUN_03f86000((ulong)&stack0x00000000 | 8);
                                                    if (0x3d < *(uint *)(lVar11 + 0x18)) {
                                                      *(undefined8 *)(lVar11 + 0x3f8) =
                                                           uStack0000000000000008;
                                                      *(undefined8 *)(lVar11 + 0x3f0) =
                                                           uStack0000000000000000;
                                                      thunk_FUN_03f86000(lVar11 + 0x3f8,0);
                                                      uStack0000000000000008 = *(undefined8 *)puVar7
                                                      ;
                                                      uStack0000000000000000 = 0x4e84fc4;
                                                      thunk_FUN_03f86000((ulong)&stack0x00000000 | 8
                                                                        );
                                                      if (0x3e < *(uint *)(lVar11 + 0x18)) {
                                                        *(undefined8 *)(lVar11 + 0x408) =
                                                             uStack0000000000000008;
                                                        *(undefined8 *)(lVar11 + 0x400) =
                                                             uStack0000000000000000;
                                                        thunk_FUN_03f86000(lVar11 + 0x408,0);
                                                        uStack0000000000000008 =
                                                             *(undefined8 *)PTR_DAT_09130448;
                                                        uStack0000000000000000 = 0x4e74fc8;
                                                        thunk_FUN_03f86000((ulong)&stack0x00000000 |
                                                                           8);
                                                        puVar9 = PTR_DAT_09130a60;
                                                        puVar8 = PTR_DAT_09130a48;
                                                        puVar7 = PTR_DAT_09130a10;
                                                        puVar6 = PTR_DAT_09130768;
                                                        puVar5 = PTR_DAT_091306f0;
                                                        puVar4 = PTR_DAT_09130590;
                                                        puVar2 = PTR_DAT_0912fee8;
                                                        if ((*(uint *)(lVar11 + 0x18) & 0xffffffc0)
                                                            != 0) {
                                                          *(undefined8 *)(lVar11 + 0x418) =
                                                               uStack0000000000000008;
                                                          *(undefined8 *)(lVar11 + 0x410) =
                                                               uStack0000000000000000;
                                                          thunk_FUN_03f86000(lVar11 + 0x418,0);
                                                          uStack0000000000000008 =
                                                               *(undefined8 *)PTR_DAT_09130978;
                                                          uStack0000000000000000 = 0x30304e35182;
                                                          thunk_FUN_03f86000((ulong)&stack0x00000000
                                                                             | 8);
                                                          if (0x40 < *(uint *)(lVar11 + 0x18)) {
                                                            *(undefined8 *)(lVar11 + 0x428) =
                                                                 uStack0000000000000008;
                                                            *(undefined8 *)(lVar11 + 0x420) =
                                                                 uStack0000000000000000;
                                                            thunk_FUN_03f86000(lVar11 + 0x428,0);
                                                            uStack0000000000000008 =
                                                                 *(undefined8 *)puVar2;
                                                            uStack0000000000000000 = 0x4e45187;
                                                            thunk_FUN_03f86000((ulong)&
                                                  stack0x00000000 | 8);
                                                  if (0x41 < *(uint *)(lVar11 + 0x18)) {
                                                    *(undefined8 *)(lVar11 + 0x438) =
                                                         uStack0000000000000008;
                                                    *(undefined8 *)(lVar11 + 0x430) =
                                                         uStack0000000000000000;
                                                    thunk_FUN_03f86000(lVar11 + 0x438,0);
                                                    uStack0000000000000008 =
                                                         *(undefined8 *)PTR_DAT_09130440;
                                                    uStack0000000000000000 = 0x4e35221;
                                                    thunk_FUN_03f86000((ulong)&stack0x00000000 | 8);
                                                    if (0x42 < *(uint *)(lVar11 + 0x18)) {
                                                      *(undefined8 *)(lVar11 + 0x448) =
                                                           uStack0000000000000008;
                                                      *(undefined8 *)(lVar11 + 0x440) =
                                                           uStack0000000000000000;
                                                      thunk_FUN_03f86000(lVar11 + 0x448,0);
                                                      uStack0000000000000008 = *(undefined8 *)puVar1
                                                      ;
                                                      uStack0000000000000000 = 0x30304e3556a;
                                                      thunk_FUN_03f86000((ulong)&stack0x00000000 | 8
                                                                        );
                                                      if (0x43 < *(uint *)(lVar11 + 0x18)) {
                                                        *(undefined8 *)(lVar11 + 0x458) =
                                                             uStack0000000000000008;
                                                        *(undefined8 *)(lVar11 + 0x450) =
                                                             uStack0000000000000000;
                                                        thunk_FUN_03f86000(lVar11 + 0x458,0);
                                                        uStack0000000000000008 =
                                                             *(undefined8 *)puVar8;
                                                        uStack0000000000000000 = 0x30304e46faf;
                                                        thunk_FUN_03f86000((ulong)&stack0x00000000 |
                                                                           8);
                                                        if (0x44 < *(uint *)(lVar11 + 0x18)) {
                                                          *(undefined8 *)(lVar11 + 0x468) =
                                                               uStack0000000000000008;
                                                          *(undefined8 *)(lVar11 + 0x460) =
                                                               uStack0000000000000000;
                                                          thunk_FUN_03f86000(lVar11 + 0x468,0);
                                                          uStack0000000000000008 =
                                                               *(undefined8 *)puVar5;
                                                          uStack0000000000000000 = 0x30304e26fb0;
                                                          thunk_FUN_03f86000((ulong)&stack0x00000000
                                                                             | 8);
                                                          if (0x45 < *(uint *)(lVar11 + 0x18)) {
                                                            *(undefined8 *)(lVar11 + 0x478) =
                                                                 uStack0000000000000008;
                                                            *(undefined8 *)(lVar11 + 0x470) =
                                                                 uStack0000000000000000;
                                                            thunk_FUN_03f86000(lVar11 + 0x478,0);
                                                            uStack0000000000000008 =
                                                                 *(undefined8 *)puVar4;
                                                            uStack0000000000000000 = 0x10104e66fb1;
                                                            thunk_FUN_03f86000((ulong)&
                                                  stack0x00000000 | 8);
                                                  if (0x46 < *(uint *)(lVar11 + 0x18)) {
                                                    *(undefined8 *)(lVar11 + 0x488) =
                                                         uStack0000000000000008;
                                                    *(undefined8 *)(lVar11 + 0x480) =
                                                         uStack0000000000000000;
                                                    thunk_FUN_03f86000(lVar11 + 0x488,0);
                                                    uStack0000000000000008 = *(undefined8 *)puVar6;
                                                    uStack0000000000000000 = 0x30304e96fb2;
                                                    thunk_FUN_03f86000((ulong)&stack0x00000000 | 8);
                                                    if (0x47 < *(uint *)(lVar11 + 0x18)) {
                                                      *(undefined8 *)(lVar11 + 0x498) =
                                                           uStack0000000000000008;
                                                      *(undefined8 *)(lVar11 + 0x490) =
                                                           uStack0000000000000000;
                                                      thunk_FUN_03f86000(lVar11 + 0x498,0);
                                                      uStack0000000000000008 =
                                                           *(undefined8 *)PTR_DAT_091307c0;
                                                      uStack0000000000000000 = 0x30304e36fb3;
                                                      thunk_FUN_03f86000((ulong)&stack0x00000000 | 8
                                                                        );
                                                      puVar6 = PTR_DAT_09130798;
                                                      puVar5 = PTR_DAT_09130208;
                                                      puVar4 = PTR_DAT_09130160;
                                                      puVar1 = PTR_DAT_0912fef8;
                                                      puVar2 = PTR_DAT_0912fdd8;
                                                      if (0x48 < *(uint *)(lVar11 + 0x18)) {
                                                        *(undefined8 *)(lVar11 + 0x4a8) =
                                                             uStack0000000000000008;
                                                        *(undefined8 *)(lVar11 + 0x4a0) =
                                                             uStack0000000000000000;
                                                        thunk_FUN_03f86000(lVar11 + 0x4a8,0);
                                                        uStack0000000000000008 =
                                                             *(undefined8 *)puVar2;
                                                        uStack0000000000000000 = 0x30304e86fb4;
                                                        thunk_FUN_03f86000((ulong)&stack0x00000000 |
                                                                           8);
                                                        if (0x49 < *(uint *)(lVar11 + 0x18)) {
                                                          *(undefined8 *)(lVar11 + 0x4b8) =
                                                               uStack0000000000000008;
                                                          *(undefined8 *)(lVar11 + 0x4b0) =
                                                               uStack0000000000000000;
                                                          thunk_FUN_03f86000(lVar11 + 0x4b8,0);
                                                          uStack0000000000000008 =
                                                               *(undefined8 *)puVar1;
                                                          uStack0000000000000000 = 0x30304e56fb5;
                                                          thunk_FUN_03f86000((ulong)&stack0x00000000
                                                                             | 8);
                                                          if (0x4a < *(uint *)(lVar11 + 0x18)) {
                                                            *(undefined8 *)(lVar11 + 0x4c8) =
                                                                 uStack0000000000000008;
                                                            *(undefined8 *)(lVar11 + 0x4c0) =
                                                                 uStack0000000000000000;
                                                            thunk_FUN_03f86000(lVar11 + 0x4c8,0);
                                                            uStack0000000000000008 =
                                                                 *(undefined8 *)puVar6;
                                                            uStack0000000000000000 = 0x20204e76fb6;
                                                            thunk_FUN_03f86000((ulong)&
                                                  stack0x00000000 | 8);
                                                  if (0x4b < *(uint *)(lVar11 + 0x18)) {
                                                    *(undefined8 *)(lVar11 + 0x4d8) =
                                                         uStack0000000000000008;
                                                    *(undefined8 *)(lVar11 + 0x4d0) =
                                                         uStack0000000000000000;
                                                    thunk_FUN_03f86000(lVar11 + 0x4d8,0);
                                                    uStack0000000000000008 = *(undefined8 *)puVar4;
                                                    uStack0000000000000000 = 0x30304e66fb7;
                                                    thunk_FUN_03f86000((ulong)&stack0x00000000 | 8);
                                                    if (0x4c < *(uint *)(lVar11 + 0x18)) {
                                                      *(undefined8 *)(lVar11 + 0x4e8) =
                                                           uStack0000000000000008;
                                                      *(undefined8 *)(lVar11 + 0x4e0) =
                                                           uStack0000000000000000;
                                                      thunk_FUN_03f86000(lVar11 + 0x4e8,0);
                                                      uStack0000000000000008 = *(undefined8 *)puVar9
                                                      ;
                                                      uStack0000000000000000 = 0x30104e46fbd;
                                                      thunk_FUN_03f86000((ulong)&stack0x00000000 | 8
                                                                        );
                                                      if (0x4d < *(uint *)(lVar11 + 0x18)) {
                                                        *(undefined8 *)(lVar11 + 0x4f8) =
                                                             uStack0000000000000008;
                                                        *(undefined8 *)(lVar11 + 0x4f0) =
                                                             uStack0000000000000000;
                                                        thunk_FUN_03f86000(lVar11 + 0x4f8,0);
                                                        uStack0000000000000008 =
                                                             *(undefined8 *)puVar5;
                                                        uStack0000000000000000 = 0x30304e796c6;
                                                        thunk_FUN_03f86000((ulong)&stack0x00000000 |
                                                                           8);
                                                        if (0x4e < *(uint *)(lVar11 + 0x18)) {
                                                          *(undefined8 *)(lVar11 + 0x508) =
                                                               uStack0000000000000008;
                                                          *(undefined8 *)(lVar11 + 0x500) =
                                                               uStack0000000000000000;
                                                          thunk_FUN_03f86000(lVar11 + 0x508,0);
                                                          uStack0000000000000008 =
                                                               *(undefined8 *)puVar7;
                                                          uStack0000000000000000 = 0x10103a4c42c;
                                                          thunk_FUN_03f86000((ulong)&stack0x00000000
                                                                             | 8);
                                                          puVar2 = PTR_DAT_09130a78;
                                                          if (0x4f < *(uint *)(lVar11 + 0x18)) {
                                                            *(undefined8 *)(lVar11 + 0x518) =
                                                                 uStack0000000000000008;
                                                            *(undefined8 *)(lVar11 + 0x510) =
                                                                 uStack0000000000000000;
                                                            thunk_FUN_03f86000(lVar11 + 0x518,0);
                                                            uStack0000000000000008 =
                                                                 *(undefined8 *)puVar2;
                                                            uStack0000000000000000 = 0x30103a4c42d;
                                                            thunk_FUN_03f86000((ulong)&
                                                  stack0x00000000 | 8);
                                                  if (0x50 < *(uint *)(lVar11 + 0x18)) {
                                                    *(undefined8 *)(lVar11 + 0x528) =
                                                         uStack0000000000000008;
                                                    *(undefined8 *)(lVar11 + 0x520) =
                                                         uStack0000000000000000;
                                                    thunk_FUN_03f86000(lVar11 + 0x528,0);
                                                    uStack0000000000000008 = *(undefined8 *)puVar7;
                                                    uStack0000000000000000 = 0x3a4c42e;
                                                    thunk_FUN_03f86000((ulong)&stack0x00000000 | 8);
                                                    puVar2 = PTR_DAT_0912ff38;
                                                    if (0x51 < *(uint *)(lVar11 + 0x18)) {
                                                      *(undefined8 *)(lVar11 + 0x538) =
                                                           uStack0000000000000008;
                                                      *(undefined8 *)(lVar11 + 0x530) =
                                                           uStack0000000000000000;
                                                      thunk_FUN_03f86000(lVar11 + 0x538,0);
                                                      uStack0000000000000008 = *(undefined8 *)puVar2
                                                      ;
                                                      uStack0000000000000000 = 0x30303a4cadc;
                                                      thunk_FUN_03f86000((ulong)&stack0x00000000 | 8
                                                                        );
                                                      puVar2 = PTR_DAT_091305b0;
                                                      if (0x52 < *(uint *)(lVar11 + 0x18)) {
                                                        *(undefined8 *)(lVar11 + 0x548) =
                                                             uStack0000000000000008;
                                                        *(undefined8 *)(lVar11 + 0x540) =
                                                             uStack0000000000000000;
                                                        thunk_FUN_03f86000(lVar11 + 0x548,0);
                                                        uStack0000000000000008 =
                                                             *(undefined8 *)PTR_DAT_09130998;
                                                        uStack0000000000000000 = 0x10103b5caed;
                                                        thunk_FUN_03f86000((ulong)&stack0x00000000 |
                                                                           8);
                                                        puVar1 = PTR_DAT_0912fe10;
                                                        if (0x53 < *(uint *)(lVar11 + 0x18)) {
                                                          *(undefined8 *)(lVar11 + 0x558) =
                                                               uStack0000000000000008;
                                                          *(undefined8 *)(lVar11 + 0x550) =
                                                               uStack0000000000000000;
                                                          thunk_FUN_03f86000(lVar11 + 0x558,0);
                                                          uStack0000000000000008 =
                                                               *(undefined8 *)puVar1;
                                                          uStack0000000000000000 = 0x30303a8d698;
                                                          thunk_FUN_03f86000((ulong)&stack0x00000000
                                                                             | 8);
                                                          if (0x54 < *(uint *)(lVar11 + 0x18)) {
                                                            *(undefined8 *)(lVar11 + 0x568) =
                                                                 uStack0000000000000008;
                                                            *(undefined8 *)(lVar11 + 0x560) =
                                                                 uStack0000000000000000;
                                                            thunk_FUN_03f86000(lVar11 + 0x568,0);
                                                            uStack0000000000000008 =
                                                                 *(undefined8 *)PTR_DAT_09130380;
                                                            uStack0000000000000000 = 0xdeaadeaa;
                                                            thunk_FUN_03f86000((ulong)&
                                                  stack0x00000000 | 8);
                                                  if (0x55 < *(uint *)(lVar11 + 0x18)) {
                                                    *(undefined8 *)(lVar11 + 0x578) =
                                                         uStack0000000000000008;
                                                    *(undefined8 *)(lVar11 + 0x570) =
                                                         uStack0000000000000000;
                                                    thunk_FUN_03f86000(lVar11 + 0x578,0);
                                                    uStack0000000000000008 =
                                                         *(undefined8 *)PTR_DAT_0912fe20;
                                                    uStack0000000000000000 = 0xdeabdeab;
                                                    thunk_FUN_03f86000((ulong)&stack0x00000000 | 8);
                                                    if (0x56 < *(uint *)(lVar11 + 0x18)) {
                                                      *(undefined8 *)(lVar11 + 0x588) =
                                                           uStack0000000000000008;
                                                      *(undefined8 *)(lVar11 + 0x580) =
                                                           uStack0000000000000000;
                                                      thunk_FUN_03f86000(lVar11 + 0x588,0);
                                                      uStack0000000000000008 = *(undefined8 *)puVar2
                                                      ;
                                                      uStack0000000000000000 = 0xdeacdeac;
                                                      thunk_FUN_03f86000((ulong)&stack0x00000000 | 8
                                                                        );
                                                      if (0x57 < *(uint *)(lVar11 + 0x18)) {
                                                        *(undefined8 *)(lVar11 + 0x598) =
                                                             uStack0000000000000008;
                                                        *(undefined8 *)(lVar11 + 0x590) =
                                                             uStack0000000000000000;
                                                        thunk_FUN_03f86000(lVar11 + 0x598,0);
                                                        uStack0000000000000008 =
                                                             *(undefined8 *)PTR_DAT_091306d8;
                                                        uStack0000000000000000 = 0xdeaddead;
                                                        thunk_FUN_03f86000((ulong)&stack0x00000000 |
                                                                           8);
                                                        if (0x58 < *(uint *)(lVar11 + 0x18)) {
                                                          *(undefined8 *)(lVar11 + 0x5a8) =
                                                               uStack0000000000000008;
                                                          *(undefined8 *)(lVar11 + 0x5a0) =
                                                               uStack0000000000000000;
                                                          thunk_FUN_03f86000(lVar11 + 0x5a8,0);
                                                          uStack0000000000000008 =
                                                               *(undefined8 *)PTR_DAT_09130120;
                                                          uStack0000000000000000 = 0xdeaedeae;
                                                          thunk_FUN_03f86000((ulong)&stack0x00000000
                                                                             | 8);
                                                          if (0x59 < *(uint *)(lVar11 + 0x18)) {
                                                            *(undefined8 *)(lVar11 + 0x5b8) =
                                                                 uStack0000000000000008;
                                                            *(undefined8 *)(lVar11 + 0x5b0) =
                                                                 uStack0000000000000000;
                                                            thunk_FUN_03f86000(lVar11 + 0x5b8,0);
                                                            uStack0000000000000008 =
                                                                 *(undefined8 *)PTR_DAT_09130568;
                                                            uStack0000000000000000 = 0xdeafdeaf;
                                                            thunk_FUN_03f86000((ulong)&
                                                  stack0x00000000 | 8);
                                                  if (0x5a < *(uint *)(lVar11 + 0x18)) {
                                                    *(undefined8 *)(lVar11 + 0x5c8) =
                                                         uStack0000000000000008;
                                                    *(undefined8 *)(lVar11 + 0x5c0) =
                                                         uStack0000000000000000;
                                                    thunk_FUN_03f86000(lVar11 + 0x5c8,0);
                                                    uStack0000000000000008 =
                                                         *(undefined8 *)PTR_DAT_09130020;
                                                    uStack0000000000000000 = 0xdeb0deb0;
                                                    thunk_FUN_03f86000((ulong)&stack0x00000000 | 8);
                                                    if (0x5b < *(uint *)(lVar11 + 0x18)) {
                                                      *(undefined8 *)(lVar11 + 0x5d8) =
                                                           uStack0000000000000008;
                                                      *(undefined8 *)(lVar11 + 0x5d0) =
                                                           uStack0000000000000000;
                                                      thunk_FUN_03f86000(lVar11 + 0x5d8,0);
                                                      uStack0000000000000008 =
                                                           *(undefined8 *)PTR_DAT_09130918;
                                                      uStack0000000000000000 = 0xdeb1deb1;
                                                      thunk_FUN_03f86000((ulong)&stack0x00000000 | 8
                                                                        );
                                                      if (0x5c < *(uint *)(lVar11 + 0x18)) {
                                                        *(undefined8 *)(lVar11 + 0x5e8) =
                                                             uStack0000000000000008;
                                                        *(undefined8 *)(lVar11 + 0x5e0) =
                                                             uStack0000000000000000;
                                                        thunk_FUN_03f86000(lVar11 + 0x5e8,0);
                                                        uStack0000000000000008 =
                                                             *(undefined8 *)PTR_DAT_0912fdf0;
                                                        uStack0000000000000000 = 0xdeb2deb2;
                                                        thunk_FUN_03f86000((ulong)&stack0x00000000 |
                                                                           8);
                                                        if (0x5d < *(uint *)(lVar11 + 0x18)) {
                                                          *(undefined8 *)(lVar11 + 0x5f8) =
                                                               uStack0000000000000008;
                                                          *(undefined8 *)(lVar11 + 0x5f0) =
                                                               uStack0000000000000000;
                                                          thunk_FUN_03f86000(lVar11 + 0x5f8,0);
                                                          uStack0000000000000008 =
                                                               *(undefined8 *)PTR_DAT_09130758;
                                                          uStack0000000000000000 = 0xdeb3deb3;
                                                          thunk_FUN_03f86000((ulong)&stack0x00000000
                                                                             | 8);
                                                          if (0x5e < *(uint *)(lVar11 + 0x18)) {
                                                            *(undefined8 *)(lVar11 + 0x608) =
                                                                 uStack0000000000000008;
                                                            *(undefined8 *)(lVar11 + 0x600) =
                                                                 uStack0000000000000000;
                                                            thunk_FUN_03f86000(lVar11 + 0x608,0);
                                                            uStack0000000000000008 =
                                                                 *(undefined8 *)PTR_DAT_09130290;
                                                            uStack0000000000000000 = 0x10104b0fde8;
                                                            thunk_FUN_03f86000((ulong)&
                                                  stack0x00000000 | 8);
                                                  if (0x5f < *(uint *)(lVar11 + 0x18)) {
                                                    *(undefined8 *)(lVar11 + 0x618) =
                                                         uStack0000000000000008;
                                                    *(undefined8 *)(lVar11 + 0x610) =
                                                         uStack0000000000000000;
                                                    thunk_FUN_03f86000(lVar11 + 0x618,0);
                                                    uStack0000000000000008 =
                                                         *(undefined8 *)PTR_DAT_091306c0;
                                                    uStack0000000000000000 = 0x30304b0fde9;
                                                    thunk_FUN_03f86000((ulong)&stack0x00000000 | 8);
                                                    if (0x60 < *(uint *)(lVar11 + 0x18)) {
                                                      *(undefined8 *)(lVar11 + 0x628) =
                                                           uStack0000000000000008;
                                                      *(undefined8 *)(lVar11 + 0x620) =
                                                           uStack0000000000000000;
                                                      thunk_FUN_03f86000(lVar11 + 0x628,0);
                                                      uStack0000000000000000 = 0;
                                                      uStack0000000000000008 = 0;
                                                      thunk_FUN_03f86000((ulong)&stack0x00000000 | 8
                                                                         ,0);
                                                      puVar2 = PTR_DAT_09124120;
                                                      if (0x61 < *(uint *)(lVar11 + 0x18)) {
                                                        *(undefined8 *)(lVar11 + 0x638) =
                                                             uStack0000000000000008;
                                                        *(undefined8 *)(lVar11 + 0x630) =
                                                             uStack0000000000000000;
                                                        thunk_FUN_03f86000(lVar11 + 0x638,0);
                                                        plVar12 = (long *)(*(long *)(*(long *)puVar3
                                                                                    + 0xb8) + 8);
                                                        *plVar12 = lVar11;
                                                        thunk_FUN_03f86000(plVar12,lVar11);
                                                        iVar10 = FUN_0743b6c0();
                                                        lVar11 = *(long *)puVar2;
                                                        *(int *)(*(long *)(*(long *)puVar3 + 0xb8) +
                                                                0x10) = iVar10 + -1;
                                                        if (*(int *)(lVar11 + 0xe4) == 0) {
                                                          thunk_FUN_03f6fea8();
                                                        }
                                                        if (DAT_0968822e == '\0') {
                                                          FUN_03f13384(PTR_DAT_09124120);
                                                          DAT_0968822e = '\x01';
                                                        }
                                                        puVar6 = PTR_DAT_0912fd60;
                                                        puVar5 = PTR_DAT_0912fd58;
                                                        puVar4 = PTR_DAT_0912fd50;
                                                        puVar1 = PTR_DAT_091137c0;
                                                        lVar11 = *(long *)puVar2;
                                                        if (*(int *)(lVar11 + 0xe4) == 0) {
                                                          thunk_FUN_03f6fea8();
                                                          lVar11 = *(long *)puVar2;
                                                        }
                                                        uVar15 = *(undefined8 *)
                                                                  (*(long *)(lVar11 + 0xb8) + 0x18);
                                                        uVar13 = thunk_FUN_03f4e68c(*(undefined8 *)
                                                                                     puVar1);
                                                        FUN_06fec2c4(uVar13,uVar15,
                                                                     *(undefined8 *)puVar4);
                                                        puVar14 = (undefined8 *)
                                                                  (*(long *)(*(long *)puVar3 + 0xb8)
                                                                  + 0x18);
                                                        *puVar14 = uVar13;
                                                        thunk_FUN_03f86000(puVar14,uVar13);
                                                        uVar13 = thunk_FUN_03f4e68c(*(undefined8 *)
                                                                                     puVar6);
                                                        FUN_06f4ca50(uVar13,*(undefined8 *)puVar5);
                                                        puVar14 = (undefined8 *)
                                                                  (*(long *)(*(long *)puVar3 + 0xb8)
                                                                  + 0x20);
                                                        *puVar14 = uVar13;
                                                        thunk_FUN_03f86000(puVar14,uVar13);
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
                    /* WARNING: Subroutine does not return */
  FUN_03f13634();
}


