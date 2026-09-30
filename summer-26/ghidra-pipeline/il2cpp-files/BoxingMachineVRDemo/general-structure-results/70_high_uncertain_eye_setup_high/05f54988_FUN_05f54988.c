/*
FUNCTION_NAME: FUN_05f54988
ENTRY_POINT: 05f54988
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong FUN_05f54988(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  uint *puVar5;
  
  if ((DAT_06b84176 & 1) == 0) {
    FUN_02d6084c(OVRPlugin_OVRP_1_73_0_TypeInfo);
    DAT_06b84176 = 1;
  }
  if (param_1 == 0) {
    return 0;
  }
  uVar2 = FUN_058523bc(param_1,0);
  if ((*(long *)(param_1 + 0x188) != 0) &&
     (lVar3 = *(long *)(*(long *)(param_1 + 0x188) + 0x178), lVar3 != 0)) {
    uVar4 = FUN_0583d7f0(lVar3,0);
    if ((*(long *)(param_1 + 0x188) != 0) &&
       (lVar3 = *(long *)(*(long *)(param_1 + 0x188) + 0x180), lVar3 != 0)) {
      puVar5 = (uint *)FUN_037b0144(lVar3,*(undefined8 *)OVRPlugin_OVRP_1_73_0_TypeInfo);
      uVar1 = 0x100;
      if ((uVar4 & 1) == 0) {
        uVar1 = 0;
      }
      return uVar1 | uVar2 & 1 | (ulong)*puVar5 << 0x20;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


