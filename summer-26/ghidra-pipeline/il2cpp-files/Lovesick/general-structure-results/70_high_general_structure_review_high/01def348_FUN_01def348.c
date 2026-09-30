/*
FUNCTION_NAME: FUN_01def348
ENTRY_POINT: 01def348
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Type propagation algorithm not settling */

void FUN_01def348(long param_1,uint param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined2 *puVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if ((DAT_0377f986 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<DecalCachedChunk>_MoveNext__
                      );
    thunk_FUN_00d48444(Method_PlacePointEventDebugger_<>c_<OnEnable>b__1_2__);
    thunk_FUN_00d48444(StringLiteral_9958);
    thunk_FUN_00d48444(StringLiteral_11159);
    thunk_FUN_00d48444(Method_System_Linq_Enumerable_ToList<EdgeLookup>__);
    thunk_FUN_00d48444(Newtonsoft_Json_JsonReader_State_TypeInfo);
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
    thunk_FUN_00d48444(Method_SoccerBlocker_HideCrowd__);
    thunk_FUN_00d48444(
                      System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                      );
    thunk_FUN_00d48444(System_Runtime_InteropServices_InAttribute_TypeInfo);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
                      );
    thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
    ;
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
    DAT_0377f986 = 1;
  }
  puVar1 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  if (*(long **)(param_1 + 0x40) == param_3) {
    lVar6 = *(long *)(param_1 + 0x50);
    if (lVar6 == 0) goto LAB_01def690;
    if (param_2 < *(uint *)(lVar6 + 0x18)) {
      *(undefined8 *)(lVar6 + (long)(int)param_2 * 8 + 0x20) = 0;
      return;
    }
    goto LAB_01defc5c;
  }
  uVar11 = *(undefined8 *)(param_1 + 0x20);
  uVar12 = *(undefined8 *)Method_SoccerBlocker_HideCrowd__;
  if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar12 = FUN_01780344(uVar12,0);
  uVar4 = FUN_01789ac0(uVar11,uVar12,0);
  if ((uVar4 & 1) == 0) {
    plVar5 = *(long **)(param_1 + 0x20);
    if (plVar5 == (long *)0x0) goto LAB_01def690;
    uVar4 = (**(code **)(*plVar5 + 0x8b8))(plVar5,param_3,*(undefined8 *)(*plVar5 + 0x8c0));
    puVar3 = StringLiteral_3349;
    if ((uVar4 & 1) != 0) goto LAB_01def540;
    if (param_3 == (long *)0x0) goto LAB_01def690;
    uVar11 = thunk_FUN_00d93c64(param_3,0);
    uVar12 = *(undefined8 *)(param_1 + 0x20);
    uVar13 = *(undefined8 *)puVar3;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar1);
    }
    uVar13 = FUN_01780344(uVar13,0);
    uVar4 = FUN_01789ac0(uVar12,uVar13,0);
    if ((uVar4 & 1) != 0) {
      uVar12 = *(undefined8 *)
                Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
      ;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar12 = FUN_01780344(uVar12,0);
      uVar4 = FUN_01789ac0(uVar11,uVar12,0);
      puVar3 = UnityEngine_Rendering_Universal_LibTessDotNet_Tess_ActiveRegion_TypeInfo;
      if ((uVar4 & 1) != 0) {
        plVar5 = *(long **)(param_1 + 0x50);
        local_50 = 0;
        uStack_48 = 0;
        if (*param_3 !=
            *(long *)System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
        goto LAB_01defc6c;
        FUN_01768d04(&local_50,param_3,0);
        uStack_58 = uStack_48;
        local_60 = local_50;
        param_3 = (long *)thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&local_60);
        goto joined_r0x01def544;
      }
    }
    uVar12 = *(undefined8 *)(param_1 + 0x20);
    uVar13 = *(undefined8 *)StringLiteral_11159;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar13 = FUN_01780344(uVar13,0);
    uVar4 = FUN_01789ac0(uVar12,uVar13,0);
    if ((uVar4 & 1) == 0) {
LAB_01defc74:
      uVar11 = FUN_01d346e8(0);
      uVar12 = thunk_FUN_00d48444(Method_System_Collections_Generic_List<Texture2D>_set_Capacity__);
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar11,uVar12);
    }
    uVar12 = *(undefined8 *)Method_PlacePointEventDebugger_<>c_<OnEnable>b__1_2__;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    puVar3 = Method_System_Collections_Generic_List_Enumerator<DecalCachedChunk>_MoveNext__;
    uVar12 = FUN_01780344(uVar12,0);
    uVar4 = FUN_01789ac0(uVar11,uVar12,0);
    puVar2 = StringLiteral_9958;
    if ((uVar4 & 1) == 0) {
      uVar12 = *(undefined8 *)Method_System_Linq_Enumerable_ToList<EdgeLookup>__;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar12 = FUN_01780344(uVar12,0);
      uVar4 = FUN_01789ac0(uVar11,uVar12,0);
      puVar2 = Newtonsoft_Json_JsonReader_State_TypeInfo;
      if ((uVar4 & 1) == 0) {
        uVar12 = *(undefined8 *)StringLiteral_5228;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar12 = FUN_01780344(uVar12,0);
        uVar4 = FUN_01789ac0(uVar11,uVar12,0);
        puVar2 = Method_System_Data_Common_UInt32Storage_Aggregate__;
        if ((uVar4 & 1) == 0) {
          uVar12 = *(undefined8 *)
                    Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar12 = FUN_01780344(uVar12,0);
          uVar4 = FUN_01789ac0(uVar11,uVar12,0);
          puVar2 = Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__;
          if ((uVar4 & 1) == 0) {
            uVar12 = *(undefined8 *)Method_System_Data_DataSet_ReadXmlDiffgram__;
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar12 = FUN_01780344(uVar12,0);
            uVar4 = FUN_01789ac0(uVar11,uVar12,0);
            puVar2 = OVRSpectatorModeDomeTest_<TimerCoroutine>d__20_TypeInfo;
            if ((uVar4 & 1) == 0) {
              uVar12 = *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmovl_u8__;
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar12 = FUN_01780344(uVar12,0);
              uVar4 = FUN_01789ac0(uVar11,uVar12,0);
              puVar2 = 
              Method_System_Threading_Tasks_Task<DestructibleMeshComponent_MeshSegmentationResult>_ContinueWith__
              ;
              if ((uVar4 & 1) == 0) {
                uVar12 = *(undefined8 *)StringLiteral_6673;
                if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                uVar12 = FUN_01780344(uVar12,0);
                uVar4 = FUN_01789ac0(uVar11,uVar12,0);
                puVar2 = Method_TMPro_SetPropertyUtility_SetStruct<char>__;
                if ((uVar4 & 1) == 0) {
                  uVar12 = *(undefined8 *)
                            Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
                  ;
                  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  uVar12 = FUN_01780344(uVar12,0);
                  uVar4 = FUN_01789ac0(uVar11,uVar12,0);
                  puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vtrn1_s16__;
                  if ((uVar4 & 1) == 0) {
                    uVar12 = *(undefined8 *)
                              System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                    ;
                    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    uVar12 = FUN_01780344(uVar12,0);
                    uVar4 = FUN_01789ac0(uVar11,uVar12,0);
                    puVar2 = System_Runtime_InteropServices_InAttribute_TypeInfo;
                    if ((uVar4 & 1) == 0) {
                      uVar12 = *(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_9__;
                      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                      }
                      uVar12 = FUN_01780344(uVar12,0);
                      uVar4 = FUN_01789ac0(uVar11,uVar12,0);
                      puVar1 = PTR_DAT_033f2f78;
                      if ((uVar4 & 1) == 0) goto LAB_01defc74;
                      plVar5 = *(long **)(param_1 + 0x50);
                      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                      }
                      if (*(long *)(*param_3 + 0x40) != *(long *)(*(long *)puVar1 + 0x40))
                      goto LAB_01defc6c;
                      puVar10 = (undefined8 *)thunk_FUN_00d624a0(param_3);
                      param_3 = (long *)FUN_016f55f8(*puVar10,0);
                    }
                    else {
                      plVar5 = *(long **)(param_1 + 0x50);
                      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                      }
                      if (*(long *)(*param_3 + 0x40) != *(long *)(*(long *)puVar2 + 0x40))
                      goto LAB_01defc6c;
                      puVar9 = (undefined4 *)thunk_FUN_00d624a0(param_3);
                      param_3 = (long *)FUN_016f558c(*puVar9,0);
                    }
                  }
                  else {
                    plVar5 = *(long **)(param_1 + 0x50);
                    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    if (*(long *)(*param_3 + 0x40) != *(long *)(*(long *)puVar2 + 0x40))
                    goto LAB_01defc6c;
                    puVar10 = (undefined8 *)thunk_FUN_00d624a0(param_3);
                    param_3 = (long *)FUN_016f5528(*puVar10,0);
                  }
                }
                else {
                  plVar5 = *(long **)(param_1 + 0x50);
                  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  if (*(long *)(*param_3 + 0x40) != *(long *)(*(long *)puVar2 + 0x40))
                  goto LAB_01defc6c;
                  puVar9 = (undefined4 *)thunk_FUN_00d624a0(param_3);
                  param_3 = (long *)FUN_016f5440(*puVar9,0);
                }
              }
              else {
                plVar5 = *(long **)(param_1 + 0x50);
                if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                if (*(long *)(*param_3 + 0x40) != *(long *)(*(long *)puVar2 + 0x40))
                goto LAB_01defc6c;
                puVar8 = (undefined2 *)thunk_FUN_00d624a0(param_3);
                param_3 = (long *)FUN_016f53dc(*puVar8,0);
              }
            }
            else {
              plVar5 = *(long **)(param_1 + 0x50);
              if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              if (*(long *)(*param_3 + 0x40) != *(long *)(*(long *)puVar2 + 0x40))
              goto LAB_01defc6c;
              puVar10 = (undefined8 *)thunk_FUN_00d624a0(param_3);
              param_3 = (long *)FUN_016f5378(*puVar10,0);
            }
          }
          else {
            plVar5 = *(long **)(param_1 + 0x50);
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            if (*(long *)(*param_3 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) goto LAB_01defc6c;
            puVar9 = (undefined4 *)thunk_FUN_00d624a0(param_3);
            param_3 = (long *)FUN_016f5314(*puVar9,0);
          }
        }
        else {
          plVar5 = *(long **)(param_1 + 0x50);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          if (*(long *)(*param_3 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) goto LAB_01defc6c;
          puVar8 = (undefined2 *)thunk_FUN_00d624a0(param_3);
          param_3 = (long *)FUN_016f52b0(*puVar8,0);
        }
      }
      else {
        plVar5 = *(long **)(param_1 + 0x50);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (*(long *)(*param_3 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) goto LAB_01defc6c;
        puVar8 = (undefined2 *)thunk_FUN_00d624a0(param_3);
        param_3 = (long *)FUN_016f524c(*puVar8,0);
      }
    }
    else {
      plVar5 = *(long **)(param_1 + 0x50);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (*(long *)(*param_3 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) {
LAB_01defc6c:
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(param_3);
      }
      puVar7 = (undefined1 *)thunk_FUN_00d624a0(param_3);
      param_3 = (long *)FUN_016f51e4(*puVar7,0);
    }
  }
  else {
LAB_01def540:
    plVar5 = *(long **)(param_1 + 0x50);
  }
joined_r0x01def544:
  if (plVar5 == (long *)0x0) {
LAB_01def690:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if ((param_3 != (long *)0x0) &&
     (lVar6 = thunk_FUN_00d6225c(param_3,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0)) {
    uVar11 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar11,0);
  }
  if (param_2 < *(uint *)(plVar5 + 3)) {
    plVar5[(long)(int)param_2 + 4] = (long)param_3;
    return;
  }
LAB_01defc5c:
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


