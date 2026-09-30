/*
FUNCTION_NAME: FUN_059ac148
ENTRY_POINT: 059ac148
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 80
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_1;functionality_foveated_rendering
*/


void FUN_059ac148(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_059ac044();
  thunk_FUN_02dfd288(PTR_DAT_069fba18);
  uVar1 = thunk_FUN_02dd3144();
  uVar2 = thunk_FUN_02dfd288(OVRManager_EventListener_TypeInfo);
  FUN_054e3304(uVar1,uVar2,0);
  uVar2 = thunk_FUN_02dfd288(OVRManager_FoveatedRenderingLevel_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_02d96724(uVar1,uVar2);
}


