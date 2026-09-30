/*
FUNCTION_NAME: FUN_03597dac
ENTRY_POINT: 03597dac
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


long FUN_03597dac(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ushort uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  uint local_4c;
  ushort local_48 [2];
  uint local_44;
  
  puVar2 = Unity_Services_RemoteConfig_RemoteConfigInitializer_<>c_TypeInfo;
  puVar1 = Fusion_Photon_Realtime_RegionPinger_<RegionPingCoroutine>d__22_TypeInfo;
  if ((DAT_0412e0a8 & 1) == 0) {
    FUN_01ab69ac(Unity_Services_RemoteConfig_RemoteConfigService_<>c_TypeInfo);
    FUN_01ab69ac(OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
    FUN_01ab69ac(Unity_Services_RemoteConfig_RemoteConfigInitializer_<>c_TypeInfo);
    FUN_01ab69ac(Fusion_Photon_Realtime_RegionPinger_<RegionPingCoroutine>d__22_TypeInfo);
    DAT_0412e0a8 = 1;
  }
  lVar4 = thunk_FUN_01a89e68(*(undefined8 *)puVar1);
  FUN_0219a4f0(lVar4,*(undefined8 *)puVar2);
  if ((param_1 != 0) &&
     (lVar5 = FUN_036d27fc(param_1,0),
     puVar2 = Unity_Services_RemoteConfig_RemoteConfigService_<>c_TypeInfo,
     puVar1 = OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo, lVar5 != 0)) {
    if (0 < *(int *)(lVar5 + 0x10)) {
      iVar7 = 0;
      do {
        uVar3 = FUN_025b8a2c(lVar5,iVar7,0);
        if (lVar4 == 0) goto LAB_03597ee0;
        local_4c = (uint)uVar3;
        uVar6 = FUN_0219c130(lVar4,&local_4c,*(undefined8 *)puVar1);
        if ((uVar6 & 1) == 0) {
          local_48[0] = uVar3;
          local_44 = (uint)uVar3;
          FUN_0219b9a4(lVar4,&local_44,local_48,*(undefined8 *)puVar2);
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(lVar5 + 0x10));
    }
    return lVar4;
  }
LAB_03597ee0:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


