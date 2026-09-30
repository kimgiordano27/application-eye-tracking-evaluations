/*
FUNCTION_NAME: UnityEngine.GUILayoutGroup$$ToString
ENTRY_POINT: 05fcece0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 117
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_1
*/


void UnityEngine_GUILayoutGroup__ToString(void)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000000;
  long in_stack_00000008;
  
  *(undefined8 *)(unaff_x24 + 0x18) =
       *(undefined8 *)Method_UnityEngine_GameObject_GetComponentsInChildren<ParticleSystem>__;
  thunk_FUN_02dd37b4();
  *(undefined8 *)(unaff_x24 + 0x10) = *unaff_x29;
  thunk_FUN_02dd37b4();
  if (unaff_x23 != 0) {
    lVar6 = *(long *)(unaff_x23 + 0x10);
    *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
    if (lVar6 != 0) {
      uVar1 = *(uint *)(unaff_x23 + 0x18);
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        *(uint *)(unaff_x23 + 0x18) = uVar1 + 1;
        *(long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = unaff_x24;
        thunk_FUN_02dd37b4();
      }
      else {
        FUN_03aac494();
      }
      *(long *)(unaff_x22 + 0x28) = unaff_x23;
      thunk_FUN_02dd37b4();
      lVar6 = *(long *)(unaff_x21 + 0x10);
      *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
      if (lVar6 != 0) {
        uVar1 = *(uint *)(unaff_x21 + 0x18);
        if (uVar1 < *(uint *)(lVar6 + 0x18)) {
          *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
          *(long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = unaff_x22;
          thunk_FUN_02dd37b4();
                    /* try { // try from 05fcedc8 to 060cedcf has its CatchHandler @ 05fcee94 */
        }
        else {
          FUN_03aac494();
        }
        lVar6 = thunk_FUN_02d9d534(*unaff_x27);
                    /* try { // try from 05fcedf4 to 060cedf7 has its CatchHandler @ 05fcee8c */
        FUN_05fc094c(lVar6,0);
        puVar2 = Method_Unity_VisualScripting_BinaryOperatorHandler_Handle<short,_uint>__;
                    /* try { // try from 05fcedf8 to 060cee07 has its CatchHandler @ 05fcee90 */
        if (lVar6 != 0) {
                    /* try { // try from 05fcee08 to 060ceeab has its CatchHandler @ 05fcec70 */
          *(undefined8 *)(lVar6 + 0x10) =
               *(undefined8 *)
                Firebase_Platform_FirebaseHandler_ApplicationFocusChangedEventArgs_TypeInfo;
          thunk_FUN_02dd37b4();
          *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)puVar2;
          thunk_FUN_02dd37b4((undefined8 *)(lVar6 + 0x20));
          *(undefined4 *)(lVar6 + 0x18) = 0;
          lVar3 = thunk_FUN_02d9d534(*unaff_x19);
          FUN_03aabc60(lVar3,*unaff_x20);
          if (lVar3 != 0) {
            uVar5 = *(undefined8 *)Method_UnityEngine_UIElements_GenericDropdownMenu_OnPointerDown__
            ;
            lVar7 = *(long *)(lVar3 + 0x10);
            lVar8 = *(long *)PTR_DAT_0675eb70;
            *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
            if (lVar7 != 0) {
              uVar1 = *(uint *)(lVar3 + 0x18);
              if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 05fcedf4 with catch @ 05fcee8c
                        */
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 05fcedf8 with catch @ 05fcee90
                        */
                *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 05fcedc8 with catch @ 05fcee94
                        */
                *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
                thunk_FUN_02dd37b4();
              }
              else {
                    /* try { // try from 05fceeac to 060ceeaf has its CatchHandler @ 05fceed8 */
                    /* try { // try from 05fceeb0 to 060ceee7 has its CatchHandler @ 05fcec70 */
                FUN_03aac494(lVar3,uVar5,
                             *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
              }
              *(long *)(lVar6 + 0x30) = lVar3;
              thunk_FUN_02dd37b4((long *)(lVar6 + 0x30),lVar3);
              lVar3 = thunk_FUN_02d9d534(*unaff_x28);
              FUN_03aabc60(lVar3,*unaff_x26);
                    /* catch() { ... } // from try @ 05fceeac with catch @ 05fceed8 */
              lVar7 = thunk_FUN_02d9d534(*unaff_x25);
                    /* try { // try from 05fceee8 to 060ceeef has its CatchHandler @ 05fcef04 */
              FUN_05fc0944(lVar7,0);
              if (lVar7 != 0) {
                    /* try { // try from 05fceef0 to 060ceefb has its CatchHandler @ 05fcec70 */
                    /* try { // try from 05fceefc to 060cef03 has its CatchHandler @ 05fcef04 */
                *(undefined8 *)(lVar7 + 0x18) =
                     *(undefined8 *)
                      Method_UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_GazeInputManager_OnDeviceChange__
                ;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05fceee8 with catch @ 05fcef04
                       catch(type#2 @ 00000000) { ... } // from try @ 05fceefc with catch @ 05fcef04
                        */
                thunk_FUN_02dd37b4();
                    /* try { // try from 05fcef08 to 060cf133 has its CatchHandler @ 05fcef08
                       catch() { ... } // from try @ 05fcef08 with catch @ 05fcef08
                       catch() { ... } // from try @ 05fcf228 with catch @ 05fcef08
                       catch() { ... } // from try @ 05fcf304 with catch @ 05fcef08
                       catch() { ... } // from try @ 05fcf34c with catch @ 05fcef08
                       catch() { ... } // from try @ 05fcf38c with catch @ 05fcef08 */
                *(undefined8 *)(lVar7 + 0x10) = *unaff_x29;
                thunk_FUN_02dd37b4();
                if (lVar3 != 0) {
                  lVar8 = *(long *)(lVar3 + 0x10);
                  lVar9 = *(long *)Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__;
                  *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                  if (lVar8 != 0) {
                    uVar1 = *(uint *)(lVar3 + 0x18);
                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                      plVar4 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                      *plVar4 = lVar7;
                      thunk_FUN_02dd37b4(plVar4,lVar7);
                    }
                    else {
                      FUN_03aac494(lVar3,lVar7,
                                   *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                                  );
                    }
                    *(long *)(lVar6 + 0x28) = lVar3;
                    thunk_FUN_02dd37b4((long *)(lVar6 + 0x28),lVar3);
                    lVar3 = *(long *)(unaff_x21 + 0x10);
                    *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
                    if (lVar3 != 0) {
                      uVar1 = *(uint *)(unaff_x21 + 0x18);
                      if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                        *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                        plVar4 = (long *)(lVar3 + (long)(int)uVar1 * 8 + 0x20);
                        *plVar4 = lVar6;
                        thunk_FUN_02dd37b4(plVar4,lVar6);
                      }
                      else {
                        FUN_03aac494();
                      }
                      lVar6 = thunk_FUN_02d9d534(*unaff_x27);
                      FUN_05fc094c(lVar6,0);
                      puVar2 = PTR_DAT_06762060;
                      if (lVar6 != 0) {
                        *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)PTR_DAT_0676c270;
                        thunk_FUN_02dd37b4();
                        *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)puVar2;
                        thunk_FUN_02dd37b4((undefined8 *)(lVar6 + 0x20));
                        *(undefined4 *)(lVar6 + 0x18) = 1;
                        lVar3 = thunk_FUN_02d9d534(*unaff_x19);
                        FUN_03aabc60(lVar3,*unaff_x20);
                        if (lVar3 != 0) {
                          uVar5 = *(undefined8 *)puVar2;
                          lVar7 = *(long *)(lVar3 + 0x10);
                          lVar8 = *(long *)PTR_DAT_0675eb70;
                          *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                          if (lVar7 != 0) {
                            uVar1 = *(uint *)(lVar3 + 0x18);
                            if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                              *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                              *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
                              thunk_FUN_02dd37b4();
                            }
                            else {
                              FUN_03aac494(lVar3,uVar5,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                            }
                            *(long *)(lVar6 + 0x30) = lVar3;
                            thunk_FUN_02dd37b4((long *)(lVar6 + 0x30),lVar3);
                            lVar3 = thunk_FUN_02d9d534(*unaff_x28);
                            FUN_03aabc60(lVar3,*unaff_x26);
                            lVar7 = thunk_FUN_02d9d534(*unaff_x25);
                            FUN_05fc0944(lVar7,0);
                            if (lVar7 != 0) {
                              *(undefined8 *)(lVar7 + 0x18) =
                                   *(undefined8 *)
                                    Method_UnityEngine_GameObject_TryGetComponent<JointVisualizer>__
                              ;
                              thunk_FUN_02dd37b4();
                              *(undefined8 *)(lVar7 + 0x10) = *unaff_x29;
                              thunk_FUN_02dd37b4();
                              if (lVar3 != 0) {
                                lVar8 = *(long *)(lVar3 + 0x10);
                                lVar9 = *(long *)
                                         Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__;
                                *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                                if (lVar8 != 0) {
                                  uVar1 = *(uint *)(lVar3 + 0x18);
                                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                    *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                    plVar4 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                                    *plVar4 = lVar7;
                                    thunk_FUN_02dd37b4(plVar4,lVar7);
                                  }
                                  else {
                                    FUN_03aac494(lVar3,lVar7,
                                                 *(undefined8 *)
                                                  (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                                                );
                                  }
                                  *(long *)(lVar6 + 0x28) = lVar3;
                                  thunk_FUN_02dd37b4((long *)(lVar6 + 0x28),lVar3);
                                  lVar3 = *(long *)(unaff_x21 + 0x10);
                                  *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
                                  if (lVar3 != 0) {
                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                      plVar4 = (long *)(lVar3 + (long)(int)uVar1 * 8 + 0x20);
                                      *plVar4 = lVar6;
                                      thunk_FUN_02dd37b4(plVar4,lVar6);
                                    }
                                    else {
                                      FUN_03aac494();
                                    }
                                    lVar6 = thunk_FUN_02d9d534(*unaff_x27);
                                    FUN_05fc094c(lVar6,0);
                                    puVar2 = 
                                    Method_UnityEngine_GameObject_TryGetComponent<Renderer>__;
                                    if (lVar6 != 0) {
                                      *(undefined8 *)(lVar6 + 0x10) =
                                           *(undefined8 *)
                                            UnityEngine_XR_ARSubsystems_XRRaycast_TypeInfo;
                                      thunk_FUN_02dd37b4();
                                      *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)puVar2;
                                      thunk_FUN_02dd37b4((undefined8 *)(lVar6 + 0x20));
                                      *(undefined4 *)(lVar6 + 0x18) = 0;
                                      lVar3 = thunk_FUN_02d9d534(*unaff_x19);
                                      FUN_03aabc60(lVar3,*unaff_x20);
                                      if (lVar3 != 0) {
                                        uVar5 = *(undefined8 *)Method_UnityEngine_Color_get_Item__;
                                        lVar7 = *(long *)(lVar3 + 0x10);
                                        lVar8 = *(long *)PTR_DAT_0675eb70;
                                        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                                        if (lVar7 != 0) {
                                          uVar1 = *(uint *)(lVar3 + 0x18);
                                          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                            *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                            *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) =
                                                 uVar5;
                                            thunk_FUN_02dd37b4();
                                          }
                                          else {
                                            FUN_03aac494(lVar3,uVar5,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0)
                                                          + 0x70));
                                          }
                                          *(long *)(lVar6 + 0x30) = lVar3;
                                          thunk_FUN_02dd37b4((long *)(lVar6 + 0x30),lVar3);
                                          lVar3 = thunk_FUN_02d9d534(*unaff_x28);
                                          FUN_03aabc60(lVar3,*unaff_x26);
                                          lVar7 = thunk_FUN_02d9d534(*unaff_x25);
                                          FUN_05fc0944(lVar7,0);
                                          if (lVar7 != 0) {
                                            *(undefined8 *)(lVar7 + 0x18) =
                                                 *(undefined8 *)
                                                  Method_UnityEngine_UIElements_GenericDropdownMenu_OnParentResized__
                                            ;
                                            thunk_FUN_02dd37b4();
                                            *(undefined8 *)(lVar7 + 0x10) = *unaff_x29;
                                            thunk_FUN_02dd37b4();
                                            if (lVar3 != 0) {
                                              lVar8 = *(long *)(lVar3 + 0x10);
                                              lVar9 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                              ;
                                              *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                                              if (lVar8 != 0) {
                                                uVar1 = *(uint *)(lVar3 + 0x18);
                                                if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                  *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                  plVar4 = (long *)(lVar8 + (long)(int)uVar1 * 8 +
                                                                   0x20);
                                                  *plVar4 = lVar7;
                                                  thunk_FUN_02dd37b4(plVar4,lVar7);
                                                }
                                                else {
                                                  FUN_03aac494(lVar3,lVar7,
                                                               *(undefined8 *)
                                                                (*(long *)(*(long *)(lVar9 + 0x20) +
                                                                          0xc0) + 0x70));
                                                }
                                                *(long *)(lVar6 + 0x28) = lVar3;
                                                thunk_FUN_02dd37b4((long *)(lVar6 + 0x28),lVar3);
                                                lVar3 = *(long *)(unaff_x21 + 0x10);
                                                *(int *)(unaff_x21 + 0x1c) =
                                                     *(int *)(unaff_x21 + 0x1c) + 1;
                                                if (lVar3 != 0) {
                                                  uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                                                    *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                    plVar4 = (long *)(lVar3 + (long)(int)uVar1 * 8 +
                                                                     0x20);
                                                    *plVar4 = lVar6;
                                                    thunk_FUN_02dd37b4(plVar4,lVar6);
                                                  }
                                                  else {
                                                    FUN_03aac494();
                                                  }
                                                  lVar6 = thunk_FUN_02d9d534(*unaff_x27);
                                                  FUN_05fc094c(lVar6,0);
                                                  puVar2 = 
                                                  Method_UnityEngine_UIElements_GenericDropdownMenu_OnInitialDisplay__
                                                  ;
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_ARSubsystems_XRReferenceImage_TypeInfo
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar6 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar6 + 0x20));
                                                  *(undefined4 *)(lVar6 + 0x18) = 2;
                                                  lVar3 = thunk_FUN_02d9d534(*unaff_x19);
                                                  FUN_03aabc60(lVar3,*unaff_x20);
                                                  if (lVar3 != 0) {
                                                    uVar5 = *(undefined8 *)
                                                                                                                          
                                                  Method_Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_Start__
                                                  ;
                                                  lVar7 = *(long *)(lVar3 + 0x10);
                                                  lVar8 = *(long *)PTR_DAT_0675eb70;
                                                  *(int *)(lVar3 + 0x1c) =
                                                       *(int *)(lVar3 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar3 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5
                                                      ;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar3,uVar5,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x30) = lVar3;
                                                  thunk_FUN_02dd37b4((long *)(lVar6 + 0x30),lVar3);
                                                  lVar3 = thunk_FUN_02d9d534(*unaff_x28);
                                                  FUN_03aabc60(lVar3,*unaff_x26);
                                                  lVar7 = thunk_FUN_02d9d534(*unaff_x25);
                                                  FUN_05fc0944(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Unity_Properties_GeneratePropertyBagsForTypesQualifiedWithAttribute__ctor__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x29;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar3 != 0) {
                                                    lVar8 = *(long *)(lVar3 + 0x10);
                                                    lVar9 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                                  ;
                                                  *(int *)(lVar3 + 0x1c) =
                                                       *(int *)(lVar3 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar3 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                      plVar4 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar7;
                                                      thunk_FUN_02dd37b4(plVar4,lVar7);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar3,lVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar3;
                                                  thunk_FUN_02dd37b4((long *)(lVar6 + 0x28),lVar3);
                                                  lVar3 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar3 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar4 = (long *)(lVar3 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar6;
                                                      thunk_FUN_02dd37b4(plVar4,lVar6);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar6 = thunk_FUN_02d9d534(*unaff_x27);
                                                    FUN_05fc094c(lVar6,0);
                                                    puVar2 = 
                                                  Method_UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_GazeInputManager_OnDeviceConnected__
                                                  ;
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_ARSubsystems_XRRaycastSubsystemDescriptor_TypeInfo
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar6 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar6 + 0x20));
                                                  *(undefined4 *)(lVar6 + 0x18) = 0;
                                                  lVar3 = thunk_FUN_02d9d534(*unaff_x19);
                                                  FUN_03aabc60(lVar3,*unaff_x20);
                                                  if (lVar3 != 0) {
                                                    uVar5 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_UIElements_ColumnLayout_<DoLayout>b__49_1__
                                                  ;
                                                  lVar7 = *(long *)(lVar3 + 0x10);
                                                  lVar8 = *(long *)PTR_DAT_0675eb70;
                                                  *(int *)(lVar3 + 0x1c) =
                                                       *(int *)(lVar3 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar3 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5
                                                      ;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar3,uVar5,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x30) = lVar3;
                                                  thunk_FUN_02dd37b4((long *)(lVar6 + 0x30),lVar3);
                                                  lVar3 = thunk_FUN_02d9d534(*unaff_x28);
                                                  FUN_03aabc60(lVar3,*unaff_x26);
                                                  lVar7 = thunk_FUN_02d9d534(*unaff_x25);
                                                  FUN_05fc0944(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_GenericDropdownMenu_OnPointerMove__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x29;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar3 != 0) {
                                                    lVar8 = *(long *)(lVar3 + 0x10);
                                                    lVar9 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                                  ;
                                                  *(int *)(lVar3 + 0x1c) =
                                                       *(int *)(lVar3 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar3 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                      plVar4 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar7;
                                                      thunk_FUN_02dd37b4(plVar4,lVar7);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar3,lVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar3;
                                                  thunk_FUN_02dd37b4((long *)(lVar6 + 0x28),lVar3);
                                                  lVar3 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar3 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar4 = (long *)(lVar3 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar6;
                                                      thunk_FUN_02dd37b4(plVar4,lVar6);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar6 = thunk_FUN_02d9d534(*unaff_x27);
                                                    FUN_05fc094c(lVar6,0);
                                                    puVar2 = 
                                                  Method_UnityEngine_InputSystem_LowLevel_GamepadState__ctor__
                                                  ;
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_GenericDropdownMenu_OnFocusOut__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar6 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar6 + 0x20));
                                                  *(undefined4 *)(lVar6 + 0x18) = 0;
                                                  lVar3 = thunk_FUN_02d9d534(*unaff_x19);
                                                  FUN_03aabc60(lVar3,*unaff_x20);
                                                  if (lVar3 != 0) {
                                                    uVar5 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_UIElements_ColumnLayout_<DoLayout>b__49_0__
                                                  ;
                                                  lVar7 = *(long *)(lVar3 + 0x10);
                                                  lVar8 = *(long *)PTR_DAT_0675eb70;
                                                  *(int *)(lVar3 + 0x1c) =
                                                       *(int *)(lVar3 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar3 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5
                                                      ;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar3,uVar5,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x30) = lVar3;
                                                  thunk_FUN_02dd37b4((long *)(lVar6 + 0x30),lVar3);
                                                  lVar3 = thunk_FUN_02d9d534(*unaff_x28);
                                                  FUN_03aabc60(lVar3,*unaff_x26);
                                                  lVar7 = thunk_FUN_02d9d534(*unaff_x25);
                                                  FUN_05fc0944(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_GenericDropdownMenu_Apply__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x29;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar3 != 0) {
                                                    lVar8 = *(long *)(lVar3 + 0x10);
                                                    lVar9 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                                  ;
                                                  *(int *)(lVar3 + 0x1c) =
                                                       *(int *)(lVar3 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar3 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                      plVar4 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar7;
                                                      thunk_FUN_02dd37b4(plVar4,lVar7);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar3,lVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar3;
                                                  thunk_FUN_02dd37b4((long *)(lVar6 + 0x28),lVar3);
                                                  lVar3 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar3 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar4 = (long *)(lVar3 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar6;
                                                      thunk_FUN_02dd37b4(plVar4,lVar6);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar6 = thunk_FUN_02d9d534(*unaff_x27);
                                                    FUN_05fc094c(lVar6,0);
                                                    puVar2 = 
                                                  Method_UnityEngine_GameObject_GetComponent<ParticleSystem>__
                                                  ;
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponent<NavMeshAgent>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar6 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar6 + 0x20));
                                                  *(undefined4 *)(lVar6 + 0x18) = 3;
                                                  lVar3 = thunk_FUN_02d9d534(*unaff_x19);
                                                  FUN_03aabc60(lVar3,*unaff_x20);
                                                  if (lVar3 != 0) {
                                                    uVar5 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_GameObject_GetComponent<InputField>__
                                                  ;
                                                  lVar7 = *(long *)(lVar3 + 0x10);
                                                  lVar8 = *(long *)PTR_DAT_0675eb70;
                                                  *(int *)(lVar3 + 0x1c) =
                                                       *(int *)(lVar3 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar3 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5
                                                      ;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar3,uVar5,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x30) = lVar3;
                                                  thunk_FUN_02dd37b4((long *)(lVar6 + 0x30),lVar3);
                                                  lVar3 = thunk_FUN_02d9d534(*unaff_x28);
                                                  FUN_03aabc60(lVar3,*unaff_x26);
                                                  lVar7 = thunk_FUN_02d9d534(*unaff_x25);
                                                  FUN_05fc0944(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponent<Renderer>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x29;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar3 != 0) {
                                                    lVar8 = *(long *)(lVar3 + 0x10);
                                                    lVar9 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                                  ;
                                                  *(int *)(lVar3 + 0x1c) =
                                                       *(int *)(lVar3 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar3 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                      plVar4 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar7;
                                                      thunk_FUN_02dd37b4(plVar4,lVar7);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar3,lVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar3;
                                                  thunk_FUN_02dd37b4((long *)(lVar6 + 0x28),lVar3);
                                                  lVar3 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar3 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar4 = (long *)(lVar3 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar6;
                                                      thunk_FUN_02dd37b4(plVar4,lVar6);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar6 = thunk_FUN_02d9d534(*unaff_x27);
                                                    FUN_05fc094c(lVar6,0);
                                                    puVar2 = 
                                                  Method_UnityEngine_GameObject_GetComponent<MeshRenderer>__
                                                  ;
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_06779338;
                                                    thunk_FUN_02dd37b4();
                                                    *(undefined8 *)(lVar6 + 0x20) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_02dd37b4((undefined8 *)(lVar6 + 0x20))
                                                    ;
                                                    *(undefined4 *)(lVar6 + 0x18) = 3;
                                                    lVar3 = thunk_FUN_02d9d534(*unaff_x19);
                                                    FUN_03aabc60(lVar3,*unaff_x20);
                                                    if (lVar3 != 0) {
                                                      uVar5 = *(undefined8 *)
                                                                                                                              
                                                  Newtonsoft_Json_Linq_JToken_LineInfoAnnotation_TypeInfo
                                                  ;
                                                  lVar7 = *(long *)(lVar3 + 0x10);
                                                  lVar8 = *(long *)PTR_DAT_0675eb70;
                                                  *(int *)(lVar3 + 0x1c) =
                                                       *(int *)(lVar3 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar3 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5
                                                      ;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar3,uVar5,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x30) = lVar3;
                                                  thunk_FUN_02dd37b4((long *)(lVar6 + 0x30),lVar3);
                                                  lVar3 = thunk_FUN_02d9d534(*unaff_x28);
                                                  FUN_03aabc60(lVar3,*unaff_x26);
                                                  lVar7 = thunk_FUN_02d9d534(*unaff_x25);
                                                  FUN_05fc0944(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponent<OVRManager>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x29;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar3 != 0) {
                                                    lVar8 = *(long *)(lVar3 + 0x10);
                                                    lVar9 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                                  ;
                                                  *(int *)(lVar3 + 0x1c) =
                                                       *(int *)(lVar3 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar3 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                      plVar4 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar7;
                                                      thunk_FUN_02dd37b4(plVar4,lVar7);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar3,lVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar3;
                                                  thunk_FUN_02dd37b4((long *)(lVar6 + 0x28),lVar3);
                                                  lVar3 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar3 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar4 = (long *)(lVar3 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar6;
                                                      thunk_FUN_02dd37b4(plVar4,lVar6);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar6 = thunk_FUN_02d9d534(*unaff_x27);
                                                    FUN_05fc094c(lVar6,0);
                                                    puVar2 = 
                                                  Method_UnityEngine_GameObject_TryGetComponent<CanvasTracker>__
                                                  ;
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_TryGetComponent<RectTransform>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar6 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar6 + 0x20));
                                                  *(undefined4 *)(lVar6 + 0x18) = 4;
                                                  lVar3 = thunk_FUN_02d9d534(*unaff_x19);
                                                  FUN_03aabc60(lVar3,*unaff_x20);
                                                  if (lVar3 != 0) {
                                                    uVar5 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Linq_Enumerable_Count<ARAnchor>__;
                                                  lVar7 = *(long *)(lVar3 + 0x10);
                                                  lVar8 = *(long *)PTR_DAT_0675eb70;
                                                  *(int *)(lVar3 + 0x1c) =
                                                       *(int *)(lVar3 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar3 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5
                                                      ;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar3,uVar5,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x30) = lVar3;
                                                  thunk_FUN_02dd37b4((long *)(lVar6 + 0x30),lVar3);
                                                  lVar3 = thunk_FUN_02d9d534(*unaff_x28);
                                                  FUN_03aabc60(lVar3,*unaff_x26);
                                                  lVar7 = thunk_FUN_02d9d534(*unaff_x25);
                                                  FUN_05fc0944(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponentsInParent<OVRSkeleton_IOVRSkeletonDataProvider>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x29;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar3 != 0) {
                                                    lVar8 = *(long *)(lVar3 + 0x10);
                                                    lVar9 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                                  ;
                                                  *(int *)(lVar3 + 0x1c) =
                                                       *(int *)(lVar3 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar3 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                      plVar4 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar7;
                                                      thunk_FUN_02dd37b4(plVar4,lVar7);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar3,lVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar3;
                                                  thunk_FUN_02dd37b4((long *)(lVar6 + 0x28),lVar3);
                                                  lVar3 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar3 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar4 = (long *)(lVar3 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar6;
                                                      thunk_FUN_02dd37b4(plVar4,lVar6);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    *(long *)(in_stack_00000008 + 0x28) = unaff_x21;
                                                    thunk_FUN_02dd37b4();
                                                    FUN_05fc0710(in_stack_00000000,in_stack_00000008
                                                                 ,0);
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
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


