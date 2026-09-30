/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_set_session_3d_position_t_speaker_position_set
ENTRY_POINT: 0901a118
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_set_session_3d_position_t_speaker_position_set
               (undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x22;
  
                    /* try { // try from 0901a11c to 0911a123 has its CatchHandler @ 0901a194 */
  lVar3 = *(long *)(unaff_x19 + 0x10);
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  if (lVar3 != 0) {
                    /* try { // try from 0901a134 to 0911a13f has its CatchHandler @ 0901a190 */
    uVar1 = *(uint *)(unaff_x19 + 0x18);
    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
      *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar3 + (long)(int)uVar1 * 8 + 0x20) = param_1;
                    /* try { // try from 0901a158 to 0911a163 has its CatchHandler @ 0901a1ac */
      thunk_FUN_044bb4b4();
    }
    else {
                    /* try { // try from 0901a164 to 0911a187 has its CatchHandler @ 0901a084 */
      FUN_05bade44();
    }
    uVar2 = FUN_07a4ce38(*unaff_x22,0);
    lVar3 = *(long *)(unaff_x19 + 0x10);
                    /* try { // try from 0901a188 to 0911a18b has its CatchHandler @ 0901a278 */
                    /* try { // try from 0901a18c to 0911a18f has its CatchHandler @ 0901a1a4 */
                    /* catch() { ... } // from try @ 0901a134 with catch @ 0901a190
                       try { // try from 0901a190 to 0911a1c7 has its CatchHandler @ 0901a084 */
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
                    /* catch() { ... } // from try @ 0901a11c with catch @ 0901a194 */
    if (lVar3 != 0) {
                    /* catch() { ... } // from try @ 0901a0fc with catch @ 0901a198 */
      uVar1 = *(uint *)(unaff_x19 + 0x18);
      if (uVar1 < *(uint *)(lVar3 + 0x18)) {
        *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar3 + (long)(int)uVar1 * 8 + 0x20) = uVar2;
        thunk_FUN_044bb4b4();
      }
      else {
        FUN_05bade44();
      }
      *(long *)(*(long *)(*unaff_x20 + 0xb8) + 8) = unaff_x19;
      thunk_FUN_044bb4b4();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


