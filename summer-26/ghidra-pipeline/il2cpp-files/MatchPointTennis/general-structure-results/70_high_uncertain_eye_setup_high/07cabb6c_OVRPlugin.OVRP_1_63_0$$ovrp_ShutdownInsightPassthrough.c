/*
FUNCTION_NAME: OVRPlugin.OVRP_1_63_0$$ovrp_ShutdownInsightPassthrough
ENTRY_POINT: 07cabb6c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_63_0__ovrp_ShutdownInsightPassthrough(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *UNRECOVERED_JUMPTABLE;
  float *unaff_x19;
  long *unaff_x21;
  float fVar6;
  float fVar7;
  float fVar8;
  
  puVar1 = PTR_DAT_09f51150;
  if (*(long *)(param_1 + 0x10) == 0) {
    return;
  }
  if (*(int *)(param_2 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
    param_1 = *(long *)(*unaff_x21 + 0xb8);
  }
  lVar2 = thunk_FUN_04485110(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)puVar1);
  if (DAT_0a51c009 == '\0') {
    FUN_04447ba8(PTR_DAT_09f1e748);
    DAT_0a51c009 = '\x01';
  }
  puVar1 = PTR_DAT_09f1e748;
  fVar8 = *unaff_x19;
  fVar7 = unaff_x19[1];
  fVar6 = unaff_x19[2];
  if (*(int *)(*(long *)PTR_DAT_09f1e748 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  if (*(float *)(*(long *)(*unaff_x21 + 0xb8) + 0xc) <=
      SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6)) {
    fVar7 = *unaff_x19;
    fVar8 = unaff_x19[1];
    fVar6 = unaff_x19[2];
    if (DAT_0a51bf42 == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e748);
      DAT_0a51bf42 = '\x01';
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    fVar6 = SQRT(fVar6 * fVar6 + fVar7 * fVar7 + fVar8 * fVar8);
    if (fVar6 <= DAT_01c7607c) {
      if (DAT_0a51bf43 == '\0') {
        FUN_04447ba8(PTR_DAT_09f1e740);
        DAT_0a51bf43 = '\x01';
      }
      uVar4 = **(undefined8 **)(*(long *)PTR_DAT_09f1e740 + 0xb8);
      fVar6 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_09f1e740 + 0xb8) + 1);
    }
    else {
      uVar4 = CONCAT44((float)((ulong)*(undefined8 *)unaff_x19 >> 0x20) / fVar6,
                       (float)*(undefined8 *)unaff_x19 / fVar6);
      fVar6 = unaff_x19[2] / fVar6;
    }
    fVar7 = (float)((ulong)uVar4 >> 0x20);
    *(undefined8 *)unaff_x19 = uVar4;
    unaff_x19[2] = fVar6;
    if (ABS((float)uVar4) <= ABS(fVar7)) {
      if (lVar2 == 0) goto LAB_07cabd70;
      UNRECOVERED_JUMPTABLE = *(code **)(lVar2 + 0x18);
      uVar3 = *(undefined8 *)(lVar2 + 0x40);
      uVar5 = *(undefined8 *)(lVar2 + 0x28);
      if (fVar7 <= 0.0) {
        uVar4 = 4;
      }
      else {
        uVar4 = 5;
      }
    }
    else {
      if (lVar2 == 0) {
LAB_07cabd70:
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      UNRECOVERED_JUMPTABLE = *(code **)(lVar2 + 0x18);
      uVar3 = *(undefined8 *)(lVar2 + 0x40);
      uVar5 = *(undefined8 *)(lVar2 + 0x28);
      if ((float)uVar4 <= 0.0) {
        uVar4 = 3;
      }
      else {
        uVar4 = 2;
      }
    }
  }
  else {
    if (lVar2 == 0) goto LAB_07cabd70;
    UNRECOVERED_JUMPTABLE = *(code **)(lVar2 + 0x18);
    uVar3 = *(undefined8 *)(lVar2 + 0x40);
    uVar5 = *(undefined8 *)(lVar2 + 0x28);
    uVar4 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x07cabd6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar3,uVar4,uVar5);
  return;
}


