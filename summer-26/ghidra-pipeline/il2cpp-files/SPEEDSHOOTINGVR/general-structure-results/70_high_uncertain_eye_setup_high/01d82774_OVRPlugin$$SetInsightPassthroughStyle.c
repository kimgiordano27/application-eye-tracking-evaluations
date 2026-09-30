/*
FUNCTION_NAME: OVRPlugin$$SetInsightPassthroughStyle
ENTRY_POINT: 01d82774
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__SetInsightPassthroughStyle(void)

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
  
  FUN_00fdc2e4();
  FUN_00fdc2e4(PTR_DAT_02359108);
                    /* catch() { ... } // from try @ 01d82768 with catch @ 01d82784 */
  FUN_00fdc2e4(PTR_DAT_02359130);
  FUN_00fdc2e4(PTR_DAT_02359128);
                    /* try { // try from 01d827a0 to 01e827af has its CatchHandler @ 01d827c4 */
  FUN_00fdc2e4(PTR_DAT_02359100);
                    /* try { // try from 01d827b0 to 01e827bb has its CatchHandler @ 01d823ec */
  FUN_00fdc2e4(PTR_DAT_023590e8);
                    /* try { // try from 01d827bc to 01e827c3 has its CatchHandler @ 01d827c4 */
  FUN_00fdc2e4(PTR_DAT_02359198);
                    /* catch() { ... } // from try @ 01d82740 with catch @ 01d827c4
                       catch() { ... } // from try @ 01d827a0 with catch @ 01d827c4
                       catch() { ... } // from try @ 01d827bc with catch @ 01d827c4 */
                    /* try { // try from 01d827c8 to 01e828d3 has its CatchHandler @ 01d827c8
                       catch() { ... } // from try @ 01d827c8 with catch @ 01d827c8
                       catch() { ... } // from try @ 01d829a0 with catch @ 01d827c8
                       catch() { ... } // from try @ 01d82a00 with catch @ 01d827c8
                       catch() { ... } // from try @ 01d82b38 with catch @ 01d827c8
                       catch() { ... } // from try @ 01d82b74 with catch @ 01d827c8
                       catch() { ... } // from try @ 01d82be4 with catch @ 01d827c8 */
  FUN_00fdc2e4(PTR_DAT_023591a0);
  FUN_00fdc2e4(PTR_DAT_023590f0);
  FUN_00fdc2e4(PTR_DAT_023590f8);
  FUN_00fdc2e4(PTR_DAT_02359138);
  FUN_00fdc2e4(PTR_DAT_02359140);
  FUN_00fdc2e4(PTR_DAT_02359148);
  FUN_00fdc2e4(PTR_DAT_02359150);
  FUN_00fdc2e4(PTR_DAT_02359158);
  FUN_00fdc2e4(PTR_DAT_02359160);
  FUN_00fdc2e4(PTR_DAT_02352758);
  FUN_00fdc2e4(PTR_DAT_02358d60);
  *(undefined1 *)(unaff_x23 + 0x7e7) = 1;
  if (unaff_x21 == 0) {
    thunk_FUN_010303a8(PTR_DAT_0234bbe8);
    uVar3 = thunk_FUN_010400dc();
                    /* catch() { ... } // from try @ 01d82b98 with catch @ 01d82bb8 */
    FUN_01c66bb4(uVar3,0);
    uVar4 = thunk_FUN_010303a8(PTR_DAT_023591a8);
                    /* WARNING: Subroutine does not return */
    FUN_00fdc400(uVar3,uVar4);
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
joined_r0x01d828f0:
    _iStack00000000000000d0 = uVar1;
    if ((unaff_w19 & 1) != 0) {
      FUN_01d7fe88(&stack0x00000008);
      in_stack_000000a8 = in_stack_00000010;
      in_stack_000000a0 = in_stack_00000008;
      _iStack00000000000000b0 = in_stack_00000018;
      if (unaff_w19 == 1) {
        puVar2 = &stack0x000000a0;
        puVar5 = (undefined8 *)PTR_DAT_023590f0;
        goto LAB_01d82a7c;
      }
      iStack00000000000000b0 = (int)in_stack_00000018;
      iVar6 = iStack00000000000000b0 + iVar6;
    }
    if ((unaff_w19 >> 4 & 1) != 0) {
      FUN_01d80358(&stack0x00000008);
      in_stack_00000088 = in_stack_00000010;
      in_stack_00000080 = in_stack_00000008;
      _iStack0000000000000090 = in_stack_00000018;
      if (unaff_w19 == 0x10) {
        puVar2 = &stack0x00000080;
        puVar5 = (undefined8 *)PTR_DAT_023590f8;
        goto LAB_01d82a7c;
      }
      iStack0000000000000090 = (int)in_stack_00000018;
      iVar6 = iStack0000000000000090 + iVar6;
    }
    if ((unaff_w19 >> 1 & 1) != 0) {
      FUN_01d80858(&stack0x00000008);
      in_stack_00000068 = in_stack_00000010;
      in_stack_00000060 = in_stack_00000008;
      _iStack0000000000000070 = in_stack_00000018;
      if (unaff_w19 == 2) {
        puVar2 = &stack0x00000060;
        puVar5 = (undefined8 *)PTR_DAT_023591a0;
        goto LAB_01d82a7c;
      }
      iStack0000000000000070 = (int)in_stack_00000018;
      iVar6 = iStack0000000000000070 + iVar6;
    }
    if ((unaff_w19 >> 2 & 1) != 0) {
      FUN_01d80ca0(&stack0x00000008);
      in_stack_00000048 = in_stack_00000010;
      in_stack_00000040 = in_stack_00000008;
      _iStack0000000000000050 = in_stack_00000018;
      uVar1 = _iStack0000000000000050;
      if (unaff_w19 == 4) {
        puVar2 = &stack0x00000040;
        puVar5 = (undefined8 *)PTR_DAT_02359100;
        goto LAB_01d82a7c;
      }
      iStack0000000000000050 = (int)in_stack_00000018;
      iVar6 = iStack0000000000000050 + iVar6;
      _iStack0000000000000050 = uVar1;
    }
    if ((unaff_w19 & 0xa0) != 0) {
      FUN_01d8116c(&stack0x00000008);
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      _iStack0000000000000030 = in_stack_00000018;
      uVar1 = _iStack0000000000000030;
      if ((unaff_w19 == 0x80) || (unaff_w19 == 0x20)) {
        puVar2 = &stack0x00000020;
        puVar5 = (undefined8 *)PTR_DAT_02359198;
        goto LAB_01d82a7c;
      }
      iStack0000000000000030 = (int)in_stack_00000018;
      iVar6 = iStack0000000000000030 + iVar6;
      _iStack0000000000000030 = uVar1;
    }
    puVar2 = (undefined8 *)PTR_DAT_02358d60;
    if (unaff_w19 != 9) {
      puVar2 = (undefined8 *)PTR_DAT_02352758;
    }
    uVar3 = FUN_00fdc388(*puVar2,iVar6);
    FUN_017488f0(&stack0x000000c0,uVar3,0,*(undefined8 *)PTR_DAT_02359108);
    iVar6 = iStack00000000000000d0;
    FUN_017488f0(&stack0x000000a0,uVar3,_iStack00000000000000d0 & 0xffffffff,
                 *(undefined8 *)PTR_DAT_02359110);
    iVar6 = iStack00000000000000b0 + iVar6;
    FUN_017488f0(&stack0x00000080,uVar3,iVar6,*(undefined8 *)PTR_DAT_02359118);
    iVar6 = iStack0000000000000090 + iVar6;
    FUN_017488f0(&stack0x00000060,uVar3,iVar6,*(undefined8 *)PTR_DAT_02359120);
    iVar6 = iStack0000000000000070 + iVar6;
    FUN_017488f0(&stack0x00000040,uVar3,iVar6,*(undefined8 *)PTR_DAT_02359128);
    FUN_017488f0(&stack0x00000020,uVar3,iStack0000000000000050 + iVar6,
                 *(undefined8 *)PTR_DAT_02359130);
  }
  else {
    FUN_01d7f930(&stack0x00000008);
    in_stack_000000c8 = in_stack_00000010;
    in_stack_000000c0 = in_stack_00000008;
    _iStack00000000000000d0 = in_stack_00000018;
    if (unaff_w19 != 8) {
      iStack00000000000000d0 = (int)in_stack_00000018;
      uVar1 = in_stack_00000018;
      iVar6 = iStack00000000000000d0;
      goto joined_r0x01d828f0;
    }
    puVar2 = &stack0x000000c0;
    puVar5 = (undefined8 *)PTR_DAT_023590e8;
LAB_01d82a7c:
    uVar3 = FUN_017487d4(puVar2,*puVar5);
  }
  return uVar3;
}


