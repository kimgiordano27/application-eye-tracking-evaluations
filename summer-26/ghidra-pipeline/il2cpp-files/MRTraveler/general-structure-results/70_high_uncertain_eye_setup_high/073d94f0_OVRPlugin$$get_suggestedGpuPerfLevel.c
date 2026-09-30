/*
FUNCTION_NAME: OVRPlugin$$get_suggestedGpuPerfLevel
ENTRY_POINT: 073d94f0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined1  [16]
OVRPlugin__get_suggestedGpuPerfLevel
          (undefined8 param_1,ulong param_2,ulong param_3,undefined1 param_4 [16],undefined4 param_5
          ,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 unaff_x19;
  undefined4 *unaff_x20;
  uint *unaff_x23;
  long unaff_x24;
  int unaff_w25;
  long unaff_x26;
  undefined8 unaff_x27;
  long *unaff_x29;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auVar9 [16];
  uint uVar10;
  uint uVar11;
  ulong unaff_d8;
  ulong unaff_d9;
  ulong unaff_d10;
  undefined8 in_register_00005148;
  uint in_s16;
  undefined4 in_register_00005204;
  undefined4 in_s17;
  undefined8 uStack0000000000000010;
  undefined4 uStack0000000000000018;
  ulong in_stack_00000070;
  uint uStack0000000000000078;
  undefined4 uStack000000000000007c;
  undefined4 uStack0000000000000080;
  undefined4 uStack0000000000000084;
  undefined4 uStack0000000000000088;
  undefined4 uStack000000000000008c;
  undefined4 uStack0000000000000090;
  undefined4 uStack0000000000000094;
  uint in_stack_00000098;
  ulong in_stack_000000a0;
  uint in_stack_000000a8;
  undefined4 uStack00000000000000b0;
  undefined8 uStack00000000000000b4;
  ulong in_stack_000000c0;
  uint in_stack_000000c8;
  ulong in_stack_000000d0;
  uint in_stack_000000d8;
  undefined4 in_stack_000000e0;
  undefined4 uStack00000000000000e4;
  undefined4 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  ulong in_stack_00000100;
  uint in_stack_00000108;
  undefined4 in_stack_00000110;
  undefined4 uStack0000000000000114;
  undefined4 in_stack_00000118;
  undefined4 uStack0000000000000120;
  undefined8 uStack0000000000000124;
  ulong in_stack_00000150;
  uint in_stack_00000158;
  undefined4 uStack0000000000000160;
  undefined8 uStack0000000000000164;
  
code_r0x073d94f0:
  uStack0000000000000010 = param_1;
  uStack0000000000000018 = in_s17;
  FUN_073d96b4(param_2,param_3,CONCAT44(in_register_00005204,in_s16),param_5,param_6,param_7);
  uVar10 = unaff_x23[4];
                    /* try { // try from 073d9504 to 074d9507 has its CatchHandler @ 073d9538 */
  uVar11 = unaff_x23[5];
                    /* try { // try from 073d9508 to 074d950b has its CatchHandler @ 073d9534 */
                    /* try { // try from 073d950c to 074d950f has its CatchHandler @ 073d9240 */
                    /* try { // try from 073d9510 to 074d9513 has its CatchHandler @ 073d952c */
                    /* try { // try from 073d9514 to 074d9517 has its CatchHandler @ 073d9530 */
                    /* try { // try from 073d9518 to 074d951b has its CatchHandler @ 073d9520 */
                    /* try { // try from 073d951c to 074d951f has its CatchHandler @ 073d9530 */
                    /* catch() { ... } // from try @ 073d9518 with catch @ 073d9520
                       try { // try from 073d9520 to 074d954f has its CatchHandler @ 073d9240 */
                    /* catch() { ... } // from try @ 073d942c with catch @ 073d9524 */
                    /* catch() { ... } // from try @ 073d93d0 with catch @ 073d9528 */
  uVar8 = OVRPlugin__set_ipd(unaff_x23[3],uVar10,uVar11,unaff_x23[6],
                             *(undefined4 *)(unaff_x26 + 0x1c),*(undefined4 *)(unaff_x26 + 0x20),
                             *(undefined4 *)(unaff_x26 + 0x24),*(undefined4 *)(unaff_x26 + 0x28));
                    /* catch() { ... } // from try @ 073d9510 with catch @ 073d952c */
  *(undefined4 *)(unaff_x26 + 0x58) = uVar8;
  puVar3 = PTR_DAT_08eb5ba8;
                    /* catch() { ... } // from try @ 073d9514 with catch @ 073d9530
                       catch() { ... } // from try @ 073d951c with catch @ 073d9530 */
                    /* catch() { ... } // from try @ 073d9508 with catch @ 073d9534 */
                    /* catch() { ... } // from try @ 073d9504 with catch @ 073d9538 */
                    /* catch() { ... } // from try @ 073d93c4 with catch @ 073d953c */
  uVar4 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08eb5ba8);
                    /* catch() { ... } // from try @ 073d93a8 with catch @ 073d9540 */
                    /* try { // try from 073d9550 to 074d9553 has its CatchHandler @ 073d9578 */
                    /* try { // try from 073d9554 to 074d957f has its CatchHandler @ 073d9240 */
  FUN_073d8a38(uVar4,unaff_x26,*(undefined8 *)PTR_DAT_08eb5bb0);
  uVar4 = thunk_FUN_03cf5234(*(undefined8 *)puVar3);
                    /* catch() { ... } // from try @ 073d9550 with catch @ 073d9578 */
  FUN_073d8a38(uVar4,unaff_x26,*(undefined8 *)PTR_DAT_08eb5bb8);
                    /* try { // try from 073d9580 to 074d9587 has its CatchHandler @ 073d959c */
                    /* try { // try from 073d9588 to 074d9593 has its CatchHandler @ 073d9240 */
                    /* try { // try from 073d9594 to 074d959b has its CatchHandler @ 073d959c */
                    /* catch() { ... } // from try @ 073d9580 with catch @ 073d959c
                       catch() { ... } // from try @ 073d9594 with catch @ 073d959c */
  uVar8 = FUN_073d8608();
  puVar3 = PTR_DAT_08eb5ba0;
  in_stack_000000c0 = CONCAT44(uVar10,uVar8);
  in_stack_000000c8 = uVar11;
  do {
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar5 = FUN_073d2688(unaff_d10,unaff_d9,unaff_d8,&stack0x000000c0);
    if ((uVar5 & 1) != 0) {
      unaff_d10 = in_stack_000000c0 & 0xffffffff;
      in_register_00005148 = 0;
      unaff_d9 = in_stack_000000c0 >> 0x20;
      unaff_d8 = (ulong)in_stack_000000c8;
      FUN_0737f108(unaff_x19,&stack0x00000130,0);
    }
    do {
      lVar6 = *(long *)(unaff_x24 + 0x20);
      if (lVar6 == 0) goto LAB_073d9600;
      if (*(int *)(lVar6 + 0x18) <= unaff_w25) {
        auVar9._8_8_ = in_register_00005148;
        auVar9._0_8_ = unaff_d10;
        return auVar9;
      }
      FUN_0516b218(&stack0x00000070,lVar6,unaff_w25,*(undefined8 *)puVar3);
      uStack0000000000000124 = CONCAT44(in_stack_00000098,uStack0000000000000094);
      in_stack_00000108 = uStack0000000000000078;
      in_stack_00000100 = in_stack_00000070;
      in_stack_00000118 = uStack0000000000000088;
      in_stack_00000110 = uStack0000000000000080;
      uStack0000000000000114 = uStack0000000000000084;
      uStack0000000000000120 = uStack0000000000000090;
      lVar6 = *(long *)(unaff_x24 + 0x20);
      if (lVar6 == 0) goto LAB_073d9600;
      iVar1 = *(int *)(lVar6 + 0x18);
      unaff_w25 = unaff_w25 + 1;
      iVar2 = 0;
      if (iVar1 != 0) {
        iVar2 = unaff_w25 / iVar1;
      }
      uVar8 = uStack000000000000008c;
      FUN_0516b218(&stack0x00000070,lVar6,unaff_w25 - iVar2 * iVar1,*(undefined8 *)puVar3);
      in_stack_000000f0 = CONCAT44(uStack0000000000000094,uStack0000000000000090);
      in_stack_000000d8 = uStack0000000000000078;
      in_stack_000000d0 = in_stack_00000070;
      in_stack_000000e8 = uStack0000000000000088;
      in_stack_000000e0 = uStack0000000000000080;
      uStack00000000000000e4 = uStack0000000000000084;
      if (uStack0000000000000124._4_1_ != '\0') {
        if ((in_stack_00000098 & 0xff) != 0) goto LAB_073d9388;
        break;
      }
    } while ((in_stack_00000098 & 0xff) != 0);
    if (*(long *)(unaff_x24 + 0x20) == 0) goto LAB_073d9600;
    if (*(int *)(*(long *)(unaff_x24 + 0x20) + 0x18) != 1) break;
LAB_073d9388:
    uStack0000000000000164 = CONCAT44(in_stack_00000118,uStack0000000000000114);
    in_stack_00000158 = in_stack_00000108;
    in_stack_00000150 = in_stack_00000100;
    uStack0000000000000160 = in_stack_00000110;
    FUN_0737f84c(&stack0x00000070,unaff_x27,&stack0x00000150,0);
    uStack00000000000000b4 = CONCAT44(uStack0000000000000088,uStack0000000000000084);
    in_stack_000000a8 = uStack0000000000000078;
    in_stack_000000a0 = in_stack_00000070;
    uStack00000000000000b0 = uStack0000000000000080;
    FUN_0737f108(&stack0x00000130,&stack0x000000a0,0);
    uStack0000000000000078 = 0;
    in_stack_00000070 = 0;
    FUN_073d40f4(*unaff_x20,&stack0x00000070);
    in_stack_000000c0 = in_stack_00000070;
    in_stack_000000c8 = uStack0000000000000078;
  } while( true );
  unaff_x26 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08eb5bc0);
  FUN_07145224(unaff_x26,0);
  uStack0000000000000164 = CONCAT44(in_stack_00000118,uStack0000000000000114);
  in_stack_00000158 = in_stack_00000108;
  in_stack_00000150 = in_stack_00000100;
  uStack0000000000000160 = in_stack_00000110;
  FUN_0737f84c(&stack0x00000070,unaff_x27,&stack0x00000150,0);
  if (unaff_x26 == 0) {
LAB_073d9600:
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  *(ulong *)(unaff_x26 + 0x24) = CONCAT44(uStack0000000000000088,uStack0000000000000084);
  *(ulong *)(unaff_x26 + 0x1c) = CONCAT44(uStack0000000000000080,uStack000000000000007c);
  *(ulong *)(unaff_x26 + 0x18) = CONCAT44(uStack000000000000007c,uStack0000000000000078);
  *(ulong *)(unaff_x26 + 0x10) = in_stack_00000070;
  uStack0000000000000164 = CONCAT44(in_stack_000000e8,uStack00000000000000e4);
  in_stack_00000158 = in_stack_000000d8;
  in_stack_00000150 = in_stack_000000d0;
  uStack0000000000000160 = in_stack_000000e0;
  FUN_0737f84c(&stack0x00000070,unaff_x27,&stack0x00000150,0);
  uVar4 = CONCAT44(uStack0000000000000080,uStack000000000000007c);
  *(ulong *)(unaff_x26 + 0x40) = CONCAT44(uStack000000000000007c,uStack0000000000000078);
  *(ulong *)(unaff_x26 + 0x38) = in_stack_00000070;
  *(ulong *)(unaff_x26 + 0x4c) = CONCAT44(uStack0000000000000088,uStack0000000000000084);
  *(undefined8 *)(unaff_x26 + 0x44) = uVar4;
  uVar7 = FUN_073d9690(&stack0x00000100,unaff_x27);
  *(undefined4 *)(unaff_x26 + 0x2c) = uVar7;
  *(int *)(unaff_x26 + 0x30) = (int)uVar4;
  *(undefined4 *)(unaff_x26 + 0x34) = uVar8;
  in_s16 = unaff_x23[2];
  in_register_00005204 = 0;
  param_5 = *(undefined4 *)(unaff_x26 + 0x10);
  param_6 = *(undefined4 *)(unaff_x26 + 0x14);
  param_7 = *(undefined4 *)(unaff_x26 + 0x18);
  param_1 = *(undefined8 *)(unaff_x26 + 0x38);
  in_s17 = *(undefined4 *)(unaff_x26 + 0x40);
  param_2 = (ulong)*unaff_x23;
  param_3 = (ulong)unaff_x23[1];
  goto code_r0x073d94f0;
}


