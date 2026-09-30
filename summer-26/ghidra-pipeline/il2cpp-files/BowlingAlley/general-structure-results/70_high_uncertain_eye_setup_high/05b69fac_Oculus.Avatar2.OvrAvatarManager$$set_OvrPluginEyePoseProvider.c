/*
FUNCTION_NAME: Oculus.Avatar2.OvrAvatarManager$$set_OvrPluginEyePoseProvider
ENTRY_POINT: 05b69fac
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Oculus_Avatar2_OvrAvatarManager__set_OvrPluginEyePoseProvider
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  undefined4 extraout_w1;
  undefined8 *puVar5;
  float *pfVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  char *unaff_x19;
  long unaff_x20;
  undefined8 *puVar9;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined8 *unaff_x23;
  char cVar10;
  long unaff_x25;
  long *unaff_x26;
  undefined8 *unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  float fVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  undefined8 unaff_d8;
  float fVar22;
  float unaff_s10;
  float fVar23;
  undefined4 unaff_s11;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 uVar28;
  float in_stack_00000040;
  int in_stack_00000050;
  undefined8 in_stack_00000060;
  int in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000090;
  ulong in_stack_00000098;
  float in_stack_000000a0;
  ulong in_stack_000000a8;
  float fStack00000000000000b0;
  float fStack00000000000000b4;
  ulong in_stack_000000b8;
  float fStack00000000000000c0;
  float fStack00000000000000c4;
  undefined8 in_stack_000000c8;
  float in_stack_000000d0;
  ulong in_stack_000000d8;
  float in_stack_000000e0;
  ulong in_stack_000000f0;
  float in_stack_000000f8;
  float fStack0000000000000100;
  float fStack0000000000000104;
  float in_stack_00000108;
  float fStack0000000000000110;
  float fStack0000000000000114;
  float in_stack_00000118;
  float in_stack_00000128;
  float in_stack_00000138;
  float in_stack_00000148;
  float in_stack_00000198;
  undefined8 in_stack_000001a0;
  long in_stack_000001c8;
  
  fVar15 = in_stack_00000198;
  fVar11 = in_stack_000001a0._4_4_;
  fVar22 = (float)((ulong)unaff_d8 >> 0x20);
  if (*(int *)(param_3 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    param_3 = *unaff_x26;
  }
  fVar17 = in_stack_00000108;
  fVar14 = fStack0000000000000104;
  fVar25 = fStack0000000000000100;
  cVar10 = DAT_076cfdbf;
  uVar12 = *(undefined8 *)(*(long *)(param_3 + 0xb8) + 0x184);
  if (((float)param_1 + (float)param_2 != (float)uVar12 ||
       (float)((ulong)param_1 >> 0x20) + (float)((ulong)param_2 >> 0x20) !=
       (float)((ulong)uVar12 >> 0x20)) ||
     (fVar15 + fVar11 != *(float *)(*(long *)(param_3 + 0xb8) + 0x18c))) {
    *(undefined8 *)(unaff_x25 + 0x88) = 0;
    *(undefined8 *)(unaff_x25 + 0x80) = 0;
    *(undefined8 *)(unaff_x25 + 0x98) = 0;
    *(undefined8 *)(unaff_x25 + 0x90) = 0;
    *(undefined8 *)(unaff_x25 + 0x78) = 0;
    *(undefined8 *)(unaff_x25 + 0x70) = 0;
    if (cVar10 == '\0') {
      thunk_FUN_032e1da0(PTR_DAT_07280c40);
      DAT_076cfdbf = '\x01';
    }
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar12 = *unaff_x27;
    uVar13 = unaff_x27[3];
    uVar16 = unaff_x27[2];
    uVar18 = unaff_x27[5];
    uVar28 = unaff_x27[4];
    *(undefined8 *)(unaff_x25 + 0x48) = unaff_x27[1];
    *(undefined8 *)(unaff_x25 + 0x40) = uVar12;
    *(undefined8 *)(unaff_x25 + 0x58) = uVar13;
    *(undefined8 *)(unaff_x25 + 0x50) = uVar16;
    *(undefined8 *)(unaff_x25 + 0x68) = uVar18;
    *(undefined8 *)(unaff_x25 + 0x60) = uVar28;
    FUN_05abb0f8(&stack0x00000190,&stack0x00000160,0);
    fVar20 = in_stack_00000118;
    fVar11 = fStack0000000000000114;
    fVar15 = fStack0000000000000110;
    cVar10 = DAT_076cfdbf;
    in_stack_000000d8 =
         CONCAT44(fVar14 + ((float)((ulong)*(undefined8 *)(unaff_x25 + 0x70) >> 0x20) -
                           (float)((ulong)*(undefined8 *)(unaff_x25 + 0x7c) >> 0x20)) * 0.5,
                  fVar25 + ((float)*(undefined8 *)(unaff_x25 + 0x70) -
                           (float)*(undefined8 *)(unaff_x25 + 0x7c)) * 0.5);
    in_stack_000000e0 = fVar17 + (in_stack_00000198 - in_stack_000001a0._4_4_) * 0.5;
    *(undefined8 *)(unaff_x25 + 0x88) = 0;
    *(undefined8 *)(unaff_x25 + 0x80) = 0;
    *(undefined8 *)(unaff_x25 + 0x98) = 0;
    *(undefined8 *)(unaff_x25 + 0x90) = 0;
    *(undefined8 *)(unaff_x25 + 0x78) = 0;
    *(undefined8 *)(unaff_x25 + 0x70) = 0;
    if (cVar10 == '\0') {
      thunk_FUN_032e1da0(PTR_DAT_07280c40);
      DAT_076cfdbf = '\x01';
    }
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar12 = *unaff_x27;
    uVar13 = unaff_x27[3];
    uVar16 = unaff_x27[2];
    uVar18 = unaff_x27[5];
    uVar28 = unaff_x27[4];
    *(undefined8 *)(unaff_x25 + 0x48) = unaff_x27[1];
    *(undefined8 *)(unaff_x25 + 0x40) = uVar12;
    *(undefined8 *)(unaff_x25 + 0x58) = uVar13;
    *(undefined8 *)(unaff_x25 + 0x50) = uVar16;
    *(undefined8 *)(unaff_x25 + 0x68) = uVar18;
    *(undefined8 *)(unaff_x25 + 0x60) = uVar28;
    FUN_05abb0f8(&stack0x00000190,&stack0x00000160,0);
    in_stack_000000c8 =
         CONCAT44(fVar11 - ((float)((ulong)*(undefined8 *)(unaff_x25 + 0x70) >> 0x20) +
                           (float)((ulong)*(undefined8 *)(unaff_x25 + 0x7c) >> 0x20)),
                  fVar15 - ((float)*(undefined8 *)(unaff_x25 + 0x70) +
                           (float)*(undefined8 *)(unaff_x25 + 0x7c)));
    in_stack_000000d0 = fVar20 - (in_stack_00000198 + in_stack_000001a0._4_4_);
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar3 = FUN_05b68fb8(in_stack_00000080,in_stack_00000070,&stack0x000000d8,&stack0x000000c8,
                         (long)&stack0x000000c0 + 4,0);
    if ((uVar3 & 1) != 0) {
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      fVar15 = -fStack00000000000000c4;
      if (0.0 <= fStack00000000000000c4) {
        fVar15 = fStack00000000000000c4;
      }
      fVar11 = -in_stack_00000040;
      if (0.0 <= in_stack_00000040) {
        fVar11 = in_stack_00000040;
      }
      fVar25 = fStack00000000000000c4;
      if (in_stack_00000040 <= fStack00000000000000c4 && (uint)ABS(in_stack_00000040) < 0x7f800001)
      {
        fVar25 = in_stack_00000040;
      }
      if (fVar11 <= fVar15) {
        fStack00000000000000c4 = in_stack_00000040;
      }
      if (fVar15 != fVar11) {
        fVar25 = fStack00000000000000c4;
      }
      if (in_stack_00000040 != fVar25) {
        if (*(int *)(*(long *)PTR_DAT_07282e30 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        fVar22 = (float)((ulong)*(undefined8 *)((long)unaff_x23 + 0xc) >> 0x20) +
                 (float)((ulong)*unaff_x23 >> 0x20) * fVar25;
        unaff_s10 = *(float *)((long)unaff_x23 + 0x14) + fVar25 * *(float *)(unaff_x23 + 1);
        unaff_s11 = FUN_05b692cc(fStack0000000000000100,fStack0000000000000104,in_stack_00000108,
                                 fStack0000000000000110,fStack0000000000000114,in_stack_00000118);
        in_stack_000000f0 = in_stack_000000d8;
        in_stack_000000f8 = in_stack_000000e0;
        *(float *)(unaff_x19 + 0x2c) = in_stack_000000d0;
        *(undefined8 *)(unaff_x19 + 0x24) = in_stack_000000c8;
      }
      in_stack_00000060._4_4_ = 1;
      in_stack_00000040 = fVar25;
    }
  }
  fVar15 = *(float *)(unaff_x21 + 0x1d4);
  if ((CONCAT11(fVar15 != fStack0000000000000114,
                *(float *)(unaff_x21 + 0x1d0) != fStack0000000000000110) == 0 &&
       *(float *)(unaff_x21 + 0x1d8) == in_stack_00000118) || (*(char *)(unaff_x21 + 0x204) == '\0')
     ) {
    cVar10 = '\0';
  }
  else {
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    FUN_05b69570();
    puVar1 = PTR_DAT_07282e38;
    fStack0000000000000100 =
         (float)FUN_045c69d0(unaff_x21 + 0x90,in_stack_00000068 + -1,*(undefined8 *)PTR_DAT_07282e38
                            );
    uVar12 = *(undefined8 *)(unaff_x21 + 0x1d0);
    fVar25 = *(float *)(unaff_x21 + 0x1d8);
    fStack0000000000000104 = fVar15;
    in_stack_00000108 = fStack0000000000000114;
    fVar11 = (float)FUN_045c69d0(unaff_x21 + 0xa0,in_stack_00000068 + -1,*(undefined8 *)puVar1);
    fStack00000000000000c0 = fVar25 * fStack0000000000000114;
    in_stack_000000b8 = CONCAT44((float)((ulong)uVar12 >> 0x20) * fVar15,(float)uVar12 * fVar11);
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar3 = FUN_05b68fb8(in_stack_00000080,in_stack_00000070,&stack0x00000100,&stack0x000000b8,
                         (long)&stack0x000000b0 + 4,0);
    unaff_x28 = (long *)PTR_DAT_07280c40;
    if ((uVar3 & 1) == 0) {
      cVar10 = '\x01';
    }
    else {
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      fVar15 = -fStack00000000000000b4;
      if (0.0 <= fStack00000000000000b4) {
        fVar15 = fStack00000000000000b4;
      }
      fVar11 = -in_stack_00000040;
      if (0.0 <= in_stack_00000040) {
        fVar11 = in_stack_00000040;
      }
      fVar25 = fStack00000000000000b4;
      if (in_stack_00000040 <= fStack00000000000000b4 && (uint)ABS(in_stack_00000040) < 0x7f800001)
      {
        fVar25 = in_stack_00000040;
      }
      if (fVar11 <= fVar15) {
        fStack00000000000000b4 = in_stack_00000040;
      }
      if (fVar15 != fVar11) {
        fVar25 = fStack00000000000000b4;
      }
      if (in_stack_00000040 != fVar25) {
        if (*(int *)(*(long *)PTR_DAT_07282e30 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        fVar22 = (float)((ulong)*(undefined8 *)((long)unaff_x23 + 0xc) >> 0x20) +
                 (float)((ulong)*unaff_x23 >> 0x20) * fVar25;
        unaff_s10 = *(float *)((long)unaff_x23 + 0x14) + fVar25 * *(float *)(unaff_x23 + 1);
        unaff_s11 = FUN_05b692cc(fStack0000000000000100,fStack0000000000000104,in_stack_00000108,
                                 in_stack_000000b8 & 0xffffffff,in_stack_000000b8._4_4_,
                                 fStack00000000000000c0);
        *unaff_x19 = '\x01';
        in_stack_000000f0 = CONCAT44(fStack0000000000000104,fStack0000000000000100);
        in_stack_000000f8 = in_stack_00000108;
        *(float *)(unaff_x19 + 0x2c) = fStack00000000000000c0;
        *(ulong *)(unaff_x19 + 0x24) = in_stack_000000b8;
      }
      cVar10 = '\x01';
      in_stack_00000060._4_4_ = 1;
      in_stack_00000040 = fVar25;
    }
  }
  cVar2 = DAT_076cfdbf;
  *(undefined8 *)(unaff_x25 + 0x88) = 0;
  *(undefined8 *)(unaff_x25 + 0x80) = 0;
  *(undefined8 *)(unaff_x25 + 0x98) = 0;
  *(undefined8 *)(unaff_x25 + 0x90) = 0;
  *(undefined8 *)(unaff_x25 + 0x78) = 0;
  *(undefined8 *)(unaff_x25 + 0x70) = 0;
  if (cVar2 == '\0') {
    thunk_FUN_032e1da0(PTR_DAT_07280c40);
    DAT_076cfdbf = '\x01';
  }
  if (*(int *)(*unaff_x28 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  puVar9 = (undefined8 *)(unaff_x20 + (long)(in_stack_00000050 + -1) * 0x30);
  uVar12 = *puVar9;
  uVar13 = puVar9[3];
  uVar16 = puVar9[2];
  uVar18 = puVar9[5];
  uVar28 = puVar9[4];
  *(undefined8 *)(unaff_x25 + 0x48) = puVar9[1];
  *(undefined8 *)(unaff_x25 + 0x40) = uVar12;
  *(undefined8 *)(unaff_x25 + 0x58) = uVar13;
  *(undefined8 *)(unaff_x25 + 0x50) = uVar16;
  *(undefined8 *)(unaff_x25 + 0x68) = uVar18;
  *(undefined8 *)(unaff_x25 + 0x60) = uVar28;
  FUN_05abb0f8(&stack0x00000190,&stack0x00000160,0);
  fVar11 = in_stack_000001a0._4_4_;
  fVar15 = in_stack_00000198;
  fVar25 = (float)uVar28;
  lVar4 = *unaff_x26;
  uVar12 = *(undefined8 *)(unaff_x25 + 0x70);
  uVar16 = *(undefined8 *)(unaff_x25 + 0x7c);
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar4 = *unaff_x26;
  }
  uVar13 = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x184);
  fVar14 = (float)-(uint)((float)((ulong)uVar12 >> 0x20) + (float)((ulong)uVar16 >> 0x20) ==
                         (float)((ulong)uVar13 >> 0x20));
  if (((CONCAT44(fVar14,-(uint)((float)uVar12 + (float)uVar16 == (float)uVar13)) &
        CONCAT44(fVar14,fVar14) & 1) == 0) ||
     (fVar14 = fVar15 + fVar11, fVar14 != *(float *)(*(long *)(lVar4 + 0xb8) + 0x18c))) {
    uVar12 = *(undefined8 *)(unaff_x21 + 0x1d0);
    fVar15 = *(float *)(unaff_x21 + 0x1d8);
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    fVar11 = (float)FUN_045c69d0(unaff_x21 + 0xa0,in_stack_00000068 + -1,
                                 *(undefined8 *)PTR_DAT_07282e38);
    cVar2 = DAT_076cfdbf;
    *(undefined8 *)(unaff_x25 + 0x88) = 0;
    *(undefined8 *)(unaff_x25 + 0x80) = 0;
    *(undefined8 *)(unaff_x25 + 0x98) = 0;
    *(undefined8 *)(unaff_x25 + 0x90) = 0;
    *(undefined8 *)(unaff_x25 + 0x78) = 0;
    *(undefined8 *)(unaff_x25 + 0x70) = 0;
    if (cVar2 == '\0') {
      thunk_FUN_032e1da0(PTR_DAT_07280c40);
      DAT_076cfdbf = '\x01';
    }
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar16 = *puVar9;
    uVar28 = puVar9[3];
    uVar13 = puVar9[2];
    uVar19 = puVar9[5];
    uVar18 = puVar9[4];
    *(undefined8 *)(unaff_x25 + 0x48) = puVar9[1];
    *(undefined8 *)(unaff_x25 + 0x40) = uVar16;
    *(undefined8 *)(unaff_x25 + 0x58) = uVar28;
    *(undefined8 *)(unaff_x25 + 0x50) = uVar13;
    *(undefined8 *)(unaff_x25 + 0x68) = uVar19;
    *(undefined8 *)(unaff_x25 + 0x60) = uVar18;
    FUN_05abb0f8(&stack0x00000190,&stack0x00000160,0);
    fVar21 = in_stack_00000108;
    fVar20 = fStack0000000000000104;
    fVar17 = fStack0000000000000100;
    cVar2 = DAT_076cfdbf;
    in_stack_000000a8 =
         CONCAT44((float)((ulong)uVar12 >> 0x20) * fVar14 +
                  (float)((ulong)*(undefined8 *)(unaff_x25 + 0x70) >> 0x20) +
                  (float)((ulong)*(undefined8 *)(unaff_x25 + 0x7c) >> 0x20),
                  (float)uVar12 * fVar11 +
                  (float)*(undefined8 *)(unaff_x25 + 0x70) +
                  (float)*(undefined8 *)(unaff_x25 + 0x7c));
    fStack00000000000000b0 = fVar15 * fVar25 + in_stack_00000198 + in_stack_000001a0._4_4_;
    *(undefined8 *)(unaff_x25 + 0x88) = 0;
    *(undefined8 *)(unaff_x25 + 0x80) = 0;
    *(undefined8 *)(unaff_x25 + 0x98) = 0;
    *(undefined8 *)(unaff_x25 + 0x90) = 0;
    *(undefined8 *)(unaff_x25 + 0x78) = 0;
    *(undefined8 *)(unaff_x25 + 0x70) = 0;
    if (cVar2 == '\0') {
      thunk_FUN_032e1da0(PTR_DAT_07280c40);
      DAT_076cfdbf = '\x01';
    }
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar12 = *puVar9;
    uVar13 = puVar9[3];
    uVar16 = puVar9[2];
    uVar18 = puVar9[5];
    uVar28 = puVar9[4];
    *(undefined8 *)(unaff_x25 + 0x48) = puVar9[1];
    *(undefined8 *)(unaff_x25 + 0x40) = uVar12;
    *(undefined8 *)(unaff_x25 + 0x58) = uVar13;
    *(undefined8 *)(unaff_x25 + 0x50) = uVar16;
    *(undefined8 *)(unaff_x25 + 0x68) = uVar18;
    *(undefined8 *)(unaff_x25 + 0x60) = uVar28;
    FUN_05abb0f8(&stack0x00000190,&stack0x00000160,0);
    in_stack_00000098 =
         CONCAT44(fVar20 + ((float)((ulong)*(undefined8 *)(unaff_x25 + 0x70) >> 0x20) -
                           (float)((ulong)*(undefined8 *)(unaff_x25 + 0x7c) >> 0x20)) * -0.5,
                  fVar17 + ((float)*(undefined8 *)(unaff_x25 + 0x70) -
                           (float)*(undefined8 *)(unaff_x25 + 0x7c)) * -0.5);
    in_stack_000000a0 = fVar21 + (in_stack_00000198 - in_stack_000001a0._4_4_) * -0.5;
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar3 = FUN_05b68fb8(in_stack_00000080,in_stack_00000070,&stack0x00000098,&stack0x000000a8,
                         (long)&stack0x00000090 + 4,0);
    if ((uVar3 & 1) == 0) goto LAB_05b6a7e8;
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    fVar15 = -in_stack_00000090._4_4_;
    if (0.0 <= in_stack_00000090._4_4_) {
      fVar15 = in_stack_00000090._4_4_;
    }
    fVar11 = -in_stack_00000040;
    if (0.0 <= in_stack_00000040) {
      fVar11 = in_stack_00000040;
    }
    fVar25 = in_stack_00000090._4_4_;
    if (in_stack_00000040 <= in_stack_00000090._4_4_ && (uint)ABS(in_stack_00000040) < 0x7f800001) {
      fVar25 = in_stack_00000040;
    }
    if (fVar11 <= fVar15) {
      in_stack_00000090._4_4_ = in_stack_00000040;
    }
    if (fVar15 != fVar11) {
      fVar25 = in_stack_00000090._4_4_;
    }
    if (in_stack_00000040 != fVar25) {
      if (*(int *)(*(long *)PTR_DAT_07282e30 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      fVar22 = (float)((ulong)*(undefined8 *)((long)unaff_x23 + 0xc) >> 0x20) +
               (float)((ulong)*unaff_x23 >> 0x20) * fVar25;
      unaff_s10 = *(float *)((long)unaff_x23 + 0x14) + fVar25 * *(float *)(unaff_x23 + 1);
      unaff_s11 = FUN_05b692cc(in_stack_00000098 & 0xffffffff,in_stack_00000098._4_4_,
                               in_stack_000000a0,in_stack_000000a8 & 0xffffffff,
                               in_stack_000000a8._4_4_,fStack00000000000000b0);
      *unaff_x19 = cVar10;
      in_stack_000000f0 = in_stack_00000098;
      in_stack_000000f8 = in_stack_000000a0;
      *(float *)(unaff_x19 + 0x2c) = fStack00000000000000b0;
      *(ulong *)(unaff_x19 + 0x24) = in_stack_000000a8;
    }
  }
  else {
LAB_05b6a7e8:
    if ((in_stack_00000060._4_4_ & 1) == 0) {
      uVar12 = 0;
      goto LAB_05b6a830;
    }
  }
  if (*unaff_x19 == '\0') {
    fVar15 = *(float *)(unaff_x21 + 0x158);
    fVar11 = *(float *)(unaff_x21 + 0x168);
    fVar25 = *(float *)(unaff_x21 + 0x178);
    puVar5 = (undefined8 *)(unaff_x21 + 0x180);
    pfVar6 = (float *)(unaff_x21 + 0x188);
    puVar9 = (undefined8 *)(unaff_x21 + 0x150);
    puVar8 = (undefined8 *)(unaff_x21 + 0x160);
    puVar7 = (undefined8 *)(unaff_x21 + 0x170);
  }
  else {
    puVar9 = (undefined8 *)&stack0x00000120;
    puVar8 = (undefined8 *)&stack0x00000130;
    puVar7 = (undefined8 *)&stack0x00000140;
    puVar5 = (undefined8 *)&stack0x00000150;
    pfVar6 = (float *)&stack0x00000158;
    fVar11 = in_stack_00000138;
    fVar25 = in_stack_00000148;
    fVar15 = in_stack_00000128;
  }
  uVar16 = *puVar5;
  fVar27 = *pfVar6;
  uVar28 = *puVar8;
  uVar12 = *puVar9;
  uVar13 = *puVar7;
  fVar22 = fVar22 * 100.0;
  fVar17 = unaff_s10 * 100.0;
  fVar14 = (float)FUN_03f27ee4(0);
  fVar14 = fVar14 / 100.0;
  fVar22 = fVar22 / 100.0;
  fVar17 = fVar17 / 100.0;
  *(undefined8 *)(unaff_x19 + 0x30) = unaff_x22;
  fVar23 = *(float *)(unaff_x21 + 600);
  fVar24 = *(float *)(unaff_x21 + 0x25c);
  fVar26 = *(float *)(unaff_x21 + 0x260);
  fVar20 = (float)uVar16 + (float)uVar13 * fVar17 + (float)uVar12 * fVar14 + (float)uVar28 * fVar22;
  fVar21 = (float)((ulong)uVar16 >> 0x20) +
           (float)((ulong)uVar13 >> 0x20) * fVar17 +
           (float)((ulong)uVar12 >> 0x20) * fVar14 + (float)((ulong)uVar28 >> 0x20) * fVar22;
  fVar27 = fVar27 + fVar25 * fVar17 + fVar15 * fVar14 + fVar11 * fVar22;
  if (DAT_076cfce7 == '\0') {
    thunk_FUN_032e1da0(PTR_DAT_07279c00);
    DAT_076cfce7 = '\x01';
  }
  fVar23 = fVar20 - fVar23;
  fVar24 = fVar21 - fVar24;
  fVar26 = fVar27 - fVar26;
  if (*(int *)(*(long *)PTR_DAT_07279c00 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  *(ulong *)(unaff_x19 + 0xc) = CONCAT44(fVar21,fVar20);
  *(float *)(unaff_x19 + 4) = SQRT(fVar26 * fVar26 + fVar23 * fVar23 + fVar24 * fVar24);
  *(float *)(unaff_x19 + 0x14) = fVar27;
  if (*(int *)(*unaff_x28 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  FUN_0457d534(unaff_x21 + 0x70,in_stack_00000068 + -1,*(undefined8 *)PTR_DAT_07282f80);
  *(undefined4 *)(unaff_x19 + 0x38) = extraout_w1;
  uVar12 = 1;
  *(undefined4 *)(unaff_x19 + 8) = unaff_s11;
  *(float *)(unaff_x19 + 0x20) = in_stack_000000f8;
  *(ulong *)(unaff_x19 + 0x18) = in_stack_000000f0;
LAB_05b6a830:
  if (*(long *)(unaff_x29 + 0x28) == in_stack_000001c8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar12);
}


