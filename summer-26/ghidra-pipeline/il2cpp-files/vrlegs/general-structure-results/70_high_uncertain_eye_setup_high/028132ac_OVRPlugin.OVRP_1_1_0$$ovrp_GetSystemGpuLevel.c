/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetSystemGpuLevel
ENTRY_POINT: 028132ac
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_GetSystemGpuLevel(void)

{
  ulong uVar1;
  long unaff_x19;
  long unaff_x20;
  ulong uVar2;
  
  if (0 < (int)*(ulong *)(unaff_x20 + 0x18)) {
    uVar2 = 0;
    uVar1 = *(ulong *)(unaff_x20 + 0x18) & 0xffffffff;
    do {
      if (uVar1 <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      if (unaff_x19 == 0) goto LAB_02813354;
      if (*(int *)(unaff_x19 + 0x18) <= (int)*(undefined8 *)(unaff_x20 + 0x20 + uVar2 * 8)) {
        FUN_01b5f01c();
      }
      uVar1 = (ulong)*(uint *)(unaff_x20 + 0x18);
      uVar2 = uVar2 + 1;
    } while ((long)uVar2 < (long)(int)*(uint *)(unaff_x20 + 0x18));
  }
  if (unaff_x19 != 0) {
    FUN_022195a8();
    return;
  }
LAB_02813354:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


