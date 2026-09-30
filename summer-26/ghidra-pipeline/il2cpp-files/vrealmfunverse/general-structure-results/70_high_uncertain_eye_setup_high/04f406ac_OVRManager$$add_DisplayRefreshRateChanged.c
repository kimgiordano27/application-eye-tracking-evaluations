/*
FUNCTION_NAME: OVRManager$$add_DisplayRefreshRateChanged
ENTRY_POINT: 04f406ac
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__add_DisplayRefreshRateChanged(float param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  bool in_NG;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  float *pfVar7;
  float *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long *unaff_x27;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  float in_s4;
  float in_s6;
  float in_s7;
  float unaff_s8;
  float fVar14;
  float unaff_s9;
  float fVar15;
  float unaff_s10;
  float unaff_s11;
  float fVar16;
  float unaff_s13;
  float fVar17;
  undefined8 uVar18;
  float fStack0000000000000004;
  float fStack000000000000005c;
  float fStack0000000000000064;
  float fStack000000000000006c;
  float fStack0000000000000074;
  float fStack0000000000000078;
  float fStack000000000000007c;
  float fStack0000000000000080;
  float fStack0000000000000084;
  undefined8 in_stack_00000088;
  float fStack00000000000000c8;
  float fStack00000000000000cc;
  float fStack00000000000000d0;
  undefined8 uStack00000000000000d4;
  float fStack00000000000000dc;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined4 uStack00000000000000f8;
  undefined4 uStack00000000000000fc;
  undefined4 uStack0000000000000100;
  undefined8 uStack0000000000000104;
  undefined8 in_stack_00000160;
  float fStack0000000000000168;
  float fStack000000000000016c;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  undefined8 in_stack_00000260;
  undefined8 in_stack_00000268;
  undefined8 in_stack_00000270;
  undefined8 in_stack_00000278;
  undefined8 in_stack_00000280;
  undefined8 in_stack_00000288;
  float in_stack_000002a0;
  
  if (!in_NG) {
    fVar11 = in_s4 * unaff_s8 + in_s7 * unaff_s10 + in_s6 * unaff_s9;
    in_s7 = in_s7 - (unaff_s10 * fVar11) / param_1;
    in_s6 = in_s6 - (unaff_s9 * fVar11) / param_1;
    in_s4 = in_s4 - (unaff_s8 * fVar11) / param_1;
  }
  fVar14 = unaff_s11 - fStack0000000000000080;
  fVar11 = *(float *)(unaff_x20 + 0x34);
  if (fVar14 <= *(float *)(unaff_x20 + 0x34)) {
    fVar11 = fVar14;
  }
  if (*(char *)(unaff_x23 + 0xcaa) == '\0') {
    FUN_02b3c81c(PTR_DAT_06312438);
    *(undefined1 *)(unaff_x23 + 0xcaa) = 1;
  }
                    /* try { // try from 04f4076c to 0504077b has its CatchHandler @ 04f407cc */
                    /* try { // try from 04f4077c to 050407d3 has its CatchHandler @ 04f40298 */
  fStack0000000000000064 =
       fStack0000000000000080 + fVar11 * *(float *)(*(long *)(*unaff_x22 + 0xb8) + 0x1c);
  fStack000000000000005c =
       fStack0000000000000078 + fVar11 * *(float *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
  fStack0000000000000004 = in_s6;
  fStack0000000000000074 = in_s7;
  uVar4 = FUN_04f40dd8();
  cVar3 = DAT_066c2035;
  fVar16 = fStack0000000000000074;
  fStack000000000000006c = unaff_s13;
  if ((uVar4 & 1) != 0) {
    fVar16 = in_stack_00000088._4_4_ - fStack0000000000000078;
    fVar15 = unaff_s13 - fStack000000000000007c;
    unaff_x21[1] = in_stack_00000268;
    *unaff_x21 = in_stack_00000260;
    unaff_x21[3] = in_stack_00000278;
    unaff_x21[2] = in_stack_00000270;
    fVar17 = fVar15 * fVar15 + fVar16 * fVar16 + fVar14 * fVar14;
    unaff_x21[5] = in_stack_00000288;
    unaff_x21[4] = in_stack_00000280;
    if (cVar3 == '\0') {
      FUN_02b3c81c(PTR_DAT_06315600);
      DAT_066c2035 = '\x01';
    }
    puVar1 = PTR_DAT_06312c90;
    fVar8 = ABS(fVar17);
    if (fVar8 <= 0.0) {
      fVar8 = 0.0;
    }
    fVar12 = **(float **)(*unaff_x27 + 0xb8) * 8.0;
    fVar9 = fVar8 * DAT_010326fc;
    if (fVar8 * DAT_010326fc <= fVar12) {
      fVar9 = fVar12;
    }
    if (ABS(0.0 - fVar17) < fVar9) {
LAB_04f409a8:
      puVar2 = System_Collections_Generic_Dictionary<OVRSpatialAnchor,_Guid>_TypeInfo;
      FUN_03ad9c7c(&stack0x00000290,&stack0x00000260,
                   *(undefined8 *)
                    System_Collections_Generic_Dictionary<OVRSpatialAnchor,_Guid>_TypeInfo);
      uVar6 = *(undefined8 *)(unaff_x24 + 0xac);
      *(undefined8 *)(unaff_x24 + 0x24) = *(undefined8 *)(unaff_x24 + 0xb4);
      *(undefined8 *)(unaff_x24 + 0x1c) = uVar6;
      fVar16 = (float)FUN_05d1b860(&stack0x00000200,0);
      fVar14 = (float)uVar6;
      FUN_03ad9c7c((long)&stack0x00000160 + 4,&stack0x00000260,*(undefined8 *)puVar2);
      fVar8 = (float)*(undefined8 *)(unaff_x25 + 0x68);
      uVar6 = *(undefined8 *)(unaff_x25 + 0x74);
      *(undefined8 *)(unaff_x24 + 0x24) = *(undefined8 *)(unaff_x25 + 0x7c);
      *(undefined8 *)(unaff_x24 + 0x1c) = uVar6;
      fVar17 = (float)FUN_05d1b848(&stack0x00000200,0);
      FUN_03ad9c7c(&stack0x00000138,&stack0x00000260,*(undefined8 *)puVar2);
      uVar18 = *(undefined8 *)(unaff_x25 + 0x48);
      *(undefined8 *)(unaff_x24 + 0x24) = *(undefined8 *)(unaff_x25 + 0x50);
      *(undefined8 *)(unaff_x24 + 0x1c) = uVar18;
      fVar15 = (float)FUN_05d1b878(&stack0x00000200,0);
      if (DAT_066c1d9d == '\0') {
        FUN_02b3c81c(PTR_DAT_06312c90);
        DAT_066c1d9d = '\x01';
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      fVar9 = SQRT(fVar14 * fVar14 + fVar16 * fVar16 + in_stack_000002a0 * in_stack_000002a0);
      if (fVar9 <= DAT_01032864) {
        if (*(char *)(unaff_x26 + 0xd97) == '\0') {
          FUN_02b3c81c(PTR_DAT_06312438);
          *(undefined1 *)(unaff_x26 + 0xd97) = 1;
        }
        uVar18 = **(undefined8 **)(*unaff_x22 + 0xb8);
        fVar9 = *(float *)(*(undefined8 **)(*unaff_x22 + 0xb8) + 1);
      }
      else {
        uVar18 = CONCAT44(-in_stack_000002a0 / fVar9,-fVar16 / fVar9);
        fVar9 = -fVar14 / fVar9;
      }
      FUN_03ad9c7c((undefined1 *)((long)&stack0x00000100 + 0xc),&stack0x00000260,
                   *(undefined8 *)puVar2);
      uVar13 = *(undefined8 *)(unaff_x25 + 0x1c);
      *(undefined8 *)(unaff_x24 + 0x24) = *(undefined8 *)(unaff_x25 + 0x24);
      *(undefined8 *)(unaff_x24 + 0x1c) = uVar13;
      lVar5 = FUN_05d1b79c(&stack0x00000200,0);
      FUN_03ad9c7c(&stack0x000000e0,&stack0x00000260,*(undefined8 *)puVar2);
      *(undefined8 *)(unaff_x24 + 0x24) = uStack0000000000000104;
      *(ulong *)(unaff_x24 + 0x1c) = CONCAT44(uStack0000000000000100,uStack00000000000000fc);
      fVar12 = (float)FUN_05d1b878(&stack0x00000200,0);
      if (lVar5 == 0) goto LAB_04f40dd4;
      fStack00000000000000d0 = (float)uVar6 + fVar14 * fVar15;
      fStack00000000000000cc = fVar8 + in_stack_000002a0 * fVar15;
      fStack00000000000000c8 = fVar17 + fVar16 * fVar15;
      uStack00000000000000d4 = uVar18;
      fStack00000000000000dc = fVar9;
      uVar4 = FUN_05d0e0dc(fVar12 + DAT_010328d0,lVar5,&stack0x000000c8,&stack0x000001d0,0);
      if ((uVar4 & 1) != 0) {
        uVar18 = *(undefined8 *)(unaff_x25 + 0xe0);
        uVar6 = *(undefined8 *)System_Collections_Generic_Dictionary<object,_int>_TypeInfo;
        *(undefined8 *)(unaff_x24 + 0xb4) = *(undefined8 *)(unaff_x25 + 0xe8);
        *(undefined8 *)(unaff_x24 + 0xac) = uVar18;
        FUN_03ad9c4c(&stack0x00000260,&stack0x00000290,uVar6);
      }
    }
    else {
      FUN_03ad9c7c(&stack0x00000290,&stack0x00000260,
                   *(undefined8 *)
                    System_Collections_Generic_Dictionary<OVRSpatialAnchor,_Guid>_TypeInfo);
      uVar6 = *(undefined8 *)(unaff_x24 + 0xac);
      *(undefined8 *)(unaff_x24 + 0x24) = *(undefined8 *)(unaff_x24 + 0xb4);
      *(undefined8 *)(unaff_x24 + 0x1c) = uVar6;
      fVar8 = in_stack_000002a0;
      fVar9 = (float)FUN_05d1b860(&stack0x00000200,0);
      if (DAT_066c1d9d == '\0') {
        FUN_02b3c81c(PTR_DAT_06312c90);
        DAT_066c1d9d = '\x01';
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      fVar17 = SQRT(fVar17);
      if (fVar17 <= DAT_01032864) {
        if (*(char *)(unaff_x26 + 0xd97) == '\0') {
          FUN_02b3c81c(PTR_DAT_06312438);
          *(undefined1 *)(unaff_x26 + 0xd97) = 1;
        }
        pfVar7 = *(float **)(*unaff_x22 + 0xb8);
        fVar16 = *pfVar7;
        fVar14 = pfVar7[1];
        fVar15 = pfVar7[2];
      }
      else {
        fVar16 = fVar16 / fVar17;
        fVar14 = fVar14 / fVar17;
        fVar15 = fVar15 / fVar17;
      }
      if (DAT_010328d0 < ABS((float)uVar6 * fVar15 + fVar9 * fVar16 + fVar8 * fVar14))
      goto LAB_04f409a8;
    }
    FUN_03ad9c7c(&stack0x00000290,&stack0x00000260,
                 *(undefined8 *)
                  System_Collections_Generic_Dictionary<OVRSpatialAnchor,_Guid>_TypeInfo);
    FUN_04f410a0((long)&stack0x00000160 + 4,fStack0000000000000074,in_s6,in_s4);
    in_s4 = fStack000000000000016c;
    in_s6 = fStack0000000000000168;
    fVar16 = in_stack_00000160._4_4_;
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    fVar17 = unaff_s11 + in_s6;
    fVar15 = fStack000000000000006c + in_s4;
    fVar14 = (float)FUN_05d0be20(*(long *)(unaff_x20 + 0x20),0);
    uVar4 = FUN_04f41240(in_stack_00000088._4_4_ + fVar16,fVar17,fVar15,fStack0000000000000084,
                         fVar14 - fStack0000000000000084);
    if ((uVar4 & 1) != 0) {
      uVar10 = FUN_05d1b848(&stack0x00000230,0);
      if (*(char *)(unaff_x23 + 0xcaa) == '\0') {
        FUN_02b3c81c(PTR_DAT_06312438);
        *(undefined1 *)(unaff_x23 + 0xcaa) = 1;
      }
      lVar5 = *(long *)(*unaff_x22 + 0xb8);
      fStack0000000000000004 = fStack0000000000000064 + in_s6;
      uVar4 = FUN_04f41684(uVar10,fVar17,fVar15,*(undefined4 *)(lVar5 + 0x18),
                           *(undefined4 *)(lVar5 + 0x1c),*(undefined4 *)(lVar5 + 0x20),
                           (long)&stack0x000001c8 + 4);
      if ((uVar4 & 1) != 0) {
        FUN_05d1b848(&stack0x00000230,0);
        fVar14 = *(float *)(unaff_x20 + 0x34);
        if (fVar17 - (fStack0000000000000080 - fStack0000000000000084) <= fVar14) {
          FUN_05d1b860(&stack0x00000230,0);
          uVar4 = FUN_04f3f530();
          if ((uVar4 & 1) != 0) {
            if (in_s6 <= fVar11 - in_stack_000001c8._4_4_) {
              in_s6 = fVar11 - in_stack_000001c8._4_4_;
            }
            FUN_02cf3ac4(0);
            fStack0000000000000004 = fVar14 * in_s6;
            uVar4 = FUN_04f40dd8(fStack0000000000000078,fStack0000000000000080,
                                 fStack000000000000007c,in_stack_00000088._4_4_,unaff_s11,
                                 fStack000000000000006c,fStack0000000000000084);
            if ((uVar4 & 1) == 0) {
              *unaff_x19 = fVar16;
              unaff_x19[1] = in_s6;
              unaff_x19[2] = in_s4;
              return 1;
            }
          }
        }
      }
    }
    return 0;
  }
LAB_04f40dd4:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


