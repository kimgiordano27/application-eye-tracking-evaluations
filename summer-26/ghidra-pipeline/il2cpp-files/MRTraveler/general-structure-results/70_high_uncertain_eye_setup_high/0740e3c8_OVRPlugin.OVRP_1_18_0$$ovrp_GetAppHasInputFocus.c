/*
FUNCTION_NAME: OVRPlugin.OVRP_1_18_0$$ovrp_GetAppHasInputFocus
ENTRY_POINT: 0740e3c8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 82
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_18_0__ovrp_GetAppHasInputFocus(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x19;
  uint uVar6;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  ulong in_stack_00000060;
  
  FUN_06aca58c(&stack0x00000050);
  puVar2 = PTR_DAT_08eb6568;
  puVar1 = PTR_DAT_08eb6558;
  uVar6 = 0;
  while( true ) {
    uVar4 = FUN_04ab8bf8(&stack0x00000050,*(undefined8 *)puVar1);
    uVar3 = in_stack_00000060;
    if ((uVar4 & 1) == 0) {
      FUN_04ab8d00(&stack0x00000050,*(undefined8 *)PTR_DAT_08eb6550);
      return;
    }
    in_stack_00000028 = *(undefined8 *)puVar2;
    in_stack_00000030 = 0xffffffffffffffff;
    in_stack_00000038 = CONCAT44(in_stack_00000038._4_4_,(int)in_stack_00000060);
    in_stack_00000028 = FUN_07138048(&stack0x00000028,0);
    in_stack_00000038 = 0;
    in_stack_00000030 = 0;
    in_stack_00000048 = 0;
    in_stack_00000040 = 0;
    thunk_FUN_03d233cc(&stack0x00000028);
    in_stack_00000030 = CONCAT44(in_stack_00000030._4_4_,1);
    in_stack_00000040 = CONCAT44(in_stack_00000040._4_4_,(uint)((uVar3 & 0xff00000000) != 0));
    in_stack_00000038 = 0;
    thunk_FUN_03d233cc(&stack0x00000038,0);
    in_stack_00000048 = 0;
    if (unaff_x19 == 0) break;
    if (*(uint *)(unaff_x19 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    lVar5 = unaff_x19 + (long)(int)uVar6 * 0x28;
    *(undefined8 *)(lVar5 + 0x40) = 0;
    *(undefined8 *)(lVar5 + 0x28) = in_stack_00000030;
    *(undefined8 *)(lVar5 + 0x20) = in_stack_00000028;
    *(undefined8 *)(lVar5 + 0x38) = in_stack_00000040;
    *(undefined8 *)(lVar5 + 0x30) = in_stack_00000038;
    thunk_FUN_03d233cc(lVar5 + 0x20,0);
    uVar6 = uVar6 + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


