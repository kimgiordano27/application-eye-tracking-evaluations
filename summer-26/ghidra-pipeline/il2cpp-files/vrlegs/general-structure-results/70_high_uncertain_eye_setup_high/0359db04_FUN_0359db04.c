/*
FUNCTION_NAME: FUN_0359db04
ENTRY_POINT: 0359db04
PROGRAM: vrlegs-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_0359db04(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  if ((DAT_0412e0d5 & 1) == 0) {
                    /* try { // try from 0359db24 to 0369db43 has its CatchHandler @ 0359dcf0 */
    FUN_01ab69ac(PTR_DAT_03cbdf88);
    FUN_01ab69ac(OVRPlugin_InsightPassthroughColorMapType_TypeInfo);
    DAT_0412e0d5 = 1;
  }
  if (*(char *)(param_1 + 0x78) == '\0') {
    *(undefined1 *)(param_1 + 0x78) = 1;
  }
  iVar2 = UnityEngine_UIElements_BaseTreeViewController__RegenerateWrappers(param_1,0);
  if (iVar2 != 0x34) {
    FUN_036d46a4(param_1,0x34,0);
  }
  lVar3 = FUN_0359d484(param_1);
  uVar4 = FUN_0359d5ac(param_1);
  puVar1 = PTR_DAT_03cbdf88;
  if (lVar3 != 0) {
    FUN_036a0b88(lVar3,uVar4,0);
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar5 = FUN_036cee6c(uVar4,0,0);
    puVar1 = OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
    if ((uVar5 & 1) == 0) {
      return;
    }
    lVar3 = *(long *)(param_1 + 0x38);
    if (*(int *)(*(long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if (lVar3 != 0) {
      thunk_FUN_0369b650(DAT_00d38ba4,DAT_00d38ba4,DAT_00d38d70,DAT_00d38d70,lVar3,
                         *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x9c),0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


