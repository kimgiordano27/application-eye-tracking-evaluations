/*
FUNCTION_NAME: Unity.Mathematics.Geometry.MinMaxAABB$$Contains
ENTRY_POINT: 06d069bc
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;ray_or_cast_sink_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_7;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Mathematics_Geometry_MinMaxAABB__Contains(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  ulong uVar7;
  long *plVar8;
  
  FUN_03642964(*(undefined8 *)(param_1 + 0x3a8));
  FUN_03642964(PTR_DAT_07a2b350);
  FUN_03642964(UnityEngine_PostProcessing_ColorGradingModel_TypeInfo);
  FUN_03642964(UnityEngine_Rendering_ColorParameter_TypeInfo);
  FUN_03642964(Unity_AppUI_UI_ColorPicker_TypeInfo);
  FUN_03642964(PTR_DAT_07a0ac20);
  FUN_03642964(DG_Tweening_Plugins_ColorPlugin_TypeInfo);
  FUN_03642964(PTR_DAT_07a17990);
  FUN_03642964(Unity_Properties_Internal_ColorPropertyBag_TypeInfo);
  FUN_03642964(Unity_AppUI_UI_ColorSlider_TypeInfo);
  FUN_03642964(UnityEngine_Rendering_ColorSpaceUtils_TypeInfo);
  FUN_03642964(PTR_DAT_07a119a8);
  FUN_03642964(PTR_DAT_07a0ac28);
  FUN_03642964(Unity_AppUI_UI_ColorSwatch_TypeInfo);
  FUN_03642964(System_Drawing_ColorTable_TypeInfo);
  FUN_03642964(Unity_AppUI_UI_ColorToolbar_TypeInfo);
  FUN_03642964(UnityEngine_Rendering_ColorUtils_TypeInfo);
  *(undefined1 *)(unaff_x20 + 0x77f) = 1;
  lVar2 = FUN_03642a4c(*unaff_x21,0x7b);
  if (lVar2 == 0) {
LAB_06d07e20:
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  if (*(int *)(lVar2 + 0x18) != 0) {
    *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)PTR_DAT_07a2b350;
    thunk_FUN_036b7ad0((undefined8 *)(lVar2 + 0x20));
    if ((*(uint *)(lVar2 + 0x18) & 0xfffffffe) != 0) {
      *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)SpiderSenseSerializer_ClipStream_TypeInfo;
      thunk_FUN_036b7ad0((undefined8 *)(lVar2 + 0x28));
      if (2 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)TagLib_Gif_Codec_TypeInfo;
        thunk_FUN_036b7ad0((undefined8 *)(lVar2 + 0x30));
        if ((*(uint *)(lVar2 + 0x18) & 0xfffffffc) != 0) {
          *(undefined8 *)(lVar2 + 0x38) =
               *(undefined8 *)UnityEngine_Rendering_Universal_Internal_ColorGradingLutPass_TypeInfo;
          thunk_FUN_036b7ad0((undefined8 *)(lVar2 + 0x38));
          if (4 < *(uint *)(lVar2 + 0x18)) {
            *(undefined8 *)(lVar2 + 0x40) = *(undefined8 *)Unity_AppUI_UI_CheckboxState_TypeInfo;
            thunk_FUN_036b7ad0((undefined8 *)(lVar2 + 0x40));
            if (5 < *(uint *)(lVar2 + 0x18)) {
              *(undefined8 *)(lVar2 + 0x48) = *(undefined8 *)UnityEngine_Color32_TypeInfo;
              thunk_FUN_036b7ad0((undefined8 *)(lVar2 + 0x48));
              if (6 < *(uint *)(lVar2 + 0x18)) {
                *(undefined8 *)(lVar2 + 0x50) =
                     *(undefined8 *)System_Runtime_Remoting_ClientActivatedIdentity_TypeInfo;
                thunk_FUN_036b7ad0((undefined8 *)(lVar2 + 0x50));
                if ((*(uint *)(lVar2 + 0x18) & 0xfffffff8) != 0) {
                  *(undefined8 *)(lVar2 + 0x58) = *(undefined8 *)PTR_DAT_07a17990;
                  thunk_FUN_036b7ad0((undefined8 *)(lVar2 + 0x58));
                  if (8 < *(uint *)(lVar2 + 0x18)) {
                    *(undefined8 *)(lVar2 + 0x60) =
                         *(undefined8 *)NAudio_Utils_CircularBuffer_TypeInfo;
                    thunk_FUN_036b7ad0((undefined8 *)(lVar2 + 0x60));
                    if (9 < *(uint *)(lVar2 + 0x18)) {
                      *(undefined8 *)(lVar2 + 0x68) = *(undefined8 *)UnityEngine_Collision_TypeInfo;
                      thunk_FUN_036b7ad0((undefined8 *)(lVar2 + 0x68));
                      if (10 < *(uint *)(lVar2 + 0x18)) {
                        *(undefined8 *)(lVar2 + 0x70) =
                             *(undefined8 *)Mono_Globalization_Unicode_CodePointIndexer_TypeInfo;
                        thunk_FUN_036b7ad0((undefined8 *)(lVar2 + 0x70));
                        if (0xb < *(uint *)(lVar2 + 0x18)) {
                          *(undefined8 *)(lVar2 + 0x78) =
                               *(undefined8 *)
                                System_Runtime_Serialization_CodeTypeReference_TypeInfo;
                          thunk_FUN_036b7ad0((undefined8 *)(lVar2 + 0x78));
                          if (0xc < *(uint *)(lVar2 + 0x18)) {
                            *(undefined8 *)(lVar2 + 0x80) = *(undefined8 *)PTR_DAT_07a54720;
                            thunk_FUN_036b7ad0((undefined8 *)(lVar2 + 0x80));
                            if (0xd < *(uint *)(lVar2 + 0x18)) {
                              *(undefined8 *)(lVar2 + 0x88) =
                                   *(undefined8 *)UnityEngine_Collider2D_TypeInfo;
                              thunk_FUN_036b7ad0((undefined8 *)(lVar2 + 0x88));
                              if (0xe < *(uint *)(lVar2 + 0x18)) {
                                *(undefined8 *)(lVar2 + 0x90) = *(undefined8 *)PTR_DAT_07a0f448;
                                thunk_FUN_036b7ad0((undefined8 *)(lVar2 + 0x90));
                                if ((*(uint *)(lVar2 + 0x18) & 0xfffffff0) != 0) {
                                  *(undefined8 *)(lVar2 + 0x98) = *(undefined8 *)PTR_DAT_07a14f98;
                                  thunk_FUN_036b7ad0((undefined8 *)(lVar2 + 0x98));
                                  if (0x10 < *(uint *)(lVar2 + 0x18)) {
                                    *(undefined8 *)(lVar2 + 0xa0) = *(undefined8 *)PTR_DAT_079fb728;
                                    thunk_FUN_036b7ad0((undefined8 *)(lVar2 + 0xa0));
                                    if (0x11 < *(uint *)(lVar2 + 0x18)) {
                                      *(undefined8 *)(lVar2 + 0xa8) =
                                           *(undefined8 *)PTR_DAT_079fe5c8;
                                      thunk_FUN_036b7ad0((undefined8 *)(lVar2 + 0xa8));
                                      if (0x12 < *(uint *)(lVar2 + 0x18)) {
                                        *(undefined8 *)(lVar2 + 0xb0) =
                                             *(undefined8 *)PTR_DAT_079ff438;
                                        thunk_FUN_036b7ad0((undefined8 *)(lVar2 + 0xb0));
                                        if (0x13 < *(uint *)(lVar2 + 0x18)) {
                                          *(undefined8 *)(lVar2 + 0xb8) =
                                               *(undefined8 *)PTR_DAT_07a32810;
                                          thunk_FUN_036b7ad0((undefined8 *)(lVar2 + 0xb8));
                                          if (0x14 < *(uint *)(lVar2 + 0x18)) {
                                            *(undefined8 *)(lVar2 + 0xc0) =
                                                 *(undefined8 *)PTR_DAT_07a110f0;
                                            thunk_FUN_036b7ad0((undefined8 *)(lVar2 + 0xc0));
                                            if (0x15 < *(uint *)(lVar2 + 0x18)) {
                                              *(undefined8 *)(lVar2 + 200) =
                                                   *(undefined8 *)PTR_DAT_07a3c6b0;
                                              thunk_FUN_036b7ad0((undefined8 *)(lVar2 + 200));
                                              if (0x16 < *(uint *)(lVar2 + 0x18)) {
                                                *(undefined8 *)(lVar2 + 0xd0) =
                                                     *(undefined8 *)PTR_DAT_07a028c0;
                                                thunk_FUN_036b7ad0((undefined8 *)(lVar2 + 0xd0));
                                                if (0x17 < *(uint *)(lVar2 + 0x18)) {
                                                  *(undefined8 *)(lVar2 + 0xd8) =
                                                       *(undefined8 *)PTR_DAT_07a3c6d8;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar2 + 0xd8));
                                                  if (0x18 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0xe0) =
                                                         *(undefined8 *)PTR_DAT_07a3c6c0;
                                                    thunk_FUN_036b7ad0((undefined8 *)(lVar2 + 0xe0))
                                                    ;
                                                    if (0x19 < *(uint *)(lVar2 + 0x18)) {
                                                      *(undefined8 *)(lVar2 + 0xe8) =
                                                           *(undefined8 *)PTR_DAT_07a2ce18;
                                                      thunk_FUN_036b7ad0((undefined8 *)
                                                                         (lVar2 + 0xe8));
                                                      if (0x1a < *(uint *)(lVar2 + 0x18)) {
                                                        *(undefined8 *)(lVar2 + 0xf0) =
                                                             *(undefined8 *)PTR_DAT_07a20080;
                                                        thunk_FUN_036b7ad0((undefined8 *)
                                                                           (lVar2 + 0xf0));
                                                        if (0x1b < *(uint *)(lVar2 + 0x18)) {
                                                          *(undefined8 *)(lVar2 + 0xf8) =
                                                               *(undefined8 *)PTR_DAT_07a3c6d0;
                                                          thunk_FUN_036b7ad0((undefined8 *)
                                                                             (lVar2 + 0xf8));
                                                          if (0x1c < *(uint *)(lVar2 + 0x18)) {
                                                            *(undefined8 *)(lVar2 + 0x100) =
                                                                 *(undefined8 *)PTR_DAT_07a0edc8;
                                                            thunk_FUN_036b7ad0(lVar2 + 0x100);
                                                            if (0x1d < *(uint *)(lVar2 + 0x18)) {
                                                              *(undefined8 *)(lVar2 + 0x108) =
                                                                   *(undefined8 *)PTR_DAT_07a3c6b8;
                                                              thunk_FUN_036b7ad0(lVar2 + 0x108);
                                                              if (0x1e < *(uint *)(lVar2 + 0x18)) {
                                                                *(undefined8 *)(lVar2 + 0x110) =
                                                                     *(undefined8 *)PTR_DAT_07a3c6c8
                                                                ;
                                                                thunk_FUN_036b7ad0(lVar2 + 0x110);
                                                                if ((*(uint *)(lVar2 + 0x18) &
                                                                    0xffffffe0) != 0) {
                                                                  *(undefined8 *)(lVar2 + 0x118) =
                                                                       *(undefined8 *)
                                                                        PTR_DAT_07a1f060;
                                                                  thunk_FUN_036b7ad0(lVar2 + 0x118);
                                                                  if (0x20 < *(uint *)(lVar2 + 0x18)
                                                                     ) {
                                                                    *(undefined8 *)(lVar2 + 0x120) =
                                                                         *(undefined8 *)
                                                                          PTR_DAT_07a0b960;
                                                                    thunk_FUN_036b7ad0(lVar2 + 0x120
                                                                                      );
                                                                    if (0x21 < *(uint *)(lVar2 + 
                                                  0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x128) =
                                                         *(undefined8 *)PTR_DAT_07a0eee0;
                                                    thunk_FUN_036b7ad0(lVar2 + 0x128);
                                                    if (0x22 < *(uint *)(lVar2 + 0x18)) {
                                                      *(undefined8 *)(lVar2 + 0x130) =
                                                           *(undefined8 *)PTR_DAT_07a20088;
                                                      thunk_FUN_036b7ad0(lVar2 + 0x130);
                                                      if (0x23 < *(uint *)(lVar2 + 0x18)) {
                                                        *(undefined8 *)(lVar2 + 0x138) =
                                                             *(undefined8 *)PTR_DAT_07a3c6e0;
                                                        thunk_FUN_036b7ad0(lVar2 + 0x138);
                                                        if (0x24 < *(uint *)(lVar2 + 0x18)) {
                                                          *(undefined8 *)(lVar2 + 0x140) =
                                                               *(undefined8 *)PTR_DAT_07a2e080;
                                                          thunk_FUN_036b7ad0(lVar2 + 0x140);
                                                          if (0x25 < *(uint *)(lVar2 + 0x18)) {
                                                            *(undefined8 *)(lVar2 + 0x148) =
                                                                 *(undefined8 *)PTR_DAT_07a0d7c0;
                                                            thunk_FUN_036b7ad0(lVar2 + 0x148);
                                                            if (0x26 < *(uint *)(lVar2 + 0x18)) {
                                                              *(undefined8 *)(lVar2 + 0x150) =
                                                                   *(undefined8 *)PTR_DAT_07a2e078;
                                                              thunk_FUN_036b7ad0(lVar2 + 0x150);
                                                              if (0x27 < *(uint *)(lVar2 + 0x18)) {
                                                                *(undefined8 *)(lVar2 + 0x158) =
                                                                     *(undefined8 *)PTR_DAT_07a028d0
                                                                ;
                                                                thunk_FUN_036b7ad0(lVar2 + 0x158);
                                                                if (0x28 < *(uint *)(lVar2 + 0x18))
                                                                {
                                                                  *(undefined8 *)(lVar2 + 0x160) =
                                                                       *(undefined8 *)
                                                                        PTR_DAT_07a0ac20;
                                                                  thunk_FUN_036b7ad0(lVar2 + 0x160);
                                                                  if (0x29 < *(uint *)(lVar2 + 0x18)
                                                                     ) {
                                                                    *(undefined8 *)(lVar2 + 0x168) =
                                                                         *(undefined8 *)
                                                                          PTR_DAT_07a11958;
                                                                    thunk_FUN_036b7ad0(lVar2 + 0x168
                                                                                      );
                                                                    if (0x2a < *(uint *)(lVar2 + 
                                                  0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x170) =
                                                         *(undefined8 *)PTR_DAT_07a11950;
                                                    thunk_FUN_036b7ad0(lVar2 + 0x170);
                                                    if (0x2b < *(uint *)(lVar2 + 0x18)) {
                                                      *(undefined8 *)(lVar2 + 0x178) =
                                                           *(undefined8 *)PTR_DAT_07a11990;
                                                      thunk_FUN_036b7ad0(lVar2 + 0x178);
                                                      if (0x2c < *(uint *)(lVar2 + 0x18)) {
                                                        *(undefined8 *)(lVar2 + 0x180) =
                                                             *(undefined8 *)PTR_DAT_07a119a8;
                                                        thunk_FUN_036b7ad0(lVar2 + 0x180);
                                                        if (0x2d < *(uint *)(lVar2 + 0x18)) {
                                                          *(undefined8 *)(lVar2 + 0x188) =
                                                               *(undefined8 *)PTR_DAT_07a11968;
                                                          thunk_FUN_036b7ad0(lVar2 + 0x188);
                                                          if (0x2e < *(uint *)(lVar2 + 0x18)) {
                                                            *(undefined8 *)(lVar2 + 400) =
                                                                 *(undefined8 *)PTR_DAT_07a11988;
                                                            thunk_FUN_036b7ad0(lVar2 + 400);
                                                            if (0x2f < *(uint *)(lVar2 + 0x18)) {
                                                              *(undefined8 *)(lVar2 + 0x198) =
                                                                   *(undefined8 *)PTR_DAT_07a119a0;
                                                              thunk_FUN_036b7ad0(lVar2 + 0x198);
                                                              if (0x30 < *(uint *)(lVar2 + 0x18)) {
                                                                *(undefined8 *)(lVar2 + 0x1a0) =
                                                                     *(undefined8 *)PTR_DAT_07a11960
                                                                ;
                                                                thunk_FUN_036b7ad0(lVar2 + 0x1a0);
                                                                if (0x31 < *(uint *)(lVar2 + 0x18))
                                                                {
                                                                  *(undefined8 *)(lVar2 + 0x1a8) =
                                                                       *(undefined8 *)
                                                                        PTR_DAT_07a0ac28;
                                                                  thunk_FUN_036b7ad0(lVar2 + 0x1a8);
                                                                  if (0x32 < *(uint *)(lVar2 + 0x18)
                                                                     ) {
                                                                    *(undefined8 *)(lVar2 + 0x1b0) =
                                                                         *(undefined8 *)
                                                                                                                                                    
                                                  UnityEngine_Rendering_ClampedIntParameter_TypeInfo
                                                  ;
                                                  thunk_FUN_036b7ad0(lVar2 + 0x1b0);
                                                  if (0x33 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x1b8) =
                                                         *(undefined8 *)
                                                          Unity_AppUI_UI_ColorSwatch_TypeInfo;
                                                    thunk_FUN_036b7ad0(lVar2 + 0x1b8);
                                                    if (0x34 < *(uint *)(lVar2 + 0x18)) {
                                                      *(undefined8 *)(lVar2 + 0x1c0) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  System_Xml_Serialization_CodeIdentifier_TypeInfo;
                                                  thunk_FUN_036b7ad0(lVar2 + 0x1c0);
                                                  if (0x35 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x1c8) =
                                                         *(undefined8 *)
                                                          UnityEngine_ColorGamut_TypeInfo;
                                                    thunk_FUN_036b7ad0(lVar2 + 0x1c8);
                                                    if (0x36 < *(uint *)(lVar2 + 0x18)) {
                                                      *(undefined8 *)(lVar2 + 0x1d0) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  UnityEngine_UIElements_ClickDetector_TypeInfo;
                                                  thunk_FUN_036b7ad0(lVar2 + 0x1d0);
                                                  if (0x37 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x1d8) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Linq_Expressions_Interpreter_CoalescingBranchInstruction_TypeInfo
                                                  ;
                                                  thunk_FUN_036b7ad0(lVar2 + 0x1d8);
                                                  if (0x38 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x1e0) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_Rendering_ColorSpaceUtils_TypeInfo;
                                                  thunk_FUN_036b7ad0(lVar2 + 0x1e0);
                                                  if (0x39 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x1e8) =
                                                         *(undefined8 *)TagLib_Jpeg_Codec_TypeInfo;
                                                    thunk_FUN_036b7ad0(lVar2 + 0x1e8);
                                                    if (0x3a < *(uint *)(lVar2 + 0x18)) {
                                                      *(undefined8 *)(lVar2 + 0x1f0) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  System_Runtime_Serialization_ClassDataNode_TypeInfo
                                                  ;
                                                  thunk_FUN_036b7ad0(lVar2 + 0x1f0);
                                                  if (0x3b < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x1f8) =
                                                         *(undefined8 *)
                                                          Sirenix_Utilities_ColorExtensions_TypeInfo
                                                    ;
                                                    thunk_FUN_036b7ad0(lVar2 + 0x1f8);
                                                    if (0x3c < *(uint *)(lVar2 + 0x18)) {
                                                      *(undefined8 *)(lVar2 + 0x200) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  UnityEngine_Rendering_ClampedFloatParameter_TypeInfo
                                                  ;
                                                  thunk_FUN_036b7ad0(lVar2 + 0x200);
                                                  if (0x3d < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x208) =
                                                         *(undefined8 *)
                                                          System_Security_Claims_Claim_TypeInfo;
                                                    thunk_FUN_036b7ad0(lVar2 + 0x208);
                                                    if (0x3e < *(uint *)(lVar2 + 0x18)) {
                                                      *(undefined8 *)(lVar2 + 0x210) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  UnityEngine_UIElements_CollectionVirtualizationMethod_TypeInfo
                                                  ;
                                                  thunk_FUN_036b7ad0(lVar2 + 0x210);
                                                  if ((*(uint *)(lVar2 + 0x18) & 0xffffffc0) != 0) {
                                                    *(undefined8 *)(lVar2 + 0x218) =
                                                         *(undefined8 *)
                                                          Firebase_Database_ChildChangeType_TypeInfo
                                                    ;
                                                    thunk_FUN_036b7ad0(lVar2 + 0x218);
                                                    if (0x40 < *(uint *)(lVar2 + 0x18)) {
                                                      *(undefined8 *)(lVar2 + 0x220) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  System_Linq_Expressions_CoalesceConversionBinaryExpression_TypeInfo
                                                  ;
                                                  thunk_FUN_036b7ad0(lVar2 + 0x220);
                                                  if (0x41 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x228) =
                                                         *(undefined8 *)
                                                          UnityEngine_UIElements_Clickable_TypeInfo;
                                                    thunk_FUN_036b7ad0(lVar2 + 0x228);
                                                    if (0x42 < *(uint *)(lVar2 + 0x18)) {
                                                      *(undefined8 *)(lVar2 + 0x230) =
                                                           *(undefined8 *)
                                                            SpiderSenseSerializer_ClipData_TypeInfo;
                                                      thunk_FUN_036b7ad0(lVar2 + 0x230);
                                                      if (0x43 < *(uint *)(lVar2 + 0x18)) {
                                                        *(undefined8 *)(lVar2 + 0x238) =
                                                             *(undefined8 *)
                                                              UnityEngine_GUIStyle___TypeInfo;
                                                        thunk_FUN_036b7ad0(lVar2 + 0x238);
                                                        if (0x44 < *(uint *)(lVar2 + 0x18)) {
                                                          *(undefined8 *)(lVar2 + 0x240) =
                                                               *(undefined8 *)
                                                                                                                                
                                                  System_Runtime_Serialization_CollectionDataNode_TypeInfo
                                                  ;
                                                  thunk_FUN_036b7ad0(lVar2 + 0x240);
                                                  if (0x45 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x248) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Runtime_Serialization_CollectionDataContract_TypeInfo
                                                  ;
                                                  thunk_FUN_036b7ad0(lVar2 + 0x248);
                                                  if (0x46 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x250) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Firebase_Database_ChildChangedEventArgs_TypeInfo;
                                                  thunk_FUN_036b7ad0(lVar2 + 0x250);
                                                  if (0x47 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 600) =
                                                         *(undefined8 *)
                                                          Unity_AppUI_UI_CircularProgress_TypeInfo;
                                                    thunk_FUN_036b7ad0(lVar2 + 600);
                                                    if (0x48 < *(uint *)(lVar2 + 0x18)) {
                                                      *(undefined8 *)(lVar2 + 0x260) =
                                                           *(undefined8 *)
                                                            System_Xml_Schema_ChoiceNode_TypeInfo;
                                                      thunk_FUN_036b7ad0(lVar2 + 0x260);
                                                      if (0x49 < *(uint *)(lVar2 + 0x18)) {
                                                        *(undefined8 *)(lVar2 + 0x268) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  DG_Tweening_Plugins_Color2Plugin_TypeInfo;
                                                  thunk_FUN_036b7ad0(lVar2 + 0x268);
                                                  if (0x4a < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x270) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Runtime_Remoting_Messaging_ClientContextReplySink_TypeInfo
                                                  ;
                                                  thunk_FUN_036b7ad0(lVar2 + 0x270);
                                                  if (0x4b < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x278) =
                                                         *(undefined8 *)
                                                          Unity_InferenceEngine_Layers_Clip_TypeInfo
                                                    ;
                                                    thunk_FUN_036b7ad0(lVar2 + 0x278);
                                                    if (0x4c < *(uint *)(lVar2 + 0x18)) {
                                                      *(undefined8 *)(lVar2 + 0x280) =
                                                           *(undefined8 *)
                                                            System_Net_CloseExState_TypeInfo;
                                                      thunk_FUN_036b7ad0(lVar2 + 0x280);
                                                      if (0x4d < *(uint *)(lVar2 + 0x18)) {
                                                        *(undefined8 *)(lVar2 + 0x288) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  System_Security_Claims_ClaimsIdentity_TypeInfo;
                                                  thunk_FUN_036b7ad0(lVar2 + 0x288);
                                                  if (0x4e < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x290) =
                                                         *(undefined8 *)TagLib_Tiff_Codec_TypeInfo;
                                                    thunk_FUN_036b7ad0(lVar2 + 0x290);
                                                    if (0x4f < *(uint *)(lVar2 + 0x18)) {
                                                      *(undefined8 *)(lVar2 + 0x298) =
                                                           *(undefined8 *)
                                                            UnityEngine_Collider_TypeInfo;
                                                      thunk_FUN_036b7ad0(lVar2 + 0x298);
                                                      if (0x50 < *(uint *)(lVar2 + 0x18)) {
                                                        *(undefined8 *)(lVar2 + 0x2a0) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_PostProcessing_ColorGradingCurve_TypeInfo
                                                  ;
                                                  thunk_FUN_036b7ad0(lVar2 + 0x2a0);
                                                  if (0x51 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x2a8) =
                                                         *(undefined8 *)
                                                          System_Xml_Serialization_ClassMap_TypeInfo
                                                    ;
                                                    thunk_FUN_036b7ad0(lVar2 + 0x2a8);
                                                    if (0x52 < *(uint *)(lVar2 + 0x18)) {
                                                      *(undefined8 *)(lVar2 + 0x2b0) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  Mono_Security_Interface_CipherSuiteCode_TypeInfo;
                                                  thunk_FUN_036b7ad0(lVar2 + 0x2b0);
                                                  if (0x53 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x2b8) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Meta_XR_MultiplayerBlocks_Shared_ColocationConstants_TypeInfo
                                                  ;
                                                  thunk_FUN_036b7ad0(lVar2 + 0x2b8);
                                                  if (0x54 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x2c0) =
                                                         *(undefined8 *)TagLib_Ogg_Codec_TypeInfo;
                                                    thunk_FUN_036b7ad0(lVar2 + 0x2c0);
                                                    if (0x55 < *(uint *)(lVar2 + 0x18)) {
                                                      *(undefined8 *)(lVar2 + 0x2c8) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  Oculus_Interaction_Surfaces_ClippedPlaneSurface_TypeInfo
                                                  ;
                                                  thunk_FUN_036b7ad0(lVar2 + 0x2c8);
                                                  if (0x56 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x2d0) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Meta_XR_MultiplayerBlocks_Colocation_ColocationFailedReason_TypeInfo
                                                  ;
                                                  thunk_FUN_036b7ad0(lVar2 + 0x2d0);
                                                  if (0x57 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x2d8) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Unity_Properties_Internal_ColorPropertyBag_TypeInfo
                                                  ;
                                                  thunk_FUN_036b7ad0(lVar2 + 0x2d8);
                                                  if (0x58 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x2e0) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Data_ChildForeignKeyConstraintEnumerator_TypeInfo
                                                  ;
                                                  thunk_FUN_036b7ad0(lVar2 + 0x2e0);
                                                  if (0x59 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x2e8) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Sirenix_Serialization_ColorFormatter_TypeInfo;
                                                  thunk_FUN_036b7ad0(lVar2 + 0x2e8);
                                                  if (0x5a < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x2f0) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_Rendering_Universal_ClearTargetsPass_TypeInfo
                                                  ;
                                                  thunk_FUN_036b7ad0(lVar2 + 0x2f0);
                                                  if (0x5b < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x2f8) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Runtime_Remoting_ClientIdentity_TypeInfo;
                                                  thunk_FUN_036b7ad0(lVar2 + 0x2f8);
                                                  if (0x5c < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x300) =
                                                         *(undefined8 *)
                                                          UnityEngine_Rendering_ColorUtils_TypeInfo;
                                                    thunk_FUN_036b7ad0(lVar2 + 0x300);
                                                    if (0x5d < *(uint *)(lVar2 + 0x18)) {
                                                      *(undefined8 *)(lVar2 + 0x308) =
                                                           *(undefined8 *)
                                                            UniRx_ReactiveProperty<string>_TypeInfo;
                                                      thunk_FUN_036b7ad0(lVar2 + 0x308);
                                                      if (0x5e < *(uint *)(lVar2 + 0x18)) {
                                                        *(undefined8 *)(lVar2 + 0x310) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  System_Collections_Generic_Queue<EventBase>_TypeInfo
                                                  ;
                                                  thunk_FUN_036b7ad0(lVar2 + 0x310);
                                                  if (0x5f < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x318) =
                                                         *(undefined8 *)
                                                          Unity_AppUI_UI_ColorField_TypeInfo;
                                                    thunk_FUN_036b7ad0(lVar2 + 0x318);
                                                    if (0x60 < *(uint *)(lVar2 + 0x18)) {
                                                      *(undefined8 *)(lVar2 + 800) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  UnityEngine_Rendering_ColorParameter_TypeInfo;
                                                  thunk_FUN_036b7ad0(lVar2 + 800);
                                                  if (0x61 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x328) =
                                                         *(undefined8 *)DG_Tweening_Color2_TypeInfo;
                                                    thunk_FUN_036b7ad0(lVar2 + 0x328);
                                                    if (0x62 < *(uint *)(lVar2 + 0x18)) {
                                                      *(undefined8 *)(lVar2 + 0x330) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  UnityEngine_UIElements_ClickEvent_TypeInfo;
                                                  thunk_FUN_036b7ad0(lVar2 + 0x330);
                                                  if (99 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x338) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Runtime_Serialization_CollectionDataContractAttribute_TypeInfo
                                                  ;
                                                  thunk_FUN_036b7ad0(lVar2 + 0x338);
                                                  if (100 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x340) =
                                                         *(undefined8 *)
                                                          DG_Tweening_Plugins_ColorPlugin_TypeInfo;
                                                    thunk_FUN_036b7ad0(lVar2 + 0x340);
                                                    if (0x65 < *(uint *)(lVar2 + 0x18)) {
                                                      *(undefined8 *)(lVar2 + 0x348) =
                                                           *(undefined8 *)
                                                            Unity_AppUI_UI_ColorPicker_TypeInfo;
                                                      thunk_FUN_036b7ad0(lVar2 + 0x348);
                                                      if (0x66 < *(uint *)(lVar2 + 0x18)) {
                                                        *(undefined8 *)(lVar2 + 0x350) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  System_ComponentModel_CollectionChangeEventArgs_TypeInfo
                                                  ;
                                                  thunk_FUN_036b7ad0(lVar2 + 0x350);
                                                  if (0x67 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x358) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_ComponentModel_Design_CheckoutException_TypeInfo
                                                  ;
                                                  thunk_FUN_036b7ad0(lVar2 + 0x358);
                                                  if (0x68 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x360) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Security_Cryptography_CipherMode_TypeInfo;
                                                  thunk_FUN_036b7ad0(lVar2 + 0x360);
                                                  if (0x69 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x368) =
                                                         *(undefined8 *)
                                                          UnityEngine_UI_ColorBlock_TypeInfo;
                                                    thunk_FUN_036b7ad0(lVar2 + 0x368);
                                                    if (0x6a < *(uint *)(lVar2 + 0x18)) {
                                                      *(undefined8 *)(lVar2 + 0x370) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  UnityEngine_PostProcessing_ChromaticAberrationModel_TypeInfo
                                                  ;
                                                  thunk_FUN_036b7ad0(lVar2 + 0x370);
                                                  if (0x6b < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x378) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Security_CodeAccessPermission_TypeInfo;
                                                  thunk_FUN_036b7ad0(lVar2 + 0x378);
                                                  if (0x6c < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x380) =
                                                         *(undefined8 *)TagLib_Png_Codec_TypeInfo;
                                                    thunk_FUN_036b7ad0(lVar2 + 0x380);
                                                    if (0x6d < *(uint *)(lVar2 + 0x18)) {
                                                      *(undefined8 *)(lVar2 + 0x388) =
                                                           *(undefined8 *)
                                                            Unity_AppUI_UI_ColorToolbar_TypeInfo;
                                                      thunk_FUN_036b7ad0(lVar2 + 0x388);
                                                      if (0x6f < *(uint *)(lVar2 + 0x18)) {
                                                        *(undefined8 *)(lVar2 + 0x398) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  UnityEditor_Analytics_CollabOperationAnalytic_TypeInfo
                                                  ;
                                                  thunk_FUN_036b7ad0(lVar2 + 0x398);
                                                  if (0x70 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x3a0) =
                                                         *(undefined8 *)
                                                          System_Drawing_ColorTable_TypeInfo;
                                                    thunk_FUN_036b7ad0(lVar2 + 0x3a0);
                                                    if (0x71 < *(uint *)(lVar2 + 0x18)) {
                                                      *(undefined8 *)(lVar2 + 0x3a8) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  System_Runtime_Serialization_ClassDataContract_TypeInfo
                                                  ;
                                                  thunk_FUN_036b7ad0(lVar2 + 0x3a8);
                                                  if (0x72 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x3b0) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_PostProcessing_ChromaticAberrationComponent_TypeInfo
                                                  ;
                                                  thunk_FUN_036b7ad0(lVar2 + 0x3b0);
                                                  if (0x73 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x3b8) =
                                                         *(undefined8 *)
                                                          Oculus_Interaction_ColliderGroup_TypeInfo;
                                                    thunk_FUN_036b7ad0(lVar2 + 0x3b8);
                                                    if (0x74 < *(uint *)(lVar2 + 0x18)) {
                                                      *(undefined8 *)(lVar2 + 0x3c0) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  System_Runtime_Remoting_Messaging_ClientContextTerminatorSink_TypeInfo
                                                  ;
                                                  thunk_FUN_036b7ad0(lVar2 + 0x3c0);
                                                  if (0x75 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x3c8) =
                                                         *(undefined8 *)
                                                          UnityEngine_UI_ClipperRegistry_TypeInfo;
                                                    thunk_FUN_036b7ad0(lVar2 + 0x3c8);
                                                    if (0x76 < *(uint *)(lVar2 + 0x18)) {
                                                      *(undefined8 *)(lVar2 + 0x3d0) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  System_ComponentModel_CollectionChangeEventHandler_TypeInfo
                                                  ;
                                                  thunk_FUN_036b7ad0(lVar2 + 0x3d0);
                                                  if (0x77 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x3d8) =
                                                         *(undefined8 *)UnityEngine_Color_TypeInfo;
                                                    thunk_FUN_036b7ad0(lVar2 + 0x3d8);
                                                    if (0x78 < *(uint *)(lVar2 + 0x18)) {
                                                      *(undefined8 *)(lVar2 + 0x3e0) =
                                                           *(undefined8 *)
                                                            Unity_AppUI_UI_Chip_TypeInfo;
                                                      thunk_FUN_036b7ad0(lVar2 + 0x3e0);
                                                      if (0x79 < *(uint *)(lVar2 + 0x18)) {
                                                        *(undefined8 *)(lVar2 + 1000) =
                                                             *(undefined8 *)
                                                              Unity_AppUI_UI_ColorSlider_TypeInfo;
                                                        thunk_FUN_036b7ad0(lVar2 + 1000);
                                                        puVar1 = Unity_AppUI_UI_Checkbox_TypeInfo;
                                                        if (0x7a < *(uint *)(lVar2 + 0x18)) {
                                                          *(undefined8 *)(lVar2 + 0x3f0) =
                                                               *(undefined8 *)
                                                                                                                                
                                                  Sirenix_Serialization_Color32Formatter_TypeInfo;
                                                  thunk_FUN_036b7ad0(lVar2 + 0x3f0);
                                                  uVar3 = FUN_03642a4c(*(undefined8 *)puVar1,
                                                                       *(undefined4 *)(lVar2 + 0x18)
                                                                      );
                                                  *(undefined8 *)(unaff_x19 + 0x1d0) = uVar3;
                                                  thunk_FUN_036b7ad0(unaff_x19 + 0x1d0,uVar3);
                                                  if (0 < (int)*(ulong *)(lVar2 + 0x18)) {
                                                    uVar7 = 0;
                                                    uVar6 = *(ulong *)(lVar2 + 0x18) & 0xffffffff;
                                                    do {
                                                      if (uVar6 <= uVar7) goto LAB_06d07e1c;
                                                      uVar6 = FUN_05c97640(*(undefined8 *)
                                                                            (lVar2 + uVar7 * 8 +
                                                                            0x20),0);
                                                      if ((uVar6 & 1) == 0) {
                                                        if (*(uint *)(lVar2 + 0x18) <= uVar7)
                                                        goto LAB_06d07e1c;
                                                        plVar8 = *(long **)(unaff_x19 + 0x1d0);
                                                        lVar4 = FUN_03d6c4a4();
                                                        if (plVar8 == (long *)0x0)
                                                        goto LAB_06d07e20;
                                                        if ((lVar4 != 0) &&
                                                           (lVar5 = thunk_FUN_0367fd24(lVar4,*(
                                                  undefined8 *)(*plVar8 + 0x40)), lVar5 == 0)) {
                                                    uVar3 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
                                                    FUN_03642acc(uVar3,0);
                                                  }
                                                  if (*(uint *)(plVar8 + 3) <= uVar7)
                                                  goto LAB_06d07e1c;
                                                  plVar8[uVar7 + 4] = lVar4;
                                                  thunk_FUN_036b7ad0(plVar8 + uVar7 + 4,lVar4);
                                                  lVar4 = *(long *)(unaff_x19 + 0x1d0);
                                                  if (lVar4 == 0) goto LAB_06d07e20;
                                                  if (*(uint *)(lVar4 + 0x18) <= uVar7)
                                                  goto LAB_06d07e1c;
                                                  lVar4 = *(long *)(lVar4 + uVar7 * 8 + 0x20);
                                                  if (lVar4 == 0) goto LAB_06d07e20;
                                                  *(int *)(lVar4 + 0x140) = (int)uVar7 + 1;
                                                  }
                                                  uVar7 = uVar7 + 1;
                                                  uVar6 = (ulong)*(uint *)(lVar2 + 0x18);
                                                  } while ((long)uVar7 <
                                                           (long)(int)*(uint *)(lVar2 + 0x18));
                                                  }
                                                  uVar3 = FUN_03d6c4a4();
                                                  *(undefined8 *)(unaff_x19 + 0x188) = uVar3;
                                                  thunk_FUN_036b7ad0(unaff_x19 + 0x188,uVar3);
                                                  uVar3 = FUN_03d6c4a4();
                                                  *(undefined8 *)(unaff_x19 + 400) = uVar3;
                                                  thunk_FUN_036b7ad0(unaff_x19 + 400,uVar3);
                                                  uVar3 = FUN_03d6c4a4();
                                                  *(undefined8 *)(unaff_x19 + 0x198) = uVar3;
                                                  thunk_FUN_036b7ad0(unaff_x19 + 0x198,uVar3);
                                                  uVar3 = FUN_03d6c4a4();
                                                  *(undefined8 *)(unaff_x19 + 0x1a0) = uVar3;
                                                  thunk_FUN_036b7ad0(unaff_x19 + 0x1a0,uVar3);
                                                  uVar3 = FUN_03d6c4a4();
                                                  *(undefined8 *)(unaff_x19 + 0x1a8) = uVar3;
                                                  thunk_FUN_036b7ad0(unaff_x19 + 0x1a8,uVar3);
                                                  FUN_06cfad7c();
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
LAB_06d07e1c:
                    /* WARNING: Subroutine does not return */
  FUN_03642c20();
}


