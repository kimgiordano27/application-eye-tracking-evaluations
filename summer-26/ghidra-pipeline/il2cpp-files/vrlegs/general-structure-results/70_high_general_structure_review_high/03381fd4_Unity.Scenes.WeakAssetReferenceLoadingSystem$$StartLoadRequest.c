/*
FUNCTION_NAME: Unity.Scenes.WeakAssetReferenceLoadingSystem$$StartLoadRequest
ENTRY_POINT: 03381fd4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_16;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_Scenes_WeakAssetReferenceLoadingSystem__StartLoadRequest
               (long param_1,undefined1 param_2 [16],undefined1 param_3 [16],undefined1 param_4 [16]
               ,undefined1 param_5 [16])

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined4 *puVar15;
  long unaff_x19;
  long *unaff_x21;
  int unaff_w22;
  long *unaff_x23;
  long unaff_x24;
  long unaff_x25;
  float fVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined4 unaff_s8;
  ulong unaff_d9;
  ulong unaff_d10;
  ulong unaff_d11;
  ulong unaff_d12;
  ulong unaff_d13;
  ulong unaff_d14;
  float fVar25;
  ulong unaff_d15;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 uStack00000000000000b0;
  undefined8 uStack00000000000000b8;
  undefined8 uStack00000000000000c0;
  undefined8 uStack00000000000000c8;
  undefined8 uStack00000000000000d0;
  undefined4 uStack00000000000000d8;
  undefined4 uStack00000000000000dc;
  undefined4 uStack00000000000000e0;
  undefined8 uStack00000000000000e4;
  undefined4 uStack00000000000000ec;
  undefined8 uStack00000000000000f0;
  undefined8 uStack00000000000000f8;
  undefined8 uStack0000000000000100;
  undefined8 uStack0000000000000108;
  undefined8 uStack0000000000000110;
  undefined4 uStack0000000000000118;
  undefined4 uStack000000000000011c;
  undefined4 uStack0000000000000120;
  undefined8 uStack0000000000000124;
  undefined4 uStack000000000000012c;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  undefined8 in_stack_00000250;
  undefined8 in_stack_00000258;
  undefined8 in_stack_00000260;
  undefined8 in_stack_00000268;
  undefined8 in_stack_00000270;
  undefined8 in_stack_00000278;
  undefined4 in_stack_0000028c;
  long *in_stack_00000290;
  int in_stack_00000298;
  uint in_stack_0000029c;
  float in_stack_000002a0;
  uint in_stack_000002a4;
  float in_stack_000002a8;
  uint in_stack_000002ac;
  uint in_stack_000002b0;
  undefined4 in_stack_000002b4;
  uint in_stack_000002b8;
  undefined8 in_stack_000002c0;
  byte in_stack_000002c8;
  uint in_stack_000002cc;
  int in_stack_000002d0;
  int in_stack_000002ec;
  
  uVar23 = param_5._8_8_;
  uVar10 = param_5._0_8_;
  uVar24 = param_4._8_8_;
  uVar22 = param_4._0_8_;
  uVar21 = param_3._8_8_;
  uVar20 = param_3._0_8_;
  uVar19 = param_2._8_8_;
  uVar18 = param_2._0_8_;
code_r0x03381fd4:
  puVar15 = (undefined4 *)(param_1 + 0xfc);
LAB_03382014:
  *(undefined8 *)(unaff_x19 + 0x34) = uVar19;
  *(undefined8 *)(unaff_x19 + 0x2c) = uVar18;
  uVar18 = in_stack_00000250;
  uVar19 = in_stack_00000258;
  uVar3 = in_stack_00000260;
  uVar4 = in_stack_00000268;
  uVar5 = in_stack_00000270;
  uVar7 = *puVar15;
  do {
    uStack00000000000000ec = uVar7;
    uStack0000000000000110 = uVar5;
    uStack0000000000000108 = uVar4;
    uStack0000000000000100 = uVar3;
    uStack00000000000000f8 = uVar19;
    uStack00000000000000f0 = uVar18;
    uStack00000000000000d0 = uVar20;
    uStack00000000000000c8 = uVar24;
    uStack00000000000000c0 = uVar22;
    uStack00000000000000b8 = uVar23;
    uStack00000000000000b0 = uVar10;
    uStack0000000000000124 = *(undefined8 *)(unaff_x19 + 0x74);
    uStack0000000000000118 = (undefined4)in_stack_00000278;
                    /* try { // try from 03382040 to 03482043 has its CatchHandler @ 03382194 */
    uStack000000000000011c = (undefined4)*(undefined8 *)(unaff_x19 + 0x6c);
    uStack0000000000000120 = (undefined4)((ulong)*(undefined8 *)(unaff_x19 + 0x6c) >> 0x20);
    uStack00000000000000e4 = *(undefined8 *)(unaff_x19 + 0x34);
    uStack00000000000000d8 = (undefined4)uVar21;
    uStack00000000000000dc = (undefined4)*(undefined8 *)(unaff_x19 + 0x2c);
    uStack00000000000000e0 = (undefined4)((ulong)*(undefined8 *)(unaff_x19 + 0x2c) >> 0x20);
                    /* try { // try from 0338205c to 03482077 has its CatchHandler @ 03382230 */
    uStack000000000000012c = unaff_s8;
    FUN_036bd894(&stack0x00000130,&stack0x000000f0,&stack0x000000b0,0);
    uVar24 = in_stack_00000168;
    uVar22 = in_stack_00000160;
    uVar23 = in_stack_00000158;
    uVar10 = in_stack_00000150;
                    /* try { // try from 03382078 to 0348207b has its CatchHandler @ 03382184 */
                    /* try { // try from 0338207c to 0348207f has its CatchHandler @ 03382170 */
    lVar11 = *unaff_x21;
                    /* try { // try from 03382080 to 03482083 has its CatchHandler @ 0338214c */
    in_stack_000001d8 = in_stack_00000138;
    in_stack_000001d0 = in_stack_00000130;
    in_stack_000001e8 = in_stack_00000148;
    in_stack_000001e0 = in_stack_00000140;
                    /* try { // try from 03382084 to 0348208b has its CatchHandler @ 03382144 */
                    /* try { // try from 0338208c to 0348208f has its CatchHandler @ 03382140 */
    if (*(int *)(lVar11 + 0xe0) == 0) {
                    /* try { // try from 03382090 to 03482093 has its CatchHandler @ 03382138 */
      thunk_FUN_01a58e78();
                    /* try { // try from 03382094 to 034820df has its CatchHandler @ 03380fd4 */
      lVar11 = *unaff_x21;
    }
    lVar12 = **(long **)(lVar11 + 0xb8);
    uVar7 = *(undefined4 *)((long)*(long **)(lVar11 + 0xb8) + 0x34);
    in_stack_00000138 = in_stack_000001d8;
    in_stack_00000130 = in_stack_000001d0;
    in_stack_00000148 = in_stack_000001e8;
    in_stack_00000140 = in_stack_000001e0;
    in_stack_00000150 = uVar10;
    in_stack_00000158 = uVar23;
    in_stack_00000160 = uVar22;
    in_stack_00000168 = uVar24;
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c(0,uVar7);
    }
    in_stack_00000078 = in_stack_000001d8;
    in_stack_00000070 = in_stack_000001d0;
    in_stack_00000088 = in_stack_000001e8;
    in_stack_00000080 = in_stack_000001e0;
    in_stack_00000098 = uVar23;
    in_stack_00000090 = uVar10;
    in_stack_000000a8 = uVar24;
    in_stack_000000a0 = uVar22;
    FUN_03691dd0(lVar12,uVar7,&stack0x00000070,0);
    lVar12 = **(long **)(*unaff_x21 + 0xb8);
                    /* try { // try from 033820e0 to 034820e3 has its CatchHandler @ 03382120 */
    lVar11 = (*(long **)(*unaff_x21 + 0xb8))[5];
                    /* try { // try from 033820e4 to 034820e7 has its CatchHandler @ 03382104 */
                    /* try { // try from 033820e8 to 034821cb has its CatchHandler @ 03380fd4 */
                    /* catch() { ... } // from try @ 03381d5c with catch @ 033820ec */
    uVar13 = FUN_0368ba00(unaff_x25,0);
    if ((uVar13 & 1) == 0) {
                    /* catch() { ... } // from try @ 03381ca8 with catch @ 03382108 */
                    /* catch() { ... } // from try @ 03381b40 with catch @ 0338210c */
      fVar16 = 160.0;
    }
    else {
                    /* catch() { ... } // from try @ 03381ca4 with catch @ 033820f8 */
                    /* catch() { ... } // from try @ 03381d0c with catch @ 033820fc */
      iVar9 = FUN_0368be50(unaff_x25,0);
                    /* catch() { ... } // from try @ 03381ccc with catch @ 03382100 */
      fVar16 = (float)iVar9;
                    /* catch() { ... } // from try @ 033820e4 with catch @ 03382104 */
    }
                    /* catch() { ... } // from try @ 03381c68 with catch @ 03382110 */
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c(fVar16);
    }
                    /* catch() { ... } // from try @ 03381b90 with catch @ 03382114 */
                    /* catch() { ... } // from try @ 03381ba8 with catch @ 03382118 */
                    /* catch() { ... } // from try @ 03381be4 with catch @ 0338211c */
                    /* catch() { ... } // from try @ 033820e0 with catch @ 03382120 */
    FUN_03691c08(lVar12,(int)lVar11,0);
                    /* catch() { ... } // from try @ 03381b0c with catch @ 03382124 */
    lVar11 = *unaff_x21;
                    /* catch() { ... } // from try @ 03381700 with catch @ 03382128 */
                    /* catch() { ... } // from try @ 03381aec with catch @ 0338212c */
    if (*(int *)(lVar11 + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 03381ab8 with catch @ 03382130 */
      thunk_FUN_01a58e78();
                    /* catch() { ... } // from try @ 03381c04 with catch @ 03382134 */
      lVar11 = *unaff_x21;
    }
                    /* catch() { ... } // from try @ 03382090 with catch @ 03382138 */
                    /* catch() { ... } // from try @ 03381c44 with catch @ 0338213c */
    lVar12 = **(long **)(lVar11 + 0xb8);
                    /* catch() { ... } // from try @ 0338208c with catch @ 03382140 */
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
                    /* catch() { ... } // from try @ 03382084 with catch @ 03382144 */
                    /* catch() { ... } // from try @ 03381780 with catch @ 03382148 */
                    /* catch() { ... } // from try @ 03382080 with catch @ 0338214c */
                    /* catch() { ... } // from try @ 03381710 with catch @ 03382150 */
                    /* catch() { ... } // from try @ 03381a8c with catch @ 03382154 */
                    /* catch() { ... } // from try @ 033816c4 with catch @ 03382158 */
                    /* catch() { ... } // from try @ 03381754 with catch @ 0338215c */
    fVar16 = 160.0;
                    /* catch() { ... } // from try @ 03381680 with catch @ 03382160 */
    if ((in_stack_000002c8 & 1) != 0) {
      fVar16 = (float)in_stack_000002d0;
    }
                    /* catch() { ... } // from try @ 033815e8 with catch @ 03382164 */
                    /* catch() { ... } // from try @ 03381640 with catch @ 03382168 */
    FUN_03691c08(fVar16,lVar12,*(undefined4 *)((long)*(long **)(lVar11 + 0xb8) + 0x2c),0);
    do {
                    /* catch() { ... } // from try @ 033815b4 with catch @ 0338216c */
                    /* catch() { ... } // from try @ 0338207c with catch @ 03382170 */
      if (in_stack_00000290 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
                    /* catch() { ... } // from try @ 03381670 with catch @ 03382174 */
                    /* catch() { ... } // from try @ 03381650 with catch @ 03382178 */
      uVar13 = FUN_036b43d4(in_stack_00000290,0);
                    /* catch() { ... } // from try @ 033816a8 with catch @ 0338217c */
      if ((uVar13 & 1) == 0) {
                    /* catch() { ... } // from try @ 03381a38 with catch @ 03382188 */
                    /* catch() { ... } // from try @ 03381a50 with catch @ 0338218c */
        if (in_stack_00000290 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
                    /* catch() { ... } // from try @ 033819e8 with catch @ 03382190 */
                    /* catch() { ... } // from try @ 03382040 with catch @ 03382194 */
        iVar9 = FUN_036b42d0(in_stack_00000290,0);
                    /* catch() { ... } // from try @ 03381594 with catch @ 03382198 */
                    /* catch() { ... } // from try @ 03381550 with catch @ 0338219c */
        if (iVar9 == 8) {
                    /* catch() { ... } // from try @ 03381578 with catch @ 033821a0 */
          bVar6 = true;
                    /* catch() { ... } // from try @ 03381534 with catch @ 033821a4 */
        }
        else {
                    /* catch() { ... } // from try @ 03381990 with catch @ 033821a8 */
                    /* catch() { ... } // from try @ 03381964 with catch @ 033821ac */
          if (in_stack_00000290 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
                    /* catch() { ... } // from try @ 03381944 with catch @ 033821b0 */
                    /* catch() { ... } // from try @ 0338197c with catch @ 033821b4 */
          iVar9 = FUN_036b42d0(in_stack_00000290,0);
                    /* catch() { ... } // from try @ 03381930 with catch @ 033821b8 */
          bVar6 = iVar9 == 0x3b;
                    /* catch() { ... } // from try @ 03381904 with catch @ 033821bc */
        }
      }
      else {
                    /* catch() { ... } // from try @ 033819b4 with catch @ 03382180 */
        bVar6 = false;
                    /* catch() { ... } // from try @ 03382078 with catch @ 03382184 */
      }
      lVar11 = *unaff_x21;
      if (*(int *)(lVar11 + 0xe0) == 0) {
                    /* try { // try from 033821cc to 034821cf has its CatchHandler @ 03382200 */
        thunk_FUN_01a58e78();
                    /* try { // try from 033821d0 to 0348220f has its CatchHandler @ 03380fd4 */
        lVar11 = *unaff_x21;
      }
      lVar12 = **(long **)(lVar11 + 0xb8);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar7 = 0;
      if (bVar6) {
        uVar7 = 0x3f800000;
      }
      FUN_03691c08(uVar7,lVar12,(int)(*(long **)(lVar11 + 0xb8))[4],0);
      lVar11 = *unaff_x21;
                    /* catch() { ... } // from try @ 033821cc with catch @ 03382200 */
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar11 = *unaff_x21;
      }
                    /* try { // try from 03382210 to 0348221b has its CatchHandler @ 03382230 */
      lVar12 = **(long **)(lVar11 + 0xb8);
      uVar7 = *(undefined4 *)((long)*(long **)(lVar11 + 0xb8) + 0x24);
                    /* try { // try from 0338221c to 03482227 has its CatchHandler @ 03380fd4 */
      iVar9 = FUN_0368e42c(0);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
                    /* try { // try from 03382228 to 0348222f has its CatchHandler @ 03382230 */
      uVar17 = 0;
                    /* catch() { ... } // from try @ 0338205c with catch @ 03382230
                       catch() { ... } // from try @ 03382210 with catch @ 03382230
                       catch() { ... } // from try @ 03382228 with catch @ 03382230 */
      if (iVar9 != 1) {
        uVar17 = 0x3f800000;
      }
      FUN_03691c08(uVar17,lVar12,uVar7,0);
      lVar11 = *unaff_x21;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar11 = *unaff_x21;
      }
      lVar12 = **(long **)(lVar11 + 0xb8);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_03691eb4(lVar12,(int)(*(long **)(lVar11 + 0xb8))[2],in_stack_00000290,0);
      lVar11 = **(long **)(*unaff_x21 + 0xb8);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      thunk_FUN_0369117c(unaff_d12,unaff_d15,unaff_d13,unaff_d14,lVar11,
                         (int)(*(long **)(*unaff_x21 + 0xb8))[3],0);
      lVar11 = **(long **)(*unaff_x21 + 0xb8);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      thunk_FUN_0369117c(in_stack_00000018._4_4_,unaff_d9,unaff_d10,unaff_d11,lVar11,
                         *(undefined4 *)((long)*(long **)(*unaff_x21 + 0xb8) + 0x1c),0);
      lVar11 = **(long **)(*unaff_x21 + 0xb8);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_03691c08((float)in_stack_00000298,lVar11,
                   *(undefined4 *)((long)*(long **)(*unaff_x21 + 0xb8) + 0x14),0);
      if (*(int *)(*(long *)Unity_Services_Authentication_IAuthenticationCache_TypeInfo + 0xe0) == 0
         ) {
        thunk_FUN_01a58e78();
      }
      if (DAT_0412d15e == '\0') {
        FUN_01ab69ac(Unity_Services_Authentication_IAuthenticationCache_TypeInfo);
        DAT_0412d15e = '\x01';
      }
      lVar11 = *(long *)Unity_Services_Authentication_IAuthenticationCache_TypeInfo;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar11 = *(long *)Unity_Services_Authentication_IAuthenticationCache_TypeInfo;
      }
      if (((*(byte *)(*(long *)(lVar11 + 0xb8) + 0x4c) >> 1 & 1) != 0) &&
         (uVar13 = FUN_027bcf38(in_stack_000002c0,0,0), (uVar13 & 1) != 0)) {
        FUN_036f0b3c(in_stack_00000020,in_stack_000002c0,0);
        FUN_036f0470(in_stack_00000020,*(undefined8 *)Fusion_IBeforeUpdateRemotePrefabs_TypeInfo,0);
      }
      if (in_stack_00000290 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      (**(code **)(*in_stack_00000290 + 0x1c8))
                (in_stack_00000290,*(undefined8 *)(*in_stack_00000290 + 0x1d0));
      if (*(char *)(unaff_x24 + 0x171) == '\0') {
        FUN_01ab69ac();
        *(undefined1 *)(unaff_x24 + 0x171) = 1;
      }
      lVar11 = *(long *)(*unaff_x23 + 0xb8);
      in_stack_00000158 = *(undefined8 *)(lVar11 + 0x68);
      in_stack_00000150 = *(undefined8 *)(lVar11 + 0x60);
      in_stack_00000168 = *(undefined8 *)(lVar11 + 0x78);
      in_stack_00000160 = *(undefined8 *)(lVar11 + 0x70);
      in_stack_00000138 = *(undefined8 *)(lVar11 + 0x48);
      in_stack_00000130 = *(undefined8 *)(lVar11 + 0x40);
      in_stack_00000148 = *(undefined8 *)(lVar11 + 0x58);
      in_stack_00000140 = *(undefined8 *)(lVar11 + 0x50);
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      in_stack_00000038 = in_stack_00000138;
      in_stack_00000030 = in_stack_00000130;
      in_stack_00000048 = in_stack_00000148;
      in_stack_00000040 = in_stack_00000140;
      in_stack_00000058 = in_stack_00000158;
      in_stack_00000050 = in_stack_00000150;
      in_stack_00000068 = in_stack_00000168;
      in_stack_00000060 = in_stack_00000160;
      FUN_036f2478(in_stack_00000020,&stack0x00000030);
      unaff_w22 = unaff_w22 + 1;
      if (in_stack_000002ec <= unaff_w22) {
        FUN_033a2194(&stack0x000002d8,0);
        puVar2 = Unity_Services_Authentication_IAuthenticationCache_TypeInfo;
        if (*(int *)(*(long *)Unity_Services_Authentication_IAuthenticationCache_TypeInfo + 0xe0) ==
            0) {
          thunk_FUN_01a58e78();
        }
        if (DAT_0412d15e == '\0') {
          FUN_01ab69ac(Unity_Services_Authentication_IAuthenticationCache_TypeInfo);
          DAT_0412d15e = '\x01';
        }
        lVar11 = *(long *)puVar2;
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar11 = *(long *)puVar2;
        }
        if ((*(byte *)(*(long *)(lVar11 + 0xb8) + 0x4c) >> 1 & 1) != 0) {
          if (in_stack_00000020 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          FUN_036f04b4(in_stack_00000020,*(undefined8 *)Fusion_IBeforeUpdateRemotePrefabs_TypeInfo,0
                      );
          FUN_036f0b3c(in_stack_00000020,0,0);
        }
        return;
      }
      FUN_03953ca4(&stack0x000002e0,unaff_w22,&stack0x00000290,0);
      unaff_d12 = (ulong)in_stack_000002a4;
      unaff_d13 = (ulong)in_stack_0000029c;
      unaff_d9 = (ulong)in_stack_000002b8;
      unaff_d10 = (ulong)in_stack_000002ac;
      unaff_d11 = (ulong)in_stack_000002b0;
      uVar10 = FUN_03674e74(in_stack_00000028,0);
      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar13 = FUN_036cee6c(uVar10,0,0);
      if ((((uVar13 & 1) != 0) || (iVar9 = FUN_036738dc(in_stack_00000028,0), iVar9 == 2)) ||
         (iVar9 = FUN_036738dc(in_stack_00000028,0), fVar16 = in_stack_000002a0,
         fVar25 = in_stack_000002a8, iVar9 == 4)) {
        fVar25 = -in_stack_000002a8;
        fVar16 = in_stack_000002a0 + in_stack_000002a8;
      }
      unaff_d15 = (ulong)(uint)fVar25;
      unaff_d14 = (ulong)(uint)fVar16;
      if (*(int *)(*(long *)Fusion_IBeforePhysicsStep_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      unaff_x25 = FUN_0368b9a8(0);
      in_stack_00000018._4_4_ = in_stack_000002b4;
      if ((in_stack_000002c8 & 1) != 0) {
        if (unaff_x25 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        break;
      }
      if (unaff_x25 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar13 = FUN_0368ba00(unaff_x25,0);
    } while ((uVar13 & 1) == 0);
    uVar13 = FUN_0368ba00(unaff_x25,0);
    if ((uVar13 & 1) == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = FUN_0368bc34(unaff_x25,0);
    }
    iVar9 = FUN_0368c180(uVar7,0);
    uVar1 = -(in_stack_000002c8 & 1) & in_stack_000002cc;
    iVar8 = FUN_0368c180(uVar1,0);
    lVar11 = *unaff_x21;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar11 = *unaff_x21;
    }
    FUN_033b47bc(**(undefined8 **)(lVar11 + 0xb8),uVar7,0);
    FUN_033b487c();
    FUN_033b43e4(uVar1,&stack0x0000028c,0);
    lVar11 = **(long **)(*unaff_x21 + 0xb8);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_03691c5c(lVar11,(int)(*(long **)(*unaff_x21 + 0xb8))[6],in_stack_0000028c,0);
    if (*(char *)(unaff_x24 + 0x171) == '\0') {
      FUN_01ab69ac();
      *(undefined1 *)(unaff_x24 + 0x171) = 1;
    }
    lVar11 = *(long *)(*unaff_x23 + 0xb8);
    uVar10 = *(undefined8 *)(lVar11 + 0x6c);
    in_stack_00000268 = *(undefined8 *)(lVar11 + 0x58);
    in_stack_00000260 = *(undefined8 *)(lVar11 + 0x50);
    in_stack_00000278 = *(undefined8 *)(lVar11 + 0x68);
    in_stack_00000270 = *(undefined8 *)(lVar11 + 0x60);
    in_stack_00000258 = *(undefined8 *)(lVar11 + 0x48);
    in_stack_00000250 = *(undefined8 *)(lVar11 + 0x40);
    *(undefined8 *)(unaff_x19 + 0x74) = *(undefined8 *)(lVar11 + 0x74);
    *(undefined8 *)(unaff_x19 + 0x6c) = uVar10;
    if (iVar8 == 0) {
      lVar11 = *(long *)Fusion_IBeforeHitboxRegistration_TypeInfo;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar11 = *(long *)Fusion_IBeforeHitboxRegistration_TypeInfo;
      }
      puVar14 = *(undefined8 **)(lVar11 + 0xb8);
      uVar10 = *(undefined8 *)((long)puVar14 + 0x2c);
      in_stack_00000268 = puVar14[3];
      in_stack_00000260 = puVar14[2];
      in_stack_00000278 = puVar14[5];
      in_stack_00000270 = puVar14[4];
      puVar15 = (undefined4 *)((long)puVar14 + 0x3c);
      in_stack_00000258 = puVar14[1];
      in_stack_00000250 = *puVar14;
      *(undefined8 *)(unaff_x19 + 0x74) = *(undefined8 *)((long)puVar14 + 0x34);
      *(undefined8 *)(unaff_x19 + 0x6c) = uVar10;
LAB_03381f54:
      unaff_s8 = *puVar15;
    }
    else {
      unaff_s8 = 0;
      if (iVar8 == 2) {
        lVar11 = *(long *)Fusion_IBeforeHitboxRegistration_TypeInfo;
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar11 = *(long *)Fusion_IBeforeHitboxRegistration_TypeInfo;
        }
        lVar11 = *(long *)(lVar11 + 0xb8);
        in_stack_00000258 = *(undefined8 *)(lVar11 + 0x108);
        in_stack_00000250 = *(undefined8 *)(lVar11 + 0x100);
        in_stack_00000268 = *(undefined8 *)(lVar11 + 0x118);
        in_stack_00000260 = *(undefined8 *)(lVar11 + 0x110);
        uVar10 = *(undefined8 *)(lVar11 + 300);
        in_stack_00000278 = *(undefined8 *)(lVar11 + 0x128);
        in_stack_00000270 = *(undefined8 *)(lVar11 + 0x120);
        puVar15 = (undefined4 *)(lVar11 + 0x13c);
        *(undefined8 *)(unaff_x19 + 0x74) = *(undefined8 *)(lVar11 + 0x134);
        *(undefined8 *)(unaff_x19 + 0x6c) = uVar10;
        goto LAB_03381f54;
      }
    }
    if (*(char *)(unaff_x24 + 0x171) == '\0') {
      FUN_01ab69ac();
      *(undefined1 *)(unaff_x24 + 0x171) = 1;
    }
    lVar11 = *(long *)(*unaff_x23 + 0xb8);
    uVar18 = *(undefined8 *)(lVar11 + 0x6c);
    uVar24 = *(undefined8 *)(lVar11 + 0x58);
    uVar22 = *(undefined8 *)(lVar11 + 0x50);
    uVar21 = *(undefined8 *)(lVar11 + 0x68);
    uVar20 = *(undefined8 *)(lVar11 + 0x60);
    uVar23 = *(undefined8 *)(lVar11 + 0x48);
    uVar10 = *(undefined8 *)(lVar11 + 0x40);
    *(undefined8 *)(unaff_x19 + 0x34) = *(undefined8 *)(lVar11 + 0x74);
    *(undefined8 *)(unaff_x19 + 0x2c) = uVar18;
    if (iVar9 == 0) break;
    uVar18 = in_stack_00000250;
    uVar19 = in_stack_00000258;
    uVar3 = in_stack_00000260;
    uVar4 = in_stack_00000268;
    uVar5 = in_stack_00000270;
    uVar7 = 0;
    if (iVar9 == 2) {
      lVar11 = *(long *)Fusion_IBeforeHitboxRegistration_TypeInfo;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar11 = *(long *)Fusion_IBeforeHitboxRegistration_TypeInfo;
      }
      param_1 = *(long *)(lVar11 + 0xb8);
      uVar19 = *(undefined8 *)(param_1 + 0xf4);
      uVar18 = *(undefined8 *)(param_1 + 0xec);
      uVar24 = *(undefined8 *)(param_1 + 0xd8);
      uVar22 = *(undefined8 *)(param_1 + 0xd0);
      uVar21 = *(undefined8 *)(param_1 + 0xe8);
      uVar20 = *(undefined8 *)(param_1 + 0xe0);
      uVar23 = *(undefined8 *)(param_1 + 200);
      uVar10 = *(undefined8 *)(param_1 + 0xc0);
      goto code_r0x03381fd4;
    }
  } while( true );
  lVar11 = *(long *)Fusion_IBeforeHitboxRegistration_TypeInfo;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar11 = *(long *)Fusion_IBeforeHitboxRegistration_TypeInfo;
  }
  lVar11 = *(long *)(lVar11 + 0xb8);
  uVar19 = *(undefined8 *)(lVar11 + 0xb4);
  uVar18 = *(undefined8 *)(lVar11 + 0xac);
  uVar24 = *(undefined8 *)(lVar11 + 0x98);
  uVar22 = *(undefined8 *)(lVar11 + 0x90);
  uVar21 = *(undefined8 *)(lVar11 + 0xa8);
  uVar20 = *(undefined8 *)(lVar11 + 0xa0);
  uVar23 = *(undefined8 *)(lVar11 + 0x88);
  uVar10 = *(undefined8 *)(lVar11 + 0x80);
  puVar15 = (undefined4 *)(lVar11 + 0xbc);
  goto LAB_03382014;
}


