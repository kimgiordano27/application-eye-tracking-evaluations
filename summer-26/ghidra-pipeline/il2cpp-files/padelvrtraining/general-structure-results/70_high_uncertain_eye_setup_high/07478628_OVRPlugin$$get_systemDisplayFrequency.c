/*
FUNCTION_NAME: OVRPlugin$$get_systemDisplayFrequency
ENTRY_POINT: 07478628
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_systemDisplayFrequency(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long in_x9;
  ulong uVar3;
  int *in_x10;
  int *piVar4;
  long in_x11;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *plVar5;
  undefined8 in_stack_00000000;
  undefined4 in_stack_00000008;
  undefined4 in_stack_00000010;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  
  while (in_x11 != param_3) {
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar1 = (undefined8 *)FUN_03d8f370();
      goto LAB_0747865c;
    }
    in_x11 = *(long *)(in_x10 + 2);
    in_x10 = in_x10 + 4;
  }
  puVar1 = (undefined8 *)(param_1 + (long)(*in_x10 + 4) * 0x10 + 0x138);
LAB_0747865c:
  lVar2 = (*(code *)*puVar1)();
  if ((lVar2 != 0) && (plVar5 = *(long **)(lVar2 + 0x28), plVar5 != (long *)0x0)) {
    lVar2 = *plVar5;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_0921fbf0) {
          puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 0x12) * 0x10 + 0x138);
          goto LAB_074786cc;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_03d8f370(plVar5,*(long *)PTR_DAT_0921fbf0,0x12);
LAB_074786cc:
    (*(code *)*puVar1)(plVar5,&stack0x00000040,puVar1[1]);
    plVar5 = *(long **)(unaff_x20 + 0x40);
    if (plVar5 != (long *)0x0) {
      lVar2 = *plVar5;
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_09222f00) {
            puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 3) * 0x10 + 0x138);
            goto LAB_0747873c;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar3 != 0);
      }
      puVar1 = (undefined8 *)FUN_03d8f370(plVar5,*(long *)PTR_DAT_09222f00,3);
LAB_0747873c:
      (*(code *)*puVar1)(plVar5,puVar1[1]);
      in_stack_00000028 = in_stack_00000008;
      in_stack_00000020 = in_stack_00000000;
      in_stack_00000030 = in_stack_00000010;
      FUN_074114f4(&stack0x00000040,&stack0x00000020,0);
      FUN_074114f4(&stack0x00000040,&stack0x00000060,0);
      *(undefined8 *)((long)unaff_x19 + 0x14) = uStack0000000000000054;
      *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000050,uStack000000000000004c);
      unaff_x19[1] = CONCAT44(uStack000000000000004c,uStack0000000000000048);
      *unaff_x19 = in_stack_00000040;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


