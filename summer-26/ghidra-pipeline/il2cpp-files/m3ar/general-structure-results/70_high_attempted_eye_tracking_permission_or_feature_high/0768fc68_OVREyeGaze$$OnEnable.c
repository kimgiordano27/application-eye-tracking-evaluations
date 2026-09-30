/*
FUNCTION_NAME: OVREyeGaze$$OnEnable
ENTRY_POINT: 0768fc68
PROGRAM: m3ar-libil2cpp.so
SCORE: 80
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_2;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__OnEnable(undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4)

{
  long unaff_x19;
  long unaff_x20;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float unaff_s8;
  float unaff_s10;
  float fVar7;
  float unaff_s12;
  float fVar8;
  float fStack000000000000000c;
  float fStack0000000000000010;
  float fStack0000000000000014;
  
  fVar3 = param_2;
  fVar5 = param_3;
  fStack000000000000000c = unaff_s10;
  fVar1 = (float)FUN_08598d1c(param_4,0);
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    fVar7 = *(float *)(unaff_x19 + 0x34);
    fVar4 = fVar3;
    fVar6 = fVar5;
                    /* try { // try from 0768fc8c to 0778fc8f has its CatchHandler @ 0768fca8 */
                    /* try { // try from 0768fc90 to 0778fc93 has its CatchHandler @ 0768fc98 */
                    /* catch(type#1 @ 08931438) { ... } // from try @ 0768fc50 with catch @ 0768fc94
                       try { // try from 0768fc94 to 0778fcbf has its CatchHandler @ 0768faa0 */
                    /* catch(type#1 @ 08931438) { ... } // from try @ 0768fc90 with catch @ 0768fc98
                        */
    fVar2 = (float)FUN_08598d98(*(long *)(unaff_x19 + 0x28),0);
                    /* catch(type#1 @ 08931438) { ... } // from try @ 0768fbc0 with catch @ 0768fc9c
                        */
    if (unaff_x20 != 0) {
                    /* catch(type#1 @ 08931438) { ... } // from try @ 0768fbd0 with catch @ 0768fca0
                        */
                    /* catch(type#1 @ 08931438) { ... } // from try @ 0768fbe4 with catch @ 0768fca4
                        */
                    /* catch(type#1 @ 08931438) { ... } // from try @ 0768fbac with catch @ 0768fca8
                       catch(type#1 @ 08931438) { ... } // from try @ 0768fc8c with catch @ 0768fca8
                        */
                    /* try { // try from 0768fcc0 to 0778fcd7 has its CatchHandler @ 0768fd5c */
      fVar8 = *(float *)(unaff_x19 + 0x38);
                    /* try { // try from 0768fcd8 to 0778fd4b has its CatchHandler @ 0768faa0 */
      FUN_0859895c((fStack000000000000000c - unaff_s8 * fStack0000000000000010) + fVar1 * fVar7 +
                   fVar2 * fVar8,(unaff_s12 - unaff_s8 * param_2) + fVar3 * fVar7 + fVar4 * fVar8,
                   (fStack0000000000000014 - unaff_s8 * param_3) + fVar5 * fVar7 + fVar6 * fVar8);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


