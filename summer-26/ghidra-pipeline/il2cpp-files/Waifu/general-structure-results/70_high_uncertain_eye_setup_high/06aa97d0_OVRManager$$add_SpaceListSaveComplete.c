/*
FUNCTION_NAME: OVRManager$$add_SpaceListSaveComplete
ENTRY_POINT: 06aa97d0
PROGRAM: Waifu-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_SpaceListSaveComplete(long param_1)

{
  code *pcVar1;
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
  float unaff_s8;
  float unaff_s15;
  float fStack0000000000000018;
  float fStack000000000000001c;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float in_stack_00000028;
  float fStack000000000000002c;
  
  pcVar1 = (code *)FUN_033d1b68(param_1 + 0x6b0);
  *(code **)(unaff_x20 + 0x698) = pcVar1;
  fStack000000000000002c = (float)(*pcVar1)();
  fStack000000000000002c = unaff_s8 * fStack000000000000002c;
  lVar2 = *(long *)(unaff_x19 + 0x20);
  fVar3 = (float)FUN_07a008f8(fStack000000000000002c,fStack0000000000000020,fStack0000000000000024,
                              in_stack_00000028,0);
  if ((*(long *)(unaff_x19 + 0x20) != 0) &&
     (fVar5 = fStack0000000000000020, fVar7 = fStack0000000000000024, fVar9 = in_stack_00000028,
     fVar4 = (float)FUN_07a172b0(*(long *)(unaff_x19 + 0x20),0), lVar2 != 0)) {
    fVar8 = (fVar3 * fVar5 + in_stack_00000028 * fVar7 + fStack0000000000000024 * fVar9) -
            fStack0000000000000020 * fVar4;
    fVar6 = (fStack0000000000000024 * fVar4 +
            in_stack_00000028 * fVar5 + fStack0000000000000020 * fVar9) - fVar3 * fVar7;
    FUN_07a1914c((fStack0000000000000020 * fVar7 + in_stack_00000028 * fVar4 + fVar3 * fVar9) -
                 fStack0000000000000024 * fVar5,fVar6,fVar8,
                 ((in_stack_00000028 * fVar9 - fVar3 * fVar4) - fStack0000000000000020 * fVar5) -
                 fStack0000000000000024 * fVar7,lVar2,0);
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if (lVar2 != 0) {
      fVar3 = (float)FUN_07a18d2c(lVar2,0);
      if (*(long *)(unaff_x19 + 0x28) != 0) {
        fStack0000000000000018 = fStack0000000000000018 + fVar8;
        fStack000000000000001c = fStack000000000000001c + fVar6;
        fVar5 = (float)FUN_07a18d2c(*(long *)(unaff_x19 + 0x28),0);
        FUN_07a18dcc((unaff_s15 + fVar3) - fVar5,fStack000000000000001c - fVar6,
                     fStack0000000000000018 - fVar8,lVar2,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


