/*
FUNCTION_NAME: UnityEngine.InputSystem.XR.XRHMD$$get_rightEyeRotation
ENTRY_POINT: 03a40c94
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


undefined8 UnityEngine_InputSystem_XR_XRHMD__get_rightEyeRotation(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  int unaff_w19;
  undefined8 unaff_x21;
  int unaff_w23;
  int iVar14;
  long *unaff_x26;
  long in_stack_00000008;
  
  thunk_FUN_020b5864();
  lVar12 = *(long *)(*(long *)(*unaff_x26 + 0xb8) + 8);
  if (lVar12 != 0) {
    iVar14 = *(int *)(lVar12 + 0x18);
    *(undefined4 *)(lVar12 + 0x18) = 0;
    *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
    if (0 < iVar14) {
      FUN_0384dd94(*(undefined8 *)(lVar12 + 0x10),0,iVar14,0);
    }
    puVar4 = PTR_DAT_046a6f88;
    puVar3 = PTR_DAT_046a6f80;
    puVar2 = PTR_DAT_046a6f78;
    puVar1 = StringLiteral_8731;
    iVar14 = 0;
    lVar12 = 0;
    while( true ) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_020b5864();
      }
      uVar7 = FUN_040cbf6c(lVar12,0,0);
      if (((uVar7 & 1) == 0) || (unaff_w23 <= iVar14)) break;
      lVar8 = FUN_040dac64();
      if ((lVar8 == 0) || (lVar8 = FUN_040c67e4(lVar8,0), lVar8 == 0)) goto LAB_03a40fb4;
      iVar5 = FUN_040d0a98(lVar8,0);
      if (iVar5 == 0x3d) {
        lVar9 = *unaff_x26;
        if (*(int *)(lVar9 + 0xe4) == 0) {
          thunk_FUN_020b5864();
          lVar9 = *unaff_x26;
        }
        FUN_0246e398(lVar8,*(undefined8 *)(*(long *)(lVar9 + 0xb8) + 8),*(undefined8 *)puVar3);
        lVar9 = *(long *)(*(long *)(*unaff_x26 + 0xb8) + 8);
        if (lVar9 == 0) goto LAB_03a40fb4;
        if (0 < *(int *)(lVar9 + 0x18)) {
          lVar12 = lVar8;
        }
      }
      iVar14 = iVar14 + 1;
    }
    if (unaff_w19 < 1) {
      lVar8 = *unaff_x26;
      goto LAB_03a40f7c;
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_020b5864();
    }
    uVar7 = FUN_040cbf6c(lVar12,0,0);
    if ((uVar7 & 1) != 0) {
      lVar12 = thunk_FUN_02094760(*(undefined8 *)StringLiteral_9150);
      FUN_040cb1b8(lVar12,*(undefined8 *)PTR_DAT_046a6f98,0);
      if (lVar12 == 0) goto LAB_03a40fb4;
      FUN_040d0b68(lVar12,0x3d,0);
      lVar8 = FUN_040ca62c(lVar12,0);
      if (lVar8 == 0) goto LAB_03a40fb4;
      FUN_040d8fd4();
    }
    lVar8 = FUN_040c67e4(unaff_x21,0);
    if (lVar8 != 0) {
      FUN_0246eaf8(lVar8,&stack0x00000008,*(undefined8 *)StringLiteral_10976);
      lVar8 = in_stack_00000008;
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_020b5864();
      }
      uVar7 = FUN_040ca3b8(lVar8,0,0);
      if ((uVar7 & 1) == 0) goto LAB_03a40f50;
      if (in_stack_00000008 != 0) {
        uVar6 = FUN_040cb874(*(undefined4 *)(in_stack_00000008 + 0x3c),0);
        uVar11 = 0;
        goto LAB_03a40e8c;
      }
    }
  }
  goto LAB_03a40fb4;
  while (uVar11 = uVar11 + 1, uVar11 != 0x20) {
LAB_03a40e8c:
    if ((uVar6 >> (ulong)(uVar11 & 0x1f) & 1) != 0) {
      if (lVar12 == 0) goto LAB_03a40fb4;
      FUN_040ca7a0(lVar12,uVar11,0);
      break;
    }
  }
LAB_03a40f50:
  lVar8 = *unaff_x26;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_020b5864();
    lVar8 = *unaff_x26;
  }
  lVar9 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
  if (lVar9 != 0) {
    if (unaff_w19 <= *(int *)(lVar9 + 0x18)) {
LAB_03a40f7c:
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_020b5864();
        lVar8 = *unaff_x26;
      }
      return *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 8);
    }
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_020b5864();
      lVar9 = *(long *)(*(long *)(*unaff_x26 + 0xb8) + 8);
    }
    if (((lVar12 == 0) || (lVar8 = FUN_040cb860(lVar12,0), lVar8 == 0)) ||
       (uVar10 = FUN_0246d9ec(lVar8,*(undefined8 *)puVar2), lVar9 == 0)) goto LAB_03a40fb4;
    lVar8 = *(long *)(lVar9 + 0x10);
    lVar13 = *(long *)puVar4;
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    if (lVar8 == 0) goto LAB_03a40fb4;
    uVar11 = *(uint *)(lVar9 + 0x18);
    if (uVar11 < *(uint *)(lVar8 + 0x18)) {
      *(uint *)(lVar9 + 0x18) = uVar11 + 1;
      *(undefined8 *)(lVar8 + (long)(int)uVar11 * 8 + 0x20) = uVar10;
      thunk_FUN_020ccb58();
    }
    else {
      FUN_034a2968(lVar9,uVar10,*(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
    }
    goto LAB_03a40f50;
  }
LAB_03a40fb4:
                    /* WARNING: Subroutine does not return */
  FUN_0206154c();
}


