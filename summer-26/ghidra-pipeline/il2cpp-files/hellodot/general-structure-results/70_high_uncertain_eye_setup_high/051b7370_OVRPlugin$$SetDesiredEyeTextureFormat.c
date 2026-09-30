/*
FUNCTION_NAME: OVRPlugin$$SetDesiredEyeTextureFormat
ENTRY_POINT: 051b7370
PROGRAM: hellodot-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4 OVRPlugin__SetDesiredEyeTextureFormat(long param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
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
  undefined4 uVar23;
  float fVar24;
  ulong uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  ulong uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  ulong uVar33;
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
  undefined4 uStack00000000000000a8;
  undefined4 uStack00000000000000ac;
  undefined4 uStack00000000000000b0;
  undefined8 uStack00000000000000b4;
  ulong in_stack_000000c0;
  float fStack00000000000000c8;
  undefined4 uStack00000000000000cc;
  undefined4 uStack00000000000000d0;
  undefined8 uStack00000000000000d4;
  undefined4 uStack00000000000000dc;
  float fStack00000000000000e0;
  float fStack00000000000000e4;
  float in_stack_000000e8;
  undefined4 uStack00000000000000f0;
  undefined4 uStack00000000000000f4;
  undefined4 in_stack_000000f8;
  undefined4 uStack0000000000000100;
  undefined4 uStack0000000000000104;
  undefined4 in_stack_00000108;
  ulong in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  char in_stack_00000138;
  ulong in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  char in_stack_00000168;
  ulong in_stack_00000170;
  undefined4 uStack0000000000000178;
  undefined4 uStack000000000000017c;
  undefined4 uStack0000000000000180;
  undefined4 uStack0000000000000184;
  undefined4 in_stack_00000188;
  
  puVar3 = PTR_DAT_06606500;
  uStack00000000000000f0 = 0;
  uStack00000000000000f4 = 0;
  uStack00000000000000dc = 0;
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  FUN_05f002ac(&stack0x00000090,0);
  _uStack0000000000000178 = CONCAT44(uStack000000000000009c,fStack0000000000000098);
  in_stack_00000170 = in_stack_00000090;
  *(ulong *)(unaff_x27 + 0x74) = CONCAT44(uStack00000000000000a8,uStack00000000000000a4);
  *(ulong *)(unaff_x27 + 0x6c) = CONCAT44(uStack00000000000000a0,uStack000000000000009c);
  FUN_05f002ac(&stack0x00000090,0);
  FUN_05f002ac(&stack0x000000c0,0);
  uStack00000000000000a4 = (undefined4)uStack00000000000000d4;
  uStack00000000000000a8 = SUB84(uStack00000000000000d4,4);
  uStack00000000000000a0 = uStack00000000000000d0;
  fStack0000000000000098 = fStack00000000000000c8;
  uStack000000000000009c = uStack00000000000000cc;
  in_stack_00000090 = in_stack_000000c0;
  *(undefined8 *)((long)in_stack_00000038 + 0x14) = uStack00000000000000d4;
  *(ulong *)((long)in_stack_00000038 + 0xc) =
       CONCAT44(uStack00000000000000d0,uStack00000000000000cc);
  in_stack_00000038[1] = CONCAT44(uStack00000000000000cc,fStack00000000000000c8);
  *in_stack_00000038 = in_stack_000000c0;
  lVar11 = *(long *)puVar3;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_02cd038c(lVar11);
    lVar11 = *(long *)puVar3;
  }
  puVar5 = PTR_DAT_06608b28;
  puVar4 = PTR_DAT_065c9f70;
  puVar3 = PTR_DAT_065c8d28;
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
      FUN_038c4204(&stack0x00000090,lVar9,iVar14,*(undefined8 *)puVar5);
      in_stack_00000148 = CONCAT44(uStack000000000000009c,fStack0000000000000098);
      in_stack_00000158 = CONCAT44(uStack00000000000000ac,uStack00000000000000a8);
      in_stack_00000150 = CONCAT44(uStack00000000000000a4,uStack00000000000000a0);
      in_stack_00000140 = in_stack_00000090;
      *(undefined8 *)(unaff_x27 + 0x54) = uStack00000000000000b4;
      *(ulong *)(unaff_x27 + 0x4c) = CONCAT44(uStack00000000000000b0,uStack00000000000000ac);
      lVar11 = *(long *)(unaff_x22 + 0x20);
      if (lVar11 == 0) break;
      iVar1 = *(int *)(lVar11 + 0x18);
      iVar14 = iVar14 + 1;
      iVar2 = 0;
      if (iVar1 != 0) {
        iVar2 = iVar14 / iVar1;
      }
      FUN_038c4204(&stack0x00000090,lVar11,iVar14 - iVar2 * iVar1,*(undefined8 *)puVar5);
      in_stack_00000118 = CONCAT44(uStack000000000000009c,fStack0000000000000098);
      in_stack_00000128 = CONCAT44(uStack00000000000000ac,uStack00000000000000a8);
      uVar18 = CONCAT44(uStack00000000000000a4,uStack00000000000000a0);
      *(undefined8 *)(unaff_x27 + 0x24) = uStack00000000000000b4;
      *(ulong *)(unaff_x27 + 0x1c) = CONCAT44(uStack00000000000000b0,uStack00000000000000ac);
      in_stack_00000110 = in_stack_00000090;
      in_stack_00000120 = uVar18;
      if (in_stack_00000168 == '\0') {
        if (in_stack_00000138 == '\0') goto LAB_051b74c0;
        goto LAB_051b797c;
      }
      if (in_stack_00000138 == '\0') {
LAB_051b74c0:
        if (*(long *)(unaff_x22 + 0x20) == 0) break;
        if (*(int *)(*(long *)(unaff_x22 + 0x20) + 0x18) == 1) goto LAB_051b74d4;
        FUN_051b88b0(&stack0x00000090,&stack0x00000140);
        uVar8 = uStack00000000000000a8;
        uVar7 = uStack00000000000000a4;
        uVar6 = uStack00000000000000a0;
        uVar17 = uStack000000000000009c;
        fVar24 = fStack0000000000000098;
        uVar29 = in_stack_00000090;
        uVar23 = (undefined4)uVar18;
        uVar10 = in_stack_00000090 & 0xffffffff;
        fVar22 = in_stack_00000090._4_4_;
        FUN_051b88b0(&stack0x00000090,&stack0x00000110);
        uVar16 = uStack00000000000000a4;
        fVar32 = (float)FUN_051b895c(&stack0x00000140);
        fVar21 = fVar32;
        fVar26 = fVar22;
        fVar31 = fVar24;
        fVar15 = (float)FUN_051b79c0(uVar10);
        fVar34 = *unaff_x21;
        fVar27 = unaff_x21[1];
        fVar30 = unaff_x21[2];
        fVar19 = unaff_x21[3];
        fVar35 = unaff_x21[4];
        fVar28 = unaff_x21[5];
        if (DAT_06a67231 == '\0') {
          AkMIDIEventCallbackInfo__get_byProgramNum(puVar4);
          DAT_06a67231 = '\x01';
        }
        fVar28 = fVar31 * fVar28 + fVar15 * fVar19 + fVar26 * fVar35;
        fVar35 = ABS(fVar28);
        if (fVar35 <= 0.0) {
          fVar35 = 0.0;
        }
        fVar20 = **(float **)(*(long *)puVar4 + 0xb8) * 8.0;
        fVar19 = fVar35 * DAT_013de160;
        if (fVar35 * DAT_013de160 <= fVar20) {
          fVar19 = fVar20;
        }
        if (fVar19 <= ABS(0.0 - fVar28)) {
          uVar25 = (ulong)(uint)(fVar31 * fVar30);
          fVar21 = -(fVar31 * fVar30 + fVar34 * fVar15 + fVar26 * fVar27) - fVar21;
          uVar10 = (ulong)(uint)fVar21;
          if (fVar21 / fVar28 <= 0.0) goto LAB_051b797c;
          uVar18 = FUN_05eb7ebc();
          FUN_051b6c88(uVar18);
          uVar16 = FUN_051b7d20(uVar29 & 0xffffffff,fVar22,fVar24,fVar32,uVar16,uVar23);
          in_stack_00000170 = CONCAT44(fVar22,uVar16);
          _uStack0000000000000178 = CONCAT44(uStack000000000000017c,fVar24);
          uVar17 = FUN_05ee9aa8(uVar17,0);
          in_stack_00000188 = uVar8;
          uStack0000000000000184 = uVar7;
          uStack0000000000000180 = uVar6;
          _uStack0000000000000178 = CONCAT44(uVar17,uStack0000000000000178);
LAB_051b78f4:
          uVar33 = in_stack_00000170 & 0xffffffff;
          uVar17 = in_stack_00000170._4_4_;
          uVar29 = _uStack0000000000000178 & 0xffffffff;
          if (*(int *)(*(long *)PTR_DAT_06606500 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          FUN_051a9758(uVar18,uVar10,uVar25,uVar33,uVar17,uVar29,&stack0x00000100,0);
          uVar10 = FUN_051b088c(uStack000000000000007c,uStack0000000000000078,uStack0000000000000074
                                ,&stack0x00000100);
          if ((uVar10 & 1) != 0) {
            uStack0000000000000078 = uStack0000000000000104;
            uStack000000000000007c = uStack0000000000000100;
            uStack0000000000000074 = in_stack_00000108;
            FUN_05167a3c(in_stack_00000038,&stack0x00000170,0);
            uStack0000000000000034 = 1;
          }
        }
      }
      else {
LAB_051b74d4:
        FUN_051b88b0(&stack0x00000090,&stack0x00000140);
        fVar22 = fStack0000000000000098;
        in_stack_000000e8 = fStack0000000000000098;
        _fStack00000000000000e0 = in_stack_00000090;
        uVar10 = _fStack00000000000000e0;
        uStack00000000000000f4 = uStack00000000000000a4;
        in_stack_000000f8 = uStack00000000000000a8;
        uStack00000000000000f0 = uStack00000000000000a0;
        fStack00000000000000e0 = (float)in_stack_00000090;
        fVar24 = fStack00000000000000e0;
        fStack00000000000000e4 = (float)(in_stack_00000090 >> 0x20);
        fVar21 = fStack00000000000000e4;
        fVar32 = unaff_x21[3];
        fVar31 = unaff_x21[4];
        fVar26 = unaff_x21[5];
        _fStack00000000000000e0 = uVar10;
        if (DAT_06a6722e == '\0') {
          AkMIDIEventCallbackInfo__get_byProgramNum(puVar3);
          DAT_06a6722e = '\x01';
        }
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        fVar15 = SQRT(fVar26 * fVar26 + fVar32 * fVar32 + fVar31 * fVar31);
        if (fVar15 <= DAT_013ddfb8) {
          if (DAT_06a67148 == '\0') {
            AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
            DAT_06a67148 = '\x01';
          }
          pfVar13 = *(float **)(*(long *)PTR_DAT_065c9850 + 0xb8);
          fVar32 = *pfVar13;
          fVar31 = pfVar13[1];
          fVar15 = pfVar13[2];
        }
        else {
          fVar32 = -fVar32 / fVar15;
          fVar31 = -fVar31 / fVar15;
          fVar15 = -fVar26 / fVar15;
        }
        fVar26 = *unaff_x21;
        fVar35 = unaff_x21[1];
        fVar27 = unaff_x21[2];
        fVar28 = unaff_x21[3];
        fVar34 = unaff_x21[4];
        fVar30 = unaff_x21[5];
        if (DAT_06a67231 == '\0') {
          AkMIDIEventCallbackInfo__get_byProgramNum(puVar4);
          DAT_06a67231 = '\x01';
        }
        fVar28 = fVar15 * fVar30 + fVar32 * fVar28 + fVar31 * fVar34;
        fVar30 = ABS(fVar28);
        if (fVar30 <= 0.0) {
          fVar30 = 0.0;
        }
        fVar19 = **(float **)(*(long *)puVar4 + 0xb8) * 8.0;
        fVar34 = fVar30 * DAT_013de160;
        if (fVar30 * DAT_013de160 <= fVar19) {
          fVar34 = fVar19;
        }
        if (fVar34 <= ABS(0.0 - fVar28)) {
          fVar26 = fVar15 * fVar27 + fVar32 * fVar26 + fVar31 * fVar35;
          uVar25 = (ulong)(uint)fVar26;
          fVar26 = (fVar22 * fVar15 + fVar24 * fVar32 + fVar21 * fVar31) - fVar26;
          uVar10 = (ulong)(uint)fVar26;
          if (0.0 < fVar26 / fVar28) {
            uVar18 = FUN_05eb7ebc();
            FUN_05167a3c(&stack0x00000170,&stack0x000000e0,0);
            goto LAB_051b78f4;
          }
        }
      }
LAB_051b797c:
      lVar9 = *(long *)(unaff_x22 + 0x20);
    } while (lVar9 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


