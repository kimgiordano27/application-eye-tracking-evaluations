/*
FUNCTION_NAME: OVRPlugin$$set_occlusionMesh
ENTRY_POINT: 073d9a08
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x073d9c88) */

float OVRPlugin__set_occlusionMesh(void)

{
  undefined *puVar1;
  int in_w8;
  long unaff_x19;
  long *unaff_x20;
  float fVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s15;
  float fVar6;
  float fStack0000000000000004;
  undefined8 in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  float fStack0000000000000024;
  float fStack000000000000002c;
  
  if (in_w8 == 0) {
    FUN_03c8f898(PTR_DAT_08e68e18);
    *(undefined1 *)(unaff_x19 + 0x146) = 1;
  }
                    /* try { // try from 073d9a40 to 074d9aa7 has its CatchHandler @ 073d9a40
                       catch() { ... } // from try @ 073d9a40 with catch @ 073d9a40
                       catch() { ... } // from try @ 073d9adc with catch @ 073d9a40
                       catch() { ... } // from try @ 073d9bc8 with catch @ 073d9a40
                       catch() { ... } // from try @ 073d9c84 with catch @ 073d9a40
                       catch() { ... } // from try @ 073d9c90 with catch @ 073d9a40 */
  fVar2 = (float)FUN_085d2bd4(0);
  fStack0000000000000024 = unaff_s15;
  fStack000000000000002c = unaff_s12;
  if (DAT_094100b4 == '\0') {
    FUN_03c8f898(PTR_DAT_08e6a6b8);
    DAT_094100b4 = '\x01';
  }
  puVar1 = PTR_DAT_08e6a6b8;
  fVar5 = unaff_s11 * unaff_s13 - unaff_s12 * unaff_s15;
  fVar4 = unaff_s12 * fVar2 - unaff_s10 * unaff_s13;
  fVar6 = unaff_s10 * unaff_s15 - unaff_s11 * fVar2;
                    /* try { // try from 073d9aa8 to 074d9aab has its CatchHandler @ 073d9b90 */
  if (*(int *)(*(long *)PTR_DAT_08e6a6b8 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  fVar5 = SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
  if (fVar5 <= DAT_018b0528) {
    if (DAT_0940fff5 == '\0') {
      FUN_03c8f898(PTR_DAT_08e68e18);
      DAT_0940fff5 = '\x01';
    }
    fVar4 = *(float *)(*(long *)(*unaff_x20 + 0xb8) + 4);
  }
  else {
    fVar4 = fVar4 / fVar5;
  }
  fStack0000000000000004 = fVar4;
  fVar5 = (float)FUN_03f04c24(uStack000000000000001c,uStack0000000000000018,in_stack_00000010._4_4_,
                              0);
  fStack0000000000000004 = fVar4;
  fVar4 = (float)FUN_03f04c24(uStack000000000000001c,uStack0000000000000018,in_stack_00000010._4_4_,
                              fVar2,fStack0000000000000024,unaff_s13,0);
  if (((0.0 <= fVar5) || (fVar6 = 1.0, 0.0 <= fVar4)) &&
     ((fVar5 <= 0.0 || (fVar6 = 0.0, fVar4 <= 0.0)))) {
    if (DAT_094108d3 == '\0') {
      FUN_03c8f898(PTR_DAT_08e6a6b8);
      DAT_094108d3 = '\x01';
    }
    fVar4 = fStack000000000000002c * fStack000000000000002c;
    fVar6 = fStack0000000000000024 * fStack0000000000000024;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    fVar4 = SQRT((fVar4 + unaff_s10 * unaff_s10 + unaff_s11 * unaff_s11) *
                 (unaff_s13 * unaff_s13 + fVar2 * fVar2 + fVar6));
    fVar6 = 0.0;
    if (DAT_018aff20 <= fVar4) {
      fVar4 = (fStack000000000000002c * unaff_s13 +
              unaff_s10 * fVar2 + unaff_s11 * fStack0000000000000024) / fVar4;
      if (fVar4 < -1.0) {
        fVar4 = -1.0;
      }
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      dVar3 = acos((double)fVar4);
      fVar6 = (float)dVar3 * DAT_018b1028;
    }
    fVar6 = ABS(fVar5) / fVar6;
  }
  return fVar6;
}


