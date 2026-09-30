/*
FUNCTION_NAME: Cysharp.Threading.Tasks.Triggers.AsyncApplicationFocusTrigger$$GetOnApplicationFocusAsyncHandler
ENTRY_POINT: 0578fe94
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_7;telemetry_or_network_hits_1
*/


void Cysharp_Threading_Tasks_Triggers_AsyncApplicationFocusTrigger__GetOnApplicationFocusAsyncHandler
               (void)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 *unaff_x23;
  uint *unaff_x24;
  long *unaff_x25;
  
  *(undefined8 *)(unaff_x19 + 0x380) = unaff_x20;
                    /* try { // try from 0578fe98 to 0588fe9b has its CatchHandler @ 0578ff68 */
  thunk_FUN_02dc1ef0();
                    /* try { // try from 0578fe9c to 0588fe9f has its CatchHandler @ 0578f8e0 */
                    /* try { // try from 0578fea0 to 0588fea3 has its CatchHandler @ 0578ff44 */
                    /* try { // try from 0578fea4 to 0588fea7 has its CatchHandler @ 0578ff40 */
  lVar3 = FUN_02d4dd2c(*unaff_x23,2);
                    /* try { // try from 0578fea8 to 0588feab has its CatchHandler @ 0578ff3c */
  if (lVar3 != 0) {
                    /* try { // try from 0578feac to 0588ffa3 has its CatchHandler @ 0578f8e0 */
    if (*(int *)(lVar3 + 0x18) != 0) {
      *(undefined8 *)(lVar3 + 0x20) =
           *(undefined8 *)
            Method_Unity_Burst_FunctionPointer<CurveUtility_GenerateCubicBezierCurve_00000442_PostfixBurstDelegate>_get_Value__
      ;
      thunk_FUN_02dc1ef0((undefined8 *)(lVar3 + 0x20));
      if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar3 + 0x28) =
             *(undefined8 *)Method_UnityEngine_Rendering_DebugUI_Field<int>_get_setter__;
        thunk_FUN_02dc1ef0();
        if (0x6d < *unaff_x24) {
          *(long *)(unaff_x19 + 0x388) = lVar3;
          thunk_FUN_02dc1ef0(unaff_x19 + 0x388,lVar3);
          lVar3 = FUN_02d4dd2c(*unaff_x23,2);
          if (lVar3 == 0) goto LAB_05790b0c;
          if (*(int *)(lVar3 + 0x18) != 0) {
            *(undefined8 *)(lVar3 + 0x20) =
                 *(undefined8 *)
                  Method_UnityEngine_UIElements_FocusEventBase<FocusOutEvent>_GetPooled__;
            thunk_FUN_02dc1ef0((undefined8 *)(lVar3 + 0x20));
            if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) != 0) {
              *(undefined8 *)(lVar3 + 0x28) =
                   *(undefined8 *)
                    Method_UnityEngine_UIElements_FocusEventBase<BlurEvent>_GetPooled__;
              thunk_FUN_02dc1ef0();
              if (0x6e < *unaff_x24) {
                *(long *)(unaff_x19 + 0x390) = lVar3;
                thunk_FUN_02dc1ef0(unaff_x19 + 0x390,lVar3);
                lVar3 = FUN_02d4dd2c(*unaff_x23,2);
                if (lVar3 == 0) goto LAB_05790b0c;
                if (*(int *)(lVar3 + 0x18) != 0) {
                  *(undefined8 *)(lVar3 + 0x20) =
                       *(undefined8 *)Method_TMPro_FastAction<object,_Compute_DT_EventArgs>_Call__;
                  thunk_FUN_02dc1ef0((undefined8 *)(lVar3 + 0x20));
                  if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) != 0) {
                    *(undefined8 *)(lVar3 + 0x28) =
                         *(undefined8 *)
                          Method_UnityEngine_Rendering_DebugUI_Field<RenderingLayerMask>_set_setter__
                    ;
                    thunk_FUN_02dc1ef0();
                    puVar2 = 
                    Method_UnityEngine_UIElements_EventBase<ContextualMenuPopulateEvent>_GetPooled__
                    ;
                    if (0x6f < *unaff_x24) {
                      *(long *)(unaff_x19 + 0x398) = lVar3;
                      thunk_FUN_02dc1ef0(unaff_x19 + 0x398,lVar3);
                      *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x60) = unaff_x19;
                      thunk_FUN_02dc1ef0();
                      lVar3 = FUN_02d4dd2c(*(undefined8 *)puVar2,0x5e);
                      if (lVar3 == 0) goto LAB_05790b0c;
                      uVar1 = *(uint *)(lVar3 + 0x18);
                      if (uVar1 != 0) {
                        *(undefined4 *)(lVar3 + 0x28) = 0x20;
                        *(undefined8 *)(lVar3 + 0x20) = 0x1005a0041;
                        if (uVar1 != 1) {
                          *(undefined4 *)(lVar3 + 0x34) = 0x20;
                          *(undefined8 *)(lVar3 + 0x2c) = 0x100de00c0;
                          if (2 < uVar1) {
                            *(undefined4 *)(lVar3 + 0x40) = 0;
                            *(undefined8 *)(lVar3 + 0x38) = 0x2012e0100;
                            if (uVar1 != 3) {
                              *(undefined4 *)(lVar3 + 0x4c) = 0x69;
                              *(undefined **)(lVar3 + 0x44) = &DAT_01300130;
                              if (4 < uVar1) {
                                *(undefined4 *)(lVar3 + 0x58) = 0;
                                *(undefined8 *)(lVar3 + 0x50) = 0x201360132;
                                if (uVar1 != 5) {
                                  *(undefined4 *)(lVar3 + 100) = 0;
                                  *(undefined8 *)(lVar3 + 0x5c) = 0x301470139;
                                  if (6 < uVar1) {
                                    *(undefined4 *)(lVar3 + 0x70) = 0;
                                    *(undefined8 *)(lVar3 + 0x68) = 0x20176014a;
                                    if (uVar1 != 7) {
                                      *(undefined4 *)(lVar3 + 0x7c) = 0xff;
                                      *(undefined **)(lVar3 + 0x74) = &DAT_01780178;
                                      if (8 < uVar1) {
                                        *(undefined4 *)(lVar3 + 0x88) = 0;
                                        *(undefined8 *)(lVar3 + 0x80) = 0x3017d0179;
                                        if (uVar1 != 9) {
                                          *(undefined4 *)(lVar3 + 0x94) = 0x253;
                                          *(undefined **)(lVar3 + 0x8c) = &DAT_01810181;
                                          if (10 < uVar1) {
                                            *(undefined4 *)(lVar3 + 0xa0) = 0;
                                            *(undefined8 *)(lVar3 + 0x98) = 0x201840182;
                                            if (uVar1 != 0xb) {
                                              *(undefined4 *)(lVar3 + 0xac) = 0x254;
                                              *(undefined **)(lVar3 + 0xa4) = &DAT_01860186;
                                              if (0xc < uVar1) {
                                                *(undefined4 *)(lVar3 + 0xb8) = 0x188;
                                                *(undefined **)(lVar3 + 0xb0) = &DAT_01870187;
                                                if (uVar1 != 0xd) {
                                                  *(undefined4 *)(lVar3 + 0xc4) = 0xcd;
                                                  *(undefined8 *)(lVar3 + 0xbc) = 0x1018a0189;
                                                  if (0xe < uVar1) {
                                                    *(undefined4 *)(lVar3 + 0xd0) = 0x18c;
                                                    *(undefined **)(lVar3 + 200) = &DAT_018b018b;
                                                    if (uVar1 != 0xf) {
                                                      *(undefined4 *)(lVar3 + 0xdc) = 0x1dd;
                                                      *(undefined **)(lVar3 + 0xd4) = &DAT_018e018e;
                                                      if (0x10 < uVar1) {
                                                        *(undefined4 *)(lVar3 + 0xe8) = 0x259;
                                                        *(uleb128 **)(lVar3 + 0xe0) =
                                                             &uleb128_018f018f;
                                                        if (uVar1 != 0x11) {
                                                          *(undefined4 *)(lVar3 + 0xf4) = 0x25b;
                                                          *(uleb128 **)(lVar3 + 0xec) =
                                                               &uleb128_01900190;
                                                          if (0x12 < uVar1) {
                                                            *(undefined4 *)(lVar3 + 0x100) = 0x192;
                                                            *(uleb128 **)(lVar3 + 0xf8) =
                                                                 &uleb128_01910191;
                                                            if (uVar1 != 0x13) {
                                                              *(undefined4 *)(lVar3 + 0x10c) = 0x260
                                                              ;
                                                              *(uleb128 **)(lVar3 + 0x104) =
                                                                   &uleb128_01930193;
                                                              if (0x14 < uVar1) {
                                                                *(undefined4 *)(lVar3 + 0x118) =
                                                                     0x263;
                                                                *(undefined8 *)(lVar3 + 0x110) =
                                                                     0x1940194;
                                                                if (uVar1 != 0x15) {
                                                                  *(undefined4 *)(lVar3 + 0x124) =
                                                                       0x269;
                                                                  *(undefined8 *)(lVar3 + 0x11c) =
                                                                       0x1960196;
                                                                  if (0x16 < uVar1) {
                                                                    *(undefined4 *)(lVar3 + 0x130) =
                                                                         0x268;
                                                                    *(undefined **)(lVar3 + 0x128) =
                                                                         &DAT_01970197;
                                                                    if (uVar1 != 0x17) {
                                                                      *(undefined4 *)(lVar3 + 0x13c)
                                                                           = 0x199;
                                                                      *(uleb128 **)(lVar3 + 0x134) =
                                                                           &uleb128_01980198;
                                                                      if (0x18 < uVar1) {
                                                                        *(undefined4 *)
                                                                         (lVar3 + 0x148) = 0x26f;
                                                                        *(dwfenc **)(lVar3 + 0x140)
                                                                             = &
                                                  lsda_exception_table_019c019c;
                                                  if (uVar1 != 0x19) {
                                                    *(undefined4 *)(lVar3 + 0x154) = 0x272;
                                                    *(uleb128 **)(lVar3 + 0x14c) = &uleb128_019d019d
                                                    ;
                                                    if (0x1a < uVar1) {
                                                      *(undefined4 *)(lVar3 + 0x160) = 0x275;
                                                      *(undefined8 *)(lVar3 + 0x158) = 0x19f019f;
                                                      if (uVar1 != 0x1b) {
                                                        *(undefined4 *)(lVar3 + 0x16c) = 0;
                                                        *(undefined8 *)(lVar3 + 0x164) = 0x201a401a0
                                                        ;
                                                        if (0x1c < uVar1) {
                                                          *(undefined4 *)(lVar3 + 0x178) = 0x1a8;
                                                          *(undefined8 *)(lVar3 + 0x170) = 0x1a701a7
                                                          ;
                                                          if (uVar1 != 0x1d) {
                                                            *(undefined4 *)(lVar3 + 0x184) = 0x283;
                                                            *(undefined8 *)(lVar3 + 0x17c) =
                                                                 0x1a901a9;
                                                            if (0x1e < uVar1) {
                                                              *(undefined4 *)(lVar3 + 400) = 0x1ad;
                                                              *(fde_table_entry **)(lVar3 + 0x188) =
                                                                   &fde_table_entry_01ac01ac;
                                                              if (uVar1 != 0x1f) {
                                                                *(undefined4 *)(lVar3 + 0x19c) =
                                                                     0x288;
                                                                *(undefined8 *)(lVar3 + 0x194) =
                                                                     0x1ae01ae;
                                                                if (0x20 < uVar1) {
                                                                  *(undefined4 *)(lVar3 + 0x1a8) =
                                                                       0x1b0;
                                                                  *(undefined8 *)(lVar3 + 0x1a0) =
                                                                       0x1af01af;
                                                                  if (uVar1 != 0x21) {
                                                                    *(undefined4 *)(lVar3 + 0x1b4) =
                                                                         0xd9;
                                                                    *(undefined8 *)(lVar3 + 0x1ac) =
                                                                         0x101b201b1;
                                                                    if (0x22 < uVar1) {
                                                                      *(undefined4 *)(lVar3 + 0x1c0)
                                                                           = 0;
                                                                      *(undefined8 *)(lVar3 + 0x1b8)
                                                                           = 0x301b501b3;
                                                                      if (uVar1 != 0x23) {
                                                                        *(undefined4 *)
                                                                         (lVar3 + 0x1cc) = 0x292;
                                                                        *(undefined8 *)
                                                                         (lVar3 + 0x1c4) = 0x1b701b7
                                                                        ;
                                                                        if (0x24 < uVar1) {
                                                                          *(undefined4 *)
                                                                           (lVar3 + 0x1d8) = 0x1b9;
                                                                          *(undefined8 *)
                                                                           (lVar3 + 0x1d0) =
                                                                               0x1b801b8;
                                                                          if (uVar1 != 0x25) {
                                                                            *(undefined4 *)
                                                                             (lVar3 + 0x1e4) = 0x1bd
                                                                            ;
                                                                            *(fde_table_entry **)
                                                                             (lVar3 + 0x1dc) =
                                                                                 &
                                                  fde_table_entry_01bc01bc;
                                                  if (0x26 < uVar1) {
                                                    *(undefined4 *)(lVar3 + 0x1f0) = 0x1c6;
                                                    *(fde_table_entry **)(lVar3 + 0x1e8) =
                                                         &fde_table_entry_01c501c4;
                                                    if (uVar1 != 0x27) {
                                                      *(undefined4 *)(lVar3 + 0x1fc) = 0x1c9;
                                                      *(undefined8 *)(lVar3 + 500) = 0x1c801c7;
                                                      if (0x28 < uVar1) {
                                                        *(undefined4 *)(lVar3 + 0x208) = 0x1cc;
                                                        *(undefined8 *)(lVar3 + 0x200) = 0x1cb01ca;
                                                        if (uVar1 != 0x29) {
                                                          *(undefined4 *)(lVar3 + 0x214) = 0;
                                                          *(undefined8 *)(lVar3 + 0x20c) =
                                                               0x301db01cd;
                                                          if (0x2a < uVar1) {
                                                            *(undefined4 *)(lVar3 + 0x220) = 0;
                                                            *(undefined8 *)(lVar3 + 0x218) =
                                                                 0x201ee01de;
                                                            if (uVar1 != 0x2b) {
                                                              *(undefined4 *)(lVar3 + 0x22c) = 499;
                                                              *(undefined8 *)(lVar3 + 0x224) =
                                                                   0x1f201f1;
                                                              if (0x2c < uVar1) {
                                                                *(undefined4 *)(lVar3 + 0x238) =
                                                                     0x1f5;
                                                                *(dword **)(lVar3 + 0x230) =
                                                                     &DWORD_01f401f4;
                                                                if (uVar1 != 0x2d) {
                                                                  *(undefined4 *)(lVar3 + 0x244) = 0
                                                                  ;
                                                                  *(undefined8 *)(lVar3 + 0x23c) =
                                                                       0x2021601fa;
                                                                  if (0x2e < uVar1) {
                                                                    *(undefined4 *)(lVar3 + 0x250) =
                                                                         0x3ac;
                                                                    *(undefined8 *)(lVar3 + 0x248) =
                                                                         0x3860386;
                                                                    if (uVar1 != 0x2f) {
                                                                      *(undefined4 *)(lVar3 + 0x25c)
                                                                           = 0x25;
                                                                      *(undefined8 *)(lVar3 + 0x254)
                                                                           = 0x1038a0388;
                                                                      if (0x30 < uVar1) {
                                                                        *(undefined4 *)
                                                                         (lVar3 + 0x268) = 0x3cc;
                                                                        *(code **)(lVar3 + 0x260) =
                                                                                                                                                          
                                                  System_Collections_Generic_ObjectEqualityComparer<TMP_ResourceManager_FontAssetRef>__GetHashCode
                                                  ;
                                                  if (uVar1 != 0x31) {
                                                    *(undefined4 *)(lVar3 + 0x274) = 0x3f;
                                                    *(undefined8 *)(lVar3 + 0x26c) = 0x1038f038e;
                                                    if (0x32 < uVar1) {
                                                      *(undefined4 *)(lVar3 + 0x280) = 0x20;
                                                      *(undefined8 *)(lVar3 + 0x278) = 0x103ab0391;
                                                      if (uVar1 != 0x33) {
                                                        *(undefined4 *)(lVar3 + 0x28c) = 0;
                                                        *(undefined8 *)(lVar3 + 0x284) = 0x203ee03e2
                                                        ;
                                                        if (0x34 < uVar1) {
                                                          *(undefined4 *)(lVar3 + 0x298) = 0x50;
                                                          *(undefined8 *)(lVar3 + 0x290) =
                                                               0x1040f0401;
                                                          if (uVar1 != 0x35) {
                                                            *(undefined4 *)(lVar3 + 0x2a4) = 0x20;
                                                            *(undefined8 *)(lVar3 + 0x29c) =
                                                                 0x1042f0410;
                                                            if (0x36 < uVar1) {
                                                              *(undefined4 *)(lVar3 + 0x2b0) = 0;
                                                              *(undefined8 *)(lVar3 + 0x2a8) =
                                                                   0x204800460;
                                                              if (uVar1 != 0x37) {
                                                                *(undefined4 *)(lVar3 + 700) = 0;
                                                                *(undefined8 *)(lVar3 + 0x2b4) =
                                                                     0x204be0490;
                                                                if (0x38 < uVar1) {
                                                                  *(undefined4 *)(lVar3 + 0x2c8) = 0
                                                                  ;
                                                                  *(undefined8 *)(lVar3 + 0x2c0) =
                                                                       0x304c304c1;
                                                                  if (uVar1 != 0x39) {
                                                                    *(undefined4 *)(lVar3 + 0x2d4) =
                                                                         0x4c8;
                                                                    *(undefined8 *)(lVar3 + 0x2cc) =
                                                                         0x4c704c7;
                                                                    if (0x3a < uVar1) {
                                                                      *(undefined4 *)(lVar3 + 0x2e0)
                                                                           = 0x4cc;
                                                                      *(undefined8 *)(lVar3 + 0x2d8)
                                                                           = 0x4cb04cb;
                                                                      if (uVar1 != 0x3b) {
                                                                        *(undefined4 *)
                                                                         (lVar3 + 0x2ec) = 0;
                                                                        *(undefined8 *)
                                                                         (lVar3 + 0x2e4) =
                                                                             0x204ea04d0;
                                                                        if (0x3c < uVar1) {
                                                                          *(undefined4 *)
                                                                           (lVar3 + 0x2f8) = 0;
                                                                          *(undefined8 *)
                                                                           (lVar3 + 0x2f0) =
                                                                               0x204f404ee;
                                                                          if (uVar1 != 0x3d) {
                                                                            *(undefined4 *)
                                                                             (lVar3 + 0x304) = 0x4f9
                                                                            ;
                                                                            *(undefined8 *)
                                                                             (lVar3 + 0x2fc) =
                                                                                 0x4f804f8;
                                                                            if (0x3e < uVar1) {
                                                                              *(undefined4 *)
                                                                               (lVar3 + 0x310) =
                                                                                   0x30;
                                                                              *(undefined8 *)
                                                                               (lVar3 + 0x308) =
                                                                                   0x105560531;
                                                                              if (uVar1 != 0x3f) {
                                                                                *(undefined4 *)
                                                                                 (lVar3 + 0x31c) =
                                                                                     0x30;
                                                                                *(undefined8 *)
                                                                                 (lVar3 + 0x314) =
                                                                                     0x110c510a0;
                                                                                if (0x40 < uVar1) {
                                                                                  *(undefined4 *)
                                                                                   (lVar3 + 0x328) =
                                                                                       0;
                                                                                  *(undefined8 *)
                                                                                   (lVar3 + 800) =
                                                                                       0x21ef81e00;
                                                                                  if (uVar1 != 0x41)
                                                                                  {
                                                                                    *(undefined4 *)
                                                                                     (lVar3 + 0x334)
                                                                                         = 
                                                  0xfffffff8;
                                                  *(undefined8 *)(lVar3 + 0x32c) = 0x11f0f1f08;
                                                  if (0x42 < uVar1) {
                                                    *(undefined4 *)(lVar3 + 0x340) = 0xfffffff8;
                                                    *(undefined8 *)(lVar3 + 0x338) = 0x11f1f1f18;
                                                    if (uVar1 != 0x43) {
                                                      *(undefined4 *)(lVar3 + 0x34c) = 0xfffffff8;
                                                      *(undefined8 *)(lVar3 + 0x344) = 0x11f2f1f28;
                                                      if (0x44 < uVar1) {
                                                        *(undefined4 *)(lVar3 + 0x358) = 0xfffffff8;
                                                        *(undefined8 *)(lVar3 + 0x350) = 0x11f3f1f38
                                                        ;
                                                        if (uVar1 != 0x45) {
                                                          *(undefined4 *)(lVar3 + 0x364) =
                                                               0xfffffff8;
                                                          *(undefined8 *)(lVar3 + 0x35c) =
                                                               0x11f4d1f48;
                                                          if (0x46 < uVar1) {
                                                            *(undefined4 *)(lVar3 + 0x370) = 0x1f51;
                                                            *(undefined8 *)(lVar3 + 0x368) =
                                                                 0x1f591f59;
                                                            if (uVar1 != 0x47) {
                                                              *(undefined4 *)(lVar3 + 0x37c) =
                                                                   0x1f53;
                                                              *(undefined8 *)(lVar3 + 0x374) =
                                                                   0x1f5b1f5b;
                                                              if (0x48 < uVar1) {
                                                                *(undefined4 *)(lVar3 + 0x388) =
                                                                     0x1f55;
                                                                *(undefined8 *)(lVar3 + 0x380) =
                                                                     0x1f5d1f5d;
                                                                if (uVar1 != 0x49) {
                                                                  *(undefined4 *)(lVar3 + 0x394) =
                                                                       0x1f57;
                                                                  *(undefined8 *)(lVar3 + 0x38c) =
                                                                       0x1f5f1f5f;
                                                                  if (0x4a < uVar1) {
                                                                    *(undefined4 *)(lVar3 + 0x3a0) =
                                                                         0xfffffff8;
                                                                    *(undefined8 *)(lVar3 + 0x398) =
                                                                         0x11f6f1f68;
                                                                    if (uVar1 != 0x4b) {
                                                                      *(undefined4 *)(lVar3 + 0x3ac)
                                                                           = 0xfffffff8;
                                                                      *(undefined8 *)(lVar3 + 0x3a4)
                                                                           = 0x11f8f1f88;
                                                                      if (0x4c < uVar1) {
                                                                        *(undefined4 *)
                                                                         (lVar3 + 0x3b8) =
                                                                             0xfffffff8;
                                                                        *(undefined8 *)
                                                                         (lVar3 + 0x3b0) =
                                                                             0x11f9f1f98;
                                                                        if (uVar1 != 0x4d) {
                                                                          *(undefined4 *)
                                                                           (lVar3 + 0x3c4) =
                                                                               0xfffffff8;
                                                                          *(undefined8 *)
                                                                           (lVar3 + 0x3bc) =
                                                                               0x11faf1fa8;
                                                                          if (0x4e < uVar1) {
                                                                            *(undefined4 *)
                                                                             (lVar3 + 0x3d0) =
                                                                                 0xfffffff8;
                                                                            *(undefined8 *)
                                                                             (lVar3 + 0x3c8) =
                                                                                 0x11fb91fb8;
                                                                            if (uVar1 != 0x4f) {
                                                                              *(undefined4 *)
                                                                               (lVar3 + 0x3dc) =
                                                                                   0xffffffb6;
                                                                              *(undefined8 *)
                                                                               (lVar3 + 0x3d4) =
                                                                                   0x11fbb1fba;
                                                                              if (0x50 < uVar1) {
                                                                                *(undefined4 *)
                                                                                 (lVar3 + 1000) =
                                                                                     0x1fb3;
                                                                                *(undefined8 *)
                                                                                 (lVar3 + 0x3e0) =
                                                                                     0x1fbc1fbc;
                                                                                if (uVar1 != 0x51) {
                                                                                  *(undefined4 *)
                                                                                   (lVar3 + 0x3f4) =
                                                                                       0xffffffaa;
                                                                                  *(undefined8 *)
                                                                                   (lVar3 + 0x3ec) =
                                                                                       0x11fcb1fc8;
                                                                                  if (0x52 < uVar1)
                                                                                  {
                                                                                    *(undefined4 *)
                                                                                     (lVar3 + 0x400)
                                                                                         = 0x1fc3;
                                                                                    *(undefined8 *)
                                                                                     (lVar3 + 0x3f8)
                                                                                         = 
                                                  0x1fcc1fcc;
                                                  if (uVar1 != 0x53) {
                                                    *(undefined4 *)(lVar3 + 0x40c) = 0xfffffff8;
                                                    *(undefined8 *)(lVar3 + 0x404) = 0x11fd91fd8;
                                                    if (0x54 < uVar1) {
                                                      *(undefined4 *)(lVar3 + 0x418) = 0xffffff9c;
                                                      *(undefined8 *)(lVar3 + 0x410) = 0x11fdb1fda;
                                                      if (uVar1 != 0x55) {
                                                        *(undefined4 *)(lVar3 + 0x424) = 0xfffffff8;
                                                        *(undefined8 *)(lVar3 + 0x41c) = 0x11fe91fe8
                                                        ;
                                                        if (0x56 < uVar1) {
                                                          *(undefined4 *)(lVar3 + 0x430) =
                                                               0xffffff90;
                                                          *(undefined8 *)(lVar3 + 0x428) =
                                                               0x11feb1fea;
                                                          if (uVar1 != 0x57) {
                                                            *(undefined4 *)(lVar3 + 0x43c) = 0x1fe5;
                                                            *(undefined8 *)(lVar3 + 0x434) =
                                                                 0x1fec1fec;
                                                            if (0x58 < uVar1) {
                                                              *(undefined4 *)(lVar3 + 0x448) =
                                                                   0xffffff80;
                                                              *(undefined8 *)(lVar3 + 0x440) =
                                                                   0x11ff91ff8;
                                                              if (uVar1 != 0x59) {
                                                                *(undefined4 *)(lVar3 + 0x454) =
                                                                     0xffffff82;
                                                                *(undefined8 *)(lVar3 + 0x44c) =
                                                                     0x11ffb1ffa;
                                                                if (0x5a < uVar1) {
                                                                  *(undefined8 *)(lVar3 + 0x458) =
                                                                       0x1ffc1ffc;
                                                                  *(undefined4 *)(lVar3 + 0x460) =
                                                                       0x1ff3;
                                                                  if (uVar1 != 0x5b) {
                                                                    *(undefined4 *)(lVar3 + 0x46c) =
                                                                         0x10;
                                                                    *(undefined8 *)(lVar3 + 0x464) =
                                                                         0x1216f2160;
                                                                    if (0x5c < uVar1) {
                                                                      *(undefined4 *)(lVar3 + 0x478)
                                                                           = 0x1a;
                                                                      *(undefined8 *)(lVar3 + 0x470)
                                                                           = 0x124d024b6;
                                                                      if (uVar1 != 0x5d) {
                                                                        *(undefined4 *)
                                                                         (lVar3 + 0x484) = 0x20;
                                                                        *(undefined8 *)
                                                                         (lVar3 + 0x47c) =
                                                                             0x1ff3aff21;
                                                                        *(long *)(*(long *)(*
                                                  unaff_x25 + 0xb8) + 0x68) = lVar3;
                                                  thunk_FUN_02dc1ef0();
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
                    /* WARNING: Subroutine does not return */
    FUN_02d4def0();
  }
LAB_05790b0c:
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


