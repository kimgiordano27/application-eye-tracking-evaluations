/*
FUNCTION_NAME: OVRManager$$set_fixedFoveatedRenderingLevel
ENTRY_POINT: 05731470
PROGRAM: Untangled-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__set_fixedFoveatedRenderingLevel(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  thunk_FUN_02f239f0(*(undefined8 *)(param_1 + 0x148));
  uVar1 = thunk_FUN_02ef1808();
  FUN_05693110();
  uVar2 = thunk_FUN_02f239f0(PTR_DAT_06d58998);
                    /* WARNING: Subroutine does not return */
  FUN_02f07f94(uVar1,uVar2);
}


