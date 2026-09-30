/*
FUNCTION_NAME: OVRManager$$.cctor
ENTRY_POINT: 051aa4dc
PROGRAM: hellodot-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRManager___cctor(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long in_x9;
  int *piVar6;
  long *unaff_x19;
  uint uVar7;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  piVar6 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  do {
    if (*(long *)(piVar6 + -2) == param_3) {
      puVar2 = (undefined8 *)(param_1 + (long)(*piVar6 + 4) * 0x10 + 0x138);
      goto LAB_051aa524;
    }
    in_x9 = in_x9 + -1;
    piVar6 = piVar6 + 4;
  } while (in_x9 != 0);
  puVar2 = (undefined8 *)FUN_02ce0a7c();
LAB_051aa524:
  lVar3 = (*(code *)*puVar2)();
  uVar4 = FUN_051af030();
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06604c48) {
          puVar2 = (undefined8 *)(lVar5 + (long)(*piVar6 + 8) * 0x10 + 0x138);
          goto LAB_051aa5a4;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_02ce0a7c();
LAB_051aa5a4:
    (*(code *)*puVar2)(&stack0x00000008);
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000018;
    if (lVar3 == 0) goto LAB_051aa69c;
    uVar1 = FUN_051ce454(lVar3,&stack0x00000020,0);
    uVar1 = uVar1 & 1;
  }
  uVar4 = FUN_051af0e0();
  uVar7 = uVar1;
  if ((uVar4 & 1) != 0) {
    lVar5 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06604c48) {
          puVar2 = (undefined8 *)(lVar5 + (long)(*piVar6 + 9) * 0x10 + 0x138);
          goto LAB_051aa644;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_02ce0a7c();
LAB_051aa644:
    (*(code *)*puVar2)(&stack0x00000008);
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000018;
    if (lVar3 == 0) {
LAB_051aa69c:
      in_stack_00000020 = in_stack_00000008;
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000030 = in_stack_00000018;
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    uVar4 = FUN_051ce778(lVar3,&stack0x00000020,0);
    uVar7 = uVar1 | 2;
    if ((uVar4 & 1) == 0) {
      uVar7 = uVar1;
    }
  }
  return uVar7;
}


