/*
FUNCTION_NAME: Oculus.Interaction.Input.HandJointCache$$GetAllPosesFromWrist
ENTRY_POINT: 019375d8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 80
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_3;attempted_eye_tracking_permission_or_feature_enable;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Oculus_Interaction_Input_HandJointCache__GetAllPosesFromWrist(long param_1)

{
  long unaff_x19;
  undefined4 unaff_w20;
  long unaff_x21;
  long lVar1;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  if (*(long *)(unaff_x21 + 0x30) != 0) {
    lVar1 = *(long *)(param_1 + 0x130);
    FUN_013576e8(*(long *)(unaff_x21 + 0x30),unaff_w20,&stack0x00000008,
                 *(undefined8 *)StringLiteral_9889);
    if (lVar1 != 0) {
      FUN_0132138c(lVar1,uStack0000000000000008,(long)&stack0x00000008 + 4,
                   *(undefined8 *)OVREyeGaze_TypeInfo);
      if (*(long *)(unaff_x19 + 0xe0) != 0) {
        FUN_0193755c(uStack000000000000000c);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


