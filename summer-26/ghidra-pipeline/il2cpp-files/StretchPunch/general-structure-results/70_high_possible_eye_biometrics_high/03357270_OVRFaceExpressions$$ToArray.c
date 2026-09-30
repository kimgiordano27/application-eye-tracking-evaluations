/*
FUNCTION_NAME: OVRFaceExpressions$$ToArray
ENTRY_POINT: 03357270
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 89
LABEL: possible_eye_biometrics_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


uint OVRFaceExpressions__ToArray(void)

{
  undefined *puVar1;
  bool in_ZR;
  bool in_CY;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint unaff_w19;
  
  puVar1 = StringLiteral_7253;
  if (!in_CY || in_ZR) {
    lVar2 = *(long *)StringLiteral_7253;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
      lVar2 = *(long *)puVar1;
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x28);
    if (lVar2 == 0) goto LAB_03357460;
    uVar4 = *(uint *)(lVar2 + 0x18);
    lVar3 = -0x2c00;
  }
  else if ((unaff_w19 - 0x2c60 & 0xffff) < 0x83) {
    lVar2 = *(long *)StringLiteral_7253;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
      lVar2 = *(long *)puVar1;
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x30);
    if (lVar2 == 0) goto LAB_03357460;
    uVar4 = *(uint *)(lVar2 + 0x18);
    lVar3 = -0x2c60;
  }
  else if ((unaff_w19 + 0x59c0 & 0xffff) < 0x57) {
    lVar2 = *(long *)StringLiteral_7253;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
      lVar2 = *(long *)puVar1;
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x38);
    if (lVar2 == 0) goto LAB_03357460;
    uVar4 = *(uint *)(lVar2 + 0x18);
    lVar3 = -0xa640;
  }
  else {
    if (0x69 < (unaff_w19 + 0x58de & 0xffff)) {
      if ((unaff_w19 + 0xdf & 0xffff) < 0x1a) {
        return unaff_w19 + 0x20;
      }
      if ((unaff_w19 & 0xffff) != 0x2132) {
        if ((unaff_w19 & 0xffff) != 0x2183) {
          return unaff_w19;
        }
        return 0x2184;
      }
      return 0x214e;
    }
    lVar2 = *(long *)StringLiteral_7253;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
      lVar2 = *(long *)puVar1;
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x40);
    if (lVar2 == 0) {
LAB_03357460:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    uVar4 = *(uint *)(lVar2 + 0x18);
    lVar3 = -0xa722;
  }
  lVar3 = lVar3 + (ulong)(ushort)unaff_w19;
  if ((uint)lVar3 < uVar4) {
    return (uint)*(ushort *)(lVar2 + lVar3 * 2 + 0x20);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db78();
}


