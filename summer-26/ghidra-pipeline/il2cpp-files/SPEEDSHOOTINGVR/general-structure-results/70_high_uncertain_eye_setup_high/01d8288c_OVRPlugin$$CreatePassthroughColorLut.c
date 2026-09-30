/*
FUNCTION_NAME: OVRPlugin$$CreatePassthroughColorLut
ENTRY_POINT: 01d8288c
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__CreatePassthroughColorLut(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  uint unaff_w19;
  int unaff_w23;
  undefined8 *unaff_x24;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
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
  int iStack00000000000000b0;
  int in_stack_000000d0;
  
  if ((unaff_w19 & 1) == 0) {
joined_r0x01d82944:
                    /* try { // try from 01d82944 to 01e82953 has its CatchHandler @ 01d82a14 */
    if ((unaff_w19 >> 4 & 1) != 0) {
      FUN_01d80358(&stack0x00000008);
                    /* try { // try from 01d82968 to 01e8297f has its CatchHandler @ 01d82a04 */
      in_stack_00000088 = in_stack_00000010;
      in_stack_00000080 = in_stack_00000008;
      _iStack0000000000000090 = in_stack_00000018;
      if (unaff_w19 == 0x10) {
                    /* try { // try from 01d82980 to 01e82987 has its CatchHandler @ 01d82a00 */
        puVar2 = &stack0x00000080;
        puVar4 = (undefined8 *)PTR_DAT_023590f8;
        goto LAB_01d82a7c;
      }
                    /* try { // try from 01d8298c to 01e8299f has its CatchHandler @ 01d82a08 */
      iStack0000000000000090 = (int)in_stack_00000018;
      unaff_w23 = iStack0000000000000090 + unaff_w23;
    }
    if ((unaff_w19 >> 1 & 1) != 0) {
                    /* try { // try from 01d829a0 to 01e829f7 has its CatchHandler @ 01d827c8 */
      FUN_01d80858(&stack0x00000008);
      in_stack_00000068 = in_stack_00000010;
      in_stack_00000060 = in_stack_00000008;
      _iStack0000000000000070 = in_stack_00000018;
      if (unaff_w19 == 2) {
        puVar2 = &stack0x00000060;
        puVar4 = (undefined8 *)PTR_DAT_023591a0;
        goto LAB_01d82a7c;
      }
      iStack0000000000000070 = (int)in_stack_00000018;
      unaff_w23 = iStack0000000000000070 + unaff_w23;
    }
    if ((unaff_w19 >> 2 & 1) != 0) {
      FUN_01d80ca0(&stack0x00000008);
      in_stack_00000048 = in_stack_00000010;
      in_stack_00000040 = in_stack_00000008;
      _iStack0000000000000050 = in_stack_00000018;
      uVar3 = _iStack0000000000000050;
      if (unaff_w19 == 4) {
        puVar2 = &stack0x00000040;
        puVar4 = (undefined8 *)PTR_DAT_02359100;
        goto LAB_01d82a7c;
      }
      iStack0000000000000050 = (int)in_stack_00000018;
      unaff_w23 = iStack0000000000000050 + unaff_w23;
      _iStack0000000000000050 = uVar3;
    }
    if ((unaff_w19 & 0xa0) != 0) {
      FUN_01d8116c(&stack0x00000008);
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      _iStack0000000000000030 = in_stack_00000018;
      uVar3 = _iStack0000000000000030;
      if ((unaff_w19 == 0x80) || (unaff_w19 == 0x20)) {
        puVar2 = &stack0x00000020;
        puVar4 = (undefined8 *)PTR_DAT_02359198;
        goto LAB_01d82a7c;
      }
      iStack0000000000000030 = (int)in_stack_00000018;
      unaff_w23 = iStack0000000000000030 + unaff_w23;
      _iStack0000000000000030 = uVar3;
    }
    puVar2 = (undefined8 *)PTR_DAT_02358d60;
    if (unaff_w19 != 9) {
      puVar2 = (undefined8 *)PTR_DAT_02352758;
    }
    uVar3 = FUN_00fdc388(*puVar2,unaff_w23);
    FUN_017488f0(&stack0x000000c0,uVar3,0,*(undefined8 *)PTR_DAT_02359108);
    iVar1 = in_stack_000000d0;
    FUN_017488f0(&stack0x000000a0,uVar3,in_stack_000000d0,*(undefined8 *)PTR_DAT_02359110);
    iVar1 = iStack00000000000000b0 + iVar1;
    FUN_017488f0(&stack0x00000080,uVar3,iVar1,*(undefined8 *)PTR_DAT_02359118);
    iVar1 = iStack0000000000000090 + iVar1;
    FUN_017488f0(&stack0x00000060,uVar3,iVar1,*(undefined8 *)PTR_DAT_02359120);
    iVar1 = iStack0000000000000070 + iVar1;
    FUN_017488f0(&stack0x00000040,uVar3,iVar1,*(undefined8 *)PTR_DAT_02359128);
    FUN_017488f0(&stack0x00000020,uVar3,iStack0000000000000050 + iVar1,
                 *(undefined8 *)PTR_DAT_02359130);
  }
  else {
                    /* try { // try from 01d828f8 to 01e8290b has its CatchHandler @ 01d82a30 */
    FUN_01d7fe88(&stack0x00000008);
                    /* try { // try from 01d8291c to 01e82933 has its CatchHandler @ 01d82a24 */
    unaff_x24[1] = in_stack_00000010;
    *unaff_x24 = in_stack_00000008;
    _iStack00000000000000b0 = in_stack_00000018;
    if (unaff_w19 != 1) {
      iStack00000000000000b0 = (int)in_stack_00000018;
      unaff_w23 = iStack00000000000000b0 + unaff_w23;
      goto joined_r0x01d82944;
    }
    puVar2 = (undefined8 *)&stack0x000000a0;
    puVar4 = (undefined8 *)PTR_DAT_023590f0;
LAB_01d82a7c:
    uVar3 = FUN_017487d4(puVar2,*puVar4);
  }
  return uVar3;
}


