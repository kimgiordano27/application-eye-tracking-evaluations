/*
FUNCTION_NAME: FUN_073c9d3c
ENTRY_POINT: 073c9d3c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_073c9d3c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 local_40 [16];
  long local_28;
  
  if ((DAT_082696ba & 1) == 0) {
    FUN_0373b518(OVRLocatable_TypeInfo);
    FUN_0373b518(OVRManager_TypeInfo);
    DAT_082696ba = 1;
  }
  puVar1 = OVRManager_TypeInfo;
  local_28 = 0;
  local_40._0_8_ = 0;
  local_40._8_8_ = 0;
  if (param_1[0x23] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  local_40 = FUN_0480eb20(param_1[0x23],&local_28,*(undefined8 *)OVRLocatable_TypeInfo);
  if (local_28 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  *(long *)(local_28 + 0x20) = (long)param_1;
  thunk_FUN_037aeb94((long *)(local_28 + 0x20),param_1);
  if (local_28 != 0) {
    *(undefined8 *)(local_28 + 0x10) = param_2;
    thunk_FUN_037aeb94((undefined8 *)(local_28 + 0x10),param_2);
    if (local_28 != 0) {
      *(undefined8 *)(local_28 + 0x18) = param_3;
      thunk_FUN_037aeb94((undefined8 *)(local_28 + 0x18),param_3);
      (**(code **)(*param_1 + 0x468))
                (param_1,param_2,param_3,local_28,*(undefined8 *)(*param_1 + 0x470));
      FUN_04fafd58(local_40,*(undefined8 *)puVar1);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


