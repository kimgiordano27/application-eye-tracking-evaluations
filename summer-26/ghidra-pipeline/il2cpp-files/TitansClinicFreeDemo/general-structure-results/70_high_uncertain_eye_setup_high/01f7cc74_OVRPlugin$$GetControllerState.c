/*
FUNCTION_NAME: OVRPlugin$$GetControllerState
ENTRY_POINT: 01f7cc74
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetControllerState(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  ulong in_x9;
  ulong uVar4;
  
  *(undefined4 *)(param_1 + in_x9) = 0;
  uVar1 = in_x9 | 4;
  do {
    uVar2 = uVar1;
    uVar1 = uVar2 + 0x10;
    *(undefined8 *)(param_1 + uVar2) = 0;
    ((undefined8 *)(param_1 + uVar2))[1] = 0;
  } while (uVar1 <= param_2 - 0x10U);
  uVar4 = param_2 - (in_x9 | 4);
  uVar3 = (uint)uVar4;
  if ((uVar3 >> 3 & 1) != 0) {
    *(undefined8 *)(param_1 + uVar1) = 0;
    uVar1 = uVar2 + 0x18;
  }
  if ((uVar3 >> 2 & 1) != 0) {
    *(undefined4 *)(param_1 + uVar1) = 0;
    uVar1 = uVar1 + 4;
  }
  if ((uVar3 >> 1 & 1) != 0) {
    *(undefined2 *)(param_1 + uVar1) = 0;
    uVar1 = uVar1 + 2;
  }
  if ((uVar4 & 1) == 0) {
    return;
  }
  *(undefined1 *)(param_1 + uVar1) = 0;
  return;
}


