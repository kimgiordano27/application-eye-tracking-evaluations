/*
FUNCTION_NAME: OVRPlugin.OVRP_1_106_0$$ovrp_GetHandTrackingState
ENTRY_POINT: 063bf890
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_106_0__ovrp_GetHandTrackingState(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x19;
  uint uVar6;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  ulong in_stack_00000070;
  
  FUN_05bce560(&stack0x00000060);
  puVar2 = PTR_DAT_07db7750;
  puVar1 = PTR_DAT_07db7740;
  uVar6 = 0;
  while( true ) {
    uVar4 = FUN_05e807dc(&stack0x00000060,*(undefined8 *)puVar1);
    uVar3 = in_stack_00000070;
    if ((uVar4 & 1) == 0) {
      FUN_05e808e4(&stack0x00000060,*(undefined8 *)PTR_DAT_07db7738);
      return;
    }
    in_stack_00000030 = *(undefined8 *)puVar2;
    in_stack_00000038 = 0xffffffffffffffff;
    in_stack_00000040 = CONCAT44(in_stack_00000040._4_4_,(int)in_stack_00000070);
    in_stack_00000030 = FUN_06278b80(&stack0x00000030,0);
    in_stack_00000038 = 0;
    in_stack_00000048 = 0;
    in_stack_00000040 = 0;
    in_stack_00000050 = 0;
    thunk_FUN_037aeb94(&stack0x00000030);
    in_stack_00000038 = CONCAT44(in_stack_00000038._4_4_,1);
    in_stack_00000048 = CONCAT44(in_stack_00000048._4_4_,(uint)((uVar3 & 0xff00000000) != 0));
    in_stack_00000040 = 0;
    thunk_FUN_037aeb94(&stack0x00000040,0);
    in_stack_00000050 = 0;
    if (unaff_x19 == 0) break;
    if (*(uint *)(unaff_x19 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7bc();
    }
    lVar5 = unaff_x19 + (long)(int)uVar6 * 0x28;
    *(undefined8 *)(lVar5 + 0x40) = 0;
    *(undefined8 *)(lVar5 + 0x28) = in_stack_00000038;
    *(undefined8 *)(lVar5 + 0x20) = in_stack_00000030;
    *(undefined8 *)(lVar5 + 0x38) = in_stack_00000048;
    *(undefined8 *)(lVar5 + 0x30) = in_stack_00000040;
    thunk_FUN_037aeb94(lVar5 + 0x20,0);
    uVar6 = uVar6 + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


