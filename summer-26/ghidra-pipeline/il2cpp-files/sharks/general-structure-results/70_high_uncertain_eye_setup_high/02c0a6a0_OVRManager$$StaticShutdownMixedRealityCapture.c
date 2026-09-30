/*
FUNCTION_NAME: OVRManager$$StaticShutdownMixedRealityCapture
ENTRY_POINT: 02c0a6a0
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__StaticShutdownMixedRealityCapture(void)

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
  
  FUN_017fc350();
  FUN_017fc350(PTR_DAT_0380af78);
  FUN_017fc350(PTR_DAT_0380af68);
  FUN_017fc350(PTR_DAT_0380af90);
  FUN_017fc350(PTR_DAT_0380af88);
  FUN_017fc350(PTR_DAT_0380af60);
  FUN_017fc350(PTR_DAT_0380af40);
  FUN_017fc350(PTR_DAT_0380b020);
  FUN_017fc350(PTR_DAT_0380af58);
  FUN_017fc350(PTR_DAT_0380af48);
  FUN_017fc350(PTR_DAT_0380af50);
  FUN_017fc350(PTR_DAT_0380af98);
  FUN_017fc350(PTR_DAT_0380afa0);
  FUN_017fc350(PTR_DAT_0380afa8);
  FUN_017fc350(PTR_DAT_0380afb0);
  FUN_017fc350(PTR_DAT_0380afb8);
  FUN_017fc350(PTR_DAT_0380afc0);
                    /* try { // try from 02c0a764 to 02d0a773 has its CatchHandler @ 02c0a7c0 */
  FUN_017fc350(PTR_DAT_03803200);
                    /* try { // try from 02c0a774 to 02d0a777 has its CatchHandler @ 02c0a7b8 */
                    /* try { // try from 02c0a778 to 02d0a77b has its CatchHandler @ 02c0a7b0 */
  FUN_017fc350(PTR_DAT_0380aad0);
                    /* try { // try from 02c0a77c to 02d0a783 has its CatchHandler @ 02c0a484 */
  *(undefined1 *)(unaff_x23 + 0xe1c) = 1;
                    /* try { // try from 02c0a784 to 02d0a78b has its CatchHandler @ 02c0a7bc */
  if (unaff_x21 == 0) {
    thunk_FUN_01851c08(PTR_DAT_037f66a8);
    uVar3 = thunk_FUN_01861bbc();
    FUN_02b44d38(uVar3,0);
    uVar4 = thunk_FUN_01851c08(PTR_DAT_0380b028);
                    /* WARNING: Subroutine does not return */
    FUN_017fc474(uVar3,uVar4);
  }
                    /* try { // try from 02c0a78c to 02d0a78f has its CatchHandler @ 02c0a7ac */
  in_stack_000000c0 = 0;
  in_stack_000000c8 = 0;
                    /* try { // try from 02c0a790 to 02d0a7a3 has its CatchHandler @ 02c0a7c0 */
  _iStack00000000000000d0 = 0;
  in_stack_000000a8 = 0;
  _iStack00000000000000b0 = 0;
  in_stack_000000a0 = 0;
  in_stack_00000088 = 0;
  _iStack0000000000000090 = 0;
  in_stack_00000080 = 0;
                    /* catch() { ... } // from try @ 02c0a5d8 with catch @ 02c0a7a4
                       try { // try from 02c0a7a4 to 02d0a7d7 has its CatchHandler @ 02c0a484 */
  in_stack_00000068 = 0;
  _iStack0000000000000070 = 0;
                    /* catch() { ... } // from try @ 02c0a5b8 with catch @ 02c0a7a8 */
  in_stack_00000060 = 0;
                    /* catch() { ... } // from try @ 02c0a78c with catch @ 02c0a7ac */
  in_stack_00000048 = 0;
  _iStack0000000000000050 = 0;
                    /* catch() { ... } // from try @ 02c0a778 with catch @ 02c0a7b0 */
  in_stack_00000040 = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  _iStack0000000000000030 = 0;
  if ((unaff_w19 >> 3 & 1) == 0) {
    iVar6 = 0;
    uVar1 = _iStack00000000000000d0;
joined_r0x02c0a828:
    _iStack00000000000000d0 = uVar1;
    if ((unaff_w19 & 1) != 0) {
      FUN_02c079a0(&stack0x00000008);
      in_stack_000000a8 = in_stack_00000010;
      in_stack_000000a0 = in_stack_00000008;
      _iStack00000000000000b0 = in_stack_00000018;
      if (unaff_w19 == 1) {
        puVar2 = &stack0x000000a0;
        puVar5 = (undefined8 *)PTR_DAT_0380af48;
        goto LAB_02c0a9b4;
      }
      iStack00000000000000b0 = (int)in_stack_00000018;
      iVar6 = iStack00000000000000b0 + iVar6;
    }
    if ((unaff_w19 >> 4 & 1) != 0) {
      FUN_02c07e70(&stack0x00000008);
      in_stack_00000088 = in_stack_00000010;
      in_stack_00000080 = in_stack_00000008;
      _iStack0000000000000090 = in_stack_00000018;
      if (unaff_w19 == 0x10) {
        puVar2 = &stack0x00000080;
        puVar5 = (undefined8 *)PTR_DAT_0380af50;
        goto LAB_02c0a9b4;
      }
      iStack0000000000000090 = (int)in_stack_00000018;
      iVar6 = iStack0000000000000090 + iVar6;
    }
    if ((unaff_w19 >> 1 & 1) != 0) {
      FUN_02c08370(&stack0x00000008);
      in_stack_00000068 = in_stack_00000010;
      in_stack_00000060 = in_stack_00000008;
      _iStack0000000000000070 = in_stack_00000018;
      if (unaff_w19 == 2) {
        puVar2 = &stack0x00000060;
        puVar5 = (undefined8 *)PTR_DAT_0380af58;
        goto LAB_02c0a9b4;
      }
      iStack0000000000000070 = (int)in_stack_00000018;
      iVar6 = iStack0000000000000070 + iVar6;
    }
    if ((unaff_w19 >> 2 & 1) != 0) {
      FUN_02c087b8(&stack0x00000008);
      in_stack_00000048 = in_stack_00000010;
      in_stack_00000040 = in_stack_00000008;
      _iStack0000000000000050 = in_stack_00000018;
      uVar1 = _iStack0000000000000050;
      if (unaff_w19 == 4) {
        puVar2 = &stack0x00000040;
        puVar5 = (undefined8 *)PTR_DAT_0380af60;
        goto LAB_02c0a9b4;
      }
      iStack0000000000000050 = (int)in_stack_00000018;
      iVar6 = iStack0000000000000050 + iVar6;
      _iStack0000000000000050 = uVar1;
    }
    if ((unaff_w19 & 0xa0) != 0) {
      FUN_02c08c84(&stack0x00000008);
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      _iStack0000000000000030 = in_stack_00000018;
      uVar1 = _iStack0000000000000030;
      if ((unaff_w19 == 0x80) || (unaff_w19 == 0x20)) {
        puVar2 = &stack0x00000020;
        puVar5 = (undefined8 *)PTR_DAT_0380b020;
        goto LAB_02c0a9b4;
      }
      iStack0000000000000030 = (int)in_stack_00000018;
      iVar6 = iStack0000000000000030 + iVar6;
      _iStack0000000000000030 = uVar1;
    }
    puVar2 = (undefined8 *)PTR_DAT_0380aad0;
    if (unaff_w19 != 9) {
      puVar2 = (undefined8 *)PTR_DAT_03803200;
    }
    uVar3 = FUN_017fc3f4(*puVar2,iVar6);
    FUN_0264f760(&stack0x000000c0,uVar3,0,*(undefined8 *)PTR_DAT_0380af68);
    iVar6 = iStack00000000000000d0;
    FUN_0264f760(&stack0x000000a0,uVar3,_iStack00000000000000d0 & 0xffffffff,
                 *(undefined8 *)PTR_DAT_0380af70);
    iVar6 = iStack00000000000000b0 + iVar6;
    FUN_0264f760(&stack0x00000080,uVar3,iVar6,*(undefined8 *)PTR_DAT_0380af78);
    iVar6 = iStack0000000000000090 + iVar6;
    FUN_0264f760(&stack0x00000060,uVar3,iVar6,*(undefined8 *)PTR_DAT_0380af80);
    iVar6 = iStack0000000000000070 + iVar6;
    FUN_0264f760(&stack0x00000040,uVar3,iVar6,*(undefined8 *)PTR_DAT_0380af88);
    FUN_0264f760(&stack0x00000020,uVar3,iStack0000000000000050 + iVar6,
                 *(undefined8 *)PTR_DAT_0380af90);
  }
  else {
    FUN_02c07448(&stack0x00000008);
    in_stack_000000c8 = in_stack_00000010;
    in_stack_000000c0 = in_stack_00000008;
    _iStack00000000000000d0 = in_stack_00000018;
    if (unaff_w19 != 8) {
      iStack00000000000000d0 = (int)in_stack_00000018;
      uVar1 = in_stack_00000018;
      iVar6 = iStack00000000000000d0;
      goto joined_r0x02c0a828;
    }
    puVar2 = &stack0x000000c0;
    puVar5 = (undefined8 *)PTR_DAT_0380af40;
LAB_02c0a9b4:
    uVar3 = FUN_0264f644(puVar2,*puVar5);
  }
  return uVar3;
}


