/*
FUNCTION_NAME: RootMotion.Dynamics.PuppetMaster$$OnLateUpdate
ENTRY_POINT: 05075510
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_1
*/


void RootMotion_Dynamics_PuppetMaster__OnLateUpdate(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long unaff_x19;
  undefined8 uVar7;
  long *unaff_x23;
  long *unaff_x24;
  undefined8 *unaff_x25;
  
                    /* try { // try from 0507551c to 0517551f has its CatchHandler @ 05075530 */
                    /* try { // try from 05075520 to 05175523 has its CatchHandler @ 0507552c */
  FUN_050850ac();
  puVar1 = UnityEngine_UIElements_UxmlEnumAttributeDescription<PickingMode>_TypeInfo;
                    /* try { // try from 05075524 to 0517555f has its CatchHandler @ 05075014 */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 050754bc with catch @ 05075528
                        */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 05075520 with catch @ 0507552c
                        */
  if (0x43 < *(uint *)(unaff_x19 + 0x18)) {
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 0507551c with catch @ 05075530
                        */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 050753cc with catch @ 05075534
                        */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 0507536c with catch @ 05075538
                        */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 05075304 with catch @ 0507553c
                        */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 0507525c with catch @ 05075540
                        */
    *(undefined8 *)(unaff_x19 + 0x238) = param_1;
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 0507529c with catch @ 05075544
                        */
    thunk_FUN_02bb0e9c(unaff_x19 + 0x238,param_1);
    uVar7 = **(undefined8 **)(*unaff_x24 + 0xb8);
    uVar4 = thunk_FUN_02b79644(*unaff_x25);
                    /* try { // try from 05075560 to 05175563 has its CatchHandler @ 0507557c */
                    /* try { // try from 05075564 to 0517557f has its CatchHandler @ 05075014 */
    FUN_050850ac(uVar4,uVar7,*(undefined8 *)puVar1,0);
    puVar1 = UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollViewMode>_TypeInfo;
    if (0x44 < *(uint *)(unaff_x19 + 0x18)) {
                    /* catch() { ... } // from try @ 05075560 with catch @ 0507557c */
                    /* try { // try from 05075580 to 05175587 has its CatchHandler @ 05075590 */
                    /* try { // try from 05075588 to 05175593 has its CatchHandler @ 05075014 */
      *(undefined8 *)(unaff_x19 + 0x240) = uVar4;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05075580 with catch @ 05075590
                        */
      thunk_FUN_02bb0e9c(unaff_x19 + 0x240,uVar4);
      uVar7 = **(undefined8 **)(*unaff_x24 + 0xb8);
      uVar4 = thunk_FUN_02b79644(*unaff_x25);
      FUN_050850ac(uVar4,uVar7,*(undefined8 *)puVar1,0);
      puVar3 = UnityEngine_UIElements_UxmlEnumAttributeDescription<SelectionType>_TypeInfo;
      puVar2 = Unity_Properties_TypeConverter<ushort,_int>_TypeInfo;
      puVar1 = Unity_Properties_TypeConverter<ushort,_short>_TypeInfo;
      if (0x45 < *(uint *)(unaff_x19 + 0x18)) {
        *(undefined8 *)(unaff_x19 + 0x248) = uVar4;
        thunk_FUN_02bb0e9c(unaff_x19 + 0x248,uVar4);
        lVar5 = *(long *)(*unaff_x23 + 0xb8);
        *(long *)(lVar5 + 0x1270) = unaff_x19;
        thunk_FUN_02bb0e9c(lVar5 + 0x1270);
        memset((void *)(*(long *)(*unaff_x23 + 0xb8) + 0x1278),0,0xe3c);
        lVar5 = FUN_02b3c908(*(undefined8 *)puVar1,0x54);
        uVar7 = **(undefined8 **)(*unaff_x24 + 0xb8);
        uVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
        FUN_050851b0(uVar4,uVar7,*(undefined8 *)puVar3,0);
        puVar1 = UnityEngine_UIElements_UxmlEnumAttributeDescription<SliderDirection>_TypeInfo;
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        if (*(int *)(lVar5 + 0x18) != 0) {
          *(undefined8 *)(lVar5 + 0x20) = uVar4;
          thunk_FUN_02bb0e9c((undefined8 *)(lVar5 + 0x20),uVar4);
          uVar7 = **(undefined8 **)(*unaff_x24 + 0xb8);
          uVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
          FUN_050851b0(uVar4,uVar7,*(undefined8 *)puVar1,0);
          puVar1 = UnityEngine_UIElements_UxmlEnumAttributeDescription<SortDirection>_TypeInfo;
          if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) != 0) {
            *(undefined8 *)(lVar5 + 0x28) = uVar4;
            thunk_FUN_02bb0e9c((undefined8 *)(lVar5 + 0x28),uVar4);
            uVar7 = **(undefined8 **)(*unaff_x24 + 0xb8);
            uVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
            FUN_050851b0(uVar4,uVar7,*(undefined8 *)puVar1,0);
            puVar1 = 
            UnityEngine_UIElements_UxmlEnumAttributeDescription<TouchScreenKeyboardType>_TypeInfo;
            if (2 < *(uint *)(lVar5 + 0x18)) {
              *(undefined8 *)(lVar5 + 0x30) = uVar4;
              thunk_FUN_02bb0e9c((undefined8 *)(lVar5 + 0x30),uVar4);
              uVar7 = **(undefined8 **)(*unaff_x24 + 0xb8);
              uVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
              FUN_050851b0(uVar4,uVar7,*(undefined8 *)puVar1,0);
              puVar1 = 
              UnityEngine_UIElements_UxmlEnumAttributeDescription<TwoPaneSplitViewOrientation>_TypeInfo
              ;
              if ((*(uint *)(lVar5 + 0x18) & 0xfffffffc) != 0) {
                *(undefined8 *)(lVar5 + 0x38) = uVar4;
                thunk_FUN_02bb0e9c((undefined8 *)(lVar5 + 0x38),uVar4);
                uVar7 = **(undefined8 **)(*unaff_x24 + 0xb8);
                uVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                FUN_050851b0(uVar4,uVar7,*(undefined8 *)puVar1,0);
                puVar1 = UnityEngine_UIElements_UxmlEnumAttributeDescription<UsageHints>_TypeInfo;
                if (4 < *(uint *)(lVar5 + 0x18)) {
                  *(undefined8 *)(lVar5 + 0x40) = uVar4;
                  thunk_FUN_02bb0e9c((undefined8 *)(lVar5 + 0x40),uVar4);
                  uVar7 = **(undefined8 **)(*unaff_x24 + 0xb8);
                  uVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                  FUN_050851b0(uVar4,uVar7,*(undefined8 *)puVar1,0);
                  puVar1 = 
                  UnityEngine_UIElements_UxmlEnumAttributeDescription<Columns_StretchMode>_TypeInfo;
                  if (5 < *(uint *)(lVar5 + 0x18)) {
                    *(undefined8 *)(lVar5 + 0x48) = uVar4;
                    thunk_FUN_02bb0e9c((undefined8 *)(lVar5 + 0x48),uVar4);
                    uVar7 = **(undefined8 **)(*unaff_x24 + 0xb8);
                    uVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                    FUN_050851b0(uVar4,uVar7,*(undefined8 *)puVar1,0);
                    puVar1 = 
                    UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollView_NestedInteractionKind>_TypeInfo
                    ;
                    if (6 < *(uint *)(lVar5 + 0x18)) {
                      *(undefined8 *)(lVar5 + 0x50) = uVar4;
                      thunk_FUN_02bb0e9c((undefined8 *)(lVar5 + 0x50),uVar4);
                      uVar7 = **(undefined8 **)(*unaff_x24 + 0xb8);
                      uVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                      FUN_050851b0(uVar4,uVar7,*(undefined8 *)puVar1,0);
                      puVar1 = 
                      UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollView_TouchScrollBehavior>_TypeInfo
                      ;
                      if ((*(uint *)(lVar5 + 0x18) & 0xfffffff8) != 0) {
                        *(undefined8 *)(lVar5 + 0x58) = uVar4;
                        thunk_FUN_02bb0e9c((undefined8 *)(lVar5 + 0x58),uVar4);
                        uVar7 = **(undefined8 **)(*unaff_x24 + 0xb8);
                        uVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                        FUN_050851b0(uVar4,uVar7,*(undefined8 *)puVar1,0);
                        puVar1 = 
                        UnityEngine_UIElements_UxmlObjectAttributeDescription<Columns>_TypeInfo;
                        if (8 < *(uint *)(lVar5 + 0x18)) {
                          *(undefined8 *)(lVar5 + 0x60) = uVar4;
                          thunk_FUN_02bb0e9c((undefined8 *)(lVar5 + 0x60),uVar4);
                          uVar7 = **(undefined8 **)(*unaff_x24 + 0xb8);
                          uVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                          FUN_050851b0(uVar4,uVar7,*(undefined8 *)puVar1,0);
                          puVar1 = 
                          UnityEngine_UIElements_UxmlObjectListAttributeDescription<Column>_TypeInfo
                          ;
                          if (9 < *(uint *)(lVar5 + 0x18)) {
                            *(undefined8 *)(lVar5 + 0x68) = uVar4;
                            thunk_FUN_02bb0e9c((undefined8 *)(lVar5 + 0x68),uVar4);
                            uVar7 = **(undefined8 **)(*unaff_x24 + 0xb8);
                            uVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                            FUN_050851b0(uVar4,uVar7,*(undefined8 *)puVar1,0);
                            puVar1 = 
                            UnityEngine_UIElements_UxmlObjectListAttributeDescription<SortColumnDescription>_TypeInfo
                            ;
                            if (10 < *(uint *)(lVar5 + 0x18)) {
                              *(undefined8 *)(lVar5 + 0x70) = uVar4;
                              thunk_FUN_02bb0e9c((undefined8 *)(lVar5 + 0x70),uVar4);
                              uVar7 = **(undefined8 **)(*unaff_x24 + 0xb8);
                              uVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                              FUN_050851b0(uVar4,uVar7,*(undefined8 *)puVar1,0);
                              puVar1 = 
                              UnityEngine_UIElements_UxmlTypeAttributeDescription<Enum>_TypeInfo;
                              if (0xb < *(uint *)(lVar5 + 0x18)) {
                                *(undefined8 *)(lVar5 + 0x78) = uVar4;
                                thunk_FUN_02bb0e9c((undefined8 *)(lVar5 + 0x78),uVar4);
                                uVar7 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                uVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                                FUN_050851b0(uVar4,uVar7,*(undefined8 *)puVar1,0);
                                puVar1 = 
                                UnityEngine_UIElements_Experimental_ValueAnimation<StyleValues>_TypeInfo
                                ;
                                if (0xc < *(uint *)(lVar5 + 0x18)) {
                                  *(undefined8 *)(lVar5 + 0x80) = uVar4;
                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar5 + 0x80),uVar4);
                                  uVar7 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                  uVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                                  FUN_050851b0(uVar4,uVar7,*(undefined8 *)puVar1,0);
                                  puVar1 = 
                                  UnityEngine_XR_Interaction_Toolkit_XRControllerRecorder_ValueBypass<Vector2>_TypeInfo
                                  ;
                                  if (0xd < *(uint *)(lVar5 + 0x18)) {
                                    *(undefined8 *)(lVar5 + 0x88) = uVar4;
                                    thunk_FUN_02bb0e9c((undefined8 *)(lVar5 + 0x88),uVar4);
                                    uVar7 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                    uVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                                    FUN_050851b0(uVar4,uVar7,*(undefined8 *)puVar1,0);
                                    puVar1 = 
                                    System_ValueTuple<HandFinger,_IReadOnlyList<ShapeRecognizer_FingerFeatureConfig>>_TypeInfo
                                    ;
                                    if (0xe < *(uint *)(lVar5 + 0x18)) {
                                      *(undefined8 *)(lVar5 + 0x90) = uVar4;
                                      thunk_FUN_02bb0e9c((undefined8 *)(lVar5 + 0x90),uVar4);
                                      uVar7 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                      uVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                                      FUN_050851b0(uVar4,uVar7,*(undefined8 *)puVar1,0);
                                      puVar1 = System_ValueTuple<Int32Enum,_int>_TypeInfo;
                                      if ((*(uint *)(lVar5 + 0x18) & 0xfffffff0) != 0) {
                                        *(undefined8 *)(lVar5 + 0x98) = uVar4;
                                        thunk_FUN_02bb0e9c((undefined8 *)(lVar5 + 0x98),uVar4);
                                        uVar7 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                        uVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                                        FUN_050851b0(uVar4,uVar7,*(undefined8 *)puVar1,0);
                                        puVar1 = System_ValueTuple<Ray,_Camera,_bool>_TypeInfo;
                                        if (0x10 < *(uint *)(lVar5 + 0x18)) {
                                          *(undefined8 *)(lVar5 + 0xa0) = uVar4;
                                          thunk_FUN_02bb0e9c((undefined8 *)(lVar5 + 0xa0),uVar4);
                                          uVar7 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                          uVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                                          FUN_050851b0(uVar4,uVar7,*(undefined8 *)puVar1,0);
                                          puVar1 = System_Numerics_Vector<ushort>_TypeInfo;
                                          if (0x11 < *(uint *)(lVar5 + 0x18)) {
                                            *(undefined8 *)(lVar5 + 0xa8) = uVar4;
                                            thunk_FUN_02bb0e9c((undefined8 *)(lVar5 + 0xa8),uVar4);
                                            uVar7 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                            uVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                                            FUN_050851b0(uVar4,uVar7,*(undefined8 *)puVar1,0);
                                            puVar1 = System_Numerics_Vector<ulong>_TypeInfo;
                                            if (0x12 < *(uint *)(lVar5 + 0x18)) {
                                              *(undefined8 *)(lVar5 + 0xb0) = uVar4;
                                              thunk_FUN_02bb0e9c((undefined8 *)(lVar5 + 0xb0),uVar4)
                                              ;
                                              uVar7 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                              uVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                                              FUN_050851b0(uVar4,uVar7,*(undefined8 *)puVar1,0);
                                              puVar1 = System_WeakReference<Camera>_TypeInfo;
                                              if (0x13 < *(uint *)(lVar5 + 0x18)) {
                                                *(undefined8 *)(lVar5 + 0xb8) = uVar4;
                                                thunk_FUN_02bb0e9c((undefined8 *)(lVar5 + 0xb8),
                                                                   uVar4);
                                                uVar7 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                uVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                                                FUN_050851b0(uVar4,uVar7,*(undefined8 *)puVar1,0);
                                                puVar1 = System_WeakReference<FontAsset>_TypeInfo;
                                                if (0x14 < *(uint *)(lVar5 + 0x18)) {
                                                  *(undefined8 *)(lVar5 + 0xc0) = uVar4;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar5 + 0xc0),
                                                                     uVar4);
                                                  uVar7 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                  uVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                                                  FUN_050851b0(uVar4,uVar7,*(undefined8 *)puVar1,0);
                                                  puVar1 = System_WeakReference<IPool>_TypeInfo;
                                                  if (0x15 < *(uint *)(lVar5 + 0x18)) {
                                                    *(undefined8 *)(lVar5 + 200) = uVar4;
                                                    thunk_FUN_02bb0e9c((undefined8 *)(lVar5 + 200),
                                                                       uVar4);
                                                    uVar7 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                    uVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_050851b0(uVar4,uVar7,*(undefined8 *)puVar1,0
                                                                );
                                                    puVar1 = 
                                                  System_WeakReference<RegexReplacement>_TypeInfo;
                                                  if (0x16 < *(uint *)(lVar5 + 0x18)) {
                                                    *(undefined8 *)(lVar5 + 0xd0) = uVar4;
                                                    thunk_FUN_02bb0e9c((undefined8 *)(lVar5 + 0xd0),
                                                                       uVar4);
                                                    uVar7 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                    uVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_050851b0(uVar4,uVar7,*(undefined8 *)puVar1,0
                                                                );
                                                    puVar1 = 
                                                  System_WeakReference<SslStream>_TypeInfo;
                                                  if (0x17 < *(uint *)(lVar5 + 0x18)) {
                                                    *(undefined8 *)(lVar5 + 0xd8) = uVar4;
                                                    thunk_FUN_02bb0e9c((undefined8 *)(lVar5 + 0xd8),
                                                                       uVar4);
                                                    uVar7 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                    uVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_050851b0(uVar4,uVar7,*(undefined8 *)puVar1,0
                                                                );
                                                    puVar1 = 
                                                  System_WeakReference<TMP_FontAsset>_TypeInfo;
                                                  if (0x18 < *(uint *)(lVar5 + 0x18)) {
                                                    *(undefined8 *)(lVar5 + 0xe0) = uVar4;
                                                    thunk_FUN_02bb0e9c((undefined8 *)(lVar5 + 0xe0),
                                                                       uVar4);
                                                    uVar7 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                    uVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_050851b0(uVar4,uVar7,*(undefined8 *)puVar1,0
                                                                );
                                                    puVar1 = 
                                                  System_Net_WebCompletionSource<ValueTuple<bool,_WebOperation>>_TypeInfo
                                                  ;
                                                  if (0x19 < *(uint *)(lVar5 + 0x18)) {
                                                    *(undefined8 *)(lVar5 + 0xe8) = uVar4;
                                                    thunk_FUN_02bb0e9c((undefined8 *)(lVar5 + 0xe8),
                                                                       uVar4);
                                                    uVar7 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                    uVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_050851b0(uVar4,uVar7,*(undefined8 *)puVar1,0
                                                                );
                                                    puVar1 = 
                                                  System_Net_WebCompletionSource<WebRequestStream>_TypeInfo
                                                  ;
                                                  if (0x1a < *(uint *)(lVar5 + 0x18)) {
                                                    *(undefined8 *)(lVar5 + 0xf0) = uVar4;
                                                    thunk_FUN_02bb0e9c((undefined8 *)(lVar5 + 0xf0),
                                                                       uVar4);
                                                    uVar7 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                    uVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_050851b0(uVar4,uVar7,*(undefined8 *)puVar1,0
                                                                );
                                                    puVar1 = 
                                                  System_Net_WebCompletionSource<WebResponseStream>_TypeInfo
                                                  ;
                                                  if (0x1b < *(uint *)(lVar5 + 0x18)) {
                                                    *(undefined8 *)(lVar5 + 0xf8) = uVar4;
                                                    thunk_FUN_02bb0e9c((undefined8 *)(lVar5 + 0xf8),
                                                                       uVar4);
                                                    uVar7 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                    uVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_050851b0(uVar4,uVar7,*(undefined8 *)puVar1,0
                                                                );
                                                    puVar1 = 
                                                  UnityEngine_UIElements_BaseCompositeField_FieldDescription_WriteDelegate<Rect,_FloatField,_float>_TypeInfo
                                                  ;
                                                  if (0x1c < *(uint *)(lVar5 + 0x18)) {
                                                    *(undefined8 *)(lVar5 + 0x100) = uVar4;
                                                    thunk_FUN_02bb0e9c(lVar5 + 0x100,uVar4);
                                                    uVar7 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                    uVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_050851b0(uVar4,uVar7,*(undefined8 *)puVar1,0
                                                                );
                                                    puVar1 = 
                                                  Unity_Properties_TypeConverter<ushort,_object>_TypeInfo
                                                  ;
                                                  if (0x1d < *(uint *)(lVar5 + 0x18)) {
                                                    *(undefined8 *)(lVar5 + 0x108) = uVar4;
                                                    thunk_FUN_02bb0e9c(lVar5 + 0x108,uVar4);
                                                    uVar7 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                    uVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_050851b0(uVar4,uVar7,*(undefined8 *)puVar1,0
                                                                );
                                                    puVar1 = 
                                                  Unity_Properties_TypeConverter<ushort,_sbyte>_TypeInfo
                                                  ;
                                                  if (0x1e < *(uint *)(lVar5 + 0x18)) {
                                                    *(undefined8 *)(lVar5 + 0x110) = uVar4;
                                                    thunk_FUN_02bb0e9c(lVar5 + 0x110,uVar4);
                                                    uVar7 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                    uVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_050851b0(uVar4,uVar7,*(undefined8 *)puVar1,0
                                                                );
                                                    puVar1 = 
                                                  Unity_Properties_TypeConverter<ushort,_float>_TypeInfo
                                                  ;
                                                  if ((*(uint *)(lVar5 + 0x18) & 0xffffffe0) != 0) {
                                                    *(undefined8 *)(lVar5 + 0x118) = uVar4;
                                                    thunk_FUN_02bb0e9c(lVar5 + 0x118,uVar4);
                                                    uVar7 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                    uVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_050851b0(uVar4,uVar7,*(undefined8 *)puVar1,0
                                                                );
                                                    puVar1 = 
                                                  Unity_Properties_TypeConverter<ushort,_string>_TypeInfo
                                                  ;
                                                  if (0x20 < *(uint *)(lVar5 + 0x18)) {
                                                    *(undefined8 *)(lVar5 + 0x120) = uVar4;
                                                    thunk_FUN_02bb0e9c(lVar5 + 0x120,uVar4);
                                                    uVar7 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                    uVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_050851b0(uVar4,uVar7,*(undefined8 *)puVar1,0
                                                                );
                                                    puVar1 = 
                                                  Unity_Properties_TypeConverter<ushort,_uint>_TypeInfo
                                                  ;
                                                  if (0x21 < *(uint *)(lVar5 + 0x18)) {
                                                    *(undefined8 *)(lVar5 + 0x128) = uVar4;
                                                    thunk_FUN_02bb0e9c(lVar5 + 0x128,uVar4);
                                                    uVar7 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                    uVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_050851b0(uVar4,uVar7,*(undefined8 *)puVar1,0
                                                                );
                                                    puVar1 = 
                                                  Unity_Properties_TypeConverter<ushort,_ulong>_TypeInfo
                                                  ;
                                                  if (0x22 < *(uint *)(lVar5 + 0x18)) {
                                                    *(undefined8 *)(lVar5 + 0x130) = uVar4;
                                                    thunk_FUN_02bb0e9c(lVar5 + 0x130,uVar4);
                                                    uVar7 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                    uVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_050851b0(uVar4,uVar7,*(undefined8 *)puVar1,0
                                                                );
                                                    puVar1 = 
                                                  Unity_Properties_TypeConverter<uint,_bool>_TypeInfo
                                                  ;
                                                  if (0x23 < *(uint *)(lVar5 + 0x18)) {
                                                    *(undefined8 *)(lVar5 + 0x138) = uVar4;
                                                    thunk_FUN_02bb0e9c(lVar5 + 0x138,uVar4);
                                                    uVar7 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                    uVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_050851b0(uVar4,uVar7,*(undefined8 *)puVar1,0
                                                                );
                                                    puVar1 = 
                                                  Unity_Properties_TypeConverter<uint,_byte>_TypeInfo
                                                  ;
                                                  if (0x24 < *(uint *)(lVar5 + 0x18)) {
                                                    *(undefined8 *)(lVar5 + 0x140) = uVar4;
                                                    thunk_FUN_02bb0e9c(lVar5 + 0x140,uVar4);
                                                    uVar7 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                    uVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_050851b0(uVar4,uVar7,*(undefined8 *)puVar1,0
                                                                );
                                                    puVar1 = 
                                                  Unity_Properties_TypeConverter<uint,_char>_TypeInfo
                                                  ;
                                                  if (0x25 < *(uint *)(lVar5 + 0x18)) {
                                                    *(undefined8 *)(lVar5 + 0x148) = uVar4;
                                                    thunk_FUN_02bb0e9c(lVar5 + 0x148,uVar4);
                                                    uVar7 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                    uVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_050851b0(uVar4,uVar7,*(undefined8 *)puVar1,0
                                                                );
                                                    puVar1 = 
                                                  Unity_Properties_TypeConverter<uint,_double>_TypeInfo
                                                  ;
                                                  if (0x26 < *(uint *)(lVar5 + 0x18)) {
                                                    *(undefined8 *)(lVar5 + 0x150) = uVar4;
                                                    thunk_FUN_02bb0e9c(lVar5 + 0x150,uVar4);
                                                    uVar7 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                    uVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_050851b0(uVar4,uVar7,*(undefined8 *)puVar1,0
                                                                );
                                                    puVar1 = 
                                                  Unity_Properties_TypeConverter<uint,_int>_TypeInfo
                                                  ;
                                                  if (0x27 < *(uint *)(lVar5 + 0x18)) {
                                                    *(undefined8 *)(lVar5 + 0x158) = uVar4;
                                                    thunk_FUN_02bb0e9c(lVar5 + 0x158,uVar4);
                                                    uVar7 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                    uVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_050851b0(uVar4,uVar7,*(undefined8 *)puVar1,0
                                                                );
                                                    puVar1 = 
                                                  Unity_Properties_TypeConverter<uint,_long>_TypeInfo
                                                  ;
                                                  if (0x28 < *(uint *)(lVar5 + 0x18)) {
                                                    *(undefined8 *)(lVar5 + 0x160) = uVar4;
                                                    thunk_FUN_02bb0e9c(lVar5 + 0x160,uVar4);
                                                    uVar7 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                    uVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_050851b0(uVar4,uVar7,*(undefined8 *)puVar1,0
                                                                );
                                                    puVar1 = 
                                                  Unity_Properties_TypeConverter<uint,_object>_TypeInfo
                                                  ;
                                                  if (0x29 < *(uint *)(lVar5 + 0x18)) {
                                                    *(undefined8 *)(lVar5 + 0x168) = uVar4;
                                                    thunk_FUN_02bb0e9c(lVar5 + 0x168,uVar4);
                                                    uVar7 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                    uVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_050851b0(uVar4,uVar7,*(undefined8 *)puVar1,0
                                                                );
                                                    puVar1 = 
                                                  Unity_Properties_TypeConverter<uint,_sbyte>_TypeInfo
                                                  ;
                                                  if (0x2a < *(uint *)(lVar5 + 0x18)) {
                                                    *(undefined8 *)(lVar5 + 0x170) = uVar4;
                                                    thunk_FUN_02bb0e9c(lVar5 + 0x170,uVar4);
                                                    uVar7 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                    uVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_050851b0(uVar4,uVar7,*(undefined8 *)puVar1,0
                                                                );
                                                    puVar1 = 
                                                  Unity_Properties_TypeConverter<uint,_float>_TypeInfo
                                                  ;
                                                  if (0x2b < *(uint *)(lVar5 + 0x18)) {
                                                    *(undefined8 *)(lVar5 + 0x178) = uVar4;
                                                    thunk_FUN_02bb0e9c(lVar5 + 0x178,uVar4);
                                                    uVar7 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                    uVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_050851b0(uVar4,uVar7,*(undefined8 *)puVar1,0
                                                                );
                                                    puVar1 = 
                                                  Unity_Properties_TypeConverter<uint,_string>_TypeInfo
                                                  ;
                                                  if (0x2c < *(uint *)(lVar5 + 0x18)) {
                                                    *(undefined8 *)(lVar5 + 0x180) = uVar4;
                                                    thunk_FUN_02bb0e9c(lVar5 + 0x180,uVar4);
                                                    uVar7 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                    uVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_050851b0(uVar4,uVar7,*(undefined8 *)puVar1,0
                                                                );
                                                    puVar1 = 
                                                  Unity_Properties_TypeConverter<uint,_ushort>_TypeInfo
                                                  ;
                                                  if (0x2d < *(uint *)(lVar5 + 0x18)) {
                                                    *(undefined8 *)(lVar5 + 0x188) = uVar4;
                                                    thunk_FUN_02bb0e9c(lVar5 + 0x188,uVar4);
                                                    uVar7 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                    uVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_050851b0(uVar4,uVar7,*(undefined8 *)puVar1,0
                                                                );
                                                    puVar1 = 
                                                  Unity_Properties_TypeConverter<uint,_ulong>_TypeInfo
                                                  ;
                                                  if (0x2e < *(uint *)(lVar5 + 0x18)) {
                                                    *(undefined8 *)(lVar5 + 400) = uVar4;
                                                    thunk_FUN_02bb0e9c(lVar5 + 400,uVar4);
                                                    uVar7 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                    uVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_050851b0(uVar4,uVar7,*(undefined8 *)puVar1,0
                                                                );
                                                    puVar1 = 
                                                  Unity_Properties_TypeConverter<ulong,_bool>_TypeInfo
                                                  ;
                                                  if (0x2f < *(uint *)(lVar5 + 0x18)) {
                                                    *(undefined8 *)(lVar5 + 0x198) = uVar4;
                                                    thunk_FUN_02bb0e9c(lVar5 + 0x198,uVar4);
                                                    uVar7 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                    uVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_050851b0(uVar4,uVar7,*(undefined8 *)puVar1,0
                                                                );
                                                    puVar1 = 
                                                  Unity_Properties_TypeConverter<ulong,_byte>_TypeInfo
                                                  ;
                                                  if (0x30 < *(uint *)(lVar5 + 0x18)) {
                                                    *(undefined8 *)(lVar5 + 0x1a0) = uVar4;
                                                    thunk_FUN_02bb0e9c(lVar5 + 0x1a0,uVar4);
                                                    uVar7 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                    uVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_050851b0(uVar4,uVar7,*(undefined8 *)puVar1,0
                                                                );
                                                    puVar1 = 
                                                  Unity_Properties_TypeConverter<ulong,_double>_TypeInfo
                                                  ;
                                                  if (0x31 < *(uint *)(lVar5 + 0x18)) {
                                                    *(undefined8 *)(lVar5 + 0x1a8) = uVar4;
                                                    thunk_FUN_02bb0e9c(lVar5 + 0x1a8,uVar4);
                                                    uVar7 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                    uVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_050851b0(uVar4,uVar7,*(undefined8 *)puVar1,0
                                                                );
                                                    puVar1 = 
                                                  Unity_Properties_TypeConverter<ulong,_short>_TypeInfo
                                                  ;
                                                  if (0x32 < *(uint *)(lVar5 + 0x18)) {
                                                    *(undefined8 *)(lVar5 + 0x1b0) = uVar4;
                                                    thunk_FUN_02bb0e9c(lVar5 + 0x1b0,uVar4);
                                                    uVar7 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                    uVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_050851b0(uVar4,uVar7,*(undefined8 *)puVar1,0
                                                                );
                                                    puVar1 = 
                                                  Unity_Properties_TypeConverter<ulong,_int>_TypeInfo
                                                  ;
                                                  if (0x33 < *(uint *)(lVar5 + 0x18)) {
                                                    *(undefined8 *)(lVar5 + 0x1b8) = uVar4;
                                                    thunk_FUN_02bb0e9c(lVar5 + 0x1b8,uVar4);
                                                    uVar7 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                    uVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_050851b0(uVar4,uVar7,*(undefined8 *)puVar1,0
                                                                );
                                                    puVar1 = 
                                                  Unity_Properties_TypeConverter<ulong,_long>_TypeInfo
                                                  ;
                                                  if (0x34 < *(uint *)(lVar5 + 0x18)) {
                                                    *(undefined8 *)(lVar5 + 0x1c0) = uVar4;
                                                    thunk_FUN_02bb0e9c(lVar5 + 0x1c0,uVar4);
                                                    uVar7 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                    uVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_050851b0(uVar4,uVar7,*(undefined8 *)puVar1,0
                                                                );
                                                    puVar1 = 
                                                  Unity_Properties_TypeConverter<ulong,_object>_TypeInfo
                                                  ;
                                                  if (0x35 < *(uint *)(lVar5 + 0x18)) {
                                                    *(undefined8 *)(lVar5 + 0x1c8) = uVar4;
                                                    thunk_FUN_02bb0e9c(lVar5 + 0x1c8,uVar4);
                                                    uVar7 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                    uVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_050851b0(uVar4,uVar7,*(undefined8 *)puVar1,0
                                                                );
                                                    puVar1 = 
                                                  Unity_Properties_TypeConverter<ulong,_sbyte>_TypeInfo
                                                  ;
                                                  if (0x36 < *(uint *)(lVar5 + 0x18)) {
                                                    *(undefined8 *)(lVar5 + 0x1d0) = uVar4;
                                                    thunk_FUN_02bb0e9c(lVar5 + 0x1d0,uVar4);
                                                    uVar7 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                    uVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_050851b0(uVar4,uVar7,*(undefined8 *)puVar1,0
                                                                );
                                                    puVar1 = 
                                                  Unity_Properties_TypeConverter<ulong,_float>_TypeInfo
                                                  ;
                                                  if (0x37 < *(uint *)(lVar5 + 0x18)) {
                                                    *(undefined8 *)(lVar5 + 0x1d8) = uVar4;
                                                    thunk_FUN_02bb0e9c(lVar5 + 0x1d8,uVar4);
                                                    uVar7 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                    uVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_050851b0(uVar4,uVar7,*(undefined8 *)puVar1,0
                                                                );
                                                    puVar1 = 
                                                  Unity_Properties_TypeConverter<ulong,_string>_TypeInfo
                                                  ;
                                                  if (0x38 < *(uint *)(lVar5 + 0x18)) {
                                                    *(undefined8 *)(lVar5 + 0x1e0) = uVar4;
                                                    thunk_FUN_02bb0e9c(lVar5 + 0x1e0,uVar4);
                                                    uVar7 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                    uVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_050851b0(uVar4,uVar7,*(undefined8 *)puVar1,0
                                                                );
                                                    puVar1 = 
                                                  Unity_Properties_TypeConverter<ulong,_ushort>_TypeInfo
                                                  ;
                                                  if (0x39 < *(uint *)(lVar5 + 0x18)) {
                                                    *(undefined8 *)(lVar5 + 0x1e8) = uVar4;
                                                    thunk_FUN_02bb0e9c(lVar5 + 0x1e8,uVar4);
                                                    uVar7 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                    uVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_050851b0(uVar4,uVar7,*(undefined8 *)puVar1,0
                                                                );
                                                    puVar1 = 
                                                  Unity_Properties_TypeConverter<ulong,_uint>_TypeInfo
                                                  ;
                                                  if (0x3a < *(uint *)(lVar5 + 0x18)) {
                                                    *(undefined8 *)(lVar5 + 0x1f0) = uVar4;
                                                    thunk_FUN_02bb0e9c(lVar5 + 0x1f0,uVar4);
                                                    uVar7 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                    uVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_050851b0(uVar4,uVar7,*(undefined8 *)puVar1,0
                                                                );
                                                    puVar1 = 
                                                  UnityEngine_InputSystem_Utilities_SavedStructState_TypedRestore<InputActionState_GlobalState>_TypeInfo
                                                  ;
                                                  if (0x3b < *(uint *)(lVar5 + 0x18)) {
                                                    *(undefined8 *)(lVar5 + 0x1f8) = uVar4;
                                                    thunk_FUN_02bb0e9c(lVar5 + 0x1f8,uVar4);
                                                    uVar7 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                    uVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_050851b0(uVar4,uVar7,*(undefined8 *)puVar1,0
                                                                );
                                                    puVar1 = 
                                                  UnityEngine_InputSystem_Utilities_SavedStructState_TypedRestore<InputUser_GlobalState>_TypeInfo
                                                  ;
                                                  if (0x3c < *(uint *)(lVar5 + 0x18)) {
                                                    *(undefined8 *)(lVar5 + 0x200) = uVar4;
                                                    thunk_FUN_02bb0e9c(lVar5 + 0x200,uVar4);
                                                    uVar7 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                    uVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_050851b0(uVar4,uVar7,*(undefined8 *)puVar1,0
                                                                );
                                                    puVar1 = 
                                                  UnityEngine_InputSystem_Utilities_SavedStructState_TypedRestore<Touch_GlobalState>_TypeInfo
                                                  ;
                                                  if (0x3d < *(uint *)(lVar5 + 0x18)) {
                                                    *(undefined8 *)(lVar5 + 0x208) = uVar4;
                                                    thunk_FUN_02bb0e9c(lVar5 + 0x208,uVar4);
                                                    uVar7 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                    uVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_050851b0(uVar4,uVar7,*(undefined8 *)puVar1,0
                                                                );
                                                    puVar1 = 
                                                  UnityEngine_UIElements_UQueryState<VisualElement>_TypeInfo
                                                  ;
                                                  if (0x3e < *(uint *)(lVar5 + 0x18)) {
                                                    *(undefined8 *)(lVar5 + 0x210) = uVar4;
                                                    thunk_FUN_02bb0e9c(lVar5 + 0x210,uVar4);
                                                    uVar7 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                    uVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_050851b0(uVar4,uVar7,*(undefined8 *)puVar1,0
                                                                );
                                                    puVar1 = 
                                                  UnityEngine_Events_UnityAction<ActivateEventArgs>_TypeInfo
                                                  ;
                                                  if ((*(uint *)(lVar5 + 0x18) & 0xffffffc0) != 0) {
                                                    *(undefined8 *)(lVar5 + 0x218) = uVar4;
                                                    thunk_FUN_02bb0e9c(lVar5 + 0x218,uVar4);
                                                    uVar7 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                    uVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_050851b0(uVar4,uVar7,*(undefined8 *)puVar1,0
                                                                );
                                                    puVar1 = 
                                                  UnityEngine_Events_UnityAction<AutoGun>_TypeInfo;
                                                  if (0x40 < *(uint *)(lVar5 + 0x18)) {
                                                    *(undefined8 *)(lVar5 + 0x220) = uVar4;
                                                    thunk_FUN_02bb0e9c(lVar5 + 0x220,uVar4);
                                                    uVar7 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                    uVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_050851b0(uVar4,uVar7,*(undefined8 *)puVar1,0
                                                                );
                                                    puVar1 = 
                                                  UnityEngine_Events_UnityAction<bool>_TypeInfo;
                                                  if (0x41 < *(uint *)(lVar5 + 0x18)) {
                                                    *(undefined8 *)(lVar5 + 0x228) = uVar4;
                                                    thunk_FUN_02bb0e9c(lVar5 + 0x228,uVar4);
                                                    uVar7 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                    uVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_050851b0(uVar4,uVar7,*(undefined8 *)puVar1,0
                                                                );
                                                    puVar1 = 
                                                  UnityEngine_Events_UnityAction<Color>_TypeInfo;
                                                  if (0x42 < *(uint *)(lVar5 + 0x18)) {
                                                    *(undefined8 *)(lVar5 + 0x230) = uVar4;
                                                    thunk_FUN_02bb0e9c(lVar5 + 0x230,uVar4);
                                                    uVar7 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                    uVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_050851b0(uVar4,uVar7,*(undefined8 *)puVar1,0
                                                                );
                                                    puVar1 = 
                                                  UnityEngine_Events_UnityAction<CommandBuffer>_TypeInfo
                                                  ;
                                                  if (0x43 < *(uint *)(lVar5 + 0x18)) {
                                                    *(undefined8 *)(lVar5 + 0x238) = uVar4;
                                                    thunk_FUN_02bb0e9c(lVar5 + 0x238,uVar4);
                                                    uVar7 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                    uVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_050851b0(uVar4,uVar7,*(undefined8 *)puVar1,0
                                                                );
                                                    puVar1 = 
                                                  UnityEngine_Events_UnityAction<Component>_TypeInfo
                                                  ;
                                                  if (0x44 < *(uint *)(lVar5 + 0x18)) {
                                                    *(undefined8 *)(lVar5 + 0x240) = uVar4;
                                                    thunk_FUN_02bb0e9c(lVar5 + 0x240,uVar4);
                                                    uVar7 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                    uVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_050851b0(uVar4,uVar7,*(undefined8 *)puVar1,0
                                                                );
                                                    puVar1 = 
                                                  UnityEngine_Events_UnityAction<DeactivateEventArgs>_TypeInfo
                                                  ;
                                                  if (0x45 < *(uint *)(lVar5 + 0x18)) {
                                                    *(undefined8 *)(lVar5 + 0x248) = uVar4;
                                                    thunk_FUN_02bb0e9c(lVar5 + 0x248,uVar4);
                                                    uVar7 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                    uVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_050851b0(uVar4,uVar7,*(undefined8 *)puVar1,0
                                                                );
                                                    puVar1 = 
                                                  UnityEngine_Events_UnityAction<DismemberPart>_TypeInfo
                                                  ;
                                                  if (0x46 < *(uint *)(lVar5 + 0x18)) {
                                                    *(undefined8 *)(lVar5 + 0x250) = uVar4;
                                                    thunk_FUN_02bb0e9c(lVar5 + 0x250,uVar4);
                                                    uVar7 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                    uVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_050851b0(uVar4,uVar7,*(undefined8 *)puVar1,0
                                                                );
                                                    puVar1 = 
                                                  UnityEngine_Events_UnityAction<FocusEnterEventArgs>_TypeInfo
                                                  ;
                                                  if (0x47 < *(uint *)(lVar5 + 0x18)) {
                                                    *(undefined8 *)(lVar5 + 600) = uVar4;
                                                    thunk_FUN_02bb0e9c(lVar5 + 600,uVar4);
                                                    uVar7 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                    uVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_050851b0(uVar4,uVar7,*(undefined8 *)puVar1,0
                                                                );
                                                    puVar1 = 
                                                  UnityEngine_Events_UnityAction<FocusExitEventArgs>_TypeInfo
                                                  ;
                                                  if (0x48 < *(uint *)(lVar5 + 0x18)) {
                                                    *(undefined8 *)(lVar5 + 0x260) = uVar4;
                                                    thunk_FUN_02bb0e9c(lVar5 + 0x260,uVar4);
                                                    uVar7 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                    uVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_050851b0(uVar4,uVar7,*(undefined8 *)puVar1,0
                                                                );
                                                    puVar1 = 
                                                  UnityEngine_Events_UnityAction<Guid>_TypeInfo;
                                                  if (0x49 < *(uint *)(lVar5 + 0x18)) {
                                                    *(undefined8 *)(lVar5 + 0x268) = uVar4;
                                                    thunk_FUN_02bb0e9c(lVar5 + 0x268,uVar4);
                                                    uVar7 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                    uVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_050851b0(uVar4,uVar7,*(undefined8 *)puVar1,0
                                                                );
                                                    puVar1 = 
                                                  UnityEngine_Events_UnityAction<Hand>_TypeInfo;
                                                  if (0x4a < *(uint *)(lVar5 + 0x18)) {
                                                    *(undefined8 *)(lVar5 + 0x270) = uVar4;
                                                    thunk_FUN_02bb0e9c(lVar5 + 0x270,uVar4);
                                                    uVar7 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                    uVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_050851b0(uVar4,uVar7,*(undefined8 *)puVar1,0
                                                                );
                                                    puVar1 = 
                                                  UnityEngine_Events_UnityAction<HoverEnterEventArgs>_TypeInfo
                                                  ;
                                                  if (0x4b < *(uint *)(lVar5 + 0x18)) {
                                                    *(undefined8 *)(lVar5 + 0x278) = uVar4;
                                                    thunk_FUN_02bb0e9c(lVar5 + 0x278,uVar4);
                                                    uVar7 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                    uVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_050851b0(uVar4,uVar7,*(undefined8 *)puVar1,0
                                                                );
                                                    puVar1 = 
                                                  UnityEngine_Events_UnityAction<HoverExitEventArgs>_TypeInfo
                                                  ;
                                                  if (0x4c < *(uint *)(lVar5 + 0x18)) {
                                                    *(undefined8 *)(lVar5 + 0x280) = uVar4;
                                                    thunk_FUN_02bb0e9c(lVar5 + 0x280,uVar4);
                                                    uVar7 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                    uVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_050851b0(uVar4,uVar7,*(undefined8 *)puVar1,0
                                                                );
                                                    puVar1 = 
                                                  UnityEngine_Events_UnityAction<int>_TypeInfo;
                                                  if (0x4d < *(uint *)(lVar5 + 0x18)) {
                                                    *(undefined8 *)(lVar5 + 0x288) = uVar4;
                                                    thunk_FUN_02bb0e9c(lVar5 + 0x288,uVar4);
                                                    uVar7 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                    uVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_050851b0(uVar4,uVar7,*(undefined8 *)puVar1,0
                                                                );
                                                    puVar1 = 
                                                  UnityEngine_Events_UnityAction<MRUKAnchor>_TypeInfo
                                                  ;
                                                  if (0x4e < *(uint *)(lVar5 + 0x18)) {
                                                    *(undefined8 *)(lVar5 + 0x290) = uVar4;
                                                    thunk_FUN_02bb0e9c(lVar5 + 0x290,uVar4);
                                                    uVar7 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                    uVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_050851b0(uVar4,uVar7,*(undefined8 *)puVar1,0
                                                                );
                                                    puVar1 = 
                                                  UnityEngine_Events_UnityAction<MessageEventArgs>_TypeInfo
                                                  ;
                                                  if (0x4f < *(uint *)(lVar5 + 0x18)) {
                                                    *(undefined8 *)(lVar5 + 0x298) = uVar4;
                                                    thunk_FUN_02bb0e9c(lVar5 + 0x298,uVar4);
                                                    uVar7 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                    uVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_050851b0(uVar4,uVar7,*(undefined8 *)puVar1,0
                                                                );
                                                    puVar1 = 
                                                  UnityEngine_Events_UnityAction<PerformanceChangeNotification>_TypeInfo
                                                  ;
                                                  if (0x50 < *(uint *)(lVar5 + 0x18)) {
                                                    *(undefined8 *)(lVar5 + 0x2a0) = uVar4;
                                                    thunk_FUN_02bb0e9c(lVar5 + 0x2a0,uVar4);
                                                    uVar7 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                    uVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_050851b0(uVar4,uVar7,*(undefined8 *)puVar1,0
                                                                );
                                                    puVar1 = 
                                                  UnityEngine_Events_UnityAction<Pose>_TypeInfo;
                                                  if (0x51 < *(uint *)(lVar5 + 0x18)) {
                                                    *(undefined8 *)(lVar5 + 0x2a8) = uVar4;
                                                    thunk_FUN_02bb0e9c(lVar5 + 0x2a8,uVar4);
                                                    uVar7 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                    uVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_050851b0(uVar4,uVar7,*(undefined8 *)puVar1,0
                                                                );
                                                    puVar1 = 
                                                  UnityEngine_Events_UnityAction<SelectEnterEventArgs>_TypeInfo
                                                  ;
                                                  if (0x52 < *(uint *)(lVar5 + 0x18)) {
                                                    *(undefined8 *)(lVar5 + 0x2b0) = uVar4;
                                                    thunk_FUN_02bb0e9c(lVar5 + 0x2b0,uVar4);
                                                    uVar7 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                    uVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_050851b0(uVar4,uVar7,*(undefined8 *)puVar1,0
                                                                );
                                                    puVar1 = PTR_DAT_0632dac8;
                                                    if (0x53 < *(uint *)(lVar5 + 0x18)) {
                                                      *(undefined8 *)(lVar5 + 0x2b8) = uVar4;
                                                      thunk_FUN_02bb0e9c(lVar5 + 0x2b8,uVar4);
                                                      lVar6 = *(long *)(*unaff_x23 + 0xb8);
                                                      *(long *)(lVar6 + 0x20b8) = lVar5;
                                                      thunk_FUN_02bb0e9c(lVar6 + 0x20b8,lVar5);
                                                      lVar6 = *unaff_x23;
                                                      memset((void *)(*(long *)(lVar6 + 0xb8) +
                                                                     0x20c0),0,0x118);
                                                      memset((void *)(*(long *)(lVar6 + 0xb8) +
                                                                     0x21d8),0,0x138);
                                                      lVar5 = *(long *)(lVar6 + 0xb8);
                                                      uVar4 = *(undefined8 *)puVar1;
                                                      *(undefined8 *)(lVar5 + 0x2350) = 0;
                                                      *(undefined8 *)(lVar5 + 0x2318) = 0;
                                                      *(undefined8 *)(lVar5 + 0x2310) = 0;
                                                      *(undefined8 *)(lVar5 + 9000) = 0;
                                                      *(undefined8 *)(lVar5 + 0x2320) = 0;
                                                      *(undefined8 *)(lVar5 + 0x2338) = 0;
                                                      *(undefined8 *)(lVar5 + 0x2330) = 0;
                                                      *(undefined8 *)(lVar5 + 0x2348) = 0;
                                                      *(undefined8 *)(lVar5 + 0x2340) = 0;
                                                      lVar5 = *(long *)(lVar6 + 0xb8);
                                                      *(undefined8 *)(lVar5 + 0x2360) = 0;
                                                      *(undefined8 *)(lVar5 + 0x2358) = 0;
                                                      *(undefined8 *)(lVar5 + 0x2370) = 0;
                                                      *(undefined8 *)(lVar5 + 0x2368) = 0;
                                                      *(undefined8 *)(lVar5 + 0x2380) = 0;
                                                      *(undefined8 *)(lVar5 + 0x2378) = 0;
                                                      *(undefined8 *)(lVar5 + 0x2390) = 0;
                                                      *(undefined8 *)(lVar5 + 0x2388) = 0;
                                                      *(undefined8 *)(lVar5 + 0x23a0) = 0;
                                                      *(undefined8 *)(lVar5 + 0x2398) = 0;
                                                      *(undefined4 *)
                                                       (*(long *)(lVar6 + 0xb8) + 0x23a8) =
                                                           0xffffffff;
                                                      uVar4 = thunk_FUN_02b79644(uVar4);
                                                      FUN_04d9a624(uVar4,0,0,0,0);
                                                      lVar5 = *(long *)(*unaff_x23 + 0xb8);
                                                      *(undefined8 *)(lVar5 + 0x23b0) = uVar4;
                                                      thunk_FUN_02bb0e9c(lVar5 + 0x23b0,uVar4);
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
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


