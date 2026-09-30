/*
FUNCTION_NAME: FUN_070cecc8
ENTRY_POINT: 070cecc8
PROGRAM: vandalizer-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_5
*/


undefined8 FUN_070cecc8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 local_28;
  
  if ((DAT_07a5a993 & 1) == 0) {
    FUN_031f20f4(OVRPlugin_OVRP_1_48_0_TypeInfo);
    FUN_031f20f4(OVRPlugin_OVRP_1_45_0_TypeInfo);
    FUN_031f20f4(OVRPlugin_OVRP_1_49_0_TypeInfo);
    FUN_031f20f4(UnityEngine_ResourceManagement_Profiling_EngineEmitter_TypeInfo);
    DAT_07a5a993 = 1;
  }
  puVar1 = UnityEngine_ResourceManagement_Profiling_EngineEmitter_TypeInfo;
  local_28 = 0;
  if (*(long *)(param_1 + 0x528) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  uVar2 = FUN_0512fed8(*(long *)(param_1 + 0x528),*(undefined8 *)OVRPlugin_OVRP_1_49_0_TypeInfo);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*(long *)puVar1);
  }
  uVar3 = FUN_06e67ac4(param_2,uVar2,&local_28,0);
  if ((uVar3 & 1) == 0) {
    local_28 = FUN_0543af1c(param_1,*(undefined8 *)OVRPlugin_OVRP_1_48_0_TypeInfo);
  }
  return local_28;
}


