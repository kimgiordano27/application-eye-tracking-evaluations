/*
FUNCTION_NAME: OVRManager$$get_xrInstance
ENTRY_POINT: 07c5aa2c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_xrInstance
               (undefined4 *param_1,undefined1 param_2 [16],undefined8 param_3,undefined8 param_4)

{
  long unaff_x19;
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
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
  
  uVar12 = *param_1;
  fVar14 = (float)param_1[1];
  fVar13 = (float)param_1[2];
                    /* try { // try from 07c5aa38 to 07d5aa5f has its CatchHandler @ 07c5acec */
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    uVar5 = FUN_0953a5a4(*(long *)(unaff_x19 + 0x20),0);
    fVar2 = (float)FUN_09516bac(uVar12,fVar14,fVar13,uVar5,param_3,param_4,0);
    fVar4 = (float)uVar5;
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      fVar10 = fVar4;
      fVar6 = fVar14;
      fVar8 = fVar13;
      FUN_09537fe0(*(long *)(unaff_x19 + 0x20),0);
      fVar3 = (float)FUN_095165fc(0);
      lVar1 = *(long *)(unaff_x19 + 0x20);
      fVar7 = (fVar2 * fVar8 + fVar14 * fVar10 + fVar4 * fVar6) - fVar13 * fVar3;
      fVar9 = (fVar14 * fVar3 + fVar13 * fVar10 + fVar4 * fVar8) - fVar2 * fVar6;
      fVar11 = ((fVar4 * fVar10 - fVar2 * fVar3) - fVar14 * fVar6) - fVar13 * fVar8;
      fVar14 = (float)FUN_095165fc((fVar13 * fVar6 + fVar2 * fVar10 + fVar4 * fVar3) -
                                   fVar14 * fVar8,fVar7,fVar9,fVar11,0);
      if (lVar1 != 0) {
        fVar2 = (unaff_s12 * fVar14 + unaff_s13 * fVar11 + unaff_s11 * fVar9) - unaff_s14 * fVar7;
        fVar13 = (unaff_s14 * fVar9 + unaff_s12 * fVar11 + unaff_s11 * fVar7) - unaff_s13 * fVar14;
        FUN_0953a29c((unaff_s13 * fVar7 + unaff_s14 * fVar11 + unaff_s11 * fVar14) -
                     unaff_s12 * fVar9,fVar13,fVar2,
                     ((unaff_s11 * fVar11 - unaff_s14 * fVar14) - unaff_s12 * fVar7) -
                     unaff_s13 * fVar9,lVar1,0);
        lVar1 = *(long *)(unaff_x19 + 0x20);
        if (lVar1 != 0) {
          fVar14 = (float)FUN_09539d64(lVar1,0);
          if (*(long *)(unaff_x19 + 0x28) != 0) {
            in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + fVar2;
            in_stack_00000068 = in_stack_00000068 + fVar13;
            fVar4 = (float)FUN_09539d64(*(long *)(unaff_x19 + 0x28),0);
            FUN_09539e3c((in_stack_00000000 + fVar14) - fVar4,in_stack_00000068 - fVar13,
                         in_stack_00000008._4_4_ - fVar2,lVar1,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


