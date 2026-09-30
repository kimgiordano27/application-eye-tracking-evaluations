/*
FUNCTION_NAME: FUN_075b7bdc
ENTRY_POINT: 075b7bdc
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_4
*/


uint FUN_075b7bdc(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  puVar1 = OVRPlugin_<>c_TypeInfo;
  if ((DAT_0826e45e & 1) == 0) {
    FUN_0373b518(OVRPlugin_EyeTextureFormat_TypeInfo);
    FUN_0373b518(OVRPlugin_<>c_TypeInfo);
    DAT_0826e45e = 1;
  }
  local_40 = 0;
  local_38 = 0;
  local_48 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar2 = FUN_075b7b58(param_1,param_3,&local_38);
  if (((uVar2 & 1) == 0) && (local_38 != 0)) {
    uVar3 = FUN_060c08a0(param_2,0);
    if ((uVar3 & 1) == 0) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      uVar3 = FUN_075b7b58(param_2,&local_40,&local_48);
      if ((uVar3 & 1) != 0) {
        *param_3 = local_40;
        if (local_38 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        uVar2 = FUN_042bd75c(local_38,param_3,0,1,*(undefined8 *)OVRPlugin_EyeTextureFormat_TypeInfo
                            );
        goto LAB_075b7cc4;
      }
    }
    uVar2 = 0;
  }
LAB_075b7cc4:
  return uVar2 & 1;
}


