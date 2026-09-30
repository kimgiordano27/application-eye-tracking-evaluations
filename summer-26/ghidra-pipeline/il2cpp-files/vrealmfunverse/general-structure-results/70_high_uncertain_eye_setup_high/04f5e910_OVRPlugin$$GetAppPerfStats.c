/*
FUNCTION_NAME: OVRPlugin$$GetAppPerfStats
ENTRY_POINT: 04f5e910
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin__GetAppPerfStats(long param_1,undefined8 param_2,long param_3)

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
    if (*(long *)(in_x10 + 2) == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)(in_x10[4] + 4) * 0x10 + 0x138);
      goto LAB_04f5e938;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
    in_ZR = in_x9 == 0;
  }
  puVar1 = (undefined8 *)FUN_02b7654c();
LAB_04f5e938:
  lVar2 = (*(code *)*puVar1)();
  if (unaff_x19 == (long *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar3 = FUN_04f5de20();
    if ((uVar3 & 1) == 0) {
      uVar6 = 0;
    }
    else {
      if (lVar2 == 0) goto LAB_04f5eb08;
      uStack000000000000004c = FUN_04f7e608(lVar2,0);
      lVar4 = *unaff_x19;
      uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar3 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)System_Runtime_Serialization_IObjectReference_var)
          {
            puVar1 = (undefined8 *)(lVar4 + (long)(*piVar5 + 8) * 0x10 + 0x138);
            goto LAB_04f5e9d8;
          }
          uVar3 = uVar3 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar3 != 0);
      }
      puVar1 = (undefined8 *)FUN_02b7654c();
LAB_04f5e9d8:
      (*(code *)*puVar1)(&stack0x00000008);
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      in_stack_00000030 = in_stack_00000018;
      if (*(int *)(*(long *)System_IOSelectorJob_var + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      FUN_04f7dddc(&stack0x00000020,(long)&stack0x00000048 + 4,0);
      uVar6 = uStack000000000000004c;
    }
    uVar3 = FUN_04f5ded0();
    if ((uVar3 & 1) != 0) {
      if (lVar2 == 0) {
LAB_04f5eb08:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      uStack0000000000000048 = FUN_04f7e6e8(lVar2,0);
      lVar2 = *unaff_x19;
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar3 != 0) {
        piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)System_Runtime_Serialization_IObjectReference_var)
          {
            puVar1 = (undefined8 *)(lVar2 + (long)(*piVar5 + 9) * 0x10 + 0x138);
            goto FUN_04f5eaa0;
          }
          uVar3 = uVar3 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar3 != 0);
      }
      puVar1 = (undefined8 *)FUN_02b7654c();
FUN_04f5eaa0:
      (*(code *)*puVar1)(&stack0x00000008);
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      in_stack_00000030 = in_stack_00000018;
      if (*(int *)(*(long *)System_IOSelectorJob_var + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      FUN_04f7dddc(&stack0x00000020,&stack0x00000048,0);
      uVar6 = uStack0000000000000048 | uVar6;
    }
  }
  return uVar6;
}


