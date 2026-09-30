/*
FUNCTION_NAME: UnityEngine.InputSystem.XR.Eyes$$set_leftEyePosition
ENTRY_POINT: 01af469c
PROGRAM: LethalApe-libil2cpp.so
SCORE: 140
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01af48d8) */
/* WARNING: Removing unreachable block (ram,0x01af47c4) */
/* WARNING: Removing unreachable block (ram,0x01af4850) */
/* WARNING: Removing unreachable block (ram,0x01af4900) */

void UnityEngine_InputSystem_XR_Eyes__set_leftEyePosition
               (undefined8 *param_1,long *param_2,long param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  long in_x9;
  long lVar9;
  ulong in_x10;
  int *piVar10;
  long in_x11;
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
  
                    /* catch() { ... } // from try @ 01af4670 with catch @ 01af469c */
                    /* catch() { ... } // from try @ 01af45fc with catch @ 01af46a0 */
                    /* catch() { ... } // from try @ 01af45ec with catch @ 01af46a4 */
  while (*(long *)(in_x11 + in_x10 * 8 + -8) == param_3) {
    plVar12 = (long *)*param_1;
    lVar5 = (**(code **)(in_x9 + 0x198))(param_2,*(undefined8 *)(in_x9 + 0x1a0));
    if (lVar5 == 0) {
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00a190f0();
      }
      if (*(long *)(*plVar12 + 0x40) != *(long *)(*unaff_x27 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_00a193ac(plVar12);
      }
      puVar6 = (undefined4 *)thunk_FUN_00a05dc8(plVar12);
      uVar1 = *puVar6;
      lVar5 = *(long *)(unaff_x21 + 0x10);
      lVar9 = *unaff_x28;
      *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00a190f0();
      }
      uVar2 = *(uint *)(unaff_x21 + 0x18);
      if (uVar2 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
        *(undefined4 *)(lVar5 + (long)(int)uVar2 * 4 + 0x20) = uVar1;
      }
      else {
        (**(code **)(*(long *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x58) + 8))();
      }
    }
    lVar5 = *unaff_x22;
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12a);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x25) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
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
      plVar12 = (long *)thunk_FUN_00a05b84();
      if (plVar12 == (long *)0x0) goto LAB_01af47b8;
      lVar5 = *plVar12;
      uVar8 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar8 == 0) goto LAB_01af4790;
      piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      goto LAB_01af4778;
    }
    lVar5 = *unaff_x22;
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12a);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x25) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto LAB_01af4620;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_0099eb60();
LAB_01af4620:
    plVar12 = (long *)(*(code *)*puVar4)();
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00a190f0();
    }
    if (*(long *)(*plVar12 + 0x40) != *(long *)(*unaff_x29 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_00a193ac();
    }
    param_1 = (undefined8 *)thunk_FUN_00a05dc8();
    param_2 = (long *)param_1[1];
    if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00a190f0();
    }
    param_3 = *unaff_x24;
    if ((*(byte *)(*param_2 + 300) < *(byte *)(param_3 + 300)) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(param_3 + 300) * 8 + -8) != param_3))
    {
                    /* WARNING: Subroutine does not return */
      FUN_00a193ac();
    }
    in_x9 = *param_2;
    in_x10 = (ulong)*(byte *)(param_3 + 300);
    if (*(byte *)(in_x9 + 300) < *(byte *)(param_3 + 300)) break;
    in_x11 = *(long *)(in_x9 + 200);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00a193ac();
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar10 = piVar10 + 4;
    if (uVar8 == 0) break;
LAB_01af4778:
    if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
      puVar4 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_01af47ac;
    }
  }
LAB_01af4790:
  puVar4 = (undefined8 *)FUN_0099eb60(plVar12,*(long *)puVar3,0);
LAB_01af47ac:
  (*(code *)*puVar4)(plVar12,puVar4[1]);
LAB_01af47b8:
  if (0 < *(int *)(unaff_x21 + 0x18)) {
    iVar11 = 0;
    do {
      lVar5 = *unaff_x26;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_009ddef4();
        lVar5 = *unaff_x26;
      }
      plVar12 = *(long **)(*(long *)(lVar5 + 0xb8) + 0x38);
      uStack0000000000000008 = FUN_010d2cc0();
      uVar7 = thunk_FUN_00a058b4(*unaff_x27,&stack0x00000008);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00a190f0(uVar7,uVar7);
      }
      (**(code **)(*plVar12 + 0x3a8))(plVar12,uVar7,*(undefined8 *)(*plVar12 + 0x3b0));
      iVar11 = iVar11 + 1;
    } while (iVar11 < *(int *)(unaff_x21 + 0x18));
  }
  if (cStack000000000000000c != '\0') {
    thunk_FUN_00a236e8();
  }
  return;
}


