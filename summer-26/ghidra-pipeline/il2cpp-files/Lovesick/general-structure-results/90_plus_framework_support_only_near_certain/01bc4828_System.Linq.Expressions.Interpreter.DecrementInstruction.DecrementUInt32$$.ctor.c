/*
FUNCTION_NAME: System.Linq.Expressions.Interpreter.DecrementInstruction.DecrementUInt32$$.ctor
ENTRY_POINT: 01bc4828
PROGRAM: Lovesick-libil2cpp.so
SCORE: 148
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_1
*/


void System_Linq_Expressions_Interpreter_DecrementInstruction_DecrementUInt32___ctor
               (undefined8 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long *unaff_x19;
  long *unaff_x20;
  undefined8 uVar8;
  long unaff_x22;
  long *unaff_x23;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  long in_stack_00000028;
  
  uVar8 = *param_1;
  if (*(int *)(param_2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  plVar4 = (long *)FUN_01780344(uVar8,0);
  if (plVar4 == unaff_x19) {
    if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar2 = (**(code **)(*unaff_x20 + 0x1f8))();
    in_stack_00000018 = CONCAT62(in_stack_00000018._2_6_,uVar2);
    thunk_FUN_00d61fa0(*(undefined8 *)Newtonsoft_Json_JsonReader_State_TypeInfo,&stack0x00000018);
  }
  else {
    uVar8 = *(undefined8 *)Method_System_Collections_Generic_List<RendererList>_Add__;
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    plVar4 = (long *)FUN_01780344(uVar8,0);
    if (plVar4 == unaff_x19) {
      if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar8 = (**(code **)(*unaff_x20 + 0x248))();
      in_stack_00000018 = 0;
      FUN_0174cb44(&stack0x00000018,uVar8,0);
      thunk_FUN_00d61fa0(*(undefined8 *)StringLiteral_2672);
    }
    else {
      uVar8 = *(undefined8 *)StringLiteral_3349;
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      plVar4 = (long *)FUN_01780344(uVar8,0);
      if (plVar4 == unaff_x19) {
        if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar8 = (**(code **)(*unaff_x20 + 0x2c8))();
        in_stack_00000018 = 0;
        in_stack_00000020 = 0;
        FUN_01768a34(&stack0x00000018,uVar8,0);
        thunk_FUN_00d61fa0(*(undefined8 *)
                            UnityEngine_Rendering_Universal_LibTessDotNet_Tess_ActiveRegion_TypeInfo
                          );
      }
      else {
        uVar8 = *(undefined8 *)Method_Sirenix_Serialization_Serializer<byte>__ctor__;
        if (*(int *)(*unaff_x23 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        plVar4 = (long *)FUN_01780344(uVar8,0);
        if (plVar4 == unaff_x19) {
          if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          _in_stack_00000018 = (**(code **)(*unaff_x20 + 0x288))();
          thunk_FUN_00d61fa0(*(undefined8 *)
                              System_Collections_Generic_IList<ProBuilderMesh>_TypeInfo,
                             &stack0x00000018);
        }
        else {
          uVar8 = *(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_9__;
          if (*(int *)(*unaff_x23 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          plVar4 = (long *)FUN_01780344(uVar8,0);
          if (plVar4 == unaff_x19) {
            if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            in_stack_00000018 = (**(code **)(*unaff_x20 + 0x278))();
            thunk_FUN_00d61fa0(*(undefined8 *)PTR_DAT_033f2f78,&stack0x00000018);
          }
          else {
            uVar8 = *(undefined8 *)StringLiteral_5228;
            if (*(int *)(*unaff_x23 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            plVar4 = (long *)FUN_01780344(uVar8,0);
            if (plVar4 == unaff_x19) {
              if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              uVar2 = (**(code **)(*unaff_x20 + 0x208))();
              in_stack_00000018 = CONCAT62(in_stack_00000018._2_6_,uVar2);
              thunk_FUN_00d61fa0(*(undefined8 *)Method_System_Data_Common_UInt32Storage_Aggregate__,
                                 &stack0x00000018);
            }
            else {
              uVar8 = *(undefined8 *)
                       Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__;
              if (*(int *)(*unaff_x23 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              plVar4 = (long *)FUN_01780344(uVar8,0);
              if (plVar4 == unaff_x19) {
                if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                uVar3 = (**(code **)(*unaff_x20 + 0x228))();
                in_stack_00000018 = CONCAT44(in_stack_00000018._4_4_,uVar3);
                thunk_FUN_00d61fa0(*(undefined8 *)
                                    Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                   ,&stack0x00000018);
              }
              else {
                uVar8 = *(undefined8 *)Method_System_Data_DataSet_ReadXmlDiffgram__;
                if (*(int *)(*unaff_x23 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                plVar4 = (long *)FUN_01780344(uVar8,0);
                if (plVar4 == unaff_x19) {
                  if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da518c();
                  }
                  in_stack_00000018 = (**(code **)(*unaff_x20 + 0x248))();
                  thunk_FUN_00d61fa0(*(undefined8 *)
                                      OVRSpectatorModeDomeTest_<TimerCoroutine>d__20_TypeInfo,
                                     &stack0x00000018);
                }
                else {
                  uVar8 = *(undefined8 *)OVRPlugin_OVRP_1_50_0_TypeInfo;
                  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  plVar4 = (long *)FUN_01780344(uVar8,0);
                  if (plVar4 == unaff_x19) {
                    if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    uVar1 = (**(code **)(*unaff_x20 + 0x1e8))();
                    in_stack_00000018 = CONCAT71(in_stack_00000018._1_7_,uVar1);
                    thunk_FUN_00d61fa0(*(undefined8 *)StringLiteral_7239,&stack0x00000018);
                  }
                  else {
                    uVar8 = *(undefined8 *)
                             System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                    ;
                    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    plVar4 = (long *)FUN_01780344(uVar8,0);
                    if (plVar4 == unaff_x19) {
                      if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da518c();
                      }
                      uVar3 = (**(code **)(*unaff_x20 + 0x268))();
                      in_stack_00000018 = CONCAT44(in_stack_00000018._4_4_,uVar3);
                      thunk_FUN_00d61fa0(*(undefined8 *)
                                          System_Runtime_InteropServices_InAttribute_TypeInfo,
                                         &stack0x00000018);
                    }
                    else {
                      uVar8 = *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmovl_u8__;
                      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                      }
                      plVar4 = (long *)FUN_01780344(uVar8,0);
                      if (plVar4 == unaff_x19) {
                        if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da518c();
                        }
                        uVar2 = (**(code **)(*unaff_x20 + 0x218))();
                        in_stack_00000018 = CONCAT62(in_stack_00000018._2_6_,uVar2);
                        thunk_FUN_00d61fa0(*(undefined8 *)
                                            Method_System_Threading_Tasks_Task<DestructibleMeshComponent_MeshSegmentationResult>_ContinueWith__
                                           ,&stack0x00000018);
                      }
                      else {
                        uVar8 = *(undefined8 *)StringLiteral_6673;
                        if (*(int *)(*unaff_x23 + 0xe0) == 0) {
                          thunk_FUN_00d32864();
                        }
                        plVar4 = (long *)FUN_01780344(uVar8,0);
                        if (plVar4 == unaff_x19) {
                          if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                            FUN_00da518c();
                          }
                          uVar3 = (**(code **)(*unaff_x20 + 0x238))();
                          in_stack_00000018 = CONCAT44(in_stack_00000018._4_4_,uVar3);
                          thunk_FUN_00d61fa0(*(undefined8 *)
                                              Method_TMPro_SetPropertyUtility_SetStruct<char>__,
                                             &stack0x00000018);
                        }
                        else {
                          uVar8 = *(undefined8 *)
                                   Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
                          ;
                          if (*(int *)(*unaff_x23 + 0xe0) == 0) {
                            thunk_FUN_00d32864();
                          }
                          plVar4 = (long *)FUN_01780344(uVar8,0);
                          if (plVar4 == unaff_x19) {
                            if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                              FUN_00da518c();
                            }
                            in_stack_00000018 = (**(code **)(*unaff_x20 + 600))();
                            thunk_FUN_00d61fa0(*(undefined8 *)
                                                Method_Unity_Burst_Intrinsics_Arm_Neon_vtrn1_s16__,
                                               &stack0x00000018);
                          }
                          else {
                            uVar8 = *(undefined8 *)
                                     System_Security_Principal_WindowsImpersonationContext_TypeInfo;
                            if (*(int *)(*unaff_x23 + 0xe0) == 0) {
                              thunk_FUN_00d32864();
                            }
                            plVar4 = (long *)FUN_01780344(uVar8,0);
                            if (plVar4 == unaff_x19) {
                              if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                FUN_00da518c();
                              }
                              in_stack_00000018 = (**(code **)(*unaff_x20 + 0x248))();
                              thunk_FUN_00d61fa0(*(undefined8 *)Newtonsoft_Json_Linq_JToken_TypeInfo
                                                 ,&stack0x00000018);
                            }
                            else {
                              if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                FUN_00da518c();
                              }
                              uVar5 = (**(code **)(*unaff_x19 + 0x5c8))();
                              if ((uVar5 & 1) == 0) {
                                uVar5 = FUN_01bc5308();
                                if ((uVar5 & 1) == 0) {
                                  uVar8 = (**(code **)(*unaff_x19 + 0x308))();
                                  uVar6 = thunk_FUN_00d48444(
                                                  Method_System_Collections_Generic_List<ShadowUtility_Edge>_get_Item__
                                                  );
                                  uVar8 = FUN_015f6780(uVar6,uVar8,0);
                                  thunk_FUN_00d48444(System_Data_ConstraintTable_TypeInfo);
                                  lVar7 = thunk_FUN_00d62348();
                                  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                                    FUN_00da518c();
                                  }
                                  FUN_017713a8(lVar7,uVar8,0);
                                  uVar8 = thunk_FUN_00d48444(System_Xml_XmlAsyncCheckWriter_TypeInfo
                                                            );
                    /* WARNING: Subroutine does not return */
                                  FUN_00da5038(lVar7,uVar8);
                                }
                                if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_00da518c();
                                }
                                uVar8 = (**(code **)(*unaff_x20 + 0x298))();
                                if (*(int *)(*unaff_x23 + 0xe0) == 0) {
                                  thunk_FUN_00d32864();
                                }
                                FUN_00da5328(uVar8,1,*(undefined8 *)
                                                                                                            
                                                  Method_Oculus_Platform_Message<AchievementDefinitionList>_get_Data__
                                             ,*(undefined8 *)System_Xml_XmlAsyncCheckWriter_TypeInfo
                                            );
                              }
                              else {
                                System_Linq_Expressions_Interpreter_DivInstruction_DivUInt16___ctor
                                          ();
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if (*(long *)(unaff_x22 + 0x28) == in_stack_00000028) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


