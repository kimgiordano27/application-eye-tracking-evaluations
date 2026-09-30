/*
FUNCTION_NAME: OVRManager$$get_cpuLevel
ENTRY_POINT: 060bab6c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRManager__get_cpuLevel(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long in_x9;
  int *in_x10;
  int *piVar6;
  long *unaff_x19;
  uint uVar7;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  uint uStack0000000000000048;
  uint uStack000000000000004c;
  
  do {
    in_x9 = in_x9 + -1;
    piVar6 = in_x10 + 4;
    if (in_x9 == 0) {
      puVar2 = (undefined8 *)FUN_0367cd30();
      goto LAB_060bab98;
    }
    plVar1 = (long *)(in_x10 + 2);
    in_x10 = piVar6;
  } while (*plVar1 != param_3);
  puVar2 = (undefined8 *)(param_1 + (long)(*piVar6 + 4) * 0x10 + 0x138);
LAB_060bab98:
  lVar3 = (*(code *)*puVar2)();
  if (unaff_x19 == (long *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar4 = FUN_060bff9c();
    if ((uVar4 & 1) == 0) {
      uVar7 = 0;
    }
    else {
      if (lVar3 == 0) goto LAB_060bad68;
      uStack000000000000004c = FUN_060e3404(lVar3,0);
      lVar5 = *unaff_x19;
      uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar4 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_07a20898) {
            puVar2 = (undefined8 *)(lVar5 + (long)(*piVar6 + 8) * 0x10 + 0x138);
            goto LAB_060bac38;
          }
          uVar4 = uVar4 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_0367cd30();
LAB_060bac38:
      (*(code *)*puVar2)(&stack0x00000008);
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      in_stack_00000030 = in_stack_00000018;
      if (*(int *)(*(long *)PTR_DAT_07a20890 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      FUN_060e2bd8(&stack0x00000020,(long)&stack0x00000048 + 4,0);
      uVar7 = uStack000000000000004c;
    }
    uVar4 = FUN_060c004c();
    if ((uVar4 & 1) != 0) {
      if (lVar3 == 0) {
LAB_060bad68:
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      uStack0000000000000048 = FUN_060e34e4(lVar3,0);
      lVar3 = *unaff_x19;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_07a20898) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar6 + 9) * 0x10 + 0x138);
            goto LAB_060bad00;
          }
          uVar4 = uVar4 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_0367cd30();
LAB_060bad00:
      (*(code *)*puVar2)(&stack0x00000008);
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      in_stack_00000030 = in_stack_00000018;
      if (*(int *)(*(long *)PTR_DAT_07a20890 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      FUN_060e2bd8(&stack0x00000020,&stack0x00000048,0);
      uVar7 = uStack0000000000000048 | uVar7;
    }
  }
  return uVar7;
}


