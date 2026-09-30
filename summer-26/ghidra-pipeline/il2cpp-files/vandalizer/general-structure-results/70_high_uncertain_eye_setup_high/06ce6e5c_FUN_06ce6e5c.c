/*
FUNCTION_NAME: FUN_06ce6e5c
ENTRY_POINT: 06ce6e5c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_5
*/


ulong FUN_06ce6e5c(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  
  param_4 = param_4 & 0xffffffff;
  if ((DAT_07a50ac6 & 1) == 0) {
    FUN_031f20f4(OVRTask<bool>_TypeInfo);
    FUN_031f20f4(PTR_DAT_075b8c38);
    FUN_031f20f4(OVRTask<Int32Enum>_TypeInfo);
    FUN_031f20f4(OVRTask<OVRAnchor>_TypeInfo);
    FUN_031f20f4(OVRTask<OVRPlugin_Result>_TypeInfo);
    FUN_031f20f4(System_Collections_Generic_HashSet<DerObjectIdentifier>_TypeInfo);
    DAT_07a50ac6 = 1;
  }
  if (*(int *)(param_1 + 0x2c8) == 0) {
    if (*(int *)(*(long *)PTR_DAT_075b8c38 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    uVar4 = FUN_06ee4bd4(0);
    iVar5 = *(int *)(param_1 + 0x2cc);
    if (((uVar4 & 1) == 0) || (iVar5 != 0)) {
      if ((uVar4 & 1) != 0) {
        return param_4;
      }
      goto LAB_06ce6fa0;
    }
UnityEngine_Camera__SetStereoProjectionMatrix:
    puVar1 = OVRTask<OVRPlugin_Result>_TypeInfo;
    lVar2 = *(long *)OVRTask<OVRPlugin_Result>_TypeInfo;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      lVar2 = *(long *)puVar1;
    }
    lVar6 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
    if (lVar6 != 0) goto LAB_06ce7028;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      lVar2 = *(long *)puVar1;
    }
    uVar7 = **(undefined8 **)(lVar2 + 0xb8);
    lVar6 = thunk_FUN_0322f148(*(undefined8 *)OVRTask<bool>_TypeInfo);
    FUN_042d5df8(lVar6,uVar7,*(undefined8 *)OVRTask<Int32Enum>_TypeInfo,0);
    plVar3 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
    *plVar3 = lVar6;
  }
  else {
    if (*(int *)(param_1 + 0x2c8) == 2) {
      if (*(int *)(param_1 + 0x2cc) != 0) {
        return param_4;
      }
      goto UnityEngine_Camera__SetStereoProjectionMatrix;
    }
    iVar5 = *(int *)(param_1 + 0x2cc);
LAB_06ce6fa0:
    puVar1 = OVRTask<OVRPlugin_Result>_TypeInfo;
    if (iVar5 != 1) {
      return param_4;
    }
    lVar2 = *(long *)OVRTask<OVRPlugin_Result>_TypeInfo;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      lVar2 = *(long *)puVar1;
    }
    lVar6 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x10);
    if (lVar6 != 0) goto LAB_06ce7028;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      lVar2 = *(long *)puVar1;
    }
    uVar7 = **(undefined8 **)(lVar2 + 0xb8);
    lVar6 = thunk_FUN_0322f148(*(undefined8 *)OVRTask<bool>_TypeInfo);
    FUN_042d5df8(lVar6,uVar7,*(undefined8 *)OVRTask<OVRAnchor>_TypeInfo,0);
    plVar3 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
    *plVar3 = lVar6;
  }
  thunk_FUN_0329bf60(plVar3,lVar6);
LAB_06ce7028:
  if (*(int *)(*(long *)System_Collections_Generic_HashSet<DerObjectIdentifier>_TypeInfo + 0xe4) ==
      0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar4 = FUN_06ce7080(param_2,param_3,param_4,lVar6);
  return uVar4;
}


