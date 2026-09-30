/*
FUNCTION_NAME: RootMotion.FinalIK.IKSolverFullBody$$OnUpdate
ENTRY_POINT: 0299fc48
PROGRAM: vrlegs-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0299fcc4) */
/* WARNING: Removing unreachable block (ram,0x0299fccc) */

bool RootMotion_FinalIK_IKSolverFullBody__OnUpdate(void)

{
  uint uVar1;
  code *in_x9;
  char cStack0000000000000028;
  char cStack000000000000002c;
  
  uVar1 = (*in_x9)();
  if (cStack0000000000000028 != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  if (cStack000000000000002c != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  return (uVar1 & 1) != 0;
}


