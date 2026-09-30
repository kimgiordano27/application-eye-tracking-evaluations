/*
FUNCTION_NAME: thunk_FUN_03590154
ENTRY_POINT: 03590150
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_8;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void thunk_FUN_03590154(long *param_1,long param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar8;
  int iVar9;
  undefined8 uVar10;
  undefined *puVar7;
  
  puVar7 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  if ((DAT_0483346c & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Burst_BurstRuntime_GetUTF8LiteralPointer__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<Point>__);
    DAT_0483346c = 1;
  }
  if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  if (param_1 == (long *)0x0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar10 = thunk_FUN_01f117cc();
    puVar7 = Method_Unity_Burst_Intrinsics_Arm_Neon_vrev64q_s16__;
  }
  else if (param_2 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar10 = thunk_FUN_01f117cc();
    puVar7 = Method_System_Text_DecoderFallbackBuffer_ThrowLastBytesRecursive__;
  }
  else {
    if (param_3 != 0) {
      plVar4 = (long *)(**(code **)(*param_1 + 0x328))(param_1,*(undefined8 *)(*param_1 + 0x330));
      if (plVar4 == (long *)0x0) {
LAB_03590200:
        plVar4 = (long *)0x0;
      }
      else {
        bVar3 = *(byte *)(*(long *)Method_Unity_Burst_BurstRuntime_GetUTF8LiteralPointer__ + 0x130);
        if (*(byte *)(*plVar4 + 0x130) < bVar3) goto LAB_03590200;
        if (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar3 * 8 + -8) !=
            *(long *)Method_Unity_Burst_BurstRuntime_GetUTF8LiteralPointer__) {
          plVar4 = (long *)0x0;
        }
      }
      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      if (plVar4 == (long *)0x0) {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
        uVar10 = thunk_FUN_01f117cc();
        uVar8 = thunk_FUN_01efb3a4(
                                  Method_Unity_VisualScripting_Antlr3_Runtime_TokenRewriteStream_ReduceToSingleOperationPerIndex__
                                  );
        uVar6 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vrev64q_s16__);
        FUN_034efd98(uVar10,uVar8,uVar6,0);
      }
      else {
        uVar10 = *(undefined8 *)Method_UnityEngine_Component_GetComponent<Point>__;
        if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar10 = FUN_03579868(uVar10);
        uVar5 = (**(code **)(*plVar4 + 0x948))(plVar4,uVar10,*(undefined8 *)(*plVar4 + 0x950));
        if ((uVar5 & 1) == 0) {
          uVar5 = (**(code **)(*plVar4 + 0x288))(plVar4,*(undefined8 *)(*plVar4 + 0x290));
          if ((uVar5 & 1) == 0) {
            iVar1 = *(int *)(param_2 + 0x18);
            if (iVar1 < 1) {
              thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
              uVar10 = thunk_FUN_01f117cc();
              puVar7 = Method_Unity_Burst_Intrinsics_Arm_Neon_vrshrn_high_n_u32__;
            }
            else {
              if (iVar1 == *(int *)(param_3 + 0x18)) {
                iVar9 = 0;
                do {
                  if (iVar1 == iVar9) {
                    /* WARNING: Subroutine does not return */
                    FUN_01f08a44();
                  }
                  uVar2 = *(uint *)(param_2 + (long)iVar9 * 4 + 0x20);
                  if ((int)uVar2 < 0) {
                    thunk_FUN_01efb3a4(
                                      Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__
                                      );
                    uVar10 = thunk_FUN_01f117cc();
                    uVar8 = thunk_FUN_01efb3a4(
                                              Method_System_Text_DecoderFallbackBuffer_ThrowLastBytesRecursive__
                                              );
                    puVar7 = Method_Unity_Burst_Intrinsics_Arm_Neon_vrshrn_high_n_s16__;
LAB_03590364:
                    uVar6 = thunk_FUN_01efb3a4(puVar7);
                    FUN_034f3578(uVar10,uVar8,uVar6,0);
                    goto LAB_0359037c;
                  }
                  if (0x7fffffff <
                      (long)((long)*(int *)(param_3 + (long)iVar9 * 4 + 0x20) + (ulong)uVar2)) {
                    thunk_FUN_01efb3a4(
                                      Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__
                                      );
                    uVar10 = thunk_FUN_01f117cc();
                    uVar8 = thunk_FUN_01efb3a4(
                                              Method_System_Text_DecoderFallbackBuffer_ThrowLastBytesRecursive__
                                              );
                    puVar7 = Method_Unity_Burst_Intrinsics_Arm_Neon_vrshrn_high_n_s32__;
                    goto LAB_03590364;
                  }
                  iVar9 = iVar9 + 1;
                } while (iVar1 != iVar9);
                if (iVar1 < 0x100) {
                  FUN_01ec9f4c(plVar4,param_2,param_3);
                  return;
                }
                thunk_FUN_01efb3a4(
                                  Method_UnityEngine_SubsystemsImplementation_SubsystemDescriptorStore_RegisterDescriptor<SubsystemDescriptor,_SubsystemDescriptor>__
                                  );
                uVar10 = thunk_FUN_01f117cc();
                FUN_035ad208(uVar10,0);
                goto LAB_0359037c;
              }
              thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
              uVar10 = thunk_FUN_01f117cc();
              puVar7 = Method_Unity_Burst_Intrinsics_Arm_Neon_vrshrn_high_n_u64__;
            }
            uVar8 = thunk_FUN_01efb3a4(puVar7);
            FUN_034f6754(uVar10,uVar8,0);
            goto LAB_0359037c;
          }
          thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<double2>__ctor__);
          uVar10 = thunk_FUN_01f117cc();
          puVar7 = Method_Unity_Burst_Intrinsics_Arm_Neon_vrev64q_s8__;
        }
        else {
          thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<double2>__ctor__);
          uVar10 = thunk_FUN_01f117cc();
          puVar7 = Method_Unity_Burst_Intrinsics_Arm_Neon_vrev64q_s32__;
        }
        uVar8 = thunk_FUN_01efb3a4(puVar7);
        FUN_0356663c(uVar10,uVar8,0);
      }
      goto LAB_0359037c;
    }
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar10 = thunk_FUN_01f117cc();
    puVar7 = Method_Unity_Burst_Intrinsics_Arm_Neon_vrshrn_high_n_u16__;
  }
  uVar8 = thunk_FUN_01efb3a4(puVar7);
  FUN_034efd20(uVar10,uVar8,0);
LAB_0359037c:
  uVar8 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vrshrn_high_n_s64__);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar10,uVar8);
}


