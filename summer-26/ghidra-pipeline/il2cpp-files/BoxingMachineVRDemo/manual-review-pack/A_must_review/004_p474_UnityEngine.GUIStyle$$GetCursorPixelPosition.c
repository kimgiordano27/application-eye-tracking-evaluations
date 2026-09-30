/*
FUNCTION_NAME: UnityEngine.GUIStyle$$GetCursorPixelPosition
ENTRY_POINT: 05fc9108
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 317
LABEL: confirmed_eye_data_collection_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_data_collection
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;telemetry;frame_behavior;structure_combo;active_gaze_retrieval;active_gaze_interaction;active_gaze_collection;possible_biometrics
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_14;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;active_gaze_state_retrieval_with_validity_and_pose;active_gaze_values_flow_to_interaction_sink;active_gaze_values_flow_to_collection_or_telemetry_sink;possible_biometric_feature_from_active_eye_context;functionality_gaze_interaction_hits_16;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_1
*/


void UnityEngine_GUIStyle__GetCursorPixelPosition(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined8 *unaff_x25;
  long *unaff_x26;
  undefined8 unaff_x29;
  
  *(undefined8 *)(unaff_x24 + 0x10) =
       *(undefined8 *)
        Method_UnityEngine_GameObject_GetComponentInParent<ARBaseGestureInteractable>__;
  thunk_FUN_02dd37b4();
  puVar3 = Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__;
  if (unaff_x23 != 0) {
    lVar9 = *(long *)(unaff_x23 + 0x10);
    *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
    if (lVar9 != 0) {
      uVar1 = *(uint *)(unaff_x23 + 0x18);
      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
        *(uint *)(unaff_x23 + 0x18) = uVar1 + 1;
        *(long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = unaff_x24;
        thunk_FUN_02dd37b4();
      }
      else {
        FUN_03aac494();
      }
      *(long *)(unaff_x22 + 0x28) = unaff_x23;
      thunk_FUN_02dd37b4();
      if (unaff_x21 != 0) {
        lVar9 = *(long *)(unaff_x21 + 0x10);
        *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
        if (lVar9 != 0) {
          uVar1 = *(uint *)(unaff_x21 + 0x18);
          if (uVar1 < *(uint *)(lVar9 + 0x18)) {
            *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
            *(long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = unaff_x22;
            thunk_FUN_02dd37b4();
          }
          else {
            FUN_03aac494();
          }
          lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                      Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__);
          FUN_05fc094c(lVar9,0);
          puVar2 = Method_UnityEngine_GameObject_GetComponent<MeshRenderer>__;
          if (lVar9 != 0) {
            *(undefined8 *)(lVar9 + 0x10) = *(undefined8 *)PTR_DAT_06779338;
            thunk_FUN_02dd37b4();
            *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)puVar2;
            thunk_FUN_02dd37b4((undefined8 *)(lVar9 + 0x20));
            *(undefined4 *)(lVar9 + 0x18) = 3;
            lVar6 = thunk_FUN_02d9d534(*unaff_x25);
            FUN_03aabc60(lVar6,*unaff_x19);
            if (lVar6 != 0) {
              lVar11 = *unaff_x26;
              uVar8 = *(undefined8 *)Newtonsoft_Json_Linq_JToken_LineInfoAnnotation_TypeInfo;
              lVar10 = *(long *)(lVar6 + 0x10);
              *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
              if (lVar10 != 0) {
                uVar1 = *(uint *)(lVar6 + 0x18);
                if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                  *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                  *(undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
                  thunk_FUN_02dd37b4();
                }
                else {
                  FUN_03aac494(lVar6,uVar8,
                               *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                }
                *(long *)(lVar9 + 0x30) = lVar6;
                thunk_FUN_02dd37b4((long *)(lVar9 + 0x30),lVar6);
                lVar6 = thunk_FUN_02d9d534(*(undefined8 *)
                                            Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                          );
                FUN_03aabc60(lVar6,*(undefined8 *)
                                    Method_UnityEngine_GameObject_AddComponent<FixedJoint>__);
                lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                             Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                           );
                FUN_05fc0944(lVar10,0);
                if (lVar10 != 0) {
                  *(undefined8 *)(lVar10 + 0x18) =
                       *(undefined8 *)Method_UnityEngine_GameObject_GetComponent<OVRManager>__;
                  thunk_FUN_02dd37b4();
                  *(undefined8 *)(lVar10 + 0x10) =
                       *(undefined8 *)
                        Method_UnityEngine_GameObject_GetComponentInParent<ARBaseGestureInteractable>__
                  ;
                  thunk_FUN_02dd37b4();
                  if (lVar6 != 0) {
                    lVar11 = *(long *)(lVar6 + 0x10);
                    lVar12 = *(long *)puVar3;
                    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                    if (lVar11 != 0) {
                      uVar1 = *(uint *)(lVar6 + 0x18);
                      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                        plVar7 = (long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
                        *plVar7 = lVar10;
                        thunk_FUN_02dd37b4(plVar7,lVar10);
                      }
                      else {
                        FUN_03aac494(lVar6,lVar10,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                      }
                      *(long *)(lVar9 + 0x28) = lVar6;
                      thunk_FUN_02dd37b4((long *)(lVar9 + 0x28),lVar6);
                      lVar6 = *(long *)(unaff_x21 + 0x10);
                      *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
                      if (lVar6 != 0) {
                        uVar1 = *(uint *)(unaff_x21 + 0x18);
                        if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                          *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                          plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
                          *plVar7 = lVar9;
                          thunk_FUN_02dd37b4(plVar7,lVar9);
                        }
                        else {
                          FUN_03aac494();
                        }
                        lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                        
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                        FUN_05fc094c(lVar9,0);
                        puVar2 = Method_UnityEngine_GameObject_GetComponent<OpenXRRestarter>__;
                        if (lVar9 != 0) {
                          *(undefined8 *)(lVar9 + 0x10) =
                               *(undefined8 *)
                                Method_UnityEngine_GameObject_GetComponent<MoveHandler>__;
                          thunk_FUN_02dd37b4();
                          *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)puVar2;
                          thunk_FUN_02dd37b4((undefined8 *)(lVar9 + 0x20));
                          *(undefined4 *)(lVar9 + 0x18) = 3;
                          lVar6 = thunk_FUN_02d9d534(*unaff_x25);
                          FUN_03aabc60(lVar6,*unaff_x19);
                          if (lVar6 != 0) {
                            lVar11 = *unaff_x26;
                            uVar8 = *(undefined8 *)
                                     Method_UnityEngine_GameObject_GetComponentInParent<HapticImpulsePlayer>__
                            ;
                            lVar10 = *(long *)(lVar6 + 0x10);
                            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                            if (lVar10 != 0) {
                              uVar1 = *(uint *)(lVar6 + 0x18);
                              if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                *(undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
                                thunk_FUN_02dd37b4();
                              }
                              else {
                                FUN_03aac494(lVar6,uVar8,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                              }
                              *(long *)(lVar9 + 0x30) = lVar6;
                              thunk_FUN_02dd37b4((long *)(lVar9 + 0x30),lVar6);
                              lVar6 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                              FUN_03aabc60(lVar6,*(undefined8 *)
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                          );
                              lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                      
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                              FUN_05fc0944(lVar10,0);
                              if (lVar10 != 0) {
                                *(undefined8 *)(lVar10 + 0x18) =
                                     *(undefined8 *)
                                      Method_UnityEngine_GameObject_GetComponent<MuscleCollisionBroadcaster>__
                                ;
                                thunk_FUN_02dd37b4();
                                *(undefined8 *)(lVar10 + 0x10) =
                                     *(undefined8 *)
                                      Method_UnityEngine_GameObject_GetComponentInParent<ARBaseGestureInteractable>__
                                ;
                                thunk_FUN_02dd37b4();
                                if (lVar6 != 0) {
                                  lVar11 = *(long *)(lVar6 + 0x10);
                                  lVar12 = *(long *)puVar3;
                                  *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                                  if (lVar11 != 0) {
                                    uVar1 = *(uint *)(lVar6 + 0x18);
                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                      *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                      plVar7 = (long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
                                      *plVar7 = lVar10;
                                      thunk_FUN_02dd37b4(plVar7,lVar10);
                                    }
                                    else {
                                      FUN_03aac494(lVar6,lVar10,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) +
                                                    0x70));
                                    }
                                    *(long *)(lVar9 + 0x28) = lVar6;
                                    thunk_FUN_02dd37b4((long *)(lVar9 + 0x28),lVar6);
                                    lVar6 = *(long *)(unaff_x21 + 0x10);
                                    *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
                                    if (lVar6 != 0) {
                                      uVar1 = *(uint *)(unaff_x21 + 0x18);
                                      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                        *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                        plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
                                        *plVar7 = lVar9;
                                        thunk_FUN_02dd37b4(plVar7,lVar9);
                                      }
                                      else {
                                        FUN_03aac494();
                                      }
                                      lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                    
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                      FUN_05fc094c(lVar9,0);
                                      puVar2 = 
                                      Method_UnityEngine_GameObject_GetComponent<OVRCameraRig>__;
                                      if (lVar9 != 0) {
                                        *(undefined8 *)(lVar9 + 0x10) =
                                             *(undefined8 *)
                                              Method_UnityEngine_GameObject_GetComponent<MeshFilter>__
                                        ;
                                        thunk_FUN_02dd37b4();
                                        *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)puVar2;
                                        thunk_FUN_02dd37b4((undefined8 *)(lVar9 + 0x20));
                                        *(undefined4 *)(lVar9 + 0x18) = 3;
                                        lVar6 = thunk_FUN_02d9d534(*unaff_x25);
                                        FUN_03aabc60(lVar6,*unaff_x19);
                                        if (lVar6 != 0) {
                                          lVar11 = *unaff_x26;
                                          uVar8 = *(undefined8 *)
                                                                                                      
                                                  Method_UnityEngine_GameObject_GetComponentInParent<InspectorPanel>__
                                          ;
                                          lVar10 = *(long *)(lVar6 + 0x10);
                                          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                                          if (lVar10 != 0) {
                                            uVar1 = *(uint *)(lVar6 + 0x18);
                                            if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                              *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                              *(undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20)
                                                   = uVar8;
                                              thunk_FUN_02dd37b4();
                                            }
                                            else {
                                              FUN_03aac494(lVar6,uVar8,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(lVar11 + 0x20) +
                                                                      0xc0) + 0x70));
                                            }
                                            *(long *)(lVar9 + 0x30) = lVar6;
                                            thunk_FUN_02dd37b4((long *)(lVar9 + 0x30),lVar6);
                                            lVar6 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                            FUN_03aabc60(lVar6,*(undefined8 *)
                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                            lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                  
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                            FUN_05fc0944(lVar10,0);
                                            if (lVar10 != 0) {
                                              *(undefined8 *)(lVar10 + 0x18) =
                                                   *(undefined8 *)
                                                                                                        
                                                  Method_UnityEngine_GameObject_GetComponent<RectTransform>__
                                              ;
                                              thunk_FUN_02dd37b4();
                                              *(undefined8 *)(lVar10 + 0x10) =
                                                   *(undefined8 *)
                                                                                                        
                                                  Method_UnityEngine_GameObject_GetComponentInParent<ARBaseGestureInteractable>__
                                              ;
                                              thunk_FUN_02dd37b4();
                                              if (lVar6 != 0) {
                                                lVar11 = *(long *)(lVar6 + 0x10);
                                                lVar12 = *(long *)puVar3;
                                                *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                                                if (lVar11 != 0) {
                                                  uVar1 = *(uint *)(lVar6 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                    *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                    plVar7 = (long *)(lVar11 + (long)(int)uVar1 * 8
                                                                     + 0x20);
                                                    *plVar7 = lVar10;
                                                    thunk_FUN_02dd37b4(plVar7,lVar10);
                                                  }
                                                  else {
                                                    FUN_03aac494(lVar6,lVar10,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar12 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar6;
                                                  thunk_FUN_02dd37b4((long *)(lVar9 + 0x28),lVar6);
                                                  lVar6 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar9;
                                                      thunk_FUN_02dd37b4(plVar7,lVar9);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar9,0);
                                                  puVar4 = 
                                                  Method_UnityEngine_GameObject_GetComponent<OVRFace_IMeshWeightsProvider>__
                                                  ;
                                                  puVar2 = 
                                                  Method_Unity_VisualScripting_Antlr3_Runtime_Tree_BaseTreeAdaptor_SetNodeText__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Unity_VisualScripting_Antlr3_Runtime_Tree_BaseTreeAdaptor_SetNodeText__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar9 + 0x20) =
                                                       *(undefined8 *)puVar4;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar9 + 0x20));
                                                  *(undefined4 *)(lVar9 + 0x18) = 1;
                                                  lVar6 = thunk_FUN_02d9d534(*unaff_x25);
                                                  FUN_03aabc60(lVar6,*unaff_x19);
                                                  if (lVar6 != 0) {
                                                    uVar8 = *(undefined8 *)puVar2;
                                                    lVar10 = *(long *)(lVar6 + 0x10);
                                                    lVar11 = *unaff_x26;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar1 = *(uint *)(lVar6 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar10 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar8;
                                                        thunk_FUN_02dd37b4();
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar6,uVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar6;
                                                  thunk_FUN_02dd37b4((long *)(lVar9 + 0x30),lVar6);
                                                  lVar6 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar6,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar10,0);
                                                  puVar2 = 
                                                  Method_UnityEngine_GameObject_GetComponentInChildren<TMP_Dropdown_DropdownItem>__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponentInChildren<TMP_Dropdown_DropdownItem>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar10 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_UnityEngine_GameObject_GetComponentInParent<ARBaseGestureInteractable>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar6 != 0) {
                                                    lVar11 = *(long *)(lVar6 + 0x10);
                                                    lVar12 = *(long *)puVar3;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar11 != 0) {
                                                      uVar1 = *(uint *)(lVar6 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                        plVar7 = (long *)(lVar11 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar7 = lVar10;
                                                        thunk_FUN_02dd37b4(plVar7,lVar10);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar6,lVar10,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar6;
                                                  thunk_FUN_02dd37b4((long *)(lVar9 + 0x28),lVar6);
                                                  lVar6 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar9;
                                                      thunk_FUN_02dd37b4(plVar7,lVar9);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar9,0);
                                                  puVar5 = 
                                                  Method_UnityEngine_GameObject_GetComponents<INotificationReceiver>__
                                                  ;
                                                  puVar4 = 
                                                  Method_UnityEngine_GameObject_GetComponentInParent<XRBaseController>__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponentInParent<XRBaseController>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar9 + 0x20) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar9 + 0x20));
                                                  *(undefined4 *)(lVar9 + 0x18) = 0;
                                                  lVar6 = thunk_FUN_02d9d534(*unaff_x25);
                                                  FUN_03aabc60(lVar6,*unaff_x19);
                                                  if (lVar6 != 0) {
                                                    uVar8 = *(undefined8 *)puVar4;
                                                    lVar10 = *(long *)(lVar6 + 0x10);
                                                    lVar11 = *unaff_x26;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar1 = *(uint *)(lVar6 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar10 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar8;
                                                        thunk_FUN_02dd37b4();
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar6,uVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar6;
                                                  thunk_FUN_02dd37b4((long *)(lVar9 + 0x30),lVar6);
                                                  lVar6 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar6,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar10,0);
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x18) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_02dd37b4();
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponentInParent<ARBaseGestureInteractable>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar6 != 0) {
                                                    lVar11 = *(long *)(lVar6 + 0x10);
                                                    lVar12 = *(long *)puVar3;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar11 != 0) {
                                                      uVar1 = *(uint *)(lVar6 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                        plVar7 = (long *)(lVar11 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar7 = lVar10;
                                                        thunk_FUN_02dd37b4(plVar7,lVar10);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar6,lVar10,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar6;
                                                  thunk_FUN_02dd37b4((long *)(lVar9 + 0x28),lVar6);
                                                  lVar6 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar9;
                                                      thunk_FUN_02dd37b4(plVar7,lVar9);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar9,0);
                                                  puVar4 = 
                                                  Method_UnityEngine_GameObject_GetComponents<Collider>__
                                                  ;
                                                  puVar2 = 
                                                  Method_UnityEngine_UIElements_BaseTreeView_OnItemIndexChanged__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_BaseTreeView_OnItemIndexChanged__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar9 + 0x20) =
                                                       *(undefined8 *)puVar4;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar9 + 0x20));
                                                  *(undefined4 *)(lVar9 + 0x18) = 0;
                                                  lVar6 = thunk_FUN_02d9d534(*unaff_x25);
                                                  FUN_03aabc60(lVar6,*unaff_x19);
                                                  if (lVar6 != 0) {
                                                    uVar8 = *(undefined8 *)puVar2;
                                                    lVar10 = *(long *)(lVar6 + 0x10);
                                                    lVar11 = *unaff_x26;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar1 = *(uint *)(lVar6 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar10 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar8;
                                                        thunk_FUN_02dd37b4();
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar6,uVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar6;
                                                  thunk_FUN_02dd37b4((long *)(lVar9 + 0x30),lVar6);
                                                  lVar6 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar6,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar10,0);
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponents<Component>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar10 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_UnityEngine_GameObject_GetComponentInParent<ARBaseGestureInteractable>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar6 != 0) {
                                                    lVar11 = *(long *)(lVar6 + 0x10);
                                                    lVar12 = *(long *)puVar3;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar11 != 0) {
                                                      uVar1 = *(uint *)(lVar6 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                        plVar7 = (long *)(lVar11 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar7 = lVar10;
                                                        thunk_FUN_02dd37b4(plVar7,lVar10);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar6,lVar10,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar6;
                                                  thunk_FUN_02dd37b4((long *)(lVar9 + 0x28),lVar6);
                                                  lVar6 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar9;
                                                      thunk_FUN_02dd37b4(plVar7,lVar9);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar9,0);
                                                  puVar4 = 
                                                  Method_UnityEngine_GameObject_GetComponentInParent<IXRHapticImpulseProvider>__
                                                  ;
                                                  puVar2 = 
                                                  Method_UnityEngine_XR_Interaction_Toolkit_Locomotion_Teleportation_BaseTeleportationInteractable_GenerateTeleportRequest__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_XR_Interaction_Toolkit_Locomotion_Teleportation_BaseTeleportationInteractable_GenerateTeleportRequest__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar9 + 0x20) =
                                                       *(undefined8 *)puVar4;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar9 + 0x20));
                                                  *(undefined4 *)(lVar9 + 0x18) = 1;
                                                  lVar6 = thunk_FUN_02d9d534(*unaff_x25);
                                                  FUN_03aabc60(lVar6,*unaff_x19);
                                                  if (lVar6 != 0) {
                                                    uVar8 = *(undefined8 *)puVar2;
                                                    lVar10 = *(long *)(lVar6 + 0x10);
                                                    lVar11 = *unaff_x26;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar1 = *(uint *)(lVar6 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar10 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar8;
                                                        thunk_FUN_02dd37b4();
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar6,uVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar6;
                                                  thunk_FUN_02dd37b4((long *)(lVar9 + 0x30),lVar6);
                                                  lVar6 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar6,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar10,0);
                                                  puVar2 = 
                                                  Method_UnityEngine_GameObject_GetComponent<XRHandTrackingEvents>__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponent<XRHandTrackingEvents>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar10 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_UnityEngine_GameObject_GetComponentInParent<ARBaseGestureInteractable>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar6 != 0) {
                                                    lVar11 = *(long *)(lVar6 + 0x10);
                                                    lVar12 = *(long *)puVar3;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar11 != 0) {
                                                      uVar1 = *(uint *)(lVar6 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                        plVar7 = (long *)(lVar11 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar7 = lVar10;
                                                        thunk_FUN_02dd37b4(plVar7,lVar10);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar6,lVar10,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar6;
                                                  thunk_FUN_02dd37b4((long *)(lVar9 + 0x28),lVar6);
                                                  lVar6 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar9;
                                                      thunk_FUN_02dd37b4(plVar7,lVar9);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar9,0);
                                                  puVar5 = 
                                                  Method_UnityEngine_GameObject_GetComponentInParent<IScrollHandler>__
                                                  ;
                                                  puVar4 = 
                                                  Method_UnityEngine_GameObject_GetComponent<XRHandSkeletonDriver>__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponent<XRHandSkeletonDriver>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar9 + 0x20) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar9 + 0x20));
                                                  *(undefined4 *)(lVar9 + 0x18) = 0;
                                                  lVar6 = thunk_FUN_02d9d534(*unaff_x25);
                                                  FUN_03aabc60(lVar6,*unaff_x19);
                                                  if (lVar6 != 0) {
                                                    uVar8 = *(undefined8 *)puVar4;
                                                    lVar10 = *(long *)(lVar6 + 0x10);
                                                    lVar11 = *unaff_x26;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar1 = *(uint *)(lVar6 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar10 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar8;
                                                        thunk_FUN_02dd37b4();
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar6,uVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar6;
                                                  thunk_FUN_02dd37b4((long *)(lVar9 + 0x30),lVar6);
                                                  lVar6 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar6,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar10,0);
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x18) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_02dd37b4();
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponentInParent<ARBaseGestureInteractable>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar6 != 0) {
                                                    lVar11 = *(long *)(lVar6 + 0x10);
                                                    lVar12 = *(long *)puVar3;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar11 != 0) {
                                                      uVar1 = *(uint *)(lVar6 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                        plVar7 = (long *)(lVar11 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar7 = lVar10;
                                                        thunk_FUN_02dd37b4(plVar7,lVar10);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar6,lVar10,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar6;
                                                  thunk_FUN_02dd37b4((long *)(lVar9 + 0x28),lVar6);
                                                  lVar6 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar9;
                                                      thunk_FUN_02dd37b4(plVar7,lVar9);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar9,0);
                                                  puVar4 = 
                                                  Method_UnityEngine_GameObject_GetComponentInChildren<Text>__
                                                  ;
                                                  puVar2 = 
                                                  Method_UnityEngine_UIElements_StyleSheets_BaseStyleMatcher_MatchManyByOrder__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_StyleSheets_BaseStyleMatcher_MatchManyByOrder__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar9 + 0x20) =
                                                       *(undefined8 *)puVar4;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar9 + 0x20));
                                                  *(undefined4 *)(lVar9 + 0x18) = 0;
                                                  lVar6 = thunk_FUN_02d9d534(*unaff_x25);
                                                  FUN_03aabc60(lVar6,*unaff_x19);
                                                  if (lVar6 != 0) {
                                                    uVar8 = *(undefined8 *)puVar2;
                                                    lVar10 = *(long *)(lVar6 + 0x10);
                                                    lVar11 = *unaff_x26;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar1 = *(uint *)(lVar6 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar10 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar8;
                                                        thunk_FUN_02dd37b4();
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar6,uVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar6;
                                                  thunk_FUN_02dd37b4((long *)(lVar9 + 0x30),lVar6);
                                                  lVar6 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar6,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar10,0);
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponentInParent<OVRFaceExpressions>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar10 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_UnityEngine_GameObject_GetComponentInParent<ARBaseGestureInteractable>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar6 != 0) {
                                                    lVar11 = *(long *)(lVar6 + 0x10);
                                                    lVar12 = *(long *)puVar3;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar11 != 0) {
                                                      uVar1 = *(uint *)(lVar6 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                        plVar7 = (long *)(lVar11 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar7 = lVar10;
                                                        thunk_FUN_02dd37b4(plVar7,lVar10);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar6,lVar10,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar6;
                                                  thunk_FUN_02dd37b4((long *)(lVar9 + 0x28),lVar6);
                                                  lVar6 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar9;
                                                      thunk_FUN_02dd37b4(plVar7,lVar9);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar9,0);
                                                  puVar4 = 
                                                  Method_UnityEngine_GameObject_GetComponentInParent<XRGrabInteractable>__
                                                  ;
                                                  puVar2 = 
                                                  Method_Unity_VisualScripting_Antlr3_Runtime_Tree_BaseTree_AddChild__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Unity_VisualScripting_Antlr3_Runtime_Tree_BaseTree_AddChild__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar9 + 0x20) =
                                                       *(undefined8 *)puVar4;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar9 + 0x20));
                                                  *(undefined4 *)(lVar9 + 0x18) = 1;
                                                  lVar6 = thunk_FUN_02d9d534(*unaff_x25);
                                                  FUN_03aabc60(lVar6,*unaff_x19);
                                                  if (lVar6 != 0) {
                                                    uVar8 = *(undefined8 *)puVar2;
                                                    lVar10 = *(long *)(lVar6 + 0x10);
                                                    lVar11 = *unaff_x26;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar1 = *(uint *)(lVar6 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar10 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar8;
                                                        thunk_FUN_02dd37b4();
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar6,uVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar6;
                                                  thunk_FUN_02dd37b4((long *)(lVar9 + 0x30),lVar6);
                                                  lVar6 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar6,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar10,0);
                                                  puVar2 = 
                                                  Method_UnityEngine_GameObject_GetComponentInChildren<Dropdown_DropdownItem>__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponentInChildren<Dropdown_DropdownItem>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar10 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_UnityEngine_GameObject_GetComponentInParent<ARBaseGestureInteractable>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar6 != 0) {
                                                    lVar11 = *(long *)(lVar6 + 0x10);
                                                    lVar12 = *(long *)puVar3;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar11 != 0) {
                                                      uVar1 = *(uint *)(lVar6 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                        plVar7 = (long *)(lVar11 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar7 = lVar10;
                                                        thunk_FUN_02dd37b4(plVar7,lVar10);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar6,lVar10,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar6;
                                                  thunk_FUN_02dd37b4((long *)(lVar9 + 0x28),lVar6);
                                                  lVar6 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar9;
                                                      thunk_FUN_02dd37b4(plVar7,lVar9);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar9,0);
                                                  puVar5 = 
                                                  Method_UnityEngine_GameObject_GetComponents<IAnimationWindowPreview>__
                                                  ;
                                                  puVar4 = 
                                                  Method_UnityEngine_GameObject_GetComponentInParent<IPointerExitHandler>__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponentInParent<IPointerExitHandler>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar9 + 0x20) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar9 + 0x20));
                                                  *(undefined4 *)(lVar9 + 0x18) = 0;
                                                  lVar6 = thunk_FUN_02d9d534(*unaff_x25);
                                                  FUN_03aabc60(lVar6,*unaff_x19);
                                                  if (lVar6 != 0) {
                                                    uVar8 = *(undefined8 *)puVar4;
                                                    lVar10 = *(long *)(lVar6 + 0x10);
                                                    lVar11 = *unaff_x26;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar1 = *(uint *)(lVar6 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar10 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar8;
                                                        thunk_FUN_02dd37b4();
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar6,uVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar6;
                                                  thunk_FUN_02dd37b4((long *)(lVar9 + 0x30),lVar6);
                                                  lVar6 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar6,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar10,0);
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x18) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_02dd37b4();
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponentInParent<ARBaseGestureInteractable>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar6 != 0) {
                                                    lVar11 = *(long *)(lVar6 + 0x10);
                                                    lVar12 = *(long *)puVar3;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar11 != 0) {
                                                      uVar1 = *(uint *)(lVar6 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                        plVar7 = (long *)(lVar11 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar7 = lVar10;
                                                        thunk_FUN_02dd37b4(plVar7,lVar10);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar6,lVar10,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar6;
                                                  thunk_FUN_02dd37b4((long *)(lVar9 + 0x28),lVar6);
                                                  lVar6 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar9;
                                                      thunk_FUN_02dd37b4(plVar7,lVar9);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar9,0);
                                                  puVar4 = 
                                                  Method_UnityEngine_GameObject_GetComponent<VoipAudioSourceHiLevel_FilterReadDelegate>__
                                                  ;
                                                  puVar2 = 
                                                  Method_UnityEngine_UIElements_BaseTreeViewController_set_itemsSource__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_BaseTreeViewController_set_itemsSource__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar9 + 0x20) =
                                                       *(undefined8 *)puVar4;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar9 + 0x20));
                                                  *(undefined4 *)(lVar9 + 0x18) = 0;
                                                  lVar6 = thunk_FUN_02d9d534(*unaff_x25);
                                                  FUN_03aabc60(lVar6,*unaff_x19);
                                                  if (lVar6 != 0) {
                                                    uVar8 = *(undefined8 *)puVar2;
                                                    lVar10 = *(long *)(lVar6 + 0x10);
                                                    lVar11 = *unaff_x26;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar1 = *(uint *)(lVar6 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar10 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar8;
                                                        thunk_FUN_02dd37b4();
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar6,uVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar6;
                                                  thunk_FUN_02dd37b4((long *)(lVar9 + 0x30),lVar6);
                                                  lVar6 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar6,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar10,0);
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponentInChildren<PlayerInput>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar10 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_UnityEngine_GameObject_GetComponentInParent<ARBaseGestureInteractable>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar6 != 0) {
                                                    lVar11 = *(long *)(lVar6 + 0x10);
                                                    lVar12 = *(long *)puVar3;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar11 != 0) {
                                                      uVar1 = *(uint *)(lVar6 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                        plVar7 = (long *)(lVar11 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar7 = lVar10;
                                                        thunk_FUN_02dd37b4(plVar7,lVar10);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar6,lVar10,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar6;
                                                  thunk_FUN_02dd37b4((long *)(lVar9 + 0x28),lVar6);
                                                  lVar6 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar9;
                                                      thunk_FUN_02dd37b4(plVar7,lVar9);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    *(long *)(unaff_x20 + 0x28) = unaff_x21;
                                                    thunk_FUN_02dd37b4();
                                                    FUN_05fc0710(unaff_x29);
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
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


