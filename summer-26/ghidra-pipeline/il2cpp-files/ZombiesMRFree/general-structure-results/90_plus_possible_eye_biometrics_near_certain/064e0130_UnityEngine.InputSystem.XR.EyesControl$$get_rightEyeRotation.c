/*
FUNCTION_NAME: UnityEngine.InputSystem.XR.EyesControl$$get_rightEyeRotation
ENTRY_POINT: 064e0130
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 131
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_2
*/


void UnityEngine_InputSystem_XR_EyesControl__get_rightEyeRotation
               (undefined8 param_1,long param_2,long param_3)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long unaff_x19;
  long unaff_x21;
  
  *(undefined8 *)(param_2 + 0x10) = param_1;
  *(long *)(param_2 + 0x20) = param_3;
  thunk_FUN_03048534();
  cVar1 = *(char *)(unaff_x21 + 0x52);
  *(long *)(unaff_x19 + 0x40) = unaff_x19;
  uVar2 = FUN_02fe9358();
  if ((uVar2 & 1) == 0) {
    if (cVar1 != '\x02') {
      if (param_3 == 0) {
        uVar3 = thunk_FUN_03022100(0,"Delegate to an instance method cannot have null \'this\'.");
                    /* WARNING: Subroutine does not return */
        FUN_02fe93c0(uVar3,0);
      }
      goto LAB_064e0184;
    }
    pcVar4 = FUN_02f570c8;
  }
  else {
    if (cVar1 != '\x03') {
LAB_064e0184:
      *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(unaff_x19 + 0x10);
      *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)(unaff_x19 + 0x20);
      goto LAB_064e0194;
    }
    pcVar4 = FUN_02f570f4;
  }
  *(code **)(unaff_x19 + 0x18) = pcVar4;
LAB_064e0194:
  *(code **)(unaff_x19 + 0x38) = FUN_02f57068;
  return;
}


