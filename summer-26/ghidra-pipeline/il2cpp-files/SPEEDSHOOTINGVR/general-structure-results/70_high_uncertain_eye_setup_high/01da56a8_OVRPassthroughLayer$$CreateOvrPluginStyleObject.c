/*
FUNCTION_NAME: OVRPassthroughLayer$$CreateOvrPluginStyleObject
ENTRY_POINT: 01da56a8
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPassthroughLayer__CreateOvrPluginStyleObject(void)

{
  long unaff_x19;
  long *unaff_x20;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 uStack0000000000000070;
  undefined8 uStack0000000000000078;
  
  uStack0000000000000070 = 0;
  uStack0000000000000078 = 0;
  FUN_01da5b0c();
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  if (*(int *)(unaff_x19 + 0x18) != 0) {
    *(undefined8 *)(unaff_x19 + 0x28) = uStack0000000000000078;
    *(undefined8 *)(unaff_x19 + 0x20) = uStack0000000000000070;
    in_stack_00000060 = 0;
    in_stack_00000068 = 0;
    FUN_01da5b0c(&stack0x00000060,0x28f5c28,0xf5c28f5c,0x28f5c28f,0);
    if (1 < *(uint *)(unaff_x19 + 0x18)) {
      *(undefined8 *)(unaff_x19 + 0x38) = in_stack_00000068;
      *(undefined8 *)(unaff_x19 + 0x30) = in_stack_00000060;
      in_stack_00000050 = 0;
      in_stack_00000058 = 0;
      FUN_01da5b0c(&stack0x00000050,0x418937,0x4bc6a7ef,0x9db22d0e,0);
      if (2 < *(uint *)(unaff_x19 + 0x18)) {
        *(undefined8 *)(unaff_x19 + 0x48) = in_stack_00000058;
        *(undefined8 *)(unaff_x19 + 0x40) = in_stack_00000050;
        in_stack_00000040 = 0;
        in_stack_00000048 = 0;
        FUN_01da5b0c(&stack0x00000040,0x68db8,0xbac710cb,0x295e9e1b,0);
        if (3 < *(uint *)(unaff_x19 + 0x18)) {
          *(undefined8 *)(unaff_x19 + 0x58) = in_stack_00000048;
          *(undefined8 *)(unaff_x19 + 0x50) = in_stack_00000040;
          in_stack_00000030 = 0;
          in_stack_00000038 = 0;
          FUN_01da5b0c(&stack0x00000030,0xa7c5,0xac471b47,0x84230fcf,0);
          if (4 < *(uint *)(unaff_x19 + 0x18)) {
            *(undefined8 *)(unaff_x19 + 0x68) = in_stack_00000038;
            *(undefined8 *)(unaff_x19 + 0x60) = in_stack_00000030;
            in_stack_00000020 = 0;
            in_stack_00000028 = 0;
            FUN_01da5b0c(&stack0x00000020,0x10c6,0xf7a0b5ed,0x8d36b4c7,0);
            if (5 < *(uint *)(unaff_x19 + 0x18)) {
              *(undefined8 *)(unaff_x19 + 0x78) = in_stack_00000028;
              *(undefined8 *)(unaff_x19 + 0x70) = in_stack_00000020;
              in_stack_00000010 = 0;
              in_stack_00000018 = 0;
              FUN_01da5b0c(&stack0x00000010,0x1ad,0x7f29abca,0xf485787a,0);
              if (6 < *(uint *)(unaff_x19 + 0x18)) {
                *(undefined8 *)(unaff_x19 + 0x88) = in_stack_00000018;
                *(undefined8 *)(unaff_x19 + 0x80) = in_stack_00000010;
                FUN_01da5b0c();
                if (7 < *(uint *)(unaff_x19 + 0x18)) {
                  *(undefined8 *)(unaff_x19 + 0x98) = 0;
                  *(undefined8 *)(unaff_x19 + 0x90) = 0;
                  *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x18) = unaff_x19;
                  thunk_FUN_0106e12c();
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc53c();
}


