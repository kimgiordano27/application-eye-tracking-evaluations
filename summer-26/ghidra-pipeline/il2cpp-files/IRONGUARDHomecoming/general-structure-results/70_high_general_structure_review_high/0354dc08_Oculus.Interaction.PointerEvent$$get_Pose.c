/*
FUNCTION_NAME: Oculus.Interaction.PointerEvent$$get_Pose
ENTRY_POINT: 0354dc08
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


undefined8 Oculus_Interaction_PointerEvent__get_Pose(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_x9;
  long unaff_x19;
  undefined8 uVar5;
  ulong unaff_x22;
  undefined8 in_stack_00000018;
  
  uVar5 = *(undefined8 *)(in_x9 + 0x18);
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(param_1);
  }
  lVar2 = FUN_034ef434(uVar5,2,0);
  if (*(int *)(*(long *)
                Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__
              + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)
                        Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__
                      );
  }
  uVar1 = lVar2 + unaff_x19;
  if ((long)uVar1 < 0) {
    uVar1 = uVar1 + 864000000000;
  }
  if (uVar1 < unaff_x22) {
    in_stack_00000018 = 0;
    FUN_0354c1a4(&stack0x00000018);
    return in_stack_00000018;
  }
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
  uVar5 = thunk_FUN_01f117cc();
  uVar3 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vneg_s8__);
  uVar4 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vmulx_laneq_f64__);
  FUN_034efd98(uVar5,uVar3,uVar4,0);
  uVar3 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vnegd_s64__);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar5,uVar3);
}


