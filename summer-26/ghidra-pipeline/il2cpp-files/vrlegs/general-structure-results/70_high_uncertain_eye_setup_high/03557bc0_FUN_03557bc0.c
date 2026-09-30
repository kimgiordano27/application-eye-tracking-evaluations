/*
FUNCTION_NAME: FUN_03557bc0
ENTRY_POINT: 03557bc0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_03557bc0(long param_1,undefined4 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined4 local_28;
  undefined4 local_24;
  
  if ((DAT_0412df23 & 1) == 0) {
    FUN_01ab69ac(OVRPlugin_OVRP_1_70_0_TypeInfo);
    FUN_01ab69ac(OVRPlugin_OVRP_1_71_0_TypeInfo);
    DAT_0412df23 = 1;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    local_28 = param_2;
    uVar1 = FUN_0219c130(*(long *)(param_1 + 0x28),&local_28,
                         *(undefined8 *)OVRPlugin_OVRP_1_71_0_TypeInfo);
    if ((uVar1 & 1) == 0) {
      if (*(long *)(param_1 + 0x28) == 0) goto LAB_03557c5c;
      local_24 = param_2;
      FUN_0219b9a4(*(long *)(param_1 + 0x28),&local_24,param_3,
                   *(undefined8 *)OVRPlugin_OVRP_1_70_0_TypeInfo);
    }
    return;
  }
LAB_03557c5c:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


