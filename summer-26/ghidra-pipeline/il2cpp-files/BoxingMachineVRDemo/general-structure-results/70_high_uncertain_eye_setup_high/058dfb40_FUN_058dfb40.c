/*
FUNCTION_NAME: FUN_058dfb40
ENTRY_POINT: 058dfb40
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_3
*/


ulong FUN_058dfb40(long param_1,long *param_2)

{
  uint uVar1;
  byte bVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  
  if ((DAT_06b80b47 & 1) == 0) {
    FUN_02d6084c(OVRPlugin_OVRP_1_79_0_TypeInfo);
    FUN_02d6084c(PTR_DAT_06769ce0);
    DAT_06b80b47 = 1;
  }
  puVar3 = PTR_DAT_06769ce0;
  if (*(int *)(param_1 + 0xcc) == 1) {
    lVar4 = *(long *)PTR_DAT_06769ce0;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar4 = *(long *)puVar3;
    }
    uVar1 = *(uint *)(*(long *)(lVar4 + 0xb8) + 8);
LAB_058dfbac:
    return (ulong)uVar1;
  }
  if (param_2 != (long *)0x0) {
    bVar2 = *(byte *)(*(long *)OVRPlugin_OVRP_1_79_0_TypeInfo + 0x130);
    if ((bVar2 <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar2 * 8 + -8) ==
        *(long *)OVRPlugin_OVRP_1_79_0_TypeInfo)) {
      uVar1 = *(uint *)(param_2 + 0x33);
      goto LAB_058dfbac;
    }
  }
  uVar5 = FUN_06370b10(param_1,param_2,0);
  return uVar5;
}


