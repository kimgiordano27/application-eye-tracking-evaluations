/*
FUNCTION_NAME: Sirenix.Serialization.SerializationUtility$$SerializeValueWeak
ENTRY_POINT: 0620561c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 90
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined4
Sirenix_Serialization_SerializationUtility__SerializeValueWeak(undefined4 param_1,long param_2)

{
  undefined4 uVar1;
  void *pvVar2;
  ulong uVar3;
  ulong __size;
  char *local_60;
  undefined8 uStack_58;
  char *local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_34;
  
  if (DAT_07ee39b8 == (code *)0x0) {
    local_60 = "OVRPlugin";
    uStack_58 = 9;
    local_50 = "ovrp_GetExternalCameraName";
    uStack_48 = 0x1a;
    local_40 = DAT_0164fd00;
    local_38 = 0xc;
    local_34 = 0;
    DAT_07ee39b8 = (code *)thunk_FUN_036800c0(&local_60);
  }
  if (param_2 == 0) {
    uVar1 = (*DAT_07ee39b8)(param_1,0);
  }
  else {
    __size = *(ulong *)(param_2 + 0x18);
    pvVar2 = malloc(__size);
    if ((int)__size < 1) {
      uVar1 = (*DAT_07ee39b8)(param_1,pvVar2);
      if (pvVar2 == (void *)0x0) {
        return uVar1;
      }
    }
    else {
      uVar3 = 0;
      do {
        *(char *)((long)pvVar2 + uVar3) = (char)*(undefined2 *)(param_2 + 0x20 + uVar3 * 2);
        uVar3 = uVar3 + 1;
      } while ((__size & 0xffffffff) != uVar3);
      uVar1 = (*DAT_07ee39b8)(param_1,pvVar2);
    }
    thunk_FUN_03680360(pvVar2);
  }
  return uVar1;
}


