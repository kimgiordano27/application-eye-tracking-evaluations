/*
FUNCTION_NAME: OVRPlugin$$GetUseOverriddenExternalCameraFov
ENTRY_POINT: 073df304
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x073df34c) */

float OVRPlugin__GetUseOverriddenExternalCameraFov(void)

{
  long unaff_x20;
  float fVar1;
  float fVar2;
  float unaff_s11;
  float unaff_s14;
  undefined8 in_stack_00000010;
  
                    /* try { // try from 073df318 to 074df31b has its CatchHandler @ 073df340 */
                    /* try { // try from 073df31c to 074df34f has its CatchHandler @ 073def70 */
  fVar1 = (float)FUN_03f04c24(0);
                    /* catch() { ... } // from try @ 073df318 with catch @ 073df340 */
  fVar1 = fVar1 - (float)(int)(fVar1 / 360.0) * 360.0;
                    /* try { // try from 073df350 to 074df363 has its CatchHandler @ 073df3d4 */
  if (fVar1 < 0.0) {
    fVar1 = 0.0;
  }
  if (*(long *)(unaff_x20 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  fVar2 = *(float *)(*(long *)(unaff_x20 + 0x20) + 0x2c);
                    /* catch() { ... } // from try @ 073df0d0 with catch @ 073df364
                       try { // try from 073df364 to 074df37b has its CatchHandler @ 073def70 */
                    /* try { // try from 073df37c to 074df37f has its CatchHandler @ 073df3a8 */
                    /* try { // try from 073df380 to 074df3b7 has its CatchHandler @ 073def70 */
  if ((fVar2 < fVar1) && (unaff_s11 = unaff_s14, ABS(fVar1 - fVar2) < ABS(360.0 - fVar1))) {
    unaff_s11 = (float)FUN_073de204();
  }
  fVar1 = (float)FUN_073de418();
                    /* try { // try from 073df3b8 to 074df3bf has its CatchHandler @ 073df3d4 */
                    /* try { // try from 073df3c0 to 074df3cb has its CatchHandler @ 073def70 */
                    /* try { // try from 073df3cc to 074df3d3 has its CatchHandler @ 073df3d4 */
                    /* catch() { ... } // from try @ 073df2ec with catch @ 073df3d4
                       catch() { ... } // from try @ 073df350 with catch @ 073df3d4
                       catch() { ... } // from try @ 073df3b8 with catch @ 073df3d4
                       catch() { ... } // from try @ 073df3cc with catch @ 073df3d4 */
  return in_stack_00000010._4_4_ + unaff_s11 * fVar1;
}


