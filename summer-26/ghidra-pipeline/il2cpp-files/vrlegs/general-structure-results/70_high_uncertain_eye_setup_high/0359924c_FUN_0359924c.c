/*
FUNCTION_NAME: FUN_0359924c
ENTRY_POINT: 0359924c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined8 FUN_0359924c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR_DAT_03cbdf88;
  if ((DAT_0412e0ae & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d09ac8);
    FUN_01ab69ac(PTR_DAT_03cbdf88);
    FUN_01ab69ac(OVRPlugin_InsightPassthroughColorMapType_TypeInfo);
    DAT_0412e0ae = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar3 = FUN_036d35a8(param_1,0,0);
  puVar1 = OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
  if ((uVar3 & 1) == 0) {
    if (*(int *)(*(long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar3 = FUN_03699d3c(param_1,*(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x9c),0);
    if ((uVar3 & 1) != 0) {
      uVar4 = FUN_0369b288(param_1,0);
      lVar5 = *(long *)puVar1;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar5);
        lVar5 = *(long *)puVar1;
      }
      puVar2 = PTR_DAT_03d09ac8;
      uVar3 = FUN_01f65944(uVar4,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0xf8),
                           *(undefined8 *)PTR_DAT_03d09ac8);
      if ((uVar3 & 1) == 0) {
        uVar4 = FUN_0369b288(param_1,0);
        lVar5 = *(long *)puVar1;
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar5);
          lVar5 = *(long *)puVar1;
        }
        uVar3 = FUN_01f65944(uVar4,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x100),
                             *(undefined8 *)puVar2);
        if ((uVar3 & 1) == 0) {
          uVar4 = FUN_0369b288(param_1,0);
          lVar5 = *(long *)puVar1;
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_01a58e78(lVar5);
            lVar5 = *(long *)puVar1;
          }
          uVar4 = FUN_01f65944(uVar4,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x108),
                               *(undefined8 *)puVar2);
          return uVar4;
        }
      }
      return 1;
    }
  }
  return 0;
}


