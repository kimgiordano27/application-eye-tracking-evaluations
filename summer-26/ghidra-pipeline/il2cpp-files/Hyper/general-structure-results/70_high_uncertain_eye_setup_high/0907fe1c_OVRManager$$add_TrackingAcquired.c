/*
FUNCTION_NAME: OVRManager$$add_TrackingAcquired
ENTRY_POINT: 0907fe1c
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_TrackingAcquired(undefined1 param_1 [16],float param_2,float param_3)

{
  long lVar1;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float unaff_s8;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float unaff_s11;
  float unaff_s12;
  float unaff_s14;
  float unaff_s15;
  float fStack0000000000000004;
  float fStack0000000000000014;
  float fStack0000000000000024;
  float fStack000000000000002c;
  undefined8 in_stack_00000038;
  float fStack0000000000000088;
  float fStack000000000000008c;
  
  fVar2 = (float)FUN_0a18a1a0();
  if ((*(long *)(unaff_x20 + 0x20) != 0) &&
     (fVar7 = param_3, fVar6 = param_2, lVar1 = FUN_0a17834c(*(long *)(unaff_x20 + 0x20),0),
     lVar1 != 0)) {
    fStack0000000000000024 = unaff_s15;
    fStack000000000000002c = unaff_s8;
    fVar3 = (float)FUN_0a18a1a0(lVar1,0);
    if (*(char *)(unaff_x21 + 0x3e4) == '\0') {
      FUN_04947ee4(PTR_DAT_0ac0def8);
      *(undefined1 *)(unaff_x21 + 0x3e4) = 1;
    }
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    fVar8 = *(float *)(lVar1 + 0x18);
    fVar10 = *(float *)(lVar1 + 0x1c);
    fVar9 = *(float *)(lVar1 + 0x20);
    if (DAT_0b31f3e5 == '\0') {
      FUN_04947ee4(PTR_DAT_0ac0df00);
      DAT_0b31f3e5 = '\x01';
    }
                    /* try { // try from 0907fea8 to 0917feab has its CatchHandler @ 0907fed8 */
                    /* try { // try from 0907feac to 0917feaf has its CatchHandler @ 0907fed4 */
                    /* try { // try from 0907feb0 to 0917fec3 has its CatchHandler @ 0907f834 */
                    /* catch() { ... } // from try @ 0907fd80 with catch @ 0907fec0 */
                    /* try { // try from 0907fec4 to 0917fecb has its CatchHandler @ 0907ff14 */
    fVar4 = fVar9 * fVar9 + fVar8 * fVar8 + fVar10 * fVar10;
                    /* catch() { ... } // from try @ 0907fd88 with catch @ 0907fecc
                       try { // try from 0907fecc to 0917fef3 has its CatchHandler @ 0907f834 */
    fVar11 = fStack0000000000000088;
                    /* catch() { ... } // from try @ 0907fd60 with catch @ 0907fed0 */
    if (**(float **)(*(long *)PTR_DAT_0ac0df00 + 0xb8) <= fVar4) {
                    /* try { // try from 0907fef4 to 0917fef7 has its CatchHandler @ 0907ff00 */
      fVar11 = fStack0000000000000088 -
               (fVar10 * (in_stack_00000038._4_4_ * fVar9 +
                         fStack000000000000008c * fVar8 + fStack0000000000000088 * fVar10)) / fVar4;
    }
    if (*(long *)(unaff_x20 + 0x20) != 0) {
      fVar9 = unaff_s11 * 0.5 - unaff_s12;
      fVar8 = 0.0;
      if (0.0 <= fVar9) {
        fVar8 = fVar9;
      }
      uVar5 = FUN_0a1ecdb4(*(long *)(unaff_x20 + 0x20),0);
      fStack0000000000000004 = fStack0000000000000088;
      fStack0000000000000014 = fVar11;
      FUN_09080160(fVar3 - unaff_s14 * fVar8,fVar6 - fStack0000000000000024 * fVar8,
                   fVar7 - fStack000000000000002c * fVar8,unaff_s14 * fVar8 + fVar2,
                   fStack0000000000000024 * fVar8 + param_2,fStack000000000000002c * fVar8 + param_3
                   ,uVar5);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


