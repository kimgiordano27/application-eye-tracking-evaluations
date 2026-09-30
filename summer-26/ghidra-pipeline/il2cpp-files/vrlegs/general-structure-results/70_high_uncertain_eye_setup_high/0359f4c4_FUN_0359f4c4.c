/*
FUNCTION_NAME: FUN_0359f4c4
ENTRY_POINT: 0359f4c4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_0359f4c4(long *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR_DAT_03cbdf88;
  if ((DAT_0412e0ef & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cbdf88);
    FUN_01ab69ac(OVRPlugin_InsightPassthroughColorMapType_TypeInfo);
    DAT_0412e0ef = 1;
  }
  lVar5 = param_1[0x1e];
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar2 = FUN_036d35a8(lVar5,0,0);
  puVar1 = OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
  if ((uVar2 & 1) != 0) {
    return;
  }
  lVar5 = param_1[0x1e];
  if (*(int *)(*(long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  if (lVar5 == 0) goto LAB_0359f640;
  uVar2 = FUN_03699d80(lVar5,*(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x120),0);
  if ((uVar2 & 1) != 0) {
    plVar3 = (long *)FUN_0359e8b8(param_1);
    if (plVar3 == (long *)0x0) goto LAB_0359f640;
    lVar5 = (**(code **)(*plVar3 + 0x538))(plVar3,*(undefined8 *)(*plVar3 + 0x540));
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01a58e78(*(long *)puVar1);
    }
    if (lVar5 == 0) goto LAB_0359f640;
    FUN_0369dff0(lVar5,*(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x120),0);
    if (param_1[0x1e] == 0) goto LAB_0359f640;
    FUN_0369d098(param_1[0x1e],*(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x120),0);
  }
  lVar5 = FUN_037b514c(param_1,0);
  if (lVar5 != 0) {
    FUN_0390ec00(lVar5,1,0);
    lVar5 = FUN_037b514c(param_1,0);
    uVar4 = (**(code **)(*param_1 + 0x358))(param_1,*(undefined8 *)(*param_1 + 0x360));
    if (lVar5 != 0) {
      FUN_0390f1ec(lVar5,uVar4,0,0);
      return;
    }
  }
LAB_0359f640:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


