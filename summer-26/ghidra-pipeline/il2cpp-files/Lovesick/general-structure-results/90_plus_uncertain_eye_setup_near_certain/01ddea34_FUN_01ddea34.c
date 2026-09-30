/*
FUNCTION_NAME: FUN_01ddea34
ENTRY_POINT: 01ddea34
PROGRAM: Lovesick-libil2cpp.so
SCORE: 133
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_01ddea34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70 [16];
  long local_58;
  
  puVar4 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  puVar3 = Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_80 = param_1;
  uStack_78 = param_2;
  if ((DAT_0377f8e4 & 1) == 0) {
    thunk_FUN_00d48444(System_Collections_Generic_List<LogEntry>_TypeInfo);
    thunk_FUN_00d48444(System_ComponentModel_ListBindableAttribute_TypeInfo);
    thunk_FUN_00d48444(Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__);
    thunk_FUN_00d48444(UnityEngine_Texture2D___TypeInfo);
                    /* try { // try from 01ddeab8 to 01edeadf has its CatchHandler @ 01ddf11c */
    thunk_FUN_00d48444(Method_Sirenix_Serialization_Serializer<byte>__ctor__);
    thunk_FUN_00d48444(System_Collections_Generic_IList<ProBuilderMesh>_TypeInfo);
    thunk_FUN_00d48444(Method_OVRControllerTest_<>c_<Start>b__4_9__);
    thunk_FUN_00d48444(PTR_DAT_033f2f78);
    thunk_FUN_00d48444(StringLiteral_5228);
    thunk_FUN_00d48444(Method_System_Data_Common_UInt32Storage_Aggregate__);
    thunk_FUN_00d48444(Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__);
                    /* try { // try from 01ddeb1c to 01edeb43 has its CatchHandler @ 01ddf118 */
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
                    /* try { // try from 01ddeb6c to 01edeb6f has its CatchHandler @ 01ddf0b8 */
                    /* try { // try from 01ddeb70 to 01edeb7b has its CatchHandler @ 01ddf0bc */
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmovl_u8__);
                    /* try { // try from 01ddeb8c to 01edeb8f has its CatchHandler @ 01ddf100 */
    thunk_FUN_00d48444(
                      Method_System_Threading_Tasks_Task<DestructibleMeshComponent_MeshSegmentationResult>_ContinueWith__
                      );
                    /* try { // try from 01ddeb98 to 01edeba7 has its CatchHandler @ 01ddf10c */
    thunk_FUN_00d48444(StringLiteral_6673);
    thunk_FUN_00d48444(Method_TMPro_SetPropertyUtility_SetStruct<char>__);
    thunk_FUN_00d48444(
                      Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
                      );
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vtrn1_s16__);
                    /* try { // try from 01ddebc4 to 01edebcb has its CatchHandler @ 01ddf108 */
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<string>__ctor__);
    DAT_0377f8e4 = 1;
  }
                    /* try { // try from 01ddebd4 to 01edebdf has its CatchHandler @ 01ddf114 */
  uVar10 = *(undefined8 *)puVar3;
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
                    /* try { // try from 01ddebe8 to 01edebeb has its CatchHandler @ 01ddf0d8 */
  puVar3 = System_ComponentModel_ListBindableAttribute_TypeInfo;
                    /* try { // try from 01ddebf4 to 01edebf7 has its CatchHandler @ 01ddf0dc */
  uVar10 = FUN_01780344(uVar10,0);
                    /* try { // try from 01ddec04 to 01edec07 has its CatchHandler @ 01ddf0e4 */
  uVar7 = FUN_01789ac0(param_3,uVar10,0);
  puVar2 = Method_System_Collections_Generic_List<string>__ctor__;
                    /* try { // try from 01ddec0c to 01edec1b has its CatchHandler @ 01ddf0e0 */
  if ((uVar7 & 1) != 0) {
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_01e19114(&local_80,*(undefined8 *)puVar2,param_4,0);
    goto LAB_01ddee08;
  }
  uVar10 = *(undefined8 *)OVRPlugin_OVRP_1_50_0_TypeInfo;
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar10 = FUN_01780344(uVar10,0);
  uVar7 = FUN_01789ac0(param_3,uVar10,0);
  puVar9 = (undefined8 *)StringLiteral_7239;
  if ((uVar7 & 1) == 0) {
    uVar10 = *(undefined8 *)StringLiteral_5228;
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar10 = FUN_01780344(uVar10,0);
    uVar7 = FUN_01789ac0(param_3,uVar10,0);
    puVar9 = (undefined8 *)Method_System_Data_Common_UInt32Storage_Aggregate__;
    if ((uVar7 & 1) == 0) {
      uVar10 = *(undefined8 *)
                Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__;
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar10 = FUN_01780344(uVar10,0);
      uVar7 = FUN_01789ac0(param_3,uVar10,0);
      puVar9 = (undefined8 *)
               Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__;
      if ((uVar7 & 1) == 0) {
        uVar10 = *(undefined8 *)Method_System_Data_DataSet_ReadXmlDiffgram__;
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar10 = FUN_01780344(uVar10,0);
        uVar7 = FUN_01789ac0(param_3,uVar10,0);
        puVar9 = (undefined8 *)OVRSpectatorModeDomeTest_<TimerCoroutine>d__20_TypeInfo;
        if ((uVar7 & 1) == 0) {
          uVar10 = *(undefined8 *)
                    Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__;
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar10 = FUN_01780344(uVar10,0);
          uVar7 = FUN_01789ac0(param_3,uVar10,0);
          puVar9 = (undefined8 *)UnityEngine_Texture2D___TypeInfo;
          if ((uVar7 & 1) != 0) {
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar5 = FUN_01e199f0(param_1,param_2,0);
            goto LAB_01ddeca4;
          }
          uVar10 = *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmovl_u8__;
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar10 = FUN_01780344(uVar10,0);
          uVar7 = FUN_01789ac0(param_3,uVar10,0);
          puVar9 = (undefined8 *)
                   Method_System_Threading_Tasks_Task<DestructibleMeshComponent_MeshSegmentationResult>_ContinueWith__
          ;
          if ((uVar7 & 1) != 0) {
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar6 = FUN_01e19c7c(param_1,param_2,0);
            goto LAB_01dded14;
          }
          uVar10 = *(undefined8 *)StringLiteral_6673;
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar10 = FUN_01780344(uVar10,0);
          uVar7 = FUN_01789ac0(param_3,uVar10,0);
          puVar9 = (undefined8 *)Method_TMPro_SetPropertyUtility_SetStruct<char>__;
          if ((uVar7 & 1) != 0) {
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            local_70._0_4_ = FUN_01e19d0c(param_1,param_2,0);
            goto LAB_01dded84;
          }
          uVar10 = *(undefined8 *)
                    Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
          ;
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar10 = FUN_01780344(uVar10,0);
          uVar7 = FUN_01789ac0(param_3,uVar10,0);
          puVar9 = (undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vtrn1_s16__;
          if ((uVar7 & 1) != 0) {
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar10 = FUN_01e19e68(param_1,param_2,0);
            goto LAB_01ddedf4;
          }
          uVar10 = *(undefined8 *)
                    System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
          ;
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar10 = FUN_01780344(uVar10,0);
          uVar7 = FUN_01789ac0(param_3,uVar10,0);
          puVar2 = System_Runtime_InteropServices_InAttribute_TypeInfo;
          if ((uVar7 & 1) == 0) {
            uVar10 = *(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_9__;
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar10 = FUN_01780344(uVar10,0);
            uVar7 = FUN_01789ac0(param_3,uVar10,0);
            puVar2 = PTR_DAT_033f2f78;
            if ((uVar7 & 1) == 0) {
              uVar10 = *(undefined8 *)Method_Sirenix_Serialization_Serializer<byte>__ctor__;
              if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar10 = FUN_01780344(uVar10,0);
              uVar7 = FUN_01789ac0(param_3,uVar10,0);
              puVar2 = System_Collections_Generic_IList<ProBuilderMesh>_TypeInfo;
              if ((uVar7 & 1) == 0) {
                uVar10 = *(undefined8 *)System_Collections_Generic_List<LogEntry>_TypeInfo;
                if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                uVar10 = FUN_01780344(uVar10,0);
                uVar7 = FUN_01789ac0(param_3,uVar10,0);
                if ((uVar7 & 1) == 0) {
                  uVar10 = thunk_FUN_00d48444(System_Collections_Generic_List<LogEntry>_TypeInfo);
                  thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
                  FUN_00acb0a4();
                  uVar10 = FUN_01780344(uVar10,0);
                  uVar10 = FUN_01d35170(uVar10,param_3,0);
                  uVar8 = thunk_FUN_00d48444(
                                            UnityEngine_TextCore_Text_UnicodeLineBreakingRules_TypeInfo
                                            );
                    /* WARNING: Subroutine does not return */
                  FUN_00da5038(uVar10,uVar8);
                }
                uVar10 = *(undefined8 *)puVar3;
                local_70._8_8_ = uStack_78;
                local_70._0_8_ = local_80;
              }
              else {
                if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                local_70 = FUN_01e1a1ac(param_1,param_2,0);
                uVar10 = *(undefined8 *)puVar2;
              }
            }
            else {
              if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar10 = FUN_01e19f90(param_1,param_2,0);
              local_70._0_8_ = uVar10;
              uVar10 = *(undefined8 *)puVar2;
            }
          }
          else {
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            local_70._0_4_ = FUN_01e19f24(param_1,param_2,0);
            uVar10 = *(undefined8 *)puVar2;
          }
        }
        else {
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar10 = FUN_01e19db8(param_1,param_2,0);
LAB_01ddedf4:
          local_70._0_8_ = uVar10;
          uVar10 = *puVar9;
        }
      }
      else {
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        local_70._0_4_ = FUN_01e19a80(param_1,param_2,0);
LAB_01dded84:
        uVar10 = *puVar9;
      }
    }
    else {
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar6 = FUN_01e19bec(param_1,param_2,0);
LAB_01dded14:
      uVar10 = *puVar9;
      local_70._0_2_ = uVar6;
    }
  }
  else {
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar5 = FUN_01e19b5c(param_1,param_2,0);
LAB_01ddeca4:
    uVar10 = *puVar9;
    local_70[0] = uVar5;
  }
  thunk_FUN_00d61fa0(uVar10,local_70);
LAB_01ddee08:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


