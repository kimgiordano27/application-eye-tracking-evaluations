/*
FUNCTION_NAME: FUN_075bbb54
ENTRY_POINT: 075bbb54
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 81
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


undefined4 FUN_075bbb54(undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  long lVar1;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  
  local_30 = param_1;
  uStack_2c = param_2;
  local_28 = param_3;
  if ((DAT_0826e507 & 1) == 0) {
    FUN_0373b518(OVRManager_<>c_TypeInfo);
    DAT_0826e507 = 1;
  }
  local_38 = 0;
  local_40 = 0;
  if (param_4 != 0) {
    lVar1 = *(long *)(param_4 + 0x10);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_075c0ac8(param_4,0);
    }
    if (DAT_0826e5c8 == (code *)0x0) {
      DAT_0826e5c8 = (code *)FUN_0373b4dc(
                                         "UnityEngine.Transform::InverseTransformDirection_Injected(System.IntPtr,UnityEngine.Vector3&,UnityEngine.Vector3&)"
                                         );
    }
    (*DAT_0826e5c8)(lVar1,&local_30,&local_40);
    return (undefined4)local_40;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


