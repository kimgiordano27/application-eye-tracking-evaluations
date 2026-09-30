/*
FUNCTION_NAME: Unity.XR.Oculus.Input.OculusHMD$$set_rightEyeRotation
ENTRY_POINT: 0253da6c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 131
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_2
*/


void Unity_XR_Oculus_Input_OculusHMD__set_rightEyeRotation(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  
  if ((DAT_03782b83 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_TaskUtility_<WaitForTimeout>d__3>__
                      );
    DAT_03782b83 = 1;
  }
  puVar2 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_TaskUtility_<WaitForTimeout>d__3>__
  ;
  if (DAT_03782b2d == '\0') {
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_TaskUtility_<WaitForTimeout>d__3>__
                      );
    DAT_03782b2d = '\x01';
  }
  lVar4 = *(long *)(*(long *)puVar2 + 0xb8);
  if (*(uint *)(lVar4 + 8) < 8) {
    uVar1 = 1 << (ulong)(*(uint *)(lVar4 + 8) & 0x1f);
    if ((uVar1 & 0xbc) == 0) {
      if ((uVar1 & 0x41) == 0) {
        uVar3 = 6;
      }
      else {
        lVar4 = FUN_0253dde0();
        if (lVar4 == 0) {
          uVar3 = 6;
        }
        else {
          uVar3 = FUN_02560408(lVar4,0);
        }
        lVar4 = *(long *)(*(long *)puVar2 + 0xb8);
      }
    }
    else {
      uVar3 = 0;
    }
    *(undefined4 *)(lVar4 + 0xc) = uVar3;
  }
  return;
}


