/*
FUNCTION_NAME: OVRPlugin$$get_eyeTrackingSupported
ENTRY_POINT: 02c2e454
PROGRAM: sharks-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_4
*/


ulong OVRPlugin__get_eyeTrackingSupported(ulong param_1,ulong *param_2,ulong param_3)

{
  ulong uVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x21;
  ulong uVar7;
  
  if ((param_1 & 1) == 0) {
    FUN_017fc350(PTR_DAT_0380bcc8);
    *(undefined1 *)(unaff_x21 + 0xf8f) = 1;
  }
  if ((uint)param_2[1] == 0) {
    uVar4 = *param_2;
    if (param_3 <= uVar4) {
      uVar7 = 0;
      if (param_3 != 0) {
        uVar7 = uVar4 / param_3;
      }
      *param_2 = uVar4 - (uVar7 & 0xffffffff) * param_3;
      goto LAB_02c2e520;
    }
LAB_02c2e4e8:
    uVar7 = 0;
  }
  else {
    uVar4 = param_3 >> 0x20;
    uVar3 = (uint)(param_3 >> 0x20);
    if ((uint)param_2[1] < uVar3) {
      uVar5 = *(ulong *)((long)param_2 + 4);
      if (uVar5 < uVar4) goto LAB_02c2e4e8;
      uVar1 = *param_2;
      uVar7 = 0;
      if (uVar4 != 0) {
        uVar7 = uVar5 / uVar4;
      }
      if (*(int *)(*(long *)PTR_DAT_0380bcc8 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      uVar6 = (uVar7 & 0xffffffff) * (param_3 & 0xffffffff);
      uVar4 = CONCAT44((int)uVar5 - (int)uVar7 * uVar3,(int)uVar1) - uVar6;
      if (CARRY8(uVar6,uVar4)) {
        do {
          bVar2 = CARRY8(uVar4,param_3);
          uVar4 = uVar4 + param_3;
          uVar7 = (ulong)((int)uVar7 - 1);
        } while (!bVar2);
      }
    }
    else {
      uVar7 = 0;
      uVar4 = *param_2 - (param_3 << 0x20);
      do {
        bVar2 = CARRY8(uVar4,param_3);
        uVar4 = uVar4 + param_3;
        uVar7 = (ulong)((int)uVar7 - 1);
      } while (!bVar2);
    }
    *param_2 = uVar4;
  }
LAB_02c2e520:
  return uVar7 & 0xffffffff;
}


