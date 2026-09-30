/*
FUNCTION_NAME: OVRPlugin.Qpl$$MarkerStartForJoin
ENTRY_POINT: 0610015c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x061001b0) */

void OVRPlugin_Qpl__MarkerStartForJoin(long param_1)

{
  long lVar1;
  long *unaff_x20;
  long *in_stack_00000008;
  
  (**(code **)(param_1 + 0x178))();
  lVar1 = *unaff_x20;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_036a1978();
    lVar1 = *unaff_x20;
  }
  if ((*in_stack_00000008 != 0) && (**(long **)(lVar1 + 0xb8) != 0)) {
    FUN_0574c134(**(long **)(lVar1 + 0xb8),*(undefined8 *)(*in_stack_00000008 + 0x18),
                 *(undefined8 *)PTR_DAT_07a24eb8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


