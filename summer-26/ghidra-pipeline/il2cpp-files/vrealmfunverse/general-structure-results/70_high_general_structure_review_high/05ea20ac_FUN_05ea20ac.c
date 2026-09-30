/*
FUNCTION_NAME: FUN_05ea20ac
ENTRY_POINT: 05ea20ac
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6
*/


void FUN_05ea20ac(undefined8 *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uStack_50;
  ulong local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulong local_30;
  
  if ((DAT_066dc89b & 1) == 0) {
    FUN_02b3c81c(Method_Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker_OnDisable__);
    FUN_02b3c81c(Method_Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker_OnFocusLost__);
    DAT_066dc89b = 1;
  }
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  if (-1 < *(int *)(param_2 + 0x18)) {
    lVar2 = *(long *)(param_2 + 0x10);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    iVar1 = *(int *)(param_2 + 0x18) + 1;
    if (iVar1 < *(int *)(lVar2 + 0x18)) {
      FUN_03836220(&local_40,lVar2,iVar1,
                   *(undefined8 *)
                    Method_Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker_OnFocusLost__);
      goto LAB_05ea2158;
    }
  }
  uStack_50 = 0;
  local_48 = 0;
  thunk_FUN_02bb0e9c(&uStack_50,0);
  local_48 = local_48 & 0xffffffff00000000;
  uStack_38 = uStack_50;
  local_40 = 0;
  local_30 = local_48;
LAB_05ea2158:
  param_1[1] = uStack_38;
  *param_1 = local_40;
  param_1[2] = local_30;
  return;
}


