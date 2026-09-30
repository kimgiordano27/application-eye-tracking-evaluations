/*
FUNCTION_NAME: UnityEngine.InputSystem.XR.XRHMD$$set_leftEyeRotation
ENTRY_POINT: 03a40c6c
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


undefined8 UnityEngine_InputSystem_XR_XRHMD__set_leftEyeRotation(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  int unaff_w19;
  undefined8 unaff_x21;
  int iVar16;
  long in_stack_00000008;
  
  puVar2 = PTR_DAT_046a6f58;
  iVar6 = FUN_040da4a0(param_1,0);
  lVar14 = *(long *)puVar2;
  if (*(int *)(lVar14 + 0xe4) == 0) {
    thunk_FUN_020b5864(lVar14);
    lVar14 = *(long *)puVar2;
  }
  lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 8);
  if (lVar14 != 0) {
    iVar16 = *(int *)(lVar14 + 0x18);
    *(undefined4 *)(lVar14 + 0x18) = 0;
    *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
    if (0 < iVar16) {
      FUN_0384dd94(*(undefined8 *)(lVar14 + 0x10),0,iVar16,0);
    }
    puVar5 = PTR_DAT_046a6f88;
    puVar4 = PTR_DAT_046a6f80;
    puVar3 = PTR_DAT_046a6f78;
    puVar1 = StringLiteral_8731;
    iVar16 = 0;
    lVar14 = 0;
    while( true ) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_020b5864();
      }
      uVar9 = FUN_040cbf6c(lVar14,0,0);
      if (((uVar9 & 1) == 0) || (iVar6 <= iVar16)) break;
      lVar10 = FUN_040dac64(param_1,iVar16,0);
      if ((lVar10 == 0) || (lVar10 = FUN_040c67e4(lVar10,0), lVar10 == 0)) goto LAB_03a40fb4;
      iVar7 = FUN_040d0a98(lVar10,0);
      if (iVar7 == 0x3d) {
        lVar11 = *(long *)puVar2;
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_020b5864();
          lVar11 = *(long *)puVar2;
        }
        FUN_0246e398(lVar10,*(undefined8 *)(*(long *)(lVar11 + 0xb8) + 8),*(undefined8 *)puVar4);
        lVar11 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
        if (lVar11 == 0) goto LAB_03a40fb4;
        if (0 < *(int *)(lVar11 + 0x18)) {
          lVar14 = lVar10;
        }
      }
      iVar16 = iVar16 + 1;
    }
    if (unaff_w19 < 1) {
      lVar10 = *(long *)puVar2;
      goto LAB_03a40f7c;
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_020b5864();
    }
    uVar9 = FUN_040cbf6c(lVar14,0,0);
    if ((uVar9 & 1) != 0) {
      lVar14 = thunk_FUN_02094760(*(undefined8 *)StringLiteral_9150);
      FUN_040cb1b8(lVar14,*(undefined8 *)PTR_DAT_046a6f98,0);
      if (lVar14 == 0) goto LAB_03a40fb4;
      FUN_040d0b68(lVar14,0x3d,0);
      lVar10 = FUN_040ca62c(lVar14,0);
      if (lVar10 == 0) goto LAB_03a40fb4;
      FUN_040d8fd4(lVar10,param_1,0);
    }
    lVar10 = FUN_040c67e4(unaff_x21,0);
    if (lVar10 != 0) {
      FUN_0246eaf8(lVar10,&stack0x00000008,*(undefined8 *)StringLiteral_10976);
      lVar10 = in_stack_00000008;
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_020b5864();
      }
      uVar9 = FUN_040ca3b8(lVar10,0,0);
      if ((uVar9 & 1) == 0) goto LAB_03a40f50;
      if (in_stack_00000008 != 0) {
        uVar8 = FUN_040cb874(*(undefined4 *)(in_stack_00000008 + 0x3c),0);
        uVar13 = 0;
        goto LAB_03a40e8c;
      }
    }
  }
  goto LAB_03a40fb4;
  while (uVar13 = uVar13 + 1, uVar13 != 0x20) {
LAB_03a40e8c:
    if ((uVar8 >> (ulong)(uVar13 & 0x1f) & 1) != 0) {
      if (lVar14 == 0) goto LAB_03a40fb4;
      FUN_040ca7a0(lVar14,uVar13,0);
      break;
    }
  }
LAB_03a40f50:
  lVar10 = *(long *)puVar2;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_020b5864();
    lVar10 = *(long *)puVar2;
  }
  lVar11 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
  if (lVar11 != 0) {
    if (unaff_w19 <= *(int *)(lVar11 + 0x18)) {
LAB_03a40f7c:
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_020b5864();
        lVar10 = *(long *)puVar2;
      }
      return *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 8);
    }
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_020b5864();
      lVar11 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    }
    if (((lVar14 == 0) || (lVar10 = FUN_040cb860(lVar14,0), lVar10 == 0)) ||
       (uVar12 = FUN_0246d9ec(lVar10,*(undefined8 *)puVar3), lVar11 == 0)) goto LAB_03a40fb4;
    lVar10 = *(long *)(lVar11 + 0x10);
    lVar15 = *(long *)puVar5;
    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
    if (lVar10 == 0) goto LAB_03a40fb4;
    uVar13 = *(uint *)(lVar11 + 0x18);
    if (uVar13 < *(uint *)(lVar10 + 0x18)) {
      *(uint *)(lVar11 + 0x18) = uVar13 + 1;
      *(undefined8 *)(lVar10 + (long)(int)uVar13 * 8 + 0x20) = uVar12;
      thunk_FUN_020ccb58();
    }
    else {
      FUN_034a2968(lVar11,uVar12,*(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70))
      ;
    }
    goto LAB_03a40f50;
  }
LAB_03a40fb4:
                    /* WARNING: Subroutine does not return */
  FUN_0206154c();
}


