/*
FUNCTION_NAME: OVRPlugin$$get_premultipliedAlphaLayersSupported
ENTRY_POINT: 073d9aac
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x073d9c88) */

float OVRPlugin__get_premultipliedAlphaLayersSupported(void)

{
  int in_w8;
  long *unaff_x19;
  long *unaff_x20;
  float fVar1;
  float fVar2;
  double dVar3;
  float fVar4;
  float unaff_s8;
  float unaff_s9;
  float unaff_s12;
  float unaff_s13;
  float unaff_s15;
  float fStack0000000000000004;
  undefined8 in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float fStack0000000000000028;
  float fStack000000000000002c;
  
  if (in_w8 == 0) {
    thunk_FUN_03cd7500();
  }
                    /* try { // try from 073d9ab8 to 074d9abf has its CatchHandler @ 073d9b98 */
  fVar1 = SQRT(unaff_s15 * unaff_s15 + unaff_s9 * unaff_s9 + unaff_s8 * unaff_s8);
                    /* try { // try from 073d9ad4 to 074d9adb has its CatchHandler @ 073d9b94 */
                    /* try { // try from 073d9adc to 074d9baf has its CatchHandler @ 073d9a40 */
  if (fVar1 <= DAT_018b0528) {
    if (DAT_0940fff5 == '\0') {
      FUN_03c8f898(PTR_DAT_08e68e18);
      DAT_0940fff5 = '\x01';
    }
    fVar1 = *(float *)(*(long *)(*unaff_x20 + 0xb8) + 4);
  }
  else {
    fVar1 = unaff_s8 / fVar1;
  }
  fStack0000000000000004 = fVar1;
  fVar2 = (float)FUN_03f04c24(uStack000000000000001c,uStack0000000000000018,in_stack_00000010._4_4_,
                              0);
  fStack0000000000000004 = fVar1;
  fVar1 = (float)FUN_03f04c24(uStack000000000000001c,uStack0000000000000018,in_stack_00000010._4_4_,
                              fStack0000000000000028,fStack0000000000000024,fStack0000000000000020,0
                             );
  if (((0.0 <= fVar2) || (fVar4 = 1.0, 0.0 <= fVar1)) &&
     ((fVar2 <= 0.0 || (fVar4 = 0.0, fVar1 <= 0.0)))) {
    if (DAT_094108d3 == '\0') {
      FUN_03c8f898(PTR_DAT_08e6a6b8);
      DAT_094108d3 = '\x01';
    }
    if (*(int *)(*unaff_x19 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    fVar1 = SQRT((fStack000000000000002c * fStack000000000000002c +
                 unaff_s12 * unaff_s12 + unaff_s13 * unaff_s13) *
                 (fStack0000000000000020 * fStack0000000000000020 +
                 fStack0000000000000028 * fStack0000000000000028 +
                 fStack0000000000000024 * fStack0000000000000024));
    fVar4 = 0.0;
    if (DAT_018aff20 <= fVar1) {
      fVar1 = (fStack000000000000002c * fStack0000000000000020 +
              unaff_s12 * fStack0000000000000028 + unaff_s13 * fStack0000000000000024) / fVar1;
      if (fVar1 < -1.0) {
        fVar1 = -1.0;
      }
      if (*(int *)(*unaff_x19 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      dVar3 = acos((double)fVar1);
      fVar4 = (float)dVar3 * DAT_018b1028;
    }
    fVar4 = ABS(fVar2) / fVar4;
  }
  return fVar4;
}


