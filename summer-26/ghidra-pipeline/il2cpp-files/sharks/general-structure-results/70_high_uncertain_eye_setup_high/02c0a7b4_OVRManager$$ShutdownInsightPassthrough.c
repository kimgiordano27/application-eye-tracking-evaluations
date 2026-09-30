/*
FUNCTION_NAME: OVRManager$$ShutdownInsightPassthrough
ENTRY_POINT: 02c0a7b4
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__ShutdownInsightPassthrough(void)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  uint unaff_w19;
  int iVar5;
  undefined8 *unaff_x24;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  ulong in_stack_00000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
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
  int iStack00000000000000b0;
  int iStack00000000000000d0;
  
                    /* catch() { ... } // from try @ 02c0a56c with catch @ 02c0a7b4 */
  uStack0000000000000020 = 0;
  uStack0000000000000028 = 0;
                    /* catch() { ... } // from try @ 02c0a774 with catch @ 02c0a7b8 */
  _iStack0000000000000030 = 0;
                    /* catch() { ... } // from try @ 02c0a5a0 with catch @ 02c0a7bc
                       catch() { ... } // from try @ 02c0a784 with catch @ 02c0a7bc */
  if ((unaff_w19 >> 3 & 1) == 0) {
                    /* catch() { ... } // from try @ 02c0a5f4 with catch @ 02c0a7c0
                       catch() { ... } // from try @ 02c0a764 with catch @ 02c0a7c0
                       catch() { ... } // from try @ 02c0a790 with catch @ 02c0a7c0 */
    iVar5 = 0;
    uVar1 = _iStack00000000000000d0;
joined_r0x02c0a828:
    _iStack00000000000000d0 = uVar1;
    if ((unaff_w19 & 1) != 0) {
                    /* try { // try from 02c0a830 to 02d0a837 has its CatchHandler @ 02c0a838 */
                    /* catch() { ... } // from try @ 02c0a7f8 with catch @ 02c0a838
                       catch() { ... } // from try @ 02c0a830 with catch @ 02c0a838 */
      FUN_02c079a0(&stack0x00000008);
      unaff_x24[1] = in_stack_00000010;
      *unaff_x24 = in_stack_00000008;
      _iStack00000000000000b0 = in_stack_00000018;
      if (unaff_w19 == 1) {
        puVar2 = (undefined8 *)&stack0x000000a0;
        puVar4 = (undefined8 *)PTR_DAT_0380af48;
        goto LAB_02c0a9b4;
      }
      iStack00000000000000b0 = (int)in_stack_00000018;
      iVar5 = iStack00000000000000b0 + iVar5;
    }
    if ((unaff_w19 >> 4 & 1) != 0) {
      FUN_02c07e70(&stack0x00000008);
      in_stack_00000088 = in_stack_00000010;
      in_stack_00000080 = in_stack_00000008;
      _iStack0000000000000090 = in_stack_00000018;
      if (unaff_w19 == 0x10) {
        puVar2 = &stack0x00000080;
        puVar4 = (undefined8 *)PTR_DAT_0380af50;
        goto LAB_02c0a9b4;
      }
      iStack0000000000000090 = (int)in_stack_00000018;
      iVar5 = iStack0000000000000090 + iVar5;
    }
    if ((unaff_w19 >> 1 & 1) != 0) {
      FUN_02c08370(&stack0x00000008);
      in_stack_00000068 = in_stack_00000010;
      in_stack_00000060 = in_stack_00000008;
      _iStack0000000000000070 = in_stack_00000018;
      if (unaff_w19 == 2) {
        puVar2 = &stack0x00000060;
        puVar4 = (undefined8 *)PTR_DAT_0380af58;
        goto LAB_02c0a9b4;
      }
      iStack0000000000000070 = (int)in_stack_00000018;
      iVar5 = iStack0000000000000070 + iVar5;
    }
    if ((unaff_w19 >> 2 & 1) != 0) {
      FUN_02c087b8(&stack0x00000008);
      in_stack_00000048 = in_stack_00000010;
      in_stack_00000040 = in_stack_00000008;
      _iStack0000000000000050 = in_stack_00000018;
      uVar1 = _iStack0000000000000050;
      if (unaff_w19 == 4) {
        puVar2 = &stack0x00000040;
        puVar4 = (undefined8 *)PTR_DAT_0380af60;
        goto LAB_02c0a9b4;
      }
      iStack0000000000000050 = (int)in_stack_00000018;
      iVar5 = iStack0000000000000050 + iVar5;
      _iStack0000000000000050 = uVar1;
    }
    if ((unaff_w19 & 0xa0) != 0) {
      FUN_02c08c84(&stack0x00000008);
      uStack0000000000000028 = in_stack_00000010;
      uStack0000000000000020 = in_stack_00000008;
      _iStack0000000000000030 = in_stack_00000018;
      uVar1 = _iStack0000000000000030;
      if ((unaff_w19 == 0x80) || (unaff_w19 == 0x20)) {
        puVar2 = &stack0x00000020;
        puVar4 = (undefined8 *)PTR_DAT_0380b020;
        goto LAB_02c0a9b4;
      }
      iStack0000000000000030 = (int)in_stack_00000018;
      iVar5 = iStack0000000000000030 + iVar5;
      _iStack0000000000000030 = uVar1;
    }
    puVar2 = (undefined8 *)PTR_DAT_0380aad0;
    if (unaff_w19 != 9) {
      puVar2 = (undefined8 *)PTR_DAT_03803200;
    }
    uVar3 = FUN_017fc3f4(*puVar2,iVar5);
    FUN_0264f760(&stack0x000000c0,uVar3,0,*(undefined8 *)PTR_DAT_0380af68);
    iVar5 = iStack00000000000000d0;
    FUN_0264f760(&stack0x000000a0,uVar3,_iStack00000000000000d0 & 0xffffffff,
                 *(undefined8 *)PTR_DAT_0380af70);
    iVar5 = iStack00000000000000b0 + iVar5;
    FUN_0264f760(&stack0x00000080,uVar3,iVar5,*(undefined8 *)PTR_DAT_0380af78);
    iVar5 = iStack0000000000000090 + iVar5;
    FUN_0264f760(&stack0x00000060,uVar3,iVar5,*(undefined8 *)PTR_DAT_0380af80);
    iVar5 = iStack0000000000000070 + iVar5;
    FUN_0264f760(&stack0x00000040,uVar3,iVar5,*(undefined8 *)PTR_DAT_0380af88);
    FUN_0264f760(&stack0x00000020,uVar3,iStack0000000000000050 + iVar5,
                 *(undefined8 *)PTR_DAT_0380af90);
  }
  else {
                    /* try { // try from 02c0a7d8 to 02d0a7db has its CatchHandler @ 02c0a7ec */
                    /* catch() { ... } // from try @ 02c0a7d8 with catch @ 02c0a7ec */
                    /* try { // try from 02c0a7f8 to 02d0a823 has its CatchHandler @ 02c0a838 */
    FUN_02c07448(&stack0x00000008);
    unaff_x24[5] = in_stack_00000010;
    unaff_x24[4] = in_stack_00000008;
    _iStack00000000000000d0 = in_stack_00000018;
    if (unaff_w19 != 8) {
                    /* try { // try from 02c0a824 to 02d0a82f has its CatchHandler @ 02c0a484 */
      iStack00000000000000d0 = (int)in_stack_00000018;
      uVar1 = in_stack_00000018;
      iVar5 = iStack00000000000000d0;
      goto joined_r0x02c0a828;
    }
    puVar2 = (undefined8 *)&stack0x000000c0;
    puVar4 = (undefined8 *)PTR_DAT_0380af40;
LAB_02c0a9b4:
    uVar3 = FUN_0264f644(puVar2,*puVar4);
  }
  return uVar3;
}


