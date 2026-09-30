/*
FUNCTION_NAME: FUN_01bc455c
ENTRY_POINT: 01bc455c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 194
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_8;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


void FUN_01bc455c(long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  ulong local_70;
  undefined8 uStack_68;
  undefined1 local_58 [16];
  long local_48;
  
  puVar2 = StringLiteral_11159;
  puVar1 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  lVar9 = tpidr_el0;
  local_48 = *(long *)(lVar9 + 0x28);
  if ((DAT_0377e793 & 1) == 0) {
    thunk_FUN_00d48444(System_Xml_XmlAsyncCheckWriter_TypeInfo);
    thunk_FUN_00d48444(Method_PlacePointEventDebugger_<>c_<OnEnable>b__1_2__);
    thunk_FUN_00d48444(StringLiteral_9958);
    thunk_FUN_00d48444(StringLiteral_11159);
    thunk_FUN_00d48444(Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__);
    thunk_FUN_00d48444(UnityEngine_Texture2D___TypeInfo);
    thunk_FUN_00d48444(Method_System_Linq_Enumerable_ToList<EdgeLookup>__);
    thunk_FUN_00d48444(Newtonsoft_Json_JsonReader_State_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<RendererList>_Add__);
    thunk_FUN_00d48444(StringLiteral_2672);
    thunk_FUN_00d48444(Method_Sirenix_Serialization_Serializer<byte>__ctor__);
    thunk_FUN_00d48444(System_Collections_Generic_IList<ProBuilderMesh>_TypeInfo);
    thunk_FUN_00d48444(Method_OVRControllerTest_<>c_<Start>b__4_9__);
    thunk_FUN_00d48444(PTR_DAT_033f2f78);
    thunk_FUN_00d48444(StringLiteral_3349);
    thunk_FUN_00d48444(UnityEngine_Rendering_Universal_LibTessDotNet_Tess_ActiveRegion_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_5228);
    thunk_FUN_00d48444(Method_System_Data_Common_UInt32Storage_Aggregate__);
    thunk_FUN_00d48444(Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__);
    thunk_FUN_00d48444(Method_System_Data_DataSet_ReadXmlDiffgram__);
    thunk_FUN_00d48444(OVRSpectatorModeDomeTest_<TimerCoroutine>d__20_TypeInfo);
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_50_0_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_7239);
    thunk_FUN_00d48444(
                      System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                      );
    thunk_FUN_00d48444(System_Runtime_InteropServices_InAttribute_TypeInfo);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
                      );
    thunk_FUN_00d48444(System_Security_Principal_WindowsImpersonationContext_TypeInfo);
    thunk_FUN_00d48444(Newtonsoft_Json_Linq_JToken_TypeInfo);
    thunk_FUN_00d48444(Method_Oculus_Platform_Message<AchievementDefinitionList>_get_Data__);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmovl_u8__);
    thunk_FUN_00d48444(
                      Method_System_Threading_Tasks_Task<DestructibleMeshComponent_MeshSegmentationResult>_ContinueWith__
                      );
    thunk_FUN_00d48444(StringLiteral_6673);
    thunk_FUN_00d48444(Method_TMPro_SetPropertyUtility_SetStruct<char>__);
    thunk_FUN_00d48444(
                      Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
                      );
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vtrn1_s16__);
    DAT_0377e793 = 1;
  }
  uVar10 = *(undefined8 *)puVar2;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  plVar6 = (long *)FUN_01780344(uVar10,0);
  if (plVar6 == param_1) {
    FUN_01bc5244(param_2);
  }
  else {
    uVar10 = *(undefined8 *)
              Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
    ;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    plVar6 = (long *)FUN_01780344(uVar10,0);
    if (plVar6 == param_1) {
      if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      (**(code **)(*param_2 + 0x298))(param_2,*(undefined8 *)(*param_2 + 0x2a0));
    }
    else {
      uVar10 = *(undefined8 *)Method_PlacePointEventDebugger_<>c_<OnEnable>b__1_2__;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      plVar6 = (long *)FUN_01780344(uVar10,0);
      if (plVar6 == param_1) {
        if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar3 = (**(code **)(*param_2 + 0x1c8))(param_2,*(undefined8 *)(*param_2 + 0x1d0));
        local_58._0_8_ = CONCAT71(local_58._1_7_,uVar3) & 0xffffffffffffff01;
        thunk_FUN_00d61fa0(*(undefined8 *)StringLiteral_9958,local_58);
      }
      else {
        uVar10 = *(undefined8 *)
                  Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        plVar6 = (long *)FUN_01780344(uVar10,0);
        if (plVar6 == param_1) {
          if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar3 = (**(code **)(*param_2 + 0x1d8))(param_2,*(undefined8 *)(*param_2 + 0x1e0));
          local_58[0] = uVar3;
          thunk_FUN_00d61fa0(*(undefined8 *)UnityEngine_Texture2D___TypeInfo,local_58);
        }
        else {
          uVar10 = *(undefined8 *)Method_System_Linq_Enumerable_ToList<EdgeLookup>__;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          plVar6 = (long *)FUN_01780344(uVar10,0);
          if (plVar6 == param_1) {
            if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            uVar4 = (**(code **)(*param_2 + 0x1f8))(param_2,*(undefined8 *)(*param_2 + 0x200));
            local_58._0_2_ = uVar4;
            thunk_FUN_00d61fa0(*(undefined8 *)Newtonsoft_Json_JsonReader_State_TypeInfo,local_58);
          }
          else {
            uVar10 = *(undefined8 *)Method_System_Collections_Generic_List<RendererList>_Add__;
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            plVar6 = (long *)FUN_01780344(uVar10,0);
            if (plVar6 == param_1) {
              if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              uVar10 = (**(code **)(*param_2 + 0x248))(param_2,*(undefined8 *)(*param_2 + 0x250));
              local_58._0_8_ = 0;
              FUN_0174cb44(local_58,uVar10,0);
              local_70 = local_58._0_8_;
              thunk_FUN_00d61fa0(*(undefined8 *)StringLiteral_2672,&local_70);
            }
            else {
              uVar10 = *(undefined8 *)StringLiteral_3349;
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              plVar6 = (long *)FUN_01780344(uVar10,0);
              if (plVar6 == param_1) {
                if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                uVar10 = (**(code **)(*param_2 + 0x2c8))
                                   (param_2,0x10,*(undefined8 *)(*param_2 + 0x2d0));
                local_58._0_8_ = 0;
                local_58._8_8_ = 0;
                FUN_01768a34(local_58,uVar10,0);
                uStack_68 = local_58._8_8_;
                local_70 = local_58._0_8_;
                thunk_FUN_00d61fa0(*(undefined8 *)
                                    UnityEngine_Rendering_Universal_LibTessDotNet_Tess_ActiveRegion_TypeInfo
                                   ,&local_70);
              }
              else {
                uVar10 = *(undefined8 *)Method_Sirenix_Serialization_Serializer<byte>__ctor__;
                if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                plVar6 = (long *)FUN_01780344(uVar10,0);
                if (plVar6 == param_1) {
                  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da518c();
                  }
                  local_58 = (**(code **)(*param_2 + 0x288))
                                       (param_2,*(undefined8 *)(*param_2 + 0x290));
                  thunk_FUN_00d61fa0(*(undefined8 *)
                                      System_Collections_Generic_IList<ProBuilderMesh>_TypeInfo,
                                     local_58);
                }
                else {
                  uVar10 = *(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_9__;
                  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  plVar6 = (long *)FUN_01780344(uVar10,0);
                  if (plVar6 == param_1) {
                    if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    local_58._0_8_ =
                         (**(code **)(*param_2 + 0x278))(param_2,*(undefined8 *)(*param_2 + 0x280));
                    thunk_FUN_00d61fa0(*(undefined8 *)PTR_DAT_033f2f78,local_58);
                  }
                  else {
                    uVar10 = *(undefined8 *)StringLiteral_5228;
                    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    plVar6 = (long *)FUN_01780344(uVar10,0);
                    if (plVar6 == param_1) {
                      if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da518c();
                      }
                      uVar4 = (**(code **)(*param_2 + 0x208))
                                        (param_2,*(undefined8 *)(*param_2 + 0x210));
                      local_58._0_2_ = uVar4;
                      thunk_FUN_00d61fa0(*(undefined8 *)
                                          Method_System_Data_Common_UInt32Storage_Aggregate__,
                                         local_58);
                    }
                    else {
                      uVar10 = *(undefined8 *)
                                Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__
                      ;
                      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                      }
                      plVar6 = (long *)FUN_01780344(uVar10,0);
                      if (plVar6 == param_1) {
                        if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da518c();
                        }
                        uVar5 = (**(code **)(*param_2 + 0x228))
                                          (param_2,*(undefined8 *)(*param_2 + 0x230));
                        local_58._0_4_ = uVar5;
                        thunk_FUN_00d61fa0(*(undefined8 *)
                                            Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                           ,local_58);
                      }
                      else {
                        uVar10 = *(undefined8 *)Method_System_Data_DataSet_ReadXmlDiffgram__;
                        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                          thunk_FUN_00d32864();
                        }
                        plVar6 = (long *)FUN_01780344(uVar10,0);
                        if (plVar6 == param_1) {
                          if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                            FUN_00da518c();
                          }
                          local_58._0_8_ =
                               (**(code **)(*param_2 + 0x248))
                                         (param_2,*(undefined8 *)(*param_2 + 0x250));
                          thunk_FUN_00d61fa0(*(undefined8 *)
                                              OVRSpectatorModeDomeTest_<TimerCoroutine>d__20_TypeInfo
                                             ,local_58);
                        }
                        else {
                          uVar10 = *(undefined8 *)OVRPlugin_OVRP_1_50_0_TypeInfo;
                          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                            thunk_FUN_00d32864();
                          }
                          plVar6 = (long *)FUN_01780344(uVar10,0);
                          if (plVar6 == param_1) {
                            if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                              FUN_00da518c();
                            }
                            uVar3 = (**(code **)(*param_2 + 0x1e8))
                                              (param_2,*(undefined8 *)(*param_2 + 0x1f0));
                            local_58[0] = uVar3;
                            thunk_FUN_00d61fa0(*(undefined8 *)StringLiteral_7239,local_58);
                          }
                          else {
                            uVar10 = *(undefined8 *)
                                      System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                            ;
                            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                              thunk_FUN_00d32864();
                            }
                            plVar6 = (long *)FUN_01780344(uVar10,0);
                            if (plVar6 == param_1) {
                              if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                FUN_00da518c();
                              }
                              uVar5 = (**(code **)(*param_2 + 0x268))
                                                (param_2,*(undefined8 *)(*param_2 + 0x270));
                              local_58._0_4_ = uVar5;
                              thunk_FUN_00d61fa0(*(undefined8 *)
                                                  System_Runtime_InteropServices_InAttribute_TypeInfo
                                                 ,local_58);
                            }
                            else {
                              uVar10 = *(undefined8 *)
                                        Method_Unity_Burst_Intrinsics_Arm_Neon_vmovl_u8__;
                              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                                thunk_FUN_00d32864();
                              }
                              plVar6 = (long *)FUN_01780344(uVar10,0);
                              if (plVar6 == param_1) {
                                if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_00da518c();
                                }
                                uVar4 = (**(code **)(*param_2 + 0x218))
                                                  (param_2,*(undefined8 *)(*param_2 + 0x220));
                                local_58._0_2_ = uVar4;
                                thunk_FUN_00d61fa0(*(undefined8 *)
                                                                                                        
                                                  Method_System_Threading_Tasks_Task<DestructibleMeshComponent_MeshSegmentationResult>_ContinueWith__
                                                  ,local_58);
                              }
                              else {
                                uVar10 = *(undefined8 *)StringLiteral_6673;
                                if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                                  thunk_FUN_00d32864();
                                }
                                plVar6 = (long *)FUN_01780344(uVar10,0);
                                if (plVar6 == param_1) {
                                  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                    FUN_00da518c();
                                  }
                                  uVar5 = (**(code **)(*param_2 + 0x238))
                                                    (param_2,*(undefined8 *)(*param_2 + 0x240));
                                  local_58._0_4_ = uVar5;
                                  thunk_FUN_00d61fa0(*(undefined8 *)
                                                                                                            
                                                  Method_TMPro_SetPropertyUtility_SetStruct<char>__,
                                                  local_58);
                                }
                                else {
                                  uVar10 = *(undefined8 *)
                                            Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
                                  ;
                                  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                                    thunk_FUN_00d32864();
                                  }
                                  plVar6 = (long *)FUN_01780344(uVar10,0);
                                  if (plVar6 == param_1) {
                                    if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                      FUN_00da518c();
                                    }
                                    local_58._0_8_ =
                                         (**(code **)(*param_2 + 600))
                                                   (param_2,*(undefined8 *)(*param_2 + 0x260));
                                    thunk_FUN_00d61fa0(*(undefined8 *)
                                                                                                                
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vtrn1_s16__
                                                  ,local_58);
                                  }
                                  else {
                                    uVar10 = *(undefined8 *)
                                              System_Security_Principal_WindowsImpersonationContext_TypeInfo
                                    ;
                                    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                                      thunk_FUN_00d32864();
                                    }
                                    plVar6 = (long *)FUN_01780344(uVar10,0);
                                    if (plVar6 == param_1) {
                                      if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                        FUN_00da518c();
                                      }
                                      local_58._0_8_ =
                                           (**(code **)(*param_2 + 0x248))
                                                     (param_2,*(undefined8 *)(*param_2 + 0x250));
                                      thunk_FUN_00d61fa0(*(undefined8 *)
                                                          Newtonsoft_Json_Linq_JToken_TypeInfo,
                                                         local_58);
                                    }
                                    else {
                                      if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                        FUN_00da518c();
                                      }
                                      uVar7 = (**(code **)(*param_1 + 0x5c8))
                                                        (param_1,*(undefined8 *)(*param_1 + 0x5d0));
                                      if ((uVar7 & 1) == 0) {
                                        uVar7 = FUN_01bc5308(param_1);
                                        if ((uVar7 & 1) == 0) {
                                          uVar10 = (**(code **)(*param_1 + 0x308))
                                                             (param_1,*(undefined8 *)
                                                                       (*param_1 + 0x310));
                                          uVar8 = thunk_FUN_00d48444(
                                                  Method_System_Collections_Generic_List<ShadowUtility_Edge>_get_Item__
                                                  );
                                          uVar10 = FUN_015f6780(uVar8,uVar10,0);
                                          thunk_FUN_00d48444(System_Data_ConstraintTable_TypeInfo);
                                          lVar9 = thunk_FUN_00d62348();
                                          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                                            FUN_00da518c();
                                          }
                                          FUN_017713a8(lVar9,uVar10,0);
                                          uVar10 = thunk_FUN_00d48444(
                                                  System_Xml_XmlAsyncCheckWriter_TypeInfo);
                    /* WARNING: Subroutine does not return */
                                          FUN_00da5038(lVar9,uVar10);
                                        }
                                        if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                          FUN_00da518c();
                                        }
                                        uVar10 = (**(code **)(*param_2 + 0x298))
                                                           (param_2,*(undefined8 *)
                                                                     (*param_2 + 0x2a0));
                                        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                                          thunk_FUN_00d32864();
                                        }
                                        FUN_00da5328(uVar10,1,*(undefined8 *)
                                                                                                                              
                                                  Method_Oculus_Platform_Message<AchievementDefinitionList>_get_Data__
                                                  ,*(undefined8 *)
                                                    System_Xml_XmlAsyncCheckWriter_TypeInfo);
                                      }
                                      else {
                                        System_Linq_Expressions_Interpreter_DivInstruction_DivUInt16___ctor
                                                  (param_1,param_2);
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if (*(long *)(lVar9 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


