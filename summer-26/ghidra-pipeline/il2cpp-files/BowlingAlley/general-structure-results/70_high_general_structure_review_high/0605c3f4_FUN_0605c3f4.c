/*
FUNCTION_NAME: FUN_0605c3f4
ENTRY_POINT: 0605c3f4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0605c3f4(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_072794b0;
  if ((DAT_076dd35d & 1) == 0) {
    thunk_FUN_032e1da0(
                      System_Collections_Generic_Dictionary<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>_TypeInfo
                      );
    thunk_FUN_032e1da0(PTR_DAT_072794b0);
    thunk_FUN_032e1da0(
                      UnityEngine_UIElements_EventCallback<ContextChangedEvent<DirContext>>_TypeInfo
                      );
    thunk_FUN_032e1da0(
                      UnityEngine_UIElements_EventCallback<ContextChangedEvent<LangContext>>_TypeInfo
                      );
    thunk_FUN_032e1da0(
                      UnityEngine_UIElements_EventCallback<ContextChangedEvent<ScaleContext>>_TypeInfo
                      );
    thunk_FUN_032e1da0(
                      UnityEngine_UIElements_EventCallback<ContextChangedEvent<SizeContext>>_TypeInfo
                      );
    thunk_FUN_032e1da0(
                      UnityEngine_UIElements_EventCallback<ContextChangedEvent<ThemeContext>>_TypeInfo
                      );
    thunk_FUN_032e1da0(UnityEngine_UIElements_EventCallback<ChangeEvent<IEnumerable<int>>>_TypeInfo)
    ;
    thunk_FUN_032e1da0(UnityEngine_UIElements_EventCallback<AccordionItemValueChangedEvent>_TypeInfo
                      );
    thunk_FUN_032e1da0(PTR_DAT_0727dab0);
    thunk_FUN_032e1da0(UnityEngine_UIElements_EventCallback<ChangeEvent<bool>>_TypeInfo);
    thunk_FUN_032e1da0(Oculus_Interaction_RandomSampleConsensus_EvaluateModelScore<Vector3>_TypeInfo
                      );
    thunk_FUN_032e1da0(UnityEngine_UIElements_EventCallback<ChangeEvent<CheckboxState>>_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_07283300);
    thunk_FUN_032e1da0(UnityEngine_UIElements_EventCallback<ActionTriggeredEvent>_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_UIElements_EventCallback<AttachToPanelEvent>_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_UIElements_EventCallback<BlurEvent>_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_UIElements_EventCallback<ClickEvent>_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_UIElements_EventCallback<ChangeEvent<int>>_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_072a4170);
    thunk_FUN_032e1da0(UnityEngine_UIElements_EventCallback<ContextualMenuPopulateEvent>_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_UIElements_EventCallback<ChangeEvent<float>>_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_UIElements_EventCallback<CustomStyleResolvedEvent>_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_UIElements_EventCallback<DetachFromPanelEvent>_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_UIElements_EventCallback<FocusEvent>_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_UIElements_EventCallback<ChangeEvent<string>>_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_UIElements_EventCallback<ChangeEvent<Vector3>>_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_072a65c8);
    thunk_FUN_032e1da0(UnityEngine_UIElements_EventCallback<FocusInEvent>_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_UIElements_EventCallback<ChangeEvent<Vector3Int>>_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_UIElements_EventCallback<FocusOutEvent>_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_UIElements_EventCallback<ChangingEvent<int>>_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_UIElements_EventCallback<ChangingEvent<float>>_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_UIElements_EventCallback<ChangingEvent<Vector2>>_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_UIElements_EventCallback<GeometryChangedEvent>_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_07293a78);
    thunk_FUN_032e1da0(UnityEngine_UIElements_EventCallback<KeyDownEvent>_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_UIElements_EventBase<TransitionEndEvent>_TypeInfo);
    thunk_FUN_032e1da0(
                      UnityEngine_UIElements_EventCallback<ContextChangedEvent<AvatarVariantContext>>_TypeInfo
                      );
    thunk_FUN_032e1da0(UnityEngine_UIElements_EventCallback<KeyUpEvent>_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_UIElements_EventCallback<MagnificationGestureEvent>_TypeInfo);
    DAT_076dd35d = 1;
  }
  lVar2 = FUN_032d5d3c(*(undefined8 *)puVar1,0x27);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)PTR_DAT_072a4170;
      thunk_FUN_0333a630((undefined8 *)(lVar2 + 0x20));
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) =
             *(undefined8 *)UnityEngine_UIElements_EventCallback<ClickEvent>_TypeInfo;
        thunk_FUN_0333a630((undefined8 *)(lVar2 + 0x28));
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)PTR_DAT_07293a78;
          thunk_FUN_0333a630((undefined8 *)(lVar2 + 0x30));
          if (3 < *(uint *)(lVar2 + 0x18)) {
            *(undefined8 *)(lVar2 + 0x38) =
                 *(undefined8 *)UnityEngine_UIElements_EventCallback<BlurEvent>_TypeInfo;
            thunk_FUN_0333a630((undefined8 *)(lVar2 + 0x38));
            if (4 < *(uint *)(lVar2 + 0x18)) {
              *(undefined8 *)(lVar2 + 0x40) =
                   *(undefined8 *)
                    UnityEngine_UIElements_EventCallback<ActionTriggeredEvent>_TypeInfo;
              thunk_FUN_0333a630((undefined8 *)(lVar2 + 0x40));
              if (5 < *(uint *)(lVar2 + 0x18)) {
                *(undefined8 *)(lVar2 + 0x48) =
                     *(undefined8 *)UnityEngine_UIElements_EventCallback<ChangeEvent<bool>>_TypeInfo
                ;
                thunk_FUN_0333a630((undefined8 *)(lVar2 + 0x48));
                if (6 < *(uint *)(lVar2 + 0x18)) {
                  *(undefined8 *)(lVar2 + 0x50) =
                       *(undefined8 *)
                        UnityEngine_UIElements_EventCallback<AccordionItemValueChangedEvent>_TypeInfo
                  ;
                  thunk_FUN_0333a630((undefined8 *)(lVar2 + 0x50));
                  if (7 < *(uint *)(lVar2 + 0x18)) {
                    *(undefined8 *)(lVar2 + 0x58) =
                         *(undefined8 *)UnityEngine_UIElements_EventCallback<FocusEvent>_TypeInfo;
                    thunk_FUN_0333a630((undefined8 *)(lVar2 + 0x58));
                    if (8 < *(uint *)(lVar2 + 0x18)) {
                      *(undefined8 *)(lVar2 + 0x60) =
                           *(undefined8 *)
                            UnityEngine_UIElements_EventCallback<ContextChangedEvent<ScaleContext>>_TypeInfo
                      ;
                      thunk_FUN_0333a630((undefined8 *)(lVar2 + 0x60));
                      if (9 < *(uint *)(lVar2 + 0x18)) {
                        *(undefined8 *)(lVar2 + 0x68) =
                             *(undefined8 *)
                              UnityEngine_UIElements_EventCallback<ContextChangedEvent<LangContext>>_TypeInfo
                        ;
                        thunk_FUN_0333a630((undefined8 *)(lVar2 + 0x68));
                        if (10 < *(uint *)(lVar2 + 0x18)) {
                          *(undefined8 *)(lVar2 + 0x70) = *(undefined8 *)PTR_DAT_072a65c8;
                          thunk_FUN_0333a630((undefined8 *)(lVar2 + 0x70));
                          if (0xb < *(uint *)(lVar2 + 0x18)) {
                            *(undefined8 *)(lVar2 + 0x78) = *(undefined8 *)PTR_DAT_0727dab0;
                            thunk_FUN_0333a630((undefined8 *)(lVar2 + 0x78));
                            if (0xc < *(uint *)(lVar2 + 0x18)) {
                              *(undefined8 *)(lVar2 + 0x80) =
                                   *(undefined8 *)
                                    UnityEngine_UIElements_EventCallback<FocusOutEvent>_TypeInfo;
                              thunk_FUN_0333a630((undefined8 *)(lVar2 + 0x80));
                              if (0xd < *(uint *)(lVar2 + 0x18)) {
                                *(undefined8 *)(lVar2 + 0x88) =
                                     *(undefined8 *)
                                      UnityEngine_UIElements_EventCallback<GeometryChangedEvent>_TypeInfo
                                ;
                                thunk_FUN_0333a630((undefined8 *)(lVar2 + 0x88));
                                if (0xe < *(uint *)(lVar2 + 0x18)) {
                                  *(undefined8 *)(lVar2 + 0x90) =
                                       *(undefined8 *)
                                        UnityEngine_UIElements_EventCallback<CustomStyleResolvedEvent>_TypeInfo
                                  ;
                                  thunk_FUN_0333a630((undefined8 *)(lVar2 + 0x90));
                                  if (0xf < *(uint *)(lVar2 + 0x18)) {
                                    *(undefined8 *)(lVar2 + 0x98) =
                                         *(undefined8 *)
                                          UnityEngine_UIElements_EventCallback<ContextualMenuPopulateEvent>_TypeInfo
                                    ;
                                    thunk_FUN_0333a630((undefined8 *)(lVar2 + 0x98));
                                    if (0x10 < *(uint *)(lVar2 + 0x18)) {
                                      *(undefined8 *)(lVar2 + 0xa0) =
                                           *(undefined8 *)
                                            UnityEngine_UIElements_EventCallback<FocusInEvent>_TypeInfo
                                      ;
                                      thunk_FUN_0333a630((undefined8 *)(lVar2 + 0xa0));
                                      if (0x11 < *(uint *)(lVar2 + 0x18)) {
                                        *(undefined8 *)(lVar2 + 0xa8) =
                                             *(undefined8 *)
                                              UnityEngine_UIElements_EventBase<TransitionEndEvent>_TypeInfo
                                        ;
                                        thunk_FUN_0333a630((undefined8 *)(lVar2 + 0xa8));
                                        if (0x12 < *(uint *)(lVar2 + 0x18)) {
                                          *(undefined8 *)(lVar2 + 0xb0) =
                                               *(undefined8 *)
                                                UnityEngine_UIElements_EventCallback<MagnificationGestureEvent>_TypeInfo
                                          ;
                                          thunk_FUN_0333a630((undefined8 *)(lVar2 + 0xb0));
                                          if (0x13 < *(uint *)(lVar2 + 0x18)) {
                                            *(undefined8 *)(lVar2 + 0xb8) =
                                                 *(undefined8 *)
                                                  UnityEngine_UIElements_EventCallback<ChangeEvent<string>>_TypeInfo
                                            ;
                                            thunk_FUN_0333a630((undefined8 *)(lVar2 + 0xb8));
                                            if (0x14 < *(uint *)(lVar2 + 0x18)) {
                                              *(undefined8 *)(lVar2 + 0xc0) =
                                                   *(undefined8 *)
                                                                                                        
                                                  UnityEngine_UIElements_EventCallback<AttachToPanelEvent>_TypeInfo
                                              ;
                                              thunk_FUN_0333a630((undefined8 *)(lVar2 + 0xc0));
                                              if (0x15 < *(uint *)(lVar2 + 0x18)) {
                                                *(undefined8 *)(lVar2 + 200) =
                                                     *(undefined8 *)
                                                                                                            
                                                  UnityEngine_UIElements_EventCallback<ContextChangedEvent<AvatarVariantContext>>_TypeInfo
                                                ;
                                                thunk_FUN_0333a630((undefined8 *)(lVar2 + 200));
                                                if (0x16 < *(uint *)(lVar2 + 0x18)) {
                                                  *(undefined8 *)(lVar2 + 0xd0) =
                                                       *(undefined8 *)
                                                                                                                
                                                  UnityEngine_UIElements_EventCallback<KeyUpEvent>_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar2 + 0xd0));
                                                  if (0x17 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0xd8) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_EventCallback<ContextChangedEvent<ThemeContext>>_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar2 + 0xd8));
                                                  if (0x18 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0xe0) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_EventCallback<KeyDownEvent>_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar2 + 0xe0));
                                                  if (0x19 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0xe8) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_EventCallback<ContextChangedEvent<DirContext>>_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar2 + 0xe8));
                                                  if (0x1a < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0xf0) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_EventCallback<ContextChangedEvent<SizeContext>>_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar2 + 0xf0));
                                                  if (0x1b < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0xf8) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_EventCallback<ChangingEvent<int>>_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar2 + 0xf8));
                                                  if (0x1c < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x100) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_EventCallback<DetachFromPanelEvent>_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630(lVar2 + 0x100);
                                                  if (0x1d < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x108) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Oculus_Interaction_RandomSampleConsensus_EvaluateModelScore<Vector3>_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630(lVar2 + 0x108);
                                                  if (0x1e < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x110) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_EventCallback<ChangeEvent<Vector3>>_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630(lVar2 + 0x110);
                                                  if (0x1f < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x118) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_EventCallback<ChangeEvent<float>>_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630(lVar2 + 0x118);
                                                  if (0x20 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x120) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_EventCallback<ChangeEvent<CheckboxState>>_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630(lVar2 + 0x120);
                                                  if (0x21 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x128) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_EventCallback<ChangeEvent<Vector3Int>>_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630(lVar2 + 0x128);
                                                  if (0x22 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x130) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_EventCallback<ChangeEvent<int>>_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630(lVar2 + 0x130);
                                                  if (0x23 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x138) =
                                                         *(undefined8 *)PTR_DAT_07283300;
                                                    thunk_FUN_0333a630(lVar2 + 0x138);
                                                    if (0x24 < *(uint *)(lVar2 + 0x18)) {
                                                      *(undefined8 *)(lVar2 + 0x140) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  UnityEngine_UIElements_EventCallback<ChangingEvent<float>>_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630(lVar2 + 0x140);
                                                  if (0x25 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x148) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_EventCallback<ChangingEvent<Vector2>>_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630(lVar2 + 0x148);
                                                  puVar1 = 
                                                  System_Collections_Generic_Dictionary<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>_TypeInfo
                                                  ;
                                                  if (0x26 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x150) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_EventCallback<ChangeEvent<IEnumerable<int>>>_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630(lVar2 + 0x150);
                                                  **(long **)(*(long *)puVar1 + 0xb8) = lVar2;
                                                  thunk_FUN_0333a630(*(undefined8 *)
                                                                      (*(long *)puVar1 + 0xb8),lVar2
                                                                    );
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
                    /* WARNING: Subroutine does not return */
    Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


