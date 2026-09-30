/*
FUNCTION_NAME: thunk_FUN_075bb990
ENTRY_POINT: 075bb98c
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


void thunk_FUN_075bb990(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                       undefined4 param_5,undefined4 param_6,long param_7)

{
  long lVar1;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uStack_40 = param_4;
  uStack_3c = param_5;
  uStack_38 = param_6;
  uStack_30 = param_1;
  uStack_2c = param_2;
  uStack_28 = param_3;
  if ((DAT_0826e505 & 1) == 0) {
    FUN_0373b518(OVRManager_<>c_TypeInfo);
    DAT_0826e505 = 1;
  }
  if (param_7 != 0) {
    lVar1 = *(long *)(param_7 + 0x10);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_075c0ac8(param_7,0);
    }
    if (DAT_0826e5b8 == (code *)0x0) {
      DAT_0826e5b8 = (code *)FUN_0373b4dc(
                                         "UnityEngine.Transform::Internal_LookAt_Injected(System.IntPtr,UnityEngine.Vector3&,UnityEngine.Vector3&)"
                                         );
    }
    (*DAT_0826e5b8)(lVar1,&uStack_30,&uStack_40);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


