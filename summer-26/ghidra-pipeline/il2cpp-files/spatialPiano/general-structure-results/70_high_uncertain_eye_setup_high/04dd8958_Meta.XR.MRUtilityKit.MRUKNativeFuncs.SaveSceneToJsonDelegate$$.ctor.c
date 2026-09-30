/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.SaveSceneToJsonDelegate$$.ctor
ENTRY_POINT: 04dd8958
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_SaveSceneToJsonDelegate___ctor(long param_1)

{
  int iVar1;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  long in_stack_00000208;
  
  iVar1 = FUN_04dd57c0(&stack0x00000008,*(undefined8 *)(param_1 + 0x90));
  iVar1 = FUN_0609d588(unaff_x20 + 2,unaff_x19 + 2,(long)iVar1,0);
  if (*(long *)(unaff_x22 + 0x28) == in_stack_00000208) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 == 0);
}


