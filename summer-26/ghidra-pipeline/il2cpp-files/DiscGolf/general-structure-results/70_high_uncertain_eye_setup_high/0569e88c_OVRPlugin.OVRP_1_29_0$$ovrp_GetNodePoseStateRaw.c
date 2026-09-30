/*
FUNCTION_NAME: OVRPlugin.OVRP_1_29_0$$ovrp_GetNodePoseStateRaw
ENTRY_POINT: 0569e88c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_29_0__ovrp_GetNodePoseStateRaw(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if (0 < (int)*(ulong *)(param_1 + 0x18)) {
    uVar2 = 0;
    uVar1 = *(ulong *)(param_1 + 0x18) & 0xffffffff;
    do {
      if (uVar1 <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      FUN_0569e6d8(*(undefined8 *)(param_1 + 0x20 + uVar2 * 8));
      uVar1 = (ulong)*(uint *)(param_1 + 0x18);
      uVar2 = uVar2 + 1;
    } while ((long)uVar2 < (long)(int)*(uint *)(param_1 + 0x18));
  }
  return;
}


