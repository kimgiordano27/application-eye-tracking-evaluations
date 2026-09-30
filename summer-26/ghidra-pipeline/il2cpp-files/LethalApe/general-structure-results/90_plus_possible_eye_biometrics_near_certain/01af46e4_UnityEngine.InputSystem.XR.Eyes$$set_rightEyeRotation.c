/*
FUNCTION_NAME: UnityEngine.InputSystem.XR.Eyes$$set_rightEyeRotation
ENTRY_POINT: 01af46e4
PROGRAM: LethalApe-libil2cpp.so
SCORE: 140
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01af48d8) */
/* WARNING: Removing unreachable block (ram,0x01af47c4) */
/* WARNING: Removing unreachable block (ram,0x01af4850) */
/* WARNING: Removing unreachable block (ram,0x01af4900) */

void UnityEngine_InputSystem_XR_Eyes__set_rightEyeRotation(undefined4 *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  int in_w10;
  int *piVar10;
  long unaff_x21;
  int iVar11;
  long *unaff_x22;
  long *plVar12;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  undefined4 uStack0000000000000008;
  char cStack000000000000000c;
  
  do {
                    /* catch() { ... } // from try @ 01af4444 with catch @ 01af46e4 */
    uVar1 = *param_1;
    lVar7 = *(long *)(unaff_x21 + 0x10);
                    /* try { // try from 01af46ec to 01bf46ef has its CatchHandler @ 01af47f0 */
    lVar9 = *unaff_x28;
    *(int *)(unaff_x21 + 0x1c) = in_w10 + 1;
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00a190f0();
    }
    uVar2 = *(uint *)(unaff_x21 + 0x18);
    if (uVar2 < *(uint *)(lVar7 + 0x18)) {
      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
      *(undefined4 *)(lVar7 + (long)(int)uVar2 * 4 + 0x20) = uVar1;
    }
    else {
      (**(code **)(*(long *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x58) + 8))();
    }
    do {
      lVar7 = *unaff_x22;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x25) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_01af45c0;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_0099eb60();
LAB_01af45c0:
      uVar8 = (*(code *)*puVar4)();
      puVar3 = PTR_DAT_02c0e8f0;
      if ((uVar8 & 1) == 0) {
        plVar5 = (long *)thunk_FUN_00a05b84();
        if (plVar5 == (long *)0x0) goto LAB_01af47b8;
        lVar7 = *plVar5;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
        if (uVar8 == 0) goto LAB_01af4790;
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        goto LAB_01af4778;
      }
      lVar7 = *unaff_x22;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x25) {
            puVar4 = (undefined8 *)(lVar7 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_01af4620;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_0099eb60();
LAB_01af4620:
      plVar5 = (long *)(*(code *)*puVar4)();
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00a190f0();
      }
      if (*(long *)(*plVar5 + 0x40) != *(long *)(*unaff_x29 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_00a193ac();
      }
      puVar4 = (undefined8 *)thunk_FUN_00a05dc8();
      plVar5 = (long *)puVar4[1];
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00a190f0();
      }
      lVar7 = *unaff_x24;
      if ((*(byte *)(*plVar5 + 300) < *(byte *)(lVar7 + 300)) ||
         (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(lVar7 + 300) * 8 + -8) != lVar7)) {
                    /* WARNING: Subroutine does not return */
        FUN_00a193ac();
      }
      lVar9 = *plVar5;
      if ((*(byte *)(lVar9 + 300) < *(byte *)(lVar7 + 300)) ||
         (*(long *)(*(long *)(lVar9 + 200) + (ulong)*(byte *)(lVar7 + 300) * 8 + -8) != lVar7)) {
                    /* WARNING: Subroutine does not return */
        FUN_00a193ac();
      }
      plVar12 = (long *)*puVar4;
      lVar7 = (**(code **)(lVar9 + 0x198))(plVar5,*(undefined8 *)(lVar9 + 0x1a0));
    } while (lVar7 != 0);
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00a190f0();
    }
    if (*(long *)(*plVar12 + 0x40) != *(long *)(*unaff_x27 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_00a193ac(plVar12);
    }
    param_1 = (undefined4 *)thunk_FUN_00a05dc8(plVar12);
    in_w10 = *(int *)(unaff_x21 + 0x1c);
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar10 = piVar10 + 4;
    if (uVar8 == 0) break;
LAB_01af4778:
    if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
      puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_01af47ac;
    }
  }
LAB_01af4790:
  puVar4 = (undefined8 *)FUN_0099eb60(plVar5,*(long *)puVar3,0);
LAB_01af47ac:
  (*(code *)*puVar4)(plVar5,puVar4[1]);
LAB_01af47b8:
  if (0 < *(int *)(unaff_x21 + 0x18)) {
    iVar11 = 0;
    do {
      lVar7 = *unaff_x26;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_009ddef4();
        lVar7 = *unaff_x26;
      }
      plVar5 = *(long **)(*(long *)(lVar7 + 0xb8) + 0x38);
      uStack0000000000000008 = FUN_010d2cc0();
      uVar6 = thunk_FUN_00a058b4(*unaff_x27,&stack0x00000008);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00a190f0(uVar6,uVar6);
      }
      (**(code **)(*plVar5 + 0x3a8))(plVar5,uVar6,*(undefined8 *)(*plVar5 + 0x3b0));
      iVar11 = iVar11 + 1;
    } while (iVar11 < *(int *)(unaff_x21 + 0x18));
  }
  if (cStack000000000000000c != '\0') {
    thunk_FUN_00a236e8();
  }
  return;
}


