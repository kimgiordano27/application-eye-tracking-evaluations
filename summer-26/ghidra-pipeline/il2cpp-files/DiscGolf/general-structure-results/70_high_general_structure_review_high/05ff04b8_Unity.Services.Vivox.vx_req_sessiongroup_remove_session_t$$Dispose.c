/*
FUNCTION_NAME: Unity.Services.Vivox.vx_req_sessiongroup_remove_session_t$$Dispose
ENTRY_POINT: 05ff04b8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_vx_req_sessiongroup_remove_session_t__Dispose(long param_1)

{
  long lVar1;
  long unaff_x19;
  int unaff_w20;
  int unaff_w21;
  
  if (param_1 != 0) {
    (**(code **)(param_1 + 0x18))
              (*(undefined8 *)(param_1 + 0x40),unaff_w20,unaff_w21,*(undefined8 *)(param_1 + 0x28));
  }
  if (unaff_w21 == 0) {
    if (unaff_w20 == 1) {
      return;
    }
    lVar1 = *(long *)(unaff_x19 + 0x28);
  }
  else if (unaff_w21 == 4) {
    lVar1 = *(long *)(unaff_x19 + 0x30);
  }
  else {
    if (unaff_w21 != 2) {
      return;
    }
    if (unaff_w20 == 3) {
      return;
    }
    lVar1 = *(long *)(unaff_x19 + 0x20);
  }
  if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x05ff052c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
  return;
}


