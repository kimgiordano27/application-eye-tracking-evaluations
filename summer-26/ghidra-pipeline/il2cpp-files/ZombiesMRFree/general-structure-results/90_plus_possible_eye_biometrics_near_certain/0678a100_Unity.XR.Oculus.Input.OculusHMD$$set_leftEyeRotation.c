/*
FUNCTION_NAME: Unity.XR.Oculus.Input.OculusHMD$$set_leftEyeRotation
ENTRY_POINT: 0678a100
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 134
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_2
*/


void Unity_XR_Oculus_Input_OculusHMD__set_leftEyeRotation(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000020;
  
  uStack0000000000000008 = *(undefined8 *)(unaff_x20 + 0xf8);
  uStack0000000000000000 = *(undefined8 *)(unaff_x20 + 0xf0);
  uStack0000000000000010 = param_2;
  uStack0000000000000020 = param_1;
  if (*(long *)(unaff_x19 + 0xe8) != 0) {
    uVar3 = *(undefined8 *)(*(long *)(unaff_x19 + 0xe8) + 0x18);
    if (*(int *)(*(long *)PTR_DAT_06f6d618 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    uVar1 = FUN_068fc830(uVar3,0);
    if ((uVar1 & 1) != 0) {
      if ((*(long *)(unaff_x19 + 0xe8) == 0) ||
         (lVar2 = *(long *)(*(long *)(unaff_x19 + 0xe8) + 0x18), lVar2 == 0)) goto LAB_0678a1c8;
      FUN_068e1b34(lVar2,0);
    }
    FUN_068e40b4();
    uStack0000000000000008 = CONCAT44(uStack0000000000000008._4_4_,1);
    FUN_0671eb38();
    if (*(char *)(unaff_x19 + 0x101) != '\0') {
      FUN_0671ed40(0,0,0,0x3f800000);
    }
    return;
  }
LAB_0678a1c8:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


