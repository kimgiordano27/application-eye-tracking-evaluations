/*
FUNCTION_NAME: OVRPlugin.OVRP_1_72_0$$ovrp_GetSpaceRoomLayout
ENTRY_POINT: 090d320c
PROGRAM: Hyper-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_72_0__ovrp_GetSpaceRoomLayout(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x14) = 0;
    *(undefined4 *)(lVar1 + 0x18) = 0;
    lVar2 = *(long *)(param_1 + 0x30);
    *(undefined1 *)(lVar1 + 0x10) = 1;
    if (lVar2 != 0) {
      *(undefined1 *)(lVar2 + 0x10) = 1;
      *(undefined4 *)(lVar2 + 0x14) = 0;
      *(undefined4 *)(lVar2 + 0x18) = 0;
      *(undefined1 *)(param_1 + 0x20) = 1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


