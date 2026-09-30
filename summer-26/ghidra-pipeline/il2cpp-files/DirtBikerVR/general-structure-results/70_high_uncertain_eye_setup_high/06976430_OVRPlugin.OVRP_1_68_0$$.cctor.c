/*
FUNCTION_NAME: OVRPlugin.OVRP_1_68_0$$.cctor
ENTRY_POINT: 06976430
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRPlugin_OVRP_1_68_0___cctor
          (undefined1 param_1 [16],float param_2,undefined1 param_3 [16],float param_4,
          undefined1 param_5 [16],float param_6)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  int unaff_w19;
  long unaff_x20;
  int iVar12;
  undefined8 *puVar13;
  long lVar14;
  long unaff_x24;
  long unaff_x25;
  int unaff_w26;
  int unaff_w27;
  long *unaff_x29;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float unaff_s8;
  float unaff_s11;
  float unaff_s12;
  float unaff_s14;
  float unaff_s15;
  float in_s16;
  float in_s17;
  float in_s18;
  undefined8 *in_stack_00000008;
  undefined8 in_stack_00000010;
  float fStack0000000000000018;
  float fStack000000000000001c;
  float fStack0000000000000020;
  undefined4 uStack0000000000000024;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  float fStack000000000000003c;
  undefined4 uStack0000000000000040;
  undefined4 uStack0000000000000044;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 in_stack_00000050;
  undefined8 in_stack_00000058;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  float fStack000000000000006c;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined4 uStack0000000000000088;
  undefined4 uStack000000000000008c;
  undefined4 uStack0000000000000090;
  undefined8 uStack0000000000000094;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined4 uStack00000000000000b8;
  undefined4 uStack00000000000000bc;
  undefined4 uStack00000000000000c0;
  undefined8 uStack00000000000000c4;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined4 uStack00000000000000e8;
  undefined4 uStack00000000000000ec;
  undefined4 uStack00000000000000f0;
  undefined8 uStack00000000000000f4;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  
  while( true ) {
    puVar3 = PTR_DAT_084b7460;
    puVar2 = PTR_DAT_08497e38;
    unaff_w27 = unaff_w27 + 1;
    fVar19 = in_s16 * unaff_s15;
    fVar17 = in_s17 * unaff_s15;
    fVar20 = in_s17 * unaff_s14;
                    /* try { // try from 0697647c to 06a764a7 has its CatchHandler @ 0697677c */
    fVar16 = in_s18 * unaff_s15;
    fVar18 = in_s16 * unaff_s14;
    fVar21 = in_s18 * unaff_s11;
    unaff_s15 = (in_s18 * unaff_s14 + param_2 + in_s16 * unaff_s8) - in_s17 * unaff_s11;
    unaff_s14 = (in_s16 * unaff_s11 + param_4 + in_s17 * unaff_s8) - fVar16;
    unaff_s11 = (fVar17 + param_6 + in_s18 * unaff_s8) - fVar18;
    unaff_s8 = ((unaff_s12 * unaff_s8 - fVar19) - fVar20) - fVar21;
    if (unaff_w27 == unaff_w19) break;
    fVar17 = (fStack0000000000000034 * unaff_s15 +
             fStack0000000000000030 * unaff_s14 + fStack0000000000000038 * unaff_s8) -
             fStack000000000000003c * unaff_s11;
    fVar18 = (fStack000000000000003c * unaff_s14 +
             fStack0000000000000030 * unaff_s11 + fStack0000000000000034 * unaff_s8) -
             fStack0000000000000038 * unaff_s15;
    fVar16 = (float)FUN_07c8b548((fStack0000000000000038 * unaff_s11 +
                                 fStack0000000000000030 * unaff_s15 +
                                 fStack000000000000003c * unaff_s8) -
                                 fStack0000000000000034 * unaff_s14,fVar17,fVar18,
                                 ((fStack0000000000000030 * unaff_s8 -
                                  fStack000000000000003c * unaff_s15) -
                                 fStack0000000000000038 * unaff_s14) -
                                 fStack0000000000000034 * unaff_s11,uStack000000000000002c,
                                 uStack0000000000000028,uStack0000000000000024,0);
    lVar14 = *(long *)(unaff_x20 + unaff_x24);
    uVar4 = FUN_07c9da10(in_stack_00000050,0);
    lVar6 = *(long *)PTR_DAT_08486c50;
    if (in_stack_00000058._4_4_ < fStack000000000000006c) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03ae8be4(lVar6);
      }
      uVar5 = FUN_07d2b360(fStack0000000000000060 + fVar16,fStack0000000000000064 + fVar17,
                           fStack0000000000000068 + fVar18,fStack000000000000006c,
                           uStack0000000000000048,uStack0000000000000044,uStack0000000000000040,
                           uStack000000000000004c,lVar14,uVar4,1,0);
    }
    else {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03ae8be4(lVar6);
      }
      uVar5 = FUN_07d2a554(fStack0000000000000060 + fVar16,fStack0000000000000064 + fVar17,
                           fStack0000000000000068 + fVar18,uStack0000000000000048,
                           uStack0000000000000044,uStack0000000000000040,uStack000000000000004c,
                           lVar14,uVar4,1,0);
    }
    if (0 < (int)uVar5) {
      if (lVar14 == 0) goto LAB_06976640;
      uVar8 = 0;
      puVar13 = (undefined8 *)(lVar14 + 0x20);
      do {
        if (*(uint *)(lVar14 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c8();
        }
        lVar6 = *(long *)(unaff_x20 + 0x70);
        if (lVar6 == 0) goto LAB_06976640;
        in_stack_000000d8 = puVar13[1];
        in_stack_000000d0 = *puVar13;
        in_stack_000000e0 = puVar13[2];
        uStack00000000000000f4 = *(undefined8 *)((long)puVar13 + 0x24);
        uVar15 = *(undefined8 *)((long)puVar13 + 0x1c);
        lVar10 = *(long *)(lVar6 + 0x10);
        lVar11 = *unaff_x29;
        uStack00000000000000e8 = (undefined4)puVar13[3];
        uStack00000000000000ec = (undefined4)uVar15;
        uStack00000000000000f0 = (undefined4)((ulong)uVar15 >> 0x20);
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar10 == 0) goto LAB_06976640;
        uVar1 = *(uint *)(lVar6 + 0x18);
        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
          lVar10 = lVar10 + (long)(int)uVar1 * (long)unaff_w26;
          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar10 + 0x28) = in_stack_000000d8;
          *(undefined8 *)(lVar10 + 0x20) = in_stack_000000d0;
          *(ulong *)(lVar10 + 0x38) = CONCAT44(uStack00000000000000ec,uStack00000000000000e8);
          *(undefined8 *)(lVar10 + 0x30) = in_stack_000000e0;
          *(undefined8 *)(lVar10 + 0x44) = uStack00000000000000f4;
          *(undefined8 *)(lVar10 + 0x3c) = uVar15;
        }
        else {
          in_stack_00000118 = CONCAT44(uStack00000000000000ec,uStack00000000000000e8);
          uVar9 = *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70);
          *(undefined8 *)(unaff_x25 + 0x24) = uStack00000000000000f4;
          *(undefined8 *)(unaff_x25 + 0x1c) = uVar15;
          in_stack_00000100 = in_stack_000000d0;
          in_stack_00000108 = in_stack_000000d8;
          in_stack_00000110 = in_stack_000000e0;
          FUN_04e28380(lVar6,&stack0x00000100,uVar9);
        }
        uVar8 = uVar8 + 1;
        puVar13 = (undefined8 *)((long)puVar13 + 0x2c);
      } while (uVar5 != uVar8);
    }
    param_2 = unaff_s12 * unaff_s15;
    param_4 = unaff_s12 * unaff_s14;
    param_6 = unaff_s12 * unaff_s11;
    in_s16 = fStack0000000000000020;
    in_s17 = fStack000000000000001c;
    in_s18 = fStack0000000000000018;
  }
  lVar6 = *(long *)(unaff_x20 + 0x70);
  if (lVar6 != 0) {
                    /* try { // try from 069764ac to 06a764b7 has its CatchHandler @ 06976754 */
    if (*(int *)(lVar6 + 0x18) < 1) {
      return 0;
    }
    fVar16 = 3.4028235e+38;
    iVar12 = 0;
    uStack00000000000000c4 = 0;
    uStack00000000000000c0 = 0;
    in_stack_000000a8 = 0;
    in_stack_000000a0 = 0;
    uStack00000000000000b8 = 0;
    uStack00000000000000bc = 0;
    in_stack_000000b0 = 0;
    do {
      if (*(int *)(lVar6 + 0x18) <= iVar12) {
        if (fVar16 == 3.4028235e+38) {
          return 0;
        }
        in_stack_00000008[1] = in_stack_000000a8;
        *in_stack_00000008 = in_stack_000000a0;
        in_stack_00000008[3] = CONCAT44(uStack00000000000000bc,uStack00000000000000b8);
        in_stack_00000008[2] = in_stack_000000b0;
        *(undefined8 *)((long)in_stack_00000008 + 0x24) = uStack00000000000000c4;
        *(ulong *)((long)in_stack_00000008 + 0x1c) =
             CONCAT44(uStack00000000000000c0,uStack00000000000000bc);
        return 1;
      }
      FUN_04e28000(&stack0x00000100,lVar6,iVar12,*(undefined8 *)puVar3);
      uStack0000000000000094 = *(undefined8 *)(unaff_x25 + 0x24);
      uVar15 = *(undefined8 *)(unaff_x25 + 0x1c);
      in_stack_00000078 = in_stack_00000108;
      in_stack_00000070 = in_stack_00000100;
      uStack0000000000000088 = (undefined4)in_stack_00000118;
      in_stack_00000080 = in_stack_00000110;
      uStack000000000000008c = (undefined4)uVar15;
      uStack0000000000000090 = (undefined4)((ulong)uVar15 >> 0x20);
      if (*(long *)(unaff_x20 + 0x50) == 0) break;
      lVar6 = *(long *)(*(long *)(unaff_x20 + 0x50) + 0xd0);
      uVar9 = in_stack_00000110;
      uVar7 = FUN_07d2fce4(&stack0x00000070,0);
      fVar18 = (float)uVar15;
      fVar17 = (float)uVar9;
      if (lVar6 == 0) break;
      uVar8 = FUN_049d96b4(lVar6,uVar7,*(undefined8 *)puVar2);
      if ((uVar8 & 1) == 0) {
        fVar19 = (float)FUN_07d2fd90(&stack0x00000070,0);
        if (*(long *)(unaff_x20 + 0x58) == 0) break;
        fVar18 = fVar18 - fStack0000000000000068;
        fVar17 = (float)FUN_07cadd74(fVar19 - fStack0000000000000060,fVar17 - fStack0000000000000064
                                     ,*(long *)(unaff_x20 + 0x58),0);
        if ((((-fStack000000000000006c <= fVar17) && (fVar17 <= fStack000000000000006c)) &&
            (fVar18 <= in_stack_00000010._4_4_)) &&
           ((-in_stack_00000010._4_4_ <= fVar18 &&
            (fVar17 = (float)FUN_07d2fdc0(&stack0x00000070,0), fVar17 < fVar16)))) {
          fVar16 = (float)FUN_07d2fdc0(&stack0x00000070,0);
          in_stack_000000a8 = in_stack_00000078;
          in_stack_000000a0 = in_stack_00000070;
          in_stack_000000b0 = in_stack_00000080;
          uStack00000000000000c4 = uStack0000000000000094;
          uStack00000000000000b8 = uStack0000000000000088;
          uStack00000000000000bc = uStack000000000000008c;
          uStack00000000000000c0 = uStack0000000000000090;
        }
      }
      lVar6 = *(long *)(unaff_x20 + 0x70);
      iVar12 = iVar12 + 1;
    } while (lVar6 != 0);
  }
LAB_06976640:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


