/*
FUNCTION_NAME: Animancer.AnimancerNodeBase$$get_BaseWeight
ENTRY_POINT: 0221b9f0
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

void Animancer_AnimancerNodeBase__get_BaseWeight(ulong param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar3;
  char cStack000000000000001c;
  long lStack0000000000000020;
  long in_stack_00000028;
  long in_stack_00000038;
  
  lStack0000000000000020 = param_3;
  if ((param_1 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cbec30);
    FUN_01ab69ac(PTR_DAT_03ccf278);
    FUN_01ab69ac(PTR_DAT_03cdbda0);
    *(undefined1 *)(unaff_x19 + 600) = 1;
  }
  cStack000000000000001c = '\0';
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
      cStack000000000000001c = '\0';
      FUN_027e0bd8(uVar3,&stack0x0000001c,0);
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
                     *(undefined8 *)
                      (*(long *)(*(long *)(lStack0000000000000020 + 0x20) + 0xc0) + 0xd8));
        lVar2 = in_stack_00000038;
      }
      if (cStack000000000000001c != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(uVar3,0);
      }
      unaff_x20 = in_stack_00000028;
      if (lVar2 == 0) break;
      FUN_0221be04(in_stack_00000028,lVar2,
                   *(undefined8 *)
                    (*(long *)(*(long *)(lStack0000000000000020 + 0x20) + 0xc0) + 0xb0));
      if (*(long *)(in_stack_00000028 + 0x120) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_021c7ff8(*(long *)(in_stack_00000028 + 0x120),lVar2,*(undefined4 *)(lVar2 + 0x18),
                   *(undefined8 *)
                    (*(long *)(*(long *)(lStack0000000000000020 + 0x20) + 0xc0) + 0xb8));
    }
  }
LAB_0221bbf8:
  FUN_018a0478();
  return;
}


