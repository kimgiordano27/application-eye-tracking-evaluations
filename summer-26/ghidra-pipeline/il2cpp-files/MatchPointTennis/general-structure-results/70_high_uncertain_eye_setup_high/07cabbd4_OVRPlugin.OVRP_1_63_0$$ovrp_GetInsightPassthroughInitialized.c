/*
FUNCTION_NAME: OVRPlugin.OVRP_1_63_0$$ovrp_GetInsightPassthroughInitialized
ENTRY_POINT: 07cabbd4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_63_0__ovrp_GetInsightPassthroughInitialized(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  float *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  float unaff_s8;
  float fVar4;
  float unaff_s9;
  float fVar5;
  float unaff_s10;
  float fVar6;
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  if (*(float *)(*(long *)(*unaff_x21 + 0xb8) + 0xc) <=
      SQRT(unaff_s10 * unaff_s10 + unaff_s9 * unaff_s9 + unaff_s8 * unaff_s8)) {
    fVar5 = *unaff_x19;
    fVar6 = unaff_x19[1];
    fVar4 = unaff_x19[2];
    if (DAT_0a51bf42 == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e748);
      DAT_0a51bf42 = '\x01';
    }
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    fVar4 = SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6);
    if (fVar4 <= DAT_01c7607c) {
      if (DAT_0a51bf43 == '\0') {
        FUN_04447ba8(PTR_DAT_09f1e740);
        DAT_0a51bf43 = '\x01';
      }
      uVar2 = **(undefined8 **)(*(long *)PTR_DAT_09f1e740 + 0xb8);
      fVar4 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_09f1e740 + 0xb8) + 1);
    }
    else {
      uVar2 = CONCAT44((float)((ulong)*(undefined8 *)unaff_x19 >> 0x20) / fVar4,
                       (float)*(undefined8 *)unaff_x19 / fVar4);
      fVar4 = unaff_x19[2] / fVar4;
    }
    fVar5 = (float)((ulong)uVar2 >> 0x20);
    *(undefined8 *)unaff_x19 = uVar2;
    unaff_x19[2] = fVar4;
    if (ABS((float)uVar2) <= ABS(fVar5)) {
      if (unaff_x20 == 0) goto LAB_07cabd70;
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x20 + 0x18);
      uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
      uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
      if (fVar5 <= 0.0) {
        uVar2 = 4;
      }
      else {
        uVar2 = 5;
      }
    }
    else {
      if (unaff_x20 == 0) {
LAB_07cabd70:
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x20 + 0x18);
      uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
      uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
      if ((float)uVar2 <= 0.0) {
        uVar2 = 3;
      }
      else {
        uVar2 = 2;
      }
    }
  }
  else {
    if (unaff_x20 == 0) goto LAB_07cabd70;
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x20 + 0x18);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
    uVar2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x07cabd6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1,uVar2,uVar3);
  return;
}


