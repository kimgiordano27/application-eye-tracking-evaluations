/*
FUNCTION_NAME: OVRManager$$ReturnToLauncher
ENTRY_POINT: 05baf9f8
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


void OVRManager__ReturnToLauncher
               (float param_1,float param_2,float param_3,float param_4,float param_5)

{
  long unaff_x19;
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  float in_stack_00000000;
  undefined8 in_stack_00000008;
  float in_stack_00000068;
  
  lVar1 = *(long *)(unaff_x19 + 0x20);
                    /* try { // try from 05bafa10 to 05cafa17 has its CatchHandler @ 05bafaa8 */
                    /* try { // try from 05bafa18 to 05cafad7 has its CatchHandler @ 05baf8e0 */
  fVar3 = (unaff_s9 * param_3 + unaff_s15 * param_4 + unaff_s10 * param_2) - unaff_s8 * param_1;
  fVar5 = (unaff_s15 * param_1 + unaff_s8 * param_4 + unaff_s10 * param_3) - unaff_s9 * param_2;
  fVar7 = ((unaff_s10 * param_4 - unaff_s9 * param_1) - unaff_s15 * param_2) - unaff_s8 * param_3;
  fVar2 = (float)UnityEngine_TextCore_Text_UnicodeLineBreakingRules___ctor
                           ((unaff_s8 * param_2 + unaff_s9 * param_4 + param_5) -
                            unaff_s15 * param_3,fVar3,fVar5,fVar7,0);
  if (lVar1 != 0) {
    fVar6 = (unaff_s12 * fVar2 + unaff_s11 * fVar7 + unaff_s14 * fVar5) - unaff_s13 * fVar3;
    fVar4 = (unaff_s13 * fVar5 + unaff_s12 * fVar7 + unaff_s14 * fVar3) - unaff_s11 * fVar2;
    FUN_069e7254((unaff_s11 * fVar3 + unaff_s13 * fVar7 + unaff_s14 * fVar2) - unaff_s12 * fVar5,
                 fVar4,fVar6,
                 ((unaff_s14 * fVar7 - unaff_s13 * fVar2) - unaff_s12 * fVar3) - unaff_s11 * fVar5,
                 lVar1,0);
    lVar1 = *(long *)(unaff_x19 + 0x20);
    if (lVar1 != 0) {
      fVar2 = (float)FUN_069e6fbc(lVar1,0);
      if (*(long *)(unaff_x19 + 0x28) != 0) {
        in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + fVar6;
        in_stack_00000068 = in_stack_00000068 + fVar4;
        fVar3 = (float)FUN_069e6fbc(*(long *)(unaff_x19 + 0x28),0);
        FUN_069e7098((in_stack_00000000 + fVar2) - fVar3,in_stack_00000068 - fVar4,
                     in_stack_00000008._4_4_ - fVar6,lVar1,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


