/*
FUNCTION_NAME: OVRPlugin$$set_chromatic
ENTRY_POINT: 053168e8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__set_chromatic(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long in_x9;
  ulong uVar4;
  int *in_x10;
  int *piVar5;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  undefined1 in_stack_00000008 [16];
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000038;
  undefined8 uStack000000000000003c;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  
  do {
    in_x9 = in_x9 + -1;
    piVar5 = in_x10 + 4;
    if (in_x9 == 0) {
      puVar2 = (undefined8 *)FUN_02f421d0();
      goto LAB_05316914;
    }
    plVar1 = (long *)(in_x10 + 2);
    in_x10 = piVar5;
  } while (*plVar1 != param_3);
  puVar2 = (undefined8 *)(param_1 + (long)(*piVar5 + 3) * 0x10 + 0x138);
LAB_05316914:
  (*(code *)*puVar2)(&stack0x00000028);
  in_stack_00000088 = CONCAT44(uStack0000000000000034,uStack0000000000000030);
  in_stack_00000080 = in_stack_00000028;
  *(undefined8 *)(unaff_x21 + 0x14) = uStack000000000000003c;
  *(ulong *)(unaff_x21 + 0xc) = CONCAT44(uStack0000000000000038,uStack0000000000000034);
  FUN_052c25a4(&stack0x00000080,&stack0x00000060,0);
  lVar3 = *unaff_x20;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *unaff_x22) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 4) * 0x10 + 0x138);
        goto LAB_05316994;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_02f421d0();
LAB_05316994:
  lVar3 = (*(code *)*puVar2)();
  if (lVar3 != 0) {
    FUN_053155dc(&stack0x00000008 + 4,lVar3,&stack0x00000060);
    unaff_x19[1] = CONCAT44(uStack0000000000000018,in_stack_00000008._12_4_);
    *unaff_x19 = in_stack_00000008._4_8_;
    *(undefined8 *)((long)unaff_x19 + 0x14) = in_stack_00000020;
    *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack000000000000001c,uStack0000000000000018);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


