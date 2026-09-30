/*
FUNCTION_NAME: OVREyeGaze$$get_EyeTrackingEnabled
ENTRY_POINT: 073509ec
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 100
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_3;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__get_EyeTrackingEnabled(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long lVar2;
  undefined8 *unaff_x22;
  
                    /* try { // try from 073509ec to 07450a13 has its CatchHandler @ 07350ca0 */
  FUN_04ec1288();
  lVar2 = *(long *)(unaff_x19 + 0x30);
  uVar1 = thunk_FUN_03cf5234(*unaff_x22);
  FUN_04ddd7e4();
  if (lVar2 != 0) {
    Cysharp_Threading_Tasks_UniTask_IsCanceledSource<Int32Enum>__GetStatus
              (lVar2,uVar1,*(undefined8 *)PTR_DAT_08eb1d30);
    FUN_07350a58();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


