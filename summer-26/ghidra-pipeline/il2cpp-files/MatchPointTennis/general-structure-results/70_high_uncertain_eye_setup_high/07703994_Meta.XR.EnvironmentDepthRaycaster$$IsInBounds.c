/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$IsInBounds
ENTRY_POINT: 07703994
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentDepthRaycaster__IsInBounds(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long lVar2;
  undefined8 *unaff_x22;
  
  lVar2 = *(long *)(unaff_x19 + 0x90);
  uVar1 = thunk_FUN_0448520c(*unaff_x22);
  FUN_074890f0();
  if (lVar2 != 0) {
    FUN_076ff588(lVar2,uVar1);
    lVar2 = *(long *)(unaff_x19 + 0x98);
    uVar1 = thunk_FUN_0448520c(*unaff_x22);
    FUN_074890f0();
    if (lVar2 != 0) {
      FUN_076ff588(lVar2,uVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


