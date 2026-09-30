/*
FUNCTION_NAME: UnityEngine.Internal.InputUnsafeUtility$$GetKeyUpString__Unmanaged
ENTRY_POINT: 05fe0a7c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 135
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_6;validity_or_gating_hits_21;ray_or_cast_sink_hits_21;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_3
*/


void UnityEngine_Internal_InputUnsafeUtility__GetKeyUpString__Unmanaged(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  int in_w10;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x25;
  undefined8 *unaff_x26;
  long unaff_x28;
  
  *(int *)(unaff_x21 + 0x1c) = in_w10 + 1;
  puVar3 = Method_UnityEngine_GameObject_AddComponent<GizmoRendererManager>__;
  puVar2 = Method_UnityEngine_GameObject_AddComponent<EventSystem>__;
  if (param_1 != 0) {
    uVar1 = *(uint *)(unaff_x21 + 0x18);
    if (uVar1 < *(uint *)(param_1 + 0x18)) {
                    /* try { // try from 05fe0ab0 to 060e0ab3 has its CatchHandler @ 05fe0af8 */
      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                    /* try { // try from 05fe0ab4 to 060e0ab7 has its CatchHandler @ 05fe0aec */
      *(undefined8 *)(param_1 + (long)(int)uVar1 * 8 + 0x20) = unaff_x22;
                    /* try { // try from 05fe0ab8 to 060e0abb has its CatchHandler @ 05fe045c */
                    /* try { // try from 05fe0abc to 060e0abf has its CatchHandler @ 05fe0acc */
      thunk_FUN_02dd37b4();
    }
    else {
      FUN_03aac494();
    }
    *(long *)(unaff_x28 + 0x20) = unaff_x21;
    thunk_FUN_02dd37b4();
    lVar9 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
    FUN_03aabc60(lVar9,*(undefined8 *)puVar2);
    lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                 Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__);
    FUN_05fc094c(lVar10,0);
    puVar4 = 
    Method_UnityEngine_XR_Interaction_Toolkit_Locomotion_Climbing_ClimbTeleportInteractor_OnClimbBegin__
    ;
    puVar3 = PTR_DAT_0675eb68;
    puVar2 = PTR_DAT_0675eb60;
    if (lVar10 != 0) {
      *(undefined8 *)(lVar10 + 0x10) = *(undefined8 *)PTR_DAT_06786500;
      thunk_FUN_02dd37b4();
      *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)puVar4;
      thunk_FUN_02dd37b4((undefined8 *)(lVar10 + 0x20));
      *(undefined4 *)(lVar10 + 0x18) = 2;
      lVar11 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
      FUN_03aabc60(lVar11,*(undefined8 *)puVar3);
      puVar4 = PTR_DAT_0675eb70;
      if (lVar11 != 0) {
        uVar13 = *(undefined8 *)
                  Method_Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_Start__;
        lVar14 = *(long *)(lVar11 + 0x10);
        lVar15 = *(long *)PTR_DAT_0675eb70;
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        puVar6 = Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__;
        if (lVar14 != 0) {
          uVar1 = *(uint *)(lVar11 + 0x18);
          if (uVar1 < *(uint *)(lVar14 + 0x18)) {
            *(uint *)(lVar11 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20) = uVar13;
            thunk_FUN_02dd37b4();
          }
          else {
            FUN_03aac494(lVar11,uVar13,
                         *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
          }
          *(long *)(lVar10 + 0x30) = lVar11;
          thunk_FUN_02dd37b4((long *)(lVar10 + 0x30),lVar11);
          lVar11 = thunk_FUN_02d9d534(*(undefined8 *)
                                       Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                     );
          FUN_03aabc60(lVar11,*(undefined8 *)
                               Method_UnityEngine_GameObject_AddComponent<FixedJoint>__);
          lVar14 = thunk_FUN_02d9d534(*(undefined8 *)puVar6);
          FUN_05fc0944(lVar14,0);
          if (lVar14 != 0) {
            *(undefined8 *)(lVar14 + 0x18) =
                 *(undefined8 *)Method_UnityEngine_GameObject_TryGetComponent<Canvas>__;
            thunk_FUN_02dd37b4();
            *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
            thunk_FUN_02dd37b4();
            puVar7 = Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__;
            if (lVar11 != 0) {
              lVar15 = *(long *)(lVar11 + 0x10);
              lVar16 = *(long *)Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__;
              *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
              if (lVar15 != 0) {
                uVar1 = *(uint *)(lVar11 + 0x18);
                if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                  *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                  plVar12 = (long *)(lVar15 + (long)(int)uVar1 * 8 + 0x20);
                  *plVar12 = lVar14;
                  thunk_FUN_02dd37b4(plVar12,lVar14);
                }
                else {
                  FUN_03aac494(lVar11,lVar14,
                               *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                }
                *(long *)(lVar10 + 0x28) = lVar11;
                thunk_FUN_02dd37b4((long *)(lVar10 + 0x28),lVar11);
                if (lVar9 != 0) {
                  lVar11 = *(long *)(lVar9 + 0x10);
                  lVar14 = *(long *)
                            Method_UnityEngine_GameObject_AddComponent<DisposableManagerSingleton>__
                  ;
                  *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                  if (lVar11 != 0) {
                    uVar1 = *(uint *)(lVar9 + 0x18);
                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                      plVar12 = (long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
                      *plVar12 = lVar10;
                      thunk_FUN_02dd37b4(plVar12,lVar10);
                    }
                    else {
                      FUN_03aac494(lVar9,lVar10,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                    }
                    lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                 Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                               );
                    FUN_05fc094c(lVar10,0);
                    puVar5 = PTR_DAT_06762058;
                    if (lVar10 != 0) {
                      *(undefined8 *)(lVar10 + 0x10) =
                           *(undefined8 *)
                            UnityEngine_XR_Interaction_Toolkit_Filtering_XRPokeLogic_TypeInfo;
                      thunk_FUN_02dd37b4();
                      *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)puVar5;
                      thunk_FUN_02dd37b4((undefined8 *)(lVar10 + 0x20));
                      *(undefined4 *)(lVar10 + 0x18) = 1;
                      lVar11 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
                      FUN_03aabc60(lVar11,*(undefined8 *)puVar3);
                      if (lVar11 != 0) {
                        uVar13 = *(undefined8 *)puVar5;
                        lVar14 = *(long *)(lVar11 + 0x10);
                        lVar15 = *(long *)puVar4;
                        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                        if (lVar14 != 0) {
                          uVar1 = *(uint *)(lVar11 + 0x18);
                          if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                            *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                            *(undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20) = uVar13;
                            thunk_FUN_02dd37b4();
                          }
                          else {
                            FUN_03aac494(lVar11,uVar13,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
                          }
                          *(long *)(lVar10 + 0x30) = lVar11;
                          thunk_FUN_02dd37b4((long *)(lVar10 + 0x30),lVar11);
                          lVar11 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                          FUN_03aabc60(lVar11,*(undefined8 *)
                                               Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                      );
                          lVar14 = thunk_FUN_02d9d534(*(undefined8 *)puVar6);
                          FUN_05fc0944(lVar14,0);
                          puVar5 = 
                          Method_UnityEngine_GameObject_GetComponentsInChildren<Transform>__;
                          if (lVar14 != 0) {
                            *(undefined8 *)(lVar14 + 0x18) =
                                 *(undefined8 *)
                                  Method_UnityEngine_GameObject_GetComponentsInChildren<Transform>__
                            ;
                            thunk_FUN_02dd37b4();
                            *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                            thunk_FUN_02dd37b4();
                            if (lVar11 != 0) {
                              lVar15 = *(long *)(lVar11 + 0x10);
                              lVar16 = *(long *)puVar7;
                              *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                              if (lVar15 != 0) {
                                uVar1 = *(uint *)(lVar11 + 0x18);
                                if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                  *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                  plVar12 = (long *)(lVar15 + (long)(int)uVar1 * 8 + 0x20);
                                  *plVar12 = lVar14;
                                  thunk_FUN_02dd37b4(plVar12,lVar14);
                                }
                                else {
                                  FUN_03aac494(lVar11,lVar14,
                                               *(undefined8 *)
                                                (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70))
                                  ;
                                }
                                *(long *)(lVar10 + 0x28) = lVar11;
                                thunk_FUN_02dd37b4((long *)(lVar10 + 0x28),lVar11);
                                lVar11 = *(long *)(lVar9 + 0x10);
                                lVar14 = *(long *)
                                          Method_UnityEngine_GameObject_AddComponent<DisposableManagerSingleton>__
                                ;
                                *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                                if (lVar11 != 0) {
                                  uVar1 = *(uint *)(lVar9 + 0x18);
                                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                    *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                    plVar12 = (long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
                                    *plVar12 = lVar10;
                                    thunk_FUN_02dd37b4(plVar12,lVar10);
                                  }
                                  else {
                                    FUN_03aac494(lVar9,lVar10,
                                                 *(undefined8 *)
                                                  (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70
                                                  ));
                                  }
                                  lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                  FUN_05fc094c(lVar10,0);
                                  puVar8 = Method_UnityEngine_GameObject_TryGetComponent<Collider>__
                                  ;
                                  if (lVar10 != 0) {
                                    *(undefined8 *)(lVar10 + 0x10) =
                                         *(undefined8 *)
                                          UnityEngine_XR_ARSubsystems_XRPointCloudData_TypeInfo;
                                    thunk_FUN_02dd37b4();
                                    *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)puVar8;
                                    thunk_FUN_02dd37b4((undefined8 *)(lVar10 + 0x20));
                                    *(undefined4 *)(lVar10 + 0x18) = 0;
                                    lVar11 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
                                    FUN_03aabc60(lVar11,*(undefined8 *)puVar3);
                                    if (lVar11 != 0) {
                                      lVar15 = *(long *)puVar4;
                                      uVar13 = *(undefined8 *)Method_UnityEngine_Color32_get_Item__;
                                      lVar14 = *(long *)(lVar11 + 0x10);
                                      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                                      if (lVar14 != 0) {
                                        uVar1 = *(uint *)(lVar11 + 0x18);
                                        if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                          *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                          *(undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                               uVar13;
                                          thunk_FUN_02dd37b4();
                                        }
                                        else {
                                          FUN_03aac494(lVar11,uVar13,
                                                       *(undefined8 *)
                                                        (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0)
                                                        + 0x70));
                                        }
                                        *(long *)(lVar10 + 0x30) = lVar11;
                                        thunk_FUN_02dd37b4((long *)(lVar10 + 0x30),lVar11);
                                        lVar11 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                          
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                        FUN_03aabc60(lVar11,*(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                        lVar14 = thunk_FUN_02d9d534(*(undefined8 *)puVar6);
                                        FUN_05fc0944(lVar14,0);
                                        if (lVar14 != 0) {
                                          *(undefined8 *)(lVar14 + 0x18) = *(undefined8 *)puVar5;
                                          thunk_FUN_02dd37b4();
                                          *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                          thunk_FUN_02dd37b4();
                                          if (lVar11 != 0) {
                                            lVar15 = *(long *)(lVar11 + 0x10);
                                            lVar16 = *(long *)puVar7;
                                            *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                                            if (lVar15 != 0) {
                                              uVar1 = *(uint *)(lVar11 + 0x18);
                                              if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                plVar12 = (long *)(lVar15 + (long)(int)uVar1 * 8 +
                                                                  0x20);
                                                *plVar12 = lVar14;
                                                thunk_FUN_02dd37b4(plVar12,lVar14);
                                              }
                                              else {
                                                FUN_03aac494(lVar11,lVar14,
                                                             *(undefined8 *)
                                                              (*(long *)(*(long *)(lVar16 + 0x20) +
                                                                        0xc0) + 0x70));
                                              }
                                              *(long *)(lVar10 + 0x28) = lVar11;
                                              thunk_FUN_02dd37b4((long *)(lVar10 + 0x28),lVar11);
                                              lVar11 = *(long *)(lVar9 + 0x10);
                                              lVar14 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DisposableManagerSingleton>__
                                              ;
                                              *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                                              if (lVar11 != 0) {
                                                uVar1 = *(uint *)(lVar9 + 0x18);
                                                if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                  *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                  plVar12 = (long *)(lVar11 + (long)(int)uVar1 * 8 +
                                                                    0x20);
                                                  *plVar12 = lVar10;
                                                  thunk_FUN_02dd37b4(plVar12,lVar10);
                                                }
                                                else {
                                                  FUN_03aac494(lVar9,lVar10,
                                                               *(undefined8 *)
                                                                (*(long *)(*(long *)(lVar14 + 0x20)
                                                                          + 0xc0) + 0x70));
                                                }
                                                lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                          
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                FUN_05fc094c(lVar10,0);
                                                puVar5 = PTR_DAT_06761180;
                                                if (lVar10 != 0) {
                                                  *(undefined8 *)(lVar10 + 0x10) =
                                                       *(undefined8 *)PTR_DAT_0676a290;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar10 + 0x20) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar10 + 0x20));
                                                  *(undefined4 *)(lVar10 + 0x18) = 0;
                                                  lVar11 = thunk_FUN_02d9d534(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03aabc60(lVar11,*(undefined8 *)puVar3);
                                                  if (lVar11 != 0) {
                                                    lVar15 = *(long *)puVar4;
                                                    uVar13 = *(undefined8 *)
                                                                                                                            
                                                  Method_VRUIP_ColorPickerController_OnSliderValueChanged__
                                                  ;
                                                  lVar14 = *(long *)(lVar11 + 0x10);
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar13;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar11,uVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar11;
                                                  thunk_FUN_02dd37b4((long *)(lVar10 + 0x30),lVar11)
                                                  ;
                                                  lVar11 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar11,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar14 = thunk_FUN_02d9d534(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05fc0944(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponentsInChildren<ParticleSystem>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dd37b4();
                                                  lVar15 = thunk_FUN_02d9d534(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03aabc60(lVar15,*(undefined8 *)puVar3);
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)puVar4;
                                                    uVar13 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<OpenXRRestarter>__
                                                  ;
                                                  lVar16 = *(long *)(lVar15 + 0x10);
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar13;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar15,uVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar14 + 0x20) = lVar15;
                                                  thunk_FUN_02dd37b4((long *)(lVar14 + 0x20),lVar15)
                                                  ;
                                                  if (lVar11 != 0) {
                                                    lVar15 = *(long *)(lVar11 + 0x10);
                                                    lVar16 = *(long *)puVar7;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar11 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                        plVar12 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar12 = lVar14;
                                                        thunk_FUN_02dd37b4(plVar12,lVar14);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar11,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar14 = thunk_FUN_02d9d534(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05fc0944(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_GazeInputManager_OnDeviceChange__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dd37b4();
                                                  lVar15 = thunk_FUN_02d9d534(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03aabc60(lVar15,*(undefined8 *)puVar3);
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)puVar4;
                                                    uVar13 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<MeshCollider>__
                                                  ;
                                                  lVar16 = *(long *)(lVar15 + 0x10);
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar13;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar15,uVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar14 + 0x20) = lVar15;
                                                  thunk_FUN_02dd37b4((long *)(lVar14 + 0x20),lVar15)
                                                  ;
                                                  lVar15 = *(long *)(lVar11 + 0x10);
                                                  lVar16 = *(long *)puVar7;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar14;
                                                      thunk_FUN_02dd37b4(plVar12,lVar14);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar11,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar11;
                                                  thunk_FUN_02dd37b4((long *)(lVar10 + 0x28),lVar11)
                                                  ;
                                                  lVar11 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DisposableManagerSingleton>__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar11 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar10;
                                                      thunk_FUN_02dd37b4(plVar12,lVar10);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar10,0);
                                                  puVar5 = 
                                                  Method_UnityEngine_GameObject_TryGetComponent<DebugUIHandlerColor>__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_ARSubsystems_XRReferenceImageLibrary_TypeInfo
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar10 + 0x20) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar10 + 0x20));
                                                  *(undefined4 *)(lVar10 + 0x18) = 0;
                                                  lVar11 = thunk_FUN_02d9d534(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03aabc60(lVar11,*(undefined8 *)puVar3);
                                                  if (lVar11 != 0) {
                                                    lVar15 = *(long *)puVar4;
                                                    uVar13 = *(undefined8 *)
                                                              Method_UnityEngine_Color_set_Item__;
                                                    lVar14 = *(long *)(lVar11 + 0x10);
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar14 != 0) {
                                                      uVar1 = *(uint *)(lVar11 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                        *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar13;
                                                        thunk_FUN_02dd37b4();
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar11,uVar13,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar11;
                                                  thunk_FUN_02dd37b4((long *)(lVar10 + 0x30),lVar11)
                                                  ;
                                                  lVar11 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar11,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar14 = thunk_FUN_02d9d534(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05fc0944(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_TryGetComponent<PlayableDirector>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dd37b4();
                                                  lVar15 = thunk_FUN_02d9d534(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03aabc60(lVar15,*(undefined8 *)puVar3);
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)puVar4;
                                                    uVar13 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<OpenXRRestarter>__
                                                  ;
                                                  lVar16 = *(long *)(lVar15 + 0x10);
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar13;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar15,uVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar14 + 0x20) = lVar15;
                                                  thunk_FUN_02dd37b4((long *)(lVar14 + 0x20),lVar15)
                                                  ;
                                                  if (lVar11 != 0) {
                                                    lVar15 = *(long *)(lVar11 + 0x10);
                                                    lVar16 = *(long *)puVar7;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar11 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                        plVar12 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar12 = lVar14;
                                                        thunk_FUN_02dd37b4(plVar12,lVar14);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar11,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar14 = thunk_FUN_02d9d534(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05fc0944(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_TryGetComponent<GraphicRaycaster>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dd37b4();
                                                  lVar15 = thunk_FUN_02d9d534(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03aabc60(lVar15,*(undefined8 *)puVar3);
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)puVar4;
                                                    uVar13 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<MeshCollider>__
                                                  ;
                                                  lVar16 = *(long *)(lVar15 + 0x10);
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar13;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar15,uVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar14 + 0x20) = lVar15;
                                                  thunk_FUN_02dd37b4((long *)(lVar14 + 0x20),lVar15)
                                                  ;
                                                  lVar15 = *(long *)(lVar11 + 0x10);
                                                  lVar16 = *(long *)puVar7;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar14;
                                                      thunk_FUN_02dd37b4(plVar12,lVar14);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar11,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar11;
                                                  thunk_FUN_02dd37b4((long *)(lVar10 + 0x28),lVar11)
                                                  ;
                                                  lVar11 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DisposableManagerSingleton>__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar11 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar10;
                                                      thunk_FUN_02dd37b4(plVar12,lVar10);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar10,0);
                                                  puVar5 = 
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_HasElementTypeImpl__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Filtering_XRTargetFilter_TypeInfo
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar10 + 0x20) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar10 + 0x20));
                                                  *(undefined4 *)(lVar10 + 0x18) = 0;
                                                  lVar11 = thunk_FUN_02d9d534(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03aabc60(lVar11,*(undefined8 *)puVar3);
                                                  if (lVar11 != 0) {
                                                    lVar15 = *(long *)puVar4;
                                                    uVar13 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_UIElements_ColumnLayout_<RecomputeToMinWidthProportionally>b__54_0__
                                                  ;
                                                  lVar14 = *(long *)(lVar11 + 0x10);
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar13;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar11,uVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar11;
                                                  thunk_FUN_02dd37b4((long *)(lVar10 + 0x30),lVar11)
                                                  ;
                                                  lVar11 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar11,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar14 = thunk_FUN_02d9d534(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05fc0944(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_IsDefined__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dd37b4();
                                                  lVar15 = thunk_FUN_02d9d534(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03aabc60(lVar15,*(undefined8 *)puVar3);
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)puVar4;
                                                    uVar13 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<OpenXRRestarter>__
                                                  ;
                                                  lVar16 = *(long *)(lVar15 + 0x10);
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar13;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar15,uVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar14 + 0x20) = lVar15;
                                                  thunk_FUN_02dd37b4((long *)(lVar14 + 0x20),lVar15)
                                                  ;
                                                  if (lVar11 != 0) {
                                                    lVar15 = *(long *)(lVar11 + 0x10);
                                                    lVar16 = *(long *)puVar7;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar11 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                        plVar12 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar12 = lVar14;
                                                        thunk_FUN_02dd37b4(plVar12,lVar14);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar11,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar14 = thunk_FUN_02d9d534(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05fc0944(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                          Method_Firebase_Firestore_GeoPoint__ctor__
                                                    ;
                                                    thunk_FUN_02dd37b4();
                                                    *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                    thunk_FUN_02dd37b4();
                                                    lVar15 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                 puVar2);
                                                    FUN_03aabc60(lVar15,*(undefined8 *)puVar3);
                                                    if (lVar15 != 0) {
                                                      lVar17 = *(long *)puVar4;
                                                      uVar13 = *(undefined8 *)
                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<MeshCollider>__
                                                  ;
                                                  lVar16 = *(long *)(lVar15 + 0x10);
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar13;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar15,uVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar14 + 0x20) = lVar15;
                                                  thunk_FUN_02dd37b4((long *)(lVar14 + 0x20),lVar15)
                                                  ;
                                                  lVar15 = *(long *)(lVar11 + 0x10);
                                                  lVar16 = *(long *)puVar7;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar14;
                                                      thunk_FUN_02dd37b4(plVar12,lVar14);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar11,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar11;
                                                  thunk_FUN_02dd37b4((long *)(lVar10 + 0x28),lVar11)
                                                  ;
                                                  lVar11 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DisposableManagerSingleton>__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar11 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar10;
                                                      thunk_FUN_02dd37b4(plVar12,lVar10);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar10,0);
                                                  puVar5 = 
                                                  Method_UnityEngine_GameObject_TryGetComponent<CharacterController>__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_ARSubsystems_XRReferenceObject_TypeInfo
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar10 + 0x20) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar10 + 0x20));
                                                  *(undefined4 *)(lVar10 + 0x18) = 0;
                                                  lVar11 = thunk_FUN_02d9d534(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03aabc60(lVar11,*(undefined8 *)puVar3);
                                                  if (lVar11 != 0) {
                                                    lVar15 = *(long *)puVar4;
                                                    uVar13 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_UIElements_ColumnLayout_<RecomputeToMaxWidthProportionally>b__53_0__
                                                  ;
                                                  lVar14 = *(long *)(lVar11 + 0x10);
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar13;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar11,uVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar11;
                                                  thunk_FUN_02dd37b4((long *)(lVar10 + 0x30),lVar11)
                                                  ;
                                                  lVar11 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar11,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar14 = thunk_FUN_02d9d534(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05fc0944(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_TryGetComponent<LineRenderer>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dd37b4();
                                                  lVar15 = thunk_FUN_02d9d534(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03aabc60(lVar15,*(undefined8 *)puVar3);
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)puVar4;
                                                    uVar13 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<OpenXRRestarter>__
                                                  ;
                                                  lVar16 = *(long *)(lVar15 + 0x10);
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar13;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar15,uVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar14 + 0x20) = lVar15;
                                                  thunk_FUN_02dd37b4((long *)(lVar14 + 0x20),lVar15)
                                                  ;
                                                  if (lVar11 != 0) {
                                                    lVar15 = *(long *)(lVar11 + 0x10);
                                                    lVar16 = *(long *)puVar7;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar11 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                        plVar12 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar12 = lVar14;
                                                        thunk_FUN_02dd37b4(plVar12,lVar14);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar11,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar14 = thunk_FUN_02d9d534(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05fc0944(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_TryGetComponent<DebugUIHandlerObjectList>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dd37b4();
                                                  lVar15 = thunk_FUN_02d9d534(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03aabc60(lVar15,*(undefined8 *)puVar3);
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)puVar4;
                                                    uVar13 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<MeshCollider>__
                                                  ;
                                                  lVar16 = *(long *)(lVar15 + 0x10);
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar13;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar15,uVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar14 + 0x20) = lVar15;
                                                  thunk_FUN_02dd37b4((long *)(lVar14 + 0x20),lVar15)
                                                  ;
                                                  lVar15 = *(long *)(lVar11 + 0x10);
                                                  lVar16 = *(long *)puVar7;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar14;
                                                      thunk_FUN_02dd37b4(plVar12,lVar14);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar11,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar11;
                                                  thunk_FUN_02dd37b4((long *)(lVar10 + 0x28),lVar11)
                                                  ;
                                                  lVar11 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DisposableManagerSingleton>__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar11 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar10;
                                                      thunk_FUN_02dd37b4(plVar12,lVar10);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar10,0);
                                                  puVar5 = 
                                                  Method_Firebase_Firestore_GeoPointProxy_swigRelease__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Filtering_XRTargetEvaluator_TypeInfo
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar10 + 0x20) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar10 + 0x20));
                                                  *(undefined4 *)(lVar10 + 0x18) = 0;
                                                  lVar11 = thunk_FUN_02d9d534(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03aabc60(lVar11,*(undefined8 *)puVar3);
                                                  if (lVar11 != 0) {
                                                    lVar15 = *(long *)puVar4;
                                                    uVar13 = *(undefined8 *)
                                                                                                                            
                                                  Method_Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_OnSessionDiscoveredWithSpatialAnchor__
                                                  ;
                                                  lVar14 = *(long *)(lVar11 + 0x10);
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar13;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar11,uVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar11;
                                                  thunk_FUN_02dd37b4((long *)(lVar10 + 0x30),lVar11)
                                                  ;
                                                  lVar11 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar11,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar14 = thunk_FUN_02d9d534(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05fc0944(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_BaseType__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dd37b4();
                                                  lVar15 = thunk_FUN_02d9d534(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03aabc60(lVar15,*(undefined8 *)puVar3);
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)puVar4;
                                                    uVar13 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<OpenXRRestarter>__
                                                  ;
                                                  lVar16 = *(long *)(lVar15 + 0x10);
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar13;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar15,uVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar14 + 0x20) = lVar15;
                                                  thunk_FUN_02dd37b4((long *)(lVar14 + 0x20),lVar15)
                                                  ;
                                                  if (lVar11 != 0) {
                                                    lVar15 = *(long *)(lVar11 + 0x10);
                                                    lVar16 = *(long *)puVar7;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar11 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                        plVar12 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar12 = lVar14;
                                                        thunk_FUN_02dd37b4(plVar12,lVar14);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar11,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar14 = thunk_FUN_02d9d534(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05fc0944(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Firebase_Firestore_GeoPointProxy_longitude__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dd37b4();
                                                  lVar15 = thunk_FUN_02d9d534(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03aabc60(lVar15,*(undefined8 *)puVar3);
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)puVar4;
                                                    uVar13 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<MeshCollider>__
                                                  ;
                                                  lVar16 = *(long *)(lVar15 + 0x10);
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar13;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar15,uVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar14 + 0x20) = lVar15;
                                                  thunk_FUN_02dd37b4((long *)(lVar14 + 0x20),lVar15)
                                                  ;
                                                  lVar15 = *(long *)(lVar11 + 0x10);
                                                  lVar16 = *(long *)puVar7;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar14;
                                                      thunk_FUN_02dd37b4(plVar12,lVar14);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar11,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar11;
                                                  thunk_FUN_02dd37b4((long *)(lVar10 + 0x28),lVar11)
                                                  ;
                                                  lVar11 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DisposableManagerSingleton>__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar11 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar10;
                                                      thunk_FUN_02dd37b4(plVar12,lVar10);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar10,0);
                                                  puVar5 = PTR_DAT_06762060;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_0676c270;
                                                    thunk_FUN_02dd37b4();
                                                    *(undefined8 *)(lVar10 + 0x20) =
                                                         *(undefined8 *)puVar5;
                                                    thunk_FUN_02dd37b4((undefined8 *)(lVar10 + 0x20)
                                                                      );
                                                    *(undefined4 *)(lVar10 + 0x18) = 1;
                                                    lVar11 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                 puVar2);
                                                    FUN_03aabc60(lVar11,*(undefined8 *)puVar3);
                                                    if (lVar11 != 0) {
                                                      uVar13 = *(undefined8 *)puVar5;
                                                      lVar14 = *(long *)(lVar11 + 0x10);
                                                      lVar15 = *(long *)puVar4;
                                                      *(int *)(lVar11 + 0x1c) =
                                                           *(int *)(lVar11 + 0x1c) + 1;
                                                      if (lVar14 != 0) {
                                                        uVar1 = *(uint *)(lVar11 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                          *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                          *(undefined8 *)
                                                           (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                               uVar13;
                                                          thunk_FUN_02dd37b4();
                                                        }
                                                        else {
                                                          FUN_03aac494(lVar11,uVar13,
                                                                       *(undefined8 *)
                                                                        (*(long *)(*(long *)(lVar15 
                                                  + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar11;
                                                  thunk_FUN_02dd37b4((long *)(lVar10 + 0x30),lVar11)
                                                  ;
                                                  lVar11 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar11,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar14 = thunk_FUN_02d9d534(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05fc0944(lVar14,0);
                                                  puVar5 = 
                                                  Method_UnityEngine_GameObject_TryGetComponent<JointVisualizer>__
                                                  ;
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_TryGetComponent<JointVisualizer>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar11 != 0) {
                                                    lVar15 = *(long *)(lVar11 + 0x10);
                                                    lVar16 = *(long *)puVar7;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar11 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                        plVar12 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar12 = lVar14;
                                                        thunk_FUN_02dd37b4(plVar12,lVar14);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar11,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar11;
                                                  thunk_FUN_02dd37b4((long *)(lVar10 + 0x28),lVar11)
                                                  ;
                                                  lVar11 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DisposableManagerSingleton>__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar11 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar10;
                                                      thunk_FUN_02dd37b4(plVar12,lVar10);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar10,0);
                                                  puVar8 = 
                                                  Method_UnityEngine_GameObject_TryGetComponent<Renderer>__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_ARSubsystems_XRRaycast_TypeInfo;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar10 + 0x20) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar10 + 0x20));
                                                  *(undefined4 *)(lVar10 + 0x18) = 0;
                                                  lVar11 = thunk_FUN_02d9d534(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03aabc60(lVar11,*(undefined8 *)puVar3);
                                                  if (lVar11 != 0) {
                                                    lVar15 = *(long *)puVar4;
                                                    uVar13 = *(undefined8 *)
                                                              Method_UnityEngine_Color_get_Item__;
                                                    lVar14 = *(long *)(lVar11 + 0x10);
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar14 != 0) {
                                                      uVar1 = *(uint *)(lVar11 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                        *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar13;
                                                        thunk_FUN_02dd37b4();
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar11,uVar13,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar11;
                                                  thunk_FUN_02dd37b4((long *)(lVar10 + 0x30),lVar11)
                                                  ;
                                                  lVar11 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar11,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar14 = thunk_FUN_02d9d534(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05fc0944(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)puVar5;
                                                    thunk_FUN_02dd37b4();
                                                    *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                    thunk_FUN_02dd37b4();
                                                    if (lVar11 != 0) {
                                                      lVar15 = *(long *)(lVar11 + 0x10);
                                                      lVar16 = *(long *)puVar7;
                                                      *(int *)(lVar11 + 0x1c) =
                                                           *(int *)(lVar11 + 0x1c) + 1;
                                                      if (lVar15 != 0) {
                                                        uVar1 = *(uint *)(lVar11 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                          *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                          plVar12 = (long *)(lVar15 + (long)(int)
                                                  uVar1 * 8 + 0x20);
                                                  *plVar12 = lVar14;
                                                  thunk_FUN_02dd37b4(plVar12,lVar14);
                                                  }
                                                  else {
                                                    FUN_03aac494(lVar11,lVar14,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar16 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar11;
                                                  thunk_FUN_02dd37b4((long *)(lVar10 + 0x28),lVar11)
                                                  ;
                                                  lVar11 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DisposableManagerSingleton>__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar11 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar10;
                                                      thunk_FUN_02dd37b4(plVar12,lVar10);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar10,0);
                                                  puVar5 = 
                                                  Method_Unity_VisualScripting_GetListItem_Get__;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar10 + 0x20) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar10 + 0x20));
                                                  *(undefined4 *)(lVar10 + 0x18) = 0;
                                                  lVar11 = thunk_FUN_02d9d534(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03aabc60(lVar11,*(undefined8 *)puVar3);
                                                  if (lVar11 != 0) {
                                                    lVar15 = *(long *)puVar4;
                                                    uVar13 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethods__
                                                  ;
                                                  lVar14 = *(long *)(lVar11 + 0x10);
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar13;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar11,uVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar11;
                                                  thunk_FUN_02dd37b4((long *)(lVar10 + 0x30),lVar11)
                                                  ;
                                                  lVar11 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar11,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar14 = thunk_FUN_02d9d534(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05fc0944(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetNestedType__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar11 != 0) {
                                                    lVar15 = *(long *)(lVar11 + 0x10);
                                                    lVar16 = *(long *)puVar7;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar11 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                        plVar12 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar12 = lVar14;
                                                        thunk_FUN_02dd37b4(plVar12,lVar14);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar11,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar11;
                                                  thunk_FUN_02dd37b4((long *)(lVar10 + 0x28),lVar11)
                                                  ;
                                                  lVar11 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DisposableManagerSingleton>__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar11 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar10;
                                                      thunk_FUN_02dd37b4(plVar12,lVar10);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar10,0);
                                                  puVar5 = 
                                                  Method_UnityEngine_GameObject_GetComponentsInParent<Canvas>__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_XRScreenSpaceController_TypeInfo
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar10 + 0x20) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar10 + 0x20));
                                                  *(undefined4 *)(lVar10 + 0x18) = 0;
                                                  lVar11 = thunk_FUN_02d9d534(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03aabc60(lVar11,*(undefined8 *)puVar3);
                                                  if (lVar11 != 0) {
                                                    lVar15 = *(long *)puVar4;
                                                    uVar13 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_UIElements_ColumnLayout_<DoLayout>b__49_0__
                                                  ;
                                                  lVar14 = *(long *)(lVar11 + 0x10);
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar13;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar11,uVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar11;
                                                  thunk_FUN_02dd37b4((long *)(lVar10 + 0x30),lVar11)
                                                  ;
                                                  lVar11 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar11,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar14 = thunk_FUN_02d9d534(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05fc0944(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponentsInParent<RectMask2D>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar11 != 0) {
                                                    lVar15 = *(long *)(lVar11 + 0x10);
                                                    lVar16 = *(long *)puVar7;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar11 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                        plVar12 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar12 = lVar14;
                                                        thunk_FUN_02dd37b4(plVar12,lVar14);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar11,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar11;
                                                  thunk_FUN_02dd37b4((long *)(lVar10 + 0x28),lVar11)
                                                  ;
                                                  lVar11 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DisposableManagerSingleton>__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar11 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar10;
                                                      thunk_FUN_02dd37b4(plVar12,lVar10);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar10,0);
                                                  puVar5 = 
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_FullName__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_ARSubsystems_XRResultStatus_TypeInfo
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar10 + 0x20) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar10 + 0x20));
                                                  *(undefined4 *)(lVar10 + 0x18) = 0;
                                                  lVar11 = thunk_FUN_02d9d534(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03aabc60(lVar11,*(undefined8 *)puVar3);
                                                  if (lVar11 != 0) {
                                                    lVar15 = *(long *)puVar4;
                                                    uVar13 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_UIElements_ColumnLayout_<DoLayout>b__49_1__
                                                  ;
                                                  lVar14 = *(long *)(lVar11 + 0x10);
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar13;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar11,uVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar11;
                                                  thunk_FUN_02dd37b4((long *)(lVar10 + 0x30),lVar11)
                                                  ;
                                                  lVar11 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar11,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar14 = thunk_FUN_02d9d534(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05fc0944(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetPropertyImpl__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar11 != 0) {
                                                    lVar15 = *(long *)(lVar11 + 0x10);
                                                    lVar16 = *(long *)puVar7;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar11 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                        plVar12 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar12 = lVar14;
                                                        thunk_FUN_02dd37b4(plVar12,lVar14);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar11,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar11;
                                                  thunk_FUN_02dd37b4((long *)(lVar10 + 0x28),lVar11)
                                                  ;
                                                  lVar11 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DisposableManagerSingleton>__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar11 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar10;
                                                      thunk_FUN_02dd37b4(plVar12,lVar10);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar10,0);
                                                  puVar5 = 
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_IsPrimitiveImpl__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_Name__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar10 + 0x20) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar10 + 0x20));
                                                  *(undefined4 *)(lVar10 + 0x18) = 0;
                                                  lVar11 = thunk_FUN_02d9d534(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03aabc60(lVar11,*(undefined8 *)puVar3);
                                                  if (lVar11 != 0) {
                                                    lVar15 = *(long *)puVar4;
                                                    uVar13 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMembers__
                                                  ;
                                                  lVar14 = *(long *)(lVar11 + 0x10);
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar13;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar11,uVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar11;
                                                  thunk_FUN_02dd37b4((long *)(lVar10 + 0x30),lVar11)
                                                  ;
                                                  lVar11 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar11,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar14 = thunk_FUN_02d9d534(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05fc0944(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_IsArrayImpl__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar11 != 0) {
                                                    lVar15 = *(long *)(lVar11 + 0x10);
                                                    lVar16 = *(long *)puVar7;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar11 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                        plVar12 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar12 = lVar14;
                                                        thunk_FUN_02dd37b4(plVar12,lVar14);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar11,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar11;
                                                  thunk_FUN_02dd37b4((long *)(lVar10 + 0x28),lVar11)
                                                  ;
                                                  lVar11 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DisposableManagerSingleton>__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar11 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar10;
                                                      thunk_FUN_02dd37b4(plVar12,lVar10);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar10,0);
                                                  puVar5 = 
                                                  Method_UnityEngine_GameObject_GetComponent<ParticleSystem>__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponent<NavMeshAgent>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar10 + 0x20) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar10 + 0x20));
                                                  *(undefined4 *)(lVar10 + 0x18) = 3;
                                                  lVar11 = thunk_FUN_02d9d534(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03aabc60(lVar11,*(undefined8 *)puVar3);
                                                  if (lVar11 != 0) {
                                                    lVar15 = *(long *)puVar4;
                                                    uVar13 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_GameObject_GetComponent<InputField>__
                                                  ;
                                                  lVar14 = *(long *)(lVar11 + 0x10);
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar13;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar11,uVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar11;
                                                  thunk_FUN_02dd37b4((long *)(lVar10 + 0x30),lVar11)
                                                  ;
                                                  lVar11 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar11,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar14 = thunk_FUN_02d9d534(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05fc0944(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponent<Renderer>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar11 != 0) {
                                                    lVar15 = *(long *)(lVar11 + 0x10);
                                                    lVar16 = *(long *)puVar7;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar11 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                        plVar12 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar12 = lVar14;
                                                        thunk_FUN_02dd37b4(plVar12,lVar14);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar11,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar11;
                                                  thunk_FUN_02dd37b4((long *)(lVar10 + 0x28),lVar11)
                                                  ;
                                                  lVar11 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DisposableManagerSingleton>__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar11 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar10;
                                                      thunk_FUN_02dd37b4(plVar12,lVar10);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar10,0);
                                                  puVar5 = 
                                                  Method_UnityEngine_GameObject_GetComponent<MeshRenderer>__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_06779338;
                                                    thunk_FUN_02dd37b4();
                                                    *(undefined8 *)(lVar10 + 0x20) =
                                                         *(undefined8 *)puVar5;
                                                    thunk_FUN_02dd37b4((undefined8 *)(lVar10 + 0x20)
                                                                      );
                                                    *(undefined4 *)(lVar10 + 0x18) = 3;
                                                    lVar11 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                 puVar2);
                                                    FUN_03aabc60(lVar11,*(undefined8 *)puVar3);
                                                    if (lVar11 != 0) {
                                                      lVar15 = *(long *)puVar4;
                                                      uVar13 = *(undefined8 *)
                                                                                                                                
                                                  Newtonsoft_Json_Linq_JToken_LineInfoAnnotation_TypeInfo
                                                  ;
                                                  lVar14 = *(long *)(lVar11 + 0x10);
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar13;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar11,uVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar11;
                                                  thunk_FUN_02dd37b4((long *)(lVar10 + 0x30),lVar11)
                                                  ;
                                                  lVar11 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar11,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar14 = thunk_FUN_02d9d534(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05fc0944(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponent<OVRManager>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar11 != 0) {
                                                    lVar15 = *(long *)(lVar11 + 0x10);
                                                    lVar16 = *(long *)puVar7;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar11 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                        plVar12 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar12 = lVar14;
                                                        thunk_FUN_02dd37b4(plVar12,lVar14);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar11,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar11;
                                                  thunk_FUN_02dd37b4((long *)(lVar10 + 0x28),lVar11)
                                                  ;
                                                  lVar11 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DisposableManagerSingleton>__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar11 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar10;
                                                      thunk_FUN_02dd37b4(plVar12,lVar10);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar10,0);
                                                  puVar5 = 
                                                  Method_UnityEngine_GameObject_TryGetComponent<CanvasTracker>__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_TryGetComponent<RectTransform>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar10 + 0x20) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar10 + 0x20));
                                                  *(undefined4 *)(lVar10 + 0x18) = 4;
                                                  lVar11 = thunk_FUN_02d9d534(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03aabc60(lVar11,*(undefined8 *)puVar3);
                                                  if (lVar11 != 0) {
                                                    lVar15 = *(long *)puVar4;
                                                    uVar13 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Linq_Enumerable_Count<ARAnchor>__;
                                                  lVar14 = *(long *)(lVar11 + 0x10);
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar13;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar11,uVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar11;
                                                  thunk_FUN_02dd37b4((long *)(lVar10 + 0x30),lVar11)
                                                  ;
                                                  lVar11 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar11,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar14 = thunk_FUN_02d9d534(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05fc0944(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponentsInParent<OVRSkeleton_IOVRSkeletonDataProvider>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar11 != 0) {
                                                    lVar15 = *(long *)(lVar11 + 0x10);
                                                    lVar16 = *(long *)puVar7;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar11 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                        plVar12 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar12 = lVar14;
                                                        thunk_FUN_02dd37b4(plVar12,lVar14);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar11,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar11;
                                                  thunk_FUN_02dd37b4((long *)(lVar10 + 0x28),lVar11)
                                                  ;
                                                  lVar11 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DisposableManagerSingleton>__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar11 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar10;
                                                      thunk_FUN_02dd37b4(plVar12,lVar10);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(unaff_x28 + 0x28) = lVar9;
                                                  thunk_FUN_02dd37b4((long *)(unaff_x28 + 0x28),
                                                                     lVar9);
                                                  FUN_05fc0710(unaff_x25,unaff_x28,0);
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
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


