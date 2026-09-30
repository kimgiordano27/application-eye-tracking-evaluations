/*
FUNCTION_NAME: OVRAnchorContainer$$get_Handle
ENTRY_POINT: 019a6d70
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_eye_api_context_without_clear_sink_hits_1
*/


void OVRAnchorContainer__get_Handle(long param_1)

{
  ulong uVar1;
  undefined4 in_w8;
  long lVar2;
  undefined8 in_x9;
  long unaff_x19;
  
  *(undefined4 *)(unaff_x19 + 0x7c) = in_w8;
  *(undefined8 *)(unaff_x19 + 0x74) = in_x9;
  if ((param_1 != 0) && (uVar1 = OVREyeGaze__Start(param_1,0), (uVar1 & 1) == 0)) {
    FUN_019a6de4();
    FUN_019a6de4();
    lVar2 = *(long *)(unaff_x19 + 0x30);
    *(undefined1 *)(unaff_x19 + 0x28) = 1;
    if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x019a6ddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40));
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  return;
}


