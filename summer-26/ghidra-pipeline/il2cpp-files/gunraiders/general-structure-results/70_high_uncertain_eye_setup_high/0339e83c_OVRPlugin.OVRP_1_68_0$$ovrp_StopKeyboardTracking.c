/*
FUNCTION_NAME: OVRPlugin.OVRP_1_68_0$$ovrp_StopKeyboardTracking
ENTRY_POINT: 0339e83c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_68_0__ovrp_StopKeyboardTracking(void)

{
  ulong uVar1;
  long in_x9;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  long in_stack_00000070;
  
  do {
    (**(code **)(in_x9 + 0x18))(*(undefined8 *)(in_x9 + 0x40));
    do {
      uVar1 = FUN_029fd614(&stack0x00000060,*unaff_x19);
      if ((uVar1 & 1) == 0) {
        FUN_029fd610(&stack0x00000060,
                     *(undefined8 *)Method_System_Collections_Generic_HashSet<MaskableGraphic>_Add__
                    );
        if (in_stack_00000038._4_4_ != 0) {
          FUN_02d50a3c(&stack0x00000040);
          in_stack_00000068 = in_stack_00000048;
          in_stack_00000060 = in_stack_00000040;
          in_stack_00000070 = in_stack_00000050;
          while (uVar1 = FUN_029fd614(&stack0x00000060,*unaff_x19), (uVar1 & 1) != 0) {
            if (in_stack_00000070 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            if (*(long *)(in_stack_00000070 + 0x18) != 0) {
              if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d4a4();
              }
              (**(code **)(*unaff_x20 + 0x1b8))();
              FUN_0339f5a0(in_stack_00000028);
            }
          }
          FUN_029fd610(&stack0x00000060,
                       *(undefined8 *)
                        Method_System_Collections_Generic_HashSet<MaskableGraphic>_Add__);
        }
        FUN_0339cf34(in_stack_00000028);
        return;
      }
      if (in_stack_00000070 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
    } while ((*(char *)(in_stack_00000070 + 0x38) != '\0') ||
            ((*(ulong *)(in_stack_00000070 + 0x28) >> 0x20 == 0 &&
             ((*(ulong *)(in_stack_00000070 + 0x28) & 0xff) != 0))));
    in_x9 = *(long *)(unaff_x21 + 0xe0);
    if (in_x9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
  } while( true );
}


