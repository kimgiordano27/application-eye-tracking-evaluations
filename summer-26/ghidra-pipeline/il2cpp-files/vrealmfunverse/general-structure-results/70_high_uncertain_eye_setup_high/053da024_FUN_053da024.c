/*
FUNCTION_NAME: FUN_053da024
ENTRY_POINT: 053da024
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_053da024(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_58;
  undefined1 *puStack_50;
  undefined8 *local_48;
  undefined4 local_38;
  undefined1 local_2c [4];
  undefined8 local_28;
  
  local_28 = 0;
  local_2c[0] = 0;
  local_38 = 0;
  if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar1 = FUN_04d94540(param_2,0,0);
  if ((uVar1 & 1) != 0) {
    lVar2 = thunk_FUN_02ba3594(OVRPassthroughLayer_<>c__DisplayClass9_0_TypeInfo);
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    lVar2 = thunk_FUN_02ba3594(OVRPassthroughLayer_<>c__DisplayClass9_0_TypeInfo);
    puStack_50 = local_2c;
    local_2c[0] = 0;
    local_58 = 0;
    local_28 = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x50);
    local_48 = &local_28;
    FUN_04ddecfc(local_28,local_2c,0);
    lVar2 = thunk_FUN_02ba3594(OVRPassthroughLayer_<>c__DisplayClass9_0_TypeInfo);
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    lVar2 = thunk_FUN_02ba3594(OVRPassthroughLayer_<>c__DisplayClass9_0_TypeInfo);
    if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x48);
    (**(code **)(*param_2 + 0x848))(param_2,*(undefined8 *)(*param_2 + 0x850));
    uVar3 = FUN_053e0d34();
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    *(undefined8 *)(lVar2 + 0x10) = uVar3;
    lVar2 = thunk_FUN_02ba3594(OVRPassthroughLayer_<>c__DisplayClass9_0_TypeInfo);
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    lVar2 = thunk_FUN_02ba3594(OVRPassthroughLayer_<>c__DisplayClass9_0_TypeInfo);
    lVar4 = **(long **)(lVar2 + 0xb8);
    lVar2 = thunk_FUN_02ba3594(OVRPassthroughLayer_<>c__DisplayClass9_0_TypeInfo);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    uVar5 = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x48);
    uVar3 = thunk_FUN_02ba3594(OVRPlugin_OVRP_1_8_0_TypeInfo);
    FUN_0452f2dc(lVar4,uVar5,uVar3);
    FUN_0275f180(&local_58);
  }
  thunk_FUN_02ba3594(UnityEngine_EventSystems_OVRPhysicsRaycaster_<>c_TypeInfo);
  uVar3 = thunk_FUN_02b79644();
  FUN_053f0c5c(uVar3,param_1,0);
  uVar3 = FUN_0540c738(uVar3,0);
  uVar5 = thunk_FUN_02ba3594(OVRPlugin_OVRP_1_90_0_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_02b3c988(uVar3,uVar5);
}


