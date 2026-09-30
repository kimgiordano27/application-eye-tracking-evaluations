/*
FUNCTION_NAME: OVRManager$$get_isBoundaryVisibilitySuppressed
ENTRY_POINT: 07c5a9c8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_isBoundaryVisibilitySuppressed(float param_1)

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
  ulong uVar9;
  float fVar10;
  float fVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  float unaff_s8;
  float fVar15;
  float unaff_s9;
  float unaff_s10;
  float fVar16;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float in_stack_00000000;
  undefined8 in_stack_00000008;
  float in_stack_00000068;
  
  uVar9 = (ulong)(uint)DAT_01c7607c;
  uVar12 = (ulong)(uint)(unaff_s9 * unaff_s9);
  fVar3 = SQRT(unaff_s9 * unaff_s9 + param_1 + unaff_s10 * unaff_s10);
  if (fVar3 <= DAT_01c7607c) {
    if (DAT_0a51bf43 == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e740);
      DAT_0a51bf43 = '\x01';
    }
    pfVar1 = *(float **)(*(long *)PTR_DAT_09f1e740 + 0xb8);
    fVar15 = *pfVar1;
    fVar16 = pfVar1[1];
    fVar3 = pfVar1[2];
  }
  else {
    fVar15 = unaff_s8 / fVar3;
    fVar16 = unaff_s10 / fVar3;
    fVar3 = unaff_s9 / fVar3;
  }
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    uVar6 = FUN_0953a5a4(*(long *)(unaff_x19 + 0x20),0);
    fVar15 = (float)FUN_09516bac(fVar15,fVar16,fVar3,uVar6,uVar9,uVar12,0);
    fVar5 = (float)uVar6;
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      fVar13 = fVar5;
      fVar7 = fVar16;
      fVar10 = fVar3;
      FUN_09537fe0(*(long *)(unaff_x19 + 0x20),0);
      fVar4 = (float)FUN_095165fc(0);
      lVar2 = *(long *)(unaff_x19 + 0x20);
      fVar8 = (fVar15 * fVar10 + fVar16 * fVar13 + fVar5 * fVar7) - fVar3 * fVar4;
      fVar11 = (fVar16 * fVar4 + fVar3 * fVar13 + fVar5 * fVar10) - fVar15 * fVar7;
      fVar14 = ((fVar5 * fVar13 - fVar15 * fVar4) - fVar16 * fVar7) - fVar3 * fVar10;
      fVar3 = (float)FUN_095165fc((fVar3 * fVar7 + fVar15 * fVar13 + fVar5 * fVar4) -
                                  fVar16 * fVar10,fVar8,fVar11,fVar14,0);
      if (lVar2 != 0) {
        fVar15 = (unaff_s12 * fVar3 + unaff_s13 * fVar14 + unaff_s11 * fVar11) - unaff_s14 * fVar8;
        fVar16 = (unaff_s14 * fVar11 + unaff_s12 * fVar14 + unaff_s11 * fVar8) - unaff_s13 * fVar3;
        FUN_0953a29c((unaff_s13 * fVar8 + unaff_s14 * fVar14 + unaff_s11 * fVar3) -
                     unaff_s12 * fVar11,fVar16,fVar15,
                     ((unaff_s11 * fVar14 - unaff_s14 * fVar3) - unaff_s12 * fVar8) -
                     unaff_s13 * fVar11,lVar2,0);
        lVar2 = *(long *)(unaff_x19 + 0x20);
        if (lVar2 != 0) {
          fVar3 = (float)FUN_09539d64(lVar2,0);
          if (*(long *)(unaff_x19 + 0x28) != 0) {
            in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + fVar15;
            in_stack_00000068 = in_stack_00000068 + fVar16;
            fVar5 = (float)FUN_09539d64(*(long *)(unaff_x19 + 0x28),0);
            FUN_09539e3c((in_stack_00000000 + fVar3) - fVar5,in_stack_00000068 - fVar16,
                         in_stack_00000008._4_4_ - fVar15,lVar2,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


