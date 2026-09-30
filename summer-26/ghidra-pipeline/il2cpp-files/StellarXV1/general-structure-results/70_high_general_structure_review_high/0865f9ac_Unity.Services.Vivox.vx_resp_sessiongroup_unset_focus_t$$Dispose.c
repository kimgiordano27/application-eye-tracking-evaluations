/*
FUNCTION_NAME: Unity.Services.Vivox.vx_resp_sessiongroup_unset_focus_t$$Dispose
ENTRY_POINT: 0865f9ac
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: pose_vector;ui_interaction;telemetry
EVIDENCE: strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_vx_resp_sessiongroup_unset_focus_t__Dispose(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x21;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  char *pcStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined1 uStack000000000000002c;
  
  uStack0000000000000008 = 0xb;
                    /* try { // try from 0865f9c8 to 0875f9cf has its CatchHandler @ 0865fa0c */
  pcStack0000000000000010 =
       "CSharp_UnityfServicesfVivox_vx_req_sessiongroup_set_session_3d_position_t_speaker_position_set___"
  ;
  uStack0000000000000018 = 0x61;
  uStack0000000000000020 = DAT_01aee1a0;
  uStack0000000000000028 = 0x10;
                    /* try { // try from 0865f9dc to 0875f9e3 has its CatchHandler @ 0865fa08 */
  uStack000000000000002c = 0;
  uStack0000000000000000 = param_1;
  pcVar1 = (code *)thunk_FUN_040b519c();
  *(code **)(unaff_x21 + 0x4b0) = pcVar1;
  (*pcVar1)();
                    /* try { // try from 0865f9fc to 0875f9ff has its CatchHandler @ 0865fac4 */
                    /* try { // try from 0865fa00 to 0875fa2b has its CatchHandler @ 0865f608 */
  return;
}


