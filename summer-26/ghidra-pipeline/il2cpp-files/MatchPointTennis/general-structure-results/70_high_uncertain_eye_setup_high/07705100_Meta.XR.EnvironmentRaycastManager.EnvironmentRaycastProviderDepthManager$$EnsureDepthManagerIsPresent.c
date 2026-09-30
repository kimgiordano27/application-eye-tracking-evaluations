/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager.EnvironmentRaycastProviderDepthManager$$EnsureDepthManagerIsPresent
ENTRY_POINT: 07705100
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


void Meta_XR_EnvironmentRaycastManager_EnvironmentRaycastProviderDepthManager__EnsureDepthManagerIsPresent
               (void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  long lVar3;
  
  FUN_076fe208();
  puVar1 = PTR_DAT_09f2fe20;
  if (unaff_x20 != 0) {
    FUN_076fbb80();
    lVar3 = *(long *)(unaff_x19 + 0x40);
    uVar2 = thunk_FUN_0448520c(*(undefined8 *)puVar1);
    FUN_076fe350();
    if (lVar3 != 0) {
      FUN_076fbf28(lVar3,uVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


