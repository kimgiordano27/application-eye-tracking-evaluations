/*
FUNCTION_NAME: OVRPlugin$$GetCurrentInteractionProfileName
ENTRY_POINT: 0531b4f0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__GetCurrentInteractionProfileName(long param_1,float param_2,float param_3)

{
  undefined *puVar1;
  float *pfVar2;
  float *unaff_x19;
  long *unaff_x20;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float fVar7;
  undefined4 unaff_s11;
  float fVar8;
  float fVar9;
  float unaff_s14;
  float unaff_s15;
  undefined8 in_stack_00000008;
  float fStack0000000000000010;
  float fStack0000000000000014;
  undefined8 in_stack_00000018;
  undefined4 uStack0000000000000024;
  undefined8 in_stack_00000028;
  
  puVar1 = PTR_DAT_067c8f78;
  fVar3 = unaff_s8 * unaff_s8 + param_2 + param_3;
                    /* try { // try from 0531b504 to 0541b50b has its CatchHandler @ 0531b63c */
  fVar5 = SQRT(fVar3);
                    /* try { // try from 0531b518 to 0541b52b has its CatchHandler @ 0531b638 */
  uStack0000000000000024 = unaff_s11;
  if (fVar5 <= *(float *)(param_1 + 0x6e4)) {
    if (DAT_06bb42c1 == '\0') {
      FUN_02f08768(PTR_DAT_067c8f78);
      DAT_06bb42c1 = '\x01';
    }
    pfVar2 = *(float **)(*(long *)puVar1 + 0xb8);
    fVar7 = *pfVar2;
    fVar8 = pfVar2[1];
    fVar9 = pfVar2[2];
  }
  else {
    fVar7 = unaff_s14 / fVar5;
    fVar8 = unaff_s9 / fVar5;
                    /* try { // try from 0531b52c to 0541b5ef has its CatchHandler @ 0531b228 */
    fVar9 = unaff_s8 / fVar5;
  }
  if (DAT_06bb8a49 == '\0') {
    FUN_02f08768(PTR_DAT_067c8fa8);
    DAT_06bb8a49 = '\x01';
  }
  fVar4 = fVar9 * fVar9 + fVar7 * fVar7 + fVar8 * fVar8;
  if (**(float **)(*(long *)PTR_DAT_067c8fa8 + 0xb8) <= fVar4) {
                    /* try { // try from 0531b5f0 to 0541b5f7 has its CatchHandler @ 0531b64c */
                    /* try { // try from 0531b5f8 to 0541b5fb has its CatchHandler @ 0531b640 */
                    /* try { // try from 0531b5fc to 0541b5ff has its CatchHandler @ 0531b634 */
                    /* try { // try from 0531b600 to 0541b603 has its CatchHandler @ 0531b630 */
                    /* try { // try from 0531b608 to 0541b60b has its CatchHandler @ 0531b628 */
                    /* try { // try from 0531b60c to 0541b60f has its CatchHandler @ 0531b624 */
                    /* try { // try from 0531b610 to 0541b667 has its CatchHandler @ 0531b228 */
    fVar6 = (fStack0000000000000014 - unaff_s15) * fVar9 +
            (in_stack_00000008._4_4_ - unaff_s10) * fVar7 +
            (fStack0000000000000010 - in_stack_00000028._4_4_) * fVar8;
    fVar7 = (fVar7 * fVar6) / fVar4;
                    /* catch(type#1 @ 06402238) { ... } // from try @ 0531b60c with catch @ 0531b624
                        */
    fVar8 = (fVar8 * fVar6) / fVar4;
                    /* catch(type#1 @ 06402238) { ... } // from try @ 0531b608 with catch @ 0531b628
                        */
    fVar4 = (fVar9 * fVar6) / fVar4;
  }
  else {
    if (DAT_06bb42c1 == '\0') {
      FUN_02f08768(PTR_DAT_067c8f78);
      DAT_06bb42c1 = '\x01';
    }
    pfVar2 = *(float **)(*(long *)puVar1 + 0xb8);
    fVar7 = *pfVar2;
    fVar8 = pfVar2[1];
    fVar4 = pfVar2[2];
  }
                    /* catch(type#1 @ 06402238) { ... } // from try @ 0531b4e8 with catch @ 0531b62c
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 0531b600 with catch @ 0531b630
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 0531b5fc with catch @ 0531b634
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 0531b518 with catch @ 0531b638
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 0531b504 with catch @ 0531b63c
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 0531b5f8 with catch @ 0531b640
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 0531b480 with catch @ 0531b644
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 0531b41c with catch @ 0531b648
                        */
  if (unaff_s8 * fVar4 + unaff_s14 * fVar7 + unaff_s9 * fVar8 <= 0.0) {
    fVar9 = 0.0;
    in_stack_00000018._4_4_ = unaff_s10;
  }
  else {
                    /* catch(type#1 @ 06402238) { ... } // from try @ 0531b5f0 with catch @ 0531b64c
                        */
    fVar9 = 1.0;
    fVar8 = fVar7 * fVar7 + fVar8 * fVar8 + fVar4 * fVar4;
                    /* try { // try from 0531b668 to 0541b66b has its CatchHandler @ 0531b678 */
    if (fVar8 < fVar3) {
                    /* catch() { ... } // from try @ 0531b668 with catch @ 0531b678 */
      if (DAT_06bb42c7 == '\0') {
                    /* try { // try from 0531b67c to 0541b683 has its CatchHandler @ 0531b68c */
                    /* try { // try from 0531b684 to 0541b68f has its CatchHandler @ 0531b228 */
        FUN_02f08768(fVar3,uStack0000000000000024,PTR_DAT_067c8f80);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0531b67c with catch @ 0531b68c
                        */
        DAT_06bb42c7 = '\x01';
      }
      if ((*(int *)(*unaff_x20 + 0xe4) == 0) && (thunk_FUN_02f6670c(), DAT_06bb42c7 == '\0')) {
        FUN_02f08768(PTR_DAT_067c8f80);
        DAT_06bb42c7 = '\x01';
      }
      if (*(int *)(*unaff_x20 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      fVar9 = SQRT(fVar8) / fVar5;
      in_stack_00000018._4_4_ = unaff_s10 + fVar7;
    }
  }
  *unaff_x19 = fVar9;
  return in_stack_00000018._4_4_;
}


