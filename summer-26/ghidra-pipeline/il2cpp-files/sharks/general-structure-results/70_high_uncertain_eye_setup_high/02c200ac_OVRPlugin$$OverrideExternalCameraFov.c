/*
FUNCTION_NAME: OVRPlugin$$OverrideExternalCameraFov
ENTRY_POINT: 02c200ac
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__OverrideExternalCameraFov(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  if (*(int *)(*param_1 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  lVar2 = FUN_02c1fed8();
  puVar1 = PTR_DAT_03806cb8;
  if (lVar2 == 0) {
    lVar2 = *(long *)PTR_DAT_03806cb8;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
      lVar2 = *(long *)puVar1;
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x10);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    if (0 < (int)*(ulong *)(lVar2 + 0x18)) {
      uVar6 = 0;
      uVar4 = *(ulong *)(lVar2 + 0x18) & 0xffffffff;
      do {
        if (uVar4 <= uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_017fc5b0();
        }
        uVar5 = *(undefined8 *)(lVar2 + 0x20 + uVar6 * 8);
        uVar4 = FUN_02b2dea0(uVar5,0);
        if ((uVar4 & 1) != 0) {
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01843fdc();
          }
          lVar3 = FUN_02c1fed8(uVar5);
          if (lVar3 != 0) {
            return lVar3;
          }
        }
        uVar4 = (ulong)*(uint *)(lVar2 + 0x18);
        uVar6 = uVar6 + 1;
      } while ((long)uVar6 < (long)(int)*(uint *)(lVar2 + 0x18));
    }
    lVar2 = 0;
  }
  return lVar2;
}


