/*
FUNCTION_NAME: UnityEngine.InputSystem.XR.XRHMD$$get_leftEyeRotation
ENTRY_POINT: 03a40c64
PROGRAM: Gorillavs100Men-libil2cpp.so
SCORE: 140
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_19;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_2
*/


undefined8 UnityEngine_InputSystem_XR_XRHMD__get_leftEyeRotation(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  uint uVar14;
  long lVar15;
  int unaff_w19;
  undefined8 unaff_x21;
  int iVar16;
  long in_stack_00000008;
  
  lVar9 = FUN_040c6714();
  puVar2 = PTR_DAT_046a6f58;
                    /* try { // try from 03a40c68 to 03b40c73 has its CatchHandler @ 03a418a8 */
  if (lVar9 != 0) {
    iVar6 = FUN_040da4a0(lVar9,0);
    lVar15 = *(long *)puVar2;
    if (*(int *)(lVar15 + 0xe4) == 0) {
      thunk_FUN_020b5864(lVar15);
      lVar15 = *(long *)puVar2;
    }
    lVar15 = *(long *)(*(long *)(lVar15 + 0xb8) + 8);
    if (lVar15 != 0) {
      iVar16 = *(int *)(lVar15 + 0x18);
      *(undefined4 *)(lVar15 + 0x18) = 0;
      *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
      if (0 < iVar16) {
        FUN_0384dd94(*(undefined8 *)(lVar15 + 0x10),0,iVar16,0);
      }
      puVar5 = PTR_DAT_046a6f88;
      puVar4 = PTR_DAT_046a6f80;
      puVar3 = PTR_DAT_046a6f78;
      puVar1 = StringLiteral_8731;
      iVar16 = 0;
      lVar15 = 0;
      while( true ) {
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_020b5864();
        }
        uVar10 = FUN_040cbf6c(lVar15,0,0);
        if (((uVar10 & 1) == 0) || (iVar6 <= iVar16)) break;
        lVar11 = FUN_040dac64(lVar9,iVar16,0);
        if ((lVar11 == 0) || (lVar11 = FUN_040c67e4(lVar11,0), lVar11 == 0)) goto LAB_03a40fb4;
        iVar7 = FUN_040d0a98(lVar11,0);
        if (iVar7 == 0x3d) {
          lVar12 = *(long *)puVar2;
          if (*(int *)(lVar12 + 0xe4) == 0) {
            thunk_FUN_020b5864();
            lVar12 = *(long *)puVar2;
          }
          FUN_0246e398(lVar11,*(undefined8 *)(*(long *)(lVar12 + 0xb8) + 8),*(undefined8 *)puVar4);
          lVar12 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
          if (lVar12 == 0) goto LAB_03a40fb4;
          if (0 < *(int *)(lVar12 + 0x18)) {
            lVar15 = lVar11;
          }
        }
        iVar16 = iVar16 + 1;
      }
      if (unaff_w19 < 1) {
        lVar9 = *(long *)puVar2;
        goto LAB_03a40f7c;
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_020b5864();
      }
      uVar10 = FUN_040cbf6c(lVar15,0,0);
      if ((uVar10 & 1) != 0) {
        lVar15 = thunk_FUN_02094760(*(undefined8 *)StringLiteral_9150);
        FUN_040cb1b8(lVar15,*(undefined8 *)PTR_DAT_046a6f98,0);
        if (lVar15 == 0) goto LAB_03a40fb4;
        FUN_040d0b68(lVar15,0x3d,0);
        lVar11 = FUN_040ca62c(lVar15,0);
        if (lVar11 == 0) goto LAB_03a40fb4;
        FUN_040d8fd4(lVar11,lVar9,0);
      }
      lVar9 = FUN_040c67e4(unaff_x21,0);
      if (lVar9 != 0) {
        FUN_0246eaf8(lVar9,&stack0x00000008,*(undefined8 *)StringLiteral_10976);
        lVar9 = in_stack_00000008;
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_020b5864();
        }
        uVar10 = FUN_040ca3b8(lVar9,0,0);
        if ((uVar10 & 1) == 0) goto LAB_03a40f50;
        if (in_stack_00000008 != 0) {
          uVar8 = FUN_040cb874(*(undefined4 *)(in_stack_00000008 + 0x3c),0);
          uVar14 = 0;
          goto LAB_03a40e8c;
        }
      }
    }
  }
  goto LAB_03a40fb4;
  while (uVar14 = uVar14 + 1, uVar14 != 0x20) {
LAB_03a40e8c:
    if ((uVar8 >> (ulong)(uVar14 & 0x1f) & 1) != 0) {
      if (lVar15 == 0) goto LAB_03a40fb4;
      FUN_040ca7a0(lVar15,uVar14,0);
      break;
    }
  }
LAB_03a40f50:
  lVar9 = *(long *)puVar2;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_020b5864();
    lVar9 = *(long *)puVar2;
  }
  lVar11 = *(long *)(*(long *)(lVar9 + 0xb8) + 8);
  if (lVar11 != 0) {
    if (unaff_w19 <= *(int *)(lVar11 + 0x18)) {
LAB_03a40f7c:
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_020b5864();
        lVar9 = *(long *)puVar2;
      }
      return *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 8);
    }
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_020b5864();
      lVar11 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    }
    if (((lVar15 == 0) || (lVar9 = FUN_040cb860(lVar15,0), lVar9 == 0)) ||
       (uVar13 = FUN_0246d9ec(lVar9,*(undefined8 *)puVar3), lVar11 == 0)) goto LAB_03a40fb4;
    lVar9 = *(long *)(lVar11 + 0x10);
    lVar12 = *(long *)puVar5;
    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
    if (lVar9 == 0) goto LAB_03a40fb4;
    uVar14 = *(uint *)(lVar11 + 0x18);
    if (uVar14 < *(uint *)(lVar9 + 0x18)) {
      *(uint *)(lVar11 + 0x18) = uVar14 + 1;
      *(undefined8 *)(lVar9 + (long)(int)uVar14 * 8 + 0x20) = uVar13;
      thunk_FUN_020ccb58();
    }
    else {
      FUN_034a2968(lVar11,uVar13,*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70))
      ;
    }
    goto LAB_03a40f50;
  }
LAB_03a40fb4:
                    /* WARNING: Subroutine does not return */
  FUN_0206154c();
}


