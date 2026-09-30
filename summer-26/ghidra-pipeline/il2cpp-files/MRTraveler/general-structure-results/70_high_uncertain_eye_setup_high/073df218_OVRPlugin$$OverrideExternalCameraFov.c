/*
FUNCTION_NAME: OVRPlugin$$OverrideExternalCameraFov
ENTRY_POINT: 073df218
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x073df34c) */

float OVRPlugin__OverrideExternalCameraFov(void)

{
  bool in_NG;
  long unaff_x20;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  float fVar1;
  float fVar2;
  ulong uVar3;
  ulong uVar4;
  float fVar5;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000028;
  
  if (!in_NG) {
                    /* try { // try from 073df220 to 074df227 has its CatchHandler @ 073df288 */
                    /* try { // try from 073df228 to 074df273 has its CatchHandler @ 073def70 */
    fVar1 = unaff_s10 * unaff_s13 + in_stack_00000028._4_4_ * unaff_s11 + unaff_s9 * unaff_s12;
    unaff_s11 = unaff_s11 - (in_stack_00000028._4_4_ * fVar1) / unaff_s8;
    unaff_s12 = unaff_s12 - (unaff_s9 * fVar1) / unaff_s8;
    unaff_s13 = unaff_s13 - (unaff_s10 * fVar1) / unaff_s8;
  }
  if (*(char *)(unaff_x24 + 0xb4) == '\0') {
    FUN_03c8f898(PTR_DAT_08e6a6b8);
    *(undefined1 *)(unaff_x24 + 0xb4) = 1;
  }
                    /* try { // try from 073df274 to 074df277 has its CatchHandler @ 073df294 */
                    /* try { // try from 073df278 to 074df27b has its CatchHandler @ 073df28c */
                    /* try { // try from 073df27c to 074df27f has its CatchHandler @ 073df284 */
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
                    /* try { // try from 073df280 to 074df2b3 has its CatchHandler @ 073def70 */
    thunk_FUN_03cd7500();
  }
                    /* catch() { ... } // from try @ 073df27c with catch @ 073df284 */
                    /* catch() { ... } // from try @ 073df220 with catch @ 073df288 */
                    /* catch() { ... } // from try @ 073df278 with catch @ 073df28c */
                    /* catch() { ... } // from try @ 073df190 with catch @ 073df290 */
                    /* catch() { ... } // from try @ 073df274 with catch @ 073df294 */
                    /* catch() { ... } // from try @ 073df0e4 with catch @ 073df298 */
                    /* catch() { ... } // from try @ 073df20c with catch @ 073df29c */
  fVar1 = SQRT(unaff_s13 * unaff_s13 + unaff_s11 * unaff_s11 + unaff_s12 * unaff_s12);
  if (fVar1 <= *(float *)(unaff_x23 + 0x528)) {
    if (DAT_0940fff5 == '\0') {
      FUN_03c8f898(PTR_DAT_08e68e18);
      DAT_0940fff5 = '\x01';
    }
                    /* catch() { ... } // from try @ 073df2b4 with catch @ 073df2dc */
                    /* try { // try from 073df2ec to 074df2ff has its CatchHandler @ 073df3d4 */
    fVar1 = **(float **)(*(long *)PTR_DAT_08e68e18 + 0xb8);
  }
  else {
    fVar1 = unaff_s11 / fVar1;
                    /* try { // try from 073df2b4 to 074df2b7 has its CatchHandler @ 073df2dc */
                    /* try { // try from 073df2b8 to 074df2eb has its CatchHandler @ 073def70 */
  }
  uVar3 = FUN_073de158();
                    /* catch() { ... } // from try @ 073df174 with catch @ 073df300
                       try { // try from 073df300 to 074df317 has its CatchHandler @ 073def70 */
  fVar2 = (float)FUN_03f04c24(uVar3,0);
  fVar2 = fVar2 - (float)(int)(fVar2 / 360.0) * 360.0;
  if (fVar2 < 0.0) {
    fVar2 = 0.0;
  }
  if (*(long *)(unaff_x20 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  fVar5 = *(float *)(*(long *)(unaff_x20 + 0x20) + 0x2c);
  uVar4 = (ulong)(uint)fVar1;
  if ((fVar5 < fVar2) && (uVar4 = uVar3, ABS(fVar2 - fVar5) < ABS(360.0 - fVar2))) {
    uVar4 = FUN_073de204();
  }
  fVar1 = (float)FUN_073de418();
  return in_stack_00000010._4_4_ + (float)uVar4 * fVar1;
}


