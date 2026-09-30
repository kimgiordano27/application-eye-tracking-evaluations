/*
FUNCTION_NAME: OVRManager$$OVRMixedRealityCaptureConfiguration.set_enableMixedReality
ENTRY_POINT: 07c5a7d8
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


void OVRManager__OVRMixedRealityCaptureConfiguration_set_enableMixedReality
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6)

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
  float fVar12;
  ulong uVar13;
  float fVar14;
  float unaff_s9;
  float fVar15;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float in_stack_00000000;
  undefined8 in_stack_00000008;
  float in_stack_00000068;
  
  param_5 = param_5 - param_3;
  param_6 = param_6 - param_4 / param_1;
  fVar15 = unaff_s9 - param_2 / param_1;
  if (DAT_0a51bf42 == '\0') {
    FUN_04447ba8(PTR_DAT_09f1e748);
    DAT_0a51bf42 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_09f1e748 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar9 = (ulong)(uint)DAT_01c7607c;
  uVar13 = (ulong)(uint)(fVar15 * fVar15);
  fVar3 = SQRT(fVar15 * fVar15 + param_5 * param_5 + param_6 * param_6);
  if (fVar3 <= DAT_01c7607c) {
    if (DAT_0a51bf43 == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e740);
      DAT_0a51bf43 = '\x01';
    }
    pfVar1 = *(float **)(*(long *)PTR_DAT_09f1e740 + 0xb8);
    param_5 = *pfVar1;
    param_6 = pfVar1[1];
    fVar15 = pfVar1[2];
  }
  else {
    param_5 = param_5 / fVar3;
    param_6 = param_6 / fVar3;
    fVar15 = fVar15 / fVar3;
  }
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    uVar6 = FUN_0953a5a4(*(long *)(unaff_x19 + 0x20),0);
    fVar3 = (float)FUN_09516bac(param_5,param_6,fVar15,uVar6,uVar9,uVar13,0);
    fVar12 = (float)uVar6;
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      fVar5 = fVar12;
      fVar7 = param_6;
      fVar10 = fVar15;
      FUN_09537fe0(*(long *)(unaff_x19 + 0x20),0);
      fVar4 = (float)FUN_095165fc(0);
      lVar2 = *(long *)(unaff_x19 + 0x20);
      fVar8 = (fVar3 * fVar10 + param_6 * fVar5 + fVar12 * fVar7) - fVar15 * fVar4;
      fVar11 = (param_6 * fVar4 + fVar15 * fVar5 + fVar12 * fVar10) - fVar3 * fVar7;
      fVar14 = ((fVar12 * fVar5 - fVar3 * fVar4) - param_6 * fVar7) - fVar15 * fVar10;
      fVar15 = (float)FUN_095165fc((fVar15 * fVar7 + fVar3 * fVar5 + fVar12 * fVar4) -
                                   param_6 * fVar10,fVar8,fVar11,fVar14,0);
      if (lVar2 != 0) {
        fVar12 = (unaff_s12 * fVar15 + unaff_s13 * fVar14 + unaff_s11 * fVar11) - unaff_s14 * fVar8;
        fVar3 = (unaff_s14 * fVar11 + unaff_s12 * fVar14 + unaff_s11 * fVar8) - unaff_s13 * fVar15;
        FUN_0953a29c((unaff_s13 * fVar8 + unaff_s14 * fVar14 + unaff_s11 * fVar15) -
                     unaff_s12 * fVar11,fVar3,fVar12,
                     ((unaff_s11 * fVar14 - unaff_s14 * fVar15) - unaff_s12 * fVar8) -
                     unaff_s13 * fVar11,lVar2,0);
        lVar2 = *(long *)(unaff_x19 + 0x20);
        if (lVar2 != 0) {
          fVar15 = (float)FUN_09539d64(lVar2,0);
          if (*(long *)(unaff_x19 + 0x28) != 0) {
            in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + fVar12;
            in_stack_00000068 = in_stack_00000068 + fVar3;
            fVar5 = (float)FUN_09539d64(*(long *)(unaff_x19 + 0x28),0);
            FUN_09539e3c((in_stack_00000000 + fVar15) - fVar5,in_stack_00000068 - fVar3,
                         in_stack_00000008._4_4_ - fVar12,lVar2,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


