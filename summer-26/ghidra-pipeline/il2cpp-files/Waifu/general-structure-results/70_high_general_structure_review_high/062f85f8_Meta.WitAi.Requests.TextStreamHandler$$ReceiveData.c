/*
FUNCTION_NAME: Meta.WitAi.Requests.TextStreamHandler$$ReceiveData
ENTRY_POINT: 062f85f8
PROGRAM: Waifu-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2
*/


void Meta_WitAi_Requests_TextStreamHandler__ReceiveData(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  uint uVar18;
  undefined4 uVar19;
  uint uVar20;
  int iVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  float *pfVar30;
  ulong *puVar31;
  long lVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong uVar43;
  undefined1 unaff_w22;
  long lVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  ulong uVar51;
  float fVar52;
  undefined8 uVar53;
  float fVar54;
  ulong uVar55;
  int iVar56;
  int iVar57;
  ulong uVar58;
  int iVar59;
  int iVar60;
  int iVar61;
  int iVar62;
  int iVar63;
  float fVar64;
  float fVar65;
  float fStack000000000000000c;
  uint uStack0000000000000014;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  float fStack0000000000000138;
  float fStack000000000000013c;
  float in_stack_00000140;
  float fStack0000000000000144;
  float fStack0000000000000148;
  float fStack000000000000014c;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  
  FUN_0335b6c8(param_1,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083f99b8,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x21 + 0x6ff) = unaff_w22;
  in_stack_00000118 = 0;
  in_stack_00000110 = 0;
  in_stack_00000128 = 0;
  in_stack_00000120 = 0;
  in_stack_000000f8 = 0;
  in_stack_000000f0 = 0;
  in_stack_00000108 = 0;
  in_stack_00000100 = 0;
  DataMemoryBarrier(2,3);
  if (19999 < *(int *)(unaff_x19 + 0x18)) {
    FUN_0335b6c8(&DAT_083cdc60,1);
    uVar53 = FUN_03398a84();
    FUN_0682eb24(uVar53,0);
    uVar22 = FUN_0335b6c8(&DAT_0841a4a0,1);
                    /* WARNING: Subroutine does not return */
    FUN_033d1c20(uVar53,uVar22);
  }
  if (((unaff_x20 == 0) || (DataMemoryBarrier(2,3), *(int *)(unaff_x20 + 0x18) != 2)) ||
     (DataMemoryBarrier(2,3), 19999 < *(int *)(unaff_x20 + 0x18))) {
    FUN_0335b6c8(&DAT_083cdc60,1);
    uVar53 = FUN_03398a84();
    FUN_0682eb24(uVar53,0);
    uVar22 = FUN_0335b6c8(&DAT_0841a4a0,1);
                    /* WARNING: Subroutine does not return */
    FUN_033d1c20(uVar53,uVar22);
  }
  fVar14 = (float)FUN_062f9234();
  fVar15 = (float)FUN_062e3448();
  fVar16 = (float)FUN_062f6908();
  fVar17 = (float)FUN_062f9284();
  if (*(long *)(unaff_x19 + 0x140) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  FUN_062d0374(*(long *)(unaff_x19 + 0x140),0);
  FUN_062f92d4(&stack0x00000138);
  uVar10 = in_stack_00000170;
  uVar9 = in_stack_00000168;
  uVar8 = in_stack_00000160;
  uVar7 = in_stack_00000158;
  uVar22 = in_stack_00000150;
  fVar6 = fStack000000000000014c;
  fVar5 = fStack0000000000000148;
  fVar4 = in_stack_00000140;
  fVar3 = fStack000000000000013c;
  fVar54 = fStack0000000000000138;
  uVar53 = CONCAT44(fStack000000000000014c,fStack0000000000000148);
  uVar18 = FUN_062f9234();
  lVar44 = *(long *)(unaff_x19 + 0x130);
  if (lVar44 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  FUN_0425cdbc(lVar44,uVar18,0,
               *(undefined8 *)(*(long *)(*(long *)(DAT_083ea920 + 0x20) + 0xc0) + 0x88));
  *(uint *)(lVar44 + 0x20) = *(int *)(lVar44 + 0x20) + uVar18;
  if (0 < (int)uVar18) {
    uVar43 = 0;
    do {
      if (*(long *)(unaff_x20 + 0x130) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      if (*(long *)(unaff_x19 + 0x140) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      uVar19 = FUN_062d1154(*(long *)(unaff_x19 + 0x140),*(undefined8 *)(unaff_x20 + 0x140),
                            *(undefined4 *)
                             (*(long *)(*(long *)(unaff_x20 + 0x130) + 0x10) + uVar43 * 4),1,0);
      if (*(long *)(unaff_x19 + 0x130) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      iVar21 = (int)uVar43;
      uVar43 = uVar43 + 1;
      *(undefined4 *)
       (*(long *)(*(long *)(unaff_x19 + 0x130) + 0x10) + (long)((int)fVar14 + iVar21) * 4) = uVar19;
    } while (uVar18 != uVar43);
  }
  uVar20 = FUN_062e3448();
  uVar43 = FUN_062e3448();
  *(ulong *)(unaff_x20 + 0x178) = uVar43 & 0xffffffff | (ulong)uVar20 << 0x20;
  lVar44 = *(long *)(unaff_x19 + 0x38);
  if (lVar44 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  FUN_04262b00(lVar44,uVar20,0,
               *(undefined8 *)(*(long *)(*(long *)(DAT_083ea980 + 0x20) + 0xc0) + 0x88));
  *(uint *)(lVar44 + 0x20) = *(int *)(lVar44 + 0x20) + uVar20;
  lVar44 = *(long *)(unaff_x19 + 0x40);
  if (lVar44 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  FUN_042665cc(lVar44,uVar20,0,
               *(undefined8 *)(*(long *)(*(long *)(DAT_083eaa78 + 0x20) + 0xc0) + 0x88));
  *(uint *)(lVar44 + 0x20) = *(int *)(lVar44 + 0x20) + uVar20;
  lVar44 = *(long *)(unaff_x19 + 0x48);
  if (lVar44 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  FUN_042665cc(lVar44,uVar20,0,
               *(undefined8 *)(*(long *)(*(long *)(DAT_083eaa78 + 0x20) + 0xc0) + 0x88));
  *(uint *)(lVar44 + 0x20) = *(int *)(lVar44 + 0x20) + uVar20;
  lVar44 = *(long *)(unaff_x19 + 0x50);
  if (lVar44 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  FUN_042665cc(lVar44,uVar20,0,
               *(undefined8 *)(*(long *)(*(long *)(DAT_083eaa78 + 0x20) + 0xc0) + 0x88));
  *(uint *)(lVar44 + 0x20) = *(int *)(lVar44 + 0x20) + uVar20;
  lVar44 = *(long *)(unaff_x19 + 0x58);
  if (lVar44 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  FUN_04265874(lVar44,uVar20,0,
               *(undefined8 *)(*(long *)(*(long *)(DAT_083eaa18 + 0x20) + 0xc0) + 0x88));
  *(uint *)(lVar44 + 0x20) = *(int *)(lVar44 + 0x20) + uVar20;
  lVar44 = *(long *)(unaff_x19 + 0x60);
  if (lVar44 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  FUN_042637dc(lVar44,uVar20,0,
               *(undefined8 *)(*(long *)(*(long *)(DAT_083ea9d8 + 0x20) + 0xc0) + 0x88));
  *(uint *)(lVar44 + 0x20) = *(int *)(lVar44 + 0x20) + uVar20;
  lVar44 = *(long *)(unaff_x20 + 0x38);
  if (lVar44 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  lVar32 = *(long *)(unaff_x20 + 0x40);
  if (lVar32 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  lVar38 = *(long *)(unaff_x20 + 0x48);
  if (lVar38 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  lVar39 = *(long *)(unaff_x20 + 0x50);
  if (lVar39 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  lVar40 = *(long *)(unaff_x20 + 0x58);
  if (lVar40 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  lVar41 = *(long *)(unaff_x20 + 0x60);
  if (lVar41 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  lVar42 = *(long *)(unaff_x19 + 0x38);
  if (lVar42 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  if (*(long *)(unaff_x19 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  if (*(long *)(unaff_x19 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  if (*(long *)(unaff_x19 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  if (*(long *)(unaff_x19 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  if (*(long *)(unaff_x19 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  fStack000000000000000c = fVar17;
  uStack0000000000000014 = uVar18;
  if (*(long *)(unaff_x19 + 0x130) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  uVar1 = *(undefined8 *)(lVar44 + 0x10);
  uVar2 = *(undefined8 *)(lVar44 + 0x18);
  uVar23 = *(undefined8 *)(lVar32 + 0x10);
  uVar24 = *(undefined8 *)(lVar32 + 0x18);
  uVar33 = *(undefined8 *)(lVar38 + 0x10);
  uVar25 = *(undefined8 *)(lVar38 + 0x18);
  uVar34 = *(undefined8 *)(lVar39 + 0x10);
  uVar26 = *(undefined8 *)(lVar39 + 0x18);
  uVar35 = *(undefined8 *)(lVar40 + 0x10);
  uVar27 = *(undefined8 *)(lVar40 + 0x18);
  uVar36 = *(undefined8 *)(lVar41 + 0x10);
  uVar28 = *(undefined8 *)(lVar41 + 0x18);
  uVar37 = *(undefined8 *)(lVar42 + 0x10);
  uVar29 = *(undefined8 *)(lVar42 + 0x18);
  uVar19 = FUN_062e3448();
  in_stack_00000140 = fVar54;
  fStack0000000000000148 = fVar4;
  in_stack_00000158 = uVar22;
  in_stack_00000160 = uVar7;
  in_stack_00000168 = uVar8;
  in_stack_00000170 = uVar9;
  in_stack_00000178 = uVar10;
  fStack0000000000000138 = fVar15;
  fStack000000000000013c = fVar14;
  in_stack_00000150 = uVar53;
  in_stack_00000180 = uVar1;
  in_stack_00000188 = uVar2;
  in_stack_00000190 = uVar23;
  in_stack_00000198 = uVar24;
  in_stack_000001a0 = uVar33;
  in_stack_000001a8 = uVar25;
  in_stack_000001b0 = uVar34;
  in_stack_000001b8 = uVar26;
  in_stack_000001c0 = uVar35;
  in_stack_000001c8 = uVar27;
  in_stack_000001d0 = uVar36;
  in_stack_000001d8 = uVar28;
  in_stack_000001e0 = uVar37;
  in_stack_000001e8 = uVar29;
  FUN_040015cc(&stack0x00000138,uVar19,DAT_0840ed18);
  uVar18 = uStack0000000000000014;
  lVar44 = *(long *)(unaff_x19 + 0x138);
  if (lVar44 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  FUN_042673bc(lVar44,uStack0000000000000014,0,
               *(undefined8 *)(*(long *)(*(long *)(DAT_083eaad8 + 0x20) + 0xc0) + 0x88));
  *(uint *)(lVar44 + 0x20) = *(int *)(lVar44 + 0x20) + uVar18;
  lVar44 = *(long *)(unaff_x20 + 0x130);
  if (lVar44 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  lVar32 = *(long *)(unaff_x20 + 0x140);
  if (lVar32 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  lVar38 = *(long *)(lVar32 + 0x30);
  if (lVar38 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  lVar39 = *(long *)(lVar32 + 0x38);
  if (lVar39 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  lVar32 = *(long *)(lVar32 + 0x48);
  if (lVar32 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  in_stack_00000128 = *(undefined8 *)(unaff_x19 + 0xb4);
  in_stack_00000120 = *(undefined8 *)(unaff_x19 + 0xac);
  in_stack_00000118 = *(undefined8 *)(unaff_x19 + 0xa4);
  in_stack_00000110 = *(undefined8 *)(unaff_x19 + 0x9c);
  in_stack_00000108 = *(undefined8 *)(unaff_x19 + 0x94);
  in_stack_00000100 = *(undefined8 *)(unaff_x19 + 0x8c);
  in_stack_000000f8 = *(undefined8 *)(unaff_x19 + 0x84);
  in_stack_000000f0 = *(undefined8 *)(unaff_x19 + 0x7c);
  lVar40 = *(long *)(unaff_x19 + 0x138);
  if (lVar40 != 0) {
    in_stack_000001c0 = *(undefined8 *)(lVar40 + 0x10);
    in_stack_000001c8 = *(undefined8 *)(lVar40 + 0x18);
    fStack000000000000013c = 0.0;
    in_stack_00000140 = (float)*(undefined8 *)(lVar44 + 0x10);
    fStack0000000000000144 = (float)((ulong)*(undefined8 *)(lVar44 + 0x10) >> 0x20);
    fStack0000000000000148 = (float)*(undefined8 *)(lVar44 + 0x18);
    fStack000000000000014c = (float)((ulong)*(undefined8 *)(lVar44 + 0x18) >> 0x20);
    fStack0000000000000138 = fVar14;
    in_stack_00000150 = *(undefined8 *)(lVar38 + 0x10);
    in_stack_00000158 = *(undefined8 *)(lVar38 + 0x18);
    in_stack_00000160 = *(undefined8 *)(lVar39 + 0x10);
    in_stack_00000168 = *(undefined8 *)(lVar39 + 0x18);
    in_stack_00000170 = *(undefined8 *)(lVar32 + 0x10);
    in_stack_00000178 = *(undefined8 *)(lVar32 + 0x18);
    in_stack_00000180 = in_stack_000000f0;
    in_stack_00000188 = in_stack_000000f8;
    in_stack_00000190 = in_stack_00000100;
    in_stack_00000198 = in_stack_00000108;
    in_stack_000001a0 = in_stack_00000110;
    in_stack_000001a8 = in_stack_00000118;
    in_stack_000001b0 = in_stack_00000120;
    in_stack_000001b8 = in_stack_00000128;
    FUN_0400155c(&stack0x00000138,uVar18,DAT_0840ed10);
    iVar21 = FUN_062f6908();
    if (0 < iVar21) {
      lVar44 = *(long *)(unaff_x19 + 0x68);
      iVar21 = FUN_062f6908();
      if (lVar44 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      FUN_04268e10(lVar44,iVar21,0,
                   *(undefined8 *)(*(long *)(*(long *)(DAT_083eab80 + 0x20) + 0xc0) + 0x88));
      *(int *)(lVar44 + 0x20) = *(int *)(lVar44 + 0x20) + iVar21;
      lVar44 = *(long *)(unaff_x20 + 0x68);
      if (lVar44 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      lVar32 = *(long *)(unaff_x19 + 0x68);
      if (lVar32 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      uVar53 = *(undefined8 *)(lVar44 + 0x10);
      uVar2 = *(undefined8 *)(lVar44 + 0x18);
      uVar1 = *(undefined8 *)(lVar32 + 0x10);
      uVar23 = *(undefined8 *)(lVar32 + 0x18);
      uVar19 = FUN_062f6908();
      fStack0000000000000148 = (float)uVar53;
      fStack000000000000014c = (float)((ulong)uVar53 >> 0x20);
      fStack0000000000000138 = fVar16;
      fStack000000000000013c = fVar15;
      in_stack_00000140 = fVar15;
      fStack0000000000000144 = fVar15;
      in_stack_00000150 = uVar2;
      in_stack_00000158 = uVar1;
      in_stack_00000160 = uVar23;
      System_Runtime_CompilerServices_Unsafe__As<byte,_EasingFunction>
                (&stack0x00000138,uVar19,DAT_0840eca0);
    }
    iVar21 = FUN_062f9284();
    if (0 < iVar21) {
      lVar44 = *(long *)(unaff_x19 + 0x70);
      iVar21 = FUN_062f9284();
      if (lVar44 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      FUN_042680e0(lVar44,iVar21,0,
                   *(undefined8 *)(*(long *)(*(long *)(DAT_083eab20 + 0x20) + 0xc0) + 0x88));
      *(int *)(lVar44 + 0x20) = *(int *)(lVar44 + 0x20) + iVar21;
      lVar44 = *(long *)(unaff_x20 + 0x70);
      if (lVar44 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      lVar32 = *(long *)(unaff_x19 + 0x70);
      if (lVar32 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      uVar53 = *(undefined8 *)(lVar44 + 0x10);
      uVar2 = *(undefined8 *)(lVar44 + 0x18);
      uVar1 = *(undefined8 *)(lVar32 + 0x10);
      uVar23 = *(undefined8 *)(lVar32 + 0x18);
      uVar19 = FUN_062f9284();
      fStack0000000000000138 = fStack000000000000000c;
      fStack0000000000000144 = 0.0;
      fStack0000000000000148 = (float)uVar53;
      fStack000000000000014c = (float)((ulong)uVar53 >> 0x20);
      fStack000000000000013c = fVar15;
      in_stack_00000140 = fVar15;
      in_stack_00000150 = uVar2;
      in_stack_00000158 = uVar1;
      in_stack_00000160 = uVar23;
      System_Runtime_CompilerServices_Unsafe__As<byte,_BlittableCollider>
                (&stack0x00000138,uVar19,DAT_0840ec98);
    }
    pfVar30 = *(float **)(unaff_x20 + 0x148);
    fVar14 = *pfVar30;
    fVar16 = pfVar30[1];
    fVar45 = pfVar30[2];
    fVar46 = pfVar30[3];
    fVar49 = pfVar30[4];
    fVar50 = pfVar30[5];
    puVar31 = *(ulong **)(unaff_x19 + 0x148);
    fVar52 = (float)((ulong)uVar7 >> 0x20);
    fVar64 = (float)uVar22;
    fVar65 = (float)uVar8;
    fVar47 = (float)uVar9 + fVar54 * fVar14 + fVar5 * fVar16 + (float)uVar7 * fVar45;
    fVar17 = (float)((ulong)uVar9 >> 0x20);
    fVar48 = fVar17 + fVar3 * fVar14 + fVar6 * fVar16 + fVar52 * fVar45;
    fVar15 = (float)uVar10;
    fVar16 = fVar15 + fVar14 * fVar4 + fVar16 * fVar64 + fVar45 * fVar65;
    fVar14 = (float)uVar9 + fVar54 * fVar46 + fVar5 * fVar49 + (float)uVar7 * fVar50;
    fVar17 = fVar17 + fVar3 * fVar46 + fVar6 * fVar49 + fVar52 * fVar50;
    fVar15 = fVar15 + fVar46 * fVar4 + fVar49 * fVar64 + fVar50 * fVar65;
    if (puVar31 == (ulong *)0x0) {
      in_stack_000000e0 = 0;
      in_stack_000000e8 = 0;
      fStack0000000000000138 = fVar47;
      fStack000000000000013c = fVar48;
      in_stack_00000140 = fVar16;
      fStack0000000000000144 = fVar14;
      fStack0000000000000148 = fVar17;
      fStack000000000000014c = fVar15;
      FUN_04ed2950(&stack0x000000e0,&stack0x00000138,4,DAT_083f9990);
      *(undefined8 *)(unaff_x19 + 0x150) = in_stack_000000e8;
      *(undefined8 *)(unaff_x19 + 0x148) = in_stack_000000e0;
    }
    else {
      uVar43 = *puVar31;
      uVar51 = *(ulong *)((long)puVar31 + 0xc);
      uVar55 = CONCAT44(fVar48,fVar47) & 0x7fffffff7fffffff;
      uVar58 = CONCAT44(fVar17,fVar14) & 0x7fffffff7fffffff;
      iVar21 = -(uint)(0x7f800000 < (uint)uVar55);
      iVar56 = -(uint)(0x7f800000 < (uint)(uVar55 >> 0x20));
      iVar57 = -(uint)(0x7f800000 < (uint)uVar58);
      iVar59 = -(uint)(0x7f800000 < (uint)(uVar58 >> 0x20));
      iVar60 = -(uint)((float)uVar43 < fVar47);
      iVar62 = -(uint)((float)(uVar43 >> 0x20) < fVar48);
      iVar61 = -(uint)(fVar14 < (float)uVar51);
      iVar63 = -(uint)(fVar17 < (float)(uVar51 >> 0x20));
      fVar54 = *(float *)(puVar31 + 1);
      if (fVar16 <= *(float *)(puVar31 + 1) && (uint)ABS(fVar16) < 0x7f800001) {
        fVar54 = fVar16;
      }
      fVar16 = *(float *)((long)puVar31 + 0x14);
      if (*(float *)((long)puVar31 + 0x14) <= fVar15 && (uint)ABS(fVar15) < 0x7f800001) {
        fVar16 = fVar15;
      }
      *puVar31 = CONCAT44(fVar48,fVar47) ^
                 (CONCAT44(fVar48,fVar47) ^ uVar43) &
                 CONCAT17((byte)((uint)iVar56 >> 0x18) | (byte)((uint)iVar62 >> 0x18),
                          CONCAT16((byte)((uint)iVar56 >> 0x10) | (byte)((uint)iVar62 >> 0x10),
                                   CONCAT15((byte)((uint)iVar56 >> 8) | (byte)((uint)iVar62 >> 8),
                                            CONCAT14((byte)iVar56 | (byte)iVar62,
                                                     CONCAT13((byte)((uint)iVar21 >> 0x18) |
                                                              (byte)((uint)iVar60 >> 0x18),
                                                              CONCAT12((byte)((uint)iVar21 >> 0x10)
                                                                       | (byte)((uint)iVar60 >> 0x10
                                                                               ),
                                                                       CONCAT11((byte)((uint)iVar21
                                                                                      >> 8) |
                                                                                (byte)((uint)iVar60
                                                                                      >> 8),
                                                                                (byte)iVar21 |
                                                                                (byte)iVar60)))))));
      *(float *)(puVar31 + 1) = fVar54;
      *(ulong *)((long)puVar31 + 0xc) =
           CONCAT44(fVar17,fVar14) ^
           (CONCAT44(fVar17,fVar14) ^ uVar51) &
           CONCAT17((byte)((uint)iVar59 >> 0x18) | (byte)((uint)iVar63 >> 0x18),
                    CONCAT16((byte)((uint)iVar59 >> 0x10) | (byte)((uint)iVar63 >> 0x10),
                             CONCAT15((byte)((uint)iVar59 >> 8) | (byte)((uint)iVar63 >> 8),
                                      CONCAT14((byte)iVar59 | (byte)iVar63,
                                               CONCAT13((byte)((uint)iVar57 >> 0x18) |
                                                        (byte)((uint)iVar61 >> 0x18),
                                                        CONCAT12((byte)((uint)iVar57 >> 0x10) |
                                                                 (byte)((uint)iVar61 >> 0x10),
                                                                 CONCAT11((byte)((uint)iVar57 >> 8)
                                                                          | (byte)((uint)iVar61 >> 8
                                                                                  ),
                                                                          (byte)iVar57 |
                                                                          (byte)iVar61)))))));
      *(float *)((long)puVar31 + 0x14) = fVar16;
    }
    fVar14 = *(float *)(unaff_x20 + 0x11c);
    fVar15 = *(float *)(unaff_x20 + 0x120);
    fVar16 = *(float *)(unaff_x20 + 0x124);
    if (DAT_086d90cb == '\0') {
      FUN_0335b6c8(&DAT_083ce8b0,1);
      DataMemoryBarrier(2,3);
      DAT_086d90cb = '\x01';
    }
    if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
      FUN_033b9870();
      fVar17 = *(float *)(unaff_x19 + 0x11c);
      uVar53 = *(undefined8 *)(unaff_x19 + 0x120);
      if (DAT_086d90cb == '\0') {
        FUN_0335b6c8(&DAT_083ce8b0,1);
        DataMemoryBarrier(2,3);
        DAT_086d90cb = '\x01';
      }
    }
    else {
      fVar17 = *(float *)(unaff_x19 + 0x11c);
      uVar53 = *(undefined8 *)(unaff_x19 + 0x120);
    }
    if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
      FUN_033b9870();
    }
    fVar54 = (float)((ulong)uVar53 >> 0x20);
    fVar15 = SQRT(fVar16 * fVar16 + fVar14 * fVar14 + fVar15 * fVar15) /
             SQRT(fVar54 * fVar54 + fVar17 * fVar17 + (float)uVar53 * (float)uVar53);
    fVar14 = **(float **)(unaff_x19 + 0x158);
    fVar16 = fVar15 * **(float **)(unaff_x20 + 0x158);
    bVar11 = false;
    bVar12 = false;
    bVar13 = false;
    if ((uint)ABS(fVar16) < 0x7f800001) {
      bVar11 = false;
      bVar12 = false;
      bVar13 = true;
      if (!NAN(fVar14) && !NAN(fVar16)) {
        bVar11 = fVar14 < fVar16;
        bVar12 = fVar14 == fVar16;
        bVar13 = false;
      }
    }
    if (bVar12 || bVar11 != bVar13) {
      fVar14 = fVar16;
    }
    **(float **)(unaff_x19 + 0x158) = fVar14;
    fVar14 = **(float **)(unaff_x19 + 0x168);
    fVar15 = fVar15 * **(float **)(unaff_x20 + 0x168);
    bVar11 = false;
    bVar12 = false;
    bVar13 = false;
    if ((uint)ABS(fVar15) < 0x7f800001) {
      bVar11 = false;
      bVar12 = false;
      bVar13 = true;
      if (!NAN(fVar14) && !NAN(fVar15)) {
        bVar11 = fVar14 < fVar15;
        bVar12 = fVar14 == fVar15;
        bVar13 = false;
      }
    }
    if (bVar12 || bVar11 != bVar13) {
      fVar14 = fVar15;
    }
    **(float **)(unaff_x19 + 0x168) = fVar14;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


