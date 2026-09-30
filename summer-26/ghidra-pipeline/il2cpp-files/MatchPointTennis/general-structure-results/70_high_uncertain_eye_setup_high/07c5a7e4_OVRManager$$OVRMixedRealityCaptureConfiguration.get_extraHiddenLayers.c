/*
FUNCTION_NAME: OVRManager$$OVRMixedRealityCaptureConfiguration.get_extraHiddenLayers
ENTRY_POINT: 07c5a7e4
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


void OVRManager__OVRMixedRealityCaptureConfiguration_get_extraHiddenLayers
               (float param_1,undefined1 param_2 [16],undefined1 param_3 [16],float param_4,
               undefined1 param_5 [16],float param_6)

{
  float *pfVar1;
  long unaff_x19;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  ulong uVar12;
  float fVar13;
  float unaff_s8;
  float fVar14;
  float unaff_s9;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float in_stack_00000000;
  undefined8 in_stack_00000008;
  float in_stack_00000068;
  
  param_6 = param_6 - param_4;
  param_1 = unaff_s9 - param_1;
  if (DAT_0a51bf42 == '\0') {
    FUN_04447ba8(PTR_DAT_09f1e748);
    DAT_0a51bf42 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_09f1e748 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar8 = (ulong)(uint)DAT_01c7607c;
  uVar12 = (ulong)(uint)(param_1 * param_1);
  fVar3 = SQRT(param_1 * param_1 + unaff_s8 * unaff_s8 + param_6 * param_6);
  if (fVar3 <= DAT_01c7607c) {
    if (DAT_0a51bf43 == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e740);
      DAT_0a51bf43 = '\x01';
    }
    pfVar1 = *(float **)(*(long *)PTR_DAT_09f1e740 + 0xb8);
    fVar14 = *pfVar1;
    param_6 = pfVar1[1];
    param_1 = pfVar1[2];
  }
  else {
    fVar14 = unaff_s8 / fVar3;
    param_6 = param_6 / fVar3;
    param_1 = param_1 / fVar3;
  }
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    uVar6 = FUN_0953a5a4(*(long *)(unaff_x19 + 0x20),0);
    fVar3 = (float)FUN_09516bac(fVar14,param_6,param_1,uVar6,uVar8,uVar12,0);
    fVar14 = (float)uVar6;
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      fVar11 = fVar14;
      fVar5 = param_6;
      fVar9 = param_1;
      FUN_09537fe0(*(long *)(unaff_x19 + 0x20),0);
      fVar4 = (float)FUN_095165fc(0);
      lVar2 = *(long *)(unaff_x19 + 0x20);
      fVar7 = (fVar3 * fVar9 + param_6 * fVar11 + fVar14 * fVar5) - param_1 * fVar4;
      fVar10 = (param_6 * fVar4 + param_1 * fVar11 + fVar14 * fVar9) - fVar3 * fVar5;
      fVar13 = ((fVar14 * fVar11 - fVar3 * fVar4) - param_6 * fVar5) - param_1 * fVar9;
      fVar3 = (float)FUN_095165fc((param_1 * fVar5 + fVar3 * fVar11 + fVar14 * fVar4) -
                                  param_6 * fVar9,fVar7,fVar10,fVar13,0);
      if (lVar2 != 0) {
        fVar11 = (unaff_s12 * fVar3 + unaff_s13 * fVar13 + unaff_s11 * fVar10) - unaff_s14 * fVar7;
        fVar14 = (unaff_s14 * fVar10 + unaff_s12 * fVar13 + unaff_s11 * fVar7) - unaff_s13 * fVar3;
        FUN_0953a29c((unaff_s13 * fVar7 + unaff_s14 * fVar13 + unaff_s11 * fVar3) -
                     unaff_s12 * fVar10,fVar14,fVar11,
                     ((unaff_s11 * fVar13 - unaff_s14 * fVar3) - unaff_s12 * fVar7) -
                     unaff_s13 * fVar10,lVar2,0);
        lVar2 = *(long *)(unaff_x19 + 0x20);
        if (lVar2 != 0) {
          fVar3 = (float)FUN_09539d64(lVar2,0);
          if (*(long *)(unaff_x19 + 0x28) != 0) {
            in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + fVar11;
            in_stack_00000068 = in_stack_00000068 + fVar14;
            fVar5 = (float)FUN_09539d64(*(long *)(unaff_x19 + 0x28),0);
            FUN_09539e3c((in_stack_00000000 + fVar3) - fVar5,in_stack_00000068 - fVar14,
                         in_stack_00000008._4_4_ - fVar11,lVar2,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


