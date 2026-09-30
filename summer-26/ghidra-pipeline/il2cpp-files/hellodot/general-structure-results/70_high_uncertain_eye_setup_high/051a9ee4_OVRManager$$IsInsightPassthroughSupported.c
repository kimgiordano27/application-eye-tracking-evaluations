/*
FUNCTION_NAME: OVRManager$$IsInsightPassthroughSupported
ENTRY_POINT: 051a9ee4
PROGRAM: hellodot-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRManager__IsInsightPassthroughSupported(long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long in_x9;
  int *in_x10;
  int *piVar5;
  long *unaff_x19;
  uint uVar6;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  uint uStack0000000000000048;
  uint uStack000000000000004c;
  
  while (!(bool)in_ZR) {
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar1 = (undefined8 *)FUN_02ce0a7c();
      goto LAB_051a9f14;
    }
    in_ZR = *(long *)(in_x10 + 2) == param_3;
    in_x10 = in_x10 + 4;
  }
  puVar1 = (undefined8 *)(param_1 + (long)(*in_x10 + 4) * 0x10 + 0x138);
LAB_051a9f14:
  lVar2 = (*(code *)*puVar1)();
  if (unaff_x19 == (long *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar3 = FUN_051af030();
    if ((uVar3 & 1) == 0) {
      uVar6 = 0;
    }
    else {
      if (lVar2 == 0) goto LAB_051aa0e4;
      uStack000000000000004c = FUN_051ce158(lVar2,0);
      lVar4 = *unaff_x19;
      uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar3 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_06604c48) {
            puVar1 = (undefined8 *)(lVar4 + (long)(*piVar5 + 8) * 0x10 + 0x138);
            goto LAB_051a9fb4;
          }
          uVar3 = uVar3 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar3 != 0);
      }
      puVar1 = (undefined8 *)FUN_02ce0a7c();
LAB_051a9fb4:
      (*(code *)*puVar1)(&stack0x00000008);
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      in_stack_00000030 = in_stack_00000018;
      if (*(int *)(*(long *)PTR_DAT_06604c40 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      FUN_051cd958(&stack0x00000020,(long)&stack0x00000048 + 4,0);
      uVar6 = uStack000000000000004c;
    }
    uVar3 = FUN_051af0e0();
    if ((uVar3 & 1) != 0) {
      if (lVar2 == 0) {
LAB_051aa0e4:
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      uStack0000000000000048 = FUN_051ce238(lVar2,0);
      lVar2 = *unaff_x19;
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar3 != 0) {
        piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_06604c48) {
            puVar1 = (undefined8 *)(lVar2 + (long)(*piVar5 + 9) * 0x10 + 0x138);
            goto LAB_051aa07c;
          }
          uVar3 = uVar3 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar3 != 0);
      }
      puVar1 = (undefined8 *)FUN_02ce0a7c();
LAB_051aa07c:
      (*(code *)*puVar1)(&stack0x00000008);
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      in_stack_00000030 = in_stack_00000018;
      if (*(int *)(*(long *)PTR_DAT_06604c40 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      FUN_051cd958(&stack0x00000020,&stack0x00000048,0);
      uVar6 = uStack0000000000000048 | uVar6;
    }
  }
  return uVar6;
}


