/*
FUNCTION_NAME: UnityEngine.InputSystem.XR.XRHMD$$set_leftEyeRotation
ENTRY_POINT: 05c4d020
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

undefined8 UnityEngine_InputSystem_XR_XRHMD__set_leftEyeRotation(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined2 in_w9;
  ulong uVar8;
  int *piVar9;
  long unaff_x21;
  long unaff_x23;
  long *plVar10;
  
                    /* catch() { ... } // from try @ 05c4ce60 with catch @ 05c4d020
                       catch() { ... } // from try @ 05c4cfe8 with catch @ 05c4d020 */
  plVar10 = *(long **)(unaff_x23 + 0xea0);
  *(undefined2 *)(unaff_x21 + 0x20) = in_w9;
  if (*(int *)(*plVar10 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  plVar4 = (long *)FUN_05c4b34c();
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
  lVar7 = *plVar4;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_06a6ade0) {
        puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
        goto FUN_05c4d0a0;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar5 = (undefined8 *)FUN_02e759c0(plVar4,*(long *)PTR_DAT_06a6ade0,0);
FUN_05c4d0a0:
  puVar3 = PTR_DAT_06a6ade8;
  puVar2 = PTR_DAT_06a2ef38;
  puVar1 = PTR_DAT_06a2ef10;
  plVar4 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
  do {
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    lVar7 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_05c4d124;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_02e759c0(plVar4,*(long *)puVar2,0);
LAB_05c4d124:
    uVar8 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if ((uVar8 & 1) == 0) goto LAB_05c4d200;
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    lVar7 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_05c4d188;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_02e759c0(plVar4,*(long *)puVar3,0);
LAB_05c4d188:
    lVar7 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    lVar7 = FUN_05491f08(lVar7,0);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    uVar8 = FUN_0548bb48(lVar7);
  } while ((uVar8 & 1) == 0);
  if (*(int *)(*plVar10 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  lVar7 = FUN_05c4a324(lVar7,0x3d,1);
  if ((lVar7 == 0) || (*(int *)(lVar7 + 0x10) == 0)) {
LAB_05c4d200:
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_054ab3b8(lVar7,0);
  }
  if (plVar4 != (long *)0x0) {
    lVar7 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_05c4d260;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_02e759c0(plVar4,*(long *)puVar1,0);
LAB_05c4d260:
    (*(code *)*puVar5)(plVar4,puVar5[1]);
  }
  return uVar6;
}


