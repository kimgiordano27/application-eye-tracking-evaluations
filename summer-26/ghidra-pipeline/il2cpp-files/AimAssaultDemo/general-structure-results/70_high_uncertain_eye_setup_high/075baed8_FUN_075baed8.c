/*
FUNCTION_NAME: FUN_075baed8
ENTRY_POINT: 075baed8
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_075baed8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,long param_8)

{
  long lVar1;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  
  local_40 = param_4;
  uStack_3c = param_5;
  local_38 = param_6;
  uStack_34 = param_7;
  local_30 = param_1;
  uStack_2c = param_2;
  local_28 = param_3;
  if ((DAT_0826e4ff & 1) == 0) {
    FUN_0373b518(OVRManager_<>c_TypeInfo);
    DAT_0826e4ff = 1;
  }
  if (param_8 != 0) {
    lVar1 = *(long *)(param_8 + 0x10);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_075c0ac8(param_8,0);
    }
    if (DAT_0826e590 == (code *)0x0) {
      DAT_0826e590 = (code *)FUN_0373b4dc(
                                         "UnityEngine.Transform::SetPositionAndRotation_Injected(System.IntPtr,UnityEngine.Vector3&,UnityEngine.Quaternion&)"
                                         );
    }
    (*DAT_0826e590)(lVar1,&local_30,&local_40);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


