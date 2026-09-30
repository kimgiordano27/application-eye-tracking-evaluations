/*
FUNCTION_NAME: OVRManager$$OnApplicationPause
ENTRY_POINT: 07c64930
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__OnApplicationPause(float param_1,float param_2,float param_3)

{
  long lVar1;
  long unaff_x19;
  float fVar2;
  float unaff_s8;
  float unaff_s14;
  undefined8 in_stack_00000008;
  
                    /* try { // try from 07c64938 to 07d6493b has its CatchHandler @ 07c64954 */
                    /* try { // try from 07c6493c to 07d6493f has its CatchHandler @ 07c646fc */
                    /* try { // try from 07c64940 to 07d64943 has its CatchHandler @ 07c6494c */
                    /* try { // try from 07c64944 to 07d6496f has its CatchHandler @ 07c646fc */
  if (unaff_s14 * param_3 + param_1 + param_2 < 0.0) {
    unaff_s8 = -unaff_s8;
  }
                    /* catch(type#1 @ 0991e038) { ... } // from try @ 07c64940 with catch @ 07c6494c
                        */
                    /* catch(type#1 @ 0991e038) { ... } // from try @ 07c64938 with catch @ 07c64954
                        */
                    /* catch(type#1 @ 0991e038) { ... } // from try @ 07c648b4 with catch @ 07c64958
                        */
  fVar2 = 1.0;
  if (unaff_s8 < 0.0) {
    fVar2 = -1.0;
  }
                    /* catch(type#1 @ 0991e038) { ... } // from try @ 07c6487c with catch @ 07c6495c
                        */
                    /* catch(type#1 @ 0991e038) { ... } // from try @ 07c64820 with catch @ 07c64960
                        */
  *(float *)(unaff_x19 + 0x160) = unaff_s8;
  if (in_stack_00000008._4_4_ != fVar2) {
    lVar1 = *(long *)(unaff_x19 + 0x168);
    if (lVar1 != 0) {
                    /* try { // try from 07c64970 to 07d64973 has its CatchHandler @ 07c64984 */
                    /* catch() { ... } // from try @ 07c64970 with catch @ 07c64984 */
                    /* WARNING: Could not recover jumptable at 0x07c6499c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  return;
}


