/*
FUNCTION_NAME: OVRPlugin$$GetSpaceUuid
ENTRY_POINT: 06ace368
PROGRAM: Waifu-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin__GetSpaceUuid(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  uint uVar6;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  uint uStack0000000000000048;
  uint uStack000000000000004c;
  
  FUN_0335b6c8();
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083cca38,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083cca40,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x21 + 0x2e3) = 1;
  if (unaff_x20 != (long *)0x0) {
    lVar2 = *unaff_x20;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == DAT_083cca40) {
          puVar1 = (undefined8 *)(lVar2 + (long)(*piVar5 + 4) * 0x10 + 0x138);
          goto LAB_06ace3f8;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_0338f71c();
LAB_06ace3f8:
    lVar2 = (*(code *)*puVar1)();
    if (unaff_x19 == (long *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar4 = FUN_06ad41f8();
      if ((uVar4 & 1) == 0) {
        uVar6 = 0;
      }
      else {
        if (lVar2 == 0) goto LAB_06ace5b0;
        uStack000000000000004c = FUN_06aea184(uVar4,*(undefined8 *)(lVar2 + 0x40));
        lVar3 = *unaff_x19;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == DAT_083cca38) {
              puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 8) * 0x10 + 0x138);
              goto LAB_06ace490;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 != 0);
        }
        puVar1 = (undefined8 *)FUN_0338f71c();
LAB_06ace490:
        (*(code *)*puVar1)(&stack0x00000008);
        in_stack_00000028 = in_stack_00000010;
        in_stack_00000020 = in_stack_00000008;
        in_stack_00000030 = in_stack_00000018;
        if (*(int *)(DAT_083cbd40 + 0xe0) == 0) {
          FUN_033b9870();
        }
        FUN_06ae976c(&stack0x00000020,(long)&stack0x00000048 + 4,0);
        uVar6 = uStack000000000000004c;
      }
      uVar4 = FUN_06ad42b4();
      if ((uVar4 & 1) != 0) {
        if (lVar2 == 0) goto LAB_06ace5b0;
        uStack0000000000000048 = FUN_06aea184(uVar4,*(undefined8 *)(lVar2 + 0x48));
        lVar2 = *unaff_x19;
        uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == DAT_083cca38) {
              puVar1 = (undefined8 *)(lVar2 + (long)(*piVar5 + 9) * 0x10 + 0x138);
              goto LAB_06ace54c;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 != 0);
        }
        puVar1 = (undefined8 *)FUN_0338f71c();
LAB_06ace54c:
        (*(code *)*puVar1)(&stack0x00000008);
        in_stack_00000028 = in_stack_00000010;
        in_stack_00000020 = in_stack_00000008;
        in_stack_00000030 = in_stack_00000018;
        if (*(int *)(DAT_083cbd40 + 0xe0) == 0) {
          FUN_033b9870();
        }
        FUN_06ae976c(&stack0x00000020,&stack0x00000048,0);
        uVar6 = uStack0000000000000048 | uVar6;
      }
    }
    return uVar6;
  }
LAB_06ace5b0:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


