/*
FUNCTION_NAME: FUN_070ce268
ENTRY_POINT: 070ce268
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


ulong FUN_070ce268(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint local_24;
  
  if ((DAT_07a5a986 & 1) == 0) {
    FUN_031f20f4(OVRPlugin_OVRP_1_29_0_TypeInfo);
    FUN_031f20f4(OVRPlugin_OVRP_1_1_0_TypeInfo);
    FUN_031f20f4(OVRPlugin_OVRP_1_2_0_TypeInfo);
    FUN_031f20f4(UnityEngine_ResourceManagement_Profiling_EngineEmitter_TypeInfo);
    DAT_07a5a986 = 1;
  }
  puVar1 = UnityEngine_ResourceManagement_Profiling_EngineEmitter_TypeInfo;
  local_24 = 0;
  if (*(long *)(param_1 + 0x528) != 0) {
    uVar2 = FUN_0512c408(*(long *)(param_1 + 0x528),*(undefined8 *)OVRPlugin_OVRP_1_2_0_TypeInfo);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*(long *)puVar1);
    }
    uVar3 = FUN_06e67c64(param_2,uVar2,&local_24,0);
    if ((uVar3 & 1) == 0) {
      uVar3 = FUN_05438584(param_1,*(undefined8 *)OVRPlugin_OVRP_1_29_0_TypeInfo);
    }
    else {
      uVar3 = (ulong)local_24;
    }
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


