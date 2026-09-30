/*
FUNCTION_NAME: Unity.Services.Vivox.vx_req_sessiongroup_set_tx_session_t$$Dispose
ENTRY_POINT: 08625d80
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


undefined8 Unity_Services_Vivox_vx_req_sessiongroup_set_tx_session_t__Dispose(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 unaff_w19;
  long *unaff_x21;
  long unaff_x22;
  undefined1 auVar3 [16];
  
  FUN_04077588(PTR_DAT_09333650);
  FUN_04077588(PTR_DAT_09333800);
  *(undefined1 *)(unaff_x22 + 0x222) = 1;
                    /* try { // try from 08625da0 to 08725da3 has its CatchHandler @ 08625f7c */
  auVar3 = FUN_086183b0();
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
                    /* try { // try from 08625dbc to 08725dbf has its CatchHandler @ 08626004 */
    thunk_FUN_040d65a8();
  }
  lVar1 = FUN_086a09a4(unaff_w19,auVar3._0_8_,auVar3._8_8_,0);
  if (lVar1 == 0) {
                    /* try { // try from 08625e04 to 08725e0b has its CatchHandler @ 08625f78 */
    uVar2 = 0;
  }
  else {
                    /* try { // try from 08625dd8 to 08725df7 has its CatchHandler @ 08625f84 */
    uVar2 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_09333800);
    FUN_086cf758(uVar2,lVar1,0,0);
  }
  return uVar2;
}


