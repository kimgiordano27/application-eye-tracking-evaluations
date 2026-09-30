/*
FUNCTION_NAME: UnityEngine.InputSystem.XR.Eyes$$get_rightEyePosition
ENTRY_POINT: 01af46c0
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

void UnityEngine_InputSystem_XR_Eyes__get_rightEyePosition(void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  int *piVar11;
  long unaff_x21;
  int iVar12;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  undefined4 uStack0000000000000008;
  char cStack000000000000000c;
  
  do {
                    /* catch() { ... } // from try @ 01af447c with catch @ 01af46c0 */
                    /* catch() { ... } // from try @ 01af4464 with catch @ 01af46c4 */
                    /* catch() { ... } // from try @ 01af4460 with catch @ 01af46c8 */
    if (*(long *)(*unaff_x23 + 0x40) != *(long *)(*unaff_x27 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_00a193ac(unaff_x23);
    }
    puVar6 = (undefined4 *)thunk_FUN_00a05dc8(unaff_x23);
    uVar1 = *puVar6;
    lVar8 = *(long *)(unaff_x21 + 0x10);
    lVar10 = *unaff_x28;
    *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00a190f0();
    }
    uVar2 = *(uint *)(unaff_x21 + 0x18);
    if (uVar2 < *(uint *)(lVar8 + 0x18)) {
      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
      *(undefined4 *)(lVar8 + (long)(int)uVar2 * 4 + 0x20) = uVar1;
    }
    else {
      (**(code **)(*(long *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x58) + 8))();
    }
    do {
      lVar8 = *unaff_x22;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar9 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *unaff_x25) {
            puVar4 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_01af45c0;
          }
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_0099eb60();
LAB_01af45c0:
      uVar9 = (*(code *)*puVar4)();
      puVar3 = PTR_DAT_02c0e8f0;
      if ((uVar9 & 1) == 0) {
        plVar5 = (long *)thunk_FUN_00a05b84();
        if (plVar5 == (long *)0x0) goto LAB_01af47b8;
        lVar8 = *plVar5;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar9 == 0) goto LAB_01af4790;
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        goto LAB_01af4778;
      }
      lVar8 = *unaff_x22;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar9 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *unaff_x25) {
            puVar4 = (undefined8 *)(lVar8 + (long)(*piVar11 + 1) * 0x10 + 0x138);
            goto LAB_01af4620;
          }
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar9 != 0);
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
      lVar8 = *unaff_x24;
      if ((*(byte *)(*plVar5 + 300) < *(byte *)(lVar8 + 300)) ||
         (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(lVar8 + 300) * 8 + -8) != lVar8)) {
                    /* WARNING: Subroutine does not return */
        FUN_00a193ac();
      }
      lVar10 = *plVar5;
      if ((*(byte *)(lVar10 + 300) < *(byte *)(lVar8 + 300)) ||
         (*(long *)(*(long *)(lVar10 + 200) + (ulong)*(byte *)(lVar8 + 300) * 8 + -8) != lVar8)) {
                    /* WARNING: Subroutine does not return */
        FUN_00a193ac();
      }
      unaff_x23 = (long *)*puVar4;
      lVar8 = (**(code **)(lVar10 + 0x198))(plVar5,*(undefined8 *)(lVar10 + 0x1a0));
    } while (lVar8 != 0);
    if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00a190f0();
    }
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar11 = piVar11 + 4;
    if (uVar9 == 0) break;
LAB_01af4778:
    if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
      puVar4 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_01af47ac;
    }
  }
LAB_01af4790:
  puVar4 = (undefined8 *)FUN_0099eb60(plVar5,*(long *)puVar3,0);
LAB_01af47ac:
  (*(code *)*puVar4)(plVar5,puVar4[1]);
LAB_01af47b8:
  if (0 < *(int *)(unaff_x21 + 0x18)) {
    iVar12 = 0;
    do {
      lVar8 = *unaff_x26;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_009ddef4();
        lVar8 = *unaff_x26;
      }
      plVar5 = *(long **)(*(long *)(lVar8 + 0xb8) + 0x38);
      uStack0000000000000008 = FUN_010d2cc0();
      uVar7 = thunk_FUN_00a058b4(*unaff_x27,&stack0x00000008);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00a190f0(uVar7,uVar7);
      }
      (**(code **)(*plVar5 + 0x3a8))(plVar5,uVar7,*(undefined8 *)(*plVar5 + 0x3b0));
      iVar12 = iVar12 + 1;
    } while (iVar12 < *(int *)(unaff_x21 + 0x18));
  }
  if (cStack000000000000000c != '\0') {
    thunk_FUN_00a236e8();
  }
  return;
}


