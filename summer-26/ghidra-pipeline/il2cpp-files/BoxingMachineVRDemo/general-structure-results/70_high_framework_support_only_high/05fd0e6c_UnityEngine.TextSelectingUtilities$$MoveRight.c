/*
FUNCTION_NAME: UnityEngine.TextSelectingUtilities$$MoveRight
ENTRY_POINT: 05fd0e6c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_3;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void UnityEngine_TextSelectingUtilities__MoveRight(undefined8 param_1,undefined8 param_2)

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
  undefined8 *unaff_x23;
  undefined8 *unaff_x25;
  undefined8 unaff_x28;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
  thunk_FUN_02dd37b4();
  *(undefined8 *)(unaff_x22 + 0x20) = *unaff_x23;
  thunk_FUN_02dd37b4((undefined8 *)(unaff_x22 + 0x20));
  *(undefined4 *)(unaff_x22 + 0x18) = 0;
  lVar6 = thunk_FUN_02d9d534(*unaff_x25);
  FUN_03aabc60(lVar6,*unaff_x19);
  puVar2 = PTR_DAT_0675eb70;
  if (lVar6 != 0) {
    uVar8 = *(undefined8 *)Method_UnityEngine_Color_set_Item__;
    lVar9 = *(long *)(lVar6 + 0x10);
    lVar10 = *(long *)PTR_DAT_0675eb70;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    puVar5 = Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__;
    if (lVar9 != 0) {
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
        thunk_FUN_02dd37b4();
      }
      else {
        FUN_03aac494(lVar6,uVar8,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70))
        ;
      }
      *(long *)(unaff_x22 + 0x30) = lVar6;
      thunk_FUN_02dd37b4((long *)(unaff_x22 + 0x30),lVar6);
      lVar6 = thunk_FUN_02d9d534(*(undefined8 *)puVar5);
      FUN_03aabc60(lVar6,*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<FixedJoint>__);
      lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                );
      FUN_05fc0944(lVar9,0);
      if (lVar9 != 0) {
        *(undefined8 *)(lVar9 + 0x18) =
             *(undefined8 *)
              Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetConstructorImpl__;
        thunk_FUN_02dd37b4();
        *(undefined8 *)(lVar9 + 0x10) =
             *(undefined8 *)
              Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetConstructors__;
        thunk_FUN_02dd37b4();
        puVar4 = Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__;
        if (lVar6 != 0) {
          lVar10 = *(long *)(lVar6 + 0x10);
          lVar11 = *(long *)Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__;
          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
          if (lVar10 != 0) {
            uVar1 = *(uint *)(lVar6 + 0x18);
            if (uVar1 < *(uint *)(lVar10 + 0x18)) {
              *(uint *)(lVar6 + 0x18) = uVar1 + 1;
              plVar7 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
              *plVar7 = lVar9;
              thunk_FUN_02dd37b4(plVar7,lVar9);
            }
            else {
              FUN_03aac494(lVar6,lVar9,
                           *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
            }
            *(long *)(unaff_x22 + 0x28) = lVar6;
            thunk_FUN_02dd37b4((long *)(unaff_x22 + 0x28),lVar6);
            if (unaff_x21 != 0) {
              lVar6 = *(long *)(unaff_x21 + 0x10);
              *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
              if (lVar6 != 0) {
                uVar1 = *(uint *)(unaff_x21 + 0x18);
                if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                  *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                  *(long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = unaff_x22;
                  thunk_FUN_02dd37b4();
                }
                else {
                  FUN_03aac494();
                }
                lVar6 = thunk_FUN_02d9d534(*(undefined8 *)
                                            Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                          );
                FUN_05fc094c(lVar6,0);
                puVar3 = PTR_DAT_06761180;
                if (lVar6 != 0) {
                  *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)PTR_DAT_0676a290;
                  thunk_FUN_02dd37b4();
                  *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)puVar3;
                  thunk_FUN_02dd37b4((undefined8 *)(lVar6 + 0x20));
                  *(undefined4 *)(lVar6 + 0x18) = 0;
                  lVar9 = thunk_FUN_02d9d534(*unaff_x25);
                  FUN_03aabc60(lVar9,*unaff_x19);
                  if (lVar9 != 0) {
                    lVar11 = *(long *)puVar2;
                    uVar8 = *(undefined8 *)Method_VRUIP_ColorPickerController_OnSliderValueChanged__
                    ;
                    lVar10 = *(long *)(lVar9 + 0x10);
                    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                    if (lVar10 != 0) {
                      uVar1 = *(uint *)(lVar9 + 0x18);
                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                        *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                        *(undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
                        thunk_FUN_02dd37b4();
                      }
                      else {
                        FUN_03aac494(lVar9,uVar8,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                      }
                      *(long *)(lVar6 + 0x30) = lVar9;
                      thunk_FUN_02dd37b4((long *)(lVar6 + 0x30),lVar9);
                      lVar9 = thunk_FUN_02d9d534(*(undefined8 *)puVar5);
                      FUN_03aabc60(lVar9,*(undefined8 *)
                                          Method_UnityEngine_GameObject_AddComponent<FixedJoint>__);
                      lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                      
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                 );
                      FUN_05fc0944(lVar10,0);
                      if (lVar10 != 0) {
                        *(undefined8 *)(lVar10 + 0x18) =
                             *(undefined8 *)
                              Method_UnityEngine_GameObject_GetComponentsInChildren<ParticleSystem>__
                        ;
                        thunk_FUN_02dd37b4();
                        *(undefined8 *)(lVar10 + 0x10) =
                             *(undefined8 *)
                              Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetConstructors__
                        ;
                        thunk_FUN_02dd37b4();
                        if (lVar9 != 0) {
                          lVar11 = *(long *)(lVar9 + 0x10);
                          lVar12 = *(long *)puVar4;
                          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                          if (lVar11 != 0) {
                            uVar1 = *(uint *)(lVar9 + 0x18);
                            if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                              *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                              plVar7 = (long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
                              *plVar7 = lVar10;
                              thunk_FUN_02dd37b4(plVar7,lVar10);
                            }
                            else {
                              FUN_03aac494(lVar9,lVar10,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                            }
                            *(long *)(lVar6 + 0x28) = lVar9;
                            thunk_FUN_02dd37b4((long *)(lVar6 + 0x28),lVar9);
                            lVar9 = *(long *)(unaff_x21 + 0x10);
                            *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
                            if (lVar9 != 0) {
                              uVar1 = *(uint *)(unaff_x21 + 0x18);
                              if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                plVar7 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
                                *plVar7 = lVar6;
                                thunk_FUN_02dd37b4(plVar7,lVar6);
                              }
                              else {
                                FUN_03aac494();
                              }
                              lVar6 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                              FUN_05fc094c(lVar6,0);
                              puVar3 = Method_UnityEngine_GameObject_GetComponent<ParticleSystem>__;
                              if (lVar6 != 0) {
                                *(undefined8 *)(lVar6 + 0x10) =
                                     *(undefined8 *)
                                      Method_UnityEngine_GameObject_GetComponent<NavMeshAgent>__;
                                thunk_FUN_02dd37b4();
                                *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)puVar3;
                                thunk_FUN_02dd37b4((undefined8 *)(lVar6 + 0x20));
                                *(undefined4 *)(lVar6 + 0x18) = 3;
                                lVar9 = thunk_FUN_02d9d534(*unaff_x25);
                                FUN_03aabc60(lVar9,*unaff_x19);
                                if (lVar9 != 0) {
                                  lVar11 = *(long *)puVar2;
                                  uVar8 = *(undefined8 *)
                                           Method_UnityEngine_GameObject_GetComponent<InputField>__;
                                  lVar10 = *(long *)(lVar9 + 0x10);
                                  *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                                  if (lVar10 != 0) {
                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                      *(undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
                                      thunk_FUN_02dd37b4();
                                    }
                                    else {
                                      FUN_03aac494(lVar9,uVar8,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) +
                                                    0x70));
                                    }
                                    *(long *)(lVar6 + 0x30) = lVar9;
                                    thunk_FUN_02dd37b4((long *)(lVar6 + 0x30),lVar9);
                                    lVar9 = thunk_FUN_02d9d534(*(undefined8 *)puVar5);
                                    FUN_03aabc60(lVar9,*(undefined8 *)
                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                );
                                    lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                  
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                    FUN_05fc0944(lVar10,0);
                                    if (lVar10 != 0) {
                                      *(undefined8 *)(lVar10 + 0x18) =
                                           *(undefined8 *)
                                            Method_UnityEngine_GameObject_GetComponent<Renderer>__;
                                      thunk_FUN_02dd37b4();
                                      *(undefined8 *)(lVar10 + 0x10) =
                                           *(undefined8 *)
                                            Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetConstructors__
                                      ;
                                      thunk_FUN_02dd37b4();
                                      if (lVar9 != 0) {
                                        lVar11 = *(long *)(lVar9 + 0x10);
                                        lVar12 = *(long *)puVar4;
                                        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                                        if (lVar11 != 0) {
                                          uVar1 = *(uint *)(lVar9 + 0x18);
                                          if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                            *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                            plVar7 = (long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
                                            *plVar7 = lVar10;
                                            thunk_FUN_02dd37b4(plVar7,lVar10);
                                          }
                                          else {
                                            FUN_03aac494(lVar9,lVar10,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0
                                                                    ) + 0x70));
                                          }
                                          *(long *)(lVar6 + 0x28) = lVar9;
                                          thunk_FUN_02dd37b4((long *)(lVar6 + 0x28),lVar9);
                                          lVar9 = *(long *)(unaff_x21 + 0x10);
                                          *(int *)(unaff_x21 + 0x1c) =
                                               *(int *)(unaff_x21 + 0x1c) + 1;
                                          if (lVar9 != 0) {
                                            uVar1 = *(uint *)(unaff_x21 + 0x18);
                                            if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                              *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                              plVar7 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20)
                                              ;
                                              *plVar7 = lVar6;
                                              thunk_FUN_02dd37b4(plVar7,lVar6);
                                            }
                                            else {
                                              FUN_03aac494();
                                            }
                                            lVar6 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                            FUN_05fc094c(lVar6,0);
                                            puVar3 = 
                                            Method_UnityEngine_GameObject_GetComponent<MeshRenderer>__
                                            ;
                                            if (lVar6 != 0) {
                                              *(undefined8 *)(lVar6 + 0x10) =
                                                   *(undefined8 *)PTR_DAT_06779338;
                                              thunk_FUN_02dd37b4();
                                              *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)puVar3;
                                              thunk_FUN_02dd37b4((undefined8 *)(lVar6 + 0x20));
                                              *(undefined4 *)(lVar6 + 0x18) = 3;
                                              lVar9 = thunk_FUN_02d9d534(*unaff_x25);
                                              FUN_03aabc60(lVar9,*unaff_x19);
                                              if (lVar9 != 0) {
                                                lVar11 = *(long *)puVar2;
                                                uVar8 = *(undefined8 *)
                                                                                                                  
                                                  Newtonsoft_Json_Linq_JToken_LineInfoAnnotation_TypeInfo
                                                ;
                                                lVar10 = *(long *)(lVar9 + 0x10);
                                                *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                                                if (lVar10 != 0) {
                                                  uVar1 = *(uint *)(lVar9 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                    *(undefined8 *)
                                                     (lVar10 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
                                                    thunk_FUN_02dd37b4();
                                                  }
                                                  else {
                                                    FUN_03aac494(lVar9,uVar8,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar11 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x30) = lVar9;
                                                  thunk_FUN_02dd37b4((long *)(lVar6 + 0x30),lVar9);
                                                  lVar9 = thunk_FUN_02d9d534(*(undefined8 *)puVar5);
                                                  FUN_03aabc60(lVar9,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar10,0);
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponent<OVRManager>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar10 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetConstructors__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar9 != 0) {
                                                    lVar11 = *(long *)(lVar9 + 0x10);
                                                    lVar12 = *(long *)puVar4;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    if (lVar11 != 0) {
                                                      uVar1 = *(uint *)(lVar9 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                        *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                        plVar7 = (long *)(lVar11 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar7 = lVar10;
                                                        thunk_FUN_02dd37b4(plVar7,lVar10);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar9,lVar10,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar9;
                                                  thunk_FUN_02dd37b4((long *)(lVar6 + 0x28),lVar9);
                                                  lVar9 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar9 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar6;
                                                      thunk_FUN_02dd37b4(plVar7,lVar6);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar6 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar6,0);
                                                  puVar3 = 
                                                  Method_UnityEngine_GameObject_TryGetComponent<CanvasTracker>__
                                                  ;
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_TryGetComponent<RectTransform>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar6 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar6 + 0x20));
                                                  *(undefined4 *)(lVar6 + 0x18) = 4;
                                                  lVar9 = thunk_FUN_02d9d534(*unaff_x25);
                                                  FUN_03aabc60(lVar9,*unaff_x19);
                                                  if (lVar9 != 0) {
                                                    lVar11 = *(long *)puVar2;
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Linq_Enumerable_Count<ARAnchor>__;
                                                  lVar10 = *(long *)(lVar9 + 0x10);
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar10 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar8;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar9,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x30) = lVar9;
                                                  thunk_FUN_02dd37b4((long *)(lVar6 + 0x30),lVar9);
                                                  lVar9 = thunk_FUN_02d9d534(*(undefined8 *)puVar5);
                                                  FUN_03aabc60(lVar9,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar10,0);
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponentsInParent<OVRSkeleton_IOVRSkeletonDataProvider>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar10 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetConstructors__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar9 != 0) {
                                                    lVar11 = *(long *)(lVar9 + 0x10);
                                                    lVar12 = *(long *)puVar4;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    if (lVar11 != 0) {
                                                      uVar1 = *(uint *)(lVar9 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                        *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                        plVar7 = (long *)(lVar11 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar7 = lVar10;
                                                        thunk_FUN_02dd37b4(plVar7,lVar10);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar9,lVar10,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar9;
                                                  thunk_FUN_02dd37b4((long *)(lVar6 + 0x28),lVar9);
                                                  lVar9 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar9 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar6;
                                                      thunk_FUN_02dd37b4(plVar7,lVar6);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    *(long *)(unaff_x20 + 0x28) = unaff_x21;
                                                    thunk_FUN_02dd37b4();
                                                    FUN_05fc0710(unaff_x28);
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
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


