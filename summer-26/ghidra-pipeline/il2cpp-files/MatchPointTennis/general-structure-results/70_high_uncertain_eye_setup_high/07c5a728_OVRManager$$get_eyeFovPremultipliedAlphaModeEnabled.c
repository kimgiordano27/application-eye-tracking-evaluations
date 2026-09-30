/*
FUNCTION_NAME: OVRManager$$get_eyeFovPremultipliedAlphaModeEnabled
ENTRY_POINT: 07c5a728
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_eyeFovPremultipliedAlphaModeEnabled
               (undefined1 param_1 [16],float param_2,float param_3)

{
  float *pfVar1;
  long unaff_x19;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  ulong uVar14;
  float fVar15;
  float unaff_s9;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  float fStack0000000000000000;
  float fStack0000000000000004;
  undefined8 in_stack_00000008;
  float fStack0000000000000068;
  
  fStack0000000000000000 = unaff_s15;
  fStack0000000000000068 = unaff_s9;
  fVar3 = (float)FUN_0953a6a4();
                    /* try { // try from 07c5a738 to 07d5a73b has its CatchHandler @ 07c5a818 */
                    /* try { // try from 07c5a73c to 07d5a73f has its CatchHandler @ 07c5a814 */
  fStack0000000000000004 = param_2;
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    fVar6 = param_3;
                    /* try { // try from 07c5a740 to 07d5a743 has its CatchHandler @ 07c5a810 */
                    /* try { // try from 07c5a744 to 07d5a7ff has its CatchHandler @ 07c5a414 */
    fVar4 = (float)FUN_0953a5a4(*(long *)(unaff_x19 + 0x20),0);
    if (DAT_0a5233ad == '\0') {
      FUN_04447ba8(PTR_DAT_09f1f580);
      DAT_0a5233ad = '\x01';
    }
    fVar5 = fVar6 * fVar6 + fVar4 * fVar4 + param_2 * param_2;
    fVar9 = fStack0000000000000004;
    if (**(float **)(*(long *)PTR_DAT_09f1f580 + 0xb8) <= fVar5) {
      fVar9 = param_3 * fVar6 + fVar3 * fVar4 + fStack0000000000000004 * param_2;
      fVar3 = fVar3 - (fVar4 * fVar9) / fVar5;
      param_3 = param_3 - (fVar6 * fVar9) / fVar5;
      fVar9 = fStack0000000000000004 - (param_2 * fVar9) / fVar5;
    }
    if (DAT_0a51bf42 == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e748);
      DAT_0a51bf42 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_09f1e748 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar11 = (ulong)(uint)DAT_01c7607c;
    uVar14 = (ulong)(uint)(param_3 * param_3);
    fVar6 = SQRT(param_3 * param_3 + fVar3 * fVar3 + fVar9 * fVar9);
    if (fVar6 <= DAT_01c7607c) {
      if (DAT_0a51bf43 == '\0') {
        FUN_04447ba8(PTR_DAT_09f1e740);
        DAT_0a51bf43 = '\x01';
      }
      pfVar1 = *(float **)(*(long *)PTR_DAT_09f1e740 + 0xb8);
      fVar3 = *pfVar1;
      fVar9 = pfVar1[1];
      param_3 = pfVar1[2];
    }
    else {
      fVar3 = fVar3 / fVar6;
      fVar9 = fVar9 / fVar6;
      param_3 = param_3 / fVar6;
    }
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      uVar8 = FUN_0953a5a4(*(long *)(unaff_x19 + 0x20),0);
      fVar3 = (float)FUN_09516bac(fVar3,fVar9,param_3,uVar8,uVar11,uVar14,0);
      fVar6 = (float)uVar8;
      if (*(long *)(unaff_x19 + 0x20) != 0) {
        fVar4 = fVar6;
        fVar5 = fVar9;
        fVar12 = param_3;
        FUN_09537fe0(*(long *)(unaff_x19 + 0x20),0);
        fVar7 = (float)FUN_095165fc(0);
        lVar2 = *(long *)(unaff_x19 + 0x20);
        fVar10 = (fVar3 * fVar12 + fVar9 * fVar4 + fVar6 * fVar5) - param_3 * fVar7;
        fVar13 = (fVar9 * fVar7 + param_3 * fVar4 + fVar6 * fVar12) - fVar3 * fVar5;
        fVar15 = ((fVar6 * fVar4 - fVar3 * fVar7) - fVar9 * fVar5) - param_3 * fVar12;
        fVar3 = (float)FUN_095165fc((param_3 * fVar5 + fVar3 * fVar4 + fVar6 * fVar7) -
                                    fVar9 * fVar12,fVar10,fVar13,fVar15,0);
        if (lVar2 != 0) {
          fVar4 = (unaff_s12 * fVar3 + unaff_s13 * fVar15 + unaff_s11 * fVar13) - unaff_s14 * fVar10
          ;
          fVar6 = (unaff_s14 * fVar13 + unaff_s12 * fVar15 + unaff_s11 * fVar10) - unaff_s13 * fVar3
          ;
          FUN_0953a29c((unaff_s13 * fVar10 + unaff_s14 * fVar15 + unaff_s11 * fVar3) -
                       unaff_s12 * fVar13,fVar6,fVar4,
                       ((unaff_s11 * fVar15 - unaff_s14 * fVar3) - unaff_s12 * fVar10) -
                       unaff_s13 * fVar13,lVar2,0);
          lVar2 = *(long *)(unaff_x19 + 0x20);
          if (lVar2 != 0) {
            fVar3 = (float)FUN_09539d64(lVar2,0);
            if (*(long *)(unaff_x19 + 0x28) != 0) {
              in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + fVar4;
              fVar5 = fStack0000000000000068 + fVar6;
              fVar9 = (float)FUN_09539d64(*(long *)(unaff_x19 + 0x28),0);
              FUN_09539e3c((fStack0000000000000000 + fVar3) - fVar9,fVar5 - fVar6,
                           in_stack_00000008._4_4_ - fVar4,lVar2,0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


