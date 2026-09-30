/*
FUNCTION_NAME: OVRPlugin$$SetColorScaleAndOffset
ENTRY_POINT: 073e3334
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SetColorScaleAndOffset(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long in_x9;
  int *piVar2;
  long unaff_x19;
  undefined8 uStack0000000000000014;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 in_stack_00000050;
  undefined8 uStack0000000000000054;
  
  if (in_x9 != 0) {
    piVar2 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar2 + -2) == param_3) {
                    /* catch() { ... } // from try @ 073e314c with catch @ 073e3374 */
                    /* catch() { ... } // from try @ 073e30ac with catch @ 073e3378 */
                    /* catch() { ... } // from try @ 073e311c with catch @ 073e337c */
                    /* catch() { ... } // from try @ 073e3108 with catch @ 073e3380 */
        puVar1 = (undefined8 *)(param_1 + (long)(*piVar2 + 2) * 0x10 + 0x138);
        goto LAB_073e3384;
      }
      in_x9 = in_x9 + -1;
                    /* try { // try from 073e3350 to 074e3353 has its CatchHandler @ 073e33a8 */
      piVar2 = piVar2 + 4;
                    /* try { // try from 073e3354 to 074e3357 has its CatchHandler @ 073e33a4 */
    } while (in_x9 != 0);
  }
                    /* try { // try from 073e3358 to 074e335b has its CatchHandler @ 073e338c */
                    /* try { // try from 073e335c to 074e335f has its CatchHandler @ 073e3388 */
                    /* try { // try from 073e3360 to 074e3363 has its CatchHandler @ 073e3384 */
  puVar1 = (undefined8 *)FUN_03cf1348();
                    /* catch() { ... } // from try @ 073e32d0 with catch @ 073e3364
                       try { // try from 073e3364 to 074e33cb has its CatchHandler @ 073e2f78 */
LAB_073e3384:
                    /* catch() { ... } // from try @ 073e3360 with catch @ 073e3384 */
                    /* catch() { ... } // from try @ 073e335c with catch @ 073e3388 */
                    /* catch() { ... } // from try @ 073e3358 with catch @ 073e338c */
                    /* catch() { ... } // from try @ 073e3208 with catch @ 073e3390 */
                    /* catch() { ... } // from try @ 073e31f0 with catch @ 073e3394 */
  (*(code *)*puVar1)(&stack0x00000020);
  in_stack_00000048 = in_stack_00000028;
                    /* catch() { ... } // from try @ 073e3260 with catch @ 073e3398 */
                    /* catch() { ... } // from try @ 073e3228 with catch @ 073e339c */
                    /* catch() { ... } // from try @ 073e31b4 with catch @ 073e33a0 */
  in_stack_00000040 = in_stack_00000020;
                    /* catch() { ... } // from try @ 073e3354 with catch @ 073e33a4 */
  uStack0000000000000054 = uStack0000000000000034;
  in_stack_00000050 = uStack0000000000000030;
                    /* catch() { ... } // from try @ 073e3350 with catch @ 073e33a8 */
                    /* catch() { ... } // from try @ 073e3190 with catch @ 073e33ac */
                    /* catch() { ... } // from try @ 073e30d0 with catch @ 073e33b0 */
                    /* catch() { ... } // from try @ 073e30b0 with catch @ 073e33b4 */
  if (*(long *)(unaff_x19 + 0x48) != 0) {
                    /* try { // try from 073e33cc to 074e33e3 has its CatchHandler @ 073e3460 */
                    /* try { // try from 073e33e4 to 074e344f has its CatchHandler @ 073e2f78 */
    uStack0000000000000014 = uStack0000000000000034;
    FUN_073f8f9c(0x3f800000);
    *(undefined1 *)(unaff_x19 + 0x61) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


