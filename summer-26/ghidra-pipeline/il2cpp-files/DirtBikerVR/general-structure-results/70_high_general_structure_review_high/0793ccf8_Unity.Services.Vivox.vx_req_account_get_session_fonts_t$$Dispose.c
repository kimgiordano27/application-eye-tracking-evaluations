/*
FUNCTION_NAME: Unity.Services.Vivox.vx_req_account_get_session_fonts_t$$Dispose
ENTRY_POINT: 0793ccf8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Services_Vivox_vx_req_account_get_session_fonts_t__Dispose
               (undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  long unaff_x19;
  long unaff_x20;
  
  FUN_05fa0540(param_2,*param_1);
  plVar1 = *(long **)(unaff_x19 + 0x18);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x168))(plVar1,*(undefined8 *)(*plVar1 + 0x170));
    if (unaff_x20 == 0) goto LAB_0793ce4c;
    FUN_05fa0540();
  }
  plVar1 = *(long **)(unaff_x19 + 0x20);
  if (plVar1 != (long *)0x0) {
                    /* try { // try from 0793cd40 to 07a3cec3 has its CatchHandler @ 0793cd40
                       catch() { ... } // from try @ 0793cd40 with catch @ 0793cd40
                       catch() { ... } // from try @ 0793d1fc with catch @ 0793cd40
                       catch() { ... } // from try @ 0793d2c0 with catch @ 0793cd40
                       catch() { ... } // from try @ 0793d360 with catch @ 0793cd40
                       catch() { ... } // from try @ 0793d3fc with catch @ 0793cd40 */
    (**(code **)(*plVar1 + 0x168))(plVar1,*(undefined8 *)(*plVar1 + 0x170));
    if (unaff_x20 == 0) goto LAB_0793ce4c;
    FUN_05fa0540();
  }
  plVar1 = *(long **)(unaff_x19 + 0x28);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x168))(plVar1,*(undefined8 *)(*plVar1 + 0x170));
    if (unaff_x20 == 0) goto LAB_0793ce4c;
    FUN_05fa0540();
  }
  plVar1 = *(long **)(unaff_x19 + 0x30);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x168))(plVar1,*(undefined8 *)(*plVar1 + 0x170));
    if (unaff_x20 == 0) goto LAB_0793ce4c;
    FUN_05fa0540();
  }
  plVar1 = *(long **)(unaff_x19 + 0x38);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x168))(plVar1,*(undefined8 *)(*plVar1 + 0x170));
    if (unaff_x20 == 0) goto LAB_0793ce4c;
    FUN_05fa0540();
  }
  plVar1 = *(long **)(unaff_x19 + 0x40);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x168))(plVar1,*(undefined8 *)(*plVar1 + 0x170));
    if (unaff_x20 == 0) {
LAB_0793ce4c:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    FUN_05fa0540();
  }
  return;
}


