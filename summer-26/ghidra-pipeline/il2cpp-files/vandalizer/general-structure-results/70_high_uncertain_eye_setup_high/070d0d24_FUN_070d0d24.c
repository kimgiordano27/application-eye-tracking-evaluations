/*
FUNCTION_NAME: FUN_070d0d24
ENTRY_POINT: 070d0d24
PROGRAM: vandalizer-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_6
*/


void FUN_070d0d24(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  if ((DAT_07a5a9b2 & 1) == 0) {
    FUN_031f20f4(OVRPlugin_OVRP_1_91_0_TypeInfo);
    FUN_031f20f4(OVRPlugin_OVRP_1_92_0_TypeInfo);
    FUN_031f20f4(PTR_DAT_07622790);
    FUN_031f20f4(OVRPlugin_OVRP_1_93_0_TypeInfo);
    DAT_07a5a9b2 = 1;
  }
  puVar1 = PTR_DAT_07622790;
  if (*(char *)(param_1 + 0x39) != '\0') {
    *(undefined1 *)(param_1 + 0x3a) = 1;
    puVar4 = OVRPlugin_OVRP_1_93_0_TypeInfo;
    puVar3 = OVRPlugin_OVRP_1_92_0_TypeInfo;
    puVar2 = OVRPlugin_OVRP_1_91_0_TypeInfo;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    FUN_06ed2f6c(1,0);
    uVar5 = FUN_070d04bc(param_1);
    uVar6 = thunk_FUN_0322f148(*(undefined8 *)puVar3);
    FUN_06ed3fe8(uVar6,uVar5,*(undefined8 *)puVar4,0);
    lVar8 = *(long *)puVar2;
    lVar7 = *(long *)(lVar8 + 0x38);
    if (lVar7 == 0) {
      FUN_0322bf50(lVar8);
      lVar7 = *(long *)(lVar8 + 0x38);
    }
    lVar7 = *(long *)(lVar7 + 0x10);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0322bef4();
    }
    if (*(int *)(lVar7 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    lVar7 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0322bef4();
    }
    FUN_06ed2b6c(uVar6,0,0,**(undefined8 **)(lVar7 + 0xb8),0);
    return;
  }
  return;
}


