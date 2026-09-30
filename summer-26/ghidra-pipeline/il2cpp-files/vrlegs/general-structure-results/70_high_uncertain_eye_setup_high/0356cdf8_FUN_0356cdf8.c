/*
FUNCTION_NAME: FUN_0356cdf8
ENTRY_POINT: 0356cdf8
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


ulong FUN_0356cdf8(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_24;
  
  if ((DAT_0412dfc7 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cc4750);
    FUN_01ab69ac(OVRPlugin_Hand_TypeInfo);
    FUN_01ab69ac(OVRVirtualKeyboard_KeyboardPosition_TypeInfo);
    DAT_0412dfc7 = 1;
  }
  if (*(long *)(param_1 + 200) != 0) {
    local_38 = param_2;
    uVar4 = FUN_0219c130(*(long *)(param_1 + 200),&local_38,*(undefined8 *)PTR_DAT_03cc4750);
    if ((uVar4 & 1) == 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x40);
      uVar2 = FUN_03776950(param_1 + 0x50,0);
      puVar1 = OVRVirtualKeyboard_KeyboardPosition_TypeInfo;
      if (*(int *)(*(long *)OVRVirtualKeyboard_KeyboardPosition_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)OVRVirtualKeyboard_KeyboardPosition_TypeInfo);
      }
      iVar3 = FUN_0377715c(uVar5,uVar2,0);
      if (iVar3 == 0) {
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar4 = FUN_037775a0(param_2,0);
      }
      else {
        uVar4 = 0;
      }
      return uVar4;
    }
    if (*(long *)(param_1 + 200) != 0) {
      local_24 = param_2;
      FUN_0219b634(*(long *)(param_1 + 200),&local_24,&local_38,
                   *(undefined8 *)OVRPlugin_Hand_TypeInfo);
      if (CONCAT44(uStack_34,local_38) != 0) {
        return (ulong)*(uint *)(CONCAT44(uStack_34,local_38) + 0x28);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


