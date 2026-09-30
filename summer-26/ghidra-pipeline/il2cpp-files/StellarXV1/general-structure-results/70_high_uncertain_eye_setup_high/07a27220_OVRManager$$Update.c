/*
FUNCTION_NAME: OVRManager$$Update
ENTRY_POINT: 07a27220
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__Update(void)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long *plVar8;
  undefined8 in_stack_00000000;
  undefined4 in_stack_00000008;
  undefined4 in_stack_00000010;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 in_stack_00000030;
  
  FUN_07a27368();
  FUN_07a274bc();
  puVar1 = PTR_DAT_092edca8;
  plVar8 = *(long **)(unaff_x19 + 0x180);
  if (plVar8 != (long *)0x0) {
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_092edca8) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 3) * 0x10 + 0x138);
          goto LAB_07a27290;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_040b1e00(plVar8,*(long *)PTR_DAT_092edca8,3);
LAB_07a27290:
    in_stack_00000028 = in_stack_00000008;
    in_stack_00000020 = in_stack_00000000;
    in_stack_00000030 = in_stack_00000010;
    (*(code *)*puVar4)(plVar8,&stack0x00000020,puVar4[1]);
    plVar8 = *(long **)(unaff_x19 + 0x180);
    if (plVar8 != (long *)0x0) {
      lVar5 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 5) * 0x10 + 0x138);
            goto LAB_07a2730c;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_040b1e00(plVar8,*(long *)puVar1,5);
LAB_07a2730c:
      (*(code *)*puVar4)(plVar8,puVar4[1]);
      uVar2 = FUN_07a26e80();
      uVar3 = FUN_07a275d0();
      uVar2 = (*(uint *)(unaff_x19 + 0x178) | uVar2) & (uVar3 ^ 0xffffffff);
      *(uint *)(unaff_x19 + 0x178) = uVar2;
      if ((uVar3 != 0) && (uVar2 == 0)) {
        *(undefined1 *)(unaff_x19 + 0x169) = 1;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


