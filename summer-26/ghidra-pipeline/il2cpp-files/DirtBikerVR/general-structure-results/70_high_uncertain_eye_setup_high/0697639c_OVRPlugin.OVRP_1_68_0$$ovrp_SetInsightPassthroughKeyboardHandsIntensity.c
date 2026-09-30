/*
FUNCTION_NAME: OVRPlugin.OVRP_1_68_0$$ovrp_SetInsightPassthroughKeyboardHandsIntensity
ENTRY_POINT: 0697639c
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
OVRPlugin_OVRP_1_68_0__ovrp_SetInsightPassthroughKeyboardHandsIntensity
          (undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  int in_w9;
  long lVar9;
  int unaff_w19;
  long unaff_x20;
  int iVar10;
  undefined8 *unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  long unaff_x25;
  int unaff_w26;
  int unaff_w27;
  ulong unaff_x28;
  long *unaff_x29;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float unaff_s8;
  float unaff_s11;
  float unaff_s12;
  float unaff_s14;
  float unaff_s15;
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
  undefined8 uStack00000000000000d0;
  undefined8 uStack00000000000000d8;
  undefined8 uStack00000000000000e0;
  undefined4 uStack00000000000000e8;
  undefined4 uStack00000000000000ec;
  undefined4 uStack00000000000000f0;
  undefined8 uStack00000000000000f4;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  
  uStack00000000000000f4 = param_3._8_8_;
  uVar11 = param_3._0_8_;
  uVar7 = param_2._8_8_;
  uStack00000000000000e0 = param_2._0_8_;
  uStack00000000000000d8 = param_1._8_8_;
  uStack00000000000000d0 = param_1._0_8_;
  while( true ) {
    lVar8 = *(long *)(param_4 + 0x10);
    lVar9 = *unaff_x29;
    uStack00000000000000e8 = (undefined4)uVar7;
    uStack00000000000000ec = (undefined4)uVar11;
    uStack00000000000000f0 = (undefined4)((ulong)uVar11 >> 0x20);
    *(int *)(param_4 + 0x1c) = in_w9 + 1;
    if (lVar8 == 0) break;
    uVar4 = *(uint *)(param_4 + 0x18);
    if (uVar4 < *(uint *)(lVar8 + 0x18)) {
      lVar8 = lVar8 + (long)(int)uVar4 * (long)unaff_w26;
      *(uint *)(param_4 + 0x18) = uVar4 + 1;
      *(undefined8 *)(lVar8 + 0x28) = uStack00000000000000d8;
      *(undefined8 *)(lVar8 + 0x20) = uStack00000000000000d0;
      *(ulong *)(lVar8 + 0x38) = CONCAT44(uStack00000000000000ec,uStack00000000000000e8);
      *(undefined8 *)(lVar8 + 0x30) = uStack00000000000000e0;
      *(undefined8 *)(lVar8 + 0x44) = uStack00000000000000f4;
      *(undefined8 *)(lVar8 + 0x3c) = uVar11;
    }
    else {
      in_stack_00000118 = CONCAT44(uStack00000000000000ec,uStack00000000000000e8);
      uVar7 = *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70);
      *(undefined8 *)(unaff_x25 + 0x24) = uStack00000000000000f4;
      *(undefined8 *)(unaff_x25 + 0x1c) = uVar11;
      in_stack_00000100 = uStack00000000000000d0;
      in_stack_00000108 = uStack00000000000000d8;
      in_stack_00000110 = uStack00000000000000e0;
      FUN_04e28380(param_4,&stack0x00000100,uVar7);
    }
    unaff_x23 = unaff_x23 + 1;
    unaff_x21 = (undefined8 *)((long)unaff_x21 + 0x2c);
                    /* try { // try from 06976418 to 06a7643f has its CatchHandler @ 0697678c */
    if (unaff_x28 == unaff_x23) {
      do {
        puVar2 = PTR_DAT_084b7460;
        puVar1 = PTR_DAT_08497e38;
        unaff_w27 = unaff_w27 + 1;
        fVar15 = fStack0000000000000020 * unaff_s15;
        fVar13 = fStack000000000000001c * unaff_s15;
        fVar16 = fStack000000000000001c * unaff_s14;
        fVar12 = fStack0000000000000018 * unaff_s15;
        fVar14 = fStack0000000000000020 * unaff_s14;
        fVar17 = fStack0000000000000018 * unaff_s11;
        unaff_s15 = (fStack0000000000000018 * unaff_s14 +
                    unaff_s12 * unaff_s15 + fStack0000000000000020 * unaff_s8) -
                    fStack000000000000001c * unaff_s11;
        unaff_s14 = (fStack0000000000000020 * unaff_s11 +
                    unaff_s12 * unaff_s14 + fStack000000000000001c * unaff_s8) - fVar12;
        unaff_s11 = (fVar13 + unaff_s12 * unaff_s11 + fStack0000000000000018 * unaff_s8) - fVar14;
        unaff_s8 = ((unaff_s12 * unaff_s8 - fVar15) - fVar16) - fVar17;
        if (unaff_w27 == unaff_w19) {
          lVar8 = *(long *)(unaff_x20 + 0x70);
          if (lVar8 == 0) goto LAB_06976640;
          if (*(int *)(lVar8 + 0x18) < 1) goto LAB_0697660c;
          fVar12 = 3.4028235e+38;
          iVar10 = 0;
          uStack00000000000000c4 = 0;
          uStack00000000000000c0 = 0;
          in_stack_000000a8 = 0;
          in_stack_000000a0 = 0;
          uStack00000000000000b8 = 0;
          uStack00000000000000bc = 0;
          in_stack_000000b0 = 0;
          goto LAB_069764ec;
        }
        fVar13 = (fStack0000000000000034 * unaff_s15 +
                 fStack0000000000000030 * unaff_s14 + fStack0000000000000038 * unaff_s8) -
                 fStack000000000000003c * unaff_s11;
        fVar14 = (fStack000000000000003c * unaff_s14 +
                 fStack0000000000000030 * unaff_s11 + fStack0000000000000034 * unaff_s8) -
                 fStack0000000000000038 * unaff_s15;
        fVar12 = (float)FUN_07c8b548((fStack0000000000000038 * unaff_s11 +
                                     fStack0000000000000030 * unaff_s15 +
                                     fStack000000000000003c * unaff_s8) -
                                     fStack0000000000000034 * unaff_s14,fVar13,fVar14,
                                     ((fStack0000000000000030 * unaff_s8 -
                                      fStack000000000000003c * unaff_s15) -
                                     fStack0000000000000038 * unaff_s14) -
                                     fStack0000000000000034 * unaff_s11,uStack000000000000002c,
                                     uStack0000000000000028,uStack0000000000000024,0);
        unaff_x22 = *(long *)(unaff_x20 + unaff_x24);
        uVar3 = FUN_07c9da10(in_stack_00000050,0);
        lVar8 = *(long *)PTR_DAT_08486c50;
        if (in_stack_00000058._4_4_ < fStack000000000000006c) {
          if (*(int *)(lVar8 + 0xe4) == 0) {
            thunk_FUN_03ae8be4(lVar8);
          }
          uVar4 = FUN_07d2b360(fStack0000000000000060 + fVar12,fStack0000000000000064 + fVar13,
                               fStack0000000000000068 + fVar14,fStack000000000000006c,
                               uStack0000000000000048,uStack0000000000000044,uStack0000000000000040,
                               uStack000000000000004c,unaff_x22,uVar3,1,0);
        }
        else {
          if (*(int *)(lVar8 + 0xe4) == 0) {
            thunk_FUN_03ae8be4(lVar8);
          }
          uVar4 = FUN_07d2a554(fStack0000000000000060 + fVar12,fStack0000000000000064 + fVar13,
                               fStack0000000000000068 + fVar14,uStack0000000000000048,
                               uStack0000000000000044,uStack0000000000000040,uStack000000000000004c,
                               unaff_x22,uVar3,1,0);
        }
      } while ((int)uVar4 < 1);
      if (unaff_x22 == 0) break;
      unaff_x23 = 0;
      unaff_x28 = (ulong)uVar4;
      unaff_x21 = (undefined8 *)(unaff_x22 + 0x20);
    }
    if (*(uint *)(unaff_x22 + 0x18) <= unaff_x23) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c8();
    }
    param_4 = *(long *)(unaff_x20 + 0x70);
    if (param_4 == 0) break;
    in_w9 = *(int *)(param_4 + 0x1c);
    uStack00000000000000d8 = unaff_x21[1];
    uStack00000000000000d0 = *unaff_x21;
    uVar7 = unaff_x21[3];
    uStack00000000000000e0 = unaff_x21[2];
    uStack00000000000000f4 = *(undefined8 *)((long)unaff_x21 + 0x24);
    uVar11 = *(undefined8 *)((long)unaff_x21 + 0x1c);
  }
  goto LAB_06976640;
  while( true ) {
    lVar8 = *(long *)(*(long *)(unaff_x20 + 0x50) + 0xd0);
    uVar11 = in_stack_00000110;
    uVar5 = FUN_07d2fce4(&stack0x00000070,0);
    fVar14 = (float)uVar7;
    fVar13 = (float)uVar11;
    if (lVar8 == 0) break;
    uVar6 = FUN_049d96b4(lVar8,uVar5,*(undefined8 *)puVar1);
    if ((uVar6 & 1) == 0) {
      fVar15 = (float)FUN_07d2fd90(&stack0x00000070,0);
      if (*(long *)(unaff_x20 + 0x58) == 0) break;
      fVar14 = fVar14 - fStack0000000000000068;
      fVar13 = (float)FUN_07cadd74(fVar15 - fStack0000000000000060,fVar13 - fStack0000000000000064,
                                   *(long *)(unaff_x20 + 0x58),0);
      if ((((-fStack000000000000006c <= fVar13) && (fVar13 <= fStack000000000000006c)) &&
          (fVar14 <= in_stack_00000010._4_4_)) &&
         ((-in_stack_00000010._4_4_ <= fVar14 &&
          (fVar13 = (float)FUN_07d2fdc0(&stack0x00000070,0), fVar13 < fVar12)))) {
        fVar12 = (float)FUN_07d2fdc0(&stack0x00000070,0);
        in_stack_000000a8 = in_stack_00000078;
        in_stack_000000a0 = in_stack_00000070;
        in_stack_000000b0 = in_stack_00000080;
        uStack00000000000000c4 = uStack0000000000000094;
        uStack00000000000000b8 = uStack0000000000000088;
        uStack00000000000000bc = uStack000000000000008c;
        uStack00000000000000c0 = uStack0000000000000090;
      }
    }
    lVar8 = *(long *)(unaff_x20 + 0x70);
    iVar10 = iVar10 + 1;
    if (lVar8 == 0) break;
LAB_069764ec:
    if (*(int *)(lVar8 + 0x18) <= iVar10) {
      if (fVar12 == 3.4028235e+38) {
LAB_0697660c:
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
        in_stack_00000008[1] = in_stack_000000a8;
        *in_stack_00000008 = in_stack_000000a0;
        in_stack_00000008[3] = CONCAT44(uStack00000000000000bc,uStack00000000000000b8);
        in_stack_00000008[2] = in_stack_000000b0;
        *(undefined8 *)((long)in_stack_00000008 + 0x24) = uStack00000000000000c4;
        *(ulong *)((long)in_stack_00000008 + 0x1c) =
             CONCAT44(uStack00000000000000c0,uStack00000000000000bc);
      }
      return uVar7;
    }
    FUN_04e28000(&stack0x00000100,lVar8,iVar10,*(undefined8 *)puVar2);
    uStack0000000000000094 = *(undefined8 *)(unaff_x25 + 0x24);
    uVar7 = *(undefined8 *)(unaff_x25 + 0x1c);
    in_stack_00000078 = in_stack_00000108;
    in_stack_00000070 = in_stack_00000100;
    uStack0000000000000088 = (undefined4)in_stack_00000118;
    in_stack_00000080 = in_stack_00000110;
    uStack000000000000008c = (undefined4)uVar7;
    uStack0000000000000090 = (undefined4)((ulong)uVar7 >> 0x20);
    if (*(long *)(unaff_x20 + 0x50) == 0) break;
  }
LAB_06976640:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


