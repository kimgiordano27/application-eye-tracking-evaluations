/*
FUNCTION_NAME: UnityEngine.InputSystem.XR.Eyes$$set_rightEyeRotation
ENTRY_POINT: 01aef1e0
PROGRAM: vrfs-libil2cpp.so
SCORE: 149
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_2
*/


void UnityEngine_InputSystem_XR_Eyes__set_rightEyeRotation(void)

{
  long unaff_x19;
  long lVar1;
  float fVar2;
  float unaff_s8;
  float fVar3;
  float fStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  fVar2 = (float)FUN_01834350();
  lVar1 = *(long *)(unaff_x19 + 0x50);
  if (lVar1 != 0) {
    sincosf((unaff_s8 / fVar2) * 360.0 * DAT_0533fbb0,(float *)((long)&stack0x00000008 + 4),
            &stack0x00000008);
    *(undefined4 *)(lVar1 + 0x3c) = 0;
    *(float *)(lVar1 + 0x38) = fStack0000000000000008;
    *(undefined4 *)(lVar1 + 0x40) = uStack000000000000000c;
    if (*(long *)(unaff_x19 + 0x58) != 0) {
      fVar3 = *(float *)(unaff_x19 + 0x60);
      fVar2 = (float)FUN_01834350(*(long *)(unaff_x19 + 0x58),0);
      if (fVar3 < fVar2) {
        return;
      }
      FUN_039f3e98();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


