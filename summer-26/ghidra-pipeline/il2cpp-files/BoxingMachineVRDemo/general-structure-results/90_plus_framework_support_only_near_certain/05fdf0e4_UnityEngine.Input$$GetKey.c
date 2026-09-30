/*
FUNCTION_NAME: UnityEngine.Input$$GetKey
ENTRY_POINT: 05fdf0e4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 134
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_5;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_3
*/


void UnityEngine_Input__GetKey(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000008;
  
  FUN_03aabc60(param_2,*param_1);
  if (param_2 != 0) {
    lVar7 = *unaff_x26;
    uVar4 = *(undefined8 *)
             Method_Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_OnDestroy__;
    lVar5 = *(long *)(param_2 + 0x10);
    *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
    if (lVar5 != 0) {
      uVar1 = *(uint *)(param_2 + 0x18);
      if (uVar1 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)(param_2 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = uVar4;
        thunk_FUN_02dd37b4();
      }
      else {
        FUN_03aac494(param_2,uVar4,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70)
                    );
      }
      *(long *)(unaff_x22 + 0x30) = param_2;
      thunk_FUN_02dd37b4((long *)(unaff_x22 + 0x30),param_2);
      lVar5 = thunk_FUN_02d9d534(*(undefined8 *)
                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__);
      FUN_03aabc60(lVar5,*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<FixedJoint>__);
      lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                );
      FUN_05fc0944(lVar7,0);
      if (lVar7 != 0) {
        *(undefined8 *)(lVar7 + 0x18) =
             *(undefined8 *)Method_UnityEngine_UIElements_GenericDropdownMenu_Apply__;
        thunk_FUN_02dd37b4();
        *(undefined8 *)(lVar7 + 0x10) = *unaff_x29;
        thunk_FUN_02dd37b4();
        if (lVar5 != 0) {
          lVar6 = *(long *)(lVar5 + 0x10);
          lVar8 = *unaff_x27;
          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
          if (lVar6 != 0) {
            uVar1 = *(uint *)(lVar5 + 0x18);
            if (uVar1 < *(uint *)(lVar6 + 0x18)) {
              *(uint *)(lVar5 + 0x18) = uVar1 + 1;
              plVar3 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
              *plVar3 = lVar7;
              thunk_FUN_02dd37b4(plVar3,lVar7);
            }
            else {
              FUN_03aac494(lVar5,lVar7,
                           *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
            }
            *(long *)(unaff_x22 + 0x28) = lVar5;
            thunk_FUN_02dd37b4((long *)(unaff_x22 + 0x28),lVar5);
            lVar5 = *(long *)(unaff_x21 + 0x10);
            *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
            if (lVar5 != 0) {
              uVar1 = *(uint *)(unaff_x21 + 0x18);
              if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                *(long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = unaff_x22;
                thunk_FUN_02dd37b4();
              }
              else {
                FUN_03aac494();
              }
              lVar5 = thunk_FUN_02d9d534(*unaff_x19);
              FUN_05fc094c(lVar5,0);
              puVar2 = Method_UnityEngine_Graphics_DrawMesh__;
              if (lVar5 != 0) {
                *(undefined8 *)(lVar5 + 0x10) =
                     *(undefined8 *)UnityEngine_XR_Interaction_Toolkit_UI_XRUIInputModule_TypeInfo;
                thunk_FUN_02dd37b4();
                *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)puVar2;
                thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x20));
                *(undefined4 *)(lVar5 + 0x18) = 0;
                lVar7 = thunk_FUN_02d9d534(*unaff_x25);
                FUN_03aabc60(lVar7,*(undefined8 *)PTR_DAT_0675eb68);
                if (lVar7 != 0) {
                  lVar8 = *unaff_x26;
                  uVar4 = *(undefined8 *)
                           Method_Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_OnSessionCreatedWithSpatialAnchor__
                  ;
                  lVar6 = *(long *)(lVar7 + 0x10);
                  *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                  if (lVar6 != 0) {
                    uVar1 = *(uint *)(lVar7 + 0x18);
                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                      *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar4;
                      thunk_FUN_02dd37b4();
                    }
                    else {
                      FUN_03aac494(lVar7,uVar4,
                                   *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70)
                                  );
                    }
                    *(long *)(lVar5 + 0x30) = lVar7;
                    thunk_FUN_02dd37b4((long *)(lVar5 + 0x30),lVar7);
                    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                                Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                              );
                    FUN_03aabc60(lVar7,*(undefined8 *)
                                        Method_UnityEngine_GameObject_AddComponent<FixedJoint>__);
                    lVar6 = thunk_FUN_02d9d534(*(undefined8 *)
                                                Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                              );
                    FUN_05fc0944(lVar6,0);
                    if (lVar6 != 0) {
                      *(undefined8 *)(lVar6 + 0x18) =
                           *(undefined8 *)
                            Method_UnityEngine_UIElements_GenericDropdownMenu_OnPointerMove__;
                      thunk_FUN_02dd37b4();
                      *(undefined8 *)(lVar6 + 0x10) = *unaff_x29;
                      thunk_FUN_02dd37b4();
                      if (lVar7 != 0) {
                        lVar8 = *(long *)(lVar7 + 0x10);
                        lVar9 = *unaff_x27;
                        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                        if (lVar8 != 0) {
                          uVar1 = *(uint *)(lVar7 + 0x18);
                          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                            *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                            plVar3 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                            *plVar3 = lVar6;
                            thunk_FUN_02dd37b4(plVar3,lVar6);
                          }
                          else {
                            FUN_03aac494(lVar7,lVar6,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                          }
                          *(long *)(lVar5 + 0x28) = lVar7;
                          thunk_FUN_02dd37b4((long *)(lVar5 + 0x28),lVar7);
                          lVar7 = *(long *)(unaff_x21 + 0x10);
                          *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
                          if (lVar7 != 0) {
                            uVar1 = *(uint *)(unaff_x21 + 0x18);
                            if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                              *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                              plVar3 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
                              *plVar3 = lVar5;
                              thunk_FUN_02dd37b4(plVar3,lVar5);
                            }
                            else {
                              FUN_03aac494();
                            }
                            lVar5 = thunk_FUN_02d9d534(*unaff_x19);
                            FUN_05fc094c(lVar5,0);
                            puVar2 = Method_UnityEngine_GameObject_GetComponent<ParticleSystem>__;
                            if (lVar5 != 0) {
                              *(undefined8 *)(lVar5 + 0x10) =
                                   *(undefined8 *)
                                    Method_UnityEngine_GameObject_GetComponent<NavMeshAgent>__;
                              thunk_FUN_02dd37b4();
                              *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)puVar2;
                              thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x20));
                              *(undefined4 *)(lVar5 + 0x18) = 3;
                              lVar7 = thunk_FUN_02d9d534(*unaff_x25);
                              FUN_03aabc60(lVar7,*(undefined8 *)PTR_DAT_0675eb68);
                              if (lVar7 != 0) {
                                lVar8 = *unaff_x26;
                                uVar4 = *(undefined8 *)
                                         Method_UnityEngine_GameObject_GetComponent<InputField>__;
                                lVar6 = *(long *)(lVar7 + 0x10);
                                *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                                if (lVar6 != 0) {
                                  uVar1 = *(uint *)(lVar7 + 0x18);
                                  if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                    *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                    *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar4;
                                    thunk_FUN_02dd37b4();
                                  }
                                  else {
                                    FUN_03aac494(lVar7,uVar4,
                                                 *(undefined8 *)
                                                  (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70)
                                                );
                                  }
                                  *(long *)(lVar5 + 0x30) = lVar7;
                                  thunk_FUN_02dd37b4((long *)(lVar5 + 0x30),lVar7);
                                  lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                  FUN_03aabc60(lVar7,*(undefined8 *)
                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                              );
                                  lVar6 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                  FUN_05fc0944(lVar6,0);
                                  if (lVar6 != 0) {
                                    *(undefined8 *)(lVar6 + 0x18) =
                                         *(undefined8 *)
                                          Method_UnityEngine_GameObject_GetComponent<Renderer>__;
                                    thunk_FUN_02dd37b4();
                                    *(undefined8 *)(lVar6 + 0x10) = *unaff_x29;
                                    thunk_FUN_02dd37b4();
                                    if (lVar7 != 0) {
                                      lVar8 = *(long *)(lVar7 + 0x10);
                                      lVar9 = *unaff_x27;
                                      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                                      if (lVar8 != 0) {
                                        uVar1 = *(uint *)(lVar7 + 0x18);
                                        if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                          *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                          plVar3 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                                          *plVar3 = lVar6;
                                          thunk_FUN_02dd37b4(plVar3,lVar6);
                                        }
                                        else {
                                          FUN_03aac494(lVar7,lVar6,
                                                       *(undefined8 *)
                                                        (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) +
                                                        0x70));
                                        }
                                        *(long *)(lVar5 + 0x28) = lVar7;
                                        thunk_FUN_02dd37b4((long *)(lVar5 + 0x28),lVar7);
                                        lVar7 = *(long *)(unaff_x21 + 0x10);
                                        *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
                                        if (lVar7 != 0) {
                                          uVar1 = *(uint *)(unaff_x21 + 0x18);
                                          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                            *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                            plVar3 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
                                            *plVar3 = lVar5;
                                            thunk_FUN_02dd37b4(plVar3,lVar5);
                                          }
                                          else {
                                            FUN_03aac494();
                                          }
                                          lVar5 = thunk_FUN_02d9d534(*unaff_x19);
                                          FUN_05fc094c(lVar5,0);
                                          puVar2 = 
                                          Method_UnityEngine_GameObject_GetComponent<MeshRenderer>__
                                          ;
                                          if (lVar5 != 0) {
                                            *(undefined8 *)(lVar5 + 0x10) =
                                                 *(undefined8 *)PTR_DAT_06779338;
                                            thunk_FUN_02dd37b4();
                                            *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)puVar2;
                                            thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x20));
                                            *(undefined4 *)(lVar5 + 0x18) = 3;
                                            lVar7 = thunk_FUN_02d9d534(*unaff_x25);
                                            FUN_03aabc60(lVar7,*(undefined8 *)PTR_DAT_0675eb68);
                                            if (lVar7 != 0) {
                                              lVar8 = *unaff_x26;
                                              uVar4 = *(undefined8 *)
                                                                                                              
                                                  Newtonsoft_Json_Linq_JToken_LineInfoAnnotation_TypeInfo
                                              ;
                                              lVar6 = *(long *)(lVar7 + 0x10);
                                              *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                                              if (lVar6 != 0) {
                                                uVar1 = *(uint *)(lVar7 + 0x18);
                                                if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                  *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                  *(undefined8 *)
                                                   (lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar4;
                                                  thunk_FUN_02dd37b4();
                                                }
                                                else {
                                                  FUN_03aac494(lVar7,uVar4,
                                                               *(undefined8 *)
                                                                (*(long *)(*(long *)(lVar8 + 0x20) +
                                                                          0xc0) + 0x70));
                                                }
                                                *(long *)(lVar5 + 0x30) = lVar7;
                                                thunk_FUN_02dd37b4((long *)(lVar5 + 0x30),lVar7);
                                                lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                        
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                FUN_03aabc60(lVar7,*(undefined8 *)
                                                                                                                                        
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                lVar6 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                        
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                FUN_05fc0944(lVar6,0);
                                                if (lVar6 != 0) {
                                                  *(undefined8 *)(lVar6 + 0x18) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_UnityEngine_GameObject_GetComponent<OVRManager>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar6 + 0x10) = *unaff_x29;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar7 != 0) {
                                                    lVar8 = *(long *)(lVar7 + 0x10);
                                                    lVar9 = *unaff_x27;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar7 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                        plVar3 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar3 = lVar6;
                                                        thunk_FUN_02dd37b4(plVar3,lVar6);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar7,lVar6,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x28) = lVar7;
                                                  thunk_FUN_02dd37b4((long *)(lVar5 + 0x28),lVar7);
                                                  lVar7 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar3 = (long *)(lVar7 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar3 = lVar5;
                                                      thunk_FUN_02dd37b4(plVar3,lVar5);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar5 = thunk_FUN_02d9d534(*unaff_x19);
                                                    FUN_05fc094c(lVar5,0);
                                                    puVar2 = 
                                                  Method_UnityEngine_GameObject_TryGetComponent<CanvasTracker>__
                                                  ;
                                                  if (lVar5 != 0) {
                                                    *(undefined8 *)(lVar5 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_TryGetComponent<RectTransform>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar5 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x20));
                                                  *(undefined4 *)(lVar5 + 0x18) = 4;
                                                  lVar7 = thunk_FUN_02d9d534(*unaff_x25);
                                                  FUN_03aabc60(lVar7,*(undefined8 *)PTR_DAT_0675eb68
                                                              );
                                                  if (lVar7 != 0) {
                                                    lVar8 = *unaff_x26;
                                                    uVar4 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Linq_Enumerable_Count<ARAnchor>__;
                                                  lVar6 = *(long *)(lVar7 + 0x10);
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar4
                                                      ;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar7,uVar4,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x30) = lVar7;
                                                  thunk_FUN_02dd37b4((long *)(lVar5 + 0x30),lVar7);
                                                  lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar7,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar6 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar6,0);
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponentsInParent<OVRSkeleton_IOVRSkeletonDataProvider>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar6 + 0x10) = *unaff_x29;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar7 != 0) {
                                                    lVar8 = *(long *)(lVar7 + 0x10);
                                                    lVar9 = *unaff_x27;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar7 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                        plVar3 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar3 = lVar6;
                                                        thunk_FUN_02dd37b4(plVar3,lVar6);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar7,lVar6,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x28) = lVar7;
                                                  thunk_FUN_02dd37b4((long *)(lVar5 + 0x28),lVar7);
                                                  lVar7 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar3 = (long *)(lVar7 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar3 = lVar5;
                                                      thunk_FUN_02dd37b4(plVar3,lVar5);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    *(long *)(unaff_x20 + 0x28) = unaff_x21;
                                                    thunk_FUN_02dd37b4();
                                                    FUN_05fc0710(in_stack_00000008);
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
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


