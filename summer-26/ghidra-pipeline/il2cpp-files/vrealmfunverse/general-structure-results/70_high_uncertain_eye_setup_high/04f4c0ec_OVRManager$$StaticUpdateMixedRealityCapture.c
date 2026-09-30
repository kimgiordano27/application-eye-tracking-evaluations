/*
FUNCTION_NAME: OVRManager$$StaticUpdateMixedRealityCapture
ENTRY_POINT: 04f4c0ec
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__StaticUpdateMixedRealityCapture(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  uint uVar4;
  undefined8 in_stack_00000000;
  undefined8 *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000080;
  undefined8 *in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined4 in_stack_000000a0;
  undefined4 in_stack_000000a8;
  undefined8 in_stack_000000c0;
  
  uVar2 = FUN_05c8c45c(param_1,param_2,0);
  if ((uVar2 & 1) != 0) {
    in_stack_00000070 = unaff_x21[2];
    in_stack_00000068 = unaff_x21[1];
    in_stack_00000060 = *unaff_x21;
    FUN_04aed12c(&stack0x00000060,*unaff_x26);
    in_stack_00000080 = in_stack_00000000;
    uVar4 = 0;
    in_stack_00000000 = 0;
    in_stack_00000088 = in_stack_00000008;
    in_stack_00000098 = in_stack_00000018;
    in_stack_00000090 = in_stack_00000010;
    in_stack_00000008 = &stack0x00000080;
    while (uVar2 = FUN_047e3f3c(&stack0x00000080,*unaff_x24), (uVar2 & 1) != 0) {
      lVar3 = FUN_047e3de4(&stack0x00000080,*unaff_x25);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      if (*(char *)(lVar3 + 0xb0) == '\0') {
        if (*(long *)(unaff_x20 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        FUN_05c9bf94(*(long *)(unaff_x20 + 0x28),0);
        uVar1 = FUN_04f4c4bc();
        uVar4 = uVar4 | uVar1;
      }
    }
    FUN_047e41f8(&stack0x00000080,*unaff_x23);
    if ((uVar4 & 1) != 0) goto LAB_04f4c204;
  }
  in_stack_00000070 = unaff_x21[2];
  in_stack_00000068 = unaff_x21[1];
  in_stack_00000060 = *unaff_x21;
  FUN_04aed12c(&stack0x00000060,*unaff_x26);
  in_stack_00000080 = in_stack_00000000;
  in_stack_00000000 = 0;
  in_stack_00000088 = in_stack_00000008;
  in_stack_00000098 = in_stack_00000018;
  in_stack_00000090 = in_stack_00000010;
  in_stack_00000008 = &stack0x00000080;
  while (uVar2 = FUN_047e3f3c(&stack0x00000080,*unaff_x24), (uVar2 & 1) != 0) {
    FUN_047e3de4(&stack0x00000080,*unaff_x25);
    FUN_04f4c634();
  }
  FUN_047e41f8(&stack0x00000080,*unaff_x23);
LAB_04f4c204:
  memcpy(&stack0x00000000,&stack0x000000a0,0x58);
  unaff_x19[1] = in_stack_00000030;
  *unaff_x19 = in_stack_00000028;
  unaff_x19[3] = in_stack_00000040;
  unaff_x19[2] = in_stack_00000038;
  unaff_x19[4] = in_stack_00000048;
  thunk_FUN_02bb0e9c();
  return in_stack_000000c0;
}


