/*
FUNCTION_NAME: OVRPlugin$$DestroySpace
ENTRY_POINT: 06acf630
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


uint OVRPlugin__DestroySpace(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long in_x9;
  int *in_x10;
  int *piVar6;
  long unaff_x19;
  long *unaff_x20;
  uint unaff_w23;
  uint uVar7;
  long unaff_x24;
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
      puVar2 = (undefined8 *)FUN_0338f71c();
      goto LAB_06acf65c;
    }
    plVar1 = (long *)(in_x10 + 2);
    in_x10 = piVar6;
  } while (*plVar1 != param_3);
  puVar2 = (undefined8 *)(param_1 + (long)(*piVar6 + 7) * 0x10 + 0x138);
LAB_06acf65c:
  (*(code *)*puVar2)();
  uVar3 = FUN_06ad442c();
  uVar7 = unaff_w23;
  if ((uVar3 & 1) != 0) {
    lVar5 = *unaff_x20;
    uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar3 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)(unaff_x24 + 0xa38)) {
          puVar2 = (undefined8 *)(lVar5 + (long)(*piVar6 + 9) * 0x10 + 0x138);
          goto LAB_06acf6c8;
        }
        uVar3 = uVar3 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_0338f71c();
LAB_06acf6c8:
    (*(code *)*puVar2)(&stack0x00000008);
    in_stack_00000048 = in_stack_00000010;
    in_stack_00000040 = in_stack_00000008;
    in_stack_00000050 = in_stack_00000018;
    uVar3 = FUN_06aea28c();
    if ((uVar3 & 1) == 0) {
      lVar5 = *unaff_x20;
      uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar3 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)(unaff_x24 + 0xa38)) {
            puVar2 = (undefined8 *)(lVar5 + (long)(*piVar6 + 9) * 0x10 + 0x138);
            goto LAB_06acf750;
          }
          uVar3 = uVar3 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined8 *)FUN_0338f71c();
LAB_06acf750:
      uVar4 = (*(code *)*puVar2)(&stack0x00000008);
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      in_stack_00000030 = in_stack_00000018;
      uVar3 = FUN_06aea7b4(uVar4,&stack0x00000020,*(undefined8 *)(unaff_x19 + 0x48));
      uVar7 = unaff_w23 | 2;
      if ((uVar3 & 1) == 0) {
        uVar7 = unaff_w23;
      }
    }
  }
  return uVar7;
}


