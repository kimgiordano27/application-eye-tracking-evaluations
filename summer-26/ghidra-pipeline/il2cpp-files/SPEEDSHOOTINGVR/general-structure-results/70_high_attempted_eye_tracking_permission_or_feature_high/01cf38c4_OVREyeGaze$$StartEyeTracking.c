/*
FUNCTION_NAME: OVREyeGaze$$StartEyeTracking
ENTRY_POINT: 01cf38c4
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 76
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_4;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__StartEyeTracking(undefined8 param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  
  if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_010dc9f4(param_1);
  }
  puVar1 = (undefined8 *)__cxa_begin_catch(param_1);
  uVar2 = thunk_FUN_010303a8(PTR_DAT_0234bbd0);
  uVar3 = thunk_FUN_0102bfdc(uVar2,*(undefined8 *)*puVar1);
  if ((uVar3 & 1) != 0) {
    (*(code *)PTR___cxa_end_catch_02376018)();
    return;
  }
  puVar4 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar4 = *puVar1;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar4,&PTR_PTR_0220e3b8,0);
}


