/*
FUNCTION_NAME: FUN_075ba420
ENTRY_POINT: 075ba420
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_075ba420(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 long param_5)

{
  long lVar1;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  
  local_30 = param_1;
  uStack_2c = param_2;
  local_28 = param_3;
  uStack_24 = param_4;
  if ((DAT_0826e4f5 & 1) == 0) {
    FUN_0373b518(OVRManager_<>c_TypeInfo);
    DAT_0826e4f5 = 1;
  }
  if (param_5 != 0) {
    lVar1 = *(long *)(param_5 + 0x10);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_075c0ac8(param_5,0);
    }
    if (DAT_0826e548 == (code *)0x0) {
      DAT_0826e548 = (code *)FUN_0373b4dc(
                                         "UnityEngine.Transform::set_rotation_Injected(System.IntPtr,UnityEngine.Quaternion&)"
                                         );
    }
    (*DAT_0826e548)(lVar1,&local_30);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


