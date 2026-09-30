/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthManagerRaycastExtensions$$Log
ENTRY_POINT: 077021ec
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentDepthManagerRaycastExtensions__Log(long param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar1 = FUN_0952fedc();
  if ((uVar1 & 1) == 0) {
    lVar2 = *(long *)(unaff_x20 + 0x38);
  }
  else {
    lVar2 = *(long *)(unaff_x20 + 0x40);
  }
  if (lVar2 != 0) {
    FUN_07702144(*(undefined4 *)(lVar2 + 0x38),*(undefined4 *)(lVar2 + 0x3c),
                 *(undefined4 *)(lVar2 + 0x40),*(undefined4 *)(lVar2 + 0x44));
    if (*(long *)(unaff_x20 + 0x70) != 0) {
      FUN_076f2788(*(long *)(unaff_x20 + 0x70),2);
      if (unaff_x19 != 0) {
        *(undefined8 *)(unaff_x20 + 0x80) = *(undefined8 *)(unaff_x19 + 0x20);
        thunk_FUN_044bb4b4((undefined8 *)(unaff_x20 + 0x80));
        return;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


