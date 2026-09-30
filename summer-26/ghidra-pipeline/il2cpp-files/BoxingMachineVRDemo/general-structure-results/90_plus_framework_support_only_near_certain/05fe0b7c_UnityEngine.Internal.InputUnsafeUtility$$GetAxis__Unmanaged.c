/*
FUNCTION_NAME: UnityEngine.Internal.InputUnsafeUtility$$GetAxis__Unmanaged
ENTRY_POINT: 05fe0b7c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 147
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_6;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_21;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_3
*/


void UnityEngine_Internal_InputUnsafeUtility__GetAxis__Unmanaged(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  long unaff_x28;
  undefined8 *unaff_x29;
  
  FUN_03aabc60();
  puVar2 = PTR_DAT_0675eb70;
  if (unaff_x23 != 0) {
    uVar9 = *(undefined8 *)
             Method_Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_Start__;
    lVar10 = *(long *)(unaff_x23 + 0x10);
    *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
    puVar4 = Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__;
    if (lVar10 != 0) {
      uVar1 = *(uint *)(unaff_x23 + 0x18);
      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
        *(uint *)(unaff_x23 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) = uVar9;
        thunk_FUN_02dd37b4();
      }
      else {
        FUN_03aac494();
      }
      *(long *)(unaff_x22 + 0x30) = unaff_x23;
      thunk_FUN_02dd37b4();
      lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                   Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__);
      FUN_03aabc60(lVar10,*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<FixedJoint>__);
      lVar7 = thunk_FUN_02d9d534(*(undefined8 *)puVar4);
      FUN_05fc0944(lVar7,0);
      if (lVar7 != 0) {
        *(undefined8 *)(lVar7 + 0x18) =
             *(undefined8 *)Method_UnityEngine_GameObject_TryGetComponent<Canvas>__;
        thunk_FUN_02dd37b4();
        *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
        thunk_FUN_02dd37b4();
        puVar5 = Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__;
        if (lVar10 != 0) {
          lVar11 = *(long *)(lVar10 + 0x10);
          lVar12 = *(long *)Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__;
          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
          if (lVar11 != 0) {
            uVar1 = *(uint *)(lVar10 + 0x18);
            if (uVar1 < *(uint *)(lVar11 + 0x18)) {
              *(uint *)(lVar10 + 0x18) = uVar1 + 1;
              plVar8 = (long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
              *plVar8 = lVar7;
              thunk_FUN_02dd37b4(plVar8,lVar7);
            }
            else {
              FUN_03aac494(lVar10,lVar7,
                           *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
            }
            *(long *)(unaff_x22 + 0x28) = lVar10;
            thunk_FUN_02dd37b4((long *)(unaff_x22 + 0x28),lVar10);
            if (unaff_x21 != 0) {
              lVar10 = *(long *)(unaff_x21 + 0x10);
              *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
              if (lVar10 != 0) {
                uVar1 = *(uint *)(unaff_x21 + 0x18);
                if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                  *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                  *(long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) = unaff_x22;
                  thunk_FUN_02dd37b4();
                }
                else {
                  FUN_03aac494();
                }
                lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                             Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                           );
                FUN_05fc094c(lVar10,0);
                puVar3 = PTR_DAT_06762058;
                if (lVar10 != 0) {
                  *(undefined8 *)(lVar10 + 0x10) =
                       *(undefined8 *)
                        UnityEngine_XR_Interaction_Toolkit_Filtering_XRPokeLogic_TypeInfo;
                  thunk_FUN_02dd37b4();
                  *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)puVar3;
                  thunk_FUN_02dd37b4((undefined8 *)(lVar10 + 0x20));
                  *(undefined4 *)(lVar10 + 0x18) = 1;
                  lVar7 = thunk_FUN_02d9d534(*unaff_x29);
                  FUN_03aabc60(lVar7,*unaff_x27);
                  if (lVar7 != 0) {
                    uVar9 = *(undefined8 *)puVar3;
                    lVar11 = *(long *)(lVar7 + 0x10);
                    lVar12 = *(long *)puVar2;
                    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                    if (lVar11 != 0) {
                      uVar1 = *(uint *)(lVar7 + 0x18);
                      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                        *(undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20) = uVar9;
                        thunk_FUN_02dd37b4();
                      }
                      else {
                        FUN_03aac494(lVar7,uVar9,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                      }
                      *(long *)(lVar10 + 0x30) = lVar7;
                      thunk_FUN_02dd37b4((long *)(lVar10 + 0x30),lVar7);
                      lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                );
                      FUN_03aabc60(lVar7,*(undefined8 *)
                                          Method_UnityEngine_GameObject_AddComponent<FixedJoint>__);
                      lVar11 = thunk_FUN_02d9d534(*(undefined8 *)puVar4);
                      FUN_05fc0944(lVar11,0);
                      puVar3 = Method_UnityEngine_GameObject_GetComponentsInChildren<Transform>__;
                      if (lVar11 != 0) {
                        *(undefined8 *)(lVar11 + 0x18) =
                             *(undefined8 *)
                              Method_UnityEngine_GameObject_GetComponentsInChildren<Transform>__;
                        thunk_FUN_02dd37b4();
                        *(undefined8 *)(lVar11 + 0x10) = *unaff_x26;
                        thunk_FUN_02dd37b4();
                        if (lVar7 != 0) {
                          lVar12 = *(long *)(lVar7 + 0x10);
                          lVar13 = *(long *)puVar5;
                          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                          if (lVar12 != 0) {
                            uVar1 = *(uint *)(lVar7 + 0x18);
                            if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                              *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                              plVar8 = (long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
                              *plVar8 = lVar11;
                              thunk_FUN_02dd37b4(plVar8,lVar11);
                            }
                            else {
                              FUN_03aac494(lVar7,lVar11,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                            }
                            *(long *)(lVar10 + 0x28) = lVar7;
                            thunk_FUN_02dd37b4((long *)(lVar10 + 0x28),lVar7);
                            lVar7 = *(long *)(unaff_x21 + 0x10);
                            *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
                            if (lVar7 != 0) {
                              uVar1 = *(uint *)(unaff_x21 + 0x18);
                              if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                plVar8 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
                                *plVar8 = lVar10;
                                thunk_FUN_02dd37b4(plVar8,lVar10);
                              }
                              else {
                                FUN_03aac494();
                              }
                              lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                      
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                              FUN_05fc094c(lVar10,0);
                              puVar6 = Method_UnityEngine_GameObject_TryGetComponent<Collider>__;
                              if (lVar10 != 0) {
                                *(undefined8 *)(lVar10 + 0x10) =
                                     *(undefined8 *)
                                      UnityEngine_XR_ARSubsystems_XRPointCloudData_TypeInfo;
                                thunk_FUN_02dd37b4();
                                *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)puVar6;
                                thunk_FUN_02dd37b4((undefined8 *)(lVar10 + 0x20));
                                *(undefined4 *)(lVar10 + 0x18) = 0;
                                lVar7 = thunk_FUN_02d9d534(*unaff_x29);
                                FUN_03aabc60(lVar7,*unaff_x27);
                                if (lVar7 != 0) {
                                  lVar12 = *(long *)puVar2;
                                  uVar9 = *(undefined8 *)Method_UnityEngine_Color32_get_Item__;
                                  lVar11 = *(long *)(lVar7 + 0x10);
                                  *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                                  if (lVar11 != 0) {
                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                      *(undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20) = uVar9;
                                      thunk_FUN_02dd37b4();
                                    }
                                    else {
                                      FUN_03aac494(lVar7,uVar9,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) +
                                                    0x70));
                                    }
                                    *(long *)(lVar10 + 0x30) = lVar7;
                                    thunk_FUN_02dd37b4((long *)(lVar10 + 0x30),lVar7);
                                    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                    FUN_03aabc60(lVar7,*(undefined8 *)
                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                );
                                    lVar11 = thunk_FUN_02d9d534(*(undefined8 *)puVar4);
                                    FUN_05fc0944(lVar11,0);
                                    if (lVar11 != 0) {
                                      *(undefined8 *)(lVar11 + 0x18) = *(undefined8 *)puVar3;
                                      thunk_FUN_02dd37b4();
                                      *(undefined8 *)(lVar11 + 0x10) = *unaff_x26;
                                      thunk_FUN_02dd37b4();
                                      if (lVar7 != 0) {
                                        lVar12 = *(long *)(lVar7 + 0x10);
                                        lVar13 = *(long *)puVar5;
                                        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                                        if (lVar12 != 0) {
                                          uVar1 = *(uint *)(lVar7 + 0x18);
                                          if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                            *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                            plVar8 = (long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
                                            *plVar8 = lVar11;
                                            thunk_FUN_02dd37b4(plVar8,lVar11);
                                          }
                                          else {
                                            FUN_03aac494(lVar7,lVar11,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0
                                                                    ) + 0x70));
                                          }
                                          *(long *)(lVar10 + 0x28) = lVar7;
                                          thunk_FUN_02dd37b4((long *)(lVar10 + 0x28),lVar7);
                                          lVar7 = *(long *)(unaff_x21 + 0x10);
                                          *(int *)(unaff_x21 + 0x1c) =
                                               *(int *)(unaff_x21 + 0x1c) + 1;
                                          if (lVar7 != 0) {
                                            uVar1 = *(uint *)(unaff_x21 + 0x18);
                                            if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                              *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                              plVar8 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20)
                                              ;
                                              *plVar8 = lVar10;
                                              thunk_FUN_02dd37b4(plVar8,lVar10);
                                            }
                                            else {
                                              FUN_03aac494();
                                            }
                                            lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                  
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                            FUN_05fc094c(lVar10,0);
                                            puVar3 = PTR_DAT_06761180;
                                            if (lVar10 != 0) {
                                              *(undefined8 *)(lVar10 + 0x10) =
                                                   *(undefined8 *)PTR_DAT_0676a290;
                                              thunk_FUN_02dd37b4();
                                              *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)puVar3
                                              ;
                                              thunk_FUN_02dd37b4((undefined8 *)(lVar10 + 0x20));
                                              *(undefined4 *)(lVar10 + 0x18) = 0;
                                              lVar7 = thunk_FUN_02d9d534(*unaff_x29);
                                              FUN_03aabc60(lVar7,*unaff_x27);
                                              if (lVar7 != 0) {
                                                lVar12 = *(long *)puVar2;
                                                uVar9 = *(undefined8 *)
                                                                                                                  
                                                  Method_VRUIP_ColorPickerController_OnSliderValueChanged__
                                                ;
                                                lVar11 = *(long *)(lVar7 + 0x10);
                                                *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                                                if (lVar11 != 0) {
                                                  uVar1 = *(uint *)(lVar7 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                    *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                    *(undefined8 *)
                                                     (lVar11 + (long)(int)uVar1 * 8 + 0x20) = uVar9;
                                                    thunk_FUN_02dd37b4();
                                                  }
                                                  else {
                                                    FUN_03aac494(lVar7,uVar9,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar12 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar7;
                                                  thunk_FUN_02dd37b4((long *)(lVar10 + 0x30),lVar7);
                                                  lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar7,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar11 = thunk_FUN_02d9d534(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_05fc0944(lVar11,0);
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponentsInChildren<ParticleSystem>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar11 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dd37b4();
                                                  lVar12 = thunk_FUN_02d9d534(*unaff_x29);
                                                  FUN_03aabc60(lVar12,*unaff_x27);
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)puVar2;
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_GameObject_AddComponent<OpenXRRestarter>__
                                                  ;
                                                  lVar13 = *(long *)(lVar12 + 0x10);
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar9;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar12,uVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x20) = lVar12;
                                                  thunk_FUN_02dd37b4((long *)(lVar11 + 0x20),lVar12)
                                                  ;
                                                  if (lVar7 != 0) {
                                                    lVar12 = *(long *)(lVar7 + 0x10);
                                                    lVar13 = *(long *)puVar5;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar12 != 0) {
                                                      uVar1 = *(uint *)(lVar7 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                        plVar8 = (long *)(lVar12 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar8 = lVar11;
                                                        thunk_FUN_02dd37b4(plVar8,lVar11);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar7,lVar11,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = thunk_FUN_02d9d534(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_05fc0944(lVar11,0);
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_GazeInputManager_OnDeviceChange__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar11 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dd37b4();
                                                  lVar12 = thunk_FUN_02d9d534(*unaff_x29);
                                                  FUN_03aabc60(lVar12,*unaff_x27);
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)puVar2;
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_GameObject_AddComponent<MeshCollider>__
                                                  ;
                                                  lVar13 = *(long *)(lVar12 + 0x10);
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar9;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar12,uVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x20) = lVar12;
                                                  thunk_FUN_02dd37b4((long *)(lVar11 + 0x20),lVar12)
                                                  ;
                                                  lVar12 = *(long *)(lVar7 + 0x10);
                                                  lVar13 = *(long *)puVar5;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      plVar8 = (long *)(lVar12 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar8 = lVar11;
                                                      thunk_FUN_02dd37b4(plVar8,lVar11);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar7,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar7;
                                                  thunk_FUN_02dd37b4((long *)(lVar10 + 0x28),lVar7);
                                                  lVar7 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar8 = (long *)(lVar7 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar8 = lVar10;
                                                      thunk_FUN_02dd37b4(plVar8,lVar10);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                  
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar10,0);
                                                  puVar3 = 
                                                  Method_UnityEngine_GameObject_TryGetComponent<DebugUIHandlerColor>__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_ARSubsystems_XRReferenceImageLibrary_TypeInfo
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar10 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar10 + 0x20));
                                                  *(undefined4 *)(lVar10 + 0x18) = 0;
                                                  lVar7 = thunk_FUN_02d9d534(*unaff_x29);
                                                  FUN_03aabc60(lVar7,*unaff_x27);
                                                  if (lVar7 != 0) {
                                                    lVar12 = *(long *)puVar2;
                                                    uVar9 = *(undefined8 *)
                                                             Method_UnityEngine_Color_set_Item__;
                                                    lVar11 = *(long *)(lVar7 + 0x10);
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar11 != 0) {
                                                      uVar1 = *(uint *)(lVar7 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar11 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar9;
                                                        thunk_FUN_02dd37b4();
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar7,uVar9,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar7;
                                                  thunk_FUN_02dd37b4((long *)(lVar10 + 0x30),lVar7);
                                                  lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar7,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar11 = thunk_FUN_02d9d534(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_05fc0944(lVar11,0);
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_TryGetComponent<PlayableDirector>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar11 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dd37b4();
                                                  lVar12 = thunk_FUN_02d9d534(*unaff_x29);
                                                  FUN_03aabc60(lVar12,*unaff_x27);
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)puVar2;
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_GameObject_AddComponent<OpenXRRestarter>__
                                                  ;
                                                  lVar13 = *(long *)(lVar12 + 0x10);
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar9;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar12,uVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x20) = lVar12;
                                                  thunk_FUN_02dd37b4((long *)(lVar11 + 0x20),lVar12)
                                                  ;
                                                  if (lVar7 != 0) {
                                                    lVar12 = *(long *)(lVar7 + 0x10);
                                                    lVar13 = *(long *)puVar5;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar12 != 0) {
                                                      uVar1 = *(uint *)(lVar7 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                        plVar8 = (long *)(lVar12 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar8 = lVar11;
                                                        thunk_FUN_02dd37b4(plVar8,lVar11);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar7,lVar11,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = thunk_FUN_02d9d534(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_05fc0944(lVar11,0);
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_TryGetComponent<GraphicRaycaster>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar11 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dd37b4();
                                                  lVar12 = thunk_FUN_02d9d534(*unaff_x29);
                                                  FUN_03aabc60(lVar12,*unaff_x27);
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)puVar2;
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_GameObject_AddComponent<MeshCollider>__
                                                  ;
                                                  lVar13 = *(long *)(lVar12 + 0x10);
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar9;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar12,uVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x20) = lVar12;
                                                  thunk_FUN_02dd37b4((long *)(lVar11 + 0x20),lVar12)
                                                  ;
                                                  lVar12 = *(long *)(lVar7 + 0x10);
                                                  lVar13 = *(long *)puVar5;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      plVar8 = (long *)(lVar12 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar8 = lVar11;
                                                      thunk_FUN_02dd37b4(plVar8,lVar11);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar7,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar7;
                                                  thunk_FUN_02dd37b4((long *)(lVar10 + 0x28),lVar7);
                                                  lVar7 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar8 = (long *)(lVar7 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar8 = lVar10;
                                                      thunk_FUN_02dd37b4(plVar8,lVar10);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                  
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar10,0);
                                                  puVar3 = 
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_HasElementTypeImpl__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Filtering_XRTargetFilter_TypeInfo
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar10 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar10 + 0x20));
                                                  *(undefined4 *)(lVar10 + 0x18) = 0;
                                                  lVar7 = thunk_FUN_02d9d534(*unaff_x29);
                                                  FUN_03aabc60(lVar7,*unaff_x27);
                                                  if (lVar7 != 0) {
                                                    lVar12 = *(long *)puVar2;
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_UIElements_ColumnLayout_<RecomputeToMinWidthProportionally>b__54_0__
                                                  ;
                                                  lVar11 = *(long *)(lVar7 + 0x10);
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar11 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar9;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar7,uVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar7;
                                                  thunk_FUN_02dd37b4((long *)(lVar10 + 0x30),lVar7);
                                                  lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar7,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar11 = thunk_FUN_02d9d534(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_05fc0944(lVar11,0);
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_IsDefined__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar11 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dd37b4();
                                                  lVar12 = thunk_FUN_02d9d534(*unaff_x29);
                                                  FUN_03aabc60(lVar12,*unaff_x27);
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)puVar2;
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_GameObject_AddComponent<OpenXRRestarter>__
                                                  ;
                                                  lVar13 = *(long *)(lVar12 + 0x10);
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar9;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar12,uVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x20) = lVar12;
                                                  thunk_FUN_02dd37b4((long *)(lVar11 + 0x20),lVar12)
                                                  ;
                                                  if (lVar7 != 0) {
                                                    lVar12 = *(long *)(lVar7 + 0x10);
                                                    lVar13 = *(long *)puVar5;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar12 != 0) {
                                                      uVar1 = *(uint *)(lVar7 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                        plVar8 = (long *)(lVar12 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar8 = lVar11;
                                                        thunk_FUN_02dd37b4(plVar8,lVar11);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar7,lVar11,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = thunk_FUN_02d9d534(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_05fc0944(lVar11,0);
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x18) =
                                                         *(undefined8 *)
                                                          Method_Firebase_Firestore_GeoPoint__ctor__
                                                    ;
                                                    thunk_FUN_02dd37b4();
                                                    *(undefined8 *)(lVar11 + 0x10) = *unaff_x26;
                                                    thunk_FUN_02dd37b4();
                                                    lVar12 = thunk_FUN_02d9d534(*unaff_x29);
                                                    FUN_03aabc60(lVar12,*unaff_x27);
                                                    if (lVar12 != 0) {
                                                      lVar14 = *(long *)puVar2;
                                                      uVar9 = *(undefined8 *)
                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<MeshCollider>__
                                                  ;
                                                  lVar13 = *(long *)(lVar12 + 0x10);
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar9;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar12,uVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x20) = lVar12;
                                                  thunk_FUN_02dd37b4((long *)(lVar11 + 0x20),lVar12)
                                                  ;
                                                  lVar12 = *(long *)(lVar7 + 0x10);
                                                  lVar13 = *(long *)puVar5;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      plVar8 = (long *)(lVar12 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar8 = lVar11;
                                                      thunk_FUN_02dd37b4(plVar8,lVar11);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar7,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar7;
                                                  thunk_FUN_02dd37b4((long *)(lVar10 + 0x28),lVar7);
                                                  lVar7 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar8 = (long *)(lVar7 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar8 = lVar10;
                                                      thunk_FUN_02dd37b4(plVar8,lVar10);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                  
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar10,0);
                                                  puVar3 = 
                                                  Method_UnityEngine_GameObject_TryGetComponent<CharacterController>__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_ARSubsystems_XRReferenceObject_TypeInfo
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar10 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar10 + 0x20));
                                                  *(undefined4 *)(lVar10 + 0x18) = 0;
                                                  lVar7 = thunk_FUN_02d9d534(*unaff_x29);
                                                  FUN_03aabc60(lVar7,*unaff_x27);
                                                  if (lVar7 != 0) {
                                                    lVar12 = *(long *)puVar2;
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_UIElements_ColumnLayout_<RecomputeToMaxWidthProportionally>b__53_0__
                                                  ;
                                                  lVar11 = *(long *)(lVar7 + 0x10);
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar11 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar9;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar7,uVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar7;
                                                  thunk_FUN_02dd37b4((long *)(lVar10 + 0x30),lVar7);
                                                  lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar7,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar11 = thunk_FUN_02d9d534(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_05fc0944(lVar11,0);
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_TryGetComponent<LineRenderer>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar11 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dd37b4();
                                                  lVar12 = thunk_FUN_02d9d534(*unaff_x29);
                                                  FUN_03aabc60(lVar12,*unaff_x27);
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)puVar2;
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_GameObject_AddComponent<OpenXRRestarter>__
                                                  ;
                                                  lVar13 = *(long *)(lVar12 + 0x10);
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar9;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar12,uVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x20) = lVar12;
                                                  thunk_FUN_02dd37b4((long *)(lVar11 + 0x20),lVar12)
                                                  ;
                                                  if (lVar7 != 0) {
                                                    lVar12 = *(long *)(lVar7 + 0x10);
                                                    lVar13 = *(long *)puVar5;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar12 != 0) {
                                                      uVar1 = *(uint *)(lVar7 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                        plVar8 = (long *)(lVar12 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar8 = lVar11;
                                                        thunk_FUN_02dd37b4(plVar8,lVar11);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar7,lVar11,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = thunk_FUN_02d9d534(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_05fc0944(lVar11,0);
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_TryGetComponent<DebugUIHandlerObjectList>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar11 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dd37b4();
                                                  lVar12 = thunk_FUN_02d9d534(*unaff_x29);
                                                  FUN_03aabc60(lVar12,*unaff_x27);
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)puVar2;
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_GameObject_AddComponent<MeshCollider>__
                                                  ;
                                                  lVar13 = *(long *)(lVar12 + 0x10);
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar9;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar12,uVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x20) = lVar12;
                                                  thunk_FUN_02dd37b4((long *)(lVar11 + 0x20),lVar12)
                                                  ;
                                                  lVar12 = *(long *)(lVar7 + 0x10);
                                                  lVar13 = *(long *)puVar5;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      plVar8 = (long *)(lVar12 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar8 = lVar11;
                                                      thunk_FUN_02dd37b4(plVar8,lVar11);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar7,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar7;
                                                  thunk_FUN_02dd37b4((long *)(lVar10 + 0x28),lVar7);
                                                  lVar7 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar8 = (long *)(lVar7 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar8 = lVar10;
                                                      thunk_FUN_02dd37b4(plVar8,lVar10);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                  
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar10,0);
                                                  puVar3 = 
                                                  Method_Firebase_Firestore_GeoPointProxy_swigRelease__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Filtering_XRTargetEvaluator_TypeInfo
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar10 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar10 + 0x20));
                                                  *(undefined4 *)(lVar10 + 0x18) = 0;
                                                  lVar7 = thunk_FUN_02d9d534(*unaff_x29);
                                                  FUN_03aabc60(lVar7,*unaff_x27);
                                                  if (lVar7 != 0) {
                                                    lVar12 = *(long *)puVar2;
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  Method_Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_OnSessionDiscoveredWithSpatialAnchor__
                                                  ;
                                                  lVar11 = *(long *)(lVar7 + 0x10);
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar11 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar9;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar7,uVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar7;
                                                  thunk_FUN_02dd37b4((long *)(lVar10 + 0x30),lVar7);
                                                  lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar7,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar11 = thunk_FUN_02d9d534(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_05fc0944(lVar11,0);
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_BaseType__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar11 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dd37b4();
                                                  lVar12 = thunk_FUN_02d9d534(*unaff_x29);
                                                  FUN_03aabc60(lVar12,*unaff_x27);
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)puVar2;
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_GameObject_AddComponent<OpenXRRestarter>__
                                                  ;
                                                  lVar13 = *(long *)(lVar12 + 0x10);
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar9;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar12,uVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x20) = lVar12;
                                                  thunk_FUN_02dd37b4((long *)(lVar11 + 0x20),lVar12)
                                                  ;
                                                  if (lVar7 != 0) {
                                                    lVar12 = *(long *)(lVar7 + 0x10);
                                                    lVar13 = *(long *)puVar5;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar12 != 0) {
                                                      uVar1 = *(uint *)(lVar7 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                        plVar8 = (long *)(lVar12 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar8 = lVar11;
                                                        thunk_FUN_02dd37b4(plVar8,lVar11);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar7,lVar11,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = thunk_FUN_02d9d534(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_05fc0944(lVar11,0);
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Firebase_Firestore_GeoPointProxy_longitude__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar11 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dd37b4();
                                                  lVar12 = thunk_FUN_02d9d534(*unaff_x29);
                                                  FUN_03aabc60(lVar12,*unaff_x27);
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)puVar2;
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_GameObject_AddComponent<MeshCollider>__
                                                  ;
                                                  lVar13 = *(long *)(lVar12 + 0x10);
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar9;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar12,uVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x20) = lVar12;
                                                  thunk_FUN_02dd37b4((long *)(lVar11 + 0x20),lVar12)
                                                  ;
                                                  lVar12 = *(long *)(lVar7 + 0x10);
                                                  lVar13 = *(long *)puVar5;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      plVar8 = (long *)(lVar12 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar8 = lVar11;
                                                      thunk_FUN_02dd37b4(plVar8,lVar11);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar7,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar7;
                                                  thunk_FUN_02dd37b4((long *)(lVar10 + 0x28),lVar7);
                                                  lVar7 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar8 = (long *)(lVar7 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar8 = lVar10;
                                                      thunk_FUN_02dd37b4(plVar8,lVar10);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                  
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar10,0);
                                                  puVar3 = PTR_DAT_06762060;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_0676c270;
                                                    thunk_FUN_02dd37b4();
                                                    *(undefined8 *)(lVar10 + 0x20) =
                                                         *(undefined8 *)puVar3;
                                                    thunk_FUN_02dd37b4((undefined8 *)(lVar10 + 0x20)
                                                                      );
                                                    *(undefined4 *)(lVar10 + 0x18) = 1;
                                                    lVar7 = thunk_FUN_02d9d534(*unaff_x29);
                                                    FUN_03aabc60(lVar7,*unaff_x27);
                                                    if (lVar7 != 0) {
                                                      uVar9 = *(undefined8 *)puVar3;
                                                      lVar11 = *(long *)(lVar7 + 0x10);
                                                      lVar12 = *(long *)puVar2;
                                                      *(int *)(lVar7 + 0x1c) =
                                                           *(int *)(lVar7 + 0x1c) + 1;
                                                      if (lVar11 != 0) {
                                                        uVar1 = *(uint *)(lVar7 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                          *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                          *(undefined8 *)
                                                           (lVar11 + (long)(int)uVar1 * 8 + 0x20) =
                                                               uVar9;
                                                          thunk_FUN_02dd37b4();
                                                        }
                                                        else {
                                                          FUN_03aac494(lVar7,uVar9,
                                                                       *(undefined8 *)
                                                                        (*(long *)(*(long *)(lVar12 
                                                  + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar7;
                                                  thunk_FUN_02dd37b4((long *)(lVar10 + 0x30),lVar7);
                                                  lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar7,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar11 = thunk_FUN_02d9d534(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_05fc0944(lVar11,0);
                                                  puVar3 = 
                                                  Method_UnityEngine_GameObject_TryGetComponent<JointVisualizer>__
                                                  ;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_TryGetComponent<JointVisualizer>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar11 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar7 != 0) {
                                                    lVar12 = *(long *)(lVar7 + 0x10);
                                                    lVar13 = *(long *)puVar5;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar12 != 0) {
                                                      uVar1 = *(uint *)(lVar7 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                        plVar8 = (long *)(lVar12 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar8 = lVar11;
                                                        thunk_FUN_02dd37b4(plVar8,lVar11);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar7,lVar11,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar7;
                                                  thunk_FUN_02dd37b4((long *)(lVar10 + 0x28),lVar7);
                                                  lVar7 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar8 = (long *)(lVar7 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar8 = lVar10;
                                                      thunk_FUN_02dd37b4(plVar8,lVar10);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                  
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar10,0);
                                                  puVar6 = 
                                                  Method_UnityEngine_GameObject_TryGetComponent<Renderer>__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_ARSubsystems_XRRaycast_TypeInfo;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar10 + 0x20) =
                                                       *(undefined8 *)puVar6;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar10 + 0x20));
                                                  *(undefined4 *)(lVar10 + 0x18) = 0;
                                                  lVar7 = thunk_FUN_02d9d534(*unaff_x29);
                                                  FUN_03aabc60(lVar7,*unaff_x27);
                                                  if (lVar7 != 0) {
                                                    lVar12 = *(long *)puVar2;
                                                    uVar9 = *(undefined8 *)
                                                             Method_UnityEngine_Color_get_Item__;
                                                    lVar11 = *(long *)(lVar7 + 0x10);
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar11 != 0) {
                                                      uVar1 = *(uint *)(lVar7 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar11 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar9;
                                                        thunk_FUN_02dd37b4();
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar7,uVar9,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar7;
                                                  thunk_FUN_02dd37b4((long *)(lVar10 + 0x30),lVar7);
                                                  lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar7,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar11 = thunk_FUN_02d9d534(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_05fc0944(lVar11,0);
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x18) =
                                                         *(undefined8 *)puVar3;
                                                    thunk_FUN_02dd37b4();
                                                    *(undefined8 *)(lVar11 + 0x10) = *unaff_x26;
                                                    thunk_FUN_02dd37b4();
                                                    if (lVar7 != 0) {
                                                      lVar12 = *(long *)(lVar7 + 0x10);
                                                      lVar13 = *(long *)puVar5;
                                                      *(int *)(lVar7 + 0x1c) =
                                                           *(int *)(lVar7 + 0x1c) + 1;
                                                      if (lVar12 != 0) {
                                                        uVar1 = *(uint *)(lVar7 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                          *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                          plVar8 = (long *)(lVar12 + (long)(int)
                                                  uVar1 * 8 + 0x20);
                                                  *plVar8 = lVar11;
                                                  thunk_FUN_02dd37b4(plVar8,lVar11);
                                                  }
                                                  else {
                                                    FUN_03aac494(lVar7,lVar11,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar13 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar7;
                                                  thunk_FUN_02dd37b4((long *)(lVar10 + 0x28),lVar7);
                                                  lVar7 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar8 = (long *)(lVar7 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar8 = lVar10;
                                                      thunk_FUN_02dd37b4(plVar8,lVar10);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                  
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar10,0);
                                                  puVar3 = 
                                                  Method_Unity_VisualScripting_GetListItem_Get__;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar10 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar10 + 0x20));
                                                  *(undefined4 *)(lVar10 + 0x18) = 0;
                                                  lVar7 = thunk_FUN_02d9d534(*unaff_x29);
                                                  FUN_03aabc60(lVar7,*unaff_x27);
                                                  if (lVar7 != 0) {
                                                    lVar12 = *(long *)puVar2;
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethods__
                                                  ;
                                                  lVar11 = *(long *)(lVar7 + 0x10);
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar11 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar9;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar7,uVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar7;
                                                  thunk_FUN_02dd37b4((long *)(lVar10 + 0x30),lVar7);
                                                  lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar7,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar11 = thunk_FUN_02d9d534(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_05fc0944(lVar11,0);
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetNestedType__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar11 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar7 != 0) {
                                                    lVar12 = *(long *)(lVar7 + 0x10);
                                                    lVar13 = *(long *)puVar5;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar12 != 0) {
                                                      uVar1 = *(uint *)(lVar7 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                        plVar8 = (long *)(lVar12 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar8 = lVar11;
                                                        thunk_FUN_02dd37b4(plVar8,lVar11);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar7,lVar11,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar7;
                                                  thunk_FUN_02dd37b4((long *)(lVar10 + 0x28),lVar7);
                                                  lVar7 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar8 = (long *)(lVar7 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar8 = lVar10;
                                                      thunk_FUN_02dd37b4(plVar8,lVar10);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                  
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar10,0);
                                                  puVar3 = 
                                                  Method_UnityEngine_GameObject_GetComponentsInParent<Canvas>__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_XRScreenSpaceController_TypeInfo
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar10 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar10 + 0x20));
                                                  *(undefined4 *)(lVar10 + 0x18) = 0;
                                                  lVar7 = thunk_FUN_02d9d534(*unaff_x29);
                                                  FUN_03aabc60(lVar7,*unaff_x27);
                                                  if (lVar7 != 0) {
                                                    lVar12 = *(long *)puVar2;
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_UIElements_ColumnLayout_<DoLayout>b__49_0__
                                                  ;
                                                  lVar11 = *(long *)(lVar7 + 0x10);
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar11 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar9;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar7,uVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar7;
                                                  thunk_FUN_02dd37b4((long *)(lVar10 + 0x30),lVar7);
                                                  lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar7,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar11 = thunk_FUN_02d9d534(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_05fc0944(lVar11,0);
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponentsInParent<RectMask2D>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar11 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar7 != 0) {
                                                    lVar12 = *(long *)(lVar7 + 0x10);
                                                    lVar13 = *(long *)puVar5;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar12 != 0) {
                                                      uVar1 = *(uint *)(lVar7 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                        plVar8 = (long *)(lVar12 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar8 = lVar11;
                                                        thunk_FUN_02dd37b4(plVar8,lVar11);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar7,lVar11,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar7;
                                                  thunk_FUN_02dd37b4((long *)(lVar10 + 0x28),lVar7);
                                                  lVar7 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar8 = (long *)(lVar7 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar8 = lVar10;
                                                      thunk_FUN_02dd37b4(plVar8,lVar10);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                  
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar10,0);
                                                  puVar3 = 
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_FullName__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_ARSubsystems_XRResultStatus_TypeInfo
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar10 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar10 + 0x20));
                                                  *(undefined4 *)(lVar10 + 0x18) = 0;
                                                  lVar7 = thunk_FUN_02d9d534(*unaff_x29);
                                                  FUN_03aabc60(lVar7,*unaff_x27);
                                                  if (lVar7 != 0) {
                                                    lVar12 = *(long *)puVar2;
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_UIElements_ColumnLayout_<DoLayout>b__49_1__
                                                  ;
                                                  lVar11 = *(long *)(lVar7 + 0x10);
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar11 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar9;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar7,uVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar7;
                                                  thunk_FUN_02dd37b4((long *)(lVar10 + 0x30),lVar7);
                                                  lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar7,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar11 = thunk_FUN_02d9d534(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_05fc0944(lVar11,0);
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetPropertyImpl__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar11 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar7 != 0) {
                                                    lVar12 = *(long *)(lVar7 + 0x10);
                                                    lVar13 = *(long *)puVar5;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar12 != 0) {
                                                      uVar1 = *(uint *)(lVar7 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                        plVar8 = (long *)(lVar12 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar8 = lVar11;
                                                        thunk_FUN_02dd37b4(plVar8,lVar11);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar7,lVar11,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar7;
                                                  thunk_FUN_02dd37b4((long *)(lVar10 + 0x28),lVar7);
                                                  lVar7 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar8 = (long *)(lVar7 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar8 = lVar10;
                                                      thunk_FUN_02dd37b4(plVar8,lVar10);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                  
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar10,0);
                                                  puVar3 = 
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_IsPrimitiveImpl__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_Name__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar10 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar10 + 0x20));
                                                  *(undefined4 *)(lVar10 + 0x18) = 0;
                                                  lVar7 = thunk_FUN_02d9d534(*unaff_x29);
                                                  FUN_03aabc60(lVar7,*unaff_x27);
                                                  if (lVar7 != 0) {
                                                    lVar12 = *(long *)puVar2;
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMembers__
                                                  ;
                                                  lVar11 = *(long *)(lVar7 + 0x10);
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar11 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar9;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar7,uVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar7;
                                                  thunk_FUN_02dd37b4((long *)(lVar10 + 0x30),lVar7);
                                                  lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar7,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar11 = thunk_FUN_02d9d534(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_05fc0944(lVar11,0);
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_IsArrayImpl__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar11 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar7 != 0) {
                                                    lVar12 = *(long *)(lVar7 + 0x10);
                                                    lVar13 = *(long *)puVar5;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar12 != 0) {
                                                      uVar1 = *(uint *)(lVar7 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                        plVar8 = (long *)(lVar12 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar8 = lVar11;
                                                        thunk_FUN_02dd37b4(plVar8,lVar11);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar7,lVar11,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar7;
                                                  thunk_FUN_02dd37b4((long *)(lVar10 + 0x28),lVar7);
                                                  lVar7 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar8 = (long *)(lVar7 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar8 = lVar10;
                                                      thunk_FUN_02dd37b4(plVar8,lVar10);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                  
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar10,0);
                                                  puVar3 = 
                                                  Method_UnityEngine_GameObject_GetComponent<ParticleSystem>__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponent<NavMeshAgent>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar10 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar10 + 0x20));
                                                  *(undefined4 *)(lVar10 + 0x18) = 3;
                                                  lVar7 = thunk_FUN_02d9d534(*unaff_x29);
                                                  FUN_03aabc60(lVar7,*unaff_x27);
                                                  if (lVar7 != 0) {
                                                    lVar12 = *(long *)puVar2;
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_GameObject_GetComponent<InputField>__
                                                  ;
                                                  lVar11 = *(long *)(lVar7 + 0x10);
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar11 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar9;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar7,uVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar7;
                                                  thunk_FUN_02dd37b4((long *)(lVar10 + 0x30),lVar7);
                                                  lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar7,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar11 = thunk_FUN_02d9d534(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_05fc0944(lVar11,0);
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponent<Renderer>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar11 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar7 != 0) {
                                                    lVar12 = *(long *)(lVar7 + 0x10);
                                                    lVar13 = *(long *)puVar5;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar12 != 0) {
                                                      uVar1 = *(uint *)(lVar7 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                        plVar8 = (long *)(lVar12 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar8 = lVar11;
                                                        thunk_FUN_02dd37b4(plVar8,lVar11);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar7,lVar11,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar7;
                                                  thunk_FUN_02dd37b4((long *)(lVar10 + 0x28),lVar7);
                                                  lVar7 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar8 = (long *)(lVar7 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar8 = lVar10;
                                                      thunk_FUN_02dd37b4(plVar8,lVar10);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                  
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar10,0);
                                                  puVar3 = 
                                                  Method_UnityEngine_GameObject_GetComponent<MeshRenderer>__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_06779338;
                                                    thunk_FUN_02dd37b4();
                                                    *(undefined8 *)(lVar10 + 0x20) =
                                                         *(undefined8 *)puVar3;
                                                    thunk_FUN_02dd37b4((undefined8 *)(lVar10 + 0x20)
                                                                      );
                                                    *(undefined4 *)(lVar10 + 0x18) = 3;
                                                    lVar7 = thunk_FUN_02d9d534(*unaff_x29);
                                                    FUN_03aabc60(lVar7,*unaff_x27);
                                                    if (lVar7 != 0) {
                                                      lVar12 = *(long *)puVar2;
                                                      uVar9 = *(undefined8 *)
                                                                                                                              
                                                  Newtonsoft_Json_Linq_JToken_LineInfoAnnotation_TypeInfo
                                                  ;
                                                  lVar11 = *(long *)(lVar7 + 0x10);
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar11 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar9;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar7,uVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar7;
                                                  thunk_FUN_02dd37b4((long *)(lVar10 + 0x30),lVar7);
                                                  lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar7,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar11 = thunk_FUN_02d9d534(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_05fc0944(lVar11,0);
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponent<OVRManager>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar11 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar7 != 0) {
                                                    lVar12 = *(long *)(lVar7 + 0x10);
                                                    lVar13 = *(long *)puVar5;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar12 != 0) {
                                                      uVar1 = *(uint *)(lVar7 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                        plVar8 = (long *)(lVar12 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar8 = lVar11;
                                                        thunk_FUN_02dd37b4(plVar8,lVar11);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar7,lVar11,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar7;
                                                  thunk_FUN_02dd37b4((long *)(lVar10 + 0x28),lVar7);
                                                  lVar7 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar8 = (long *)(lVar7 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar8 = lVar10;
                                                      thunk_FUN_02dd37b4(plVar8,lVar10);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                  
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar10,0);
                                                  puVar3 = 
                                                  Method_UnityEngine_GameObject_TryGetComponent<CanvasTracker>__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_TryGetComponent<RectTransform>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar10 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar10 + 0x20));
                                                  *(undefined4 *)(lVar10 + 0x18) = 4;
                                                  lVar7 = thunk_FUN_02d9d534(*unaff_x29);
                                                  FUN_03aabc60(lVar7,*unaff_x27);
                                                  if (lVar7 != 0) {
                                                    lVar12 = *(long *)puVar2;
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Linq_Enumerable_Count<ARAnchor>__;
                                                  lVar11 = *(long *)(lVar7 + 0x10);
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar11 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar9;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar7,uVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar7;
                                                  thunk_FUN_02dd37b4((long *)(lVar10 + 0x30),lVar7);
                                                  lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar7,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar11 = thunk_FUN_02d9d534(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_05fc0944(lVar11,0);
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponentsInParent<OVRSkeleton_IOVRSkeletonDataProvider>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar11 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar7 != 0) {
                                                    lVar12 = *(long *)(lVar7 + 0x10);
                                                    lVar13 = *(long *)puVar5;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar12 != 0) {
                                                      uVar1 = *(uint *)(lVar7 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                        plVar8 = (long *)(lVar12 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar8 = lVar11;
                                                        thunk_FUN_02dd37b4(plVar8,lVar11);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar7,lVar11,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar7;
                                                  thunk_FUN_02dd37b4((long *)(lVar10 + 0x28),lVar7);
                                                  lVar7 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar8 = (long *)(lVar7 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar8 = lVar10;
                                                      thunk_FUN_02dd37b4(plVar8,lVar10);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    *(long *)(unaff_x28 + 0x28) = unaff_x21;
                                                    thunk_FUN_02dd37b4();
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
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


