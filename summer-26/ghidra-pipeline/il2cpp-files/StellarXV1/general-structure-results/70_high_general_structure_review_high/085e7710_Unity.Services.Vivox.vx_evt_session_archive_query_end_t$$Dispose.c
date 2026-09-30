/*
FUNCTION_NAME: Unity.Services.Vivox.vx_evt_session_archive_query_end_t$$Dispose
ENTRY_POINT: 085e7710
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Services_Vivox_vx_evt_session_archive_query_end_t__Dispose(void)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x23;
  undefined1 auVar5 [16];
  
  FUN_04077588(PTR_DAT_093321a8);
  *(undefined1 *)(unaff_x22 + 0xf50) = 1;
  lVar3 = thunk_FUN_040b4efc(*unaff_x23);
  auVar5 = FUN_076bca34(lVar3,0);
  puVar1 = PTR_DAT_093321a8;
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)PTR_DAT_093321a8;
    thunk_FUN_040ec700();
    *(undefined8 *)(lVar3 + 0x18) = unaff_x21;
    uVar4 = thunk_FUN_040ec700();
    if (unaff_x20 == 0) {
      bVar2 = false;
    }
    else {
      bVar2 = *(char *)(unaff_x20 + 0x10) == '\0';
    }
    auVar5._8_8_ = *(undefined8 *)puVar1;
    auVar5._0_8_ = uVar4;
    *(bool *)(lVar3 + 0x20) = bVar2;
    if (unaff_x19 != 0) {
      FUN_085e5548();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830(auVar5._0_8_,auVar5._8_8_);
}


