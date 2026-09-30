/*
FUNCTION_NAME: Animancer.ClipState$$get_Length
ENTRY_POINT: 0221bb20
PROGRAM: vrlegs-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0221bae0) */
/* WARNING: Removing unreachable block (ram,0x0221bb70) */

void Animancer_ClipState__get_Length(long param_1,long param_2,undefined8 param_3,ulong param_4)

{
  long *plVar1;
  long lVar2;
  long unaff_x19;
  undefined8 uVar3;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  long in_stack_00000038;
  
code_r0x0221bb20:
  FUN_021c7ff8(param_2,unaff_x19,param_4,*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0xb8));
  do {
    if (*(char *)(in_stack_00000028 + 0x130) != '\0') {
LAB_0221bbf8:
      FUN_018a0478();
      return;
    }
    uVar3 = *(undefined8 *)(in_stack_00000028 + 0x110);
    in_stack_00000018._4_1_ = '\0';
    FUN_027e0bd8(uVar3,(long)&stack0x00000018 + 4,0);
    lVar2 = *(long *)(in_stack_00000028 + 0x110);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(int *)(lVar2 + 0x20) < 1) {
      unaff_x19 = 0;
    }
    else {
      FUN_022661a4(lVar2,&stack0x00000038,
                   *(undefined8 *)(*(long *)(*(long *)(in_stack_00000020 + 0x20) + 0xc0) + 0xd8));
      unaff_x19 = in_stack_00000038;
    }
    if (in_stack_00000018._4_1_ != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar3,0);
    }
    if (unaff_x19 != 0) break;
    if (*(char *)(in_stack_00000028 + 0x130) != '\0') goto LAB_0221bbf8;
    plVar1 = *(long **)(in_stack_00000028 + 0x118);
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    (**(code **)(*plVar1 + 0x1c8))(plVar1,*(undefined8 *)(*plVar1 + 0x1d0));
  } while( true );
  FUN_0221be04(in_stack_00000028,unaff_x19,
               *(undefined8 *)(*(long *)(*(long *)(in_stack_00000020 + 0x20) + 0xc0) + 0xb0));
  param_2 = *(long *)(in_stack_00000028 + 0x120);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  param_4 = (ulong)*(uint *)(unaff_x19 + 0x18);
  param_1 = *(long *)(in_stack_00000020 + 0x20);
  goto code_r0x0221bb20;
}


