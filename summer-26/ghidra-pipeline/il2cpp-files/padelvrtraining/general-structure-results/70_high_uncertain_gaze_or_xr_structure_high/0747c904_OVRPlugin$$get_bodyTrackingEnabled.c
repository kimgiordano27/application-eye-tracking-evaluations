/*
FUNCTION_NAME: OVRPlugin$$get_bodyTrackingEnabled
ENTRY_POINT: 0747c904
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_5;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__get_bodyTrackingEnabled(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  ulong in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  ulong in_stack_00000030;
  
  if ((DAT_0984593b & 1) == 0) {
    FUN_03d2d2b0(PTR_DAT_092205c8);
    FUN_03d2d2b0(PTR_DAT_092205d0);
    FUN_03d2d2b0(PTR_DAT_092205d8);
    FUN_03d2d2b0(PTR_DAT_09220558);
    FUN_03d2d2b0(PTR_DAT_092205e0);
    FUN_03d2d2b0(PTR_DAT_09223570);
    DAT_0984593b = 1;
  }
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  plVar10 = *(long **)(param_1 + 0x50);
  if (plVar10 != (long *)0x0) {
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_09220558) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_0747c9cc;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_03d8f370(plVar10,*(long *)PTR_DAT_09220558,2);
LAB_0747c9cc:
    plVar10 = (long *)(*(code *)*puVar5)(plVar10,puVar5[1]);
    if (plVar10 != (long *)0x0) {
      lVar7 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_09223570) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_0747ca34;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_03d8f370(plVar10,*(long *)PTR_DAT_09223570,0);
LAB_0747ca34:
      plVar10 = (long *)(*(code *)*puVar5)(plVar10,puVar5[1]);
      if (plVar10 != (long *)0x0) {
        lVar7 = *plVar10;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_092205e0) {
              puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
              goto LAB_0747caa0;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar5 = (undefined8 *)FUN_03d8f370(plVar10,*(long *)PTR_DAT_092205e0,1);
LAB_0747caa0:
        puVar4 = PTR_DAT_092205d0;
        puVar3 = PTR_DAT_092205c8;
        (*(code *)*puVar5)(&stack0x00000008,plVar10,puVar5[1]);
        in_stack_00000028 = in_stack_00000010;
        in_stack_00000020 = in_stack_00000008;
        in_stack_00000030 = in_stack_00000018;
        while (uVar6 = FUN_06d9872c(&stack0x00000020,*(undefined8 *)puVar4),
              uVar8 = in_stack_00000030, (uVar6 & 1) != 0) {
          uVar2 = *(uint *)(param_1 + 0x20);
          uVar6 = FUN_073a22d0(param_1,0);
          uVar1 = uVar2 & 0xfffffffd;
          if ((uVar6 & 1) == 0) {
            uVar1 = uVar2;
          }
          FUN_073a2348(param_1,uVar8 & 0xffffffff,uVar1,0);
        }
        FUN_06d98728(&stack0x00000020,*(undefined8 *)puVar3);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


