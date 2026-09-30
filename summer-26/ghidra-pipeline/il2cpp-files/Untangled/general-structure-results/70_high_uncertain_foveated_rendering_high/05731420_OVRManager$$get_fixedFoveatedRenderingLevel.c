/*
FUNCTION_NAME: OVRManager$$get_fixedFoveatedRenderingLevel
ENTRY_POINT: 05731420
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


void OVRManager__get_fixedFoveatedRenderingLevel(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  thunk_FUN_02f239f0(PTR_DAT_06d06338);
  FUN_02a55ad4();
  uVar1 = FUN_055b5920(0);
  uVar2 = thunk_FUN_02ebbee0();
  uVar3 = thunk_FUN_02f239f0(PTR_DAT_06d58990);
  uVar1 = FUN_056f1630(uVar3,uVar1,uVar2,0);
  thunk_FUN_02f239f0(PTR_DAT_06d55148);
  uVar2 = thunk_FUN_02ef1808();
  FUN_05693110(uVar2,uVar1,0);
  uVar1 = thunk_FUN_02f239f0(PTR_DAT_06d58998);
                    /* WARNING: Subroutine does not return */
  FUN_02f07f94(uVar2,uVar1);
}


