/*
FUNCTION_NAME: OVRPlugin$$get_systemVolume
ENTRY_POINT: 07a344a0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4 OVRPlugin__get_systemVolume(void)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined4 *puVar13;
  float *pfVar14;
  long *unaff_x20;
  float *unaff_x21;
  long unaff_x22;
  int iVar15;
  long unaff_x23;
  undefined8 *unaff_x27;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined4 uStack0000000000000034;
  undefined8 *in_stack_00000038;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  undefined4 uStack0000000000000080;
  undefined1 in_stack_00000090 [16];
  undefined4 uStack00000000000000a0;
  undefined4 uStack00000000000000a4;
  undefined4 uStack00000000000000a8;
  undefined4 uStack00000000000000ac;
  undefined4 uStack00000000000000b0;
  undefined4 uStack00000000000000b4;
  undefined8 in_stack_000000b8;
  float fStack00000000000000c0;
  float fStack00000000000000c4;
  float fStack00000000000000c8;
  undefined4 uStack00000000000000cc;
  undefined4 uStack00000000000000d0;
  undefined4 uStack00000000000000d4;
  undefined4 uStack00000000000000d8;
  undefined4 uStack00000000000000dc;
  undefined4 uStack00000000000000e0;
  undefined8 uStack00000000000000e4;
  undefined4 uStack00000000000000ec;
  undefined8 in_stack_000000f0;
  float in_stack_000000f8;
  undefined4 uStack00000000000000fc;
  undefined4 in_stack_00000100;
  undefined4 uStack0000000000000104;
  undefined4 in_stack_00000108;
  undefined4 uStack0000000000000110;
  undefined4 uStack0000000000000114;
  undefined4 in_stack_00000118;
  char in_stack_00000148;
  char in_stack_00000178;
  undefined4 uStack0000000000000180;
  float fStack0000000000000184;
  float fStack0000000000000188;
  undefined4 uStack000000000000018c;
  undefined4 in_stack_00000190;
  undefined4 in_stack_00000198;
  
  FUN_04077588();
  *(undefined1 *)(unaff_x23 + 0x261) = 1;
  lVar10 = *unaff_x20;
  unaff_x27[0xc] = 0;
  unaff_x27[0xd] = 0;
  in_stack_00000198 = 0;
  unaff_x27[0xe] = 0;
  iVar15 = *(int *)(lVar10 + 0xe4);
  in_stack_00000118 = 0;
  *(undefined8 *)((long)unaff_x27 + 0x54) = 0;
  *(undefined8 *)((long)unaff_x27 + 0x4c) = 0;
  unaff_x27[7] = 0;
  unaff_x27[6] = 0;
  unaff_x27[9] = 0;
  unaff_x27[8] = 0;
  *(undefined8 *)((long)unaff_x27 + 0x24) = 0;
  *(undefined8 *)((long)unaff_x27 + 0x1c) = 0;
  unaff_x27[1] = 0;
  *unaff_x27 = 0;
  unaff_x27[3] = 0;
  unaff_x27[2] = 0;
  puVar3 = PTR_DAT_092edde0;
  _uStack0000000000000110 = 0;
  in_stack_000000f0 = 0;
  in_stack_000000f8 = 0.0;
  uStack00000000000000fc = 0;
  in_stack_00000108 = 0;
  in_stack_00000100 = 0;
  uStack0000000000000104 = 0;
  uStack00000000000000ec = 0;
  if (iVar15 == 0) {
    thunk_FUN_040d65a8();
  }
  FUN_089d9e40(&stack0x000000c0,0);
  unaff_x27[0xd] = CONCAT44(uStack00000000000000cc,fStack00000000000000c8);
  unaff_x27[0xc] = CONCAT44(fStack00000000000000c4,fStack00000000000000c0);
  *(ulong *)((long)unaff_x27 + 0x74) = CONCAT44(uStack00000000000000d8,uStack00000000000000d4);
  *(ulong *)((long)unaff_x27 + 0x6c) = CONCAT44(uStack00000000000000d0,uStack00000000000000cc);
  FUN_089d9e40(&stack0x00000090 + 4,0);
  FUN_089d9e40(&stack0x00000090 + 4,0);
  *(ulong *)((long)in_stack_00000038 + 0x14) =
       CONCAT44(uStack00000000000000ac,uStack00000000000000a8);
  *(ulong *)((long)in_stack_00000038 + 0xc) =
       CONCAT44(uStack00000000000000a4,uStack00000000000000a0);
  in_stack_00000038[1] = CONCAT44(uStack00000000000000a0,in_stack_00000090._12_4_);
  *in_stack_00000038 = in_stack_00000090._4_8_;
  lVar10 = *(long *)puVar3;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_040d65a8(lVar10);
    lVar10 = *(long *)puVar3;
  }
  puVar5 = PTR_DAT_092f0428;
  puVar4 = PTR_DAT_09285d58;
  puVar3 = PTR_DAT_09285ae0;
  lVar11 = *(long *)(unaff_x22 + 0x20);
  if (lVar11 != 0) {
    puVar13 = *(undefined4 **)(lVar10 + 0xb8);
    uStack0000000000000034 = 0;
    uStack0000000000000080 = *puVar13;
    uStack000000000000007c = puVar13[1];
    iVar15 = 0;
    uStack0000000000000078 = puVar13[2];
    do {
      if (*(int *)(lVar11 + 0x18) <= iVar15) {
        return uStack0000000000000034;
      }
      FUN_05b22228(&stack0x000000c0,lVar11,iVar15,*(undefined8 *)puVar5);
      lVar10 = *(long *)(unaff_x22 + 0x20);
      unaff_x27[7] = CONCAT44(uStack00000000000000cc,fStack00000000000000c8);
      unaff_x27[6] = CONCAT44(fStack00000000000000c4,fStack00000000000000c0);
      unaff_x27[9] = CONCAT44(uStack00000000000000dc,uStack00000000000000d8);
      unaff_x27[8] = CONCAT44(uStack00000000000000d4,uStack00000000000000d0);
      *(undefined8 *)((long)unaff_x27 + 0x54) = uStack00000000000000e4;
      *(ulong *)((long)unaff_x27 + 0x4c) = CONCAT44(uStack00000000000000e0,uStack00000000000000dc);
      if (lVar10 == 0) break;
      iVar1 = *(int *)(lVar10 + 0x18);
      iVar2 = 0;
      if (iVar1 != 0) {
        iVar2 = (iVar15 + 1) / iVar1;
      }
      FUN_05b22228(&stack0x00000090 + 4,lVar10,(iVar15 + 1) - iVar2 * iVar1,*(undefined8 *)puVar5);
      *(undefined8 *)((long)unaff_x27 + 0x24) = in_stack_000000b8;
      *(ulong *)((long)unaff_x27 + 0x1c) = CONCAT44(uStack00000000000000b4,uStack00000000000000b0);
      unaff_x27[1] = CONCAT44(uStack00000000000000a0,in_stack_00000090._12_4_);
      *unaff_x27 = in_stack_00000090._4_8_;
      unaff_x27[3] = CONCAT44(uStack00000000000000b0,uStack00000000000000ac);
      unaff_x27[2] = CONCAT44(uStack00000000000000a8,uStack00000000000000a4);
      if (in_stack_00000178 == '\0') {
        if (in_stack_00000148 == '\0') goto LAB_07a34620;
        goto LAB_07a34ad8;
      }
      if (in_stack_00000148 == '\0') {
LAB_07a34620:
        if (*(long *)(unaff_x22 + 0x20) == 0) break;
        if (*(int *)(*(long *)(unaff_x22 + 0x20) + 0x18) == 1) goto LAB_07a34634;
        FUN_07a35940(&stack0x000000c0,&stack0x00000150);
        uVar23 = uStack00000000000000d8;
        uVar9 = uStack00000000000000d0;
        uVar8 = uStack00000000000000cc;
        fVar24 = fStack00000000000000c8;
        fVar7 = fStack00000000000000c4;
        fVar6 = fStack00000000000000c0;
        FUN_07a35940(&stack0x000000c0,&stack0x00000120);
        uVar19 = uStack00000000000000cc;
        uVar21 = uStack00000000000000d0;
        fVar16 = (float)FUN_07a359dc(&stack0x00000150);
        fVar18 = fVar16;
        fVar29 = fVar7;
        fVar28 = fVar24;
        fVar25 = (float)FUN_07a34b20(fVar6);
        fVar26 = *unaff_x21;
        fVar20 = unaff_x21[1];
        fVar27 = unaff_x21[2];
        fVar31 = unaff_x21[3];
        fVar30 = unaff_x21[4];
        fVar32 = unaff_x21[5];
        if (DAT_09885627 == '\0') {
          FUN_04077588(puVar4);
          DAT_09885627 = '\x01';
        }
        fVar31 = fVar28 * fVar32 + fVar25 * fVar31 + fVar29 * fVar30;
        fVar32 = ABS(fVar31);
        if (fVar32 <= 0.0) {
          fVar32 = 0.0;
        }
        fVar22 = **(float **)(*(long *)puVar4 + 0xb8) * 8.0;
        fVar30 = fVar32 * DAT_01aecc74;
        if (fVar32 * DAT_01aecc74 <= fVar22) {
          fVar30 = fVar22;
        }
        if (fVar30 <= ABS(0.0 - fVar31)) {
          fVar28 = fVar28 * fVar27;
          fVar18 = -(fVar28 + fVar26 * fVar25 + fVar29 * fVar20) - fVar18;
          if (fVar18 / fVar31 <= 0.0) goto LAB_07a34ad8;
          uVar17 = UnityEngine_TextCore_Text_FontAsset__DestroyAtlasTextures();
          FUN_07a33df0(uVar17);
          fStack0000000000000184 = fVar7;
          uStack0000000000000180 = FUN_07a34f0c(fVar6,fVar7,fVar24,fVar16,uVar19,uVar21);
          fStack0000000000000188 = fVar24;
          uStack000000000000018c = FUN_089b8ef8(uVar8,0);
          in_stack_00000190 = uVar9;
          in_stack_00000198 = uVar23;
LAB_07a34a50:
          fVar7 = fStack0000000000000188;
          fVar6 = fStack0000000000000184;
          uVar8 = uStack0000000000000180;
          if (*(int *)(*(long *)PTR_DAT_092edde0 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          FUN_07a260e4(uVar17,fVar18,fVar28,uVar8,fVar6,fVar7,&stack0x00000110,0);
          uVar12 = FUN_07a2d570(uStack0000000000000080,uStack000000000000007c,uStack0000000000000078
                                ,&stack0x00000110);
          if ((uVar12 & 1) != 0) {
            uStack000000000000007c = uStack0000000000000114;
            uStack0000000000000080 = uStack0000000000000110;
            uStack0000000000000078 = in_stack_00000118;
            FUN_079e2784(in_stack_00000038,&stack0x00000180,0);
            uStack0000000000000034 = 1;
          }
        }
      }
      else {
LAB_07a34634:
        FUN_07a35940(&stack0x000000c0,&stack0x00000150);
        fVar7 = fStack00000000000000c8;
        fVar6 = fStack00000000000000c4;
        fVar18 = fStack00000000000000c0;
        in_stack_000000f0 = CONCAT44(fStack00000000000000c4,fStack00000000000000c0);
        fVar24 = unaff_x21[3];
        fVar29 = unaff_x21[4];
        fVar28 = unaff_x21[5];
        in_stack_000000f8 = fStack00000000000000c8;
        uStack0000000000000104 = uStack00000000000000d4;
        in_stack_00000108 = uStack00000000000000d8;
        uStack00000000000000fc = uStack00000000000000cc;
        in_stack_00000100 = uStack00000000000000d0;
        if (DAT_098854e7 == '\0') {
          FUN_04077588(puVar3);
          DAT_098854e7 = '\x01';
        }
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        fVar16 = SQRT(fVar28 * fVar28 + fVar24 * fVar24 + fVar29 * fVar29);
        if (fVar16 <= DAT_01aecf88) {
          if (DAT_098854f1 == '\0') {
            FUN_04077588(PTR_DAT_09285d60);
            DAT_098854f1 = '\x01';
          }
          pfVar14 = *(float **)(*(long *)PTR_DAT_09285d60 + 0xb8);
          fVar24 = *pfVar14;
          fVar29 = pfVar14[1];
          fVar16 = pfVar14[2];
        }
        else {
          fVar24 = -fVar24 / fVar16;
          fVar29 = -fVar29 / fVar16;
          fVar16 = -fVar28 / fVar16;
        }
        fVar32 = *unaff_x21;
        fVar25 = unaff_x21[1];
        fVar28 = unaff_x21[2];
        fVar27 = unaff_x21[3];
        fVar31 = unaff_x21[4];
        fVar26 = unaff_x21[5];
        if (DAT_09885627 == '\0') {
          FUN_04077588(puVar4);
          DAT_09885627 = '\x01';
        }
        fVar26 = fVar16 * fVar26 + fVar24 * fVar27 + fVar29 * fVar31;
        fVar27 = ABS(fVar26);
        if (fVar27 <= 0.0) {
          fVar27 = 0.0;
        }
        fVar20 = **(float **)(*(long *)puVar4 + 0xb8) * 8.0;
        fVar31 = fVar27 * DAT_01aecc74;
        if (fVar27 * DAT_01aecc74 <= fVar20) {
          fVar31 = fVar20;
        }
        if (fVar31 <= ABS(0.0 - fVar26)) {
          fVar28 = fVar16 * fVar28 + fVar24 * fVar32 + fVar29 * fVar25;
          fVar18 = (fVar7 * fVar16 + fVar18 * fVar24 + fVar6 * fVar29) - fVar28;
          if (0.0 < fVar18 / fVar26) {
            uVar17 = UnityEngine_TextCore_Text_FontAsset__DestroyAtlasTextures();
            FUN_079e2784(&stack0x00000180,&stack0x000000f0,0);
            goto LAB_07a34a50;
          }
        }
      }
LAB_07a34ad8:
      lVar11 = *(long *)(unaff_x22 + 0x20);
      iVar15 = iVar15 + 1;
    } while (lVar11 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


