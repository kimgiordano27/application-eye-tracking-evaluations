/*
FUNCTION_NAME: OVRPlugin.OVRP_1_68_0$$ovrp_GetRenderModelProperties
ENTRY_POINT: 06976298
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
OVRPlugin_OVRP_1_68_0__ovrp_GetRenderModelProperties
          (ulong param_1,ulong param_2,ulong param_3,float param_4,undefined1 param_5 [16],
          undefined1 param_6 [16],undefined4 param_7,undefined8 param_8)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  int unaff_w19;
  long unaff_x20;
  int iVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  long unaff_x24;
  long unaff_x25;
  int unaff_w26;
  int unaff_w27;
  long *unaff_x29;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float unaff_s8;
  float fVar20;
  float unaff_s11;
  float unaff_s12;
  float fVar21;
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
    fVar15 = (float)FUN_07c8b548(param_1,param_2,param_3,param_4,uStack000000000000002c,
                                 uStack0000000000000028,param_7,param_8);
    lVar13 = *(long *)(unaff_x20 + unaff_x24);
                    /* try { // try from 069762b4 to 06a762cf has its CatchHandler @ 069767cc */
    fVar20 = fStack0000000000000064 + (float)param_2;
    fVar21 = fStack0000000000000068 + (float)param_3;
    uVar4 = FUN_07c9da10(in_stack_00000050,0);
                    /* try { // try from 069762d0 to 06a76417 has its CatchHandler @ 06975c1c */
    lVar8 = *(long *)PTR_DAT_08486c50;
    if (in_stack_00000058._4_4_ < fStack000000000000006c) {
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_03ae8be4(lVar8);
      }
      uVar5 = FUN_07d2b360(fStack0000000000000060 + fVar15,fVar20,fVar21,fStack000000000000006c,
                           uStack0000000000000048,uStack0000000000000044,uStack0000000000000040,
                           uStack000000000000004c,lVar13,uVar4,1,0);
    }
    else {
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_03ae8be4(lVar8);
      }
      uVar5 = FUN_07d2a554(fStack0000000000000060 + fVar15,fVar20,fVar21,uStack0000000000000048,
                           uStack0000000000000044,uStack0000000000000040,uStack000000000000004c,
                           lVar13,uVar4,1,0);
    }
    if (0 < (int)uVar5) {
      if (lVar13 == 0) goto LAB_06976640;
      uVar14 = 0;
      puVar12 = (undefined8 *)(lVar13 + 0x20);
      do {
        if (*(uint *)(lVar13 + 0x18) <= uVar14) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c8();
        }
        lVar8 = *(long *)(unaff_x20 + 0x70);
        if (lVar8 == 0) goto LAB_06976640;
        in_stack_000000d8 = puVar12[1];
        in_stack_000000d0 = *puVar12;
        in_stack_000000e0 = puVar12[2];
        uStack00000000000000f4 = *(undefined8 *)((long)puVar12 + 0x24);
        uVar16 = *(undefined8 *)((long)puVar12 + 0x1c);
        lVar9 = *(long *)(lVar8 + 0x10);
        lVar10 = *unaff_x29;
        uStack00000000000000e8 = (undefined4)puVar12[3];
        uStack00000000000000ec = (undefined4)uVar16;
        uStack00000000000000f0 = (undefined4)((ulong)uVar16 >> 0x20);
        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        if (lVar9 == 0) goto LAB_06976640;
        uVar1 = *(uint *)(lVar8 + 0x18);
        if (uVar1 < *(uint *)(lVar9 + 0x18)) {
          lVar9 = lVar9 + (long)(int)uVar1 * (long)unaff_w26;
          *(uint *)(lVar8 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar9 + 0x28) = in_stack_000000d8;
          *(undefined8 *)(lVar9 + 0x20) = in_stack_000000d0;
          *(ulong *)(lVar9 + 0x38) = CONCAT44(uStack00000000000000ec,uStack00000000000000e8);
          *(undefined8 *)(lVar9 + 0x30) = in_stack_000000e0;
          *(undefined8 *)(lVar9 + 0x44) = uStack00000000000000f4;
          *(undefined8 *)(lVar9 + 0x3c) = uVar16;
        }
        else {
          in_stack_00000118 = CONCAT44(uStack00000000000000ec,uStack00000000000000e8);
          uVar7 = *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70);
          *(undefined8 *)(unaff_x25 + 0x24) = uStack00000000000000f4;
          *(undefined8 *)(unaff_x25 + 0x1c) = uVar16;
          in_stack_00000100 = in_stack_000000d0;
          in_stack_00000108 = in_stack_000000d8;
          in_stack_00000110 = in_stack_000000e0;
          FUN_04e28380(lVar8,&stack0x00000100,uVar7);
        }
        uVar14 = uVar14 + 1;
        puVar12 = (undefined8 *)((long)puVar12 + 0x2c);
      } while (uVar5 != uVar14);
    }
    puVar3 = PTR_DAT_084b7460;
    puVar2 = PTR_DAT_08497e38;
    unaff_w27 = unaff_w27 + 1;
    fVar17 = fStack0000000000000020 * unaff_s15;
    fVar20 = fStack000000000000001c * unaff_s15;
    fVar18 = fStack000000000000001c * unaff_s14;
    fVar15 = fStack0000000000000018 * unaff_s15;
    fVar21 = fStack0000000000000020 * unaff_s14;
    fVar19 = fStack0000000000000018 * unaff_s11;
    unaff_s15 = (fStack0000000000000018 * unaff_s14 +
                unaff_s12 * unaff_s15 + fStack0000000000000020 * unaff_s8) -
                fStack000000000000001c * unaff_s11;
    unaff_s14 = (fStack0000000000000020 * unaff_s11 +
                unaff_s12 * unaff_s14 + fStack000000000000001c * unaff_s8) - fVar15;
    unaff_s11 = (fVar20 + unaff_s12 * unaff_s11 + fStack0000000000000018 * unaff_s8) - fVar21;
    unaff_s8 = ((unaff_s12 * unaff_s8 - fVar17) - fVar18) - fVar19;
    if (unaff_w27 == unaff_w19) break;
    param_8 = 0;
    param_1 = (ulong)(uint)((fStack0000000000000038 * unaff_s11 +
                            fStack0000000000000030 * unaff_s15 + fStack000000000000003c * unaff_s8)
                           - fStack0000000000000034 * unaff_s14);
    param_2 = (ulong)(uint)((fStack0000000000000034 * unaff_s15 +
                            fStack0000000000000030 * unaff_s14 + fStack0000000000000038 * unaff_s8)
                           - fStack000000000000003c * unaff_s11);
    param_3 = (ulong)(uint)((fStack000000000000003c * unaff_s14 +
                            fStack0000000000000030 * unaff_s11 + fStack0000000000000034 * unaff_s8)
                           - fStack0000000000000038 * unaff_s15);
    param_4 = ((fStack0000000000000030 * unaff_s8 - fStack000000000000003c * unaff_s15) -
              fStack0000000000000038 * unaff_s14) - fStack0000000000000034 * unaff_s11;
    param_7 = uStack0000000000000024;
  }
  lVar8 = *(long *)(unaff_x20 + 0x70);
  if (lVar8 != 0) {
    if (*(int *)(lVar8 + 0x18) < 1) {
      return 0;
    }
    fVar15 = 3.4028235e+38;
    iVar11 = 0;
    uStack00000000000000c4 = 0;
    uStack00000000000000c0 = 0;
    in_stack_000000a8 = 0;
    in_stack_000000a0 = 0;
    uStack00000000000000b8 = 0;
    uStack00000000000000bc = 0;
    in_stack_000000b0 = 0;
    do {
      if (*(int *)(lVar8 + 0x18) <= iVar11) {
        if (fVar15 == 3.4028235e+38) {
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
      FUN_04e28000(&stack0x00000100,lVar8,iVar11,*(undefined8 *)puVar3);
      uStack0000000000000094 = *(undefined8 *)(unaff_x25 + 0x24);
      uVar16 = *(undefined8 *)(unaff_x25 + 0x1c);
      in_stack_00000078 = in_stack_00000108;
      in_stack_00000070 = in_stack_00000100;
      uStack0000000000000088 = (undefined4)in_stack_00000118;
      in_stack_00000080 = in_stack_00000110;
      uStack000000000000008c = (undefined4)uVar16;
      uStack0000000000000090 = (undefined4)((ulong)uVar16 >> 0x20);
      if (*(long *)(unaff_x20 + 0x50) == 0) break;
      lVar8 = *(long *)(*(long *)(unaff_x20 + 0x50) + 0xd0);
      uVar7 = in_stack_00000110;
      uVar6 = FUN_07d2fce4(&stack0x00000070,0);
      fVar21 = (float)uVar16;
      fVar20 = (float)uVar7;
      if (lVar8 == 0) break;
      uVar14 = FUN_049d96b4(lVar8,uVar6,*(undefined8 *)puVar2);
      if ((uVar14 & 1) == 0) {
        fVar17 = (float)FUN_07d2fd90(&stack0x00000070,0);
        if (*(long *)(unaff_x20 + 0x58) == 0) break;
        fVar21 = fVar21 - fStack0000000000000068;
        fVar20 = (float)FUN_07cadd74(fVar17 - fStack0000000000000060,fVar20 - fStack0000000000000064
                                     ,*(long *)(unaff_x20 + 0x58),0);
        if ((((-fStack000000000000006c <= fVar20) && (fVar20 <= fStack000000000000006c)) &&
            (fVar21 <= in_stack_00000010._4_4_)) &&
           ((-in_stack_00000010._4_4_ <= fVar21 &&
            (fVar20 = (float)FUN_07d2fdc0(&stack0x00000070,0), fVar20 < fVar15)))) {
          fVar15 = (float)FUN_07d2fdc0(&stack0x00000070,0);
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
      iVar11 = iVar11 + 1;
    } while (lVar8 != 0);
  }
LAB_06976640:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


