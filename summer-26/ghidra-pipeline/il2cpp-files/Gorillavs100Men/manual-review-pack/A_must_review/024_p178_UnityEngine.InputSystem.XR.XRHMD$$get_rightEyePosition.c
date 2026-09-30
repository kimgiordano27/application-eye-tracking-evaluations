/*
FUNCTION_NAME: UnityEngine.InputSystem.XR.XRHMD$$get_rightEyePosition
ENTRY_POINT: 03a40c7c
PROGRAM: Gorillavs100Men-libil2cpp.so
SCORE: 140
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_2
*/


undefined8 UnityEngine_InputSystem_XR_XRHMD__get_rightEyePosition(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  int unaff_w19;
  undefined8 unaff_x21;
  int iVar15;
  long *unaff_x26;
  long in_stack_00000008;
  
  iVar5 = FUN_040da4a0();
  lVar13 = *unaff_x26;
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_020b5864(lVar13);
    lVar13 = *unaff_x26;
  }
  lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 8);
  if (lVar13 != 0) {
    iVar15 = *(int *)(lVar13 + 0x18);
    *(undefined4 *)(lVar13 + 0x18) = 0;
    *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
    if (0 < iVar15) {
      FUN_0384dd94(*(undefined8 *)(lVar13 + 0x10),0,iVar15,0);
    }
    puVar4 = PTR_DAT_046a6f88;
    puVar3 = PTR_DAT_046a6f80;
    puVar2 = PTR_DAT_046a6f78;
    puVar1 = StringLiteral_8731;
    iVar15 = 0;
    lVar13 = 0;
    while( true ) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_020b5864();
      }
      uVar8 = FUN_040cbf6c(lVar13,0,0);
      if (((uVar8 & 1) == 0) || (iVar5 <= iVar15)) break;
      lVar9 = FUN_040dac64();
      if ((lVar9 == 0) || (lVar9 = FUN_040c67e4(lVar9,0), lVar9 == 0)) goto LAB_03a40fb4;
      iVar6 = FUN_040d0a98(lVar9,0);
      if (iVar6 == 0x3d) {
        lVar10 = *unaff_x26;
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_020b5864();
          lVar10 = *unaff_x26;
        }
        FUN_0246e398(lVar9,*(undefined8 *)(*(long *)(lVar10 + 0xb8) + 8),*(undefined8 *)puVar3);
        lVar10 = *(long *)(*(long *)(*unaff_x26 + 0xb8) + 8);
        if (lVar10 == 0) goto LAB_03a40fb4;
        if (0 < *(int *)(lVar10 + 0x18)) {
          lVar13 = lVar9;
        }
      }
      iVar15 = iVar15 + 1;
    }
    if (unaff_w19 < 1) {
      lVar9 = *unaff_x26;
      goto LAB_03a40f7c;
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_020b5864();
    }
    uVar8 = FUN_040cbf6c(lVar13,0,0);
    if ((uVar8 & 1) != 0) {
      lVar13 = thunk_FUN_02094760(*(undefined8 *)StringLiteral_9150);
      FUN_040cb1b8(lVar13,*(undefined8 *)PTR_DAT_046a6f98,0);
      if (lVar13 == 0) goto LAB_03a40fb4;
      FUN_040d0b68(lVar13,0x3d,0);
      lVar9 = FUN_040ca62c(lVar13,0);
      if (lVar9 == 0) goto LAB_03a40fb4;
      FUN_040d8fd4();
    }
    lVar9 = FUN_040c67e4(unaff_x21,0);
    if (lVar9 != 0) {
      FUN_0246eaf8(lVar9,&stack0x00000008,*(undefined8 *)StringLiteral_10976);
      lVar9 = in_stack_00000008;
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_020b5864();
      }
      uVar8 = FUN_040ca3b8(lVar9,0,0);
      if ((uVar8 & 1) == 0) goto LAB_03a40f50;
      if (in_stack_00000008 != 0) {
        uVar7 = FUN_040cb874(*(undefined4 *)(in_stack_00000008 + 0x3c),0);
        uVar12 = 0;
        goto LAB_03a40e8c;
      }
    }
  }
  goto LAB_03a40fb4;
  while (uVar12 = uVar12 + 1, uVar12 != 0x20) {
LAB_03a40e8c:
    if ((uVar7 >> (ulong)(uVar12 & 0x1f) & 1) != 0) {
      if (lVar13 == 0) goto LAB_03a40fb4;
      FUN_040ca7a0(lVar13,uVar12,0);
      break;
    }
  }
LAB_03a40f50:
  lVar9 = *unaff_x26;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_020b5864();
    lVar9 = *unaff_x26;
  }
  lVar10 = *(long *)(*(long *)(lVar9 + 0xb8) + 8);
  if (lVar10 != 0) {
    if (unaff_w19 <= *(int *)(lVar10 + 0x18)) {
LAB_03a40f7c:
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_020b5864();
        lVar9 = *unaff_x26;
      }
      return *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 8);
    }
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_020b5864();
      lVar10 = *(long *)(*(long *)(*unaff_x26 + 0xb8) + 8);
    }
    if (((lVar13 == 0) || (lVar9 = FUN_040cb860(lVar13,0), lVar9 == 0)) ||
       (uVar11 = FUN_0246d9ec(lVar9,*(undefined8 *)puVar2), lVar10 == 0)) goto LAB_03a40fb4;
    lVar9 = *(long *)(lVar10 + 0x10);
    lVar14 = *(long *)puVar4;
    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
    if (lVar9 == 0) goto LAB_03a40fb4;
    uVar12 = *(uint *)(lVar10 + 0x18);
    if (uVar12 < *(uint *)(lVar9 + 0x18)) {
      *(uint *)(lVar10 + 0x18) = uVar12 + 1;
      *(undefined8 *)(lVar9 + (long)(int)uVar12 * 8 + 0x20) = uVar11;
      thunk_FUN_020ccb58();
    }
    else {
      FUN_034a2968(lVar10,uVar11,*(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70))
      ;
    }
    goto LAB_03a40f50;
  }
LAB_03a40fb4:
                    /* WARNING: Subroutine does not return */
  FUN_0206154c();
}


