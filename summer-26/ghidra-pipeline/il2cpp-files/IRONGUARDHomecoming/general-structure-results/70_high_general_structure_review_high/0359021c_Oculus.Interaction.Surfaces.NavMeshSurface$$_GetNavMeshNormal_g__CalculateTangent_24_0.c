/*
FUNCTION_NAME: Oculus.Interaction.Surfaces.NavMeshSurface$$<GetNavMeshNormal>g__CalculateTangent|24_0
ENTRY_POINT: 0359021c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Oculus_Interaction_Surfaces_NavMeshSurface__<GetNavMeshNormal>g__CalculateTangent_24_0(void)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar6;
  int iVar7;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  undefined8 uVar8;
  undefined *puVar5;
  
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  if (unaff_x21 == (long *)0x0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
    uVar6 = thunk_FUN_01f117cc();
    uVar8 = thunk_FUN_01efb3a4(
                              Method_Unity_VisualScripting_Antlr3_Runtime_TokenRewriteStream_ReduceToSingleOperationPerIndex__
                              );
    uVar4 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vrev64q_s16__);
    FUN_034efd98(uVar6,uVar8,uVar4,0);
  }
  else {
    uVar8 = *(undefined8 *)Method_UnityEngine_Component_GetComponent<Point>__;
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_03579868(uVar8);
    uVar3 = (**(code **)(*unaff_x21 + 0x948))();
    if ((uVar3 & 1) == 0) {
      uVar3 = (**(code **)(*unaff_x21 + 0x288))();
      if ((uVar3 & 1) == 0) {
        iVar1 = *(int *)(unaff_x20 + 0x18);
        if (iVar1 < 1) {
          thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
          uVar6 = thunk_FUN_01f117cc();
          puVar5 = Method_Unity_Burst_Intrinsics_Arm_Neon_vrshrn_high_n_u32__;
        }
        else {
          if (iVar1 == *(int *)(unaff_x19 + 0x18)) {
            iVar7 = 0;
            do {
              if (iVar1 == iVar7) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              uVar2 = *(uint *)(unaff_x20 + (long)iVar7 * 4 + 0x20);
              if ((int)uVar2 < 0) {
                thunk_FUN_01efb3a4(
                                  Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__
                                  );
                uVar6 = thunk_FUN_01f117cc();
                uVar8 = thunk_FUN_01efb3a4(
                                          Method_System_Text_DecoderFallbackBuffer_ThrowLastBytesRecursive__
                                          );
                puVar5 = Method_Unity_Burst_Intrinsics_Arm_Neon_vrshrn_high_n_s16__;
LAB_03590364:
                uVar4 = thunk_FUN_01efb3a4(puVar5);
                FUN_034f3578(uVar6,uVar8,uVar4,0);
                goto LAB_0359037c;
              }
              if (0x7fffffff <
                  (long)((long)*(int *)(unaff_x19 + (long)iVar7 * 4 + 0x20) + (ulong)uVar2)) {
                thunk_FUN_01efb3a4(
                                  Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__
                                  );
                uVar6 = thunk_FUN_01f117cc();
                uVar8 = thunk_FUN_01efb3a4(
                                          Method_System_Text_DecoderFallbackBuffer_ThrowLastBytesRecursive__
                                          );
                puVar5 = Method_Unity_Burst_Intrinsics_Arm_Neon_vrshrn_high_n_s32__;
                goto LAB_03590364;
              }
              iVar7 = iVar7 + 1;
            } while (iVar1 != iVar7);
            if (iVar1 < 0x100) {
              FUN_01ec9f4c();
              return;
            }
            thunk_FUN_01efb3a4(
                              Method_UnityEngine_SubsystemsImplementation_SubsystemDescriptorStore_RegisterDescriptor<SubsystemDescriptor,_SubsystemDescriptor>__
                              );
            uVar6 = thunk_FUN_01f117cc();
            FUN_035ad208(uVar6,0);
            goto LAB_0359037c;
          }
          thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
          uVar6 = thunk_FUN_01f117cc();
          puVar5 = Method_Unity_Burst_Intrinsics_Arm_Neon_vrshrn_high_n_u64__;
        }
        uVar8 = thunk_FUN_01efb3a4(puVar5);
        FUN_034f6754(uVar6,uVar8,0);
        goto LAB_0359037c;
      }
      thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<double2>__ctor__);
      uVar6 = thunk_FUN_01f117cc();
      puVar5 = Method_Unity_Burst_Intrinsics_Arm_Neon_vrev64q_s8__;
    }
    else {
      thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<double2>__ctor__);
      uVar6 = thunk_FUN_01f117cc();
      puVar5 = Method_Unity_Burst_Intrinsics_Arm_Neon_vrev64q_s32__;
    }
    uVar8 = thunk_FUN_01efb3a4(puVar5);
    FUN_0356663c(uVar6,uVar8,0);
  }
LAB_0359037c:
  uVar8 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vrshrn_high_n_s64__);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar6,uVar8);
}


