/*
FUNCTION_NAME: Oculus.Interaction.Surfaces.NavMeshSurface$$ClosestSurfacePoint
ENTRY_POINT: 0358f8b4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Oculus_Interaction_Surfaces_NavMeshSurface__ClosestSurfacePoint
               (ulong param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long unaff_x21;
  long unaff_x22;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Utility_MonoBehaviourSingleton<OculusProvider>_get_Instance__);
    *(undefined1 *)(unaff_x22 + 0x462) = 1;
  }
  if (unaff_x21 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar4 = thunk_FUN_01f117cc();
    uVar5 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_Rendering_ConstantBuffer_Set<Hammersley_Hammersley2dSeq64>__
                              );
    FUN_034efd20(uVar4,uVar5,0);
  }
  else {
    iVar2 = FUN_01eca4a4(param_2);
    if (iVar2 == *(int *)(unaff_x21 + 0x18)) {
      lVar3 = FUN_01f08890(*(undefined8 *)
                            Method_Utility_MonoBehaviourSingleton<OculusProvider>_get_Instance__,
                           iVar2);
      uVar1 = *(uint *)(unaff_x21 + 0x18);
      if (0 < (int)uVar1) {
        lVar7 = 0;
        do {
          if (uVar1 <= (uint)lVar7) {
LAB_0358f964:
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          lVar8 = *(long *)(unaff_x21 + 0x20 + lVar7 * 8);
          iVar2 = (int)lVar8;
          if (lVar8 != iVar2) {
            thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__
                              );
            uVar4 = thunk_FUN_01f117cc();
            uVar5 = thunk_FUN_01efb3a4(
                                      Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                                      );
            uVar6 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vrev64_s16__);
            FUN_034f3578(uVar4,uVar5,uVar6,0);
            goto LAB_0358f9ac;
          }
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          if (*(uint *)(lVar3 + 0x18) <= (uint)lVar7) goto LAB_0358f964;
          *(int *)(lVar3 + 0x20 + lVar7 * 4) = iVar2;
          lVar7 = lVar7 + 1;
        } while ((int)lVar7 < (int)uVar1);
      }
      FUN_01eca684(param_2);
      return;
    }
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
    uVar4 = thunk_FUN_01f117cc();
    uVar5 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vrndq_f32__);
    FUN_034f6754(uVar4,uVar5,0);
  }
LAB_0358f9ac:
  uVar5 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vrshld_u64__);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar4,uVar5);
}


