/*
FUNCTION_NAME: Unity.Services.Vivox.vx_req_session_chat_history_query_t$$Dispose
ENTRY_POINT: 08628954
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 Unity_Services_Vivox_vx_req_session_chat_history_query_t__Dispose(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 unaff_w19;
  undefined4 unaff_w20;
  long unaff_x21;
  long *unaff_x22;
  
  FUN_04077588(*(undefined8 *)(param_1 + 0x810));
  FUN_04077588(PTR_DAT_09333650);
  *(undefined1 *)(unaff_x21 + 0x281) = 1;
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  lVar1 = FUN_086b6aac(unaff_w20,unaff_w19,0);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_09333810);
    FUN_08621d08(uVar2,lVar1,0);
  }
  return uVar2;
}


