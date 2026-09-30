/*
FUNCTION_NAME: OVRPlugin.OVRP_0_1_2$$ovrp_SetControllerVibration
ENTRY_POINT: 033ecd88
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong OVRPlugin_OVRP_0_1_2__ovrp_SetControllerVibration(int *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  ulong uVar6;
  int iVar7;
  
  puVar5 = StringLiteral_1209;
  if ((DAT_044a6b79 & 1) == 0) {
    FUN_01d7d918(StringLiteral_9323);
    FUN_01d7d918(StringLiteral_1209);
    DAT_044a6b79 = 1;
  }
  iVar7 = *(int *)(*(long *)puVar5 + 0xe0);
  if (iVar7 == 0) {
    thunk_FUN_01dc4f30();
    iVar7 = *(int *)(*(long *)puVar5 + 0xe0);
  }
  iVar2 = param_2[2];
  iVar3 = param_2[3];
  iVar4 = param_2[1];
  if (iVar7 == 0) {
    thunk_FUN_01dc4f30();
  }
  if ((iVar3 == 0 && iVar2 == 0) && iVar4 == 0) {
    if ((param_1[3] == 0 && param_1[2] == 0) && param_1[1] == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = (ulong)(*param_1 >> 0x1f | 1);
    }
  }
  else if ((param_1[3] == 0 && param_1[2] == 0) && param_1[1] == 0) {
    uVar6 = (ulong)-(*param_2 >> 0x1f | 1U);
  }
  else {
    uVar1 = (*param_1 >> 0x1f) - (*param_2 >> 0x1f);
    uVar6 = (ulong)uVar1;
    if (uVar1 == 0) {
      if (*(int *)(*(long *)StringLiteral_9323 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      uVar6 = FUN_033f2530(param_1,param_2);
      return uVar6;
    }
  }
  return uVar6;
}


