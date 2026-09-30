/*
FUNCTION_NAME: Unity.Services.Vivox.vx_evt_session_archive_query_end_t$$Dispose
ENTRY_POINT: 081bf7ec
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Services_Vivox_vx_evt_session_archive_query_end_t__Dispose(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long unaff_x19;
  long unaff_x20;
  long unaff_x23;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x28;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  if (unaff_x23 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb28();
  }
  uVar3 = FUN_08826c6c();
  lVar4 = FUN_06f683f8(uVar3,*unaff_x28,0);
  puVar2 = PTR_DAT_08e7cd00;
  if (unaff_x20 != 0) {
    FUN_05213710(&stack0x00000008);
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000018;
    while (uVar5 = FUN_049dc4d0(&stack0x00000020,*unaff_x26), (uVar5 & 1) != 0) {
      uVar3 = FUN_08826c6c(in_stack_00000030,0);
      lVar4 = FUN_06f7465c(lVar4,uVar3,*(undefined8 *)puVar2,0);
    }
    FUN_049dc4cc(&stack0x00000020,*unaff_x25);
    if ((lVar4 != 0) && (uVar3 = FUN_06f76444(lVar4,*(int *)(lVar4 + 0x10) + -1,0), unaff_x19 != 0))
    {
      lVar4 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar4 != 0) {
        uVar1 = *(uint *)(unaff_x19 + 0x18);
        if (uVar1 < *(uint *)(lVar4 + 0x18)) {
          *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) = uVar3;
          thunk_FUN_03d233cc();
        }
        else {
          FUN_05212cf4();
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


