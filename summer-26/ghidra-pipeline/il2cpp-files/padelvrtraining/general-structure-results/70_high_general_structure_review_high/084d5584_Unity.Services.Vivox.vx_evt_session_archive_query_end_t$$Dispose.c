/*
FUNCTION_NAME: Unity.Services.Vivox.vx_evt_session_archive_query_end_t$$Dispose
ENTRY_POINT: 084d5584
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Services_Vivox_vx_evt_session_archive_query_end_t__Dispose(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *unaff_x23;
  
  uVar2 = FUN_062f9944(&stack0x00000008,*(undefined8 *)PTR_DAT_09280a28);
  if (unaff_x20 != 0) {
    FUN_084d2ee8();
    *unaff_x19 = 0xfffffffe;
    puVar1 = PTR_DAT_09280a18;
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    FUN_062285f0(unaff_x19 + 2,uVar2,*(undefined8 *)puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


