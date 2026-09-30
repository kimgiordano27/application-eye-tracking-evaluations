/*
FUNCTION_NAME: OVRManager$$IsInsightPassthroughInitPending
ENTRY_POINT: 05d062c8
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__IsInsightPassthroughInitPending
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined8 param_3,long param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  long unaff_x19;
  long unaff_x20;
  long *plVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  
  FUN_02fe925c(*(undefined8 *)(param_4 + 0x4a8));
  FUN_02fe925c(PTR_DAT_06fb84b0);
  FUN_02fe925c(PTR_DAT_06fb8368);
  *(undefined1 *)(unaff_x20 + 0x7c8) = 1;
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    if (*(int *)(*(long *)(unaff_x19 + 0x20) + 0x84) == 3) {
      return;
    }
    uVar1 = FUN_05d04ab8();
    uVar10 = 0x3f800000;
    uVar11 = 0x3f800000;
    uVar12 = 0x3f800000;
    uVar13 = 0x3f800000;
    if ((uVar1 & 1) == 0) {
      uVar13 = *(undefined4 *)(unaff_x19 + 0x54);
      uVar12 = *(undefined4 *)(unaff_x19 + 0x58);
      uVar11 = *(undefined4 *)(unaff_x19 + 0x5c);
      uVar10 = *(undefined4 *)(unaff_x19 + 0x60);
    }
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if (lVar3 != 0) {
      in_stack_00000060 = *(undefined8 *)(lVar3 + 0x168);
      in_stack_00000048 = *(undefined8 *)(lVar3 + 0x150);
      in_stack_00000040 = *(undefined8 *)(lVar3 + 0x148);
      in_stack_00000058 = *(undefined8 *)(lVar3 + 0x160);
      uVar9 = *(undefined8 *)(lVar3 + 0x158);
      in_stack_00000050 = uVar9;
      if (*(int *)(*(long *)PTR_DAT_06fb8368 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      uVar8 = FUN_05d032f0(&stack0x00000040);
      plVar6 = *(long **)(unaff_x19 + 0x70);
      if (plVar6 != (long *)0x0) {
        lVar3 = *plVar6;
        uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar1 != 0) {
          piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_06fb84a8) {
              puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
              goto LAB_05d063c8;
            }
            uVar1 = uVar1 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar1 != 0);
        }
        puVar2 = (undefined8 *)FUN_02feb5b8(plVar6,*(long *)PTR_DAT_06fb84a8,0);
LAB_05d063c8:
        uVar8 = (*(code *)*puVar2)(uVar8,uVar9,param_3,plVar6,puVar2[1]);
      }
      if (*(long *)(unaff_x19 + 0x20) != 0) {
        FUN_05d03f14(&stack0x00000020);
        FUN_05d0651c(uVar8,uVar9,param_3);
        lVar3 = *(long *)(unaff_x19 + 0x28);
        if (lVar3 != 0) {
          *(undefined4 *)(lVar3 + 0x50) = uVar13;
          *(undefined4 *)(lVar3 + 0x54) = uVar12;
          *(undefined4 *)(lVar3 + 0x58) = uVar11;
          *(undefined4 *)(lVar3 + 0x5c) = uVar10;
          plVar6 = *(long **)(unaff_x19 + 0x48);
          lVar3 = *(long *)(unaff_x19 + 0x28);
          if (plVar6 == (long *)0x0) {
            uVar7 = 0;
          }
          else {
            lVar4 = *plVar6;
            uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar1 != 0) {
              piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_06fb4c68) {
                  puVar2 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
                  goto LAB_05d064a8;
                }
                uVar1 = uVar1 - 1;
                piVar5 = piVar5 + 4;
              } while (uVar1 != 0);
            }
            puVar2 = (undefined8 *)FUN_02feb5b8(plVar6,*(long *)PTR_DAT_06fb4c68,0);
LAB_05d064a8:
            uVar7 = (*(code *)*puVar2)(plVar6,puVar2[1]);
          }
          if (lVar3 != 0) {
            *(undefined4 *)(lVar3 + 0x78) = uVar7;
            if (*(long *)(unaff_x19 + 0x28) != 0) {
              FUN_05c39230(*(long *)(unaff_x19 + 0x28),*(undefined8 *)(unaff_x19 + 0x68),0,0);
              FUN_05d06b44(uVar13,uVar12,uVar11,uVar10,uVar8,uVar9,param_3);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


