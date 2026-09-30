/*
FUNCTION_NAME: OVRPlugin$$GetVirtualKeyboardDirtyTextures
ENTRY_POINT: 033cddf4
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetVirtualKeyboardDirtyTextures(void)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  uint unaff_w19;
  long unaff_x21;
  int iVar6;
  long unaff_x23;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  ulong in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  int iStack0000000000000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  int iStack0000000000000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  int iStack0000000000000070;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  int iStack0000000000000090;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  int iStack00000000000000b0;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  int iStack00000000000000d0;
  
  FUN_01d7d918(StringLiteral_8924);
  FUN_01d7d918(StringLiteral_8925);
  FUN_01d7d918(StringLiteral_8926);
  FUN_01d7d918(StringLiteral_8927);
  FUN_01d7d918(StringLiteral_8928);
  FUN_01d7d918(StringLiteral_5451);
  FUN_01d7d918(StringLiteral_8768);
  *(undefined1 *)(unaff_x23 + 0xa0a) = 1;
  if (unaff_x21 == 0) {
    thunk_FUN_01dd295c(StringLiteral_1111);
    uVar3 = thunk_FUN_01de27b8();
    FUN_0328ec88(uVar3,0);
    uVar4 = thunk_FUN_01dd295c(StringLiteral_8937);
                    /* WARNING: Subroutine does not return */
    FUN_01d7da3c(uVar3,uVar4);
  }
  in_stack_000000c0 = 0;
  in_stack_000000c8 = 0;
  _iStack00000000000000d0 = 0;
  in_stack_000000a8 = 0;
  _iStack00000000000000b0 = 0;
  in_stack_000000a0 = 0;
  in_stack_00000088 = 0;
  _iStack0000000000000090 = 0;
  in_stack_00000080 = 0;
  in_stack_00000068 = 0;
  _iStack0000000000000070 = 0;
  in_stack_00000060 = 0;
  in_stack_00000048 = 0;
  _iStack0000000000000050 = 0;
  in_stack_00000040 = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  _iStack0000000000000030 = 0;
  if ((unaff_w19 >> 3 & 1) == 0) {
    iVar6 = 0;
    uVar1 = _iStack00000000000000d0;
joined_r0x033cdef4:
    _iStack00000000000000d0 = uVar1;
    if ((unaff_w19 & 1) != 0) {
      FUN_033cb478(&stack0x00000008);
      in_stack_000000a8 = in_stack_00000010;
      in_stack_000000a0 = in_stack_00000008;
      _iStack00000000000000b0 = in_stack_00000018;
      if (unaff_w19 == 1) {
        puVar2 = &stack0x000000a0;
        puVar5 = (undefined8 *)StringLiteral_8914;
        goto LAB_033ce080;
      }
      iStack00000000000000b0 = (int)in_stack_00000018;
      iVar6 = iStack00000000000000b0 + iVar6;
    }
    if ((unaff_w19 >> 4 & 1) != 0) {
      FUN_033cb948(&stack0x00000008);
      in_stack_00000088 = in_stack_00000010;
      in_stack_00000080 = in_stack_00000008;
      _iStack0000000000000090 = in_stack_00000018;
      if (unaff_w19 == 0x10) {
        puVar2 = &stack0x00000080;
        puVar5 = (undefined8 *)StringLiteral_8915;
        goto LAB_033ce080;
      }
      iStack0000000000000090 = (int)in_stack_00000018;
      iVar6 = iStack0000000000000090 + iVar6;
    }
    if ((unaff_w19 >> 1 & 1) != 0) {
      FUN_033cbe48(&stack0x00000008);
      in_stack_00000068 = in_stack_00000010;
      in_stack_00000060 = in_stack_00000008;
      _iStack0000000000000070 = in_stack_00000018;
      if (unaff_w19 == 2) {
        puVar2 = &stack0x00000060;
        puVar5 = (undefined8 *)StringLiteral_8936;
        goto LAB_033ce080;
      }
      iStack0000000000000070 = (int)in_stack_00000018;
      iVar6 = iStack0000000000000070 + iVar6;
    }
    if ((unaff_w19 >> 2 & 1) != 0) {
      FUN_033cc290(&stack0x00000008);
      in_stack_00000048 = in_stack_00000010;
      in_stack_00000040 = in_stack_00000008;
      _iStack0000000000000050 = in_stack_00000018;
      uVar1 = _iStack0000000000000050;
      if (unaff_w19 == 4) {
        puVar2 = &stack0x00000040;
        puVar5 = (undefined8 *)StringLiteral_8916;
        goto LAB_033ce080;
      }
      iStack0000000000000050 = (int)in_stack_00000018;
      iVar6 = iStack0000000000000050 + iVar6;
      _iStack0000000000000050 = uVar1;
    }
    if ((unaff_w19 & 0xa0) != 0) {
      FUN_033cc75c(&stack0x00000008);
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      _iStack0000000000000030 = in_stack_00000018;
      uVar1 = _iStack0000000000000030;
      if ((unaff_w19 == 0x80) || (unaff_w19 == 0x20)) {
        puVar2 = &stack0x00000020;
        puVar5 = (undefined8 *)StringLiteral_8935;
        goto LAB_033ce080;
      }
      iStack0000000000000030 = (int)in_stack_00000018;
      iVar6 = iStack0000000000000030 + iVar6;
      _iStack0000000000000030 = uVar1;
    }
    puVar2 = (undefined8 *)StringLiteral_8768;
    if (unaff_w19 != 9) {
      puVar2 = (undefined8 *)StringLiteral_5451;
    }
    uVar3 = FUN_01d7d9bc(*puVar2,iVar6);
    FUN_03083378(&stack0x000000c0,uVar3,0,*(undefined8 *)StringLiteral_8917);
    iVar6 = iStack00000000000000d0;
    FUN_03083378(&stack0x000000a0,uVar3,_iStack00000000000000d0 & 0xffffffff,
                 *(undefined8 *)StringLiteral_8918);
    iVar6 = iStack00000000000000b0 + iVar6;
    FUN_03083378(&stack0x00000080,uVar3,iVar6,*(undefined8 *)StringLiteral_8919);
    iVar6 = iStack0000000000000090 + iVar6;
    FUN_03083378(&stack0x00000060,uVar3,iVar6,*(undefined8 *)StringLiteral_8920);
    iVar6 = iStack0000000000000070 + iVar6;
    FUN_03083378(&stack0x00000040,uVar3,iVar6,*(undefined8 *)StringLiteral_8921);
    FUN_03083378(&stack0x00000020,uVar3,iStack0000000000000050 + iVar6,
                 *(undefined8 *)StringLiteral_8922);
  }
  else {
    FUN_033caf20(&stack0x00000008);
    in_stack_000000c8 = in_stack_00000010;
    in_stack_000000c0 = in_stack_00000008;
    _iStack00000000000000d0 = in_stack_00000018;
    if (unaff_w19 != 8) {
      iStack00000000000000d0 = (int)in_stack_00000018;
      uVar1 = in_stack_00000018;
      iVar6 = iStack00000000000000d0;
      goto joined_r0x033cdef4;
    }
    puVar2 = &stack0x000000c0;
    puVar5 = (undefined8 *)StringLiteral_8913;
LAB_033ce080:
    uVar3 = FUN_0308325c(puVar2,*puVar5);
  }
  return uVar3;
}


