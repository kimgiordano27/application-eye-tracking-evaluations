/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$.cctor
ENTRY_POINT: 076e4b9c
PROGRAM: m3ar-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_38_0___cctor(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x19;
  undefined8 *unaff_x23;
  undefined8 in_stack_00000000;
  undefined8 *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_000000b0;
  undefined8 *in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined4 uStack00000000000000d0;
  undefined4 uStack00000000000000d4;
  undefined4 in_stack_000000d8;
  undefined8 in_stack_00000138;
  
  (**(code **)(param_1 + 0x138))();
  puVar3 = PTR_DAT_08fae3a8;
  puVar2 = PTR_DAT_08fae3a0;
  puVar1 = PTR_DAT_08fae398;
  FUN_054b17b0(&stack0x000000f0,*unaff_x23);
  in_stack_000000b0 = in_stack_00000000;
  in_stack_00000000 = 0;
  in_stack_000000b8 = in_stack_00000008;
  in_stack_000000c8 = in_stack_00000018;
  in_stack_000000c0 = in_stack_00000010;
  in_stack_00000008 = &stack0x000000b0;
  while( true ) {
    uVar4 = FUN_04fd0520(&stack0x000000b0,*(undefined8 *)puVar2);
    if ((uVar4 & 1) == 0) {
      FUN_04fd07dc(&stack0x000000b0,*(undefined8 *)puVar1);
      FUN_054b17b0(&stack0x000000f0,*unaff_x23);
      in_stack_000000b0 = in_stack_00000000;
      in_stack_00000000 = 0;
      in_stack_000000b8 = in_stack_00000008;
      in_stack_000000c8 = in_stack_00000018;
      in_stack_000000c0 = in_stack_00000010;
      in_stack_00000008 = &stack0x000000b0;
      while( true ) {
        uVar4 = FUN_04fd0520(&stack0x000000b0,*(undefined8 *)puVar2);
        if ((uVar4 & 1) == 0) {
          FUN_04fd07dc(&stack0x000000b0,*(undefined8 *)puVar1);
          memcpy(&stack0x00000000,&stack0x00000110,0x58);
          *(undefined8 *)(unaff_x19 + 0x168) = in_stack_00000050;
          *(undefined8 *)(unaff_x19 + 0x150) = in_stack_00000038;
          *(undefined8 *)(unaff_x19 + 0x148) = in_stack_00000030;
          *(undefined8 *)(unaff_x19 + 0x160) = in_stack_00000048;
          *(undefined8 *)(unaff_x19 + 0x158) = in_stack_00000040;
          return in_stack_00000138;
        }
        lVar5 = FUN_04fd03c8(&stack0x000000b0,*(undefined8 *)puVar3);
        if (lVar5 == 0) break;
        if (*(char *)(lVar5 + 0xb0) != '\0') {
          FUN_076e4fa0();
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar5 = FUN_04fd03c8(&stack0x000000b0,*(undefined8 *)puVar3);
    if (lVar5 == 0) break;
    if (*(char *)(lVar5 + 0xb0) == '\0') {
      if (*(long *)(unaff_x19 + 0x128) != 0) {
        FUN_076e4dc0(uStack00000000000000d0,uStack00000000000000d4,in_stack_000000d8);
      }
      FUN_076e4fa0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


