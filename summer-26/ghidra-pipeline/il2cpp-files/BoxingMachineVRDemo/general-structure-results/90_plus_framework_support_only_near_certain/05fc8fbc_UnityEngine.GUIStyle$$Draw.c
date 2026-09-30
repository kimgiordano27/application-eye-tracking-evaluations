/*
FUNCTION_NAME: UnityEngine.GUIStyle$$Draw
ENTRY_POINT: 05fc8fbc
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 125
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_21;ray_or_cast_sink_hits_15;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_1
*/


void UnityEngine_GUIStyle__Draw(void)

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
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long unaff_x20;
  long unaff_x21;
  undefined8 unaff_x29;
  
  lVar9 = thunk_FUN_02d9d534();
  FUN_05fc094c(lVar9,0);
  puVar4 = Method_UnityEngine_GameObject_GetComponentInParent<ISelectHandler>__;
  puVar3 = PTR_DAT_0675eb68;
  puVar2 = PTR_DAT_0675eb60;
  if (lVar9 != 0) {
    *(undefined8 *)(lVar9 + 0x10) =
         *(undefined8 *)Method_UnityEngine_GameObject_GetComponent<NavMeshAgent>__;
    thunk_FUN_02dd37b4();
    *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)puVar4;
    thunk_FUN_02dd37b4((undefined8 *)(lVar9 + 0x20));
    *(undefined4 *)(lVar9 + 0x18) = 3;
    lVar10 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
    FUN_03aabc60(lVar10,*(undefined8 *)puVar3);
    puVar4 = PTR_DAT_0675eb70;
    if (lVar10 != 0) {
      uVar12 = *(undefined8 *)Method_UnityEngine_GameObject_GetComponent<InputField>__;
      lVar13 = *(long *)(lVar10 + 0x10);
      lVar14 = *(long *)PTR_DAT_0675eb70;
      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
      if (lVar13 != 0) {
        uVar1 = *(uint *)(lVar10 + 0x18);
        if (uVar1 < *(uint *)(lVar13 + 0x18)) {
          *(uint *)(lVar10 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20) = uVar12;
          thunk_FUN_02dd37b4();
        }
        else {
          FUN_03aac494(lVar10,uVar12,
                       *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
        }
        *(long *)(lVar9 + 0x30) = lVar10;
        thunk_FUN_02dd37b4((long *)(lVar9 + 0x30),lVar10);
        lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                     Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__)
        ;
        FUN_03aabc60(lVar10,*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<FixedJoint>__)
        ;
        lVar13 = thunk_FUN_02d9d534(*(undefined8 *)
                                     Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                   );
        FUN_05fc0944(lVar13,0);
        if (lVar13 != 0) {
          *(undefined8 *)(lVar13 + 0x18) =
               *(undefined8 *)Method_UnityEngine_GameObject_GetComponent<Renderer>__;
          thunk_FUN_02dd37b4();
          *(undefined8 *)(lVar13 + 0x10) =
               *(undefined8 *)
                Method_UnityEngine_GameObject_GetComponentInParent<ARBaseGestureInteractable>__;
          thunk_FUN_02dd37b4();
          puVar6 = Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__;
          if (lVar10 != 0) {
            lVar14 = *(long *)(lVar10 + 0x10);
            lVar15 = *(long *)Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__;
            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
            if (lVar14 != 0) {
              uVar1 = *(uint *)(lVar10 + 0x18);
              if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                plVar11 = (long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
                *plVar11 = lVar13;
                thunk_FUN_02dd37b4(plVar11,lVar13);
              }
              else {
                FUN_03aac494(lVar10,lVar13,
                             *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
              }
              *(long *)(lVar9 + 0x28) = lVar10;
              thunk_FUN_02dd37b4((long *)(lVar9 + 0x28),lVar10);
              if (unaff_x21 != 0) {
                lVar10 = *(long *)(unaff_x21 + 0x10);
                *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
                if (lVar10 != 0) {
                  uVar1 = *(uint *)(unaff_x21 + 0x18);
                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                    *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                    plVar11 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
                    *plVar11 = lVar9;
                    thunk_FUN_02dd37b4(plVar11,lVar9);
                  }
                  else {
                    FUN_03aac494();
                  }
                  lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                              Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                            );
                  FUN_05fc094c(lVar9,0);
                  puVar5 = Method_UnityEngine_GameObject_GetComponent<MeshRenderer>__;
                  if (lVar9 != 0) {
                    *(undefined8 *)(lVar9 + 0x10) = *(undefined8 *)PTR_DAT_06779338;
                    thunk_FUN_02dd37b4();
                    *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)puVar5;
                    thunk_FUN_02dd37b4((undefined8 *)(lVar9 + 0x20));
                    *(undefined4 *)(lVar9 + 0x18) = 3;
                    lVar10 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
                    FUN_03aabc60(lVar10,*(undefined8 *)puVar3);
                    if (lVar10 != 0) {
                      lVar14 = *(long *)puVar4;
                      uVar12 = *(undefined8 *)
                                Newtonsoft_Json_Linq_JToken_LineInfoAnnotation_TypeInfo;
                      lVar13 = *(long *)(lVar10 + 0x10);
                      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                      if (lVar13 != 0) {
                        uVar1 = *(uint *)(lVar10 + 0x18);
                        if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                          *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                          *(undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20) = uVar12;
                          thunk_FUN_02dd37b4();
                        }
                        else {
                          FUN_03aac494(lVar10,uVar12,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                        }
                        *(long *)(lVar9 + 0x30) = lVar10;
                        thunk_FUN_02dd37b4((long *)(lVar9 + 0x30),lVar10);
                        lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                          
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                        FUN_03aabc60(lVar10,*(undefined8 *)
                                             Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                    );
                        lVar13 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                          
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                        FUN_05fc0944(lVar13,0);
                        if (lVar13 != 0) {
                          *(undefined8 *)(lVar13 + 0x18) =
                               *(undefined8 *)
                                Method_UnityEngine_GameObject_GetComponent<OVRManager>__;
                          thunk_FUN_02dd37b4();
                          *(undefined8 *)(lVar13 + 0x10) =
                               *(undefined8 *)
                                Method_UnityEngine_GameObject_GetComponentInParent<ARBaseGestureInteractable>__
                          ;
                          thunk_FUN_02dd37b4();
                          if (lVar10 != 0) {
                            lVar14 = *(long *)(lVar10 + 0x10);
                            lVar15 = *(long *)puVar6;
                            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                            if (lVar14 != 0) {
                              uVar1 = *(uint *)(lVar10 + 0x18);
                              if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                plVar11 = (long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
                                *plVar11 = lVar13;
                                thunk_FUN_02dd37b4(plVar11,lVar13);
                              }
                              else {
                                FUN_03aac494(lVar10,lVar13,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
                              }
                              *(long *)(lVar9 + 0x28) = lVar10;
                              thunk_FUN_02dd37b4((long *)(lVar9 + 0x28),lVar10);
                              lVar10 = *(long *)(unaff_x21 + 0x10);
                              *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
                              if (lVar10 != 0) {
                                uVar1 = *(uint *)(unaff_x21 + 0x18);
                                if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                  *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                  plVar11 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
                                  *plVar11 = lVar9;
                                  thunk_FUN_02dd37b4(plVar11,lVar9);
                                }
                                else {
                                  FUN_03aac494();
                                }
                                lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                        
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                FUN_05fc094c(lVar9,0);
                                puVar5 = 
                                Method_UnityEngine_GameObject_GetComponent<OpenXRRestarter>__;
                                if (lVar9 != 0) {
                                  *(undefined8 *)(lVar9 + 0x10) =
                                       *(undefined8 *)
                                        Method_UnityEngine_GameObject_GetComponent<MoveHandler>__;
                                  thunk_FUN_02dd37b4();
                                  *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)puVar5;
                                  thunk_FUN_02dd37b4((undefined8 *)(lVar9 + 0x20));
                                  *(undefined4 *)(lVar9 + 0x18) = 3;
                                  lVar10 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
                                  FUN_03aabc60(lVar10,*(undefined8 *)puVar3);
                                  if (lVar10 != 0) {
                                    lVar14 = *(long *)puVar4;
                                    uVar12 = *(undefined8 *)
                                              Method_UnityEngine_GameObject_GetComponentInParent<HapticImpulsePlayer>__
                                    ;
                                    lVar13 = *(long *)(lVar10 + 0x10);
                                    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                                    if (lVar13 != 0) {
                                      uVar1 = *(uint *)(lVar10 + 0x18);
                                      if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                        *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                        *(undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                             uVar12;
                                        thunk_FUN_02dd37b4();
                                      }
                                      else {
                                        FUN_03aac494(lVar10,uVar12,
                                                     *(undefined8 *)
                                                      (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) +
                                                      0x70));
                                      }
                                      *(long *)(lVar9 + 0x30) = lVar10;
                                      thunk_FUN_02dd37b4((long *)(lVar9 + 0x30),lVar10);
                                      lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                      
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                      FUN_03aabc60(lVar10,*(undefined8 *)
                                                                                                                      
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                      lVar13 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                      
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                      FUN_05fc0944(lVar13,0);
                                      if (lVar13 != 0) {
                                        *(undefined8 *)(lVar13 + 0x18) =
                                             *(undefined8 *)
                                              Method_UnityEngine_GameObject_GetComponent<MuscleCollisionBroadcaster>__
                                        ;
                                        thunk_FUN_02dd37b4();
                                        *(undefined8 *)(lVar13 + 0x10) =
                                             *(undefined8 *)
                                              Method_UnityEngine_GameObject_GetComponentInParent<ARBaseGestureInteractable>__
                                        ;
                                        thunk_FUN_02dd37b4();
                                        if (lVar10 != 0) {
                                          lVar14 = *(long *)(lVar10 + 0x10);
                                          lVar15 = *(long *)puVar6;
                                          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                                          if (lVar14 != 0) {
                                            uVar1 = *(uint *)(lVar10 + 0x18);
                                            if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                              *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                              plVar11 = (long *)(lVar14 + (long)(int)uVar1 * 8 +
                                                                0x20);
                                              *plVar11 = lVar13;
                                              thunk_FUN_02dd37b4(plVar11,lVar13);
                                            }
                                            else {
                                              FUN_03aac494(lVar10,lVar13,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(lVar15 + 0x20) +
                                                                      0xc0) + 0x70));
                                            }
                                            *(long *)(lVar9 + 0x28) = lVar10;
                                            thunk_FUN_02dd37b4((long *)(lVar9 + 0x28),lVar10);
                                            lVar10 = *(long *)(unaff_x21 + 0x10);
                                            *(int *)(unaff_x21 + 0x1c) =
                                                 *(int *)(unaff_x21 + 0x1c) + 1;
                                            if (lVar10 != 0) {
                                              uVar1 = *(uint *)(unaff_x21 + 0x18);
                                              if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                plVar11 = (long *)(lVar10 + (long)(int)uVar1 * 8 +
                                                                  0x20);
                                                *plVar11 = lVar9;
                                                thunk_FUN_02dd37b4(plVar11,lVar9);
                                              }
                                              else {
                                                FUN_03aac494();
                                              }
                                              lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                    
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                              FUN_05fc094c(lVar9,0);
                                              puVar5 = 
                                              Method_UnityEngine_GameObject_GetComponent<OVRCameraRig>__
                                              ;
                                              if (lVar9 != 0) {
                                                *(undefined8 *)(lVar9 + 0x10) =
                                                     *(undefined8 *)
                                                                                                            
                                                  Method_UnityEngine_GameObject_GetComponent<MeshFilter>__
                                                ;
                                                thunk_FUN_02dd37b4();
                                                *(undefined8 *)(lVar9 + 0x20) =
                                                     *(undefined8 *)puVar5;
                                                thunk_FUN_02dd37b4((undefined8 *)(lVar9 + 0x20));
                                                *(undefined4 *)(lVar9 + 0x18) = 3;
                                                lVar10 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
                                                FUN_03aabc60(lVar10,*(undefined8 *)puVar3);
                                                if (lVar10 != 0) {
                                                  lVar14 = *(long *)puVar4;
                                                  uVar12 = *(undefined8 *)
                                                                                                                        
                                                  Method_UnityEngine_GameObject_GetComponentInParent<InspectorPanel>__
                                                  ;
                                                  lVar13 = *(long *)(lVar10 + 0x10);
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar12;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar10,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar10;
                                                  thunk_FUN_02dd37b4((long *)(lVar9 + 0x30),lVar10);
                                                  lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar10,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar13 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponent<RectTransform>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar13 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_UnityEngine_GameObject_GetComponentInParent<ARBaseGestureInteractable>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar10 != 0) {
                                                    lVar14 = *(long *)(lVar10 + 0x10);
                                                    lVar15 = *(long *)puVar6;
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    if (lVar14 != 0) {
                                                      uVar1 = *(uint *)(lVar10 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                        *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                        plVar11 = (long *)(lVar14 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar11 = lVar13;
                                                        thunk_FUN_02dd37b4(plVar11,lVar13);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar10,lVar13,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar10;
                                                  thunk_FUN_02dd37b4((long *)(lVar9 + 0x28),lVar10);
                                                  lVar10 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar9;
                                                      thunk_FUN_02dd37b4(plVar11,lVar9);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar9,0);
                                                  puVar7 = 
                                                  Method_UnityEngine_GameObject_GetComponent<OVRFace_IMeshWeightsProvider>__
                                                  ;
                                                  puVar5 = 
                                                  Method_Unity_VisualScripting_Antlr3_Runtime_Tree_BaseTreeAdaptor_SetNodeText__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Unity_VisualScripting_Antlr3_Runtime_Tree_BaseTreeAdaptor_SetNodeText__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar9 + 0x20) =
                                                       *(undefined8 *)puVar7;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar9 + 0x20));
                                                  *(undefined4 *)(lVar9 + 0x18) = 1;
                                                  lVar10 = thunk_FUN_02d9d534(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03aabc60(lVar10,*(undefined8 *)puVar3);
                                                  if (lVar10 != 0) {
                                                    uVar12 = *(undefined8 *)puVar5;
                                                    lVar13 = *(long *)(lVar10 + 0x10);
                                                    lVar14 = *(long *)puVar4;
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    if (lVar13 != 0) {
                                                      uVar1 = *(uint *)(lVar10 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                        *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar12;
                                                        thunk_FUN_02dd37b4();
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar10,uVar12,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar10;
                                                  thunk_FUN_02dd37b4((long *)(lVar9 + 0x30),lVar10);
                                                  lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar10,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar13 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar13,0);
                                                  puVar5 = 
                                                  Method_UnityEngine_GameObject_GetComponentInChildren<TMP_Dropdown_DropdownItem>__
                                                  ;
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponentInChildren<TMP_Dropdown_DropdownItem>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar13 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_UnityEngine_GameObject_GetComponentInParent<ARBaseGestureInteractable>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar10 != 0) {
                                                    lVar14 = *(long *)(lVar10 + 0x10);
                                                    lVar15 = *(long *)puVar6;
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    if (lVar14 != 0) {
                                                      uVar1 = *(uint *)(lVar10 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                        *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                        plVar11 = (long *)(lVar14 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar11 = lVar13;
                                                        thunk_FUN_02dd37b4(plVar11,lVar13);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar10,lVar13,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar10;
                                                  thunk_FUN_02dd37b4((long *)(lVar9 + 0x28),lVar10);
                                                  lVar10 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar9;
                                                      thunk_FUN_02dd37b4(plVar11,lVar9);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar9,0);
                                                  puVar8 = 
                                                  Method_UnityEngine_GameObject_GetComponents<INotificationReceiver>__
                                                  ;
                                                  puVar7 = 
                                                  Method_UnityEngine_GameObject_GetComponentInParent<XRBaseController>__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponentInParent<XRBaseController>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar9 + 0x20) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar9 + 0x20));
                                                  *(undefined4 *)(lVar9 + 0x18) = 0;
                                                  lVar10 = thunk_FUN_02d9d534(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03aabc60(lVar10,*(undefined8 *)puVar3);
                                                  if (lVar10 != 0) {
                                                    uVar12 = *(undefined8 *)puVar7;
                                                    lVar13 = *(long *)(lVar10 + 0x10);
                                                    lVar14 = *(long *)puVar4;
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    if (lVar13 != 0) {
                                                      uVar1 = *(uint *)(lVar10 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                        *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar12;
                                                        thunk_FUN_02dd37b4();
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar10,uVar12,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar10;
                                                  thunk_FUN_02dd37b4((long *)(lVar9 + 0x30),lVar10);
                                                  lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar10,*(undefined8 *)
                                                                                                                                              
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
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponentInParent<ARBaseGestureInteractable>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar10 != 0) {
                                                    lVar14 = *(long *)(lVar10 + 0x10);
                                                    lVar15 = *(long *)puVar6;
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    if (lVar14 != 0) {
                                                      uVar1 = *(uint *)(lVar10 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                        *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                        plVar11 = (long *)(lVar14 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar11 = lVar13;
                                                        thunk_FUN_02dd37b4(plVar11,lVar13);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar10,lVar13,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar10;
                                                  thunk_FUN_02dd37b4((long *)(lVar9 + 0x28),lVar10);
                                                  lVar10 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar9;
                                                      thunk_FUN_02dd37b4(plVar11,lVar9);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar9,0);
                                                  puVar7 = 
                                                  Method_UnityEngine_GameObject_GetComponents<Collider>__
                                                  ;
                                                  puVar5 = 
                                                  Method_UnityEngine_UIElements_BaseTreeView_OnItemIndexChanged__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_BaseTreeView_OnItemIndexChanged__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar9 + 0x20) =
                                                       *(undefined8 *)puVar7;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar9 + 0x20));
                                                  *(undefined4 *)(lVar9 + 0x18) = 0;
                                                  lVar10 = thunk_FUN_02d9d534(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03aabc60(lVar10,*(undefined8 *)puVar3);
                                                  if (lVar10 != 0) {
                                                    uVar12 = *(undefined8 *)puVar5;
                                                    lVar13 = *(long *)(lVar10 + 0x10);
                                                    lVar14 = *(long *)puVar4;
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    if (lVar13 != 0) {
                                                      uVar1 = *(uint *)(lVar10 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                        *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar12;
                                                        thunk_FUN_02dd37b4();
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar10,uVar12,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar10;
                                                  thunk_FUN_02dd37b4((long *)(lVar9 + 0x30),lVar10);
                                                  lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar10,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar13 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponents<Component>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar13 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_UnityEngine_GameObject_GetComponentInParent<ARBaseGestureInteractable>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar10 != 0) {
                                                    lVar14 = *(long *)(lVar10 + 0x10);
                                                    lVar15 = *(long *)puVar6;
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    if (lVar14 != 0) {
                                                      uVar1 = *(uint *)(lVar10 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                        *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                        plVar11 = (long *)(lVar14 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar11 = lVar13;
                                                        thunk_FUN_02dd37b4(plVar11,lVar13);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar10,lVar13,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar10;
                                                  thunk_FUN_02dd37b4((long *)(lVar9 + 0x28),lVar10);
                                                  lVar10 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar9;
                                                      thunk_FUN_02dd37b4(plVar11,lVar9);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar9,0);
                                                  puVar7 = 
                                                  Method_UnityEngine_GameObject_GetComponentInParent<IXRHapticImpulseProvider>__
                                                  ;
                                                  puVar5 = 
                                                  Method_UnityEngine_XR_Interaction_Toolkit_Locomotion_Teleportation_BaseTeleportationInteractable_GenerateTeleportRequest__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_XR_Interaction_Toolkit_Locomotion_Teleportation_BaseTeleportationInteractable_GenerateTeleportRequest__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar9 + 0x20) =
                                                       *(undefined8 *)puVar7;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar9 + 0x20));
                                                  *(undefined4 *)(lVar9 + 0x18) = 1;
                                                  lVar10 = thunk_FUN_02d9d534(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03aabc60(lVar10,*(undefined8 *)puVar3);
                                                  if (lVar10 != 0) {
                                                    uVar12 = *(undefined8 *)puVar5;
                                                    lVar13 = *(long *)(lVar10 + 0x10);
                                                    lVar14 = *(long *)puVar4;
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    if (lVar13 != 0) {
                                                      uVar1 = *(uint *)(lVar10 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                        *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar12;
                                                        thunk_FUN_02dd37b4();
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar10,uVar12,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar10;
                                                  thunk_FUN_02dd37b4((long *)(lVar9 + 0x30),lVar10);
                                                  lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar10,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar13 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar13,0);
                                                  puVar5 = 
                                                  Method_UnityEngine_GameObject_GetComponent<XRHandTrackingEvents>__
                                                  ;
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponent<XRHandTrackingEvents>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar13 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_UnityEngine_GameObject_GetComponentInParent<ARBaseGestureInteractable>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar10 != 0) {
                                                    lVar14 = *(long *)(lVar10 + 0x10);
                                                    lVar15 = *(long *)puVar6;
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    if (lVar14 != 0) {
                                                      uVar1 = *(uint *)(lVar10 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                        *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                        plVar11 = (long *)(lVar14 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar11 = lVar13;
                                                        thunk_FUN_02dd37b4(plVar11,lVar13);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar10,lVar13,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar10;
                                                  thunk_FUN_02dd37b4((long *)(lVar9 + 0x28),lVar10);
                                                  lVar10 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar9;
                                                      thunk_FUN_02dd37b4(plVar11,lVar9);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar9,0);
                                                  puVar8 = 
                                                  Method_UnityEngine_GameObject_GetComponentInParent<IScrollHandler>__
                                                  ;
                                                  puVar7 = 
                                                  Method_UnityEngine_GameObject_GetComponent<XRHandSkeletonDriver>__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponent<XRHandSkeletonDriver>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar9 + 0x20) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar9 + 0x20));
                                                  *(undefined4 *)(lVar9 + 0x18) = 0;
                                                  lVar10 = thunk_FUN_02d9d534(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03aabc60(lVar10,*(undefined8 *)puVar3);
                                                  if (lVar10 != 0) {
                                                    uVar12 = *(undefined8 *)puVar7;
                                                    lVar13 = *(long *)(lVar10 + 0x10);
                                                    lVar14 = *(long *)puVar4;
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    if (lVar13 != 0) {
                                                      uVar1 = *(uint *)(lVar10 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                        *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar12;
                                                        thunk_FUN_02dd37b4();
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar10,uVar12,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar10;
                                                  thunk_FUN_02dd37b4((long *)(lVar9 + 0x30),lVar10);
                                                  lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar10,*(undefined8 *)
                                                                                                                                              
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
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponentInParent<ARBaseGestureInteractable>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar10 != 0) {
                                                    lVar14 = *(long *)(lVar10 + 0x10);
                                                    lVar15 = *(long *)puVar6;
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    if (lVar14 != 0) {
                                                      uVar1 = *(uint *)(lVar10 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                        *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                        plVar11 = (long *)(lVar14 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar11 = lVar13;
                                                        thunk_FUN_02dd37b4(plVar11,lVar13);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar10,lVar13,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar10;
                                                  thunk_FUN_02dd37b4((long *)(lVar9 + 0x28),lVar10);
                                                  lVar10 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar9;
                                                      thunk_FUN_02dd37b4(plVar11,lVar9);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar9,0);
                                                  puVar7 = 
                                                  Method_UnityEngine_GameObject_GetComponentInChildren<Text>__
                                                  ;
                                                  puVar5 = 
                                                  Method_UnityEngine_UIElements_StyleSheets_BaseStyleMatcher_MatchManyByOrder__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_StyleSheets_BaseStyleMatcher_MatchManyByOrder__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar9 + 0x20) =
                                                       *(undefined8 *)puVar7;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar9 + 0x20));
                                                  *(undefined4 *)(lVar9 + 0x18) = 0;
                                                  lVar10 = thunk_FUN_02d9d534(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03aabc60(lVar10,*(undefined8 *)puVar3);
                                                  if (lVar10 != 0) {
                                                    uVar12 = *(undefined8 *)puVar5;
                                                    lVar13 = *(long *)(lVar10 + 0x10);
                                                    lVar14 = *(long *)puVar4;
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    if (lVar13 != 0) {
                                                      uVar1 = *(uint *)(lVar10 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                        *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar12;
                                                        thunk_FUN_02dd37b4();
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar10,uVar12,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar10;
                                                  thunk_FUN_02dd37b4((long *)(lVar9 + 0x30),lVar10);
                                                  lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar10,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar13 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponentInParent<OVRFaceExpressions>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar13 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_UnityEngine_GameObject_GetComponentInParent<ARBaseGestureInteractable>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar10 != 0) {
                                                    lVar14 = *(long *)(lVar10 + 0x10);
                                                    lVar15 = *(long *)puVar6;
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    if (lVar14 != 0) {
                                                      uVar1 = *(uint *)(lVar10 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                        *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                        plVar11 = (long *)(lVar14 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar11 = lVar13;
                                                        thunk_FUN_02dd37b4(plVar11,lVar13);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar10,lVar13,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar10;
                                                  thunk_FUN_02dd37b4((long *)(lVar9 + 0x28),lVar10);
                                                  lVar10 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar9;
                                                      thunk_FUN_02dd37b4(plVar11,lVar9);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar9,0);
                                                  puVar7 = 
                                                  Method_UnityEngine_GameObject_GetComponentInParent<XRGrabInteractable>__
                                                  ;
                                                  puVar5 = 
                                                  Method_Unity_VisualScripting_Antlr3_Runtime_Tree_BaseTree_AddChild__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Unity_VisualScripting_Antlr3_Runtime_Tree_BaseTree_AddChild__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar9 + 0x20) =
                                                       *(undefined8 *)puVar7;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar9 + 0x20));
                                                  *(undefined4 *)(lVar9 + 0x18) = 1;
                                                  lVar10 = thunk_FUN_02d9d534(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03aabc60(lVar10,*(undefined8 *)puVar3);
                                                  if (lVar10 != 0) {
                                                    uVar12 = *(undefined8 *)puVar5;
                                                    lVar13 = *(long *)(lVar10 + 0x10);
                                                    lVar14 = *(long *)puVar4;
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    if (lVar13 != 0) {
                                                      uVar1 = *(uint *)(lVar10 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                        *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar12;
                                                        thunk_FUN_02dd37b4();
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar10,uVar12,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar10;
                                                  thunk_FUN_02dd37b4((long *)(lVar9 + 0x30),lVar10);
                                                  lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar10,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar13 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar13,0);
                                                  puVar5 = 
                                                  Method_UnityEngine_GameObject_GetComponentInChildren<Dropdown_DropdownItem>__
                                                  ;
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponentInChildren<Dropdown_DropdownItem>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar13 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_UnityEngine_GameObject_GetComponentInParent<ARBaseGestureInteractable>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar10 != 0) {
                                                    lVar14 = *(long *)(lVar10 + 0x10);
                                                    lVar15 = *(long *)puVar6;
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    if (lVar14 != 0) {
                                                      uVar1 = *(uint *)(lVar10 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                        *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                        plVar11 = (long *)(lVar14 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar11 = lVar13;
                                                        thunk_FUN_02dd37b4(plVar11,lVar13);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar10,lVar13,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar10;
                                                  thunk_FUN_02dd37b4((long *)(lVar9 + 0x28),lVar10);
                                                  lVar10 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar9;
                                                      thunk_FUN_02dd37b4(plVar11,lVar9);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar9,0);
                                                  puVar8 = 
                                                  Method_UnityEngine_GameObject_GetComponents<IAnimationWindowPreview>__
                                                  ;
                                                  puVar7 = 
                                                  Method_UnityEngine_GameObject_GetComponentInParent<IPointerExitHandler>__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponentInParent<IPointerExitHandler>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar9 + 0x20) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar9 + 0x20));
                                                  *(undefined4 *)(lVar9 + 0x18) = 0;
                                                  lVar10 = thunk_FUN_02d9d534(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03aabc60(lVar10,*(undefined8 *)puVar3);
                                                  if (lVar10 != 0) {
                                                    uVar12 = *(undefined8 *)puVar7;
                                                    lVar13 = *(long *)(lVar10 + 0x10);
                                                    lVar14 = *(long *)puVar4;
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    if (lVar13 != 0) {
                                                      uVar1 = *(uint *)(lVar10 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                        *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar12;
                                                        thunk_FUN_02dd37b4();
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar10,uVar12,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar10;
                                                  thunk_FUN_02dd37b4((long *)(lVar9 + 0x30),lVar10);
                                                  lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar10,*(undefined8 *)
                                                                                                                                              
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
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponentInParent<ARBaseGestureInteractable>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar10 != 0) {
                                                    lVar14 = *(long *)(lVar10 + 0x10);
                                                    lVar15 = *(long *)puVar6;
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    if (lVar14 != 0) {
                                                      uVar1 = *(uint *)(lVar10 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                        *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                        plVar11 = (long *)(lVar14 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar11 = lVar13;
                                                        thunk_FUN_02dd37b4(plVar11,lVar13);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar10,lVar13,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar10;
                                                  thunk_FUN_02dd37b4((long *)(lVar9 + 0x28),lVar10);
                                                  lVar10 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar9;
                                                      thunk_FUN_02dd37b4(plVar11,lVar9);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar9,0);
                                                  puVar7 = 
                                                  Method_UnityEngine_GameObject_GetComponent<VoipAudioSourceHiLevel_FilterReadDelegate>__
                                                  ;
                                                  puVar5 = 
                                                  Method_UnityEngine_UIElements_BaseTreeViewController_set_itemsSource__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_BaseTreeViewController_set_itemsSource__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar9 + 0x20) =
                                                       *(undefined8 *)puVar7;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar9 + 0x20));
                                                  *(undefined4 *)(lVar9 + 0x18) = 0;
                                                  lVar10 = thunk_FUN_02d9d534(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03aabc60(lVar10,*(undefined8 *)puVar3);
                                                  if (lVar10 != 0) {
                                                    uVar12 = *(undefined8 *)puVar5;
                                                    lVar13 = *(long *)(lVar10 + 0x10);
                                                    lVar14 = *(long *)puVar4;
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    if (lVar13 != 0) {
                                                      uVar1 = *(uint *)(lVar10 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                        *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar12;
                                                        thunk_FUN_02dd37b4();
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar10,uVar12,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar10;
                                                  thunk_FUN_02dd37b4((long *)(lVar9 + 0x30),lVar10);
                                                  lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar10,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar13 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponentInChildren<PlayerInput>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar13 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_UnityEngine_GameObject_GetComponentInParent<ARBaseGestureInteractable>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar10 != 0) {
                                                    lVar14 = *(long *)(lVar10 + 0x10);
                                                    lVar15 = *(long *)puVar6;
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    if (lVar14 != 0) {
                                                      uVar1 = *(uint *)(lVar10 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                        *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                        plVar11 = (long *)(lVar14 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar11 = lVar13;
                                                        thunk_FUN_02dd37b4(plVar11,lVar13);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar10,lVar13,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar10;
                                                  thunk_FUN_02dd37b4((long *)(lVar9 + 0x28),lVar10);
                                                  lVar10 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar9;
                                                      thunk_FUN_02dd37b4(plVar11,lVar9);
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
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


