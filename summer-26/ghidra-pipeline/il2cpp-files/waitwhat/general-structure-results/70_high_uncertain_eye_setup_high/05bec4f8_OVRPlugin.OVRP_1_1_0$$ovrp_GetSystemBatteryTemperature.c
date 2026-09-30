/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetSystemBatteryTemperature
ENTRY_POINT: 05bec4f8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_GetSystemBatteryTemperature(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  uint unaff_w22;
  
  do {
    uVar1 = *(uint *)(param_1 + (long)(int)unaff_w22 * 4 + 0x20);
    if (*(uint *)(unaff_x19 + 0x18) <= uVar1) {
LAB_05bec560:
                    /* WARNING: Subroutine does not return */
      FUN_03188ce0();
    }
    if (unaff_x20 == 0) break;
    if (*(uint *)(unaff_x20 + 0x18) <= unaff_w22) goto LAB_05bec560;
    lVar2 = (long)(int)unaff_w22;
    unaff_w22 = unaff_w22 + 1;
    *(bool *)(unaff_x20 + lVar2 + 0x20) =
         (*(int *)(unaff_x19 + (long)(int)uVar1 * 4 + 0x20) == 0 || uVar1 == 3) || uVar1 == 0x10;
    if (*(int *)(param_2 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      param_2 = *unaff_x21;
    }
    param_1 = **(long **)(param_2 + 0xb8);
    if (param_1 == 0) break;
    if (*(int *)(param_1 + 0x18) <= (int)unaff_w22) {
      return;
    }
    if (*(int *)(param_2 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      param_2 = *unaff_x21;
      param_1 = **(long **)(param_2 + 0xb8);
      if (param_1 == 0) break;
    }
    if (*(uint *)(param_1 + 0x18) <= unaff_w22) goto LAB_05bec560;
  } while (unaff_x19 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


