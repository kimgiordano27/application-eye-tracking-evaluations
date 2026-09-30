/*
FUNCTION_NAME: FUN_01dde2a0
ENTRY_POINT: 01dde2a0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_01dde2a0(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined2 *puVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  
  if ((DAT_0377f8e3 & 1) == 0) {
    thunk_FUN_00d48444(System_Collections_Generic_List<LogEntry>_TypeInfo);
    thunk_FUN_00d48444(System_ComponentModel_ListBindableAttribute_TypeInfo);
    thunk_FUN_00d48444(Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__);
    thunk_FUN_00d48444(UnityEngine_Texture2D___TypeInfo);
    thunk_FUN_00d48444(StringLiteral_5228);
    thunk_FUN_00d48444(Method_System_Data_Common_UInt32Storage_Aggregate__);
    thunk_FUN_00d48444(Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__);
    thunk_FUN_00d48444(Method_System_Data_DataSet_ReadXmlDiffgram__);
    thunk_FUN_00d48444(OVRSpectatorModeDomeTest_<TimerCoroutine>d__20_TypeInfo);
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_50_0_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_7239);
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
    DAT_0377f8e3 = 1;
  }
  puVar3 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  puVar1 = System_Collections_Generic_List<LogEntry>_TypeInfo;
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  uVar5 = thunk_FUN_00d93c64(param_1,0);
  uVar11 = *(undefined8 *)puVar1;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar3);
  }
  puVar1 = System_ComponentModel_ListBindableAttribute_TypeInfo;
  uVar11 = FUN_01780344(uVar11,0);
  uVar6 = FUN_01789ac0(uVar5,uVar11,0);
  puVar2 = Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__;
  if ((uVar6 & 1) == 0) {
    uVar5 = thunk_FUN_00d93c64(param_1,0);
    uVar11 = *(undefined8 *)puVar2;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar3);
    }
    uVar11 = FUN_01780344(uVar11,0);
    uVar6 = FUN_01789ac0(uVar5,uVar11,0);
    puVar4 = Method_System_Data_DataSet_ReadXmlDiffgram__;
    puVar2 = System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo;
    if ((uVar6 & 1) == 0) {
      uVar5 = thunk_FUN_00d93c64(param_1,0);
      uVar11 = *(undefined8 *)puVar4;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar3);
      }
      uVar11 = FUN_01780344(uVar11,0);
      uVar6 = FUN_01789ac0(uVar5,uVar11,0);
      puVar4 = Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__;
      puVar2 = OVRSpectatorModeDomeTest_<TimerCoroutine>d__20_TypeInfo;
      if ((uVar6 & 1) == 0) {
        uVar5 = thunk_FUN_00d93c64(param_1,0);
        uVar11 = *(undefined8 *)puVar4;
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar3);
        }
        uVar11 = FUN_01780344(uVar11,0);
        uVar6 = FUN_01789ac0(uVar5,uVar11,0);
        puVar4 = StringLiteral_5228;
        puVar2 = Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__;
        if ((uVar6 & 1) == 0) {
          uVar5 = thunk_FUN_00d93c64(param_1,0);
          uVar11 = *(undefined8 *)puVar4;
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)puVar3);
          }
          uVar11 = FUN_01780344(uVar11,0);
          uVar6 = FUN_01789ac0(uVar5,uVar11,0);
          puVar4 = Method_System_Data_Common_UInt32Storage_Aggregate__;
          puVar2 = OVRPlugin_OVRP_1_50_0_TypeInfo;
          if ((uVar6 & 1) == 0) {
            uVar5 = thunk_FUN_00d93c64(param_1,0);
            uVar11 = *(undefined8 *)puVar2;
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)puVar3);
            }
            uVar11 = FUN_01780344(uVar11,0);
            uVar6 = FUN_01789ac0(uVar5,uVar11,0);
            puVar4 = StringLiteral_7239;
            puVar2 = 
            Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__;
            if ((uVar6 & 1) == 0) {
              uVar5 = thunk_FUN_00d93c64(param_1,0);
              uVar11 = *(undefined8 *)puVar2;
              if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                thunk_FUN_00d32864(*(long *)puVar3);
              }
              uVar11 = FUN_01780344(uVar11,0);
              uVar6 = FUN_01789ac0(uVar5,uVar11,0);
              puVar4 = StringLiteral_6673;
              puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vtrn1_s16__;
              if ((uVar6 & 1) == 0) {
                uVar5 = thunk_FUN_00d93c64(param_1,0);
                uVar11 = *(undefined8 *)puVar4;
                if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                  thunk_FUN_00d32864(*(long *)puVar3);
                }
                uVar11 = FUN_01780344(uVar11,0);
                uVar6 = FUN_01789ac0(uVar5,uVar11,0);
                puVar4 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmovl_u8__;
                puVar2 = Method_TMPro_SetPropertyUtility_SetStruct<char>__;
                if ((uVar6 & 1) == 0) {
                  uVar5 = thunk_FUN_00d93c64(param_1,0);
                  uVar11 = *(undefined8 *)puVar4;
                  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                    thunk_FUN_00d32864(*(long *)puVar3);
                  }
                  uVar11 = FUN_01780344(uVar11,0);
                  uVar6 = FUN_01789ac0(uVar5,uVar11,0);
                  puVar4 = Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__;
                  puVar2 = 
                  Method_System_Threading_Tasks_Task<DestructibleMeshComponent_MeshSegmentationResult>_ContinueWith__
                  ;
                  if ((uVar6 & 1) == 0) {
                    uVar5 = thunk_FUN_00d93c64(param_1,0);
                    uVar11 = *(undefined8 *)puVar4;
                    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                      thunk_FUN_00d32864(*(long *)puVar3);
                    }
                    uVar11 = FUN_01780344(uVar11,0);
                    uVar6 = FUN_01789ac0(uVar5,uVar11,0);
                    puVar3 = UnityEngine_Texture2D___TypeInfo;
                    if ((uVar6 & 1) == 0) {
                      FUN_00ac2be8(param_1);
                      uVar5 = thunk_FUN_00d93c64(param_1,0);
                      uVar11 = thunk_FUN_00d48444(System_Collections_Generic_List<LogEntry>_TypeInfo
                                                 );
                      thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
                      FUN_00acb0a4();
                      uVar11 = FUN_01780344(uVar11,0);
                      uVar5 = FUN_01d35170(uVar5,uVar11,0);
                      uVar11 = thunk_FUN_00d48444(
                                                 Method_System_Collections_Generic_List<MRUKAnchor>__ctor__
                                                 );
                    /* WARNING: Subroutine does not return */
                      FUN_00da5038(uVar5,uVar11);
                    }
                    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    if (*(long *)(*param_1 + 0x40) != *(long *)(*(long *)puVar3 + 0x40))
                    goto LAB_01dde9bc;
                    puVar10 = (undefined1 *)thunk_FUN_00d624a0(param_1);
                    uVar5 = FUN_01e19900(*puVar10,0);
                  }
                  else {
                    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    if (*(long *)(*param_1 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) {
LAB_01dde9bc:
                    /* WARNING: Subroutine does not return */
                      FUN_00da544c(param_1);
                    }
                    puVar9 = (undefined2 *)thunk_FUN_00d624a0(param_1);
                    uVar5 = FUN_01e19978(*puVar9,0);
                  }
                }
                else {
                  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  if (*(long *)(*param_1 + 0x40) != *(long *)(*(long *)puVar2 + 0x40))
                  goto LAB_01dde9bc;
                  puVar8 = (undefined4 *)thunk_FUN_00d624a0(param_1);
                  uVar5 = FUN_01e199c8(*puVar8,0);
                }
              }
              else {
                if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                if (*(long *)(*param_1 + 0x40) != *(long *)(*(long *)puVar2 + 0x40))
                goto LAB_01dde9bc;
                puVar7 = (undefined8 *)thunk_FUN_00d624a0(param_1);
                uVar5 = FUN_01e17600(*puVar7,0);
              }
            }
            else {
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              if (*(long *)(*param_1 + 0x40) != *(long *)(*(long *)puVar4 + 0x40))
              goto LAB_01dde9bc;
              puVar10 = (undefined1 *)thunk_FUN_00d624a0(param_1);
              uVar5 = FUN_01e19928(*puVar10,0);
            }
          }
          else {
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            if (*(long *)(*param_1 + 0x40) != *(long *)(*(long *)puVar4 + 0x40)) goto LAB_01dde9bc;
            puVar9 = (undefined2 *)thunk_FUN_00d624a0(param_1);
            uVar5 = FUN_01e19950(*puVar9,0);
          }
        }
        else {
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          if (*(long *)(*param_1 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) goto LAB_01dde9bc;
          puVar8 = (undefined4 *)thunk_FUN_00d624a0(param_1);
          uVar5 = FUN_01e199a0(*puVar8,0);
        }
      }
      else {
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (*(long *)(*param_1 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) goto LAB_01dde9bc;
        puVar7 = (undefined8 *)thunk_FUN_00d624a0(param_1);
        uVar5 = FUN_01e19298(*puVar7,0);
      }
    }
    else {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (*param_1 != *(long *)puVar2) goto LAB_01dde9bc;
      uVar5 = FUN_01e18210(param_1,param_2,0);
    }
  }
  else {
    if (*(long *)(*param_1 + 0x40) != *(long *)(*(long *)puVar1 + 0x40)) goto LAB_01dde9bc;
    puVar7 = (undefined8 *)thunk_FUN_00d624a0(param_1);
    uVar5 = *puVar7;
  }
  return uVar5;
}


