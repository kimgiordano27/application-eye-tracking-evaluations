/*
FUNCTION_NAME: Animancer.AnimancerNodeBase$$ApplyChildActive
ENTRY_POINT: 0221ba30
PROGRAM: vrlegs-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0221bae0) */
/* WARNING: Removing unreachable block (ram,0x0221bb70) */

void Animancer_AnimancerNodeBase__ApplyChildActive(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  long in_stack_00000038;
  
  uStack0000000000000000 = 0;
  uStack0000000000000008 = param_1;
  while (*(char *)(unaff_x20 + 0x130) == '\0') {
    plVar1 = *(long **)(unaff_x20 + 0x118);
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    (**(code **)(*plVar1 + 0x1c8))(plVar1,*(undefined8 *)(*plVar1 + 0x1d0));
    while( true ) {
      if (*(char *)(in_stack_00000028 + 0x130) != '\0') goto LAB_0221bbf8;
      uVar3 = *(undefined8 *)(in_stack_00000028 + 0x110);
      in_stack_00000018._4_1_ = '\0';
      FUN_027e0bd8(uVar3,(long)&stack0x00000018 + 4,0);
      lVar2 = *(long *)(in_stack_00000028 + 0x110);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(int *)(lVar2 + 0x20) < 1) {
        lVar2 = 0;
      }
      else {
        FUN_022661a4(lVar2,&stack0x00000038,
                     *(undefined8 *)(*(long *)(*(long *)(in_stack_00000020 + 0x20) + 0xc0) + 0xd8));
        lVar2 = in_stack_00000038;
      }
      if (in_stack_00000018._4_1_ != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(uVar3,0);
      }
      unaff_x20 = in_stack_00000028;
      if (lVar2 == 0) break;
      FUN_0221be04(in_stack_00000028,lVar2,
                   *(undefined8 *)(*(long *)(*(long *)(in_stack_00000020 + 0x20) + 0xc0) + 0xb0));
      if (*(long *)(in_stack_00000028 + 0x120) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_021c7ff8(*(long *)(in_stack_00000028 + 0x120),lVar2,*(undefined4 *)(lVar2 + 0x18),
                   *(undefined8 *)(*(long *)(*(long *)(in_stack_00000020 + 0x20) + 0xc0) + 0xb8));
    }
  }
LAB_0221bbf8:
  FUN_018a0478();
  return;
}


