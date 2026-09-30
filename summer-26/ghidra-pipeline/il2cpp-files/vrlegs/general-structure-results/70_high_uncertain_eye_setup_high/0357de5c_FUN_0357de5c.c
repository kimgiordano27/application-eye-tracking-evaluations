/*
FUNCTION_NAME: FUN_0357de5c
ENTRY_POINT: 0357de5c
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


undefined1  [16] FUN_0357de5c(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 extraout_s0;
  undefined4 uVar7;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar6 [16];
  
  puVar1 = PTR_DAT_03cbdf88;
  if ((DAT_0412e047 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cbdf88);
    FUN_01ab69ac(OVRPlugin_InsightPassthroughColorMapType_TypeInfo);
    DAT_0412e047 = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x110);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar2 = FUN_036d35a8(uVar3,0,0);
  puVar1 = OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
  if ((uVar2 & 1) == 0) {
    lVar4 = *(long *)(param_1 + 0x110);
    if (*(int *)(*(long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_0369e060(lVar4,*(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x3c),0);
    *(undefined4 *)(param_1 + 0x1e0) = extraout_s0;
    uVar5 = extraout_s0;
    uVar7 = extraout_var;
    uVar3 = extraout_var_00;
  }
  else {
    uVar5 = *(undefined4 *)(param_1 + 0x1e0);
    uVar7 = 0;
    uVar3 = 0;
  }
  auVar6._4_4_ = uVar7;
  auVar6._0_4_ = uVar5;
  auVar6._8_8_ = uVar3;
  return auVar6;
}


