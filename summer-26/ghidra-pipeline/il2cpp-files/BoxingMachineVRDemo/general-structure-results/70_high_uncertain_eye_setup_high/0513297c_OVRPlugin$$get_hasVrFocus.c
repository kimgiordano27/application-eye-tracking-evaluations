/*
FUNCTION_NAME: OVRPlugin$$get_hasVrFocus
ENTRY_POINT: 0513297c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


byte OVRPlugin__get_hasVrFocus(long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_CY;
  bool bVar1;
  long *plVar2;
  ulong uVar3;
  ulong in_x9;
  int iVar4;
  long *unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x23;
  long *in_stack_00000028;
  undefined8 in_stack_00000040;
  long *in_stack_00000048;
  
  do {
    if ((!(bool)in_CY) || (*(long *)(*(long *)(param_1 + 200) + in_x9 * 8 + -8) != param_3)) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60e88(unaff_x20);
    }
    do {
      if (in_stack_00000028 != (long *)0x0) {
        if ((*(byte *)(*in_stack_00000028 + 0x130) < *(byte *)(param_3 + 0x130)) ||
           (*(long *)(*(long *)(*in_stack_00000028 + 200) + (ulong)*(byte *)(param_3 + 0x130) * 8 +
                     -8) != param_3)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60e88(in_stack_00000028);
        }
      }
      if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      if (unaff_x20[0xb] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      plVar2 = *(long **)(unaff_x20[0xb] + 0x10);
      if (plVar2 == (long *)0x0) {
        if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        if (in_stack_00000028[0xb] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        bVar1 = *(long *)(in_stack_00000028[0xb] + 0x10) == 0;
LAB_05132a64:
        iVar4 = 10;
LAB_05132a68:
        FUN_04b3a944(&stack0x00000030,*(undefined8 *)PTR_DAT_067813b8);
        return bVar1 | iVar4 != 10;
      }
      if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      if (in_stack_00000028[0xb] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      uVar3 = (**(code **)(*plVar2 + 0x218))
                        (plVar2,*(undefined8 *)(in_stack_00000028[0xb] + 0x10),
                         *(undefined8 *)(*plVar2 + 0x220));
      if ((uVar3 & 1) == 0) {
LAB_051329fc:
        bVar1 = false;
        goto LAB_05132a64;
      }
      uVar3 = FUN_04b3a824(&stack0x00000030,*unaff_x21);
      unaff_x20 = in_stack_00000048;
      if ((uVar3 & 1) == 0) {
        bVar1 = false;
        iVar4 = 0xc;
        goto LAB_05132a68;
      }
      uVar3 = FUN_0489720c();
      if ((uVar3 & 1) == 0) goto LAB_051329fc;
      param_3 = *unaff_x23;
    } while (unaff_x20 == (long *)0x0);
    param_1 = *unaff_x20;
    in_x9 = (ulong)*(byte *)(param_3 + 0x130);
    in_CY = *(byte *)(param_3 + 0x130) <= *(byte *)(param_1 + 0x130);
  } while( true );
}


