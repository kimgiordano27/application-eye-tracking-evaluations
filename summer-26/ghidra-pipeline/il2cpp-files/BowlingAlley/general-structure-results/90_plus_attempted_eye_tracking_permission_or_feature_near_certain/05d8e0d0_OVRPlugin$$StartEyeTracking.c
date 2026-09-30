/*
FUNCTION_NAME: OVRPlugin$$StartEyeTracking
ENTRY_POINT: 05d8e0d0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 101
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_2;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup
*/


void OVRPlugin__StartEyeTracking(long param_1,float param_2,float param_3)

{
  char in_NG;
  char in_OV;
  ulong in_x9;
  long in_x10;
  long in_x11;
  long in_x12;
  long lVar1;
  long unaff_x19;
  
  while (in_NG != in_OV) {
    if ((in_x11 == 0) || (lVar1 = *(long *)(in_x11 + 0x18), lVar1 == 0)) goto LAB_05d8e10c;
    if (((ulong)*(uint *)(lVar1 + 0x18) <= in_x12 - 8U) || (in_x9 <= in_x12 - 8U)) {
                    /* WARNING: Subroutine does not return */
      Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
    }
    in_OV = SBORROW8(in_x12 + -7,in_x10);
    *(float *)(lVar1 + in_x12 * 4) =
         param_2 * *(float *)(lVar1 + in_x12 * 4) + param_3 * *(float *)(param_1 + in_x12 * 4);
    in_NG = (in_x12 + -7) - in_x10 < 0;
    in_x12 = in_x12 + 1;
  }
  FUN_05d8e114();
  if (*(long *)(unaff_x19 + 0x38) != 0) {
    if (*(int *)(unaff_x19 + 0x30) == *(int *)(*(long *)(unaff_x19 + 0x38) + 0x3c)) {
      return;
    }
    FUN_05d8d018();
    return;
  }
LAB_05d8e10c:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


