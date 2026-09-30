/*
FUNCTION_NAME: OVRPlugin$$GetBoundaryConfigured
ENTRY_POINT: 04f5e488
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin__GetBoundaryConfigured(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  long in_x9;
  int *in_x10;
  int *piVar6;
  long *unaff_x20;
  uint uVar7;
  long *unaff_x24;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  do {
    in_x9 = in_x9 + -1;
    piVar6 = in_x10 + 4;
    if (in_x9 == 0) {
      puVar3 = (undefined8 *)FUN_02b7654c();
      goto LAB_04f5e4b4;
    }
    plVar1 = (long *)(in_x10 + 2);
    in_x10 = piVar6;
  } while (*plVar1 != param_3);
  puVar3 = (undefined8 *)(param_1 + (long)(*piVar6 + 8) * 0x10 + 0x138);
LAB_04f5e4b4:
  (*(code *)*puVar3)(&stack0x00000008);
  in_stack_00000048 = in_stack_00000010;
  in_stack_00000040 = in_stack_00000008;
  in_stack_00000050 = in_stack_00000018;
  uVar4 = FUN_04f7e714();
  if ((uVar4 & 1) == 0) {
    lVar5 = *unaff_x20;
    uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x24) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar6 + 8) * 0x10 + 0x138);
          goto LAB_04f5e54c;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined8 *)FUN_02b7654c();
LAB_04f5e54c:
    (*(code *)*puVar3)(&stack0x00000008);
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000018;
    uVar2 = FUN_04f7ec0c();
    uVar2 = uVar2 & 1;
  }
  else {
    uVar2 = 0;
  }
  lVar5 = *unaff_x20;
  uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar4 != 0) {
    piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *unaff_x24) {
        puVar3 = (undefined8 *)(lVar5 + (long)(*piVar6 + 7) * 0x10 + 0x138);
        goto LAB_04f5e5d0;
      }
      uVar4 = uVar4 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined8 *)FUN_02b7654c();
LAB_04f5e5d0:
  (*(code *)*puVar3)();
  uVar4 = FUN_04f5e7d0();
  uVar7 = uVar2;
  if ((uVar4 & 1) != 0) {
    lVar5 = *unaff_x20;
    uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x24) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar6 + 9) * 0x10 + 0x138);
          goto LAB_04f5e63c;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined8 *)FUN_02b7654c();
LAB_04f5e63c:
    (*(code *)*puVar3)(&stack0x00000008);
    in_stack_00000048 = in_stack_00000010;
    in_stack_00000040 = in_stack_00000008;
    in_stack_00000050 = in_stack_00000018;
    uVar4 = FUN_04f7e714();
    if ((uVar4 & 1) == 0) {
      lVar5 = *unaff_x20;
      uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar4 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x24) {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar6 + 9) * 0x10 + 0x138);
            goto LAB_04f5e6c4;
          }
          uVar4 = uVar4 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined8 *)FUN_02b7654c();
LAB_04f5e6c4:
      (*(code *)*puVar3)(&stack0x00000008);
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      in_stack_00000030 = in_stack_00000018;
      uVar4 = FUN_04f7efe0();
      uVar7 = uVar2 | 2;
      if ((uVar4 & 1) == 0) {
        uVar7 = uVar2;
      }
    }
  }
  return uVar7;
}


