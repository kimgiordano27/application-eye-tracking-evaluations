/*
FUNCTION_NAME: System.Data.DataRow$$CheckColumn
ENTRY_POINT: 01c556d8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 136
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_3;ray_or_cast_sink_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_1
*/


undefined8 System_Data_DataRow__CheckColumn(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  code *pcVar10;
  long *unaff_x19;
  undefined8 uVar11;
  long *unaff_x22;
  long *unaff_x23;
  
  plVar5 = (long *)FUN_01780344();
  plVar9 = (long *)Method_Oculus_Interaction_Input_DataSource<BodyDataAsset>_OnEnable__;
  if (plVar5 == (long *)0x0) goto LAB_01c55fe4;
  uVar6 = (**(code **)(*plVar5 + 0x2c8))();
  if ((uVar6 & 1) != 0) {
    uVar6 = (**(code **)(*unaff_x19 + 1000))();
    if ((uVar6 & 1) == 0) {
      return 1;
    }
    if (*(int *)(*plVar9 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar7 = FUN_01c6f074(0x7e4,1,0);
    return uVar7;
  }
  uVar6 = FUN_0178bdc4();
  if (((uVar6 & 1) == 0) &&
     (uVar6 = FUN_0178b0b0(), puVar3 = Method_SoccerBlocker_HideCrowd__, (uVar6 & 1) == 0)) {
    uVar7 = *(undefined8 *)Method_SoccerBlocker_HideCrowd__;
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_01780344(uVar7,0);
    uVar6 = FUN_01789ac0();
    if ((uVar6 & 1) == 0) {
      uVar6 = (**(code **)(*unaff_x19 + 0x5c8))();
      if ((uVar6 & 1) == 0) {
        uVar6 = FUN_0178c0dc();
        if ((uVar6 & 1) == 0) {
          uVar7 = *(undefined8 *)
                   Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
          ;
          if (*(int *)(*unaff_x22 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_01780344(uVar7,0);
          uVar6 = FUN_01789ac0();
          if ((uVar6 & 1) == 0) {
            uVar7 = *(undefined8 *)StringLiteral_5172;
            if (*(int *)(*unaff_x22 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            plVar5 = (long *)FUN_01780344(uVar7,0);
            if (plVar5 != (long *)0x0) {
              uVar6 = (**(code **)(*plVar5 + 0x2c8))();
              if ((uVar6 & 1) != 0) {
                return 0;
              }
              uVar7 = *(undefined8 *)
                       Method_UnityEngine_UIElements_EventBase<ValidateCommandEvent>_TypeId__;
              if (*(int *)(*unaff_x22 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              plVar5 = (long *)FUN_01780344(uVar7,0);
              puVar1 = Method_System_Collections_Generic_List<Collider>_Clear__;
              if (plVar5 != (long *)0x0) {
                uVar6 = (**(code **)(*plVar5 + 0x2c8))();
                puVar2 = Method_System_Collections_Generic_List<TimeZoneInfo_AdjustmentRule>_Add__;
                if ((uVar6 & 1) != 0) {
                  uVar6 = (**(code **)(*unaff_x19 + 1000))();
                  if ((uVar6 & 1) != 0) {
                    if (*(int *)(*plVar9 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    uVar6 = FUN_01c6f074(0x7e4,1,0);
                    if ((uVar6 & 1) == 0) {
                      return 0;
                    }
                  }
                  uVar7 = *(undefined8 *)Method_System_ComponentModel_GuidConverter_ConvertTo__;
                  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  FUN_01780344(uVar7,0);
                  uVar6 = FUN_01789ac0();
                  if ((uVar6 & 1) != 0) {
                    return 1;
                  }
                  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  uVar7 = FUN_01150e28();
                  return uVar7;
                }
                uVar6 = FUN_0178b958();
                if ((uVar6 & 1) == 0) {
                  uVar6 = (**(code **)(*unaff_x19 + 1000))();
                  if (((uVar6 & 1) != 0) &&
                     (uVar6 = (**(code **)(*unaff_x19 + 0x3f8))(), (uVar6 & 1) == 0)) {
                    uVar7 = (**(code **)(*unaff_x19 + 0x468))();
                    uVar11 = *(undefined8 *)puVar2;
                    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
                      thunk_FUN_00d32864(*unaff_x22);
                    }
                    uVar11 = FUN_01780344(uVar11,0);
                    uVar6 = FUN_01789ac0(uVar7,uVar11,0);
                    plVar9 = (long *)
                             Method_Oculus_Interaction_Input_DataSource<BodyDataAsset>_OnEnable__;
                    if ((uVar6 & 1) != 0) {
                      uVar7 = *(undefined8 *)puVar2;
                      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                      }
                      FUN_01780344(uVar7,0);
                      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                        thunk_FUN_00d32864(*(long *)puVar1);
                      }
                      lVar8 = FUN_01c56118();
                      if (lVar8 != 0) {
                        if (*(int *)(lVar8 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da5194();
                        }
                        lVar8 = *(long *)(lVar8 + 0x20);
                        if (lVar8 != 0) {
                          uVar6 = FUN_0178b958(lVar8,0);
                          if ((uVar6 & 1) != 0) {
                            return 0;
                          }
                          uVar7 = *(undefined8 *)puVar2;
                          if (*(int *)(*unaff_x22 + 0xe0) == 0) {
                            thunk_FUN_00d32864();
                          }
                          uVar7 = FUN_01780344(uVar7,0);
                          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                            thunk_FUN_00d32864(*(long *)puVar1);
                          }
                          uVar6 = FUN_01c55fec(lVar8,uVar7);
                          if ((uVar6 & 1) != 0) {
                            return 0;
                          }
                          if (*(int *)(*unaff_x23 + 0xe0) == 0) {
                            thunk_FUN_00d32864();
                          }
                          goto LAB_01c55b7c;
                        }
                      }
                      goto LAB_01c55fe4;
                    }
                  }
                  plVar5 = (long *)(**(code **)(*unaff_x19 + 0x318))();
                  if ((plVar5 != (long *)0x0) &&
                     (lVar8 = (**(code **)(*plVar5 + 0x1c8))
                                        (plVar5,*(undefined8 *)(*plVar5 + 0x1d0)), lVar8 != 0)) {
                    uVar6 = FUN_015fe8b0(lVar8,*(undefined8 *)
                                                Method_OVRPlugin_<>c_<_cctor>b__796_69__,2,0);
                    if ((uVar6 & 1) != 0) {
                      return 1;
                    }
                    plVar5 = (long *)(**(code **)(*unaff_x19 + 0x318))();
                    if ((plVar5 != (long *)0x0) &&
                       (lVar8 = (**(code **)(*plVar5 + 0x1c8))
                                          (plVar5,*(undefined8 *)(*plVar5 + 0x1d0)), lVar8 != 0)) {
                      uVar6 = FUN_015fe8b0(lVar8,*(undefined8 *)StringLiteral_11827,2,0);
                      if ((uVar6 & 1) != 0) {
                        return 1;
                      }
                      uVar6 = (**(code **)(*unaff_x19 + 1000))();
                      if ((uVar6 & 1) != 0) {
                        if (*(int *)(*plVar9 + 0xe0) == 0) {
                          thunk_FUN_00d32864();
                        }
                        uVar6 = FUN_01c6f074(0x7e4,1,0);
                        if ((uVar6 & 1) == 0) {
                          return 0;
                        }
                      }
                      uVar7 = (**(code **)(*unaff_x19 + 0x318))();
                      lVar8 = *unaff_x23;
                      if (*(int *)(lVar8 + 0xe0) == 0) {
                        thunk_FUN_00d32864(lVar8);
                        lVar8 = *unaff_x23;
                      }
                      uVar6 = FUN_016b4204(uVar7,*(undefined8 *)(*(long *)(lVar8 + 0xb8) + 8),0);
                      if ((uVar6 & 1) != 0) {
                        return 0;
                      }
                      uVar7 = (**(code **)(*unaff_x19 + 0x318))();
                      lVar8 = *unaff_x23;
                      if (*(int *)(lVar8 + 0xe0) == 0) {
                        thunk_FUN_00d32864(lVar8);
                        lVar8 = *unaff_x23;
                      }
                      uVar6 = FUN_016b4204(uVar7,*(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x10),0);
                      if ((uVar6 & 1) != 0) {
                        return 0;
                      }
                      uVar7 = (**(code **)(*unaff_x19 + 0x318))();
                      lVar8 = *unaff_x23;
                      if (*(int *)(lVar8 + 0xe0) == 0) {
                        thunk_FUN_00d32864(lVar8);
                        lVar8 = *unaff_x23;
                      }
                      uVar6 = FUN_016b4204(uVar7,*(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x18),0);
                      if ((uVar6 & 1) != 0) {
                        return 0;
                      }
                      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                      }
                      uVar6 = FUN_01150e28();
                      if (*(int *)(*plVar9 + 0xe0) == 0) {
                        thunk_FUN_00d32864(*plVar9);
                      }
                      if ((uVar6 & 1) != 0) {
                        uVar6 = FUN_01c6f074(4,5,0);
                        if ((uVar6 & 1) != 0) {
                          return 1;
                        }
                        uVar7 = FUN_0178be04();
                        return uVar7;
                      }
                      uVar6 = FUN_01c6f074(0x7e2,2,0);
                      puVar1 = PTR_DAT_033ed238;
                      if ((uVar6 & 1) != 0) {
                        return 0;
                      }
                      pcVar10 = *(code **)(*unaff_x19 + 0x888);
                      uVar7 = *(undefined8 *)(*unaff_x19 + 0x890);
                      do {
                        unaff_x19 = (long *)(*pcVar10)(unaff_x19,uVar7);
                        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
                          thunk_FUN_00d32864();
                        }
                        uVar6 = FUN_0178a8c4(unaff_x19,0,0);
                        if ((uVar6 & 1) == 0) {
                          return 0;
                        }
                        uVar7 = *(undefined8 *)puVar3;
                        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
                          thunk_FUN_00d32864();
                        }
                        uVar7 = FUN_01780344(uVar7,0);
                        uVar6 = FUN_0178a8c4(unaff_x19,uVar7,0);
                        if ((uVar6 & 1) == 0) {
                          return 0;
                        }
                        if (unaff_x19 == (long *)0x0) break;
                        uVar6 = (**(code **)(*unaff_x19 + 1000))
                                          (unaff_x19,*(undefined8 *)(*unaff_x19 + 0x3f0));
                        if ((uVar6 & 1) != 0) {
                          plVar9 = (long *)(**(code **)(*unaff_x19 + 0x468))
                                                     (unaff_x19,*(undefined8 *)(*unaff_x19 + 0x470))
                          ;
                          if (plVar9 == (long *)0x0) break;
                          uVar7 = (**(code **)(*plVar9 + 0x308))
                                            (plVar9,*(undefined8 *)(*plVar9 + 0x310));
                          uVar6 = thunk_FUN_015fe514(uVar7,*(undefined8 *)puVar1,0);
                          if ((uVar6 & 1) != 0) {
                            return 1;
                          }
                        }
                        pcVar10 = *(code **)(*unaff_x19 + 0x888);
                        uVar7 = *(undefined8 *)(*unaff_x19 + 0x890);
                      } while( true );
                    }
                  }
                }
                else {
                  lVar8 = (**(code **)(*unaff_x19 + 0x448))();
                  iVar4 = (**(code **)(*unaff_x19 + 0x458))();
                  if (iVar4 != 1) {
                    return 0;
                  }
                  if (lVar8 != 0) {
                    uVar6 = FUN_0178b958(lVar8,0);
                    if ((uVar6 & 1) != 0) {
                      return 0;
                    }
                    uVar7 = *(undefined8 *)puVar2;
                    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    uVar7 = FUN_01780344(uVar7,0);
                    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                      thunk_FUN_00d32864(*(long *)puVar1);
                    }
                    uVar6 = FUN_01c55fec(lVar8,uVar7);
                    if ((uVar6 & 1) != 0) {
                      return 0;
                    }
                    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
LAB_01c55b7c:
                    uVar7 = FUN_01c55270(lVar8);
                    return uVar7;
                  }
                }
              }
            }
LAB_01c55fe4:
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
        }
      }
      else {
        if (*(int *)(*(long *)
                      Method_UnityEngine_Playables_PlayableExtensions_IsValid<ScriptPlayable<ActivationControlPlayable>>__
                    + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar7 = FUN_017a5e58();
        if (*(int *)(*plVar9 + 0xe0) == 0) {
          thunk_FUN_00d32864(*plVar9);
        }
        uVar6 = FUN_01c6f074(5,6,0);
        if ((uVar6 & 1) != 0) {
          uVar11 = *(undefined8 *)Method_System_Data_DataSet_ReadXmlDiffgram__;
          if (*(int *)(*unaff_x22 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar11 = FUN_01780344(uVar11,0);
          uVar6 = FUN_0178a8c4(uVar7,uVar11,0);
          if ((uVar6 & 1) == 0) {
            return 0;
          }
          uVar11 = *(undefined8 *)
                    Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
          ;
          if (*(int *)(*unaff_x22 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar11 = FUN_01780344(uVar11,0);
          uVar7 = FUN_0178a8c4(uVar7,uVar11,0);
          return uVar7;
        }
        uVar11 = *(undefined8 *)
                  Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__;
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar11 = FUN_01780344(uVar11,0);
        uVar6 = FUN_01789ac0(uVar7,uVar11,0);
        if ((uVar6 & 1) == 0) {
          uVar11 = *(undefined8 *)
                    Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__;
          if (*(int *)(*unaff_x22 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar11 = FUN_01780344(uVar11,0);
          uVar7 = FUN_01789ac0(uVar7,uVar11,0);
          return uVar7;
        }
      }
      return 1;
    }
  }
  return 0;
}


