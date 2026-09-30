/*
FUNCTION_NAME: OVRPlugin.OVRP_1_92_0$$ovrp_GetFaceState2
ENTRY_POINT: 0281d130
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


void OVRPlugin_OVRP_1_92_0__ovrp_GetFaceState2(void)

{
  undefined8 uVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  char *pcVar5;
  undefined8 uVar6;
  long in_x9;
  undefined1 (*unaff_x19) [16];
  int unaff_w25;
  long *unaff_x28;
  undefined1 auVar7 [16];
  long in_stack_00000048;
  undefined8 in_stack_00000058;
  uint in_stack_00000070;
  ushort uStack0000000000000080;
  undefined8 in_stack_00000088;
  long in_stack_000000a8;
  
  lVar4 = *(long *)(**(long **)(in_x9 + 0x4f0) + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01a46ff8();
  }
  pcVar5 = (char *)thunk_FUN_01a59484(&stack0x00000054,
                                      *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0xc0) + 8) + 0x80)
                                     );
  if (*pcVar5 == '\0') {
    in_stack_00000058 = 0;
  }
  else {
    FUN_01ba9478(&stack0x00000054,&stack0x00000080,*(undefined8 *)PTR_DAT_03cfe4f8);
    uVar2 = uStack0000000000000080;
    _uStack0000000000000080 = 0;
    in_stack_00000070 = (uint)uVar2;
    FUN_02241190(&stack0x00000080,&stack0x00000070,*(undefined8 *)PTR_DAT_03cc1828);
    in_stack_00000058 = _uStack0000000000000080;
  }
  FUN_01ba9478(&stack0x00000058,&stack0x00000080,*(undefined8 *)PTR_DAT_03cc1820);
  iVar3 = _uStack0000000000000080;
  lVar4 = *(long *)(*(long *)PTR_DAT_03cc1790 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01a46ff8();
  }
  pcVar5 = (char *)thunk_FUN_01a59484(&stack0x00000058,
                                      *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0xc0) + 8) + 0x80)
                                     );
  if ((iVar3 < 0x36) || (*pcVar5 == '\0')) {
    uVar6 = *(undefined8 *)*unaff_x19;
    uVar1 = *(undefined8 *)(*unaff_x19 + 8);
    _uStack0000000000000080 = 0;
    in_stack_00000088 = 0;
    FUN_027cee20(&stack0x00000080,10,0);
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    auVar7 = FUN_027d3da0(uVar6,uVar1,_uStack0000000000000080,in_stack_00000088,0);
    *unaff_x19 = auVar7;
    if (unaff_w25 == 0x2d) {
      uVar6 = *(undefined8 *)*unaff_x19;
      uVar1 = *(undefined8 *)(*unaff_x19 + 8);
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      auVar7 = FUN_027d3bc0(uVar6,uVar1,0);
      *unaff_x19 = auVar7;
      uVar6 = 1;
    }
    else {
      uVar6 = 1;
    }
  }
  else {
    uVar6 = 2;
  }
  if (*(long *)(in_stack_00000048 + 0x28) == in_stack_000000a8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}


