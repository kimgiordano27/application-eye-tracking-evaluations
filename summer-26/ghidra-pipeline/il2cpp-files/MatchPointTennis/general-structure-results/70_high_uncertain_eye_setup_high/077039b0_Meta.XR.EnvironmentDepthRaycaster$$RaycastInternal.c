/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$RaycastInternal
ENTRY_POINT: 077039b0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ray_or_cast_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentDepthRaycaster__RaycastInternal(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  long lVar2;
  undefined8 *unaff_x22;
  
  FUN_074890f0();
  if (unaff_x20 != 0) {
    FUN_076ff588();
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


