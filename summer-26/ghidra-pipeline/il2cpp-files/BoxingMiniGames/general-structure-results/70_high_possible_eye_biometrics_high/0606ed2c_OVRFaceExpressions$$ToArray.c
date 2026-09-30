/*
FUNCTION_NAME: OVRFaceExpressions$$ToArray
ENTRY_POINT: 0606ed2c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 89
LABEL: possible_eye_biometrics_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_4;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void OVRFaceExpressions__ToArray(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *unaff_x19;
  int unaff_w20;
  int unaff_w23;
  int unaff_w24;
  long *unaff_x26;
  int unaff_w27;
  int unaff_w28;
  int unaff_w29;
  undefined8 in_stack_00000008;
  
  while( true ) {
    unaff_w28 = unaff_w28 + 1;
    if (unaff_w27 == unaff_w28) {
      do {
        unaff_w24 = unaff_w24 + 1;
        unaff_w23 = unaff_w23 + unaff_w20;
        if (unaff_w24 == in_stack_00000008._4_4_) {
          return;
        }
      } while (unaff_w27 < 1);
      unaff_w28 = 0;
      unaff_w29 = unaff_w27 + unaff_w23;
    }
    lVar4 = *unaff_x19;
    if (lVar4 == 0) break;
    lVar5 = *(long *)(lVar4 + 0x10);
    lVar6 = *unaff_x26;
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    if (lVar5 == 0) break;
    uVar3 = *(uint *)(lVar4 + 0x18);
    iVar2 = unaff_w23 + unaff_w28;
    if (uVar3 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(lVar4 + 0x18) = uVar3 + 1;
      *(int *)(lVar5 + (long)(int)uVar3 * 4 + 0x20) = iVar2;
    }
    else {
      FUN_04526fb8(lVar4,iVar2,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      lVar4 = *unaff_x19;
      if (lVar4 == 0) break;
    }
    lVar5 = *(long *)(lVar4 + 0x10);
    lVar6 = *unaff_x26;
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    if (lVar5 == 0) break;
    uVar3 = *(uint *)(lVar4 + 0x18);
    iVar1 = unaff_w29 + unaff_w28 + 2;
    if (uVar3 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(lVar4 + 0x18) = uVar3 + 1;
      *(int *)(lVar5 + (long)(int)uVar3 * 4 + 0x20) = iVar1;
    }
    else {
      FUN_04526fb8(lVar4,iVar1,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      lVar4 = *unaff_x19;
      if (lVar4 == 0) break;
    }
    lVar5 = *(long *)(lVar4 + 0x10);
    lVar6 = *unaff_x26;
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    if (lVar5 == 0) break;
    uVar3 = *(uint *)(lVar4 + 0x18);
    if (uVar3 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(lVar4 + 0x18) = uVar3 + 1;
      *(int *)(lVar5 + (long)(int)uVar3 * 4 + 0x20) = iVar2 + 1;
    }
    else {
      FUN_04526fb8(lVar4,iVar2 + 1,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70)
                  );
      lVar4 = *unaff_x19;
      if (lVar4 == 0) break;
    }
    lVar5 = *(long *)(lVar4 + 0x10);
    lVar6 = *unaff_x26;
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    if (lVar5 == 0) break;
    uVar3 = *(uint *)(lVar4 + 0x18);
    if (uVar3 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(lVar4 + 0x18) = uVar3 + 1;
      *(int *)(lVar5 + (long)(int)uVar3 * 4 + 0x20) = iVar2;
    }
    else {
      FUN_04526fb8(lVar4,iVar2,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      lVar4 = *unaff_x19;
      if (lVar4 == 0) break;
    }
    lVar5 = *(long *)(lVar4 + 0x10);
    lVar6 = *unaff_x26;
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    if (lVar5 == 0) break;
    uVar3 = *(uint *)(lVar4 + 0x18);
    iVar2 = unaff_w29 + unaff_w28 + 1;
    if (uVar3 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(lVar4 + 0x18) = uVar3 + 1;
      *(int *)(lVar5 + (long)(int)uVar3 * 4 + 0x20) = iVar2;
    }
    else {
      FUN_04526fb8(lVar4,iVar2,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      lVar4 = *unaff_x19;
      if (lVar4 == 0) break;
    }
    lVar5 = *(long *)(lVar4 + 0x10);
    lVar6 = *unaff_x26;
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    if (lVar5 == 0) break;
    uVar3 = *(uint *)(lVar4 + 0x18);
    if (uVar3 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(lVar4 + 0x18) = uVar3 + 1;
      *(int *)(lVar5 + (long)(int)uVar3 * 4 + 0x20) = iVar1;
    }
    else {
      FUN_04526fb8(lVar4,iVar1,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


