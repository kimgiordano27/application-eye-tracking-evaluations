/*
FUNCTION_NAME: OVREyeGaze$$OnDestroy
ENTRY_POINT: 07350fa0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 74
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__OnDestroy(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x19;
  long lVar3;
  
  lVar3 = *(long *)(unaff_x19 + 0x30);
  uVar2 = thunk_FUN_03cf5234(**(undefined8 **)(param_1 + 0xe98));
  FUN_07064478();
  puVar1 = PTR_DAT_08e84840;
  if (lVar3 != 0) {
    FUN_04ec1324(lVar3,uVar2,*(undefined8 *)PTR_DAT_08eb1d40);
    lVar3 = *(long *)(unaff_x19 + 0x30);
    uVar2 = thunk_FUN_03cf5234(*(undefined8 *)puVar1);
    FUN_04ddd7e4();
    if (lVar3 != 0) {
      FUN_04ec0f68(lVar3,uVar2,*(undefined8 *)PTR_DAT_08eb1d48);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


