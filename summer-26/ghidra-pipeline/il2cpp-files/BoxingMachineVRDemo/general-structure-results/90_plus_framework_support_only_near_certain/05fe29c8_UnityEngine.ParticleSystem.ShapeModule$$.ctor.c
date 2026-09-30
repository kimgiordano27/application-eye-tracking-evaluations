/*
FUNCTION_NAME: UnityEngine.ParticleSystem.ShapeModule$$.ctor
ENTRY_POINT: 05fe29c8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_6;ui_or_gameplay_sink_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void UnityEngine_ParticleSystem_ShapeModule___ctor(long param_1)

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
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 unaff_x24;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  long in_stack_00000000;
  undefined8 in_stack_00000008;
  
  uVar1 = *(uint *)(unaff_x23 + 0x18);
  if (uVar1 < *(uint *)(param_1 + 0x18)) {
    *(uint *)(unaff_x23 + 0x18) = uVar1 + 1;
    *(undefined8 *)(param_1 + (long)(int)uVar1 * 8 + 0x20) = unaff_x24;
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
    }
    else {
      FUN_03aac494();
    }
    lVar6 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__);
    FUN_05fc094c(lVar6,0);
    puVar2 = Method_UnityEngine_GameObject_GetComponentsInParent<Canvas>__;
    if (lVar6 != 0) {
      *(undefined8 *)(lVar6 + 0x10) =
           *(undefined8 *)UnityEngine_XR_Interaction_Toolkit_XRScreenSpaceController_TypeInfo;
      thunk_FUN_02dd37b4();
      *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)puVar2;
      thunk_FUN_02dd37b4((undefined8 *)(lVar6 + 0x20));
      *(undefined4 *)(lVar6 + 0x18) = 0;
      lVar3 = thunk_FUN_02d9d534(*unaff_x29);
      FUN_03aabc60(lVar3,*unaff_x27);
      if (lVar3 != 0) {
        lVar8 = *unaff_x19;
        uVar5 = *(undefined8 *)Method_UnityEngine_UIElements_ColumnLayout_<DoLayout>b__49_0__;
        lVar7 = *(long *)(lVar3 + 0x10);
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
                         *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
          }
          *(long *)(lVar6 + 0x30) = lVar3;
          thunk_FUN_02dd37b4((long *)(lVar6 + 0x30),lVar3);
          lVar3 = thunk_FUN_02d9d534(*(undefined8 *)
                                      Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                    );
          FUN_03aabc60(lVar3,*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                      );
          lVar7 = thunk_FUN_02d9d534(*unaff_x28);
          FUN_05fc0944(lVar7,0);
          if (lVar7 != 0) {
            *(undefined8 *)(lVar7 + 0x18) =
                 *(undefined8 *)Method_UnityEngine_GameObject_GetComponentsInParent<RectMask2D>__;
            thunk_FUN_02dd37b4();
            *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
            thunk_FUN_02dd37b4();
            if (lVar3 != 0) {
              lVar8 = *(long *)(lVar3 + 0x10);
              lVar9 = *unaff_x20;
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
                               *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
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
                  lVar6 = thunk_FUN_02d9d534(*(undefined8 *)
                                              Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                            );
                  FUN_05fc094c(lVar6,0);
                  puVar2 = Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_FullName__;
                  if (lVar6 != 0) {
                    *(undefined8 *)(lVar6 + 0x10) =
                         *(undefined8 *)UnityEngine_XR_ARSubsystems_XRResultStatus_TypeInfo;
                    thunk_FUN_02dd37b4();
                    *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)puVar2;
                    thunk_FUN_02dd37b4((undefined8 *)(lVar6 + 0x20));
                    *(undefined4 *)(lVar6 + 0x18) = 0;
                    lVar3 = thunk_FUN_02d9d534(*unaff_x29);
                    FUN_03aabc60(lVar3,*unaff_x27);
                    if (lVar3 != 0) {
                      lVar8 = *unaff_x19;
                      uVar5 = *(undefined8 *)
                               Method_UnityEngine_UIElements_ColumnLayout_<DoLayout>b__49_1__;
                      lVar7 = *(long *)(lVar3 + 0x10);
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
                        lVar3 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                        
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                        FUN_03aabc60(lVar3,*(undefined8 *)
                                            Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                    );
                        lVar7 = thunk_FUN_02d9d534(*unaff_x28);
                        FUN_05fc0944(lVar7,0);
                        if (lVar7 != 0) {
                          *(undefined8 *)(lVar7 + 0x18) =
                               *(undefined8 *)
                                Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetPropertyImpl__
                          ;
                          thunk_FUN_02dd37b4();
                          *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
                          thunk_FUN_02dd37b4();
                          if (lVar3 != 0) {
                            lVar8 = *(long *)(lVar3 + 0x10);
                            lVar9 = *unaff_x20;
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
                                              (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
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
                                lVar6 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                        
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                FUN_05fc094c(lVar6,0);
                                puVar2 = 
                                Method_System_Reflection_Emit_GenericTypeParameterBuilder_IsPrimitiveImpl__
                                ;
                                if (lVar6 != 0) {
                                  *(undefined8 *)(lVar6 + 0x10) =
                                       *(undefined8 *)
                                        Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_Name__
                                  ;
                                  thunk_FUN_02dd37b4();
                                  *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)puVar2;
                                  thunk_FUN_02dd37b4((undefined8 *)(lVar6 + 0x20));
                                  *(undefined4 *)(lVar6 + 0x18) = 0;
                                  lVar3 = thunk_FUN_02d9d534(*unaff_x29);
                                  FUN_03aabc60(lVar3,*unaff_x27);
                                  if (lVar3 != 0) {
                                    lVar8 = *unaff_x19;
                                    uVar5 = *(undefined8 *)
                                             Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMembers__
                                    ;
                                    lVar7 = *(long *)(lVar3 + 0x10);
                                    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                                    if (lVar7 != 0) {
                                      uVar1 = *(uint *)(lVar3 + 0x18);
                                      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                        *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5
                                        ;
                                        thunk_FUN_02dd37b4();
                                      }
                                      else {
                                        FUN_03aac494(lVar3,uVar5,
                                                     *(undefined8 *)
                                                      (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) +
                                                      0x70));
                                      }
                                      *(long *)(lVar6 + 0x30) = lVar3;
                                      thunk_FUN_02dd37b4((long *)(lVar6 + 0x30),lVar3);
                                      lVar3 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                    
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                      FUN_03aabc60(lVar3,*(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                      lVar7 = thunk_FUN_02d9d534(*unaff_x28);
                                      FUN_05fc0944(lVar7,0);
                                      if (lVar7 != 0) {
                                        *(undefined8 *)(lVar7 + 0x18) =
                                             *(undefined8 *)
                                              Method_System_Reflection_Emit_GenericTypeParameterBuilder_IsArrayImpl__
                                        ;
                                        thunk_FUN_02dd37b4();
                                        *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
                                        thunk_FUN_02dd37b4();
                                        if (lVar3 != 0) {
                                          lVar8 = *(long *)(lVar3 + 0x10);
                                          lVar9 = *unaff_x20;
                                          *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                                          if (lVar8 != 0) {
                                            uVar1 = *(uint *)(lVar3 + 0x18);
                                            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                              *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                              plVar4 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20)
                                              ;
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
                                              lVar6 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                    
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
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
                                                lVar3 = thunk_FUN_02d9d534(*unaff_x29);
                                                FUN_03aabc60(lVar3,*unaff_x27);
                                                if (lVar3 != 0) {
                                                  lVar8 = *unaff_x19;
                                                  uVar5 = *(undefined8 *)
                                                                                                                      
                                                  Method_UnityEngine_GameObject_GetComponent<InputField>__
                                                  ;
                                                  lVar7 = *(long *)(lVar3 + 0x10);
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
                                                  lVar3 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar3,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar7 = thunk_FUN_02d9d534(*unaff_x28);
                                                  FUN_05fc0944(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponent<Renderer>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar3 != 0) {
                                                    lVar8 = *(long *)(lVar3 + 0x10);
                                                    lVar9 = *unaff_x20;
                                                    *(int *)(lVar3 + 0x1c) =
                                                         *(int *)(lVar3 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar3 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                        plVar4 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
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
                                                    lVar6 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
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
                                                    lVar3 = thunk_FUN_02d9d534(*unaff_x29);
                                                    FUN_03aabc60(lVar3,*unaff_x27);
                                                    if (lVar3 != 0) {
                                                      lVar8 = *unaff_x19;
                                                      uVar5 = *(undefined8 *)
                                                                                                                              
                                                  Newtonsoft_Json_Linq_JToken_LineInfoAnnotation_TypeInfo
                                                  ;
                                                  lVar7 = *(long *)(lVar3 + 0x10);
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
                                                  lVar3 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar3,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar7 = thunk_FUN_02d9d534(*unaff_x28);
                                                  FUN_05fc0944(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponent<OVRManager>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar3 != 0) {
                                                    lVar8 = *(long *)(lVar3 + 0x10);
                                                    lVar9 = *unaff_x20;
                                                    *(int *)(lVar3 + 0x1c) =
                                                         *(int *)(lVar3 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar3 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                        plVar4 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
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
                                                    lVar6 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
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
                                                  lVar3 = thunk_FUN_02d9d534(*unaff_x29);
                                                  FUN_03aabc60(lVar3,*unaff_x27);
                                                  if (lVar3 != 0) {
                                                    lVar8 = *unaff_x19;
                                                    uVar5 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Linq_Enumerable_Count<ARAnchor>__;
                                                  lVar7 = *(long *)(lVar3 + 0x10);
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
                                                  lVar3 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar3,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar7 = thunk_FUN_02d9d534(*unaff_x28);
                                                  FUN_05fc0944(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponentsInParent<OVRSkeleton_IOVRSkeletonDataProvider>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar3 != 0) {
                                                    lVar8 = *(long *)(lVar3 + 0x10);
                                                    lVar9 = *unaff_x20;
                                                    *(int *)(lVar3 + 0x1c) =
                                                         *(int *)(lVar3 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar3 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                        plVar4 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
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
                                                    *(long *)(in_stack_00000000 + 0x28) = unaff_x21;
                                                    thunk_FUN_02dd37b4();
                                                    FUN_05fc0710(in_stack_00000008,in_stack_00000000
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
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


