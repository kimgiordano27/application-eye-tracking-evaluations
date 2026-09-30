/*
FUNCTION_NAME: FUN_00cf0bf0
ENTRY_POINT: 00cf0bf0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_00cf0bf0(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  
  if ((DAT_03788cbf & 1) == 0) {
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_79_0_TypeInfo);
    DAT_03788cbf = 1;
  }
  puVar3 = OVRPlugin_OVRP_1_79_0_TypeInfo;
  if (*param_1 != 0) {
    lVar4 = *param_2;
    if (lVar4 == 0) {
      lVar4 = FUN_00da4fb8(*(undefined8 *)OVRPlugin_OVRP_1_79_0_TypeInfo,1);
      *param_2 = lVar4;
      FUN_00da4fb8(*(undefined8 *)puVar3,1);
      lVar4 = *param_2;
    }
    if (0 < (int)*(ulong *)(lVar4 + 0x18)) {
      uVar5 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
      *(undefined4 *)(lVar4 + 0x20) = *(undefined4 *)*param_1;
      if (uVar5 != 1) {
        lVar4 = 0;
        do {
          lVar1 = lVar4 * 4;
          lVar2 = lVar4 * 4;
          lVar4 = lVar4 + 1;
          *(undefined4 *)(*param_2 + lVar2 + 0x24) = *(undefined4 *)(*param_1 + lVar1 + 4);
        } while (uVar5 - 1 != lVar4);
      }
    }
  }
  param_2[1] = param_1[1];
  return;
}


