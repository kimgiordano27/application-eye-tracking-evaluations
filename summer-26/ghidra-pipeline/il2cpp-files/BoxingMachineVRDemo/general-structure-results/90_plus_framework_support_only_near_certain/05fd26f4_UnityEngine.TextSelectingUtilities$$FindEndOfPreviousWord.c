/*
FUNCTION_NAME: UnityEngine.TextSelectingUtilities$$FindEndOfPreviousWord
ENTRY_POINT: 05fd26f4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 147
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_6;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_21;ui_or_gameplay_sink_hits_7;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_3
*/


void UnityEngine_TextSelectingUtilities__FindEndOfPreviousWord(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 *unaff_x19;
  uint *puVar17;
  long unaff_x21;
  int *piVar18;
  undefined8 unaff_x25;
  long unaff_x26;
  
  FUN_03aac494();
  lVar7 = thunk_FUN_02d9d534(*unaff_x19);
  FUN_05fc0954(lVar7,0);
  puVar2 = Method_UnityEngine_GameObject_AddComponent<MeshCollider>__;
  if (lVar7 != 0) {
    *(undefined4 *)(lVar7 + 0x10) = 0x264;
    *(undefined8 *)(lVar7 + 0x18) = *(undefined8 *)puVar2;
    thunk_FUN_02dd37b4();
    lVar12 = *(long *)(unaff_x21 + 0x10);
    *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
    puVar3 = Method_UnityEngine_GameObject_AddComponent<GizmoRendererManager>__;
    puVar2 = Method_UnityEngine_GameObject_AddComponent<EventSystem>__;
    if (lVar12 != 0) {
      uVar1 = *(uint *)(unaff_x21 + 0x18);
      if (uVar1 < *(uint *)(lVar12 + 0x18)) {
        *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
        plVar8 = (long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
        *plVar8 = lVar7;
        thunk_FUN_02dd37b4(plVar8,lVar7);
      }
      else {
        FUN_03aac494();
      }
      *(long *)(unaff_x26 + 0x20) = unaff_x21;
      thunk_FUN_02dd37b4();
      lVar7 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
      FUN_03aabc60(lVar7,*(undefined8 *)puVar2);
      lVar12 = thunk_FUN_02d9d534(*(undefined8 *)
                                   Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__);
      FUN_05fc094c(lVar12,0);
      puVar4 = 
      Method_UnityEngine_XR_Interaction_Toolkit_Locomotion_Climbing_ClimbTeleportInteractor_OnClimbBegin__
      ;
      puVar3 = PTR_DAT_0675eb68;
      puVar2 = PTR_DAT_0675eb60;
      if (lVar12 != 0) {
        *(undefined8 *)(lVar12 + 0x10) = *(undefined8 *)PTR_DAT_06786500;
        thunk_FUN_02dd37b4();
        *(undefined8 *)(lVar12 + 0x20) = *(undefined8 *)puVar4;
        thunk_FUN_02dd37b4((undefined8 *)(lVar12 + 0x20));
        *(undefined4 *)(lVar12 + 0x18) = 2;
        lVar9 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
        FUN_03aabc60(lVar9,*(undefined8 *)puVar3);
        puVar4 = PTR_DAT_0675eb70;
        if (lVar9 != 0) {
          uVar11 = *(undefined8 *)
                    Method_Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_Start__;
          lVar13 = *(long *)(lVar9 + 0x10);
          lVar14 = *(long *)PTR_DAT_0675eb70;
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          if (lVar13 != 0) {
            uVar1 = *(uint *)(lVar9 + 0x18);
            if (uVar1 < *(uint *)(lVar13 + 0x18)) {
              *(uint *)(lVar9 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20) = uVar11;
              thunk_FUN_02dd37b4();
            }
            else {
              FUN_03aac494(lVar9,uVar11,
                           *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
            }
            *(long *)(lVar12 + 0x30) = lVar9;
            thunk_FUN_02dd37b4((long *)(lVar12 + 0x30),lVar9);
            lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                        Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                      );
            FUN_03aabc60(lVar9,*(undefined8 *)
                                Method_UnityEngine_GameObject_AddComponent<FixedJoint>__);
            lVar13 = thunk_FUN_02d9d534(*(undefined8 *)
                                         Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                       );
            FUN_05fc0944(lVar13,0);
            if (lVar13 != 0) {
              *(undefined8 *)(lVar13 + 0x18) =
                   *(undefined8 *)Method_UnityEngine_GameObject_TryGetComponent<Canvas>__;
              thunk_FUN_02dd37b4();
              *(undefined8 *)(lVar13 + 0x10) =
                   *(undefined8 *)
                    Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_UnderlyingSystemType__
              ;
              thunk_FUN_02dd37b4();
              if (lVar9 != 0) {
                lVar14 = *(long *)(lVar9 + 0x10);
                lVar15 = *(long *)Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__;
                *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                if (lVar14 != 0) {
                  uVar1 = *(uint *)(lVar9 + 0x18);
                  if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                    *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                    plVar8 = (long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
                    *plVar8 = lVar13;
                    thunk_FUN_02dd37b4(plVar8,lVar13);
                  }
                  else {
                    FUN_03aac494(lVar9,lVar13,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  *(long *)(lVar12 + 0x28) = lVar9;
                  thunk_FUN_02dd37b4((long *)(lVar12 + 0x28),lVar9);
                  if (lVar7 != 0) {
                    lVar9 = *(long *)
                             Method_UnityEngine_GameObject_AddComponent<DisposableManagerSingleton>__
                    ;
                    piVar18 = (int *)(lVar7 + 0x1c);
                    *piVar18 = *piVar18 + 1;
                    puVar5 = Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__;
                    plVar8 = (long *)(lVar7 + 0x10);
                    lVar13 = *plVar8;
                    puVar17 = (uint *)(lVar7 + 0x18);
                    uVar1 = *puVar17;
                    if (lVar13 != 0) {
                      if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                        *puVar17 = uVar1 + 1;
                        plVar10 = (long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
                        *plVar10 = lVar12;
                        thunk_FUN_02dd37b4(plVar10,lVar12);
                      }
                      else {
                        FUN_03aac494(lVar7,lVar12,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                      }
                      lVar12 = thunk_FUN_02d9d534(*(undefined8 *)puVar5);
                      FUN_05fc094c(lVar12,0);
                      puVar5 = PTR_DAT_06762058;
                      if (lVar12 != 0) {
                        *(undefined8 *)(lVar12 + 0x10) =
                             *(undefined8 *)
                              UnityEngine_XR_Interaction_Toolkit_Filtering_XRPokeLogic_TypeInfo;
                        thunk_FUN_02dd37b4();
                        *(undefined8 *)(lVar12 + 0x20) = *(undefined8 *)puVar5;
                        thunk_FUN_02dd37b4((undefined8 *)(lVar12 + 0x20));
                        *(undefined4 *)(lVar12 + 0x18) = 1;
                        lVar9 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
                        FUN_03aabc60(lVar9,*(undefined8 *)puVar3);
                        if (lVar9 != 0) {
                          uVar11 = *(undefined8 *)puVar5;
                          lVar13 = *(long *)(lVar9 + 0x10);
                          lVar14 = *(long *)puVar4;
                          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                          if (lVar13 != 0) {
                            uVar1 = *(uint *)(lVar9 + 0x18);
                            if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                              *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                              *(undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20) = uVar11;
                              thunk_FUN_02dd37b4();
                            }
                            else {
                              FUN_03aac494(lVar9,uVar11,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                            }
                            *(long *)(lVar12 + 0x30) = lVar9;
                            thunk_FUN_02dd37b4((long *)(lVar12 + 0x30),lVar9);
                            lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                            FUN_03aabc60(lVar9,*(undefined8 *)
                                                Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                        );
                            lVar13 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                  
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                            FUN_05fc0944(lVar13,0);
                            puVar5 = 
                            Method_UnityEngine_GameObject_GetComponentsInChildren<Transform>__;
                            if (lVar13 != 0) {
                              *(undefined8 *)(lVar13 + 0x18) =
                                   *(undefined8 *)
                                    Method_UnityEngine_GameObject_GetComponentsInChildren<Transform>__
                              ;
                              thunk_FUN_02dd37b4();
                              *(undefined8 *)(lVar13 + 0x10) =
                                   *(undefined8 *)
                                    Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_UnderlyingSystemType__
                              ;
                              thunk_FUN_02dd37b4();
                              if (lVar9 != 0) {
                                lVar14 = *(long *)(lVar9 + 0x10);
                                lVar15 = *(long *)
                                          Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                ;
                                *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                                if (lVar14 != 0) {
                                  uVar1 = *(uint *)(lVar9 + 0x18);
                                  if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                    *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                    plVar10 = (long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
                                    *plVar10 = lVar13;
                                    thunk_FUN_02dd37b4(plVar10,lVar13);
                                  }
                                  else {
                                    FUN_03aac494(lVar9,lVar13,
                                                 *(undefined8 *)
                                                  (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70
                                                  ));
                                  }
                                  *(long *)(lVar12 + 0x28) = lVar9;
                                  thunk_FUN_02dd37b4((long *)(lVar12 + 0x28),lVar9);
                                  lVar9 = *(long *)
                                           Method_UnityEngine_GameObject_AddComponent<DisposableManagerSingleton>__
                                  ;
                                  *piVar18 = *piVar18 + 1;
                                  lVar13 = *plVar8;
                                  if (lVar13 != 0) {
                                    uVar1 = *puVar17;
                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                      *puVar17 = uVar1 + 1;
                                      plVar10 = (long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
                                      *plVar10 = lVar12;
                                      thunk_FUN_02dd37b4(plVar10,lVar12);
                                    }
                                    else {
                                      FUN_03aac494(lVar7,lVar12,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) +
                                                    0x70));
                                    }
                                    lVar12 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                  
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                    FUN_05fc094c(lVar12,0);
                                    puVar6 = 
                                    Method_UnityEngine_GameObject_TryGetComponent<Collider>__;
                                    if (lVar12 != 0) {
                                      *(undefined8 *)(lVar12 + 0x10) =
                                           *(undefined8 *)
                                            UnityEngine_XR_ARSubsystems_XRPointCloudData_TypeInfo;
                                      thunk_FUN_02dd37b4();
                                      *(undefined8 *)(lVar12 + 0x20) = *(undefined8 *)puVar6;
                                      thunk_FUN_02dd37b4((undefined8 *)(lVar12 + 0x20));
                                      *(undefined4 *)(lVar12 + 0x18) = 0;
                                      lVar9 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
                                      FUN_03aabc60(lVar9,*(undefined8 *)puVar3);
                                      if (lVar9 != 0) {
                                        lVar14 = *(long *)puVar4;
                                        uVar11 = *(undefined8 *)
                                                  Method_UnityEngine_Color32_get_Item__;
                                        lVar13 = *(long *)(lVar9 + 0x10);
                                        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                                        if (lVar13 != 0) {
                                          uVar1 = *(uint *)(lVar9 + 0x18);
                                          if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                            *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                            *(undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                 uVar11;
                                            thunk_FUN_02dd37b4();
                                          }
                                          else {
                                            FUN_03aac494(lVar9,uVar11,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0
                                                                    ) + 0x70));
                                          }
                                          *(long *)(lVar12 + 0x30) = lVar9;
                                          thunk_FUN_02dd37b4((long *)(lVar12 + 0x30),lVar9);
                                          lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                          FUN_03aabc60(lVar9,*(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                          lVar13 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                          FUN_05fc0944(lVar13,0);
                                          if (lVar13 != 0) {
                                            *(undefined8 *)(lVar13 + 0x18) = *(undefined8 *)puVar5;
                                            thunk_FUN_02dd37b4();
                                            *(undefined8 *)(lVar13 + 0x10) =
                                                 *(undefined8 *)
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_UnderlyingSystemType__
                                            ;
                                            thunk_FUN_02dd37b4();
                                            if (lVar9 != 0) {
                                              lVar14 = *(long *)(lVar9 + 0x10);
                                              lVar15 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                              ;
                                              *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                                              puVar5 = 
                                              Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                              ;
                                              if (lVar14 != 0) {
                                                uVar1 = *(uint *)(lVar9 + 0x18);
                                                if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                  *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                  plVar10 = (long *)(lVar14 + (long)(int)uVar1 * 8 +
                                                                    0x20);
                                                  *plVar10 = lVar13;
                                                  thunk_FUN_02dd37b4(plVar10,lVar13);
                                                }
                                                else {
                                                  FUN_03aac494(lVar9,lVar13,
                                                               *(undefined8 *)
                                                                (*(long *)(*(long *)(lVar15 + 0x20)
                                                                          + 0xc0) + 0x70));
                                                }
                                                *(long *)(lVar12 + 0x28) = lVar9;
                                                thunk_FUN_02dd37b4((long *)(lVar12 + 0x28),lVar9);
                                                lVar9 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DisposableManagerSingleton>__
                                                ;
                                                *piVar18 = *piVar18 + 1;
                                                lVar13 = *plVar8;
                                                if (lVar13 != 0) {
                                                  uVar1 = *puVar17;
                                                  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                    *puVar17 = uVar1 + 1;
                                                    plVar10 = (long *)(lVar13 + (long)(int)uVar1 * 8
                                                                      + 0x20);
                                                    *plVar10 = lVar12;
                                                    thunk_FUN_02dd37b4(plVar10,lVar12);
                                                  }
                                                  else {
                                                    FUN_03aac494(lVar7,lVar12,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02d9d534(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05fc094c(lVar12,0);
                                                  puVar5 = PTR_DAT_06761180;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_0676a290;
                                                    thunk_FUN_02dd37b4();
                                                    *(undefined8 *)(lVar12 + 0x20) =
                                                         *(undefined8 *)puVar5;
                                                    thunk_FUN_02dd37b4((undefined8 *)(lVar12 + 0x20)
                                                                      );
                                                    *(undefined4 *)(lVar12 + 0x18) = 0;
                                                    lVar9 = thunk_FUN_02d9d534(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_03aabc60(lVar9,*(undefined8 *)puVar3);
                                                    if (lVar9 != 0) {
                                                      lVar14 = *(long *)puVar4;
                                                      uVar11 = *(undefined8 *)
                                                                                                                                
                                                  Method_VRUIP_ColorPickerController_OnSliderValueChanged__
                                                  ;
                                                  lVar13 = *(long *)(lVar9 + 0x10);
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar9,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar9;
                                                  thunk_FUN_02dd37b4((long *)(lVar12 + 0x30),lVar9);
                                                  lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar9,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar13 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponentsInChildren<ParticleSystem>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar13 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_UnderlyingSystemType__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  lVar14 = thunk_FUN_02d9d534(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03aabc60(lVar14,*(undefined8 *)puVar3);
                                                  if (lVar14 != 0) {
                                                    lVar16 = *(long *)puVar4;
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<OpenXRRestarter>__
                                                  ;
                                                  lVar15 = *(long *)(lVar14 + 0x10);
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar15 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar14,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x20) = lVar14;
                                                  thunk_FUN_02dd37b4((long *)(lVar13 + 0x20),lVar14)
                                                  ;
                                                  if (lVar9 != 0) {
                                                    lVar14 = *(long *)(lVar9 + 0x10);
                                                    lVar15 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar13;
                                                      thunk_FUN_02dd37b4(plVar10,lVar13);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar9,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar13 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_GazeInputManager_OnDeviceChange__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar13 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_UnderlyingSystemType__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  lVar14 = thunk_FUN_02d9d534(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03aabc60(lVar14,*(undefined8 *)puVar3);
                                                  if (lVar14 != 0) {
                                                    lVar16 = *(long *)puVar4;
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<MeshCollider>__
                                                  ;
                                                  lVar15 = *(long *)(lVar14 + 0x10);
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar15 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar14,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x20) = lVar14;
                                                  thunk_FUN_02dd37b4((long *)(lVar13 + 0x20),lVar14)
                                                  ;
                                                  lVar14 = *(long *)(lVar9 + 0x10);
                                                  lVar15 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  puVar5 = 
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  ;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar13;
                                                      thunk_FUN_02dd37b4(plVar10,lVar13);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar9,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar9;
                                                  thunk_FUN_02dd37b4((long *)(lVar12 + 0x28),lVar9);
                                                  lVar9 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DisposableManagerSingleton>__
                                                  ;
                                                  *piVar18 = *piVar18 + 1;
                                                  lVar13 = *plVar8;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *puVar17;
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *puVar17 = uVar1 + 1;
                                                      plVar10 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar12;
                                                      thunk_FUN_02dd37b4(plVar10,lVar12);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar7,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02d9d534(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05fc094c(lVar12,0);
                                                  puVar5 = 
                                                  Method_UnityEngine_GameObject_TryGetComponent<DebugUIHandlerColor>__
                                                  ;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_ARSubsystems_XRReferenceImageLibrary_TypeInfo
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar12 + 0x20) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar12 + 0x20));
                                                  *(undefined4 *)(lVar12 + 0x18) = 0;
                                                  lVar9 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
                                                  FUN_03aabc60(lVar9,*(undefined8 *)puVar3);
                                                  if (lVar9 != 0) {
                                                    lVar14 = *(long *)puVar4;
                                                    uVar11 = *(undefined8 *)
                                                              Method_UnityEngine_Color_set_Item__;
                                                    lVar13 = *(long *)(lVar9 + 0x10);
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    if (lVar13 != 0) {
                                                      uVar1 = *(uint *)(lVar9 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                        *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar11;
                                                        thunk_FUN_02dd37b4();
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar9,uVar11,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar9;
                                                  thunk_FUN_02dd37b4((long *)(lVar12 + 0x30),lVar9);
                                                  lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar9,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar13 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_TryGetComponent<PlayableDirector>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar13 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_UnderlyingSystemType__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  lVar14 = thunk_FUN_02d9d534(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03aabc60(lVar14,*(undefined8 *)puVar3);
                                                  if (lVar14 != 0) {
                                                    lVar16 = *(long *)puVar4;
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<OpenXRRestarter>__
                                                  ;
                                                  lVar15 = *(long *)(lVar14 + 0x10);
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar15 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar14,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x20) = lVar14;
                                                  thunk_FUN_02dd37b4((long *)(lVar13 + 0x20),lVar14)
                                                  ;
                                                  if (lVar9 != 0) {
                                                    lVar14 = *(long *)(lVar9 + 0x10);
                                                    lVar15 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar13;
                                                      thunk_FUN_02dd37b4(plVar10,lVar13);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar9,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar13 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_TryGetComponent<GraphicRaycaster>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar13 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_UnderlyingSystemType__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  lVar14 = thunk_FUN_02d9d534(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03aabc60(lVar14,*(undefined8 *)puVar3);
                                                  if (lVar14 != 0) {
                                                    lVar16 = *(long *)puVar4;
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<MeshCollider>__
                                                  ;
                                                  lVar15 = *(long *)(lVar14 + 0x10);
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar15 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar14,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x20) = lVar14;
                                                  thunk_FUN_02dd37b4((long *)(lVar13 + 0x20),lVar14)
                                                  ;
                                                  lVar14 = *(long *)(lVar9 + 0x10);
                                                  lVar15 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  puVar5 = 
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  ;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar13;
                                                      thunk_FUN_02dd37b4(plVar10,lVar13);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar9,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar9;
                                                  thunk_FUN_02dd37b4((long *)(lVar12 + 0x28),lVar9);
                                                  lVar9 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DisposableManagerSingleton>__
                                                  ;
                                                  *piVar18 = *piVar18 + 1;
                                                  lVar13 = *plVar8;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *puVar17;
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *puVar17 = uVar1 + 1;
                                                      plVar10 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar12;
                                                      thunk_FUN_02dd37b4(plVar10,lVar12);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar7,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02d9d534(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05fc094c(lVar12,0);
                                                  puVar5 = 
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_HasElementTypeImpl__
                                                  ;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Filtering_XRTargetFilter_TypeInfo
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar12 + 0x20) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar12 + 0x20));
                                                  *(undefined4 *)(lVar12 + 0x18) = 0;
                                                  lVar9 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
                                                  FUN_03aabc60(lVar9,*(undefined8 *)puVar3);
                                                  if (lVar9 != 0) {
                                                    lVar14 = *(long *)puVar4;
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_UIElements_ColumnLayout_<RecomputeToMinWidthProportionally>b__54_0__
                                                  ;
                                                  lVar13 = *(long *)(lVar9 + 0x10);
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar9,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar9;
                                                  thunk_FUN_02dd37b4((long *)(lVar12 + 0x30),lVar9);
                                                  lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar9,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar13 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_IsDefined__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar13 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_UnderlyingSystemType__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  lVar14 = thunk_FUN_02d9d534(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03aabc60(lVar14,*(undefined8 *)puVar3);
                                                  if (lVar14 != 0) {
                                                    lVar16 = *(long *)puVar4;
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<OpenXRRestarter>__
                                                  ;
                                                  lVar15 = *(long *)(lVar14 + 0x10);
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar15 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar14,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x20) = lVar14;
                                                  thunk_FUN_02dd37b4((long *)(lVar13 + 0x20),lVar14)
                                                  ;
                                                  if (lVar9 != 0) {
                                                    lVar14 = *(long *)(lVar9 + 0x10);
                                                    lVar15 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar13;
                                                      thunk_FUN_02dd37b4(plVar10,lVar13);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar9,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar13 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                          Method_Firebase_Firestore_GeoPoint__ctor__
                                                    ;
                                                    thunk_FUN_02dd37b4();
                                                    *(undefined8 *)(lVar13 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_UnderlyingSystemType__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  lVar14 = thunk_FUN_02d9d534(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03aabc60(lVar14,*(undefined8 *)puVar3);
                                                  if (lVar14 != 0) {
                                                    lVar16 = *(long *)puVar4;
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<MeshCollider>__
                                                  ;
                                                  lVar15 = *(long *)(lVar14 + 0x10);
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar15 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar14,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x20) = lVar14;
                                                  thunk_FUN_02dd37b4((long *)(lVar13 + 0x20),lVar14)
                                                  ;
                                                  lVar14 = *(long *)(lVar9 + 0x10);
                                                  lVar15 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  puVar5 = 
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  ;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar13;
                                                      thunk_FUN_02dd37b4(plVar10,lVar13);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar9,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar9;
                                                  thunk_FUN_02dd37b4((long *)(lVar12 + 0x28),lVar9);
                                                  lVar9 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DisposableManagerSingleton>__
                                                  ;
                                                  *piVar18 = *piVar18 + 1;
                                                  lVar13 = *plVar8;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *puVar17;
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *puVar17 = uVar1 + 1;
                                                      plVar10 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar12;
                                                      thunk_FUN_02dd37b4(plVar10,lVar12);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar7,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02d9d534(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05fc094c(lVar12,0);
                                                  puVar5 = 
                                                  Method_UnityEngine_GameObject_TryGetComponent<CharacterController>__
                                                  ;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_ARSubsystems_XRReferenceObject_TypeInfo
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar12 + 0x20) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar12 + 0x20));
                                                  *(undefined4 *)(lVar12 + 0x18) = 0;
                                                  lVar9 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
                                                  FUN_03aabc60(lVar9,*(undefined8 *)puVar3);
                                                  if (lVar9 != 0) {
                                                    lVar14 = *(long *)puVar4;
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_UIElements_ColumnLayout_<RecomputeToMaxWidthProportionally>b__53_0__
                                                  ;
                                                  lVar13 = *(long *)(lVar9 + 0x10);
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar9,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar9;
                                                  thunk_FUN_02dd37b4((long *)(lVar12 + 0x30),lVar9);
                                                  lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar9,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar13 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_TryGetComponent<LineRenderer>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar13 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_UnderlyingSystemType__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  lVar14 = thunk_FUN_02d9d534(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03aabc60(lVar14,*(undefined8 *)puVar3);
                                                  if (lVar14 != 0) {
                                                    lVar16 = *(long *)puVar4;
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<OpenXRRestarter>__
                                                  ;
                                                  lVar15 = *(long *)(lVar14 + 0x10);
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar15 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar14,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x20) = lVar14;
                                                  thunk_FUN_02dd37b4((long *)(lVar13 + 0x20),lVar14)
                                                  ;
                                                  if (lVar9 != 0) {
                                                    lVar14 = *(long *)(lVar9 + 0x10);
                                                    lVar15 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar13;
                                                      thunk_FUN_02dd37b4(plVar10,lVar13);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar9,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar13 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_TryGetComponent<DebugUIHandlerObjectList>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar13 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_UnderlyingSystemType__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  lVar14 = thunk_FUN_02d9d534(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03aabc60(lVar14,*(undefined8 *)puVar3);
                                                  if (lVar14 != 0) {
                                                    lVar16 = *(long *)puVar4;
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<MeshCollider>__
                                                  ;
                                                  lVar15 = *(long *)(lVar14 + 0x10);
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar15 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar14,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x20) = lVar14;
                                                  thunk_FUN_02dd37b4((long *)(lVar13 + 0x20),lVar14)
                                                  ;
                                                  lVar14 = *(long *)(lVar9 + 0x10);
                                                  lVar15 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  puVar5 = 
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  ;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar13;
                                                      thunk_FUN_02dd37b4(plVar10,lVar13);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar9,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar9;
                                                  thunk_FUN_02dd37b4((long *)(lVar12 + 0x28),lVar9);
                                                  lVar9 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DisposableManagerSingleton>__
                                                  ;
                                                  *piVar18 = *piVar18 + 1;
                                                  lVar13 = *plVar8;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *puVar17;
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *puVar17 = uVar1 + 1;
                                                      plVar10 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar12;
                                                      thunk_FUN_02dd37b4(plVar10,lVar12);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar7,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02d9d534(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05fc094c(lVar12,0);
                                                  puVar5 = 
                                                  Method_Firebase_Firestore_GeoPointProxy_swigRelease__
                                                  ;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Filtering_XRTargetEvaluator_TypeInfo
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar12 + 0x20) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar12 + 0x20));
                                                  *(undefined4 *)(lVar12 + 0x18) = 0;
                                                  lVar9 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
                                                  FUN_03aabc60(lVar9,*(undefined8 *)puVar3);
                                                  if (lVar9 != 0) {
                                                    lVar14 = *(long *)puVar4;
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_OnSessionDiscoveredWithSpatialAnchor__
                                                  ;
                                                  lVar13 = *(long *)(lVar9 + 0x10);
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar9,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar9;
                                                  thunk_FUN_02dd37b4((long *)(lVar12 + 0x30),lVar9);
                                                  lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar9,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar13 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_BaseType__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar13 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_UnderlyingSystemType__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  lVar14 = thunk_FUN_02d9d534(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03aabc60(lVar14,*(undefined8 *)puVar3);
                                                  if (lVar14 != 0) {
                                                    lVar16 = *(long *)puVar4;
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<OpenXRRestarter>__
                                                  ;
                                                  lVar15 = *(long *)(lVar14 + 0x10);
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar15 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar14,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x20) = lVar14;
                                                  thunk_FUN_02dd37b4((long *)(lVar13 + 0x20),lVar14)
                                                  ;
                                                  if (lVar9 != 0) {
                                                    lVar14 = *(long *)(lVar9 + 0x10);
                                                    lVar15 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar13;
                                                      thunk_FUN_02dd37b4(plVar10,lVar13);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar9,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar13 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Firebase_Firestore_GeoPointProxy_longitude__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar13 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_UnderlyingSystemType__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  lVar14 = thunk_FUN_02d9d534(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03aabc60(lVar14,*(undefined8 *)puVar3);
                                                  if (lVar14 != 0) {
                                                    lVar16 = *(long *)puVar4;
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<MeshCollider>__
                                                  ;
                                                  lVar15 = *(long *)(lVar14 + 0x10);
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar15 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar14,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x20) = lVar14;
                                                  thunk_FUN_02dd37b4((long *)(lVar13 + 0x20),lVar14)
                                                  ;
                                                  lVar14 = *(long *)(lVar9 + 0x10);
                                                  lVar15 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  puVar5 = 
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  ;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar13;
                                                      thunk_FUN_02dd37b4(plVar10,lVar13);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar9,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar9;
                                                  thunk_FUN_02dd37b4((long *)(lVar12 + 0x28),lVar9);
                                                  lVar9 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DisposableManagerSingleton>__
                                                  ;
                                                  *piVar18 = *piVar18 + 1;
                                                  lVar13 = *plVar8;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *puVar17;
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *puVar17 = uVar1 + 1;
                                                      plVar10 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar12;
                                                      thunk_FUN_02dd37b4(plVar10,lVar12);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar7,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02d9d534(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05fc094c(lVar12,0);
                                                  puVar5 = PTR_DAT_06762060;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_0676c270;
                                                    thunk_FUN_02dd37b4();
                                                    *(undefined8 *)(lVar12 + 0x20) =
                                                         *(undefined8 *)puVar5;
                                                    thunk_FUN_02dd37b4((undefined8 *)(lVar12 + 0x20)
                                                                      );
                                                    *(undefined4 *)(lVar12 + 0x18) = 1;
                                                    lVar9 = thunk_FUN_02d9d534(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_03aabc60(lVar9,*(undefined8 *)puVar3);
                                                    if (lVar9 != 0) {
                                                      uVar11 = *(undefined8 *)puVar5;
                                                      lVar13 = *(long *)(lVar9 + 0x10);
                                                      lVar14 = *(long *)puVar4;
                                                      *(int *)(lVar9 + 0x1c) =
                                                           *(int *)(lVar9 + 0x1c) + 1;
                                                      if (lVar13 != 0) {
                                                        uVar1 = *(uint *)(lVar9 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                          *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                          *(undefined8 *)
                                                           (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                               uVar11;
                                                          thunk_FUN_02dd37b4();
                                                        }
                                                        else {
                                                          FUN_03aac494(lVar9,uVar11,
                                                                       *(undefined8 *)
                                                                        (*(long *)(*(long *)(lVar14 
                                                  + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar9;
                                                  thunk_FUN_02dd37b4((long *)(lVar12 + 0x30),lVar9);
                                                  lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar9,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar13 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar13,0);
                                                  puVar5 = 
                                                  Method_UnityEngine_GameObject_TryGetComponent<JointVisualizer>__
                                                  ;
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_TryGetComponent<JointVisualizer>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar13 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_UnderlyingSystemType__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar9 != 0) {
                                                    lVar14 = *(long *)(lVar9 + 0x10);
                                                    lVar15 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar13;
                                                      thunk_FUN_02dd37b4(plVar10,lVar13);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar9,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar9;
                                                  thunk_FUN_02dd37b4((long *)(lVar12 + 0x28),lVar9);
                                                  lVar9 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DisposableManagerSingleton>__
                                                  ;
                                                  *piVar18 = *piVar18 + 1;
                                                  lVar13 = *plVar8;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *puVar17;
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *puVar17 = uVar1 + 1;
                                                      plVar10 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar12;
                                                      thunk_FUN_02dd37b4(plVar10,lVar12);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar7,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar12,0);
                                                  puVar6 = 
                                                  Method_UnityEngine_GameObject_TryGetComponent<Renderer>__
                                                  ;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_ARSubsystems_XRRaycast_TypeInfo;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar12 + 0x20) =
                                                       *(undefined8 *)puVar6;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar12 + 0x20));
                                                  *(undefined4 *)(lVar12 + 0x18) = 0;
                                                  lVar9 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
                                                  FUN_03aabc60(lVar9,*(undefined8 *)puVar3);
                                                  if (lVar9 != 0) {
                                                    lVar14 = *(long *)puVar4;
                                                    uVar11 = *(undefined8 *)
                                                              Method_UnityEngine_Color_get_Item__;
                                                    lVar13 = *(long *)(lVar9 + 0x10);
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    if (lVar13 != 0) {
                                                      uVar1 = *(uint *)(lVar9 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                        *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar11;
                                                        thunk_FUN_02dd37b4();
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar9,uVar11,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar9;
                                                  thunk_FUN_02dd37b4((long *)(lVar12 + 0x30),lVar9);
                                                  lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar9,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar13 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)puVar5;
                                                    thunk_FUN_02dd37b4();
                                                    *(undefined8 *)(lVar13 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_UnderlyingSystemType__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar9 != 0) {
                                                    lVar14 = *(long *)(lVar9 + 0x10);
                                                    lVar15 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  puVar5 = 
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  ;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar13;
                                                      thunk_FUN_02dd37b4(plVar10,lVar13);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar9,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar9;
                                                  thunk_FUN_02dd37b4((long *)(lVar12 + 0x28),lVar9);
                                                  lVar9 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DisposableManagerSingleton>__
                                                  ;
                                                  *piVar18 = *piVar18 + 1;
                                                  lVar13 = *plVar8;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *puVar17;
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *puVar17 = uVar1 + 1;
                                                      plVar10 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar12;
                                                      thunk_FUN_02dd37b4(plVar10,lVar12);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar7,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02d9d534(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05fc094c(lVar12,0);
                                                  puVar6 = 
                                                  Method_Unity_VisualScripting_GetListItem_Get__;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar12 + 0x20) =
                                                       *(undefined8 *)puVar6;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar12 + 0x20));
                                                  *(undefined4 *)(lVar12 + 0x18) = 0;
                                                  lVar9 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
                                                  FUN_03aabc60(lVar9,*(undefined8 *)puVar3);
                                                  if (lVar9 != 0) {
                                                    lVar14 = *(long *)puVar4;
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethods__
                                                  ;
                                                  lVar13 = *(long *)(lVar9 + 0x10);
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar9,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar9;
                                                  thunk_FUN_02dd37b4((long *)(lVar12 + 0x30),lVar9);
                                                  lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar9,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar13 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetNestedType__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar13 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_UnderlyingSystemType__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar9 != 0) {
                                                    lVar14 = *(long *)(lVar9 + 0x10);
                                                    lVar15 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar13;
                                                      thunk_FUN_02dd37b4(plVar10,lVar13);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar9,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar9;
                                                  thunk_FUN_02dd37b4((long *)(lVar12 + 0x28),lVar9);
                                                  lVar9 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DisposableManagerSingleton>__
                                                  ;
                                                  *piVar18 = *piVar18 + 1;
                                                  lVar13 = *plVar8;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *puVar17;
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *puVar17 = uVar1 + 1;
                                                      plVar10 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar12;
                                                      thunk_FUN_02dd37b4(plVar10,lVar12);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar7,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02d9d534(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05fc094c(lVar12,0);
                                                  puVar6 = 
                                                  Method_UnityEngine_GameObject_GetComponentsInParent<Canvas>__
                                                  ;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_XRScreenSpaceController_TypeInfo
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar12 + 0x20) =
                                                       *(undefined8 *)puVar6;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar12 + 0x20));
                                                  *(undefined4 *)(lVar12 + 0x18) = 0;
                                                  lVar9 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
                                                  FUN_03aabc60(lVar9,*(undefined8 *)puVar3);
                                                  if (lVar9 != 0) {
                                                    lVar14 = *(long *)puVar4;
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_UIElements_ColumnLayout_<DoLayout>b__49_0__
                                                  ;
                                                  lVar13 = *(long *)(lVar9 + 0x10);
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar9,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar9;
                                                  thunk_FUN_02dd37b4((long *)(lVar12 + 0x30),lVar9);
                                                  lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar9,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar13 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponentsInParent<RectMask2D>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar13 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_UnderlyingSystemType__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar9 != 0) {
                                                    lVar14 = *(long *)(lVar9 + 0x10);
                                                    lVar15 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar13;
                                                      thunk_FUN_02dd37b4(plVar10,lVar13);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar9,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar9;
                                                  thunk_FUN_02dd37b4((long *)(lVar12 + 0x28),lVar9);
                                                  lVar9 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DisposableManagerSingleton>__
                                                  ;
                                                  *piVar18 = *piVar18 + 1;
                                                  lVar13 = *plVar8;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *puVar17;
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *puVar17 = uVar1 + 1;
                                                      plVar10 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar12;
                                                      thunk_FUN_02dd37b4(plVar10,lVar12);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar7,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02d9d534(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05fc094c(lVar12,0);
                                                  puVar6 = 
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_FullName__
                                                  ;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_ARSubsystems_XRResultStatus_TypeInfo
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar12 + 0x20) =
                                                       *(undefined8 *)puVar6;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar12 + 0x20));
                                                  *(undefined4 *)(lVar12 + 0x18) = 0;
                                                  lVar9 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
                                                  FUN_03aabc60(lVar9,*(undefined8 *)puVar3);
                                                  if (lVar9 != 0) {
                                                    lVar14 = *(long *)puVar4;
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_UIElements_ColumnLayout_<DoLayout>b__49_1__
                                                  ;
                                                  lVar13 = *(long *)(lVar9 + 0x10);
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar9,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar9;
                                                  thunk_FUN_02dd37b4((long *)(lVar12 + 0x30),lVar9);
                                                  lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar9,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar13 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetPropertyImpl__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar13 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_UnderlyingSystemType__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar9 != 0) {
                                                    lVar14 = *(long *)(lVar9 + 0x10);
                                                    lVar15 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar13;
                                                      thunk_FUN_02dd37b4(plVar10,lVar13);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar9,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar9;
                                                  thunk_FUN_02dd37b4((long *)(lVar12 + 0x28),lVar9);
                                                  lVar9 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DisposableManagerSingleton>__
                                                  ;
                                                  *piVar18 = *piVar18 + 1;
                                                  lVar13 = *plVar8;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *puVar17;
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *puVar17 = uVar1 + 1;
                                                      plVar10 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar12;
                                                      thunk_FUN_02dd37b4(plVar10,lVar12);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar7,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02d9d534(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05fc094c(lVar12,0);
                                                  puVar6 = 
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_IsPrimitiveImpl__
                                                  ;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_Name__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar12 + 0x20) =
                                                       *(undefined8 *)puVar6;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar12 + 0x20));
                                                  *(undefined4 *)(lVar12 + 0x18) = 0;
                                                  lVar9 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
                                                  FUN_03aabc60(lVar9,*(undefined8 *)puVar3);
                                                  if (lVar9 != 0) {
                                                    lVar14 = *(long *)puVar4;
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMembers__
                                                  ;
                                                  lVar13 = *(long *)(lVar9 + 0x10);
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar9,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar9;
                                                  thunk_FUN_02dd37b4((long *)(lVar12 + 0x30),lVar9);
                                                  lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar9,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar13 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_IsArrayImpl__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar13 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_UnderlyingSystemType__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar9 != 0) {
                                                    lVar14 = *(long *)(lVar9 + 0x10);
                                                    lVar15 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar13;
                                                      thunk_FUN_02dd37b4(plVar10,lVar13);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar9,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar9;
                                                  thunk_FUN_02dd37b4((long *)(lVar12 + 0x28),lVar9);
                                                  lVar9 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DisposableManagerSingleton>__
                                                  ;
                                                  *piVar18 = *piVar18 + 1;
                                                  lVar13 = *plVar8;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *puVar17;
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *puVar17 = uVar1 + 1;
                                                      plVar10 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar12;
                                                      thunk_FUN_02dd37b4(plVar10,lVar12);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar7,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02d9d534(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05fc094c(lVar12,0);
                                                  puVar6 = 
                                                  Method_UnityEngine_GameObject_GetComponent<ParticleSystem>__
                                                  ;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponent<NavMeshAgent>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar12 + 0x20) =
                                                       *(undefined8 *)puVar6;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar12 + 0x20));
                                                  *(undefined4 *)(lVar12 + 0x18) = 3;
                                                  lVar9 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
                                                  FUN_03aabc60(lVar9,*(undefined8 *)puVar3);
                                                  if (lVar9 != 0) {
                                                    lVar14 = *(long *)puVar4;
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_GameObject_GetComponent<InputField>__
                                                  ;
                                                  lVar13 = *(long *)(lVar9 + 0x10);
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar9,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar9;
                                                  thunk_FUN_02dd37b4((long *)(lVar12 + 0x30),lVar9);
                                                  lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar9,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar13 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponent<Renderer>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar13 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_UnderlyingSystemType__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar9 != 0) {
                                                    lVar14 = *(long *)(lVar9 + 0x10);
                                                    lVar15 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar13;
                                                      thunk_FUN_02dd37b4(plVar10,lVar13);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar9,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar9;
                                                  thunk_FUN_02dd37b4((long *)(lVar12 + 0x28),lVar9);
                                                  lVar9 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DisposableManagerSingleton>__
                                                  ;
                                                  *piVar18 = *piVar18 + 1;
                                                  lVar13 = *plVar8;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *puVar17;
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *puVar17 = uVar1 + 1;
                                                      plVar10 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar12;
                                                      thunk_FUN_02dd37b4(plVar10,lVar12);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar7,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02d9d534(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05fc094c(lVar12,0);
                                                  puVar6 = 
                                                  Method_UnityEngine_GameObject_GetComponent<MeshRenderer>__
                                                  ;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_06779338;
                                                    thunk_FUN_02dd37b4();
                                                    *(undefined8 *)(lVar12 + 0x20) =
                                                         *(undefined8 *)puVar6;
                                                    thunk_FUN_02dd37b4((undefined8 *)(lVar12 + 0x20)
                                                                      );
                                                    *(undefined4 *)(lVar12 + 0x18) = 3;
                                                    lVar9 = thunk_FUN_02d9d534(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_03aabc60(lVar9,*(undefined8 *)puVar3);
                                                    if (lVar9 != 0) {
                                                      lVar14 = *(long *)puVar4;
                                                      uVar11 = *(undefined8 *)
                                                                                                                                
                                                  Newtonsoft_Json_Linq_JToken_LineInfoAnnotation_TypeInfo
                                                  ;
                                                  lVar13 = *(long *)(lVar9 + 0x10);
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar9,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar9;
                                                  thunk_FUN_02dd37b4((long *)(lVar12 + 0x30),lVar9);
                                                  lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar9,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar13 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponent<OVRManager>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar13 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_UnderlyingSystemType__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar9 != 0) {
                                                    lVar14 = *(long *)(lVar9 + 0x10);
                                                    lVar15 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar13;
                                                      thunk_FUN_02dd37b4(plVar10,lVar13);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar9,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar9;
                                                  thunk_FUN_02dd37b4((long *)(lVar12 + 0x28),lVar9);
                                                  lVar9 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DisposableManagerSingleton>__
                                                  ;
                                                  *piVar18 = *piVar18 + 1;
                                                  lVar13 = *plVar8;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *puVar17;
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *puVar17 = uVar1 + 1;
                                                      plVar10 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar12;
                                                      thunk_FUN_02dd37b4(plVar10,lVar12);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar7,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02d9d534(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05fc094c(lVar12,0);
                                                  puVar6 = 
                                                  Method_UnityEngine_GameObject_TryGetComponent<CanvasTracker>__
                                                  ;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_TryGetComponent<RectTransform>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar12 + 0x20) =
                                                       *(undefined8 *)puVar6;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar12 + 0x20));
                                                  *(undefined4 *)(lVar12 + 0x18) = 4;
                                                  lVar9 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
                                                  FUN_03aabc60(lVar9,*(undefined8 *)puVar3);
                                                  if (lVar9 != 0) {
                                                    lVar14 = *(long *)puVar4;
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Linq_Enumerable_Count<ARAnchor>__;
                                                  lVar13 = *(long *)(lVar9 + 0x10);
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar9,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar9;
                                                  thunk_FUN_02dd37b4((long *)(lVar12 + 0x30),lVar9);
                                                  lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar9,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar13 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponentsInParent<OVRSkeleton_IOVRSkeletonDataProvider>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar13 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_UnderlyingSystemType__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar9 != 0) {
                                                    lVar14 = *(long *)(lVar9 + 0x10);
                                                    lVar15 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar13;
                                                      thunk_FUN_02dd37b4(plVar10,lVar13);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar9,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar9;
                                                  thunk_FUN_02dd37b4((long *)(lVar12 + 0x28),lVar9);
                                                  lVar9 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DisposableManagerSingleton>__
                                                  ;
                                                  *piVar18 = *piVar18 + 1;
                                                  lVar13 = *plVar8;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *puVar17;
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *puVar17 = uVar1 + 1;
                                                      plVar10 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar12;
                                                      thunk_FUN_02dd37b4(plVar10,lVar12);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar7,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02d9d534(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05fc094c(lVar12,0);
                                                  puVar6 = 
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_IsByRefImpl__
                                                  ;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetInterface__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar12 + 0x20) =
                                                       *(undefined8 *)puVar6;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar12 + 0x20));
                                                  *(undefined4 *)(lVar12 + 0x18) = 1;
                                                  lVar9 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
                                                  FUN_03aabc60(lVar9,*(undefined8 *)puVar3);
                                                  if (lVar9 != 0) {
                                                    lVar14 = *(long *)puVar4;
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_AssemblyQualifiedName__
                                                  ;
                                                  lVar13 = *(long *)(lVar9 + 0x10);
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar9,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar9;
                                                  thunk_FUN_02dd37b4((long *)(lVar12 + 0x30),lVar9);
                                                  lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar9,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar13 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureTransformationUtility_TryGetTrackableManager<ARPlaneManager>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar13 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_UnderlyingSystemType__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar9 != 0) {
                                                    lVar14 = *(long *)(lVar9 + 0x10);
                                                    lVar15 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar13;
                                                      thunk_FUN_02dd37b4(plVar10,lVar13);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar9,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar9;
                                                  thunk_FUN_02dd37b4((long *)(lVar12 + 0x28),lVar9);
                                                  lVar9 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DisposableManagerSingleton>__
                                                  ;
                                                  *piVar18 = *piVar18 + 1;
                                                  lVar13 = *plVar8;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *puVar17;
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *puVar17 = uVar1 + 1;
                                                      plVar10 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar12;
                                                      thunk_FUN_02dd37b4(plVar10,lVar12);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar7,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02d9d534(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05fc094c(lVar12,0);
                                                  puVar6 = 
                                                  Method_Unity_VisualScripting_GetDictionaryItem_Get__
                                                  ;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_Module__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar12 + 0x20) =
                                                       *(undefined8 *)puVar6;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar12 + 0x20));
                                                  *(undefined4 *)(lVar12 + 0x18) = 1;
                                                  lVar9 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
                                                  FUN_03aabc60(lVar9,*(undefined8 *)puVar3);
                                                  if (lVar9 != 0) {
                                                    lVar14 = *(long *)puVar4;
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureTransformationUtility_TryGetTrackableManager<ARPlaneManager>__
                                                  ;
                                                  lVar13 = *(long *)(lVar9 + 0x10);
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar9,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar9;
                                                  thunk_FUN_02dd37b4((long *)(lVar12 + 0x30),lVar9);
                                                  lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar9,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar13 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_IsCOMObjectImpl__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar13 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_UnderlyingSystemType__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar9 != 0) {
                                                    lVar14 = *(long *)(lVar9 + 0x10);
                                                    lVar15 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar13;
                                                      thunk_FUN_02dd37b4(plVar10,lVar13);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar9,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar9;
                                                  thunk_FUN_02dd37b4((long *)(lVar12 + 0x28),lVar9);
                                                  lVar9 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DisposableManagerSingleton>__
                                                  ;
                                                  *piVar18 = *piVar18 + 1;
                                                  lVar13 = *plVar8;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *puVar17;
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *puVar17 = uVar1 + 1;
                                                      plVar10 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar12;
                                                      thunk_FUN_02dd37b4(plVar10,lVar12);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar7,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02d9d534(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05fc094c(lVar12,0);
                                                  puVar6 = 
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_InvokeMember__
                                                  ;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureTransformationUtility_TryGetTrackableManager<ARRaycastManager>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar12 + 0x20) =
                                                       *(undefined8 *)puVar6;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar12 + 0x20));
                                                  *(undefined4 *)(lVar12 + 0x18) = 1;
                                                  lVar9 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
                                                  FUN_03aabc60(lVar9,*(undefined8 *)puVar3);
                                                  if (lVar9 != 0) {
                                                    lVar14 = *(long *)puVar4;
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_Firebase_Firestore_GeoPointProxy__ctor__;
                                                  lVar13 = *(long *)(lVar9 + 0x10);
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar9,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar9;
                                                  thunk_FUN_02dd37b4((long *)(lVar12 + 0x30),lVar9);
                                                  lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar9,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar13 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_IsPointerImpl__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar13 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_UnderlyingSystemType__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar9 != 0) {
                                                    lVar14 = *(long *)(lVar9 + 0x10);
                                                    lVar15 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar13;
                                                      thunk_FUN_02dd37b4(plVar10,lVar13);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar9,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar9;
                                                  thunk_FUN_02dd37b4((long *)(lVar12 + 0x28),lVar9);
                                                  lVar9 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DisposableManagerSingleton>__
                                                  ;
                                                  *piVar18 = *piVar18 + 1;
                                                  lVar13 = *plVar8;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *puVar17;
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *puVar17 = uVar1 + 1;
                                                      plVar10 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar12;
                                                      thunk_FUN_02dd37b4(plVar10,lVar12);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar7,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02d9d534(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05fc094c(lVar12,0);
                                                  puVar6 = 
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetProperties__
                                                  ;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureTransformationUtility_TryGetTrackableManager<ARRaycastManager>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar12 + 0x20) =
                                                       *(undefined8 *)puVar6;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar12 + 0x20));
                                                  *(undefined4 *)(lVar12 + 0x18) = 0;
                                                  lVar9 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
                                                  FUN_03aabc60(lVar9,*(undefined8 *)puVar3);
                                                  if (lVar9 != 0) {
                                                    lVar14 = *(long *)puVar4;
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetFields__
                                                  ;
                                                  lVar13 = *(long *)(lVar9 + 0x10);
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar9,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar9;
                                                  thunk_FUN_02dd37b4((long *)(lVar12 + 0x30),lVar9);
                                                  lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar9,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar13 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethodImpl__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar13 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_UnderlyingSystemType__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar9 != 0) {
                                                    lVar14 = *(long *)(lVar9 + 0x10);
                                                    lVar15 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar13;
                                                      thunk_FUN_02dd37b4(plVar10,lVar13);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar9,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar9;
                                                  thunk_FUN_02dd37b4((long *)(lVar12 + 0x28),lVar9);
                                                  lVar9 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DisposableManagerSingleton>__
                                                  ;
                                                  *piVar18 = *piVar18 + 1;
                                                  lVar13 = *plVar8;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *puVar17;
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *puVar17 = uVar1 + 1;
                                                      plVar10 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar12;
                                                      thunk_FUN_02dd37b4(plVar10,lVar12);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar7,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02d9d534(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05fc094c(lVar12,0);
                                                  puVar5 = 
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetInterfaces__
                                                  ;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Firebase_Firestore_GeoPointProxy_latitude__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar12 + 0x20) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar12 + 0x20));
                                                  *(undefined4 *)(lVar12 + 0x18) = 0;
                                                  lVar9 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
                                                  FUN_03aabc60(lVar9,*(undefined8 *)puVar3);
                                                  if (lVar9 != 0) {
                                                    lVar14 = *(long *)puVar4;
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_Namespace__
                                                  ;
                                                  lVar13 = *(long *)(lVar9 + 0x10);
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar9,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar9;
                                                  thunk_FUN_02dd37b4((long *)(lVar12 + 0x30),lVar9);
                                                  lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar9,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar13 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_Assembly__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar13 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_UnderlyingSystemType__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar9 != 0) {
                                                    lVar14 = *(long *)(lVar9 + 0x10);
                                                    lVar15 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar13;
                                                      thunk_FUN_02dd37b4(plVar10,lVar13);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar9,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar9;
                                                  thunk_FUN_02dd37b4((long *)(lVar12 + 0x28),lVar9);
                                                  lVar9 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DisposableManagerSingleton>__
                                                  ;
                                                  *piVar18 = *piVar18 + 1;
                                                  lVar13 = *plVar8;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *puVar17;
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *puVar17 = uVar1 + 1;
                                                      plVar8 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar8 = lVar12;
                                                      thunk_FUN_02dd37b4(plVar8,lVar12);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar7,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(unaff_x26 + 0x28) = lVar7;
                                                  thunk_FUN_02dd37b4((long *)(unaff_x26 + 0x28),
                                                                     lVar7);
                                                  FUN_05fc0710(unaff_x25,unaff_x26,0);
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
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


