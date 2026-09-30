/*
FUNCTION_NAME: OVRPlugin$$GetNodePoseStateAtTime
ENTRY_POINT: 05d15370
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin__GetNodePoseStateAtTime(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  long *unaff_x20;
  uint uVar6;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  uint uStack0000000000000048;
  uint uStack000000000000004c;
  
  if (unaff_x20 != (long *)0x0) {
    lVar2 = *unaff_x20;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_06fb4b00) {
          puVar1 = (undefined8 *)(lVar2 + (long)(*piVar5 + 4) * 0x10 + 0x138);
          goto LAB_05d153cc;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_02feb5b8();
LAB_05d153cc:
    lVar2 = (*(code *)*puVar1)();
    if (unaff_x19 == (long *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar4 = FUN_05d148b4();
      if ((uVar4 & 1) == 0) {
        uVar6 = 0;
      }
      else {
        if (lVar2 == 0) goto LAB_05d1559c;
        uStack000000000000004c = FUN_05d354b0(lVar2,0);
        lVar3 = *unaff_x19;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_06fb4b20) {
              puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 8) * 0x10 + 0x138);
              goto LAB_05d1546c;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 != 0);
        }
        puVar1 = (undefined8 *)FUN_02feb5b8();
LAB_05d1546c:
        (*(code *)*puVar1)(&stack0x00000008);
        in_stack_00000028 = in_stack_00000010;
        in_stack_00000020 = in_stack_00000008;
        in_stack_00000030 = in_stack_00000018;
        if (*(int *)(*(long *)PTR_DAT_06fb4b18 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        FUN_05d34c7c(&stack0x00000020,(long)&stack0x00000048 + 4,0);
        uVar6 = uStack000000000000004c;
      }
      uVar4 = FUN_05d14964();
      if ((uVar4 & 1) != 0) {
        if (lVar2 == 0) goto LAB_05d1559c;
        uStack0000000000000048 = FUN_05d35590(lVar2,0);
        lVar2 = *unaff_x19;
        uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_06fb4b20) {
              puVar1 = (undefined8 *)(lVar2 + (long)(*piVar5 + 9) * 0x10 + 0x138);
              goto LAB_05d15534;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 != 0);
        }
        puVar1 = (undefined8 *)FUN_02feb5b8();
LAB_05d15534:
        (*(code *)*puVar1)(&stack0x00000008);
        in_stack_00000028 = in_stack_00000010;
        in_stack_00000020 = in_stack_00000008;
        in_stack_00000030 = in_stack_00000018;
        if (*(int *)(*(long *)PTR_DAT_06fb4b18 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        FUN_05d34c7c(&stack0x00000020,&stack0x00000048,0);
        uVar6 = uStack0000000000000048 | uVar6;
      }
    }
    return uVar6;
  }
LAB_05d1559c:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


