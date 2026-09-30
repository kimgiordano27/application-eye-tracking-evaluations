/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager$$<ToEnvRaycastHit>g__ToStatus|14_0
ENTRY_POINT: 06db83a4
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_6;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x06db8410) */

uint Meta_XR_EnvironmentRaycastManager__<ToEnvRaycastHit>g__ToStatus_14_0
               (undefined8 param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  uint unaff_w26;
  
  if (param_2 != 1) {
    FUN_049dc4cc(&stack0x00000020,*(undefined8 *)PTR_DAT_08e90478);
                    /* WARNING: Subroutine does not return */
    FUN_03d91ca0(param_1);
  }
  plVar1 = (long *)__cxa_begin_catch(param_1);
  lVar2 = *plVar1;
  __cxa_end_catch();
  FUN_049dc4cc(&stack0x00000020,*(undefined8 *)PTR_DAT_08e90478);
  if (lVar2 == 0) {
    return unaff_w26 & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb28(lVar2);
}


