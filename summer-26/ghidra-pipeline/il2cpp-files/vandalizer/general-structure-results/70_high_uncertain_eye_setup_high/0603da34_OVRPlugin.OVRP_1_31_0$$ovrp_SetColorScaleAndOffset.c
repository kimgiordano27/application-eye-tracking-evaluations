/*
FUNCTION_NAME: OVRPlugin.OVRP_1_31_0$$ovrp_SetColorScaleAndOffset
ENTRY_POINT: 0603da34
PROGRAM: vandalizer-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_31_0__ovrp_SetColorScaleAndOffset(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  ulong in_stack_00000070;
  
  iVar4 = FUN_058d186c();
  if (iVar4 == 0) {
    lVar6 = 0;
  }
  else {
    uVar5 = FUN_058d186c();
    lVar6 = FUN_031f21dc(*(undefined8 *)PTR_DAT_075f7cc8,uVar5);
    FUN_058d1fb0(&stack0x00000060);
    puVar2 = PTR_DAT_075f7cb0;
    puVar1 = PTR_DAT_075f7ca0;
    uVar9 = 0;
    while (uVar7 = FUN_05b16388(&stack0x00000060,*(undefined8 *)puVar1), uVar3 = in_stack_00000070,
          (uVar7 & 1) != 0) {
      in_stack_00000030 = *(undefined8 *)puVar2;
      in_stack_00000038 = 0xffffffffffffffff;
      in_stack_00000040 = CONCAT44(in_stack_00000040._4_4_,(int)in_stack_00000070);
      in_stack_00000030 = FUN_05e37630(&stack0x00000030,0);
      in_stack_00000038 = 0;
      in_stack_00000048 = 0;
      in_stack_00000040 = 0;
      in_stack_00000050 = 0;
      thunk_FUN_0329bf60(&stack0x00000030);
      in_stack_00000038 = CONCAT44(in_stack_00000038._4_4_,1);
      in_stack_00000048 = CONCAT44(in_stack_00000048._4_4_,(uint)((uVar3 & 0xff00000000) != 0));
      in_stack_00000040 = 0;
      thunk_FUN_0329bf60(&stack0x00000040,0);
      in_stack_00000050 = 0;
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      if (*(uint *)(lVar6 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2398();
      }
      lVar8 = lVar6 + (long)(int)uVar9 * 0x28;
      *(undefined8 *)(lVar8 + 0x40) = 0;
      *(undefined8 *)(lVar8 + 0x28) = in_stack_00000038;
      *(undefined8 *)(lVar8 + 0x20) = in_stack_00000030;
      *(undefined8 *)(lVar8 + 0x38) = in_stack_00000048;
      *(undefined8 *)(lVar8 + 0x30) = in_stack_00000040;
      thunk_FUN_0329bf60(lVar8 + 0x20,0);
      uVar9 = uVar9 + 1;
    }
    FUN_05b16490(&stack0x00000060,*(undefined8 *)PTR_DAT_075f7c98);
  }
  return lVar6;
}


