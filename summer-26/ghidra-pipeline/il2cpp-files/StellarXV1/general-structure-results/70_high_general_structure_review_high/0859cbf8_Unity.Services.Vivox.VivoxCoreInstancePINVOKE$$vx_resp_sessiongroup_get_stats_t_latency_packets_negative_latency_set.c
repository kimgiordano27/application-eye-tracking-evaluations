/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_resp_sessiongroup_get_stats_t_latency_packets_negative_latency_set
ENTRY_POINT: 0859cbf8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_11;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_sessiongroup_get_stats_t_latency_packets_negative_latency_set
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
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
  void *pvVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 uVar21;
  int extraout_w1;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int unaff_w22;
  long unaff_x23;
  undefined8 *puVar22;
  void *pvVar23;
  int unaff_w24;
  void *__src;
  long *unaff_x26;
  long lVar24;
  long unaff_x28;
  float fVar25;
  float fVar26;
  double dVar27;
  undefined1 auVar29 [16];
  undefined8 uVar28;
  undefined8 uVar31;
  undefined1 auVar30 [16];
  undefined8 uVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [12];
  int iStack000000000000000c;
  int iStack0000000000000024;
  int iStack0000000000000040;
  int iStack0000000000000044;
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
  undefined8 uVar36;
  
  *(int *)(unaff_x19 + 0x54) = unaff_w22 + -1;
  FUN_05f86ef8(unaff_x21 + 0x20,unaff_w22,param_4,*param_1);
  if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  auVar35 = FUN_089fffd4(unaff_x23 + 0x18,0);
  pvVar17 = auVar35._0_8_;
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  iVar14 = Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_aux_reactivate_account_create(0);
  iVar4 = auVar35._8_4_;
  if (iVar14 <= auVar35._8_4_) {
    iVar4 = iVar14;
  }
  iStack0000000000000024 = iVar4 + extraout_w1;
  iVar14 = iStack0000000000000024 + 0x3e;
  if (-1 < iStack0000000000000024 + 0x1f) {
    iVar14 = iStack0000000000000024 + 0x1f;
  }
  *(int *)(unaff_x19 + 0x138) = iVar14 >> 5;
  *(undefined4 *)(unaff_x19 + 0x58) = 4;
  do {
    iVar14 = *(int *)(unaff_x19 + 0x58);
    lVar18 = *unaff_x26;
    iVar15 = *(int *)(unaff_x19 + 0x138);
    iVar5 = iVar14 << 1;
    iVar6 = 0;
    if (iVar5 != 0) {
      iVar6 = (iStack0000000000000040 + -1 + iVar14 * 2) / iVar5;
    }
    *(int *)(unaff_x19 + 0x58) = iVar5;
    iVar7 = 0;
    if (iVar5 != 0) {
      iVar7 = (iStack0000000000000044 + -1 + iVar14 * 2) / iVar5;
    }
    *(ulong *)(unaff_x19 + 0x5c) = CONCAT44(iVar7,iVar6);
    if (*(int *)(lVar18 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    iVar14 = FUN_0857ef74(0);
  } while (iVar14 < iVar6 * unaff_w24 * iVar7 * iVar15);
  if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  uVar19 = FUN_089782b4(unaff_x28,0);
  puVar12 = PTR_DAT_09285ae0;
  if ((uVar19 & 1) == 0) {
    if (*(int *)(*unaff_x26 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    iVar14 = FUN_0857ef6c(0);
    fVar25 = (float)FUN_0897782c(unaff_x28,0);
    if (DAT_0989cc17 == '\0') {
      FUN_04077588(PTR_DAT_09285ae0);
      DAT_0989cc17 = '\x01';
    }
    if (*(int *)(*(long *)puVar12 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    auVar33._0_8_ = (double)fVar25;
    auVar33._8_8_ = 0;
    auVar33 = FUN_0767a3b4(auVar33,0,0);
    fVar25 = (float)FUN_089776a4(unaff_x28,0);
    if (DAT_0989cc17 == '\0') {
      FUN_04077588(PTR_DAT_09285ae0);
      DAT_0989cc17 = '\x01';
    }
    if (*(int *)(*(long *)puVar12 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    auVar34._0_8_ = (double)fVar25;
    auVar34._8_8_ = 0;
    dVar27 = (double)FUN_0767a3b4(auVar34,0,0);
    iVar15 = 0;
    if (unaff_w24 != 0) {
      iVar15 = iVar14 / unaff_w24;
    }
    *(float *)(unaff_x19 + 0x13c) =
         (float)iVar15 /
         (((float)auVar33._0_8_ - (float)dVar27) * (float)(*(int *)(unaff_x19 + 0x138) + 2));
    fVar25 = (float)FUN_089776a4(unaff_x28,0);
    if (DAT_0989cc17 == '\0') {
      FUN_04077588(PTR_DAT_09285ae0);
      DAT_0989cc17 = '\x01';
    }
    if (*(int *)(*(long *)puVar12 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    auVar30._0_8_ = (double)fVar25;
    auVar30._8_8_ = 0;
    dVar27 = (double)FUN_0767a3b4(auVar30,0,0);
    *(float *)(unaff_x19 + 0x140) = -((float)dVar27 * *(float *)(unaff_x19 + 0x13c));
    fVar25 = (float)FUN_0897782c(unaff_x28,0);
    puVar22 = (undefined8 *)PTR_DAT_0932fc20;
    if (DAT_0989cc17 == '\0') {
      FUN_04077588(PTR_DAT_09285ae0);
      DAT_0989cc17 = '\x01';
    }
    if (*(int *)(*(long *)puVar12 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    auVar29._0_8_ = (double)fVar25;
    auVar29._8_8_ = 0;
    dVar27 = (double)FUN_0767a3b4(auVar29,0,0);
    fVar26 = (float)dVar27;
    fVar25 = *(float *)(unaff_x19 + 0x13c);
  }
  else {
    if (*(int *)(*unaff_x26 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    iVar15 = FUN_0857ef6c(0);
    fVar25 = (float)FUN_0897782c(unaff_x28,0);
    fVar26 = (float)FUN_089776a4(unaff_x28,0);
    iVar14 = 0;
    if (unaff_w24 != 0) {
      iVar14 = iVar15 / unaff_w24;
    }
    *(float *)(unaff_x19 + 0x13c) =
         (float)iVar14 / ((fVar25 - fVar26) * (float)(*(int *)(unaff_x19 + 0x138) + 2));
    fVar25 = (float)FUN_089776a4(unaff_x28,0);
    *(float *)(unaff_x19 + 0x140) = -(fVar25 * *(float *)(unaff_x19 + 0x13c));
    fVar25 = (float)FUN_0897782c(unaff_x28,0);
    fVar26 = *(float *)(unaff_x19 + 0x13c);
    puVar22 = (undefined8 *)PTR_DAT_0932fc20;
  }
  lVar18 = *(long *)puVar12;
  fVar25 = fVar25 * fVar26 + *(float *)(unaff_x19 + 0x140);
  iVar14 = -0x80000000;
  if (fVar25 != INFINITY) {
    iVar14 = (int)fVar25;
  }
  *(int *)(unaff_x19 + 0x148) = iVar14;
  if (*(int *)(lVar18 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  uVar16 = FUN_0767a564(iVar14,0,0);
  *(undefined4 *)(unaff_x19 + 0x148) = uVar16;
  FUN_08518474(&stack0x00000760);
  FUN_0839dbc4(&stack0x00000760,&stack0x00000360,0);
  FUN_08518474(&stack0x00000760);
  FUN_0839dbc4(&stack0x00000760,&stack0x00000320,0);
  FUN_056207f8(&stack0x00000760,&stack0x000001e0,&stack0x00000720,*puVar22);
  memcpy(&stack0x00000650,&stack0x00000760,0x80);
  FUN_08518378(&stack0x000001e0);
  FUN_0839dbc4(&stack0x000001e0,&stack0x000002a0,0);
  FUN_08518378(&stack0x000001e0);
  FUN_0839dbc4(&stack0x000001e0,&stack0x00000260,0);
  in_stack_000001e8 = 0;
  in_stack_000001e0 = 0;
  FUN_056207f8(&stack0x000001e0,&stack0x00000720,&stack0x000006e0,*puVar22);
  memcpy(&stack0x000005d0,&stack0x000001e0,0x80);
  if (1 < iVar4) {
    uVar19 = 0;
    lVar18 = 1;
    pvVar23 = pvVar17;
    do {
      memcpy(&stack0x00000468,(void *)((long)pvVar17 + lVar18 * 0x88),0x88);
      __src = pvVar23;
      lVar24 = lVar18;
      do {
        memcpy(&stack0x00000760,__src,0x88);
        if (*(int *)(*unaff_x20 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        memcpy(&stack0x00000158,&stack0x00000760,0x88);
        memcpy(&stack0x000000d0,&stack0x00000468,0x88);
        uVar20 = FUN_0859d9c0(&stack0x00000158,&stack0x000000d0);
        if ((uVar20 & 1) == 0) goto LAB_0859d220;
        memcpy((void *)((long)__src + 0x88),__src,0x88);
        lVar24 = lVar24 + -1;
        __src = (void *)((long)__src + -0x88);
      } while (0 < lVar24);
      lVar24 = 0;
LAB_0859d220:
      memcpy((void *)((long)pvVar17 + (long)(int)lVar24 * 0x88),&stack0x00000468,0x88);
      uVar19 = uVar19 + 1;
      lVar18 = lVar18 + 1;
      pvVar23 = (void *)((long)pvVar23 + 0x88);
    } while (uVar19 != iVar4 - 1);
  }
  iStack000000000000000c = iStack0000000000000024 * unaff_w24;
  FUN_05f8a2ec(&stack0x00000720,iStack000000000000000c,3,1,*(undefined8 *)PTR_DAT_0932ed70);
  puVar12 = PTR_DAT_0932fc70;
  FUN_05f8b1b8(&stack0x000005c0,0,*(int *)(unaff_x19 + 0x144) * unaff_w24,
               *(undefined8 *)PTR_DAT_0932fc70);
  memcpy(&stack0x00000760,&stack0x00000650,0x80);
  auVar33 = FUN_0503a16c(&stack0x00000760,*(int *)(unaff_x19 + 0x144) * unaff_w24,0x20,0,0,
                         *(undefined8 *)PTR_DAT_0932fc38);
  FUN_05f8b1b8(&stack0x000005c0,*(int *)(unaff_x19 + 0x144) * unaff_w24,iVar4 * unaff_w24,
               *(undefined8 *)puVar12);
  memcpy(&stack0x00000760,&stack0x00000650,0x80);
  auVar33 = FUN_0503a20c(&stack0x00000760,iVar4 * unaff_w24,0x20,auVar33._0_8_,auVar33._8_8_,
                         *(undefined8 *)PTR_DAT_0932fc40);
  iVar15 = *(int *)(unaff_x19 + 0x148);
  uVar32 = *(undefined8 *)(unaff_x19 + 0x13c);
  uVar16 = *(undefined4 *)(unaff_x19 + 0x138);
  uVar3 = *(undefined4 *)(unaff_x19 + 0x144);
  uVar31 = SUB168(*(undefined1 (*) [16])(unaff_x19 + 0x78),8);
  uVar28 = SUB168(*(undefined1 (*) [16])(unaff_x19 + 0x78),0);
  FUN_089782b4(unaff_x28,0);
  iVar14 = iVar15 + 0xfe;
  if (-1 < iVar15 + 0x7f) {
    iVar14 = iVar15 + 0x7f;
  }
  uVar36 = CONCAT44(unaff_w24,iVar14 >> 7);
  auVar34 = FUN_0503a3ec(&stack0x00000760,(iVar14 >> 7) * unaff_w24,1,auVar33._0_8_,auVar33._8_8_,
                         *(undefined8 *)PTR_DAT_0932fc58);
  FUN_0896ae48(&stack0x000005b0,0);
  puVar13 = PTR_DAT_0932fc30;
  puVar12 = PTR_DAT_0932ed40;
  uVar21 = FUN_0562081c(&stack0x00000760,&stack0x000005d0,0,*(undefined8 *)PTR_DAT_0932ed40);
  in_stack_000000c0 = CONCAT44(iVar4,uVar3);
  auVar10._8_4_ = iVar15;
  auVar10._0_8_ = uVar32;
  auVar10._12_4_ = uVar16;
  in_stack_000000b8 = auVar10._8_8_;
  in_stack_00000090 = uVar28;
  in_stack_00000098 = uVar31;
  in_stack_000000a0 = 0;
  in_stack_000000a8 = 0;
  in_stack_000000b0 = uVar32;
  in_stack_000000c8 = uVar36;
  FUN_0859c6a8(uVar21,unaff_x28,&stack0x00000090,&stack0x000005ac,&stack0x000005a8,&stack0x00000598)
  ;
  uVar21 = FUN_0562081c(&stack0x00000760,&stack0x000005d0,1,*(undefined8 *)puVar12);
  in_stack_00000080 = CONCAT44(iVar4,uVar3);
  auVar11._8_4_ = iVar15;
  auVar11._0_8_ = uVar32;
  auVar11._12_4_ = uVar16;
  in_stack_00000078 = auVar11._8_8_;
  in_stack_00000050 = uVar28;
  in_stack_00000058 = uVar31;
  in_stack_00000060 = 0;
  in_stack_00000068 = 0;
  in_stack_00000070 = uVar32;
  in_stack_00000088 = uVar36;
  FUN_0859c6a8(uVar21,unaff_x28,&stack0x00000050,&stack0x00000594,&stack0x00000590,&stack0x00000580)
  ;
  iVar4 = *(int *)(unaff_x19 + 0x60);
  if (*(int *)(*unaff_x20 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  uVar1 = iVar4 * 4 + 0x83;
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
  FUN_089776a4(unaff_x28,0);
  FUN_089782b4(unaff_x28,0);
  auVar9._8_4_ = uVar16;
  auVar9._0_8_ = _iStack0000000000000040;
  auVar9._12_4_ = in_stack_00000048._4_4_;
  auVar30 = NEON_scvtf(auVar9,4);
  auVar8._4_4_ = auVar30._0_4_;
  auVar8._0_4_ = auVar30._0_4_;
  auVar8._8_4_ = auVar30._8_4_;
  auVar8._12_4_ = auVar30._8_4_;
  NEON_ext(auVar8,auVar30,8,1);
  memcpy(&stack0x00000798,&stack0x00000650,0x80);
  auVar33 = FUN_0503a34c(&stack0x00000760,iStack000000000000000c,1,auVar33._0_8_,auVar33._8_8_,
                         *(undefined8 *)PTR_DAT_0932fc50);
  auVar33 = FUN_0503a2ac(&stack0x00000760,
                         unaff_w24 * (int)((ulong)*(undefined8 *)(unaff_x19 + 0x5c) >> 0x20),1,
                         auVar33._0_8_,auVar33._8_8_,*(undefined8 *)PTR_DAT_0932fc48);
  auVar34 = FUN_05f8a6a8(&stack0x000005c0,auVar34._0_8_,auVar34._8_8_,
                         *(undefined8 *)PTR_DAT_0932fc68);
  auVar33 = FUN_05f3161c(&stack0x00000570,auVar33._0_8_,auVar33._8_8_,
                         *(undefined8 *)PTR_DAT_0932fc60);
  auVar33 = FUN_0896af6c(auVar34._0_8_,auVar34._8_8_,auVar33._0_8_,auVar33._8_8_,0);
  *(undefined1 (*) [16])(unaff_x19 + 0x68) = auVar33;
  FUN_0896af44(0);
  FUN_0840a284(&stack0x000006dc,0);
  return;
}


