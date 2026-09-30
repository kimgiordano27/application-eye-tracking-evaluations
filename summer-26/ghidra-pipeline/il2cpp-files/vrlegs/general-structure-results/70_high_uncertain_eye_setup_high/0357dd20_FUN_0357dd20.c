/*
FUNCTION_NAME: FUN_0357dd20
ENTRY_POINT: 0357dd20
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


undefined4 FUN_0357dd20(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR_DAT_03cbdf88;
  if ((DAT_0412e046 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cbdf88);
    FUN_01ab69ac(OVRPlugin_InsightPassthroughColorMapType_TypeInfo);
    DAT_0412e046 = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x110);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar3 = FUN_036d35a8(uVar4,0,0);
  puVar1 = OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
  if ((uVar3 & 1) == 0) {
    lVar5 = *(long *)(param_1 + 0x110);
    if (*(int *)(*(long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    thunk_FUN_0369ba60(lVar5,*(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x44),0);
    uVar2 = FUN_01b6d7fc(0);
    *(undefined4 *)(param_1 + 0x1dc) = uVar2;
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0x1dc);
  }
  return uVar2;
}


