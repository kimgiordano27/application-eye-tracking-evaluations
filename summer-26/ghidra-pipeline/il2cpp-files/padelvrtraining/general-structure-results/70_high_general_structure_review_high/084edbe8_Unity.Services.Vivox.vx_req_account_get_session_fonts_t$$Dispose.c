/*
FUNCTION_NAME: Unity.Services.Vivox.vx_req_account_get_session_fonts_t$$Dispose
ENTRY_POINT: 084edbe8
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


void Unity_Services_Vivox_vx_req_account_get_session_fonts_t__Dispose(void)

{
  undefined *puVar1;
  long lVar2;
  undefined1 in_w8;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  
  *(undefined1 *)(unaff_x21 + 0x3ab) = in_w8;
  lVar2 = thunk_FUN_03d2ef40(*unaff_x22);
  FUN_06acd318(lVar2,*unaff_x20);
  puVar1 = PTR_DAT_0927cc88;
  if (lVar2 != 0) {
    FUN_06ace120(lVar2,0x198,1,*(undefined8 *)PTR_DAT_0927cc88);
    FUN_06ace120(lVar2,0x1ad,1,*(undefined8 *)puVar1);
    FUN_06ace120(lVar2,0x1f6,1,*(undefined8 *)puVar1);
    FUN_06ace120(lVar2,0x1f7,1,*(undefined8 *)puVar1);
    FUN_06ace120(lVar2,0x1f8,1,*(undefined8 *)puVar1);
    *(long *)(unaff_x19 + 0x10) = lVar2;
    thunk_FUN_03d1023c((long *)(unaff_x19 + 0x10),lVar2);
    FUN_071bc31c();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


