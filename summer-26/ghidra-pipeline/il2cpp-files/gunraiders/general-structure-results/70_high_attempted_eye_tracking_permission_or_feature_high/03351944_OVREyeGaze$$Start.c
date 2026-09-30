/*
FUNCTION_NAME: OVREyeGaze$$Start
ENTRY_POINT: 03351944
PROGRAM: gunraiders-libil2cpp.so
SCORE: 77
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x033519c4) */

void OVREyeGaze__Start(undefined8 param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  
  if (param_2 != 1) {
    FUN_033211cc();
                    /* WARNING: Subroutine does not return */
    FUN_01cf64e4(param_1);
  }
  plVar1 = (long *)__cxa_begin_catch(param_1);
  lVar2 = *plVar1;
  __cxa_end_catch();
  FUN_033211cc();
  if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c01e80(lVar2);
  }
  return;
}


