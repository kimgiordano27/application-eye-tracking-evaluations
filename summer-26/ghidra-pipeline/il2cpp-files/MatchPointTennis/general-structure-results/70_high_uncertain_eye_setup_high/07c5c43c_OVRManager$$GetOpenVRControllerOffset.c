/*
FUNCTION_NAME: OVRManager$$GetOpenVRControllerOffset
ENTRY_POINT: 07c5c43c
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


void OVRManager__GetOpenVRControllerOffset(undefined1 param_1 [16],float param_2,float param_3)

{
  int in_w8;
  float *pfVar1;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  float fVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined4 uVar7;
  ulong uVar8;
  undefined4 uVar9;
  float unaff_s8;
  float unaff_s10;
  float unaff_s12;
  ulong uVar10;
  float unaff_s13;
  ulong uVar11;
  float unaff_s14;
  float fVar12;
  float unaff_s15;
  undefined8 in_stack_00000008;
  
  if (in_w8 == 0) {
    FUN_04447ba8(PTR_DAT_09f1e748);
    *(undefined1 *)(unaff_x21 + 0xf42) = 1;
  }
  fVar12 = unaff_s14 - unaff_s8;
  param_2 = unaff_s13 - param_2;
  param_3 = unaff_s12 - param_3;
  if (*(int *)(*(long *)PTR_DAT_09f1e748 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar8 = (ulong)(uint)(param_3 * param_3);
  fVar2 = SQRT(param_3 * param_3 + fVar12 * fVar12 + param_2 * param_2);
  if (fVar2 <= DAT_01c7607c) {
    if (DAT_0a51bf43 == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e740);
      DAT_0a51bf43 = '\x01';
    }
    pfVar1 = *(float **)(*(long *)PTR_DAT_09f1e740 + 0xb8);
    fVar12 = *pfVar1;
    param_2 = pfVar1[1];
    param_3 = pfVar1[2];
  }
  else {
    fVar12 = fVar12 / fVar2;
    param_2 = param_2 / fVar2;
    param_3 = param_3 / fVar2;
  }
  uVar4 = (ulong)(uint)fVar12;
  uVar6 = (ulong)(uint)(param_3 * param_3);
  uVar10 = (ulong)(uint)param_2;
  uVar11 = (ulong)(uint)param_3;
  if (fVar12 * fVar12 + param_2 * param_2 + param_3 * param_3 == 0.0) {
    if (*(long *)(unaff_x20 + 0x28) == 0) goto LAB_07c5c5d0;
    uVar4 = FUN_0953a6a4(*(long *)(unaff_x20 + 0x28),0);
    uVar10 = uVar6;
    uVar11 = uVar8;
  }
  FUN_09516c60(uVar4,uVar10,uVar11,0);
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    FUN_094bab0c((in_stack_00000008._4_4_ * (float)uVar11 +
                 unaff_s15 * (float)uVar4 + unaff_s10 * (float)uVar10) * 0.5 + 0.5,
                 *(long *)(unaff_x20 + 0x38),0);
    uVar5 = *(undefined4 *)(unaff_x19 + 0x10);
    uVar7 = *(undefined4 *)(unaff_x19 + 0x14);
    uVar9 = *(undefined4 *)(unaff_x19 + 0x18);
    uVar3 = FUN_0951683c(*(undefined4 *)(unaff_x19 + 0xc),0);
    *(undefined4 *)(unaff_x19 + 0xc) = uVar3;
    *(undefined4 *)(unaff_x19 + 0x10) = uVar5;
    *(undefined4 *)(unaff_x19 + 0x14) = uVar7;
    *(undefined4 *)(unaff_x19 + 0x18) = uVar9;
    return;
  }
LAB_07c5c5d0:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


