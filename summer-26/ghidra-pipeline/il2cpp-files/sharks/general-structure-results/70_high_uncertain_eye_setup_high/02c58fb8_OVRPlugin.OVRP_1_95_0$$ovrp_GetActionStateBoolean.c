/*
FUNCTION_NAME: OVRPlugin.OVRP_1_95_0$$ovrp_GetActionStateBoolean
ENTRY_POINT: 02c58fb8
PROGRAM: sharks-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_95_0__ovrp_GetActionStateBoolean(ulong param_1,uint param_2)

{
  undefined *puVar1;
  undefined1 uVar2;
  long lVar3;
  long unaff_x20;
  undefined8 *unaff_x21;
  ulong uVar4;
  
  if ((param_1 & 1) == 0) {
    FUN_017fc350(PTR_DAT_037f2c00);
    FUN_017fc350(PTR_DAT_037f90f8);
    *(undefined1 *)(unaff_x20 + 0x193) = 1;
  }
  lVar3 = FUN_017fc3f4(*unaff_x21,param_2);
  puVar1 = PTR_DAT_037f90f8;
  if (0 < (int)param_2) {
    uVar4 = 0;
    do {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      uVar2 = FUN_02afbdac();
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_017fc5a8();
      }
      if (*(uint *)(lVar3 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_017fc5b0();
      }
      *(undefined1 *)(lVar3 + 0x20 + uVar4) = uVar2;
      uVar4 = uVar4 + 1;
    } while (param_2 != uVar4);
  }
  return lVar3;
}


