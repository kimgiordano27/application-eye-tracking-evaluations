/*
FUNCTION_NAME: FUN_0356d4d8
ENTRY_POINT: 0356d4d8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0356d4d8(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  undefined4 local_24;
  
  if ((DAT_0412dfca & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cc8e90);
    FUN_01ab69ac(
                _Common_PlatformService_OculusService_Scripts_OculusGroupPresenceState_<>c__DisplayClass0_0_TypeInfo
                );
    FUN_01ab69ac(OVRPlugin_OVRP_1_83_0_TypeInfo);
    DAT_0412dfca = 1;
  }
  puVar1 = OVRPlugin_OVRP_1_83_0_TypeInfo;
  if (param_1 != 0) {
    uVar2 = FUN_0355ea04(param_1,0);
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01a58e78(lVar4);
      lVar4 = *(long *)puVar1;
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x60);
    if (lVar4 != 0) {
      local_24 = uVar2;
      uVar3 = FUN_021e5f08(lVar4,&local_24,*(undefined8 *)PTR_DAT_03cc8e90);
      if ((uVar3 & 1) != 0) {
        lVar4 = *(long *)puVar1;
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar4 = *(long *)puVar1;
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x58);
        if (lVar4 == 0) goto UnityEngine_Application__get_unityVersionVer;
        FUN_01b5f01c(lVar4,param_1,
                     *(undefined8 *)
                      _Common_PlatformService_OculusService_Scripts_OculusGroupPresenceState_<>c__DisplayClass0_0_TypeInfo
                    );
      }
      return;
    }
  }
UnityEngine_Application__get_unityVersionVer:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


