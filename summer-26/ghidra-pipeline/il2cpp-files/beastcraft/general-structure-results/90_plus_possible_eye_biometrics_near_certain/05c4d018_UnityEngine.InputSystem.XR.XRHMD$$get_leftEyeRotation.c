/*
FUNCTION_NAME: UnityEngine.InputSystem.XR.XRHMD$$get_leftEyeRotation
ENTRY_POINT: 05c4d018
PROGRAM: beastcraft-libil2cpp.so
SCORE: 140
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05c4d2a4) */

undefined8 UnityEngine_InputSystem_XR_XRHMD__get_leftEyeRotation(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x21;
  
                    /* catch() { ... } // from try @ 05c4cf68 with catch @ 05c4d018 */
  puVar4 = PTR_DAT_06aa4ea0;
                    /* catch() { ... } // from try @ 05c4cfe4 with catch @ 05c4d01c */
  *(undefined2 *)(unaff_x21 + 0x20) = 0x3b;
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  plVar5 = (long *)FUN_05c4b34c();
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
  lVar8 = *plVar5;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_06a6ade0) {
        puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
        goto FUN_05c4d0a0;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar6 = (undefined8 *)FUN_02e759c0(plVar5,*(long *)PTR_DAT_06a6ade0,0);
FUN_05c4d0a0:
  puVar3 = PTR_DAT_06a6ade8;
  puVar2 = PTR_DAT_06a2ef38;
  puVar1 = PTR_DAT_06a2ef10;
  plVar5 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
  do {
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    lVar8 = *plVar5;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_05c4d124;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_02e759c0(plVar5,*(long *)puVar2,0);
LAB_05c4d124:
    uVar9 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if ((uVar9 & 1) == 0) goto LAB_05c4d200;
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    lVar8 = *plVar5;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_05c4d188;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_02e759c0(plVar5,*(long *)puVar3,0);
LAB_05c4d188:
    lVar8 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    lVar8 = FUN_05491f08(lVar8,0);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    uVar9 = FUN_0548bb48(lVar8);
  } while ((uVar9 & 1) == 0);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  lVar8 = FUN_05c4a324(lVar8,0x3d,1);
  if ((lVar8 == 0) || (*(int *)(lVar8 + 0x10) == 0)) {
LAB_05c4d200:
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_054ab3b8(lVar8,0);
  }
  if (plVar5 != (long *)0x0) {
    lVar8 = *plVar5;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_05c4d260;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_02e759c0(plVar5,*(long *)puVar1,0);
LAB_05c4d260:
    (*(code *)*puVar6)(plVar5,puVar6[1]);
  }
  return uVar7;
}


