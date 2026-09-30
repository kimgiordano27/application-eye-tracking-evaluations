/*
FUNCTION_NAME: FUN_01bc3500
ENTRY_POINT: 01bc3500
PROGRAM: Lovesick-libil2cpp.so
SCORE: 208
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_7;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_2;functionality_data_collection_or_telemetry_hits_1
*/


undefined8 FUN_01bc3500(long param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  undefined8 uVar13;
  ulong local_70;
  undefined8 uStack_68;
  undefined1 local_58 [16];
  long local_48;
  
  puVar2 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  puVar3 = Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__;
  lVar10 = tpidr_el0;
  local_48 = *(long *)(lVar10 + 0x28);
  if ((DAT_0377e790 & 1) == 0) {
    thunk_FUN_00d48444(Method_PlacePointEventDebugger_<>c_<OnEnable>b__1_2__);
    thunk_FUN_00d48444(StringLiteral_9958);
    thunk_FUN_00d48444(StringLiteral_11159);
    thunk_FUN_00d48444(Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__);
    thunk_FUN_00d48444(UnityEngine_Texture2D___TypeInfo);
    thunk_FUN_00d48444(Method_System_Linq_Enumerable_ToList<EdgeLookup>__);
    thunk_FUN_00d48444(Newtonsoft_Json_JsonReader_State_TypeInfo);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vpmaxqd_f64__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<RendererList>_Add__);
    thunk_FUN_00d48444(StringLiteral_2672);
    thunk_FUN_00d48444(Method_Sirenix_Serialization_Serializer<byte>__ctor__);
    thunk_FUN_00d48444(System_Collections_Generic_IList<ProBuilderMesh>_TypeInfo);
    thunk_FUN_00d48444(Method_OVRControllerTest_<>c_<Start>b__4_9__);
    thunk_FUN_00d48444(PTR_DAT_033f2f78);
    thunk_FUN_00d48444(
                      Method_UnityEngine_Playables_PlayableExtensions_IsValid<ScriptPlayable<ActivationControlPlayable>>__
                      );
    thunk_FUN_00d48444(StringLiteral_3349);
    thunk_FUN_00d48444(UnityEngine_Rendering_Universal_LibTessDotNet_Tess_ActiveRegion_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<uint,_TMP_SpriteCharacter>__ctor__
                      );
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
    thunk_FUN_00d48444(Method_System_Nullable<MissingMemberHandling>_get_HasValue__);
    DAT_0377e790 = 1;
  }
  uVar13 = *(undefined8 *)puVar3;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  plVar6 = (long *)FUN_01780344(uVar13,0);
  if (plVar6 != param_3) {
    uVar13 = *(undefined8 *)Method_PlacePointEventDebugger_<>c_<OnEnable>b__1_2__;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    plVar6 = (long *)FUN_01780344(uVar13,0);
    puVar3 = Method_Unity_Burst_Intrinsics_Arm_Neon_vpmaxqd_f64__;
    if (plVar6 == param_3) {
      uVar13 = *(undefined8 *)(param_1 + 0x10);
      if (*(int *)(*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vpmaxqd_f64__ + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar4 = FUN_016fce5c(param_2,uVar13,0);
      local_58._0_8_ = CONCAT71(local_58._1_7_,uVar4) & 0xffffffffffffff01;
      param_2 = thunk_FUN_00d61fa0(*(undefined8 *)StringLiteral_9958,local_58);
    }
    else {
      uVar13 = *(undefined8 *)Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__
      ;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      plVar6 = (long *)FUN_01780344(uVar13,0);
      if (plVar6 == param_3) {
        uVar13 = *(undefined8 *)(param_1 + 0x10);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar4 = FUN_016fe0ac(param_2,uVar13,0);
        local_58[0] = uVar4;
        param_2 = thunk_FUN_00d61fa0(*(undefined8 *)UnityEngine_Texture2D___TypeInfo,local_58);
      }
      else {
        uVar13 = *(undefined8 *)Method_System_Linq_Enumerable_ToList<EdgeLookup>__;
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        plVar6 = (long *)FUN_01780344(uVar13,0);
        if (plVar6 == param_3) {
          uVar7 = thunk_FUN_015fe514(param_2,*(undefined8 *)
                                              Method_System_Nullable<MissingMemberHandling>_get_HasValue__
                                     ,0);
          puVar2 = Newtonsoft_Json_JsonReader_State_TypeInfo;
          if ((uVar7 & 1) == 0) {
            uVar13 = *(undefined8 *)(param_1 + 0x10);
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar5 = FUN_016fd3ac(param_2,uVar13,0);
            local_58._0_2_ = uVar5;
            param_2 = thunk_FUN_00d61fa0(*(undefined8 *)puVar2,local_58);
          }
          else {
            local_58._0_8_ = local_58._0_8_ & 0xffffffffffff0000;
            param_2 = thunk_FUN_00d61fa0(*(undefined8 *)Newtonsoft_Json_JsonReader_State_TypeInfo,
                                         local_58);
          }
        }
        else {
          uVar13 = *(undefined8 *)Method_System_Collections_Generic_List<RendererList>_Add__;
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          plVar6 = (long *)FUN_01780344(uVar13,0);
          if (plVar6 == param_3) {
            uVar13 = *(undefined8 *)(param_1 + 0x10);
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            local_58._0_8_ = FUN_01700bac(param_2,uVar13,0);
            param_2 = thunk_FUN_00d61fa0(*(undefined8 *)StringLiteral_2672,local_58);
          }
          else {
            uVar13 = *(undefined8 *)Method_Sirenix_Serialization_Serializer<byte>__ctor__;
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            plVar6 = (long *)FUN_01780344(uVar13,0);
            if (plVar6 == param_3) {
              uVar13 = *(undefined8 *)(param_1 + 0x10);
              if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              local_58 = FUN_0170093c(param_2,uVar13,0);
              param_2 = thunk_FUN_00d61fa0(*(undefined8 *)
                                            System_Collections_Generic_IList<ProBuilderMesh>_TypeInfo
                                           ,local_58);
            }
            else {
              uVar13 = *(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_9__;
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              plVar6 = (long *)FUN_01780344(uVar13,0);
              if (plVar6 == param_3) {
                uVar13 = *(undefined8 *)(param_1 + 0x10);
                if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                local_58._0_8_ = FUN_017004d0(param_2,uVar13,0);
                param_2 = thunk_FUN_00d61fa0(*(undefined8 *)PTR_DAT_033f2f78,local_58);
              }
              else {
                uVar13 = *(undefined8 *)StringLiteral_5228;
                if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                plVar6 = (long *)FUN_01780344(uVar13,0);
                if (plVar6 == param_3) {
                  uVar13 = *(undefined8 *)(param_1 + 0x10);
                  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  uVar5 = FUN_016fe5a8(param_2,uVar13,0);
                  local_58._0_2_ = uVar5;
                  param_2 = thunk_FUN_00d61fa0(*(undefined8 *)
                                                Method_System_Data_Common_UInt32Storage_Aggregate__,
                                               local_58);
                }
                else {
                  uVar13 = *(undefined8 *)
                            Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__
                  ;
                  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  plVar6 = (long *)FUN_01780344(uVar13,0);
                  if (plVar6 == param_3) {
                    uVar13 = *(undefined8 *)(param_1 + 0x10);
                    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    local_58._0_4_ = FUN_016fef60(param_2,uVar13,0);
                    param_2 = thunk_FUN_00d61fa0(*(undefined8 *)
                                                  Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                                 ,local_58);
                  }
                  else {
                    uVar13 = *(undefined8 *)Method_System_Data_DataSet_ReadXmlDiffgram__;
                    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    plVar6 = (long *)FUN_01780344(uVar13,0);
                    if (plVar6 == param_3) {
                      uVar13 = *(undefined8 *)(param_1 + 0x10);
                      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                      }
                      local_58._0_8_ = FUN_016ff980(param_2,uVar13,0);
                      param_2 = thunk_FUN_00d61fa0(*(undefined8 *)
                                                                                                        
                                                  OVRSpectatorModeDomeTest_<TimerCoroutine>d__20_TypeInfo
                                                  ,local_58);
                    }
                    else {
                      uVar13 = *(undefined8 *)OVRPlugin_OVRP_1_50_0_TypeInfo;
                      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                      }
                      plVar6 = (long *)FUN_01780344(uVar13,0);
                      if (plVar6 == param_3) {
                        uVar13 = *(undefined8 *)(param_1 + 0x10);
                        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                          thunk_FUN_00d32864();
                        }
                        uVar4 = FUN_016fda90(param_2,uVar13,0);
                        local_58[0] = uVar4;
                        param_2 = thunk_FUN_00d61fa0(*(undefined8 *)StringLiteral_7239,local_58);
                      }
                      else {
                        uVar13 = *(undefined8 *)
                                  System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                        ;
                        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                          thunk_FUN_00d32864();
                        }
                        plVar6 = (long *)FUN_01780344(uVar13,0);
                        if (plVar6 == param_3) {
                          uVar13 = *(undefined8 *)(param_1 + 0x10);
                          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                            thunk_FUN_00d32864();
                          }
                          local_58._0_4_ = FUN_01700208(param_2,uVar13,0);
                          param_2 = thunk_FUN_00d61fa0(*(undefined8 *)
                                                                                                                
                                                  System_Runtime_InteropServices_InAttribute_TypeInfo
                                                  ,local_58);
                        }
                        else {
                          uVar13 = *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmovl_u8__;
                          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                            thunk_FUN_00d32864();
                          }
                          plVar6 = (long *)FUN_01780344(uVar13,0);
                          if (plVar6 == param_3) {
                            uVar13 = *(undefined8 *)(param_1 + 0x10);
                            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                              thunk_FUN_00d32864();
                            }
                            uVar5 = FUN_016feaf4(param_2,uVar13,0);
                            local_58._0_2_ = uVar5;
                            param_2 = thunk_FUN_00d61fa0(*(undefined8 *)
                                                                                                                    
                                                  Method_System_Threading_Tasks_Task<DestructibleMeshComponent_MeshSegmentationResult>_ContinueWith__
                                                  ,local_58);
                          }
                          else {
                            uVar13 = *(undefined8 *)StringLiteral_6673;
                            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                              thunk_FUN_00d32864();
                            }
                            plVar6 = (long *)FUN_01780344(uVar13,0);
                            if (plVar6 == param_3) {
                              uVar13 = *(undefined8 *)(param_1 + 0x10);
                              if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                                thunk_FUN_00d32864();
                              }
                              local_58._0_4_ = FUN_016ff49c(param_2,uVar13,0);
                              param_2 = thunk_FUN_00d61fa0(*(undefined8 *)
                                                                                                                        
                                                  Method_TMPro_SetPropertyUtility_SetStruct<char>__,
                                                  local_58);
                            }
                            else {
                              uVar13 = *(undefined8 *)
                                        Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
                              ;
                              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                                thunk_FUN_00d32864();
                              }
                              plVar6 = (long *)FUN_01780344(uVar13,0);
                              if (plVar6 == param_3) {
                                uVar13 = *(undefined8 *)(param_1 + 0x10);
                                if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                                  thunk_FUN_00d32864();
                                }
                                local_58._0_8_ = FUN_016ffec4(param_2,uVar13,0);
                                param_2 = thunk_FUN_00d61fa0(*(undefined8 *)
                                                                                                                            
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vtrn1_s16__
                                                  ,local_58);
                              }
                              else {
                                uVar13 = *(undefined8 *)
                                          System_Security_Principal_WindowsImpersonationContext_TypeInfo
                                ;
                                if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                                  thunk_FUN_00d32864();
                                }
                                plVar6 = (long *)FUN_01780344(uVar13,0);
                                puVar1 = Newtonsoft_Json_Linq_JToken_TypeInfo;
                                if (plVar6 == param_3) {
                                  if (*(int *)(*(long *)Newtonsoft_Json_Linq_JToken_TypeInfo + 0xe0)
                                      == 0) {
                                    thunk_FUN_00d32864();
                                  }
                                  local_58._0_8_ = FUN_0178906c(param_2,0);
                                  param_2 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,local_58);
                                }
                                else {
                                  uVar13 = *(undefined8 *)StringLiteral_3349;
                                  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                                    thunk_FUN_00d32864();
                                  }
                                  plVar6 = (long *)FUN_01780344(uVar13,0);
                                  if (plVar6 == param_3) {
                                    local_58._0_8_ = 0;
                                    local_58._8_8_ = 0;
                                    FUN_01768d04(local_58,param_2,0);
                                    uStack_68 = local_58._8_8_;
                                    local_70 = local_58._0_8_;
                                    param_2 = thunk_FUN_00d61fa0(*(undefined8 *)
                                                                                                                                    
                                                  UnityEngine_Rendering_Universal_LibTessDotNet_Tess_ActiveRegion_TypeInfo
                                                  ,&local_70);
                                  }
                                  else {
                                    if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                      FUN_00da518c();
                                    }
                                    uVar7 = (**(code **)(*param_3 + 0x5c8))
                                                      (param_3,*(undefined8 *)(*param_3 + 0x5d0));
                                    if ((uVar7 & 1) == 0) {
                                      uVar13 = *(undefined8 *)StringLiteral_11159;
                                      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                                        thunk_FUN_00d32864();
                                      }
                                      plVar6 = (long *)FUN_01780344(uVar13,0);
                                      if (plVar6 == param_3) {
                                        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                                          thunk_FUN_00d32864();
                                        }
                                        param_2 = FUN_01702364(param_2,0);
                                      }
                                      else {
                                        uVar7 = FUN_01bc3488(param_3);
                                        if ((uVar7 & 1) == 0) {
                                          uVar13 = (**(code **)(*param_3 + 0x308))
                                                             (param_3,*(undefined8 *)
                                                                       (*param_3 + 0x310));
                                          uVar9 = thunk_FUN_00d48444(
                                                  Method_System_Collections_Generic_List<ShadowUtility_Edge>_get_Item__
                                                  );
                                          uVar13 = FUN_015f6780(uVar9,uVar13,0);
                                          thunk_FUN_00d48444(System_Data_ConstraintTable_TypeInfo);
                                          lVar10 = thunk_FUN_00d62348();
                                          if (lVar10 != 0) {
                                            FUN_017713a8(lVar10,uVar13,0);
                                            uVar13 = thunk_FUN_00d48444(
                                                  UnityEngine_Rendering_Universal_ScreenSpaceShadows_ScreenSpaceShadowsPostPass_TypeInfo
                                                  );
                    /* WARNING: Subroutine does not return */
                                            FUN_00da5038(lVar10,uVar13);
                                          }
                    /* WARNING: Subroutine does not return */
                                          FUN_00da518c();
                                        }
                                        plVar6 = *(long **)(param_1 + 0x18);
                                        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                          FUN_00da518c();
                                        }
                                        lVar11 = *plVar6;
                                        uVar7 = (ulong)*(ushort *)(lVar11 + 0x12a);
                                        if (uVar7 != 0) {
                                          piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                                          do {
                                            if (*(long *)(piVar12 + -2) ==
                                                *(long *)
                                                 Method_System_Collections_Generic_Dictionary<uint,_TMP_SpriteCharacter>__ctor__
                                               ) {
                                              puVar8 = (undefined8 *)
                                                       (lVar11 + (long)(*piVar12 + 1) * 0x10 + 0x138
                                                       );
                                              goto LAB_01bc3fb0;
                                            }
                                            uVar7 = uVar7 - 1;
                                            piVar12 = piVar12 + 4;
                                          } while (uVar7 != 0);
                                        }
                                        puVar8 = (undefined8 *)
                                                 FUN_00d59724(plVar6,*(long *)
                                                  Method_System_Collections_Generic_Dictionary<uint,_TMP_SpriteCharacter>__ctor__
                                                  ,1);
LAB_01bc3fb0:
                                        param_2 = (*(code *)*puVar8)(plVar6,param_2,puVar8[1]);
                                      }
                                    }
                                    else {
                                      if (*(int *)(*(long *)
                                                  Method_UnityEngine_Playables_PlayableExtensions_IsValid<ScriptPlayable<ActivationControlPlayable>>__
                                                  + 0xe0) == 0) {
                                        thunk_FUN_00d32864();
                                      }
                                      param_2 = FUN_017a54c4(param_3,param_2,1,0);
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if (*(long *)(lVar10 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_2;
}


