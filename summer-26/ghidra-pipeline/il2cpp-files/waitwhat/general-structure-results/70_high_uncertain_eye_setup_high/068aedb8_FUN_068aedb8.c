/*
FUNCTION_NAME: FUN_068aedb8
ENTRY_POINT: 068aedb8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_068aedb8(long param_1)

{
  undefined1 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_DAT_070c1b68;
  if ((DAT_07559117 & 1) == 0) {
    FUN_03188a78(OVRPlugin_OVRP_1_53_0_TypeInfo);
    FUN_03188a78(OVRPlugin_OVRP_1_54_0_TypeInfo);
    FUN_03188a78(PTR_DAT_070c1b68);
    DAT_07559117 = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 400);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  uVar3 = FUN_069d69b8(uVar5,0,0);
  if (((uVar3 & 1) == 0) &&
     (uVar3 = FUN_03a2e25c(param_1,param_1 + 400,*(undefined8 *)OVRPlugin_OVRP_1_53_0_TypeInfo),
     (uVar3 & 1) == 0)) {
    lVar4 = FUN_069d3b50(param_1,0);
    if (lVar4 != 0) {
      lVar4 = FUN_03ac2e98(lVar4,*(undefined8 *)OVRPlugin_OVRP_1_54_0_TypeInfo);
      *(long *)(param_1 + 400) = lVar4;
      if (lVar4 != 0) {
        uVar5 = *(undefined8 *)(param_1 + 0x1c8);
        *(undefined1 *)(lVar4 + 0x30) = *(undefined1 *)(param_1 + 0x1c1);
        uVar1 = *(undefined1 *)(param_1 + 0x1d0);
        *(undefined8 *)(lVar4 + 0x38) = uVar5;
        uVar5 = *(undefined8 *)(param_1 + 0x1d8);
        *(undefined1 *)(lVar4 + 0x40) = uVar1;
        uVar1 = *(undefined1 *)(param_1 + 0x1e0);
        *(undefined8 *)(lVar4 + 0x48) = uVar5;
        uVar5 = *(undefined8 *)(param_1 + 0x1e8);
        *(undefined1 *)(lVar4 + 0x50) = uVar1;
        uVar1 = *(undefined1 *)(param_1 + 0x1f0);
        *(undefined8 *)(lVar4 + 0x58) = uVar5;
        uVar5 = *(undefined8 *)(param_1 + 0x1f8);
        *(undefined1 *)(lVar4 + 0x60) = uVar1;
        uVar1 = *(undefined1 *)(param_1 + 0x200);
        *(undefined8 *)(lVar4 + 0x68) = uVar5;
        uVar5 = *(undefined8 *)(param_1 + 0x208);
        *(undefined1 *)(lVar4 + 0x70) = uVar1;
        uVar1 = *(undefined1 *)(param_1 + 0x210);
        *(undefined8 *)(lVar4 + 0x78) = uVar5;
        uVar5 = *(undefined8 *)(param_1 + 0x218);
        *(undefined1 *)(lVar4 + 0x80) = uVar1;
        uVar1 = *(undefined1 *)(param_1 + 0x220);
        *(undefined8 *)(lVar4 + 0x88) = uVar5;
        *(undefined1 *)(lVar4 + 0x90) = uVar1;
        FUN_06915ee4(lVar4,param_1,0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  return;
}


