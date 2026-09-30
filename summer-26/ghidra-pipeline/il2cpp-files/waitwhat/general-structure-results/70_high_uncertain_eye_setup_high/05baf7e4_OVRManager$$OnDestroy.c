/*
FUNCTION_NAME: OVRManager$$OnDestroy
ENTRY_POINT: 05baf7e4
PROGRAM: waitwhat-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__OnDestroy(float param_1,float param_2)

{
  long unaff_x19;
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float unaff_s15;
  undefined8 in_stack_00000008;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float in_stack_00000018;
  float in_stack_00000068;
  float fStack000000000000006c;
  
                    /* catch() { ... } // from try @ 05baf690 with catch @ 05baf7e4 */
  fStack000000000000006c = param_1 * param_2;
                    /* catch() { ... } // from try @ 05baf654 with catch @ 05baf7e8 */
                    /* catch() { ... } // from try @ 05baf640 with catch @ 05baf7ec */
  fStack000000000000006c = (float)FUN_069e3244();
                    /* catch() { ... } // from try @ 05baf718 with catch @ 05baf7f0
                       catch() { ... } // from try @ 05baf7dc with catch @ 05baf7f0 */
  fStack000000000000006c = param_1 * param_2 * fStack000000000000006c;
                    /* catch() { ... } // from try @ 05baf700 with catch @ 05baf7f4
                       catch() { ... } // from try @ 05baf7d8 with catch @ 05baf7f4 */
                    /* catch() { ... } // from try @ 05baf608 with catch @ 05baf7f8 */
                    /* catch() { ... } // from try @ 05baf6a8 with catch @ 05baf7fc */
  lVar1 = *(long *)(unaff_x19 + 0x20);
  fVar2 = (float)FUN_069c53ec(fStack000000000000006c,fStack0000000000000010,fStack0000000000000014,
                              in_stack_00000018,0);
                    /* try { // try from 05baf81c to 05caf81f has its CatchHandler @ 05baf82c */
                    /* catch() { ... } // from try @ 05baf81c with catch @ 05baf82c */
  if ((*(long *)(unaff_x19 + 0x20) != 0) &&
     (fVar4 = fStack0000000000000010, fVar6 = fStack0000000000000014, fVar8 = in_stack_00000018,
     fVar3 = (float)FUN_069e5200(*(long *)(unaff_x19 + 0x20),0), lVar1 != 0)) {
                    /* try { // try from 05baf834 to 05caf83b has its CatchHandler @ 05baf880 */
                    /* try { // try from 05baf83c to 05caf863 has its CatchHandler @ 05baf538 */
                    /* catch() { ... } // from try @ 05baf6c0 with catch @ 05baf840
                       catch() { ... } // from try @ 05baf7d0 with catch @ 05baf840 */
                    /* catch() { ... } // from try @ 05baf680 with catch @ 05baf844
                       catch() { ... } // from try @ 05baf7cc with catch @ 05baf844 */
                    /* try { // try from 05baf864 to 05caf867 has its CatchHandler @ 05baf86c */
                    /* catch() { ... } // from try @ 05baf864 with catch @ 05baf86c */
                    /* try { // try from 05baf870 to 05caf877 has its CatchHandler @ 05baf880 */
                    /* try { // try from 05baf878 to 05caf883 has its CatchHandler @ 05baf538 */
    fVar7 = (fVar2 * fVar4 + in_stack_00000018 * fVar6 + fStack0000000000000014 * fVar8) -
            fStack0000000000000010 * fVar3;
    fVar5 = (fStack0000000000000014 * fVar3 +
            in_stack_00000018 * fVar4 + fStack0000000000000010 * fVar8) - fVar2 * fVar6;
    FUN_069e7254((fStack0000000000000010 * fVar6 + in_stack_00000018 * fVar3 + fVar2 * fVar8) -
                 fStack0000000000000014 * fVar4,fVar5,fVar7,
                 ((in_stack_00000018 * fVar8 - fVar2 * fVar3) - fStack0000000000000010 * fVar4) -
                 fStack0000000000000014 * fVar6,lVar1,0);
    lVar1 = *(long *)(unaff_x19 + 0x20);
    if (lVar1 != 0) {
      fVar2 = (float)FUN_069e6fbc(lVar1,0);
      if (*(long *)(unaff_x19 + 0x28) != 0) {
        in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + fVar7;
        in_stack_00000068 = in_stack_00000068 + fVar5;
        fVar4 = (float)FUN_069e6fbc(*(long *)(unaff_x19 + 0x28),0);
        FUN_069e7098((unaff_s15 + fVar2) - fVar4,in_stack_00000068 - fVar5,
                     in_stack_00000008._4_4_ - fVar7,lVar1,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


