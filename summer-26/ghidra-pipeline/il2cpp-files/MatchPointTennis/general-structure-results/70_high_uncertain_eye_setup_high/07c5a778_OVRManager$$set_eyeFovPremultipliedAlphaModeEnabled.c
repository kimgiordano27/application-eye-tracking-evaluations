/*
FUNCTION_NAME: OVRManager$$set_eyeFovPremultipliedAlphaModeEnabled
ENTRY_POINT: 07c5a778
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__set_eyeFovPremultipliedAlphaModeEnabled(void)

{
  float *pfVar1;
  long unaff_x19;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  ulong uVar14;
  float fVar15;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  float fStack0000000000000000;
  float fStack0000000000000004;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float in_stack_00000068;
  
  fVar3 = unaff_s8 * unaff_s8 + unaff_s15 * unaff_s15 + unaff_s10 * unaff_s10;
  if (**(float **)(*(long *)PTR_DAT_09f1f580 + 0xb8) <= fVar3) {
    fVar7 = unaff_s9 * unaff_s8 +
            fStack0000000000000008 * unaff_s15 + fStack0000000000000004 * unaff_s10;
    fStack0000000000000008 = fStack0000000000000008 - (unaff_s15 * fVar7) / fVar3;
    fStack0000000000000004 = fStack0000000000000004 - (unaff_s10 * fVar7) / fVar3;
    unaff_s9 = unaff_s9 - (unaff_s8 * fVar7) / fVar3;
  }
  if (DAT_0a51bf42 == '\0') {
    FUN_04447ba8(PTR_DAT_09f1e748);
    DAT_0a51bf42 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_09f1e748 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar10 = (ulong)(uint)DAT_01c7607c;
  uVar14 = (ulong)(uint)(unaff_s9 * unaff_s9);
  fVar3 = SQRT(unaff_s9 * unaff_s9 +
               fStack0000000000000008 * fStack0000000000000008 +
               fStack0000000000000004 * fStack0000000000000004);
  if (fVar3 <= DAT_01c7607c) {
    if (DAT_0a51bf43 == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e740);
      DAT_0a51bf43 = '\x01';
    }
    pfVar1 = *(float **)(*(long *)PTR_DAT_09f1e740 + 0xb8);
    fStack0000000000000008 = *pfVar1;
    fStack0000000000000004 = pfVar1[1];
    fVar3 = pfVar1[2];
  }
  else {
    fStack0000000000000008 = fStack0000000000000008 / fVar3;
    fStack0000000000000004 = fStack0000000000000004 / fVar3;
    fVar3 = unaff_s9 / fVar3;
  }
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    uVar6 = FUN_0953a5a4(*(long *)(unaff_x19 + 0x20),0);
    fVar7 = (float)FUN_09516bac(fStack0000000000000008,fStack0000000000000004,fVar3,uVar6,uVar10,
                                uVar14,0);
    fVar13 = (float)uVar6;
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      fVar5 = fVar13;
      fVar8 = fStack0000000000000004;
      fVar11 = fVar3;
      FUN_09537fe0(*(long *)(unaff_x19 + 0x20),0);
      fVar4 = (float)FUN_095165fc(0);
      lVar2 = *(long *)(unaff_x19 + 0x20);
      fVar9 = (fVar7 * fVar11 + fStack0000000000000004 * fVar5 + fVar13 * fVar8) - fVar3 * fVar4;
      fVar12 = (fStack0000000000000004 * fVar4 + fVar3 * fVar5 + fVar13 * fVar11) - fVar7 * fVar8;
      fVar15 = ((fVar13 * fVar5 - fVar7 * fVar4) - fStack0000000000000004 * fVar8) - fVar3 * fVar11;
      fVar3 = (float)FUN_095165fc((fVar3 * fVar8 + fVar7 * fVar5 + fVar13 * fVar4) -
                                  fStack0000000000000004 * fVar11,fVar9,fVar12,fVar15,0);
      if (lVar2 != 0) {
        fVar13 = (unaff_s12 * fVar3 + unaff_s13 * fVar15 + unaff_s11 * fVar12) - unaff_s14 * fVar9;
        fVar7 = (unaff_s14 * fVar12 + unaff_s12 * fVar15 + unaff_s11 * fVar9) - unaff_s13 * fVar3;
        FUN_0953a29c((unaff_s13 * fVar9 + unaff_s14 * fVar15 + unaff_s11 * fVar3) -
                     unaff_s12 * fVar12,fVar7,fVar13,
                     ((unaff_s11 * fVar15 - unaff_s14 * fVar3) - unaff_s12 * fVar9) -
                     unaff_s13 * fVar12,lVar2,0);
        lVar2 = *(long *)(unaff_x19 + 0x20);
        if (lVar2 != 0) {
          fVar3 = (float)FUN_09539d64(lVar2,0);
          if (*(long *)(unaff_x19 + 0x28) != 0) {
            fStack000000000000000c = fStack000000000000000c + fVar13;
            in_stack_00000068 = in_stack_00000068 + fVar7;
            fVar5 = (float)FUN_09539d64(*(long *)(unaff_x19 + 0x28),0);
            FUN_09539e3c((fStack0000000000000000 + fVar3) - fVar5,in_stack_00000068 - fVar7,
                         fStack000000000000000c - fVar13,lVar2,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


