/*
FUNCTION_NAME: OVRManager$$OnApplicationQuit
ENTRY_POINT: 05baf990
PROGRAM: waitwhat-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__OnApplicationQuit
               (long param_1,undefined1 param_2 [16],undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  long unaff_x19;
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
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float in_stack_00000000;
  undefined8 in_stack_00000008;
  float in_stack_00000068;
  
  puVar1 = *(undefined4 **)(param_1 + 0xb8);
  uVar12 = *puVar1;
  fVar14 = (float)puVar1[1];
  fVar13 = (float)puVar1[2];
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    fVar3 = (float)FUN_069e74e4(*(long *)(unaff_x19 + 0x20),0);
                    /* try { // try from 05baf9b8 to 05caf9c3 has its CatchHandler @ 05bafab4 */
                    /* try { // try from 05baf9c4 to 05caf9d7 has its CatchHandler @ 05bafab0 */
    fVar4 = (float)FUN_069c54a4(uVar12,fVar14,fVar13,fVar3,param_3,param_4,0);
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      fVar6 = fVar14;
      fVar8 = fVar13;
      fVar10 = fVar3;
      FUN_069e5200(*(long *)(unaff_x19 + 0x20),0);
                    /* try { // try from 05baf9f0 to 05caf9f7 has its CatchHandler @ 05bafaac */
      fVar5 = (float)UnityEngine_TextCore_Text_UnicodeLineBreakingRules___ctor(0);
      lVar2 = *(long *)(unaff_x19 + 0x20);
      fVar7 = (fVar4 * fVar8 + fVar14 * fVar10 + fVar3 * fVar6) - fVar13 * fVar5;
      fVar9 = (fVar14 * fVar5 + fVar13 * fVar10 + fVar3 * fVar8) - fVar4 * fVar6;
      fVar11 = ((fVar3 * fVar10 - fVar4 * fVar5) - fVar14 * fVar6) - fVar13 * fVar8;
      fVar14 = (float)UnityEngine_TextCore_Text_UnicodeLineBreakingRules___ctor
                                ((fVar13 * fVar6 + fVar4 * fVar10 + fVar3 * fVar5) - fVar14 * fVar8,
                                 fVar7,fVar9,fVar11,0);
      if (lVar2 != 0) {
        fVar3 = (unaff_s12 * fVar14 + unaff_s11 * fVar11 + unaff_s14 * fVar9) - unaff_s13 * fVar7;
        fVar13 = (unaff_s13 * fVar9 + unaff_s12 * fVar11 + unaff_s14 * fVar7) - unaff_s11 * fVar14;
        FUN_069e7254((unaff_s11 * fVar7 + unaff_s13 * fVar11 + unaff_s14 * fVar14) -
                     unaff_s12 * fVar9,fVar13,fVar3,
                     ((unaff_s14 * fVar11 - unaff_s13 * fVar14) - unaff_s12 * fVar7) -
                     unaff_s11 * fVar9,lVar2,0);
        lVar2 = *(long *)(unaff_x19 + 0x20);
        if (lVar2 != 0) {
          fVar14 = (float)FUN_069e6fbc(lVar2,0);
          if (*(long *)(unaff_x19 + 0x28) != 0) {
            in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + fVar3;
            in_stack_00000068 = in_stack_00000068 + fVar13;
            fVar4 = (float)FUN_069e6fbc(*(long *)(unaff_x19 + 0x28),0);
            FUN_069e7098((in_stack_00000000 + fVar14) - fVar4,in_stack_00000068 - fVar13,
                         in_stack_00000008._4_4_ - fVar3,lVar2,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


