/*
FUNCTION_NAME: UnityEngine.InputSystem.XR.Eyes$$get_rightEyePosition
ENTRY_POINT: 0569caf4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 140
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_2
*/


void UnityEngine_InputSystem_XR_Eyes__get_rightEyePosition(void)

{
  undefined *puVar1;
  long unaff_x19;
  long unaff_x20;
  
  thunk_FUN_02bb0e9c();
  if (0x12 < *(uint *)(unaff_x20 + -0x90)) {
    *(undefined8 *)(unaff_x19 + 0xb0) =
         *(undefined8 *)
          Method_System_Collections_Generic_EqualityComparer<List<RuleMatcher>>_get_Default__;
    thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0xb0));
    if (0x13 < *(uint *)(unaff_x19 + 0x18)) {
      *(undefined8 *)(unaff_x19 + 0xb8) =
           *(undefined8 *)
            Method_System_Collections_Generic_EqualityComparer<List<StyleSelectorPart>>_get_Default__
      ;
      thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0xb8));
      if (0x14 < *(uint *)(unaff_x19 + 0x18)) {
        *(undefined8 *)(unaff_x19 + 0xc0) =
             *(undefined8 *)
              Method_UnityEngine_UIElements_EventBase<MouseCaptureOutEvent>_SetCreateFunction__;
        thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0xc0));
        if (0x15 < *(uint *)(unaff_x19 + 0x18)) {
          *(undefined8 *)(unaff_x19 + 200) =
               *(undefined8 *)
                Method_UnityEngine_UIElements_EventBase<MouseDownEvent>_SetCreateFunction__;
          thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 200));
          if (0x16 < *(uint *)(unaff_x19 + 0x18)) {
            *(undefined8 *)(unaff_x19 + 0xd0) =
                 *(undefined8 *)
                  Method_UnityEngine_UIElements_EventBase<KeyUpEvent>_SetCreateFunction__;
            thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0xd0));
            if (0x17 < *(uint *)(unaff_x19 + 0x18)) {
              *(undefined8 *)(unaff_x19 + 0xd8) =
                   *(undefined8 *)Method_UnityEngine_UIElements_EventBase<InputEvent>_Init__;
              thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0xd8));
              if (0x18 < *(uint *)(unaff_x19 + 0x18)) {
                *(undefined8 *)(unaff_x19 + 0xe0) =
                     *(undefined8 *)
                      Method_UnityEngine_UIElements_EventBase<NavigationCancelEvent>_SetCreateFunction__
                ;
                thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0xe0));
                if (0x19 < *(uint *)(unaff_x19 + 0x18)) {
                  *(undefined8 *)(unaff_x19 + 0xe8) =
                       *(undefined8 *)
                        Method_UnityEngine_UIElements_EventBase<MouseOverEvent>_TypeId__;
                  thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0xe8));
                  if (0x1a < *(uint *)(unaff_x19 + 0x18)) {
                    *(undefined8 *)(unaff_x19 + 0xf0) =
                         *(undefined8 *)
                          Method_UnityEngine_UIElements_EventBase<PointerCancelEvent>_SetCreateFunction__
                    ;
                    thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0xf0));
                    if (0x1b < *(uint *)(unaff_x19 + 0x18)) {
                      *(undefined8 *)(unaff_x19 + 0xf8) =
                           *(undefined8 *)
                            Method_UnityEngine_UIElements_EventBase<MouseUpEvent>_SetCreateFunction__
                      ;
                      thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0xf8));
                      if (0x1c < *(uint *)(unaff_x19 + 0x18)) {
                        *(undefined8 *)(unaff_x19 + 0x100) =
                             *(undefined8 *)
                              Method_UnityEngine_UIElements_EventBase<InputEvent>_SetCreateFunction__
                        ;
                        thunk_FUN_02bb0e9c(unaff_x19 + 0x100);
                        if (0x1d < *(uint *)(unaff_x19 + 0x18)) {
                          *(undefined8 *)(unaff_x19 + 0x108) =
                               *(undefined8 *)
                                Method_UnityEngine_UIElements_EventBase<MouseOverEvent>_SetCreateFunction__
                          ;
                          thunk_FUN_02bb0e9c(unaff_x19 + 0x108);
                          if (0x1e < *(uint *)(unaff_x19 + 0x18)) {
                            *(undefined8 *)(unaff_x19 + 0x110) =
                                 *(undefined8 *)
                                  Method_UnityEngine_UIElements_EventBase<NavigationCancelEvent>_TypeId__
                            ;
                            thunk_FUN_02bb0e9c(unaff_x19 + 0x110);
                            if ((*(uint *)(unaff_x19 + 0x18) & 0xffffffe0) != 0) {
                              *(undefined8 *)(unaff_x19 + 0x118) =
                                   *(undefined8 *)
                                    Method_UnityEngine_UIElements_EventBase<PointerCancelEvent>_TypeId__
                              ;
                              thunk_FUN_02bb0e9c(unaff_x19 + 0x118);
                              if (0x20 < *(uint *)(unaff_x19 + 0x18)) {
                                *(undefined8 *)(unaff_x19 + 0x120) =
                                     *(undefined8 *)
                                      Method_UnityEngine_UIElements_EventBase<MouseOutEvent>_TypeId__
                                ;
                                thunk_FUN_02bb0e9c(unaff_x19 + 0x120);
                                if (0x21 < *(uint *)(unaff_x19 + 0x18)) {
                                  *(undefined8 *)(unaff_x19 + 0x128) =
                                       *(undefined8 *)
                                        Method_UnityEngine_UIElements_EventBase<NavigationMoveEvent>_TypeId__
                                  ;
                                  thunk_FUN_02bb0e9c(unaff_x19 + 0x128);
                                  if (0x22 < *(uint *)(unaff_x19 + 0x18)) {
                                    *(undefined8 *)(unaff_x19 + 0x130) =
                                         *(undefined8 *)
                                          Method_UnityEngine_UIElements_EventBase<MouseEnterEvent>_SetCreateFunction__
                                    ;
                                    thunk_FUN_02bb0e9c(unaff_x19 + 0x130);
                                    if (0x23 < *(uint *)(unaff_x19 + 0x18)) {
                                      *(undefined8 *)(unaff_x19 + 0x138) =
                                           *(undefined8 *)
                                            Method_UnityEngine_UIElements_EventBase<NavigationMoveEvent>_SetCreateFunction__
                                      ;
                                      thunk_FUN_02bb0e9c(unaff_x19 + 0x138);
                                      if (0x24 < *(uint *)(unaff_x19 + 0x18)) {
                                        *(undefined8 *)(unaff_x19 + 0x140) =
                                             *(undefined8 *)
                                              Method_UnityEngine_UIElements_EventBase<MouseCaptureEvent>_SetCreateFunction__
                                        ;
                                        thunk_FUN_02bb0e9c(unaff_x19 + 0x140);
                                        if (0x25 < *(uint *)(unaff_x19 + 0x18)) {
                                          *(undefined8 *)(unaff_x19 + 0x148) =
                                               *(undefined8 *)
                                                Method_UnityEngine_UIElements_EventBase<PointerCaptureEvent>_SetCreateFunction__
                                          ;
                                          thunk_FUN_02bb0e9c(unaff_x19 + 0x148);
                                          if (0x26 < *(uint *)(unaff_x19 + 0x18)) {
                                            *(undefined8 *)(unaff_x19 + 0x150) =
                                                 *(undefined8 *)
                                                  Method_UnityEngine_Rendering_DebugUI_Field<int>__ctor__
                                            ;
                                            thunk_FUN_02bb0e9c(unaff_x19 + 0x150);
                                            if (0x27 < *(uint *)(unaff_x19 + 0x18)) {
                                              *(undefined8 *)(unaff_x19 + 0x158) =
                                                   *(undefined8 *)
                                                                                                        
                                                  Method_UnityEngine_Rendering_DebugUI_Field<Enum>_set_setter__
                                              ;
                                              thunk_FUN_02bb0e9c(unaff_x19 + 0x158);
                                              puVar1 = 
                                              Method_System_Collections_Generic_Dictionary_Enumerator<XmlQualifiedName,_SchemaElementDecl>_MoveNext__
                                              ;
                                              if (0x28 < *(uint *)(unaff_x19 + 0x18)) {
                                                *(undefined8 *)(unaff_x19 + 0x160) =
                                                     *(undefined8 *)
                                                                                                            
                                                  Method_UnityEngine_UIElements_EventBase<MouseLeaveEvent>_SetCreateFunction__
                                                ;
                                                thunk_FUN_02bb0e9c(unaff_x19 + 0x160);
                                                **(long **)(*(long *)puVar1 + 0xb8) = unaff_x19;
                                                thunk_FUN_02bb0e9c(*(undefined8 *)
                                                                    (*(long *)puVar1 + 0xb8));
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
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


