/*
FUNCTION_NAME: FUN_0253d9b0
ENTRY_POINT: 0253d9b0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 121
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_1
*/


void FUN_0253d9b0(int param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  undefined4 local_28 [2];
  
  puVar1 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_TaskUtility_<WaitForTimeout>d__3>__
  ;
  if ((DAT_03782b73 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_TaskUtility_<WaitForTimeout>d__3>__
                      );
    DAT_03782b73 = 1;
  }
  if (*(int *)(*(long *)(*(long *)puVar1 + 0xb8) + 8) != param_1) {
    *(int *)(*(long *)(*(long *)puVar1 + 0xb8) + 8) = param_1;
    Unity_XR_Oculus_Input_OculusHMD__get_rightEyeRotation();
    plVar2 = *(long **)(*(long *)puVar1 + 0xb8);
    lVar3 = *plVar2;
    if (lVar3 != 0) {
      if (DAT_03782b2d == '\0') {
        thunk_FUN_00d48444(puVar1);
        DAT_03782b2d = '\x01';
        plVar2 = *(long **)(*(long *)puVar1 + 0xb8);
      }
      local_28[0] = (undefined4)plVar2[1];
      (**(code **)(lVar3 + 0x18))
                (*(undefined8 *)(lVar3 + 0x40),local_28,*(undefined8 *)(lVar3 + 0x28));
    }
  }
  return;
}


