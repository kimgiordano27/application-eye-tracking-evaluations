/*
FUNCTION_NAME: OVRPlugin$$GetMixedRealityCameraInfo
ENTRY_POINT: 073df0e4
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x073df34c) */

float OVRPlugin__GetMixedRealityCameraInfo(long param_1)

{
  float *pfVar1;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  float fVar2;
  ulong uVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  undefined8 in_stack_00000010;
  float fStack0000000000000018;
  float fStack000000000000001c;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float fStack0000000000000028;
  float fStack000000000000002c;
  
                    /* try { // try from 073df0e4 to 074df0eb has its CatchHandler @ 073df298 */
  if (*(int *)(param_1 + 0xe0) == 0) {
                    /* try { // try from 073df0ec to 074df173 has its CatchHandler @ 073def70 */
    thunk_FUN_03cd7500();
  }
  if (unaff_s11 <= *(float *)(unaff_x23 + 0x528)) {
    if (DAT_0940fff5 == '\0') {
      FUN_03c8f898(PTR_DAT_08e68e18);
      DAT_0940fff5 = '\x01';
    }
    pfVar1 = *(float **)(*(long *)PTR_DAT_08e68e18 + 0xb8);
    fVar2 = *pfVar1;
    fVar5 = pfVar1[1];
    fVar6 = pfVar1[2];
  }
  else {
    fVar2 = unaff_s13 / unaff_s11;
    fVar5 = unaff_s14 / unaff_s11;
    fVar6 = unaff_s15 / unaff_s11;
  }
  fVar2 = unaff_s12 * fVar2;
  fVar5 = unaff_s12 * fVar5;
  fVar6 = unaff_s12 * fVar6;
                    /* try { // try from 073df174 to 074df17b has its CatchHandler @ 073df300 */
  if (unaff_s10 * fVar6 + fStack000000000000002c * fVar2 + unaff_s9 * fVar5 < 0.0) {
    if (DAT_0940fff5 == '\0') {
      FUN_03c8f898(PTR_DAT_08e68e18);
                    /* try { // try from 073df190 to 074df193 has its CatchHandler @ 073df290 */
                    /* try { // try from 073df194 to 074df20b has its CatchHandler @ 073def70 */
      DAT_0940fff5 = '\x01';
    }
    pfVar1 = *(float **)(*(long *)PTR_DAT_08e68e18 + 0xb8);
    fVar2 = *pfVar1;
    fVar5 = pfVar1[1];
    fVar6 = pfVar1[2];
  }
  if (DAT_09410ea2 == '\0') {
    FUN_03c8f898(PTR_DAT_08e722b0);
    DAT_09410ea2 = '\x01';
  }
  fStack0000000000000018 = fStack0000000000000018 - (in_stack_00000010._4_4_ + fVar2);
  fStack000000000000001c = fStack000000000000001c - (fStack0000000000000028 + fVar5);
                    /* try { // try from 073df20c to 074df213 has its CatchHandler @ 073df29c */
  fStack0000000000000020 = fStack0000000000000020 - (fStack0000000000000024 + fVar6);
  if (**(float **)(*unaff_x21 + 0xb8) <= unaff_s8) {
    fVar5 = unaff_s10 * fStack0000000000000020 +
            fStack000000000000002c * fStack0000000000000018 + unaff_s9 * fStack000000000000001c;
    fStack0000000000000018 = fStack0000000000000018 - (fStack000000000000002c * fVar5) / unaff_s8;
    fStack000000000000001c = fStack000000000000001c - (unaff_s9 * fVar5) / unaff_s8;
    fStack0000000000000020 = fStack0000000000000020 - (unaff_s10 * fVar5) / unaff_s8;
  }
  if (*(char *)(unaff_x24 + 0xb4) == '\0') {
    FUN_03c8f898(PTR_DAT_08e6a6b8);
    *(undefined1 *)(unaff_x24 + 0xb4) = 1;
  }
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  fVar5 = SQRT(fStack0000000000000020 * fStack0000000000000020 +
               fStack0000000000000018 * fStack0000000000000018 +
               fStack000000000000001c * fStack000000000000001c);
  if (fVar5 <= *(float *)(unaff_x23 + 0x528)) {
    if (DAT_0940fff5 == '\0') {
      FUN_03c8f898(PTR_DAT_08e68e18);
      DAT_0940fff5 = '\x01';
    }
    fStack0000000000000018 = **(float **)(*(long *)PTR_DAT_08e68e18 + 0xb8);
  }
  else {
    fStack0000000000000018 = fStack0000000000000018 / fVar5;
  }
  uVar3 = FUN_073de158();
  fVar5 = (float)FUN_03f04c24(uVar3,0);
  fVar5 = fVar5 - (float)(int)(fVar5 / 360.0) * 360.0;
  if (fVar5 < 0.0) {
    fVar5 = 0.0;
  }
  if (*(long *)(unaff_x20 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  fVar6 = *(float *)(*(long *)(unaff_x20 + 0x20) + 0x2c);
  uVar4 = (ulong)(uint)fStack0000000000000018;
  if ((fVar6 < fVar5) && (uVar4 = uVar3, ABS(fVar5 - fVar6) < ABS(360.0 - fVar5))) {
    uVar4 = FUN_073de204();
  }
  fVar5 = (float)FUN_073de418();
  return in_stack_00000010._4_4_ + fVar2 + (float)uVar4 * fVar5;
}


