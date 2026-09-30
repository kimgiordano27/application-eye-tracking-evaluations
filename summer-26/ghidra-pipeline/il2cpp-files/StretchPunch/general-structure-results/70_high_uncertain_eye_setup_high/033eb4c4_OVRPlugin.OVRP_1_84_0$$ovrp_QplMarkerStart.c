/*
FUNCTION_NAME: OVRPlugin.OVRP_1_84_0$$ovrp_QplMarkerStart
ENTRY_POINT: 033eb4c4
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16]
OVRPlugin_OVRP_1_84_0__ovrp_QplMarkerStart
          (undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined1 *param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x19;
  undefined1 auVar4 [16];
  short sStack0000000000000008;
  byte bStack000000000000000a;
  short sStack000000000000000e;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 in_stack_00000038;
  
  do {
    uVar1 = FUN_033eb5d4(param_1,param_2,param_3,param_4);
    if ((uVar1 & 1) == 0) {
      thunk_FUN_01dd295c(StringLiteral_1260);
      FUN_01a94a5c();
      in_stack_00000038 = thunk_FUN_01d9d974(0);
      uVar2 = FUN_03390e50(&stack0x00000038,0);
      uVar3 = thunk_FUN_01dd295c(StringLiteral_9320);
      uVar2 = FUN_0326dc80(uVar3,uVar2,0);
      thunk_FUN_01dd295c(StringLiteral_1244);
      uVar3 = thunk_FUN_01de27b8();
      FUN_03393770(uVar3,uVar2,0);
      uVar2 = thunk_FUN_01dd295c(StringLiteral_9321);
                    /* WARNING: Subroutine does not return */
      FUN_01d7da3c(uVar3,uVar2);
    }
    if (((bStack000000000000000a & 1) != 0) && (sStack0000000000000008 == 1)) {
      if ((sStack000000000000000e != 0x14) &&
         ((2 < (int)sStack000000000000000e - 0x10U && (1 < (int)sStack000000000000000e - 0x90U)))) {
        in_stack_00000020 = 0;
        in_stack_00000028 = 0;
        FUN_033b2650(&stack0x00000020,in_stack_00000010._2_2_,(long)sStack000000000000000e,
                     in_stack_00000010._4_4_ >> 4 & 1,(in_stack_00000010._4_4_ & 3) != 0,
                     (in_stack_00000010._4_4_ & 0xc) != 0,0);
        auVar4._8_4_ = in_stack_00000028;
        auVar4._0_8_ = in_stack_00000020;
        auVar4._12_4_ = 0;
        return auVar4;
      }
    }
    param_1 = *(undefined8 *)(unaff_x19 + 0x10);
    param_2 = (undefined8 *)&stack0x00000008;
    param_4 = &stack0x0000003c;
    param_3 = 1;
  } while( true );
}


