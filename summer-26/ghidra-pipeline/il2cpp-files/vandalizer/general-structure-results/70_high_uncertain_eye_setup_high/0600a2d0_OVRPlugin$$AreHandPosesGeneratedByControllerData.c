/*
FUNCTION_NAME: OVRPlugin$$AreHandPosesGeneratedByControllerData
ENTRY_POINT: 0600a2d0
PROGRAM: vandalizer-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__AreHandPosesGeneratedByControllerData(ulong param_1)

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
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *plVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 in_stack_00000030;
  undefined4 uStack0000000000000038;
  float fStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 uStack0000000000000058;
  undefined4 uStack000000000000005c;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined4 in_stack_00000078;
  undefined8 in_stack_00000080;
  float in_stack_00000088;
  float fStack000000000000008c;
  float in_stack_00000090;
  float fStack0000000000000094;
  float in_stack_00000098;
  undefined4 uStack000000000000009c;
  undefined4 in_stack_000000a0;
  undefined8 uStack00000000000000a4;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  float in_stack_000000c8;
  float fStack00000000000000cc;
  undefined4 in_stack_000000d0;
  undefined4 uStack00000000000000d4;
  undefined4 in_stack_000000d8;
  undefined4 uStack00000000000000dc;
  undefined4 in_stack_000000e0;
  undefined4 uStack00000000000000e4;
  undefined4 in_stack_000000e8;
  undefined4 uStack00000000000000ec;
  undefined8 in_stack_000000f0;
  float in_stack_000000f8;
  float fStack00000000000000fc;
  float in_stack_00000100;
  float fStack0000000000000104;
  float in_stack_00000108;
  undefined4 uStack0000000000000110;
  undefined8 uStack0000000000000114;
  
  if ((param_1 & 1) == 0) {
    FUN_031f20f4(PTR_DAT_075f72f8);
                    /* try { // try from 0600a2e8 to 0610a313 has its CatchHandler @ 0600a4a4 */
    FUN_031f20f4(PTR_DAT_075f7300);
    FUN_031f20f4(PTR_DAT_075f7308);
    FUN_031f20f4(PTR_DAT_075f72e0);
    FUN_031f20f4(PTR_DAT_075f7310);
    FUN_031f20f4(PTR_DAT_075f7318);
    FUN_031f20f4(PTR_DAT_075f7320);
    FUN_031f20f4(PTR_DAT_075f72f0);
    *(undefined1 *)(unaff_x21 + 0x97e) = 1;
  }
  puVar4 = PTR_DAT_075f7320;
  puVar3 = PTR_DAT_075f72f0;
  in_stack_00000078 = 0;
  in_stack_000000d8 = 0;
  uStack00000000000000dc = 0;
  in_stack_000000d0 = 0;
  uStack00000000000000d4 = 0;
  in_stack_000000e8 = 0;
  uStack00000000000000ec = 0;
  in_stack_000000e0 = 0;
  uStack00000000000000e4 = 0;
  in_stack_000000b8 = 0;
  in_stack_000000b0 = 0;
  in_stack_000000c8 = 0.0;
  fStack00000000000000cc = 0.0;
  in_stack_000000c0 = 0;
                    /* try { // try from 0600a350 to 0610a35f has its CatchHandler @ 0600a494 */
  uStack00000000000000a4 = 0;
  in_stack_000000a0 = 0;
  in_stack_00000088 = 0.0;
  fStack000000000000008c = 0.0;
  in_stack_00000080 = 0;
  in_stack_00000098 = 0.0;
  uStack000000000000009c = 0;
  in_stack_00000090 = 0.0;
  fStack0000000000000094 = 0.0;
  in_stack_00000070 = 0;
  if (unaff_x19 != 0) {
                    /* try { // try from 0600a36c to 0610a373 has its CatchHandler @ 0600a498 */
                    /* try { // try from 0600a380 to 0610a393 has its CatchHandler @ 0600a4a0 */
    lVar10 = FUN_03e0d654();
    lVar11 = thunk_FUN_0322f148(*(undefined8 *)puVar3);
                    /* try { // try from 0600a394 to 0610a457 has its CatchHandler @ 0600a0d8 */
    FUN_046e0200(lVar11,*(undefined8 *)puVar4);
    if (lVar10 != 0) {
      plVar15 = (long *)(lVar10 + 0x20);
      *plVar15 = lVar11;
      thunk_FUN_0329bf60(plVar15,lVar11);
      puVar5 = PTR_DAT_075f7310;
      puVar4 = PTR_DAT_075f7300;
      puVar3 = PTR_DAT_075f72f8;
      if (*(long *)(unaff_x20 + 0x20) != 0) {
        FUN_046e17f4(&stack0x00000030,*(long *)(unaff_x20 + 0x20),*(undefined8 *)PTR_DAT_075f7318);
        fVar2 = DAT_014ba5a8;
        in_stack_000000b8 = CONCAT44(fStack000000000000003c,uStack0000000000000038);
        in_stack_000000c0 = CONCAT44(fStack0000000000000044,fStack0000000000000040);
        in_stack_000000b0 = in_stack_00000030;
        in_stack_000000c8 = fStack0000000000000048;
        fStack00000000000000cc = fStack000000000000004c;
        in_stack_000000d8 = uStack0000000000000058;
        uStack00000000000000dc = uStack000000000000005c;
        in_stack_000000d0 = uStack0000000000000050;
        in_stack_000000e8 = (undefined4)in_stack_00000068;
        uStack00000000000000ec = (undefined4)((ulong)in_stack_00000068 >> 0x20);
        in_stack_000000e0 = (undefined4)in_stack_00000060;
        uStack00000000000000e4 = (undefined4)((ulong)in_stack_00000060 >> 0x20);
        while( true ) {
          uVar12 = System_Collections_Generic_Dictionary_Enumerator<object,_TextureId>__get_Current
                             (&stack0x000000b0,*(undefined8 *)puVar4);
          if ((uVar12 & 1) == 0) {
            FUN_05a00f4c(&stack0x000000b0,*(undefined8 *)puVar3);
            return lVar10;
          }
          uStack00000000000000a4 = CONCAT44(in_stack_000000e8,uStack00000000000000e4);
          in_stack_000000a0 = in_stack_000000e0;
          in_stack_00000088 = in_stack_000000c8;
          in_stack_00000080 = in_stack_000000c0;
          in_stack_00000098 = (float)in_stack_000000d8;
          uStack000000000000009c = uStack00000000000000dc;
          in_stack_00000090 = (float)in_stack_000000d0;
          in_stack_00000108 = (float)in_stack_000000d8;
          in_stack_00000100 = (float)in_stack_000000d0;
          in_stack_000000f8 = in_stack_000000c8;
          in_stack_000000f0 = in_stack_000000c0;
          fVar19 = fStack00000000000000cc;
          FUN_05faf300(&stack0x00000030,*(undefined8 *)(unaff_x20 + 0x28),&stack0x000000f0,0);
          fVar9 = fStack0000000000000048;
          fVar8 = fStack0000000000000044;
          fVar7 = fStack0000000000000040;
          fVar6 = fStack000000000000003c;
          in_stack_00000070 = in_stack_00000030;
          in_stack_00000078 = uStack0000000000000038;
          fVar18 = 0.0;
          fVar17 = fVar2;
          fVar16 = (float)FUN_06e45f14(fVar2,0);
          in_stack_000000f0 = in_stack_00000070;
          fStack00000000000000fc =
               (fVar7 * fVar18 + fVar9 * fVar16 + fVar6 * fVar19) - fVar8 * fVar17;
          in_stack_00000100 = (fVar8 * fVar16 + fVar9 * fVar17 + fVar7 * fVar19) - fVar6 * fVar18;
          fStack0000000000000104 =
               (fVar6 * fVar17 + fVar9 * fVar18 + fVar8 * fVar19) - fVar7 * fVar16;
          in_stack_00000108 = ((fVar9 * fVar19 - fVar6 * fVar16) - fVar7 * fVar17) - fVar8 * fVar18;
          in_stack_000000f8 = (float)in_stack_00000078;
          FUN_05faf0f8(&stack0x00000030,*(undefined8 *)(unaff_x20 + 0x28),&stack0x000000f0,0);
          in_stack_00000080 = in_stack_00000030;
          fStack0000000000000094 = fStack0000000000000044;
          in_stack_00000098 = fStack0000000000000048;
          in_stack_00000090 = fStack0000000000000040;
          in_stack_00000088 = (float)uStack0000000000000038;
          fStack000000000000008c = fStack000000000000003c;
          lVar11 = *plVar15;
          if (lVar11 == 0) break;
          in_stack_000000f0 = in_stack_00000030;
          uStack0000000000000114 = uStack00000000000000a4;
          lVar14 = *(long *)puVar5;
          in_stack_000000f8 = (float)uStack0000000000000038;
          in_stack_00000108 = fStack0000000000000048;
          in_stack_00000100 = fStack0000000000000040;
          uStack0000000000000110 = in_stack_000000a0;
          lVar13 = *(long *)(lVar11 + 0x10);
          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_031f2390();
          }
          uVar1 = *(uint *)(lVar11 + 0x18);
          if (uVar1 < *(uint *)(lVar13 + 0x18)) {
            *(uint *)(lVar11 + 0x18) = uVar1 + 1;
            lVar13 = lVar13 + (long)(int)uVar1 * 0x2c;
            *(undefined8 *)(lVar13 + 0x44) = uStack00000000000000a4;
            *(ulong *)(lVar13 + 0x3c) = CONCAT44(in_stack_000000a0,uStack000000000000009c);
            *(ulong *)(lVar13 + 0x28) = CONCAT44(fStack000000000000003c,uStack0000000000000038);
            *(undefined8 *)(lVar13 + 0x20) = in_stack_00000030;
            *(ulong *)(lVar13 + 0x38) = CONCAT44(uStack000000000000009c,fStack0000000000000048);
            *(ulong *)(lVar13 + 0x30) = CONCAT44(fStack0000000000000044,fStack0000000000000040);
          }
          else {
            uStack0000000000000054 = (undefined4)uStack00000000000000a4;
            uStack0000000000000058 = (undefined4)((ulong)uStack00000000000000a4 >> 0x20);
            uStack0000000000000050 = in_stack_000000a0;
            FUN_046e0b10(lVar11,&stack0x00000030,
                         *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


