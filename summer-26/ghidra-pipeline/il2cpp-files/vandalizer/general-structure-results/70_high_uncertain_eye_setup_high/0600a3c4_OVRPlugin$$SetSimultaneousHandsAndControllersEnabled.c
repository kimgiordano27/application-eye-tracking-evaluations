/*
FUNCTION_NAME: OVRPlugin$$SetSimultaneousHandsAndControllersEnabled
ENTRY_POINT: 0600a3c4
PROGRAM: vandalizer-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SetSimultaneousHandsAndControllersEnabled(long param_1,undefined8 param_2)

{
  uint uVar1;
  float fVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x23;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined8 in_stack_00000030;
  undefined4 uStack0000000000000038;
  float fStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 uStack0000000000000058;
  undefined4 uStack000000000000005c;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined4 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  float in_stack_000000c8;
  undefined4 uStack00000000000000cc;
  undefined4 in_stack_000000d0;
  undefined4 uStack00000000000000d4;
  undefined4 in_stack_000000d8;
  undefined4 uStack00000000000000dc;
  undefined4 in_stack_000000e0;
  undefined4 uStack00000000000000e4;
  undefined4 in_stack_000000e8;
  undefined4 uStack00000000000000ec;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  
  puVar5 = PTR_DAT_075f7310;
  puVar4 = PTR_DAT_075f7300;
  puVar3 = PTR_DAT_075f72f8;
  FUN_046e17f4(&stack0x00000030,param_2,**(undefined8 **)(param_1 + 0x318));
  fVar2 = DAT_014ba5a8;
  in_stack_000000b8 = CONCAT44(fStack000000000000003c,uStack0000000000000038);
  in_stack_000000c0 = CONCAT44(fStack0000000000000044,fStack0000000000000040);
  in_stack_000000b0 = in_stack_00000030;
  in_stack_000000c8 = fStack0000000000000048;
  uStack00000000000000cc = uStack000000000000004c;
  in_stack_000000d8 = uStack0000000000000058;
  uStack00000000000000dc = uStack000000000000005c;
  in_stack_000000d0 = uStack0000000000000050;
  uStack00000000000000d4 = uStack0000000000000054;
  in_stack_000000e8 = (undefined4)in_stack_00000068;
  uStack00000000000000ec = (undefined4)((ulong)in_stack_00000068 >> 0x20);
  in_stack_000000e0 = (undefined4)in_stack_00000060;
  uStack00000000000000e4 = (undefined4)((ulong)in_stack_00000060 >> 0x20);
  while( true ) {
    uVar10 = System_Collections_Generic_Dictionary_Enumerator<object,_TextureId>__get_Current
                       (&stack0x000000b0,*(undefined8 *)puVar4);
    if ((uVar10 & 1) == 0) {
      FUN_05a00f4c(&stack0x000000b0,*(undefined8 *)puVar3);
      return;
    }
    in_stack_00000088 = CONCAT44(uStack00000000000000cc,in_stack_000000c8);
    in_stack_00000098 = CONCAT44(uStack00000000000000dc,in_stack_000000d8);
    in_stack_00000090 = CONCAT44(uStack00000000000000d4,in_stack_000000d0);
    uVar16 = CONCAT44(in_stack_000000d0,uStack00000000000000cc);
    *(ulong *)(unaff_x23 + 0x24) = CONCAT44(in_stack_000000e8,uStack00000000000000e4);
    *(ulong *)(unaff_x23 + 0x1c) = CONCAT44(in_stack_000000e0,uStack00000000000000dc);
    in_stack_00000080 = in_stack_000000c0;
    in_stack_000000f8 = CONCAT44(uStack00000000000000cc,in_stack_000000c8);
    uVar11 = *(undefined8 *)(unaff_x20 + 0x28);
    *(ulong *)(unaff_x23 + 0x84) = CONCAT44(in_stack_000000d8,uStack00000000000000d4);
    *(undefined8 *)(unaff_x23 + 0x7c) = uVar16;
    in_stack_000000f0 = in_stack_000000c0;
    FUN_05faf300(&stack0x00000030,uVar11,&stack0x000000f0,0);
    fVar9 = fStack0000000000000048;
    fVar8 = fStack0000000000000044;
    fVar7 = fStack0000000000000040;
    fVar6 = fStack000000000000003c;
    fVar19 = (float)uVar16;
                    /* try { // try from 0600a458 to 0610a45f has its CatchHandler @ 0600a4ac */
                    /* try { // try from 0600a464 to 0610a467 has its CatchHandler @ 0600a490 */
    in_stack_00000070 = in_stack_00000030;
                    /* try { // try from 0600a468 to 0610a46b has its CatchHandler @ 0600a49c */
    in_stack_00000078 = uStack0000000000000038;
                    /* try { // try from 0600a46c to 0610a46f has its CatchHandler @ 0600a48c */
    fVar18 = 0.0;
    fVar17 = fVar2;
                    /* try { // try from 0600a470 to 0610a47b has its CatchHandler @ 0600a0d8 */
                    /* try { // try from 0600a47c to 0610a47f has its CatchHandler @ 0600a488 */
    fVar15 = (float)FUN_06e45f14(fVar2,0);
                    /* try { // try from 0600a480 to 0610a4c3 has its CatchHandler @ 0600a0d8 */
                    /* catch() { ... } // from try @ 0600a47c with catch @ 0600a488 */
                    /* catch() { ... } // from try @ 0600a46c with catch @ 0600a48c */
    in_stack_000000f0 = in_stack_00000070;
    in_stack_000000f8 =
         CONCAT44((fVar7 * fVar18 + fVar9 * fVar15 + fVar6 * fVar19) - fVar8 * fVar17,
                  in_stack_00000078);
    in_stack_00000100 =
         CONCAT44((fVar6 * fVar17 + fVar9 * fVar18 + fVar8 * fVar19) - fVar7 * fVar15,
                  (fVar8 * fVar15 + fVar9 * fVar17 + fVar7 * fVar19) - fVar6 * fVar18);
    in_stack_00000108 =
         CONCAT44(in_stack_00000108._4_4_,
                  ((fVar9 * fVar19 - fVar6 * fVar15) - fVar7 * fVar17) - fVar8 * fVar18);
    FUN_05faf0f8(&stack0x00000030,*(undefined8 *)(unaff_x20 + 0x28),&stack0x000000f0,0);
    in_stack_00000088 = CONCAT44(fStack000000000000003c,uStack0000000000000038);
    in_stack_00000080 = in_stack_00000030;
    *(ulong *)(unaff_x23 + 0x14) = CONCAT44(fStack0000000000000048,fStack0000000000000044);
    *(ulong *)(unaff_x23 + 0xc) = CONCAT44(fStack0000000000000040,fStack000000000000003c);
    lVar12 = *unaff_x21;
    fStack0000000000000018 = (float)in_stack_00000098;
    uStack000000000000001c = (undefined4)*(undefined8 *)(unaff_x23 + 0x1c);
    if (lVar12 == 0) break;
    in_stack_000000f0 = in_stack_00000030;
    in_stack_00000108 = CONCAT44(uStack000000000000001c,fStack0000000000000018);
    in_stack_00000100 = in_stack_00000090;
    lVar14 = *(long *)puVar5;
    *(undefined8 *)(unaff_x23 + 0x94) = *(undefined8 *)(unaff_x23 + 0x24);
    *(undefined8 *)(unaff_x23 + 0x8c) = *(undefined8 *)(unaff_x23 + 0x1c);
    lVar13 = *(long *)(lVar12 + 0x10);
    *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
    in_stack_000000f8 = in_stack_00000088;
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    uVar1 = *(uint *)(lVar12 + 0x18);
    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
      uVar16 = *(undefined8 *)(unaff_x23 + 0x8c);
      lVar13 = lVar13 + (long)(int)uVar1 * 0x2c;
      *(undefined8 *)(lVar13 + 0x44) = *(undefined8 *)(unaff_x23 + 0x94);
      *(undefined8 *)(lVar13 + 0x3c) = uVar16;
      *(undefined8 *)(lVar13 + 0x28) = in_stack_00000088;
      *(undefined8 *)(lVar13 + 0x20) = in_stack_00000030;
      *(undefined8 *)(lVar13 + 0x38) = in_stack_00000108;
      *(undefined8 *)(lVar13 + 0x30) = in_stack_00000090;
    }
    else {
      fStack0000000000000048 = fStack0000000000000018;
      fStack0000000000000040 = (float)in_stack_00000090;
      fStack0000000000000044 = (float)((ulong)in_stack_00000090 >> 0x20);
      uStack0000000000000054 = (undefined4)*(undefined8 *)(unaff_x23 + 0x94);
      uStack0000000000000058 = (undefined4)((ulong)*(undefined8 *)(unaff_x23 + 0x94) >> 0x20);
      uStack000000000000004c = (undefined4)*(undefined8 *)(unaff_x23 + 0x8c);
      uStack0000000000000050 = (undefined4)((ulong)*(undefined8 *)(unaff_x23 + 0x8c) >> 0x20);
      FUN_046e0b10(lVar12,&stack0x00000030,
                   *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


