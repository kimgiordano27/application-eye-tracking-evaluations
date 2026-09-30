/*
FUNCTION_NAME: Oculus.Interaction.Input.Hand.<>c$$.ctor
ENTRY_POINT: 01937954
PROGRAM: Lovesick-libil2cpp.so
SCORE: 86
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;paired_state_refs;attempted_use
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined1  [16] Oculus_Interaction_Input_Hand_<>c___ctor(long param_1,undefined8 param_2)

{
  undefined8 *in_x9;
  long unaff_x19;
  int unaff_w20;
  long lVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  lVar1 = *(long *)(param_1 + 0x130);
  FUN_013576e8(param_2,unaff_w20 << 1,&stack0x00000008,*in_x9);
  if (lVar1 != 0) {
    FUN_0132138c(lVar1,uStack0000000000000008,(long)&stack0x00000008 + 4,
                 *(undefined8 *)OVREyeGaze_TypeInfo);
    if (*(long *)(unaff_x19 + 0xf8) != 0) {
      auVar2 = FUN_0193755c(uStack000000000000000c);
      uVar3 = auVar2._8_8_;
      if (*(long *)(unaff_x19 + 0x100) != 0) {
        FUN_0193755c(uStack000000000000000c);
        if (*(long *)(unaff_x19 + 0xf0) != 0) {
          FUN_0193755c(uStack000000000000000c);
          auVar2._8_8_ = uVar3;
          return auVar2;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


