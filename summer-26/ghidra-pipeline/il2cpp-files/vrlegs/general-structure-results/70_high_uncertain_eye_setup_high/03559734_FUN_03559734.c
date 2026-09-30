/*
FUNCTION_NAME: FUN_03559734
ENTRY_POINT: 03559734
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_5
*/


void FUN_03559734(long param_1,int param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((DAT_0412df4b & 1) == 0) {
    FUN_01ab69ac(OVRPlugin_InsightPassthroughColorMapType_TypeInfo);
    DAT_0412df4b = 1;
  }
  puVar1 = OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
  if (param_2 == 2) {
    lVar3 = *(long *)(param_1 + 0x110);
    if (*(int *)(*(long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if (lVar3 == 0) goto LAB_03559878;
    FUN_0369a6dc(lVar3,*(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xf8),0);
LAB_035597e4:
    lVar3 = *(long *)(param_1 + 0x110);
    if (lVar3 == 0) goto LAB_03559878;
    uVar2 = *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x100);
  }
  else {
    if (param_2 != 1) {
      if (param_2 != 0) {
        return;
      }
      lVar3 = *(long *)(param_1 + 0x110);
      if (*(int *)(*(long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (lVar3 == 0) goto LAB_03559878;
      FUN_0369a720(lVar3,*(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xf8),0);
      goto LAB_035597e4;
    }
    lVar3 = *(long *)(param_1 + 0x110);
    if (*(int *)(*(long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if (lVar3 == 0) goto LAB_03559878;
    FUN_0369a6dc(lVar3,*(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x100),0);
    lVar3 = *(long *)(param_1 + 0x110);
    if (lVar3 == 0) goto LAB_03559878;
    uVar2 = *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xf8);
  }
  FUN_0369a720(lVar3,uVar2,0);
  if (*(long *)(param_1 + 0x110) != 0) {
    FUN_0369a720(*(long *)(param_1 + 0x110),
                 *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x108),0);
    return;
  }
LAB_03559878:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


