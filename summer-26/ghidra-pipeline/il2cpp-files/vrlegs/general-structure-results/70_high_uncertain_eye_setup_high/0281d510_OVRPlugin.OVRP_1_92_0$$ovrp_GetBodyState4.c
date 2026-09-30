/*
FUNCTION_NAME: OVRPlugin.OVRP_1_92_0$$ovrp_GetBodyState4
ENTRY_POINT: 0281d510
PROGRAM: vrlegs-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_92_0__ovrp_GetBodyState4(long *param_1)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined1 (*unaff_x19) [16];
  int unaff_w25;
  long *unaff_x28;
  undefined1 auVar6 [16];
  long in_stack_00000048;
  int iStack0000000000000080;
  undefined8 in_stack_00000088;
  long in_stack_000000a8;
  
  iVar2 = iStack0000000000000080;
  lVar3 = *(long *)(*param_1 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01a46ff8();
  }
  pcVar4 = (char *)thunk_FUN_01a59484(&stack0x00000058,
                                      *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0xc0) + 8) + 0x80)
                                     );
  if ((iVar2 < 0x36) || (*pcVar4 == '\0')) {
    uVar5 = *(undefined8 *)*unaff_x19;
    uVar1 = *(undefined8 *)(*unaff_x19 + 8);
    _iStack0000000000000080 = 0;
    in_stack_00000088 = 0;
    FUN_027cee20(&stack0x00000080,10,0);
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    auVar6 = FUN_027d3da0(uVar5,uVar1,_iStack0000000000000080,in_stack_00000088,0);
    *unaff_x19 = auVar6;
    if (unaff_w25 == 0x2d) {
      uVar5 = *(undefined8 *)*unaff_x19;
      uVar1 = *(undefined8 *)(*unaff_x19 + 8);
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      auVar6 = FUN_027d3bc0(uVar5,uVar1,0);
      *unaff_x19 = auVar6;
      uVar5 = 1;
    }
    else {
      uVar5 = 1;
    }
  }
  else {
    uVar5 = 2;
  }
  if (*(long *)(in_stack_00000048 + 0x28) == in_stack_000000a8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


