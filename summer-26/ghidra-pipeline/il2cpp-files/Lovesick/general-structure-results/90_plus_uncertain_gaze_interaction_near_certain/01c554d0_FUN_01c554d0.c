/*
FUNCTION_NAME: FUN_01c554d0
ENTRY_POINT: 01c554d0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 202
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_6;ray_or_cast_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_2
*/


undefined8 FUN_01c554d0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long *plVar11;
  long *plVar12;
  code *pcVar13;
  undefined8 uVar14;
  
  puVar1 = Method_UnityEngine_InputSystem_UI_VirtualMouseInput_OnAfterInputUpdate__;
  if ((DAT_0377eb42 & 1) == 0) {
    thunk_FUN_00d48444(Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__);
    thunk_FUN_00d48444(StringLiteral_5172);
    thunk_FUN_00d48444(
                      Method_UnityEngine_Playables_PlayableExtensions_IsValid<ScriptPlayable<ActivationControlPlayable>>__
                      );
    thunk_FUN_00d48444(PTR_DAT_033f0b08);
    thunk_FUN_00d48444(StringLiteral_10445);
    thunk_FUN_00d48444(Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__);
    thunk_FUN_00d48444(Method_System_Data_DataSet_ReadXmlDiffgram__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<TimeZoneInfo_AdjustmentRule>_Add__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_GetOrCreate<StylePropertyAnimationSystem_ValuesTranslate>__
                      );
    thunk_FUN_00d48444(Method_SoccerBlocker_HideCrowd__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
                      );
    thunk_FUN_00d48444(PTR_DAT_033eea08);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Collider>_Clear__);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(
                      Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
                      );
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_EventBase<ValidateCommandEvent>_TypeId__);
    thunk_FUN_00d48444(Method_System_ComponentModel_GuidConverter_ConvertTo__);
    thunk_FUN_00d48444(Method_UnityEngine_InputSystem_UI_VirtualMouseInput_OnAfterInputUpdate__);
    thunk_FUN_00d48444(Method_Oculus_Interaction_Input_DataSource<BodyDataAsset>_OnEnable__);
    thunk_FUN_00d48444(StringLiteral_11827);
    thunk_FUN_00d48444(PTR_DAT_033ed238);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_69__);
    DAT_0377eb42 = 1;
  }
  lVar8 = *(long *)puVar1;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar8 = *(long *)puVar1;
  }
  lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x40);
  if (lVar8 != 0) {
    uVar9 = FUN_012ddcec(lVar8,param_1,*(undefined8 *)StringLiteral_10445);
    if ((uVar9 & 1) != 0) {
      return 0;
    }
    lVar8 = *(long *)puVar1;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar8 = *(long *)puVar1;
    }
    if (param_1 != (long *)0x0) {
      lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x48);
      uVar10 = (**(code **)(*param_1 + 0x308))(param_1,*(undefined8 *)(*param_1 + 0x310));
      if (lVar8 != 0) {
        uVar9 = FUN_012ddcec(lVar8,uVar10,*(undefined8 *)PTR_DAT_033f0b08);
        puVar5 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
        if ((uVar9 & 1) != 0) {
          return 0;
        }
        uVar10 = *(undefined8 *)
                  Method_UnityEngine_UIElements_StylePropertyAnimationSystem_GetOrCreate<StylePropertyAnimationSystem_ValuesTranslate>__
        ;
        if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        plVar11 = (long *)FUN_01780344(uVar10,0);
        plVar12 = (long *)Method_Oculus_Interaction_Input_DataSource<BodyDataAsset>_OnEnable__;
        if (plVar11 != (long *)0x0) {
          uVar9 = (**(code **)(*plVar11 + 0x2c8))(plVar11,param_1,*(undefined8 *)(*plVar11 + 0x2d0))
          ;
          if ((uVar9 & 1) != 0) {
            uVar9 = (**(code **)(*param_1 + 1000))(param_1,*(undefined8 *)(*param_1 + 0x3f0));
            if ((uVar9 & 1) == 0) {
              return 1;
            }
            if (*(int *)(*plVar12 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar10 = FUN_01c6f074(0x7e4,1,0);
            return uVar10;
          }
          uVar9 = FUN_0178bdc4(param_1,0);
          if (((uVar9 & 1) == 0) &&
             (uVar9 = FUN_0178b0b0(param_1,0), puVar6 = Method_SoccerBlocker_HideCrowd__,
             (uVar9 & 1) == 0)) {
            uVar10 = *(undefined8 *)Method_SoccerBlocker_HideCrowd__;
            if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar10 = FUN_01780344(uVar10,0);
            uVar9 = FUN_01789ac0(param_1,uVar10,0);
            if ((uVar9 & 1) == 0) {
              uVar9 = (**(code **)(*param_1 + 0x5c8))(param_1,*(undefined8 *)(*param_1 + 0x5d0));
              if ((uVar9 & 1) == 0) {
                uVar9 = FUN_0178c0dc(param_1,0);
                if ((uVar9 & 1) == 0) {
                  uVar10 = *(undefined8 *)
                            Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
                  ;
                  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  uVar10 = FUN_01780344(uVar10,0);
                  uVar9 = FUN_01789ac0(param_1,uVar10,0);
                  if ((uVar9 & 1) == 0) {
                    uVar10 = *(undefined8 *)StringLiteral_5172;
                    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    plVar11 = (long *)FUN_01780344(uVar10,0);
                    if (plVar11 != (long *)0x0) {
                      uVar9 = (**(code **)(*plVar11 + 0x2c8))
                                        (plVar11,param_1,*(undefined8 *)(*plVar11 + 0x2d0));
                      if ((uVar9 & 1) != 0) {
                        return 0;
                      }
                      uVar10 = *(undefined8 *)
                                Method_UnityEngine_UIElements_EventBase<ValidateCommandEvent>_TypeId__
                      ;
                      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                      }
                      plVar11 = (long *)FUN_01780344(uVar10,0);
                      puVar3 = Method_System_Collections_Generic_List<Collider>_Clear__;
                      puVar2 = PTR_DAT_033eea08;
                      if (plVar11 != (long *)0x0) {
                        uVar9 = (**(code **)(*plVar11 + 0x2c8))
                                          (plVar11,param_1,*(undefined8 *)(*plVar11 + 0x2d0));
                        puVar4 = 
                        Method_System_Collections_Generic_List<TimeZoneInfo_AdjustmentRule>_Add__;
                        if ((uVar9 & 1) != 0) {
                          uVar9 = (**(code **)(*param_1 + 1000))
                                            (param_1,*(undefined8 *)(*param_1 + 0x3f0));
                          if ((uVar9 & 1) != 0) {
                            if (*(int *)(*plVar12 + 0xe0) == 0) {
                              thunk_FUN_00d32864();
                            }
                            uVar9 = FUN_01c6f074(0x7e4,1,0);
                            if ((uVar9 & 1) == 0) {
                              return 0;
                            }
                          }
                          uVar10 = *(undefined8 *)
                                    Method_System_ComponentModel_GuidConverter_ConvertTo__;
                          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                            thunk_FUN_00d32864();
                          }
                          uVar10 = FUN_01780344(uVar10,0);
                          uVar9 = FUN_01789ac0(param_1,uVar10,0);
                          if ((uVar9 & 1) != 0) {
                            return 1;
                          }
                          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                            thunk_FUN_00d32864();
                          }
                          uVar10 = FUN_01150e28(param_1,0,*(undefined8 *)puVar2);
                          return uVar10;
                        }
                        uVar9 = FUN_0178b958(param_1,0);
                        lVar8 = *param_1;
                        if ((uVar9 & 1) == 0) {
                          uVar9 = (**(code **)(lVar8 + 1000))
                                            (param_1,*(undefined8 *)(lVar8 + 0x3f0));
                          if (((uVar9 & 1) != 0) &&
                             (uVar9 = (**(code **)(*param_1 + 0x3f8))
                                                (param_1,*(undefined8 *)(*param_1 + 0x400)),
                             (uVar9 & 1) == 0)) {
                            uVar10 = (**(code **)(*param_1 + 0x468))
                                               (param_1,*(undefined8 *)(*param_1 + 0x470));
                            uVar14 = *(undefined8 *)puVar4;
                            if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                              thunk_FUN_00d32864(*(long *)puVar5);
                            }
                            uVar14 = FUN_01780344(uVar14,0);
                            uVar9 = FUN_01789ac0(uVar10,uVar14,0);
                            plVar12 = (long *)
                                      Method_Oculus_Interaction_Input_DataSource<BodyDataAsset>_OnEnable__
                            ;
                            if ((uVar9 & 1) != 0) {
                              uVar10 = *(undefined8 *)puVar4;
                              if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                                thunk_FUN_00d32864();
                              }
                              uVar10 = FUN_01780344(uVar10,0);
                              if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                                thunk_FUN_00d32864(*(long *)puVar3);
                              }
                              lVar8 = FUN_01c56118(param_1,uVar10);
                              if (lVar8 != 0) {
                                if (*(int *)(lVar8 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_00da5194();
                                }
                                lVar8 = *(long *)(lVar8 + 0x20);
                                if (lVar8 != 0) {
                                  uVar9 = FUN_0178b958(lVar8,0);
                                  if ((uVar9 & 1) != 0) {
                                    return 0;
                                  }
                                  uVar10 = *(undefined8 *)puVar4;
                                  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                                    thunk_FUN_00d32864();
                                  }
                                  uVar10 = FUN_01780344(uVar10,0);
                                  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                                    thunk_FUN_00d32864(*(long *)puVar3);
                                  }
                                  uVar9 = FUN_01c55fec(lVar8,uVar10);
                                  if ((uVar9 & 1) != 0) {
                                    return 0;
                                  }
                                  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                                    thunk_FUN_00d32864();
                                  }
                                  goto LAB_01c55b7c;
                                }
                              }
                              goto LAB_01c55fe4;
                            }
                          }
                          plVar11 = (long *)(**(code **)(*param_1 + 0x318))
                                                      (param_1,*(undefined8 *)(*param_1 + 800));
                          if ((plVar11 != (long *)0x0) &&
                             (lVar8 = (**(code **)(*plVar11 + 0x1c8))
                                                (plVar11,*(undefined8 *)(*plVar11 + 0x1d0)),
                             lVar8 != 0)) {
                            uVar9 = FUN_015fe8b0(lVar8,*(undefined8 *)
                                                        Method_OVRPlugin_<>c_<_cctor>b__796_69__,2,0
                                                );
                            if ((uVar9 & 1) != 0) {
                              return 1;
                            }
                            plVar11 = (long *)(**(code **)(*param_1 + 0x318))
                                                        (param_1,*(undefined8 *)(*param_1 + 800));
                            if ((plVar11 != (long *)0x0) &&
                               (lVar8 = (**(code **)(*plVar11 + 0x1c8))
                                                  (plVar11,*(undefined8 *)(*plVar11 + 0x1d0)),
                               lVar8 != 0)) {
                              uVar9 = FUN_015fe8b0(lVar8,*(undefined8 *)StringLiteral_11827,2,0);
                              if ((uVar9 & 1) != 0) {
                                return 1;
                              }
                              uVar9 = (**(code **)(*param_1 + 1000))
                                                (param_1,*(undefined8 *)(*param_1 + 0x3f0));
                              if ((uVar9 & 1) != 0) {
                                if (*(int *)(*plVar12 + 0xe0) == 0) {
                                  thunk_FUN_00d32864();
                                }
                                uVar9 = FUN_01c6f074(0x7e4,1,0);
                                if ((uVar9 & 1) == 0) {
                                  return 0;
                                }
                              }
                              uVar10 = (**(code **)(*param_1 + 0x318))
                                                 (param_1,*(undefined8 *)(*param_1 + 800));
                              lVar8 = *(long *)puVar1;
                              if (*(int *)(lVar8 + 0xe0) == 0) {
                                thunk_FUN_00d32864(lVar8);
                                lVar8 = *(long *)puVar1;
                              }
                              uVar9 = FUN_016b4204(uVar10,*(undefined8 *)
                                                           (*(long *)(lVar8 + 0xb8) + 8),0);
                              if ((uVar9 & 1) != 0) {
                                return 0;
                              }
                              uVar10 = (**(code **)(*param_1 + 0x318))
                                                 (param_1,*(undefined8 *)(*param_1 + 800));
                              lVar8 = *(long *)puVar1;
                              if (*(int *)(lVar8 + 0xe0) == 0) {
                                thunk_FUN_00d32864(lVar8);
                                lVar8 = *(long *)puVar1;
                              }
                              uVar9 = FUN_016b4204(uVar10,*(undefined8 *)
                                                           (*(long *)(lVar8 + 0xb8) + 0x10),0);
                              if ((uVar9 & 1) != 0) {
                                return 0;
                              }
                              uVar10 = (**(code **)(*param_1 + 0x318))
                                                 (param_1,*(undefined8 *)(*param_1 + 800));
                              lVar8 = *(long *)puVar1;
                              if (*(int *)(lVar8 + 0xe0) == 0) {
                                thunk_FUN_00d32864(lVar8);
                                lVar8 = *(long *)puVar1;
                              }
                              uVar9 = FUN_016b4204(uVar10,*(undefined8 *)
                                                           (*(long *)(lVar8 + 0xb8) + 0x18),0);
                              if ((uVar9 & 1) != 0) {
                                return 0;
                              }
                              if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                                thunk_FUN_00d32864();
                              }
                              uVar9 = FUN_01150e28(param_1,0,*(undefined8 *)PTR_DAT_033eea08);
                              if (*(int *)(*plVar12 + 0xe0) == 0) {
                                thunk_FUN_00d32864(*plVar12);
                              }
                              if ((uVar9 & 1) != 0) {
                                uVar9 = FUN_01c6f074(4,5,0);
                                if ((uVar9 & 1) != 0) {
                                  return 1;
                                }
                                uVar10 = FUN_0178be04(param_1,0);
                                return uVar10;
                              }
                              uVar9 = FUN_01c6f074(0x7e2,2,0);
                              puVar1 = PTR_DAT_033ed238;
                              if ((uVar9 & 1) != 0) {
                                return 0;
                              }
                              pcVar13 = *(code **)(*param_1 + 0x888);
                              uVar10 = *(undefined8 *)(*param_1 + 0x890);
                              do {
                                param_1 = (long *)(*pcVar13)(param_1,uVar10);
                                if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                                  thunk_FUN_00d32864();
                                }
                                uVar9 = FUN_0178a8c4(param_1,0,0);
                                if ((uVar9 & 1) == 0) {
                                  return 0;
                                }
                                uVar10 = *(undefined8 *)puVar6;
                                if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                                  thunk_FUN_00d32864();
                                }
                                uVar10 = FUN_01780344(uVar10,0);
                                uVar9 = FUN_0178a8c4(param_1,uVar10,0);
                                if ((uVar9 & 1) == 0) {
                                  return 0;
                                }
                                if (param_1 == (long *)0x0) break;
                                uVar9 = (**(code **)(*param_1 + 1000))
                                                  (param_1,*(undefined8 *)(*param_1 + 0x3f0));
                                if ((uVar9 & 1) != 0) {
                                  plVar12 = (long *)(**(code **)(*param_1 + 0x468))
                                                              (param_1,*(undefined8 *)
                                                                        (*param_1 + 0x470));
                                  if (plVar12 == (long *)0x0) break;
                                  uVar10 = (**(code **)(*plVar12 + 0x308))
                                                     (plVar12,*(undefined8 *)(*plVar12 + 0x310));
                                  uVar9 = thunk_FUN_015fe514(uVar10,*(undefined8 *)puVar1,0);
                                  if ((uVar9 & 1) != 0) {
                                    return 1;
                                  }
                                }
                                pcVar13 = *(code **)(*param_1 + 0x888);
                                uVar10 = *(undefined8 *)(*param_1 + 0x890);
                              } while( true );
                            }
                          }
                        }
                        else {
                          lVar8 = (**(code **)(lVar8 + 0x448))
                                            (param_1,*(undefined8 *)(lVar8 + 0x450));
                          iVar7 = (**(code **)(*param_1 + 0x458))
                                            (param_1,*(undefined8 *)(*param_1 + 0x460));
                          if (iVar7 != 1) {
                            return 0;
                          }
                          if (lVar8 != 0) {
                            uVar9 = FUN_0178b958(lVar8,0);
                            if ((uVar9 & 1) != 0) {
                              return 0;
                            }
                            uVar10 = *(undefined8 *)puVar4;
                            if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                              thunk_FUN_00d32864();
                            }
                            uVar10 = FUN_01780344(uVar10,0);
                            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                              thunk_FUN_00d32864(*(long *)puVar3);
                            }
                            uVar9 = FUN_01c55fec(lVar8,uVar10);
                            if ((uVar9 & 1) != 0) {
                              return 0;
                            }
                            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                              thunk_FUN_00d32864();
                            }
LAB_01c55b7c:
                            uVar10 = FUN_01c55270(lVar8);
                            return uVar10;
                          }
                        }
                      }
                    }
                    goto LAB_01c55fe4;
                  }
                }
              }
              else {
                if (*(int *)(*(long *)
                              Method_UnityEngine_Playables_PlayableExtensions_IsValid<ScriptPlayable<ActivationControlPlayable>>__
                            + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                uVar10 = FUN_017a5e58(param_1,0);
                if (*(int *)(*plVar12 + 0xe0) == 0) {
                  thunk_FUN_00d32864(*plVar12);
                }
                uVar9 = FUN_01c6f074(5,6,0);
                if ((uVar9 & 1) != 0) {
                  uVar14 = *(undefined8 *)Method_System_Data_DataSet_ReadXmlDiffgram__;
                  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  uVar14 = FUN_01780344(uVar14,0);
                  uVar9 = FUN_0178a8c4(uVar10,uVar14,0);
                  if ((uVar9 & 1) == 0) {
                    return 0;
                  }
                  uVar14 = *(undefined8 *)
                            Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
                  ;
                  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  uVar14 = FUN_01780344(uVar14,0);
                  uVar10 = FUN_0178a8c4(uVar10,uVar14,0);
                  return uVar10;
                }
                uVar14 = *(undefined8 *)
                          Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__;
                if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                uVar14 = FUN_01780344(uVar14,0);
                uVar9 = FUN_01789ac0(uVar10,uVar14,0);
                if ((uVar9 & 1) == 0) {
                  uVar14 = *(undefined8 *)
                            Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__;
                  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  uVar14 = FUN_01780344(uVar14,0);
                  uVar10 = FUN_01789ac0(uVar10,uVar14,0);
                  return uVar10;
                }
              }
              return 1;
            }
          }
          return 0;
        }
      }
    }
  }
LAB_01c55fe4:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


