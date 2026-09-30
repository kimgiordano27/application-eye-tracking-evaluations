/*
FUNCTION_NAME: OVRManager$$OnApplicationFocus
ENTRY_POINT: 05baf908
PROGRAM: waitwhat-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__OnApplicationFocus
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3)

{
  float *pfVar1;
  long unaff_x19;
  long unaff_x20;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float unaff_s8;
  float fVar12;
  float unaff_s9;
  float unaff_s10;
  float fVar13;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float in_stack_00000000;
  undefined8 in_stack_00000008;
  float in_stack_00000068;
  
  FUN_03188a78();
  *(undefined1 *)(unaff_x20 + 0xbbf) = 1;
  if (*(int *)(*(long *)PTR_DAT_070c22f8 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  fVar3 = SQRT(unaff_s9 * unaff_s9 + unaff_s8 * unaff_s8 + unaff_s10 * unaff_s10);
  fVar5 = DAT_012e3cb4;
  if (fVar3 <= DAT_012e3cb4) {
    if (DAT_075457d6 == '\0') {
                    /* try { // try from 05baf974 to 05caf983 has its CatchHandler @ 05bafabc */
      FUN_03188a78(PTR_DAT_070c1a80);
      DAT_075457d6 = '\x01';
    }
                    /* try { // try from 05baf988 to 05caf993 has its CatchHandler @ 05bafab8 */
    pfVar1 = *(float **)(*(long *)PTR_DAT_070c1a80 + 0xb8);
    fVar12 = *pfVar1;
    fVar13 = pfVar1[1];
    fVar3 = pfVar1[2];
  }
  else {
    fVar12 = unaff_s8 / fVar3;
    fVar13 = unaff_s10 / fVar3;
    fVar3 = unaff_s9 / fVar3;
  }
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    fVar4 = (float)FUN_069e74e4(*(long *)(unaff_x19 + 0x20),0);
    fVar5 = (float)FUN_069c54a4(fVar12,fVar13,fVar3,fVar4,fVar5,param_3,0);
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      fVar12 = fVar13;
      fVar8 = fVar3;
      fVar10 = fVar4;
      FUN_069e5200(*(long *)(unaff_x19 + 0x20),0);
      fVar6 = (float)UnityEngine_TextCore_Text_UnicodeLineBreakingRules___ctor(0);
      lVar2 = *(long *)(unaff_x19 + 0x20);
      fVar7 = (fVar5 * fVar8 + fVar13 * fVar10 + fVar4 * fVar12) - fVar3 * fVar6;
      fVar9 = (fVar13 * fVar6 + fVar3 * fVar10 + fVar4 * fVar8) - fVar5 * fVar12;
      fVar11 = ((fVar4 * fVar10 - fVar5 * fVar6) - fVar13 * fVar12) - fVar3 * fVar8;
      fVar5 = (float)UnityEngine_TextCore_Text_UnicodeLineBreakingRules___ctor
                               ((fVar3 * fVar12 + fVar5 * fVar10 + fVar4 * fVar6) - fVar13 * fVar8,
                                fVar7,fVar9,fVar11,0);
      if (lVar2 != 0) {
        fVar13 = (unaff_s12 * fVar5 + unaff_s11 * fVar11 + unaff_s14 * fVar9) - unaff_s13 * fVar7;
        fVar3 = (unaff_s13 * fVar9 + unaff_s12 * fVar11 + unaff_s14 * fVar7) - unaff_s11 * fVar5;
        FUN_069e7254((unaff_s11 * fVar7 + unaff_s13 * fVar11 + unaff_s14 * fVar5) -
                     unaff_s12 * fVar9,fVar3,fVar13,
                     ((unaff_s14 * fVar11 - unaff_s13 * fVar5) - unaff_s12 * fVar7) -
                     unaff_s11 * fVar9,lVar2,0);
        lVar2 = *(long *)(unaff_x19 + 0x20);
        if (lVar2 != 0) {
          fVar5 = (float)FUN_069e6fbc(lVar2,0);
          if (*(long *)(unaff_x19 + 0x28) != 0) {
            in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + fVar13;
            in_stack_00000068 = in_stack_00000068 + fVar3;
            fVar12 = (float)FUN_069e6fbc(*(long *)(unaff_x19 + 0x28),0);
            FUN_069e7098((in_stack_00000000 + fVar5) - fVar12,in_stack_00000068 - fVar3,
                         in_stack_00000008._4_4_ - fVar13,lVar2,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


