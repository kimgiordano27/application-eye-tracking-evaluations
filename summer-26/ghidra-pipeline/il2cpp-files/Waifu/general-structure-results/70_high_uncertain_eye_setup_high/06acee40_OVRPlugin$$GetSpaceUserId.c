/*
FUNCTION_NAME: OVRPlugin$$GetSpaceUserId
ENTRY_POINT: 06acee40
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetSpaceUserId(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long *plVar10;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  undefined8 in_stack_00000060;
  undefined4 in_stack_00000068;
  undefined4 uStack0000000000000070;
  undefined8 uStack0000000000000074;
  
  FUN_06acefa4();
  FUN_06acf100(&stack0x00000040);
  uVar3 = uStack0000000000000050;
  uVar2 = in_stack_00000048;
  uVar1 = in_stack_00000040;
  plVar10 = *(long **)(unaff_x19 + 0x180);
  uStack0000000000000034 = uStack0000000000000054;
  if (plVar10 != (long *)0x0) {
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_083ccd68) {
          puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 3) * 0x10 + 0x138);
          goto LAB_06aceecc;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_0338f71c(plVar10,DAT_083ccd68,3);
LAB_06aceecc:
    in_stack_00000068 = uVar2;
    in_stack_00000060 = uVar1;
    uStack0000000000000074 = uStack0000000000000054;
    uStack0000000000000070 = uVar3;
    (*(code *)*puVar6)(plVar10,&stack0x00000060,puVar6[1]);
    plVar10 = *(long **)(unaff_x19 + 0x180);
    if (plVar10 != (long *)0x0) {
      lVar7 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == DAT_083ccd68) {
            puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 5) * 0x10 + 0x138);
            goto LAB_06acef48;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)FUN_0338f71c(plVar10,DAT_083ccd68,5);
LAB_06acef48:
      (*(code *)*puVar6)(plVar10,puVar6[1]);
      uVar4 = FUN_06acea88();
      uVar5 = FUN_06acf228();
      uVar4 = (*(uint *)(unaff_x19 + 0x178) | uVar4) & (uVar5 ^ 0xffffffff);
      *(uint *)(unaff_x19 + 0x178) = uVar4;
      if ((uVar5 != 0) && (uVar4 == 0)) {
        *(undefined1 *)(unaff_x19 + 0x169) = 1;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


