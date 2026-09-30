/*
FUNCTION_NAME: OVRManager$$get_xrApi
ENTRY_POINT: 07c5a9dc
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


void OVRManager__get_xrApi(float param_1,undefined8 param_2,undefined8 param_3)

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
  float fVar10;
  float fVar11;
  float fVar12;
  float unaff_s8;
  float fVar13;
  float unaff_s9;
  float unaff_s10;
  float fVar14;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float in_stack_00000000;
  undefined8 in_stack_00000008;
  float in_stack_00000068;
  
  fVar3 = SQRT((float)param_3 + param_1);
  if (fVar3 <= (float)param_2) {
    if (DAT_0a51bf43 == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e740);
      DAT_0a51bf43 = '\x01';
    }
    pfVar1 = *(float **)(*(long *)PTR_DAT_09f1e740 + 0xb8);
    fVar13 = *pfVar1;
    fVar14 = pfVar1[1];
    fVar3 = pfVar1[2];
  }
  else {
    fVar13 = unaff_s8 / fVar3;
    fVar14 = unaff_s10 / fVar3;
    fVar3 = unaff_s9 / fVar3;
  }
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    uVar6 = FUN_0953a5a4(*(long *)(unaff_x19 + 0x20),0);
    fVar13 = (float)FUN_09516bac(fVar13,fVar14,fVar3,uVar6,param_2,param_3,0);
    fVar5 = (float)uVar6;
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      fVar11 = fVar5;
      fVar7 = fVar14;
      fVar9 = fVar3;
      FUN_09537fe0(*(long *)(unaff_x19 + 0x20),0);
      fVar4 = (float)FUN_095165fc(0);
      lVar2 = *(long *)(unaff_x19 + 0x20);
      fVar8 = (fVar13 * fVar9 + fVar14 * fVar11 + fVar5 * fVar7) - fVar3 * fVar4;
      fVar10 = (fVar14 * fVar4 + fVar3 * fVar11 + fVar5 * fVar9) - fVar13 * fVar7;
      fVar12 = ((fVar5 * fVar11 - fVar13 * fVar4) - fVar14 * fVar7) - fVar3 * fVar9;
      fVar3 = (float)FUN_095165fc((fVar3 * fVar7 + fVar13 * fVar11 + fVar5 * fVar4) - fVar14 * fVar9
                                  ,fVar8,fVar10,fVar12,0);
      if (lVar2 != 0) {
        fVar13 = (unaff_s12 * fVar3 + unaff_s13 * fVar12 + unaff_s11 * fVar10) - unaff_s14 * fVar8;
        fVar14 = (unaff_s14 * fVar10 + unaff_s12 * fVar12 + unaff_s11 * fVar8) - unaff_s13 * fVar3;
        FUN_0953a29c((unaff_s13 * fVar8 + unaff_s14 * fVar12 + unaff_s11 * fVar3) -
                     unaff_s12 * fVar10,fVar14,fVar13,
                     ((unaff_s11 * fVar12 - unaff_s14 * fVar3) - unaff_s12 * fVar8) -
                     unaff_s13 * fVar10,lVar2,0);
        lVar2 = *(long *)(unaff_x19 + 0x20);
        if (lVar2 != 0) {
          fVar3 = (float)FUN_09539d64(lVar2,0);
          if (*(long *)(unaff_x19 + 0x28) != 0) {
            in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + fVar13;
            in_stack_00000068 = in_stack_00000068 + fVar14;
            fVar5 = (float)FUN_09539d64(*(long *)(unaff_x19 + 0x28),0);
            FUN_09539e3c((in_stack_00000000 + fVar3) - fVar5,in_stack_00000068 - fVar14,
                         in_stack_00000008._4_4_ - fVar13,lVar2,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


