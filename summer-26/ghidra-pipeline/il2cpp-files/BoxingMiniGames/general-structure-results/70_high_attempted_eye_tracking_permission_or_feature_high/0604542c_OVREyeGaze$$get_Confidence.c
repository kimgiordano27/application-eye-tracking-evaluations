/*
FUNCTION_NAME: OVREyeGaze$$get_Confidence
ENTRY_POINT: 0604542c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 80
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_4;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__get_Confidence(void)

{
  long lVar1;
  long unaff_x19;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  
  FUN_042b4694();
  FUN_060f81f4(*(undefined8 *)(unaff_x19 + 0x1b8),*(undefined8 *)(unaff_x19 + 0x120),0,0);
  lVar1 = *(long *)(unaff_x19 + 0x178);
  if (lVar1 != 0) {
    uVar2 = (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28))
    ;
    lVar1 = *(long *)(unaff_x19 + 0x178);
    if (lVar1 != 0) {
      fVar3 = (float)(**(code **)(lVar1 + 0x18))
                               (*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
      fVar4 = *(float *)(unaff_x19 + 0x1cc);
      *(undefined4 *)(unaff_x19 + 0x1cc) = uVar2;
      *(float *)(unaff_x19 + 0x1d0) = fVar3 - fVar4;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


