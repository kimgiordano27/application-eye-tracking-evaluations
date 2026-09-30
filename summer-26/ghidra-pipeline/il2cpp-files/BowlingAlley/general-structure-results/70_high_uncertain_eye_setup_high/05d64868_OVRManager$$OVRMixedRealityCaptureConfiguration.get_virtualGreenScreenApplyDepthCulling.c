/*
FUNCTION_NAME: OVRManager$$OVRMixedRealityCaptureConfiguration.get_virtualGreenScreenApplyDepthCulling
ENTRY_POINT: 05d64868
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenApplyDepthCulling
               (long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  uint uVar10;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  ulong in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  ulong in_stack_00000030;
  
  if ((DAT_076d8617 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_072ae428);
    thunk_FUN_032e1da0(PTR_DAT_072ae430);
    thunk_FUN_032e1da0(PTR_DAT_072ae438);
    thunk_FUN_032e1da0(PTR_DAT_072b1108);
    thunk_FUN_032e1da0(PTR_DAT_072ae440);
    thunk_FUN_032e1da0(PTR_DAT_072b1118);
    DAT_076d8617 = 1;
  }
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  plVar9 = *(long **)(param_1 + 0x50);
  if (plVar9 != (long *)0x0) {
    lVar6 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_072b1108) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_05d64934;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_032937ac(plVar9,*(long *)PTR_DAT_072b1108,0);
LAB_05d64934:
    plVar9 = (long *)(*(code *)*puVar4)(plVar9,puVar4[1]);
    if (plVar9 != (long *)0x0) {
      lVar6 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_072b1118) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_05d6499c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_032937ac(plVar9,*(long *)PTR_DAT_072b1118,0);
LAB_05d6499c:
      plVar9 = (long *)(*(code *)*puVar4)(plVar9,puVar4[1]);
      if (plVar9 != (long *)0x0) {
        lVar6 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_072ae440) {
              puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
              goto LAB_05d64a08;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_032937ac(plVar9,*(long *)PTR_DAT_072ae440,1);
LAB_05d64a08:
        puVar3 = PTR_DAT_072ae430;
        puVar2 = PTR_DAT_072ae428;
        (*(code *)*puVar4)(&stack0x00000008,plVar9,puVar4[1]);
        in_stack_00000028 = in_stack_00000010;
        in_stack_00000020 = in_stack_00000008;
        in_stack_00000030 = in_stack_00000018;
        while (uVar5 = FUN_052b6520(&stack0x00000020,*(undefined8 *)puVar3),
              uVar7 = in_stack_00000030, (uVar5 & 1) != 0) {
          uVar1 = *(uint *)(param_1 + 0x20);
          uVar5 = FUN_05c989f0(param_1,0);
          uVar10 = uVar1;
          if (((uVar5 & 1) != 0) && (uVar10 = uVar1 & 0xfffffffd, *(int *)(param_1 + 0x58) != 1)) {
            uVar10 = uVar1;
          }
          FUN_05c98a68(param_1,uVar7 & 0xffffffff,uVar10,0);
        }
        FUN_052b651c(&stack0x00000020,*(undefined8 *)puVar2);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


