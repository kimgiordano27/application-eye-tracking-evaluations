/*
FUNCTION_NAME: OVRPlugin$$GetNodeVelocity
ENTRY_POINT: 06009454
PROGRAM: vandalizer-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4 OVRPlugin__GetNodeVelocity(undefined1 param_1 [16],long param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined4 *puVar12;
  float *pfVar13;
  float *unaff_x21;
  long unaff_x22;
  int iVar14;
  long unaff_x27;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  ulong uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  ulong uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  ulong uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined4 uStack0000000000000034;
  ulong *in_stack_00000038;
  undefined4 uStack0000000000000074;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  ulong in_stack_00000090;
  float fStack0000000000000098;
  undefined4 uStack000000000000009c;
  undefined4 uStack00000000000000a0;
  undefined4 uStack00000000000000a4;
  float fStack00000000000000a8;
  undefined4 uStack00000000000000ac;
  undefined4 uStack00000000000000b0;
  undefined4 uStack00000000000000b4;
  uint in_stack_000000b8;
  undefined4 uStack00000000000000bc;
  float fStack00000000000000c0;
  float fStack00000000000000c4;
  float fStack00000000000000c8;
  undefined4 uStack00000000000000cc;
  undefined4 uStack00000000000000d0;
  undefined4 uStack00000000000000d4;
  float fStack00000000000000d8;
  undefined4 uStack00000000000000e0;
  undefined4 uStack00000000000000e4;
  undefined4 in_stack_000000e8;
  ulong uStack00000000000000f0;
  float fStack00000000000000f8;
  undefined4 uStack00000000000000fc;
  undefined4 uStack0000000000000100;
  undefined4 uStack0000000000000104;
  float fStack0000000000000108;
  undefined4 uStack000000000000010c;
  undefined8 in_stack_00000110;
  ulong uStack0000000000000120;
  ulong uStack0000000000000128;
  ulong uStack0000000000000130;
  ulong uStack0000000000000138;
  char in_stack_00000148;
  ulong in_stack_00000150;
  undefined4 uStack0000000000000158;
  undefined4 uStack000000000000015c;
  undefined4 uStack0000000000000160;
  undefined4 uStack0000000000000164;
  float in_stack_00000168;
  ulong in_stack_00000170;
  ulong in_stack_00000178;
  
  uStack0000000000000128 = param_1._8_8_;
  uStack00000000000000f0 = param_1._0_8_;
  _fStack00000000000000c0 = 0;
  fStack00000000000000c8 = 0.0;
  uStack00000000000000cc = 0;
  *(ulong *)(unaff_x27 + 0x24) = uStack0000000000000128;
  *(ulong *)(unaff_x27 + 0x1c) = uStack00000000000000f0;
  puVar3 = PTR_DAT_075f4af0;
  fStack00000000000000f8 = param_1._8_4_;
  uStack00000000000000fc = param_1._12_4_;
  uStack0000000000000100 = param_1._0_4_;
  uStack0000000000000104 = param_1._4_4_;
  fStack00000000000000d8 = 0.0;
  uStack00000000000000d0 = 0;
  uStack00000000000000d4 = 0;
  uStack00000000000000bc = 0;
  fStack0000000000000108 = fStack00000000000000f8;
  uStack000000000000010c = uStack00000000000000fc;
  uStack0000000000000120 = uStack00000000000000f0;
  uStack0000000000000130 = uStack00000000000000f0;
  uStack0000000000000138 = uStack0000000000000128;
  if (*(int *)(param_2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_06e684bc(&stack0x00000090,0);
  _uStack0000000000000158 = CONCAT44(uStack000000000000009c,fStack0000000000000098);
  in_stack_00000150 = in_stack_00000090;
  *(ulong *)(unaff_x27 + 0x44) = CONCAT44(fStack00000000000000a8,uStack00000000000000a4);
  *(ulong *)(unaff_x27 + 0x3c) = CONCAT44(uStack00000000000000a0,uStack000000000000009c);
  FUN_06e684bc(&stack0x00000090,0);
  FUN_06e684bc(&stack0x00000170,0);
  uVar18 = *(undefined8 *)(unaff_x27 + 100);
  uStack00000000000000a4 = (undefined4)uVar18;
  fStack00000000000000a8 = (float)((ulong)uVar18 >> 0x20);
  uStack00000000000000a0 = (undefined4)((ulong)*(undefined8 *)(unaff_x27 + 0x5c) >> 0x20);
  fStack0000000000000098 = (float)in_stack_00000178;
  uStack000000000000009c = (undefined4)(in_stack_00000178 >> 0x20);
  in_stack_00000090 = in_stack_00000170;
  *(undefined8 *)((long)in_stack_00000038 + 0x14) = uVar18;
  *(ulong *)((long)in_stack_00000038 + 0xc) =
       CONCAT44(uStack00000000000000a0,uStack000000000000009c);
  in_stack_00000038[1] = in_stack_00000178;
  *in_stack_00000038 = in_stack_00000170;
  lVar11 = *(long *)puVar3;
  if (*(int *)(lVar11 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar11);
    lVar11 = *(long *)puVar3;
  }
  puVar5 = PTR_DAT_075f72b8;
  puVar4 = PTR_DAT_075b9420;
  puVar3 = PTR_DAT_0759b370;
  lVar9 = *(long *)(unaff_x22 + 0x20);
  if (lVar9 != 0) {
    uStack0000000000000034 = 0;
    puVar12 = *(undefined4 **)(lVar11 + 0xb8);
    uStack000000000000007c = *puVar12;
    uStack0000000000000078 = puVar12[1];
    iVar14 = 0;
    uStack0000000000000074 = puVar12[2];
    do {
      if (*(int *)(lVar9 + 0x18) <= iVar14) {
        return uStack0000000000000034;
      }
      FUN_046e0764(&stack0x00000090,lVar9,iVar14,*(undefined8 *)puVar5);
      uStack0000000000000128 = CONCAT44(uStack000000000000009c,fStack0000000000000098);
      uStack0000000000000138 = CONCAT44(uStack00000000000000ac,fStack00000000000000a8);
      uStack0000000000000130 = CONCAT44(uStack00000000000000a4,uStack00000000000000a0);
      uStack0000000000000120 = in_stack_00000090;
      *(ulong *)(unaff_x27 + 0x24) = CONCAT44(in_stack_000000b8,uStack00000000000000b4);
      *(ulong *)(unaff_x27 + 0x1c) = CONCAT44(uStack00000000000000b0,uStack00000000000000ac);
      lVar11 = *(long *)(unaff_x22 + 0x20);
      if (lVar11 == 0) break;
      iVar1 = *(int *)(lVar11 + 0x18);
      iVar14 = iVar14 + 1;
      iVar2 = 0;
      if (iVar1 != 0) {
        iVar2 = iVar14 / iVar1;
      }
      FUN_046e0764(&stack0x00000090,lVar11,iVar14 - iVar2 * iVar1,*(undefined8 *)puVar5);
      in_stack_00000110 = CONCAT44(uStack00000000000000b4,uStack00000000000000b0);
      fStack00000000000000f8 = fStack0000000000000098;
      uStack00000000000000fc = uStack000000000000009c;
      uStack00000000000000f0 = in_stack_00000090;
      fStack0000000000000108 = fStack00000000000000a8;
      uStack000000000000010c = uStack00000000000000ac;
      uStack0000000000000100 = uStack00000000000000a0;
      uStack0000000000000104 = uStack00000000000000a4;
      if (in_stack_00000148 == '\0') {
        if ((in_stack_000000b8 & 0xff) == 0) goto LAB_060095b8;
        goto LAB_06009a9c;
      }
      if ((in_stack_000000b8 & 0xff) == 0) {
LAB_060095b8:
        if (*(long *)(unaff_x22 + 0x20) == 0) break;
        if (*(int *)(*(long *)(unaff_x22 + 0x20) + 0x18) == 1) goto LAB_060095cc;
        in_stack_00000178 = uStack0000000000000128;
        in_stack_00000170 = uStack0000000000000120;
        *(undefined8 *)(unaff_x27 + 100) = *(undefined8 *)(unaff_x27 + 0x14);
        *(undefined8 *)(unaff_x27 + 0x5c) = *(undefined8 *)(unaff_x27 + 0xc);
        FUN_05faf300(&stack0x00000090);
        fVar8 = fStack00000000000000a8;
        uVar7 = uStack00000000000000a4;
        uVar6 = uStack00000000000000a0;
        uVar17 = uStack000000000000009c;
        fVar22 = fStack0000000000000098;
        uVar27 = in_stack_00000090;
        uVar10 = in_stack_00000090 & 0xffffffff;
        fVar21 = in_stack_00000090._4_4_;
        in_stack_00000178 = CONCAT44(uStack00000000000000fc,fStack00000000000000f8);
        in_stack_00000170 = uStack00000000000000f0;
        *(ulong *)(unaff_x27 + 100) = CONCAT44(fStack0000000000000108,uStack0000000000000104);
        *(ulong *)(unaff_x27 + 0x5c) = CONCAT44(uStack0000000000000100,uStack00000000000000fc);
        fVar15 = fStack00000000000000a8;
        FUN_05faf300(&stack0x00000090);
        uVar16 = uStack00000000000000a4;
        fVar25 = (float)FUN_06008d5c(&stack0x00000120);
        fVar24 = fVar25;
        fVar29 = fVar21;
        fVar30 = fVar22;
        fVar26 = (float)FUN_06009ae0(uVar10);
        fVar19 = *unaff_x21;
        fVar28 = unaff_x21[1];
        fVar35 = unaff_x21[2];
        fVar34 = unaff_x21[3];
        fVar32 = unaff_x21[4];
        fVar33 = unaff_x21[5];
        if (DAT_07a3fba2 == '\0') {
          FUN_031f20f4(puVar4);
          DAT_07a3fba2 = '\x01';
        }
        fVar33 = fVar30 * fVar33 + fVar26 * fVar34 + fVar29 * fVar32;
        fVar32 = ABS(fVar33);
        if (fVar32 <= 0.0) {
          fVar32 = 0.0;
        }
        fVar20 = **(float **)(*(long *)puVar4 + 0xb8) * 8.0;
        fVar34 = fVar32 * DAT_014bab34;
        if (fVar32 * DAT_014bab34 <= fVar20) {
          fVar34 = fVar20;
        }
        if (fVar34 <= ABS(0.0 - fVar33)) {
          uVar23 = (ulong)(uint)(fVar30 * fVar35);
          fVar24 = -(fVar30 * fVar35 + fVar19 * fVar26 + fVar29 * fVar28) - fVar24;
          uVar10 = (ulong)(uint)fVar24;
          if (fVar24 / fVar33 <= 0.0) goto LAB_06009a9c;
          uVar18 = FUN_06df42dc();
          FUN_06008d80(uVar18);
          uVar16 = FUN_06009e48(uVar27 & 0xffffffff,fVar21,fVar22,fVar25,uVar16,fVar15);
          in_stack_00000150 = CONCAT44(fVar21,uVar16);
          _uStack0000000000000158 = CONCAT44(uStack000000000000015c,fVar22);
          uVar17 = FUN_06e45c98(uVar17,0);
          in_stack_00000168 = fVar8;
          uStack0000000000000164 = uVar7;
          uStack0000000000000160 = uVar6;
          _uStack0000000000000158 = CONCAT44(uVar17,uStack0000000000000158);
LAB_06009a14:
          uVar31 = in_stack_00000150 & 0xffffffff;
          uVar17 = in_stack_00000150._4_4_;
          uVar27 = _uStack0000000000000158 & 0xffffffff;
          if (*(int *)(*(long *)PTR_DAT_075f4af0 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
          }
          FUN_06008004(uVar18,uVar10,uVar23,uVar31,uVar17,uVar27,&stack0x000000e0,0);
          uVar10 = FUN_06002380(uStack000000000000007c,uStack0000000000000078,uStack0000000000000074
                                ,&stack0x000000e0);
          if ((uVar10 & 1) != 0) {
            uStack0000000000000078 = uStack00000000000000e4;
            uStack000000000000007c = uStack00000000000000e0;
            uStack0000000000000074 = in_stack_000000e8;
            FUN_05faebbc(in_stack_00000038,&stack0x00000150,0);
            uStack0000000000000034 = 1;
          }
        }
      }
      else {
LAB_060095cc:
        in_stack_00000178 = uStack0000000000000128;
        in_stack_00000170 = uStack0000000000000120;
        *(undefined8 *)(unaff_x27 + 100) = *(undefined8 *)(unaff_x27 + 0x14);
        *(undefined8 *)(unaff_x27 + 0x5c) = *(undefined8 *)(unaff_x27 + 0xc);
        FUN_05faf300(&stack0x00000090);
        fVar21 = fStack0000000000000098;
        fStack00000000000000c8 = fStack0000000000000098;
        _fStack00000000000000c0 = in_stack_00000090;
        uVar10 = _fStack00000000000000c0;
        uStack00000000000000d4 = uStack00000000000000a4;
        fStack00000000000000d8 = fStack00000000000000a8;
        uStack00000000000000cc = uStack000000000000009c;
        uStack00000000000000d0 = uStack00000000000000a0;
        fStack00000000000000c0 = (float)in_stack_00000090;
        fVar22 = fStack00000000000000c0;
        fStack00000000000000c4 = (float)(in_stack_00000090 >> 0x20);
        fVar8 = fStack00000000000000c4;
        fVar30 = unaff_x21[3];
        fVar29 = unaff_x21[4];
        fVar24 = unaff_x21[5];
        _fStack00000000000000c0 = uVar10;
        if (DAT_07a3ca81 == '\0') {
          FUN_031f20f4(puVar3);
          DAT_07a3ca81 = '\x01';
        }
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        fVar15 = SQRT(fVar24 * fVar24 + fVar30 * fVar30 + fVar29 * fVar29);
        if (fVar15 <= DAT_014ba9b8) {
          if (DAT_07a3ca82 == '\0') {
            FUN_031f20f4(PTR_DAT_0759b378);
            DAT_07a3ca82 = '\x01';
          }
          pfVar13 = *(float **)(*(long *)PTR_DAT_0759b378 + 0xb8);
          fVar30 = *pfVar13;
          fVar29 = pfVar13[1];
          fVar15 = pfVar13[2];
        }
        else {
          fVar30 = -fVar30 / fVar15;
          fVar29 = -fVar29 / fVar15;
          fVar15 = -fVar24 / fVar15;
        }
        fVar24 = *unaff_x21;
        fVar35 = unaff_x21[1];
        fVar25 = unaff_x21[2];
        fVar26 = unaff_x21[3];
        fVar33 = unaff_x21[4];
        fVar28 = unaff_x21[5];
        if (DAT_07a3fba2 == '\0') {
          FUN_031f20f4(puVar4);
          DAT_07a3fba2 = '\x01';
        }
        fVar26 = fVar15 * fVar28 + fVar30 * fVar26 + fVar29 * fVar33;
        fVar28 = ABS(fVar26);
        if (fVar28 <= 0.0) {
          fVar28 = 0.0;
        }
        fVar19 = **(float **)(*(long *)puVar4 + 0xb8) * 8.0;
        fVar33 = fVar28 * DAT_014bab34;
        if (fVar28 * DAT_014bab34 <= fVar19) {
          fVar33 = fVar19;
        }
        if (fVar33 <= ABS(0.0 - fVar26)) {
          fVar24 = fVar15 * fVar25 + fVar30 * fVar24 + fVar29 * fVar35;
          uVar23 = (ulong)(uint)fVar24;
          fVar24 = (fVar21 * fVar15 + fVar22 * fVar30 + fVar8 * fVar29) - fVar24;
          uVar10 = (ulong)(uint)fVar24;
          if (0.0 < fVar24 / fVar26) {
            uVar18 = FUN_06df42dc();
            FUN_05faebbc(&stack0x00000150,&stack0x000000c0,0);
            goto LAB_06009a14;
          }
        }
      }
LAB_06009a9c:
      lVar9 = *(long *)(unaff_x22 + 0x20);
    } while (lVar9 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


