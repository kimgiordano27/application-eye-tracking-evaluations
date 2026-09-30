/*
FUNCTION_NAME: FUN_058e06a0
ENTRY_POINT: 058e06a0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_058e06a0(undefined8 param_1,long *param_2,undefined8 param_3)

{
  byte bVar1;
  
  if ((DAT_06b80b59 & 1) == 0) {
    FUN_02d6084c(OVRPlugin_OVRP_1_79_0_TypeInfo);
    DAT_06b80b59 = 1;
  }
  if (param_2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)OVRPlugin_OVRP_1_79_0_TypeInfo + 0x130);
    if (bVar1 <= *(byte *)(*param_2 + 0x130)) {
      if (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)OVRPlugin_OVRP_1_79_0_TypeInfo) {
        param_2 = (long *)0x0;
      }
      if ((param_2 != (long *)0x0) && (*(int *)((long)param_2 + 0x194) == 3)) {
        FUN_058d96ac(param_1,param_2,param_3);
        return;
      }
    }
  }
  return;
}


