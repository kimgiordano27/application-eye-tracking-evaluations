/*
FUNCTION_NAME: OVRPlugin$$get_hasInputFocus
ENTRY_POINT: 051329d8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 91
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


byte OVRPlugin__get_hasInputFocus(long *param_1,long *param_2)

{
  long *plVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  undefined8 *unaff_x21;
  long *unaff_x23;
  long *in_stack_00000028;
  undefined8 in_stack_00000040;
  long *in_stack_00000048;
  
  do {
    if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    if (param_1[0xb] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    uVar3 = (**(code **)(*param_2 + 0x218))
                      (param_2,*(undefined8 *)(param_1[0xb] + 0x10),
                       *(undefined8 *)(*param_2 + 0x220));
    if ((uVar3 & 1) == 0) {
LAB_051329fc:
      bVar2 = false;
      goto LAB_05132a64;
    }
    uVar3 = FUN_04b3a824(&stack0x00000030,*unaff_x21);
    plVar1 = in_stack_00000048;
    if ((uVar3 & 1) == 0) {
      bVar2 = false;
      iVar5 = 0xc;
      goto LAB_05132a68;
    }
    uVar3 = FUN_0489720c();
    if ((uVar3 & 1) == 0) goto LAB_051329fc;
    lVar4 = *unaff_x23;
    if (plVar1 != (long *)0x0) {
      if ((*(byte *)(*plVar1 + 0x130) < *(byte *)(lVar4 + 0x130)) ||
         (*(long *)(*(long *)(*plVar1 + 200) + (ulong)*(byte *)(lVar4 + 0x130) * 8 + -8) != lVar4))
      {
                    /* WARNING: Subroutine does not return */
        FUN_02d60e88(plVar1);
      }
    }
    if (in_stack_00000028 != (long *)0x0) {
      if ((*(byte *)(*in_stack_00000028 + 0x130) < *(byte *)(lVar4 + 0x130)) ||
         (*(long *)(*(long *)(*in_stack_00000028 + 200) + (ulong)*(byte *)(lVar4 + 0x130) * 8 + -8)
          != lVar4)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60e88(in_stack_00000028);
      }
    }
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    if (plVar1[0xb] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    param_2 = *(long **)(plVar1[0xb] + 0x10);
    param_1 = in_stack_00000028;
  } while (param_2 != (long *)0x0);
  if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  if (in_stack_00000028[0xb] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  bVar2 = *(long *)(in_stack_00000028[0xb] + 0x10) == 0;
LAB_05132a64:
  iVar5 = 10;
LAB_05132a68:
  FUN_04b3a944(&stack0x00000030,*(undefined8 *)PTR_DAT_067813b8);
  return bVar2 | iVar5 != 10;
}


