/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_resp_sessiongroup_get_stats_t_latency_packets_malformed_set
ENTRY_POINT: 0859caf8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_19;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_sessiongroup_get_stats_t_latency_packets_malformed_set
               (long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined *puVar12;
  undefined *puVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  ulong uVar17;
  void *pvVar18;
  ulong uVar19;
  undefined8 uVar20;
  int extraout_w1;
  int iVar21;
  int iVar22;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  undefined8 *puVar23;
  void *pvVar24;
  long unaff_x25;
  void *__src;
  long *unaff_x26;
  long lVar25;
  long lVar26;
  long lVar27;
  float fVar28;
  float fVar29;
  double dVar30;
  undefined8 uVar31;
  undefined8 uVar34;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined8 uVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [12];
  int iStack000000000000000c;
  int iStack0000000000000024;
  int iStack0000000000000040;
  float fStack0000000000000044;
  float fStack000000000000004c;
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
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  undefined4 in_stack_00000580;
  undefined4 in_stack_00000584;
  undefined4 in_stack_00000588;
  undefined4 in_stack_0000058c;
  undefined4 in_stack_00000590;
  undefined4 in_stack_00000594;
  undefined4 in_stack_00000598;
  undefined4 in_stack_0000059c;
  undefined4 in_stack_000005a0;
  undefined4 in_stack_000005a4;
  undefined4 in_stack_000005a8;
  undefined4 in_stack_000005ac;
  undefined8 uVar39;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  FUN_08998d30(param_1,0);
  FUN_05f7100c(unaff_x19 + 0x90,*unaff_x22);
  if (*(long *)(unaff_x19 + 0xa0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  FUN_08998d30(*(long *)(unaff_x19 + 0xa0),0);
  FUN_0859c4a8();
  if (unaff_x25 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  if (*(long *)(unaff_x25 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar27 = *(long *)(unaff_x25 + 0xd8);
  fStack000000000000004c = 0.0;
  iStack0000000000000040 = (int)*(undefined8 *)(unaff_x25 + 0x160);
  fStack0000000000000044 = (float)((ulong)*(undefined8 *)(unaff_x25 + 0x160) >> 0x20);
  uVar17 = FUN_083e3844(*(long *)(unaff_x25 + 0x1a0),0);
  if ((uVar17 & 1) == 0) {
    iVar21 = 1;
  }
  else {
    if (*(long *)(unaff_x25 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar17 = FUN_083e3974(*(long *)(unaff_x25 + 0x1a0),0);
    iVar21 = 1;
    if ((uVar17 & 1) != 0) {
      iVar21 = 2;
    }
  }
  if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  iVar22 = *(int *)(unaff_x21 + 0x28);
  *(int *)(unaff_x19 + 0x144) = iVar22;
  if (iVar22 < 1) {
    uVar17 = 0;
  }
  else {
    lVar25 = 0;
    uVar17 = 0;
    do {
      memmove(&stack0x000004f0,(void *)(*(long *)(unaff_x21 + 0x20) + lVar25),0x74);
      iVar14 = FUN_08a08ffc(&stack0x000004f0,0);
      iVar22 = *(int *)(unaff_x19 + 0x144);
      if (iVar14 != 1) break;
      uVar17 = uVar17 + 1;
      lVar25 = lVar25 + 0x74;
    } while ((long)uVar17 < (long)iVar22);
  }
  puVar12 = PTR_DAT_0932fc78;
  iVar14 = (int)uVar17;
  *(int *)(unaff_x19 + 0x144) = iVar22 - iVar14;
  *(int *)(unaff_x19 + 0x54) = iVar14;
  if ((iVar14 != 0) && (*(int *)(unaff_x21 + 0x10) != -1)) {
    *(int *)(unaff_x19 + 0x54) = iVar14 + -1;
  }
  FUN_05f86ef8(unaff_x21 + 0x20,uVar17 & 0xffffffff,iVar22 - iVar14,*(undefined8 *)puVar12);
  if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  auVar38 = FUN_089fffd4(unaff_x23 + 0x18,0);
  pvVar18 = auVar38._0_8_;
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  iVar14 = Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_aux_reactivate_account_create(0);
  iVar22 = auVar38._8_4_;
  if (iVar14 <= auVar38._8_4_) {
    iVar22 = iVar14;
  }
  iStack0000000000000024 = iVar22 + extraout_w1;
  iVar14 = iStack0000000000000024 + 0x3e;
  if (-1 < iStack0000000000000024 + 0x1f) {
    iVar14 = iStack0000000000000024 + 0x1f;
  }
  *(int *)(unaff_x19 + 0x138) = iVar14 >> 5;
  *(undefined4 *)(unaff_x19 + 0x58) = 4;
  iVar14 = (int)fStack0000000000000044 + -1;
  do {
    iVar15 = *(int *)(unaff_x19 + 0x58);
    lVar25 = *unaff_x26;
    iVar3 = *(int *)(unaff_x19 + 0x138);
    iVar5 = iVar15 << 1;
    iVar6 = 0;
    if (iVar5 != 0) {
      iVar6 = (iStack0000000000000040 + -1 + iVar15 * 2) / iVar5;
    }
    *(int *)(unaff_x19 + 0x58) = iVar5;
    iVar7 = 0;
    if (iVar5 != 0) {
      iVar7 = (iVar14 + iVar15 * 2) / iVar5;
    }
    *(ulong *)(unaff_x19 + 0x5c) = CONCAT44(iVar7,iVar6);
    if (*(int *)(lVar25 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    iVar15 = FUN_0857ef74(0);
  } while (iVar15 < iVar6 * iVar21 * iVar7 * iVar3);
  if (lVar27 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  uVar17 = FUN_089782b4(lVar27,0);
  puVar12 = PTR_DAT_09285ae0;
  if ((uVar17 & 1) == 0) {
    if (*(int *)(*unaff_x26 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    iVar14 = FUN_0857ef6c(0);
    fVar28 = (float)FUN_0897782c(lVar27,0);
    if (DAT_0989cc17 == '\0') {
      FUN_04077588(PTR_DAT_09285ae0);
      DAT_0989cc17 = '\x01';
    }
    if (*(int *)(*(long *)puVar12 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    auVar36._0_8_ = (double)fVar28;
    auVar36._8_8_ = 0;
    auVar36 = FUN_0767a3b4(auVar36,0,0);
    fVar28 = (float)FUN_089776a4(lVar27,0);
    if (DAT_0989cc17 == '\0') {
      FUN_04077588(PTR_DAT_09285ae0);
      DAT_0989cc17 = '\x01';
    }
    if (*(int *)(*(long *)puVar12 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    auVar37._0_8_ = (double)fVar28;
    auVar37._8_8_ = 0;
    dVar30 = (double)FUN_0767a3b4(auVar37,0,0);
    iVar15 = 0;
    if (iVar21 != 0) {
      iVar15 = iVar14 / iVar21;
    }
    *(float *)(unaff_x19 + 0x13c) =
         (float)iVar15 /
         (((float)auVar36._0_8_ - (float)dVar30) * (float)(*(int *)(unaff_x19 + 0x138) + 2));
    fVar28 = (float)FUN_089776a4(lVar27,0);
    if (DAT_0989cc17 == '\0') {
      FUN_04077588(PTR_DAT_09285ae0);
      DAT_0989cc17 = '\x01';
    }
    if (*(int *)(*(long *)puVar12 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    auVar32._0_8_ = (double)fVar28;
    auVar32._8_8_ = 0;
    dVar30 = (double)FUN_0767a3b4(auVar32,0,0);
    *(float *)(unaff_x19 + 0x140) = -((float)dVar30 * *(float *)(unaff_x19 + 0x13c));
    fVar28 = (float)FUN_0897782c(lVar27,0);
    puVar23 = (undefined8 *)PTR_DAT_0932fc20;
    if (DAT_0989cc17 == '\0') {
      FUN_04077588(PTR_DAT_09285ae0);
      DAT_0989cc17 = '\x01';
    }
    if (*(int *)(*(long *)puVar12 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    auVar33._0_8_ = (double)fVar28;
    auVar33._8_8_ = 0;
    dVar30 = (double)FUN_0767a3b4(auVar33,0,0);
    fVar29 = (float)dVar30;
    fVar28 = *(float *)(unaff_x19 + 0x13c);
  }
  else {
    if (*(int *)(*unaff_x26 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    iVar15 = FUN_0857ef6c(0);
    fVar28 = (float)FUN_0897782c(lVar27,0);
    fVar29 = (float)FUN_089776a4(lVar27,0);
    iVar14 = 0;
    if (iVar21 != 0) {
      iVar14 = iVar15 / iVar21;
    }
    *(float *)(unaff_x19 + 0x13c) =
         (float)iVar14 / ((fVar28 - fVar29) * (float)(*(int *)(unaff_x19 + 0x138) + 2));
    fVar28 = (float)FUN_089776a4(lVar27,0);
    *(float *)(unaff_x19 + 0x140) = -(fVar28 * *(float *)(unaff_x19 + 0x13c));
    fVar28 = (float)FUN_0897782c(lVar27,0);
    fVar29 = *(float *)(unaff_x19 + 0x13c);
    puVar23 = (undefined8 *)PTR_DAT_0932fc20;
  }
  lVar25 = *(long *)puVar12;
  fVar28 = fVar28 * fVar29 + *(float *)(unaff_x19 + 0x140);
  iVar14 = -0x80000000;
  if (fVar28 != INFINITY) {
    iVar14 = (int)fVar28;
  }
  *(int *)(unaff_x19 + 0x148) = iVar14;
  if (*(int *)(lVar25 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  uVar16 = FUN_0767a564(iVar14,0,0);
  *(undefined4 *)(unaff_x19 + 0x148) = uVar16;
  FUN_08518474(&stack0x00000760);
  FUN_0839dbc4(&stack0x00000760,&stack0x00000360,0);
  FUN_08518474(&stack0x00000760);
  FUN_0839dbc4(&stack0x00000760,&stack0x00000320,0);
  FUN_056207f8(&stack0x00000760,&stack0x000001e0,&stack0x00000720,*puVar23);
  memcpy(&stack0x00000650,&stack0x00000760,0x80);
  FUN_08518378(&stack0x000001e0);
  FUN_0839dbc4(&stack0x000001e0,&stack0x000002a0,0);
  FUN_08518378(&stack0x000001e0);
  FUN_0839dbc4(&stack0x000001e0,&stack0x00000260,0);
  in_stack_000001e8 = 0;
  in_stack_000001e0 = 0;
  FUN_056207f8(&stack0x000001e0,&stack0x00000720,&stack0x000006e0,*puVar23);
  memcpy(&stack0x000005d0,&stack0x000001e0,0x80);
  if (1 < iVar22) {
    uVar17 = 0;
    lVar25 = 1;
    pvVar24 = pvVar18;
    do {
      memcpy(&stack0x00000468,(void *)((long)pvVar18 + lVar25 * 0x88),0x88);
      __src = pvVar24;
      lVar26 = lVar25;
      do {
        memcpy(&stack0x00000760,__src,0x88);
        if (*(int *)(*unaff_x20 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        memcpy(&stack0x00000158,&stack0x00000760,0x88);
        memcpy(&stack0x000000d0,&stack0x00000468,0x88);
        uVar19 = FUN_0859d9c0(&stack0x00000158,&stack0x000000d0);
        if ((uVar19 & 1) == 0) goto LAB_0859d220;
        memcpy((void *)((long)__src + 0x88),__src,0x88);
        lVar26 = lVar26 + -1;
        __src = (void *)((long)__src + -0x88);
      } while (0 < lVar26);
      lVar26 = 0;
LAB_0859d220:
      memcpy((void *)((long)pvVar18 + (long)(int)lVar26 * 0x88),&stack0x00000468,0x88);
      uVar17 = uVar17 + 1;
      lVar25 = lVar25 + 1;
      pvVar24 = (void *)((long)pvVar24 + 0x88);
    } while (uVar17 != iVar22 - 1);
  }
  iStack000000000000000c = iStack0000000000000024 * iVar21;
  FUN_05f8a2ec(&stack0x00000720,iStack000000000000000c,3,1,*(undefined8 *)PTR_DAT_0932ed70);
  puVar12 = PTR_DAT_0932fc70;
  FUN_05f8b1b8(&stack0x000005c0,0,*(int *)(unaff_x19 + 0x144) * iVar21,
               *(undefined8 *)PTR_DAT_0932fc70);
  memcpy(&stack0x00000760,&stack0x00000650,0x80);
  auVar36 = FUN_0503a16c(&stack0x00000760,*(int *)(unaff_x19 + 0x144) * iVar21,0x20,0,0,
                         *(undefined8 *)PTR_DAT_0932fc38);
  FUN_05f8b1b8(&stack0x000005c0,*(int *)(unaff_x19 + 0x144) * iVar21,iVar22 * iVar21,
               *(undefined8 *)puVar12);
  memcpy(&stack0x00000760,&stack0x00000650,0x80);
  auVar36 = FUN_0503a20c(&stack0x00000760,iVar22 * iVar21,0x20,auVar36._0_8_,auVar36._8_8_,
                         *(undefined8 *)PTR_DAT_0932fc40);
  iVar15 = *(int *)(unaff_x19 + 0x148);
  uVar35 = *(undefined8 *)(unaff_x19 + 0x13c);
  uVar16 = *(undefined4 *)(unaff_x19 + 0x138);
  uVar4 = *(undefined4 *)(unaff_x19 + 0x144);
  uVar34 = SUB168(*(undefined1 (*) [16])(unaff_x19 + 0x78),8);
  uVar31 = SUB168(*(undefined1 (*) [16])(unaff_x19 + 0x78),0);
  FUN_089782b4(lVar27,0);
  iVar14 = iVar15 + 0xfe;
  if (-1 < iVar15 + 0x7f) {
    iVar14 = iVar15 + 0x7f;
  }
  uVar39 = CONCAT44(iVar21,iVar14 >> 7);
  auVar37 = FUN_0503a3ec(&stack0x00000760,(iVar14 >> 7) * iVar21,1,auVar36._0_8_,auVar36._8_8_,
                         *(undefined8 *)PTR_DAT_0932fc58);
  FUN_0896ae48(&stack0x000005b0,0);
  puVar13 = PTR_DAT_0932fc30;
  puVar12 = PTR_DAT_0932ed40;
  uVar20 = FUN_0562081c(&stack0x00000760,&stack0x000005d0,0,*(undefined8 *)PTR_DAT_0932ed40);
  in_stack_000000c0 = CONCAT44(iVar22,uVar4);
  auVar10._8_4_ = iVar15;
  auVar10._0_8_ = uVar35;
  auVar10._12_4_ = uVar16;
  in_stack_000000b8 = auVar10._8_8_;
  in_stack_00000090 = uVar31;
  in_stack_00000098 = uVar34;
  in_stack_000000a0 = 0;
  in_stack_000000a8 = 0;
  in_stack_000000b0 = uVar35;
  in_stack_000000c8 = uVar39;
  FUN_0859c6a8(uVar20,lVar27,&stack0x00000090,&stack0x000005ac,&stack0x000005a8,&stack0x00000598);
  uVar20 = FUN_0562081c(&stack0x00000760,&stack0x000005d0,1,*(undefined8 *)puVar12);
  in_stack_00000080 = CONCAT44(iVar22,uVar4);
  auVar11._8_4_ = iVar15;
  auVar11._0_8_ = uVar35;
  auVar11._12_4_ = uVar16;
  in_stack_00000078 = auVar11._8_8_;
  in_stack_00000050 = uVar31;
  in_stack_00000058 = uVar34;
  in_stack_00000060 = 0;
  in_stack_00000068 = 0;
  in_stack_00000070 = uVar35;
  in_stack_00000088 = uVar39;
  FUN_0859c6a8(uVar20,lVar27,&stack0x00000050,&stack0x00000594,&stack0x00000590,&stack0x00000580);
  iVar22 = *(int *)(unaff_x19 + 0x60);
  if (*(int *)(*unaff_x20 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  uVar1 = iVar22 * 4 + 0x83;
  uVar2 = uVar1 & 0x7f;
  if (-1 < (int)-uVar1) {
    uVar2 = -(-uVar1 & 0x7f);
  }
  FUN_05f31274(&stack0x000006e0,iStack000000000000000c * ((int)(uVar1 - uVar2) >> 2),3,1,
               *(undefined8 *)PTR_DAT_0932ed48);
  uVar16 = *(undefined4 *)(unaff_x19 + 0x58);
  FUN_05620284(in_stack_000005ac,in_stack_00000594,&stack0x000003a0,*(undefined8 *)puVar13);
  FUN_05620284(in_stack_000005a8,in_stack_00000590,&stack0x000002e0,*(undefined8 *)puVar13);
  in_stack_000001e8 = 0;
  in_stack_000001e0 = 0;
  FUN_05620760(in_stack_00000598,in_stack_0000059c,in_stack_000005a0,in_stack_000005a4,
               in_stack_00000580,in_stack_00000584,in_stack_00000588,in_stack_0000058c,
               &stack0x000001e0,*(undefined8 *)PTR_DAT_0932fc28);
  FUN_089776a4(lVar27,0);
  FUN_089782b4(lVar27,0);
  auVar9._4_4_ = fStack0000000000000044;
  auVar9._0_4_ = iStack0000000000000040;
  auVar9._8_4_ = uVar16;
  auVar9._12_4_ = fStack000000000000004c;
  auVar32 = NEON_scvtf(auVar9,4);
  fStack000000000000004c = auVar32._8_4_;
  auVar8._4_4_ = auVar32._0_4_;
  auVar8._0_4_ = auVar32._0_4_;
  auVar8._8_4_ = fStack000000000000004c;
  auVar8._12_4_ = fStack000000000000004c;
  auVar33 = NEON_ext(auVar8,auVar32,8,1);
  fStack0000000000000044 = auVar32._4_4_ / auVar33._4_4_;
  fStack000000000000004c = fStack000000000000004c / auVar33._12_4_;
  memcpy(&stack0x00000798,&stack0x00000650,0x80);
  auVar36 = FUN_0503a34c(&stack0x00000760,iStack000000000000000c,1,auVar36._0_8_,auVar36._8_8_,
                         *(undefined8 *)PTR_DAT_0932fc50);
  auVar36 = FUN_0503a2ac(&stack0x00000760,
                         iVar21 * (int)((ulong)*(undefined8 *)(unaff_x19 + 0x5c) >> 0x20),1,
                         auVar36._0_8_,auVar36._8_8_,*(undefined8 *)PTR_DAT_0932fc48);
  auVar37 = FUN_05f8a6a8(&stack0x000005c0,auVar37._0_8_,auVar37._8_8_,
                         *(undefined8 *)PTR_DAT_0932fc68);
  auVar36 = FUN_05f3161c(&stack0x00000570,auVar36._0_8_,auVar36._8_8_,
                         *(undefined8 *)PTR_DAT_0932fc60);
  auVar36 = FUN_0896af6c(auVar37._0_8_,auVar37._8_8_,auVar36._0_8_,auVar36._8_8_,0);
  *(undefined1 (*) [16])(unaff_x19 + 0x68) = auVar36;
  FUN_0896af44(0);
  FUN_0840a284(&stack0x000006dc,0);
  return;
}


