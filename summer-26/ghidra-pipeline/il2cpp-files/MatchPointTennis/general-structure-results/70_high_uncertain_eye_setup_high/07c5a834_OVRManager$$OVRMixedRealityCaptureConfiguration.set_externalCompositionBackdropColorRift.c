/*
FUNCTION_NAME: OVRManager$$OVRMixedRealityCaptureConfiguration.set_externalCompositionBackdropColorRift
ENTRY_POINT: 07c5a834
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__OVRMixedRealityCaptureConfiguration_set_externalCompositionBackdropColorRift
               (float param_1)

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
  float unaff_s8;
  float unaff_s15;
  undefined8 in_stack_00000008;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float in_stack_00000018;
  float in_stack_00000068;
  float fStack000000000000006c;
  
                    /* try { // try from 07c5a834 to 07d5a837 has its CatchHandler @ 07c5a848 */
  fStack000000000000006c = unaff_s8 * param_1;
  lVar1 = *(long *)(unaff_x19 + 0x20);
  fVar2 = (float)FUN_09516af4(fStack000000000000006c,fStack0000000000000010,fStack0000000000000014,
                              in_stack_00000018,0);
  if ((*(long *)(unaff_x19 + 0x20) != 0) &&
     (fVar4 = fStack0000000000000010, fVar6 = fStack0000000000000014, fVar8 = in_stack_00000018,
     fVar3 = (float)FUN_09537fe0(*(long *)(unaff_x19 + 0x20),0), lVar1 != 0)) {
    fVar7 = (fVar2 * fVar4 + in_stack_00000018 * fVar6 + fStack0000000000000014 * fVar8) -
            fStack0000000000000010 * fVar3;
    fVar5 = (fStack0000000000000014 * fVar3 +
            in_stack_00000018 * fVar4 + fStack0000000000000010 * fVar8) - fVar2 * fVar6;
    FUN_0953a29c((fStack0000000000000010 * fVar6 + in_stack_00000018 * fVar3 + fVar2 * fVar8) -
                 fStack0000000000000014 * fVar4,fVar5,fVar7,
                 ((in_stack_00000018 * fVar8 - fVar2 * fVar3) - fStack0000000000000010 * fVar4) -
                 fStack0000000000000014 * fVar6,lVar1,0);
    lVar1 = *(long *)(unaff_x19 + 0x20);
    if (lVar1 != 0) {
      fVar2 = (float)FUN_09539d64(lVar1,0);
      if (*(long *)(unaff_x19 + 0x28) != 0) {
        in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + fVar7;
        in_stack_00000068 = in_stack_00000068 + fVar5;
        fVar4 = (float)FUN_09539d64(*(long *)(unaff_x19 + 0x28),0);
        FUN_09539e3c((unaff_s15 + fVar2) - fVar4,in_stack_00000068 - fVar5,
                     in_stack_00000008._4_4_ - fVar7,lVar1,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


