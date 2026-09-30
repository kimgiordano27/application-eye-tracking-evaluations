/*
FUNCTION_NAME: FUN_075bb19c
ENTRY_POINT: 075bb19c
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


void FUN_075bb19c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  if ((DAT_0826e502 & 1) == 0) {
    FUN_0373b518(OVRManager_<>c_TypeInfo);
    DAT_0826e502 = 1;
  }
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 0x10);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_075c0ac8(param_1,0);
    }
    if (DAT_0826e5a8 == (code *)0x0) {
      DAT_0826e5a8 = (code *)FUN_0373b4dc(
                                         "UnityEngine.Transform::GetLocalPositionAndRotation_Injected(System.IntPtr,UnityEngine.Vector3&,UnityEngine.Quaternion&)"
                                         );
    }
                    /* WARNING: Could not recover jumptable at 0x075bb224. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_0826e5a8)(lVar1,param_2,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


