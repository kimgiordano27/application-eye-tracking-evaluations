/*
FUNCTION_NAME: FUN_0279445c
ENTRY_POINT: 0279445c
PROGRAM: vrfs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_12;weak_xr_or_state_hits_12;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_12
*/


long * FUN_0279445c(undefined8 param_1,ulong param_2,long *param_3,long *param_4,undefined8 param_5,
                   undefined4 param_6,undefined8 param_7)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  char cVar27;
  char cVar28;
  undefined1 uVar29;
  undefined2 uVar30;
  undefined2 uVar31;
  short sVar32;
  short sVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  uint uVar36;
  uint uVar37;
  int iVar38;
  uint uVar39;
  int iVar40;
  long lVar41;
  ulong uVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  char *pcVar46;
  long *plVar47;
  undefined1 *puVar48;
  undefined8 uVar49;
  byte extraout_var;
  ulong uVar50;
  ulong uVar51;
  undefined8 *puVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  long *plVar55;
  ulong uVar56;
  float fVar57;
  float fVar58;
  double dVar59;
  double dVar60;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [12];
  long *plStack_2c8;
  long *plStack_2a8;
  double dStack_290;
  undefined8 uStack_288;
  undefined4 uStack_280;
  double dStack_270;
  undefined8 uStack_268;
  undefined4 uStack_260;
  double dStack_250;
  undefined8 uStack_248;
  undefined4 uStack_240;
  double dStack_230;
  undefined8 uStack_228;
  undefined4 uStack_220;
  double dStack_210;
  undefined8 uStack_208;
  undefined4 uStack_200;
  double dStack_1f0;
  undefined8 uStack_1e8;
  undefined4 uStack_1e0;
  double dStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  double dStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  double dStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  double dStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  double dStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  double dStack_130;
  undefined8 uStack_128;
  undefined4 uStack_120;
  double dStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined1 auStack_f8 [16];
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [12];
  undefined1 auStack_d0 [12];
  undefined1 auStack_c0 [12];
  undefined1 auStack_b0 [12];
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_78;
  
  lVar3 = tpidr_el0;
  lStack_78 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 027944a8 to 028944cf has its CatchHandler @ 027946f8 */
  if ((bRam000000000723338e & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06e42730);
    thunk_FUN_0159f088(PTR_DAT_06df2be8);
    thunk_FUN_0159f088(PTR_DAT_06e0ce20);
    thunk_FUN_0159f088(PTR_DAT_06e359d0);
    thunk_FUN_0159f088(PTR_DAT_06ddaad8);
    thunk_FUN_0159f088(PTR_DAT_06ddfa10);
                    /* try { // try from 02794504 to 0289452f has its CatchHandler @ 027946f4 */
    thunk_FUN_0159f088(PTR_DAT_06dfb060);
    thunk_FUN_0159f088(PTR_DAT_06e56f18);
    thunk_FUN_0159f088(PTR_DAT_06d98c30);
    thunk_FUN_0159f088(PTR_DAT_06e01080);
    thunk_FUN_0159f088(PTR_DAT_06e0f808);
    thunk_FUN_0159f088(PTR_DAT_06e467c0);
    thunk_FUN_0159f088(PTR_DAT_06e1faf8);
    thunk_FUN_0159f088(PTR_DAT_06e199e0);
    thunk_FUN_0159f088(PTR_DAT_06e5e6c8);
                    /* try { // try from 0279456c to 02894577 has its CatchHandler @ 027946f0 */
    thunk_FUN_0159f088(PTR_DAT_06e10ca0);
    thunk_FUN_0159f088(PTR_DAT_06e06100);
                    /* try { // try from 02794580 to 02894587 has its CatchHandler @ 027946ec */
    thunk_FUN_0159f088(PTR_DAT_06d953c8);
                    /* try { // try from 02794594 to 028945f7 has its CatchHandler @ 027946e8 */
    thunk_FUN_0159f088(PTR_DAT_06dc8928);
    thunk_FUN_0159f088(PTR_DAT_06d93298);
    thunk_FUN_0159f088(PTR_DAT_06e09ec0);
    thunk_FUN_0159f088(PTR_DAT_06dc0de0);
    thunk_FUN_0159f088(PTR_DAT_06df8b60);
    thunk_FUN_0159f088(PTR_DAT_06e05f90);
    thunk_FUN_0159f088(PTR_DAT_06de6958);
    thunk_FUN_0159f088(PTR_DAT_06e55100);
    thunk_FUN_0159f088(PTR_DAT_06db65f8);
                    /* try { // try from 02794600 to 0289460b has its CatchHandler @ 027946e4 */
    thunk_FUN_0159f088(PTR_DAT_06d9fd48);
                    /* try { // try from 0279460c to 02894617 has its CatchHandler @ 027946e0 */
    thunk_FUN_0159f088(PTR_DAT_06dc2fe0);
                    /* try { // try from 02794618 to 028946a7 has its CatchHandler @ 027943bc */
    thunk_FUN_0159f088(PTR_DAT_06dd3570);
    thunk_FUN_0159f088(PTR_DAT_06e4c678);
    bRam000000000723338e = 1;
  }
  puVar4 = PTR_DAT_06ddfa10;
  uVar39 = (uint)param_2;
  auStack_b0._8_4_ = 0;
  auStack_b0._0_8_ = 0;
  auStack_c0._8_4_ = 0;
  auStack_c0._0_8_ = 0;
  auStack_d0._8_4_ = 0;
  auStack_d0._0_8_ = 0;
  auStack_e0._8_4_ = 0;
  auStack_e0._0_8_ = 0;
  auStack_e8[0] = 0;
  auStack_f8._0_8_ = 0;
  auStack_f8._8_8_ = 0;
  if ((0x27 < uVar39) || ((1L << (param_2 & 0x3f) & 0x800c002020U) == 0)) {
    plStack_2c8 = (long *)FUN_0279a570(param_3,param_5,param_6,param_7);
    plStack_2a8 = (long *)FUN_0279a570(param_4,param_5,param_6,param_7);
    if ((plStack_2c8 == (long *)0x0) ||
       (uVar53 = thunk_FUN_0164ba04(plStack_2c8,0), plStack_2a8 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    uVar54 = thunk_FUN_0164ba04(plStack_2a8,0);
    if (*(int *)(*(long *)PTR_DAT_06dfb060 + 0xe0) == 0) {
      thunk_FUN_016466fc(*(long *)PTR_DAT_06dfb060);
    }
    uVar34 = FUN_038a5bc4(uVar53,0);
    uVar35 = FUN_038a5bc4(uVar54,0);
    uVar36 = FUN_038a5dd0(uVar34,0);
    uVar37 = FUN_038a5dd0(uVar35,0);
    if ((uVar36 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_06dfb060 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      uVar42 = FUN_038a6350(plStack_2c8,0);
      plVar55 = plStack_2c8;
      if ((uVar42 & 1) != 0) goto LAB_02798e48;
    }
    if ((uVar37 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_06dfb060 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      uVar42 = FUN_038a6350(plStack_2a8,0);
      plVar55 = plStack_2a8;
      if ((uVar42 & 1) != 0) goto LAB_02798e48;
    }
    puVar4 = PTR_DAT_06ddfa10;
    lVar41 = *(long *)PTR_DAT_06ddfa10;
    if (*(int *)(lVar41 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      lVar41 = *(long *)puVar4;
    }
    plVar55 = (long *)**(undefined8 **)(lVar41 + 0xb8);
    if (plStack_2c8 != plVar55) {
      if (*(int *)(lVar41 + 0xe0) == 0) {
        thunk_FUN_016466fc();
        lVar41 = *(long *)PTR_DAT_06ddfa10;
        plVar55 = (long *)**(undefined8 **)(lVar41 + 0xb8);
      }
      if (plStack_2a8 != plVar55) {
        if (param_3 == (long *)0x0) {
          plVar55 = (long *)0x0;
        }
        else {
          plVar55 = param_3;
          if (*param_3 != *(long *)PTR_DAT_06e359d0) {
            plVar55 = (long *)0x0;
          }
        }
        if (((uVar36 | uVar37) & 1) == 0) {
          if (param_4 == (long *)0x0) {
            plVar47 = (long *)0x0;
          }
          else {
            plVar47 = param_4;
            if (*param_4 != *(long *)PTR_DAT_06e359d0) {
              plVar47 = (long *)0x0;
            }
          }
          uVar49 = FUN_0279ba30(param_1,uVar34,uVar35,plVar55 != (long *)0x0,plVar47 != (long *)0x0,
                                param_2 & 0xffffffff);
        }
        else {
          uVar49 = FUN_0279b654(param_1,uVar34,uVar35,0,0,param_2 & 0xffffffff);
        }
        uVar36 = (uint)uVar49;
        if (uVar36 == 0) {
          FUN_0279a470(uVar49,param_2 & 0xffffffff,uVar53,uVar54);
          goto LAB_02798f1c;
        }
        lVar41 = *(long *)PTR_DAT_06ddfa10;
        goto LAB_027946bc;
      }
    }
    if (*(int *)(lVar41 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      lVar41 = *(long *)PTR_DAT_06ddfa10;
    }
    goto LAB_02795624;
  }
  lVar41 = *(long *)PTR_DAT_06ddfa10;
  if (*(int *)(lVar41 + 0xe0) == 0) {
    thunk_FUN_016466fc();
    lVar41 = *(long *)puVar4;
  }
                    /* try { // try from 027946a8 to 028946af has its CatchHandler @ 027946dc */
  uVar36 = 0;
                    /* try { // try from 027946b0 to 028946b3 has its CatchHandler @ 027946d8 */
                    /* try { // try from 027946b4 to 028946b7 has its CatchHandler @ 027946d4 */
  plStack_2a8 = (long *)**(undefined8 **)(lVar41 + 0xb8);
                    /* try { // try from 027946b8 to 028946bb has its CatchHandler @ 027946d0 */
  plStack_2c8 = plStack_2a8;
LAB_027946bc:
                    /* try { // try from 027946bc to 028946bf has its CatchHandler @ 027943bc */
                    /* try { // try from 027946c0 to 028946c3 has its CatchHandler @ 027946cc */
                    /* try { // try from 027946c4 to 0289470f has its CatchHandler @ 027943bc */
                    /* catch() { ... } // from try @ 027946c0 with catch @ 027946cc */
                    /* catch() { ... } // from try @ 027946b8 with catch @ 027946d0 */
                    /* catch() { ... } // from try @ 027946b4 with catch @ 027946d4 */
  if (*(int *)(lVar41 + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 0279460c with catch @ 027946e0 */
                    /* catch() { ... } // from try @ 02794600 with catch @ 027946e4 */
    thunk_FUN_016466fc();
                    /* catch() { ... } // from try @ 02794594 with catch @ 027946e8 */
                    /* catch() { ... } // from try @ 02794580 with catch @ 027946ec */
                    /* catch() { ... } // from try @ 0279456c with catch @ 027946f0 */
    lVar41 = *(long *)PTR_DAT_06ddfa10;
  }
                    /* catch() { ... } // from try @ 02794504 with catch @ 027946f4 */
  puVar26 = PTR_DAT_06e5e6c8;
  puVar25 = PTR_DAT_06e56f18;
  puVar24 = PTR_DAT_06e55100;
  puVar23 = PTR_DAT_06e4c678;
  puVar22 = PTR_DAT_06e467c0;
  puVar21 = PTR_DAT_06e199e0;
  puVar20 = PTR_DAT_06e10ca0;
  puVar19 = PTR_DAT_06e0f808;
  puVar18 = PTR_DAT_06e0ce20;
  puVar17 = PTR_DAT_06e09ec0;
  puVar16 = PTR_DAT_06e06100;
  puVar15 = PTR_DAT_06e05f90;
  puVar14 = PTR_DAT_06e01080;
  puVar13 = PTR_DAT_06df8b60;
  puVar12 = PTR_DAT_06ddaad8;
  puVar11 = PTR_DAT_06dd3570;
  puVar10 = PTR_DAT_06dc8928;
  puVar9 = PTR_DAT_06dc2fe0;
  puVar8 = PTR_DAT_06dc0de0;
  puVar7 = PTR_DAT_06d9fd48;
  puVar6 = PTR_DAT_06d98c30;
  puVar5 = PTR_DAT_06d953c8;
  puVar4 = PTR_DAT_06d93298;
                    /* catch() { ... } // from try @ 027944a8 with catch @ 027946f8 */
                    /* try { // try from 02794710 to 02894713 has its CatchHandler @ 0279479c */
                    /* try { // try from 02794720 to 02894787 has its CatchHandler @ 027947a4 */
  switch(uVar39) {
  case 5:
    if ((param_4 == (long *)0x0) || (*param_4 != *(long *)PTR_DAT_06e0f808)) {
      uVar53 = FUN_0279be48();
      uVar54 = thunk_FUN_0159f088(PTR_DAT_06e42730);
                    /* WARNING: Subroutine does not return */
      FUN_0160ee7c(uVar53,uVar54);
    }
    lVar43 = FUN_0279a570(param_3,param_5,param_6,param_7);
    lVar41 = *(long *)PTR_DAT_06ddfa10;
    if (*(int *)(lVar41 + 0xe0) == 0) {
      thunk_FUN_016466fc(lVar41);
      lVar41 = *(long *)PTR_DAT_06ddfa10;
    }
    if (lVar43 != **(long **)(lVar41 + 0xb8)) {
      if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      uVar42 = (**(code **)(*param_3 + 0x178))(param_3,*(undefined8 *)(*param_3 + 0x180));
      puVar4 = PTR_DAT_06ddfa10;
      if ((uVar42 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_06dfb060 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        uVar42 = FUN_038a6350(lVar43,0);
        if ((uVar42 & 1) != 0) {
          lVar41 = *(long *)puVar4;
          goto LAB_027958f4;
        }
      }
      auStack_a0._0_8_ = auStack_a0._0_8_ & 0xffffffffffffff00;
      plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)PTR_DAT_06df2be8,auStack_a0);
      if (*param_4 != *(long *)puVar19) {
                    /* WARNING: Subroutine does not return */
        FUN_0160f170();
      }
      if (0 < *(int *)((long)param_4 + 0x24)) {
        lVar41 = 0;
        do {
          lVar44 = param_4[5];
          if (lVar44 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0160eeb4();
          }
          if (*(uint *)(lVar44 + 0x18) <= (uint)lVar41) {
                    /* WARNING: Subroutine does not return */
            FUN_0160eebc();
          }
          plVar47 = *(long **)(lVar44 + lVar41 * 8 + 0x20);
          if (plVar47 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0160eeb4();
          }
          lVar44 = (**(code **)(*plVar47 + 0x198))(plVar47,*(undefined8 *)(*plVar47 + 0x1a0));
          lVar45 = *(long *)PTR_DAT_06ddfa10;
          if (*(int *)(lVar45 + 0xe0) == 0) {
            thunk_FUN_016466fc();
            lVar45 = *(long *)PTR_DAT_06ddfa10;
          }
          if (lVar44 != **(long **)(lVar45 + 0xb8)) {
            uVar42 = (**(code **)(*param_4 + 0x178))(param_4,*(undefined8 *)(*param_4 + 0x180));
            if ((uVar42 & 1) != 0) {
              if (*(int *)(*(long *)PTR_DAT_06dfb060 + 0xe0) == 0) {
                thunk_FUN_016466fc();
              }
              uVar42 = FUN_038a6350(lVar44,0);
              if ((uVar42 & 1) != 0) goto LAB_02795a5c;
            }
            if (lVar43 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0160eeb4();
            }
            uVar53 = thunk_FUN_0164ba04(lVar43,0);
            if (*(int *)(*(long *)PTR_DAT_06dfb060 + 0xe0) == 0) {
              thunk_FUN_016466fc();
            }
            uVar34 = FUN_038a5bc4(uVar53,0);
            iVar38 = FUN_0279a5a8(param_1,lVar43,lVar44,uVar34,7,0);
            if (iVar38 == 0) {
              auStack_a0[0] = 1;
              plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)PTR_DAT_06df2be8,auStack_a0);
              break;
            }
          }
LAB_02795a5c:
          lVar41 = lVar41 + 1;
        } while ((int)lVar41 < *(int *)((long)param_4 + 0x24));
      }
      goto LAB_02798e48;
    }
LAB_027958f4:
    if (*(int *)(lVar41 + 0xe0) == 0) {
      thunk_FUN_016466fc(lVar41);
LAB_0279590c:
      lVar41 = *(long *)PTR_DAT_06ddfa10;
    }
    goto LAB_02795910;
  default:
    uVar53 = FUN_0279be88(uVar39);
    uVar54 = thunk_FUN_0159f088(PTR_DAT_06e42730);
                    /* WARNING: Subroutine does not return */
    FUN_0160ee7c(uVar53,uVar54);
  case 7:
    if (*(int *)(lVar41 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      lVar41 = *(long *)PTR_DAT_06ddfa10;
    }
    if (plStack_2c8 != (long *)**(undefined8 **)(lVar41 + 0xb8)) {
      if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      uVar42 = (**(code **)(*param_3 + 0x178))(param_3,*(undefined8 *)(*param_3 + 0x180));
      if ((uVar42 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_06dfb060 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        uVar42 = FUN_038a6350(plStack_2c8,0);
        if ((uVar42 & 1) != 0) goto LAB_02795608;
      }
      puVar4 = PTR_DAT_06ddfa10;
      lVar41 = *(long *)PTR_DAT_06ddfa10;
      if (*(int *)(lVar41 + 0xe0) == 0) {
        thunk_FUN_016466fc();
        lVar41 = *(long *)puVar4;
      }
      if (plStack_2a8 != (long *)**(undefined8 **)(lVar41 + 0xb8)) {
        if (param_4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
        uVar42 = (**(code **)(*param_4 + 0x178))(param_4,*(undefined8 *)(*param_4 + 0x180));
        if ((uVar42 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_06dfb060 + 0xe0) == 0) {
            thunk_FUN_016466fc();
          }
          uVar42 = FUN_038a6350(plStack_2a8,0);
          if ((uVar42 & 1) != 0) goto LAB_02795608;
        }
        iVar38 = FUN_0279a5a8(param_1,plStack_2c8,plStack_2a8,uVar36,7,0);
        auStack_a0[0] = iVar38 == 0;
        plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)PTR_DAT_06df2be8,auStack_a0);
        goto LAB_02798e48;
      }
    }
LAB_02795608:
    plVar55 = (long *)PTR_DAT_06ddfa10;
    lVar41 = *(long *)PTR_DAT_06ddfa10;
    if (*(int *)(lVar41 + 0xe0) == 0) {
      thunk_FUN_016466fc();
LAB_02795620:
      lVar41 = *plVar55;
    }
    break;
  case 8:
    if (*(int *)(lVar41 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      lVar41 = *(long *)PTR_DAT_06ddfa10;
    }
    if (plStack_2c8 != (long *)**(undefined8 **)(lVar41 + 0xb8)) {
      if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      uVar42 = (**(code **)(*param_3 + 0x178))(param_3,*(undefined8 *)(*param_3 + 0x180));
      if ((uVar42 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_06dfb060 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        uVar42 = FUN_038a6350(plStack_2c8,0);
        if ((uVar42 & 1) != 0) goto LAB_02795320;
      }
      puVar4 = PTR_DAT_06ddfa10;
      lVar41 = *(long *)PTR_DAT_06ddfa10;
      if (*(int *)(lVar41 + 0xe0) == 0) {
        thunk_FUN_016466fc();
        lVar41 = *(long *)puVar4;
      }
      if (plStack_2a8 != (long *)**(undefined8 **)(lVar41 + 0xb8)) {
        if (param_4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
        uVar42 = (**(code **)(*param_4 + 0x178))(param_4,*(undefined8 *)(*param_4 + 0x180));
        if ((uVar42 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_06dfb060 + 0xe0) == 0) {
            thunk_FUN_016466fc();
          }
          uVar42 = FUN_038a6350(plStack_2a8,0);
          if ((uVar42 & 1) != 0) goto LAB_02795320;
        }
        iVar38 = FUN_0279a5a8(param_1,plStack_2c8,plStack_2a8,uVar36,8,0);
        auStack_a0[0] = 0 < iVar38;
        plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)PTR_DAT_06df2be8,auStack_a0);
        goto LAB_02798e48;
      }
    }
LAB_02795320:
    plVar55 = (long *)PTR_DAT_06ddfa10;
    lVar41 = *(long *)PTR_DAT_06ddfa10;
    if (*(int *)(lVar41 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      goto LAB_02795620;
    }
    break;
  case 9:
    if (*(int *)(lVar41 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      lVar41 = *(long *)PTR_DAT_06ddfa10;
    }
    if (plStack_2c8 != (long *)**(undefined8 **)(lVar41 + 0xb8)) {
      if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      uVar42 = (**(code **)(*param_3 + 0x178))(param_3,*(undefined8 *)(*param_3 + 0x180));
      if ((uVar42 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_06dfb060 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        uVar42 = FUN_038a6350(plStack_2c8,0);
        if ((uVar42 & 1) != 0) goto LAB_02795510;
      }
      puVar4 = PTR_DAT_06ddfa10;
      lVar41 = *(long *)PTR_DAT_06ddfa10;
      if (*(int *)(lVar41 + 0xe0) == 0) {
        thunk_FUN_016466fc();
        lVar41 = *(long *)puVar4;
      }
      if (plStack_2a8 != (long *)**(undefined8 **)(lVar41 + 0xb8)) {
        if (param_4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
        uVar42 = (**(code **)(*param_4 + 0x178))(param_4,*(undefined8 *)(*param_4 + 0x180));
        if ((uVar42 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_06dfb060 + 0xe0) == 0) {
            thunk_FUN_016466fc();
          }
          uVar42 = FUN_038a6350(plStack_2a8,0);
          if ((uVar42 & 1) != 0) goto LAB_02795510;
        }
        uVar42 = FUN_0279a5a8(param_1,plStack_2c8,plStack_2a8,uVar36,9,0);
        auStack_a0._0_8_ = CONCAT71(auStack_a0._1_7_,(char)(uVar42 >> 0x1f)) & 0xffffffffffffff01;
        plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)PTR_DAT_06df2be8,auStack_a0);
        goto LAB_02798e48;
      }
    }
LAB_02795510:
    plVar55 = (long *)PTR_DAT_06ddfa10;
    lVar41 = *(long *)PTR_DAT_06ddfa10;
    if (*(int *)(lVar41 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      goto LAB_02795620;
    }
    break;
  case 10:
    if (*(int *)(lVar41 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      lVar41 = *(long *)PTR_DAT_06ddfa10;
    }
    if (plStack_2c8 != (long *)**(undefined8 **)(lVar41 + 0xb8)) {
      if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      uVar42 = (**(code **)(*param_3 + 0x178))(param_3,*(undefined8 *)(*param_3 + 0x180));
      if ((uVar42 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_06dfb060 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        uVar42 = FUN_038a6350(plStack_2c8,0);
        if ((uVar42 & 1) != 0) goto LAB_02795418;
      }
      puVar4 = PTR_DAT_06ddfa10;
      lVar41 = *(long *)PTR_DAT_06ddfa10;
      if (*(int *)(lVar41 + 0xe0) == 0) {
        thunk_FUN_016466fc();
        lVar41 = *(long *)puVar4;
      }
      if (plStack_2a8 != (long *)**(undefined8 **)(lVar41 + 0xb8)) {
        if (param_4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
        uVar42 = (**(code **)(*param_4 + 0x178))(param_4,*(undefined8 *)(*param_4 + 0x180));
        if ((uVar42 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_06dfb060 + 0xe0) == 0) {
            thunk_FUN_016466fc();
          }
          uVar42 = FUN_038a6350(plStack_2a8,0);
          if ((uVar42 & 1) != 0) goto LAB_02795418;
        }
        FUN_0279a5a8(param_1,plStack_2c8,plStack_2a8,uVar36,10,0);
        auStack_a0[0] = (byte)~extraout_var >> 7;
        plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)PTR_DAT_06df2be8,auStack_a0);
        goto LAB_02798e48;
      }
    }
LAB_02795418:
    plVar55 = (long *)PTR_DAT_06ddfa10;
    lVar41 = *(long *)PTR_DAT_06ddfa10;
    if (*(int *)(lVar41 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      goto LAB_02795620;
    }
    break;
  case 0xb:
    if (*(int *)(lVar41 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      lVar41 = *(long *)PTR_DAT_06ddfa10;
    }
    if (plStack_2c8 != (long *)**(undefined8 **)(lVar41 + 0xb8)) {
      if (param_3 == (long *)0x0) {
LAB_02798f1c:
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      uVar42 = (**(code **)(*param_3 + 0x178))(param_3,*(undefined8 *)(*param_3 + 0x180));
      if ((uVar42 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_06dfb060 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        uVar42 = FUN_038a6350(plStack_2c8,0);
        if ((uVar42 & 1) != 0) goto LAB_02795130;
      }
      puVar4 = PTR_DAT_06ddfa10;
      lVar41 = *(long *)PTR_DAT_06ddfa10;
      if (*(int *)(lVar41 + 0xe0) == 0) {
        thunk_FUN_016466fc();
        lVar41 = *(long *)puVar4;
      }
      if (plStack_2a8 != (long *)**(undefined8 **)(lVar41 + 0xb8)) {
        if (param_4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
        uVar42 = (**(code **)(*param_4 + 0x178))(param_4,*(undefined8 *)(*param_4 + 0x180));
        if ((uVar42 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_06dfb060 + 0xe0) == 0) {
            thunk_FUN_016466fc();
          }
          uVar42 = FUN_038a6350(plStack_2a8,0);
          if ((uVar42 & 1) != 0) goto LAB_02795130;
        }
        iVar38 = FUN_0279a5a8(param_1,plStack_2c8,plStack_2a8,uVar36,0xb,0);
        auStack_a0[0] = iVar38 < 1;
        plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)PTR_DAT_06df2be8,auStack_a0);
        goto LAB_02798e48;
      }
    }
LAB_02795130:
    plVar55 = (long *)PTR_DAT_06ddfa10;
    lVar41 = *(long *)PTR_DAT_06ddfa10;
    if (*(int *)(lVar41 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      goto LAB_02795620;
    }
    break;
  case 0xc:
    if (*(int *)(lVar41 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      lVar41 = *(long *)PTR_DAT_06ddfa10;
    }
    if (plStack_2c8 != (long *)**(undefined8 **)(lVar41 + 0xb8)) {
      if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      uVar42 = (**(code **)(*param_3 + 0x178))(param_3,*(undefined8 *)(*param_3 + 0x180));
      if ((uVar42 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_06dfb060 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        uVar42 = FUN_038a6350(plStack_2c8,0);
        if ((uVar42 & 1) != 0) goto LAB_02795228;
      }
      puVar4 = PTR_DAT_06ddfa10;
      lVar41 = *(long *)PTR_DAT_06ddfa10;
      if (*(int *)(lVar41 + 0xe0) == 0) {
        thunk_FUN_016466fc();
        lVar41 = *(long *)puVar4;
      }
      if (plStack_2a8 != (long *)**(undefined8 **)(lVar41 + 0xb8)) {
        if (param_4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
        uVar42 = (**(code **)(*param_4 + 0x178))(param_4,*(undefined8 *)(*param_4 + 0x180));
        if ((uVar42 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_06dfb060 + 0xe0) == 0) {
            thunk_FUN_016466fc();
          }
          uVar42 = FUN_038a6350(plStack_2a8,0);
          if ((uVar42 & 1) != 0) goto LAB_02795228;
        }
        iVar38 = FUN_0279a5a8(param_1,plStack_2c8,plStack_2a8,uVar36,0xc,0);
        auStack_a0[0] = iVar38 != 0;
        plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)PTR_DAT_06df2be8,auStack_a0);
        goto LAB_02798e48;
      }
    }
LAB_02795228:
    plVar55 = (long *)PTR_DAT_06ddfa10;
    lVar41 = *(long *)PTR_DAT_06ddfa10;
    if (*(int *)(lVar41 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      goto LAB_02795620;
    }
    break;
  case 0xd:
    lVar41 = FUN_0279a570(param_3,param_5,param_6,param_7);
    lVar43 = *(long *)PTR_DAT_06ddfa10;
    if (*(int *)(lVar43 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      lVar43 = *(long *)PTR_DAT_06ddfa10;
    }
    if (lVar41 == **(long **)(lVar43 + 0xb8)) {
LAB_02795694:
      auStack_a0[0] = 1;
      plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)PTR_DAT_06df2be8,auStack_a0);
    }
    else {
      if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      uVar42 = (**(code **)(*param_3 + 0x178))(param_3,*(undefined8 *)(*param_3 + 0x180));
      if ((uVar42 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_06dfb060 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        uVar42 = FUN_038a6350(lVar41,0);
        if ((uVar42 & 1) != 0) goto LAB_02795694;
      }
      auStack_a0._0_8_ = auStack_a0._0_8_ & 0xffffffffffffff00;
      plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)PTR_DAT_06df2be8,auStack_a0);
    }
    goto LAB_02798e48;
  case 0xf:
    switch(uVar36) {
    case 4:
    case 0x12:
      uVar53 = FUN_0279b378(param_1);
      if (*(int *)(*(long *)PTR_DAT_06ddaad8 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      uVar53 = FUN_02906f48(plStack_2c8,uVar53,0);
      uVar54 = FUN_0279b378(param_1);
      uVar54 = FUN_02906f48(plStack_2a8,uVar54,0);
      plVar55 = (long *)FUN_02519a6c(uVar53,uVar54,0);
      break;
    case 5:
      uVar53 = FUN_0279b378(param_1);
      puVar4 = PTR_DAT_06e1faf8;
      if (*(int *)(*(long *)PTR_DAT_06ddaad8 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      cVar27 = FUN_02903890(plStack_2c8,uVar53,0);
      uVar53 = FUN_0279b378(param_1);
      cVar28 = FUN_02903890(plStack_2a8,uVar53,0);
      auStack_a0._0_4_ = (int)cVar28 + (int)cVar27;
      uVar53 = thunk_FUN_015d01b0(*(undefined8 *)puVar4,auStack_a0);
      uVar54 = FUN_0279b378(param_1);
      uVar29 = FUN_02903890(uVar53,uVar54,0);
      dStack_150 = (double)CONCAT71(dStack_150._1_7_,uVar29);
      plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)puVar26,&dStack_150);
      break;
    case 6:
      uVar53 = FUN_0279b378(param_1);
      puVar5 = PTR_DAT_06e1faf8;
      puVar4 = PTR_DAT_06e0ce20;
      if (*(int *)(*(long *)PTR_DAT_06ddaad8 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      uVar39 = FUN_02903ee0(plStack_2c8,uVar53,0);
      uVar53 = FUN_0279b378(param_1);
      uVar36 = FUN_02903ee0(plStack_2a8,uVar53,0);
      auStack_a0._0_4_ = (uVar36 & 0xff) + (uVar39 & 0xff);
      uVar53 = thunk_FUN_015d01b0(*(undefined8 *)puVar5,auStack_a0);
      uVar54 = FUN_0279b378(param_1);
      uVar29 = FUN_02903ee0(uVar53,uVar54,0);
      dStack_150 = (double)CONCAT71(dStack_150._1_7_,uVar29);
      plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)puVar4,&dStack_150);
      break;
    case 7:
      uVar53 = FUN_0279b378(param_1);
      puVar4 = PTR_DAT_06e1faf8;
      if (*(int *)(*(long *)PTR_DAT_06ddaad8 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      sVar32 = FUN_02904500(plStack_2c8,uVar53,0);
      uVar53 = FUN_0279b378(param_1);
      sVar33 = FUN_02904500(plStack_2a8,uVar53,0);
      auStack_a0._0_4_ = (int)sVar33 + (int)sVar32;
      uVar53 = thunk_FUN_015d01b0(*(undefined8 *)puVar4,auStack_a0);
      uVar54 = FUN_0279b378(param_1);
      uVar30 = FUN_02904500(uVar53,uVar54,0);
      dStack_150 = (double)CONCAT62(dStack_150._2_6_,uVar30);
      plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)puVar22,&dStack_150);
      break;
    case 8:
      uVar53 = FUN_0279b378(param_1);
      puVar4 = PTR_DAT_06e1faf8;
      if (*(int *)(*(long *)PTR_DAT_06ddaad8 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      uVar39 = OVRPlugin_OVRP_1_1_0__ovrp_GetUserIPD(plStack_2c8,uVar53,0);
      uVar53 = FUN_0279b378(param_1);
      uVar36 = OVRPlugin_OVRP_1_1_0__ovrp_GetUserIPD(plStack_2a8,uVar53,0);
      auStack_a0._0_4_ = (uVar36 & 0xffff) + (uVar39 & 0xffff);
      uVar53 = thunk_FUN_015d01b0(*(undefined8 *)puVar4,auStack_a0);
      uVar54 = FUN_0279b378(param_1);
      uVar30 = OVRPlugin_OVRP_1_1_0__ovrp_GetUserIPD(uVar53,uVar54,0);
      dStack_150 = (double)CONCAT62(dStack_150._2_6_,uVar30);
      plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)puVar9,&dStack_150);
      break;
    case 9:
      uVar53 = FUN_0279b378(param_1);
      if (*(int *)(*(long *)PTR_DAT_06ddaad8 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      iVar38 = FUN_02904f4c(plStack_2c8,uVar53,0);
      puVar4 = PTR_DAT_06e1faf8;
      uVar53 = FUN_0279b378(param_1);
      iVar40 = FUN_02904f4c(plStack_2a8,uVar53,0);
      if (SCARRY4(iVar38,iVar40)) {
        uVar53 = FUN_0160eec4();
                    /* WARNING: Subroutine does not return */
        FUN_0160ee7c(uVar53,*(undefined8 *)PTR_DAT_06e42730);
      }
      auStack_a0._0_4_ = iVar40 + iVar38;
      plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)puVar4,auStack_a0);
      break;
    case 10:
      uVar53 = FUN_0279b378(param_1);
      if (*(int *)(*(long *)PTR_DAT_06ddaad8 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      uVar39 = FUN_029053b8(plStack_2c8,uVar53,0);
      uVar53 = FUN_0279b378(param_1);
      uVar36 = FUN_029053b8(plStack_2a8,uVar53,0);
      if ((ulong)uVar36 + (ulong)uVar39 >> 0x20 != 0) {
        uVar53 = FUN_0160eec4();
                    /* WARNING: Subroutine does not return */
        FUN_0160ee7c(uVar53,*(undefined8 *)PTR_DAT_06e42730);
      }
      auStack_a0._0_4_ = uVar36 + uVar39;
      plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)puVar11,auStack_a0);
      break;
    case 0xb:
      uVar53 = FUN_0279b378(param_1);
      if (*(int *)(*(long *)PTR_DAT_06ddaad8 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      lVar41 = FUN_029058f4(plStack_2c8,uVar53,0);
      puVar4 = PTR_DAT_06e199e0;
      uVar53 = FUN_0279b378(param_1);
      lVar43 = FUN_029058f4(plStack_2a8,uVar53,0);
      if (((-1 < lVar43) && (0x7fffffffffffffff - lVar43 < lVar41)) ||
         ((lVar41 < 0 && (lVar43 < -0x8000000000000000 - lVar41)))) {
        uVar53 = FUN_0160eec4();
                    /* WARNING: Subroutine does not return */
        FUN_0160ee7c(uVar53,*(undefined8 *)PTR_DAT_06e42730);
      }
      auStack_a0._0_8_ = lVar43 + lVar41;
      plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)puVar4,auStack_a0);
      break;
    case 0xc:
      uVar53 = FUN_0279b378(param_1);
      if (*(int *)(*(long *)PTR_DAT_06ddaad8 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      uVar42 = FUN_02905dd8(plStack_2c8,uVar53,0);
      puVar4 = PTR_DAT_06e4c678;
      uVar53 = FUN_0279b378(param_1);
      uVar50 = FUN_02905dd8(plStack_2a8,uVar53,0);
      if (~uVar50 < uVar42) {
        uVar53 = FUN_0160eec4();
                    /* WARNING: Subroutine does not return */
        FUN_0160ee7c(uVar53,*(undefined8 *)PTR_DAT_06e42730);
      }
      auStack_a0._0_8_ = uVar50 + uVar42;
      plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)puVar4,auStack_a0);
      break;
    case 0xd:
      uVar53 = FUN_0279b378(param_1);
      if (*(int *)(*(long *)PTR_DAT_06ddaad8 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      fVar57 = (float)FUN_0290631c(plStack_2c8,uVar53,0);
      uVar53 = FUN_0279b378(param_1);
      fVar58 = (float)FUN_0290631c(plStack_2a8,uVar53,0);
      auStack_a0._0_4_ = fVar57 + fVar58;
      plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)puVar20,auStack_a0);
      break;
    case 0xe:
      uVar53 = FUN_0279b378(param_1);
      puVar4 = PTR_DAT_06e01080;
      if (*(int *)(*(long *)PTR_DAT_06ddaad8 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      dVar59 = (double)FUN_02906664(plStack_2c8,uVar53,0);
      uVar53 = FUN_0279b378(param_1);
      dVar60 = (double)FUN_02906664(plStack_2a8,uVar53,0);
      auStack_a0._0_8_ = dVar59 + dVar60;
      plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)puVar4,auStack_a0);
      break;
    case 0xf:
      uVar53 = FUN_0279b378(param_1);
      if (*(int *)(*(long *)PTR_DAT_06ddaad8 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      auVar61 = FUN_029068b0(plStack_2c8,uVar53,0);
      uVar53 = FUN_0279b378(param_1);
      auVar62 = FUN_029068b0(plStack_2a8,uVar53,0);
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      auStack_a0 = FUN_03710074(auVar61._0_8_,auVar61._8_8_,auVar62._0_8_,auVar62._8_8_,0);
      plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)puVar6,auStack_a0);
      break;
    case 0x10:
      if (plStack_2c8 == (long *)0x0) {
LAB_02798f94:
        plStack_2c8 = (long *)0x0;
      }
      else {
        lVar41 = *plStack_2c8;
        lVar43 = *(long *)PTR_DAT_06e56f18;
        if (((lVar41 == *(long *)PTR_DAT_06d9fd48) && (plStack_2a8 != (long *)0x0)) &&
           (*plStack_2a8 == lVar43)) {
          lVar41 = lVar43;
          if (*(int *)(lVar43 + 0xe0) == 0) {
            thunk_FUN_016466fc(lVar43);
            lVar43 = *(long *)puVar25;
            lVar41 = *plStack_2a8;
          }
          if (*(long *)(lVar41 + 0x40) != *(long *)(lVar43 + 0x40)) {
                    /* WARNING: Subroutine does not return */
            FUN_0160f170(plStack_2a8);
          }
          puVar52 = (undefined8 *)thunk_FUN_015d06c4(plStack_2a8);
          if (*(long *)(*plStack_2c8 + 0x40) != *(long *)(*(long *)puVar7 + 0x40)) {
                    /* WARNING: Subroutine does not return */
            FUN_0160f170(plStack_2c8);
          }
          uVar53 = *puVar52;
          puVar52 = (undefined8 *)thunk_FUN_015d06c4(plStack_2c8);
          auStack_a0._0_8_ = FUN_028bfa64(uVar53,*puVar52,0);
          plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)puVar25,auStack_a0);
          break;
        }
        if (lVar41 == lVar43) {
          if (plStack_2a8 == (long *)0x0) goto LAB_02798fd0;
          if (*plStack_2a8 == *(long *)PTR_DAT_06d9fd48) {
            lVar43 = lVar41;
            if (*(int *)(lVar41 + 0xe0) == 0) {
              thunk_FUN_016466fc();
              lVar41 = *plStack_2c8;
              lVar43 = *(long *)puVar25;
            }
            if (*(long *)(lVar41 + 0x40) != *(long *)(lVar43 + 0x40)) {
                    /* WARNING: Subroutine does not return */
              FUN_0160f170(plStack_2c8);
            }
            puVar52 = (undefined8 *)thunk_FUN_015d06c4(plStack_2c8);
            if (*(long *)(*plStack_2a8 + 0x40) != *(long *)(*(long *)puVar7 + 0x40)) {
                    /* WARNING: Subroutine does not return */
              FUN_0160f170(plStack_2a8);
            }
            uVar53 = *puVar52;
            puVar52 = (undefined8 *)thunk_FUN_015d06c4(plStack_2a8);
            auStack_a0._0_8_ = FUN_028bfa64(uVar53,*puVar52,0);
            plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)puVar25,auStack_a0);
            break;
          }
        }
      }
    default:
switchD_02794a1c_caseD_10:
      FUN_011a9bc8(plStack_2c8);
      plVar47 = (long *)thunk_FUN_0164ba04(plStack_2c8,0);
      FUN_011a9bc8(plStack_2a8);
      uVar53 = thunk_FUN_0164ba04(plStack_2a8,0);
      FUN_0279a470(uVar53,uVar39,plVar47,uVar53);
LAB_0279905c:
                    /* WARNING: Subroutine does not return */
      FUN_0160f170(plVar47);
    case 0x11:
      lVar41 = *(long *)PTR_DAT_06d9fd48;
      if (*(int *)(lVar41 + 0xe0) == 0) {
        thunk_FUN_016466fc(lVar41);
        lVar41 = *(long *)puVar7;
      }
      if (plStack_2c8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      if (*(long *)(*plStack_2c8 + 0x40) != *(long *)(lVar41 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_0160f170();
      }
      puVar52 = (undefined8 *)thunk_FUN_015d06c4();
      if (plStack_2a8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      if (*(long *)(*plStack_2a8 + 0x40) != *(long *)(*(long *)puVar7 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_0160f170(plStack_2a8);
      }
      uVar53 = *puVar52;
      puVar52 = (undefined8 *)thunk_FUN_015d06c4(plStack_2a8);
      auStack_a0._0_8_ = FUN_031d1c28(uVar53,*puVar52,0);
      plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)puVar7,auStack_a0);
      break;
    case 0x1c:
      uVar30 = FUN_038b57cc(plStack_2c8,0);
      puVar4 = PTR_DAT_06d953c8;
      uVar31 = FUN_038b57cc(plStack_2a8,0);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      uVar30 = FUN_02ed04e4(uVar30,uVar31,0);
      auStack_a0._0_2_ = uVar30;
      plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)puVar4,auStack_a0);
      break;
    case 0x1f:
      if (plStack_2c8 == (long *)0x0) goto LAB_02798f94;
      if (((*plStack_2c8 == *(long *)PTR_DAT_06d9fd48) && (plStack_2a8 != (long *)0x0)) &&
         (*plStack_2a8 == *(long *)PTR_DAT_06dc8928)) {
        auStack_b0 = FUN_038b7d34(plStack_2a8,0);
        uVar53 = FUN_02ed2e58(auStack_b0,0);
        if (*(int *)(*(long *)puVar25 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        if (*(long *)(*plStack_2c8 + 0x40) != *(long *)(*(long *)puVar7 + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_0160f170(plStack_2c8);
        }
        puVar52 = (undefined8 *)thunk_FUN_015d06c4(plStack_2c8);
        dStack_150 = (double)FUN_028bfa64(uVar53,*puVar52,0);
        uVar53 = thunk_FUN_015d01b0(*(undefined8 *)puVar25,&dStack_150);
        auVar63 = FUN_038b7d34(uVar53,0);
        auStack_a0._0_8_ = auVar63._0_8_;
        auStack_a0._8_4_ = auVar63._8_4_;
        plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)puVar10,auStack_a0);
        break;
      }
      if (*plStack_2c8 == *(long *)PTR_DAT_06dc8928) {
        if (plStack_2a8 == (long *)0x0) goto LAB_02798fd0;
        if (*plStack_2a8 == *(long *)PTR_DAT_06d9fd48) {
          auStack_c0 = FUN_038b7d34(plStack_2c8,0);
          uVar53 = FUN_02ed2e58(auStack_c0,0);
          if (*(int *)(*(long *)puVar25 + 0xe0) == 0) {
            thunk_FUN_016466fc();
          }
          if (*(long *)(*plStack_2a8 + 0x40) != *(long *)(*(long *)puVar7 + 0x40)) {
                    /* WARNING: Subroutine does not return */
            FUN_0160f170(plStack_2a8);
          }
          puVar52 = (undefined8 *)thunk_FUN_015d06c4(plStack_2a8);
          dStack_150 = (double)FUN_028bfa64(uVar53,*puVar52,0);
          uVar53 = thunk_FUN_015d01b0(*(undefined8 *)puVar25,&dStack_150);
          auVar63 = FUN_038b7d34(uVar53,0);
          auStack_a0._0_8_ = auVar63._0_8_;
          auStack_a0._8_4_ = auVar63._8_4_;
          plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)puVar10,auStack_a0);
          break;
        }
      }
      goto switchD_02794a1c_caseD_10;
    case 0x20:
      FUN_038b6b10(&dStack_150,plStack_2c8,0);
      auStack_a0._8_8_ = uStack_148;
      auStack_a0._0_8_ = dStack_150;
      uStack_90 = CONCAT44(uStack_90._4_4_,(undefined4)uStack_140);
      FUN_038b6b10(&dStack_170,plStack_2a8,0);
      uStack_148 = uStack_168;
      dStack_150 = dStack_170;
      uStack_140 = CONCAT44(uStack_140._4_4_,(undefined4)uStack_160);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      uStack_108 = auStack_a0._8_8_;
      dStack_110 = (double)auStack_a0._0_8_;
      uStack_100 = (undefined4)uStack_90;
      uStack_128 = uStack_148;
      dStack_130 = dStack_150;
      uStack_120 = (undefined4)uStack_140;
      FUN_02ed60ec(&dStack_190,&dStack_110,&dStack_130,0);
      uStack_168 = uStack_188;
      dStack_170 = dStack_190;
      uStack_160 = CONCAT44(uStack_160._4_4_,(undefined4)uStack_180);
      plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)puVar4,&dStack_190);
      break;
    case 0x21:
      auVar61 = FUN_038b6450(plStack_2c8,0);
      auVar62 = FUN_038b6450(plStack_2a8,0);
      if (*(int *)(*(long *)puVar17 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      auStack_a0 = FUN_02eda184(auVar61._0_8_,auVar61._8_8_,auVar62._0_8_,auVar62._8_8_,0);
      plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)puVar17,auStack_a0);
      break;
    case 0x23:
      uVar34 = FUN_038b5998(plStack_2c8,0);
      puVar4 = PTR_DAT_06dc0de0;
      uVar35 = FUN_038b5998(plStack_2a8,0);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      auStack_a0._0_4_ = FUN_02edc1c0(uVar34,uVar35,0);
      plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)puVar4,auStack_a0);
      break;
    case 0x24:
      uVar53 = FUN_038b5c1c(plStack_2c8,0);
      uVar54 = FUN_038b5c1c(plStack_2a8,0);
      if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      auStack_a0._0_8_ = FUN_02edd28c(uVar53,uVar54,0);
      plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)puVar13,auStack_a0);
      break;
    case 0x25:
      auVar61 = FUN_038b5fb0(plStack_2c8,0);
      puVar4 = PTR_DAT_06e05f90;
      auVar62 = FUN_038b5fb0(plStack_2a8,0);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      auStack_a0 = FUN_02ede468(auVar61._0_8_,auVar61._8_8_,auVar62._0_8_,auVar62._8_8_,0);
      plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)puVar4,auStack_a0);
      break;
    case 0x26:
      auVar61 = FUN_038b7788(plStack_2c8,0);
      puVar4 = PTR_DAT_06de6958;
      auVar62 = FUN_038b7788(plStack_2a8,0);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      auStack_a0 = FUN_02edfb54(auVar61._0_8_,auVar61._8_8_,auVar62._0_8_,auVar62._8_8_,0);
      plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)puVar4,auStack_a0);
      break;
    case 0x27:
      uVar53 = FUN_038b7138(plStack_2c8,0);
      uVar54 = FUN_038b7138(plStack_2a8,0);
      if (*(int *)(*(long *)puVar24 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      auStack_a0._0_8_ = FUN_02ee0f38(uVar53,uVar54,0);
      plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)puVar24,auStack_a0);
      break;
    case 0x28:
      FUN_038b8460(&dStack_150,plStack_2c8,0);
      auStack_a0._8_8_ = uStack_148;
      auStack_a0._0_8_ = dStack_150;
      uStack_88 = uStack_138;
      uStack_90 = uStack_140;
      FUN_038b8460(&dStack_170,plStack_2a8,0);
      puVar4 = PTR_DAT_06db65f8;
      uStack_148 = uStack_168;
      dStack_150 = dStack_170;
      uStack_138 = uStack_158;
      uStack_140 = uStack_160;
      if (*(int *)(*(long *)PTR_DAT_06db65f8 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      uStack_1a8 = auStack_a0._8_8_;
      dStack_1b0 = (double)auStack_a0._0_8_;
      uStack_198 = uStack_88;
      uStack_1a0 = uStack_90;
      uStack_1c8 = uStack_148;
      dStack_1d0 = dStack_150;
      uStack_1b8 = uStack_138;
      uStack_1c0 = uStack_140;
      FUN_02ee25b4(&dStack_190,&dStack_1b0,&dStack_1d0,0);
      uStack_168 = uStack_188;
      dStack_170 = dStack_190;
      uStack_158 = uStack_178;
      uStack_160 = uStack_180;
      plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)puVar4,&dStack_190);
    }
    goto LAB_02798e48;
  case 0x10:
    switch(uVar36) {
    case 5:
      uVar53 = FUN_0279b378(param_1);
      puVar4 = PTR_DAT_06e1faf8;
      if (*(int *)(*(long *)PTR_DAT_06ddaad8 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      cVar27 = FUN_02903890(plStack_2c8,uVar53,0);
      uVar53 = FUN_0279b378(param_1);
      cVar28 = FUN_02903890(plStack_2a8,uVar53,0);
      auStack_a0._0_4_ = (int)cVar27 - (int)cVar28;
      uVar53 = thunk_FUN_015d01b0(*(undefined8 *)puVar4,auStack_a0);
      uVar54 = FUN_0279b378(param_1);
      uVar29 = FUN_02903890(uVar53,uVar54,0);
      dStack_150 = (double)CONCAT71(dStack_150._1_7_,uVar29);
      plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)puVar26,&dStack_150);
      break;
    case 6:
      uVar53 = FUN_0279b378(param_1);
      puVar5 = PTR_DAT_06e1faf8;
      puVar4 = PTR_DAT_06e0ce20;
      if (*(int *)(*(long *)PTR_DAT_06ddaad8 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      uVar39 = FUN_02903ee0(plStack_2c8,uVar53,0);
      uVar53 = FUN_0279b378(param_1);
      uVar36 = FUN_02903ee0(plStack_2a8,uVar53,0);
      auStack_a0._0_4_ = (uVar39 & 0xff) - (uVar36 & 0xff);
      uVar53 = thunk_FUN_015d01b0(*(undefined8 *)puVar5,auStack_a0);
      uVar54 = FUN_0279b378(param_1);
      uVar29 = FUN_02903ee0(uVar53,uVar54,0);
      dStack_150 = (double)CONCAT71(dStack_150._1_7_,uVar29);
      plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)puVar4,&dStack_150);
      break;
    case 7:
      uVar53 = FUN_0279b378(param_1);
      puVar4 = PTR_DAT_06e1faf8;
      if (*(int *)(*(long *)PTR_DAT_06ddaad8 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      sVar32 = FUN_02904500(plStack_2c8,uVar53,0);
      uVar53 = FUN_0279b378(param_1);
      sVar33 = FUN_02904500(plStack_2a8,uVar53,0);
      auStack_a0._0_4_ = (int)sVar32 - (int)sVar33;
      uVar53 = thunk_FUN_015d01b0(*(undefined8 *)puVar4,auStack_a0);
      uVar54 = FUN_0279b378(param_1);
      uVar30 = FUN_02904500(uVar53,uVar54,0);
      dStack_150 = (double)CONCAT62(dStack_150._2_6_,uVar30);
      plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)puVar22,&dStack_150);
      break;
    case 8:
      uVar53 = FUN_0279b378(param_1);
      puVar4 = PTR_DAT_06e1faf8;
      if (*(int *)(*(long *)PTR_DAT_06ddaad8 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      uVar39 = OVRPlugin_OVRP_1_1_0__ovrp_GetUserIPD(plStack_2c8,uVar53,0);
      uVar53 = FUN_0279b378(param_1);
      uVar36 = OVRPlugin_OVRP_1_1_0__ovrp_GetUserIPD(plStack_2a8,uVar53,0);
      auStack_a0._0_4_ = (uVar39 & 0xffff) - (uVar36 & 0xffff);
      uVar53 = thunk_FUN_015d01b0(*(undefined8 *)puVar4,auStack_a0);
      uVar54 = FUN_0279b378(param_1);
      uVar30 = OVRPlugin_OVRP_1_1_0__ovrp_GetUserIPD(uVar53,uVar54,0);
      dStack_150 = (double)CONCAT62(dStack_150._2_6_,uVar30);
      plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)puVar9,&dStack_150);
      break;
    case 9:
      uVar53 = FUN_0279b378(param_1);
      if (*(int *)(*(long *)PTR_DAT_06ddaad8 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      iVar38 = FUN_02904f4c(plStack_2c8,uVar53,0);
      puVar4 = PTR_DAT_06e1faf8;
      uVar53 = FUN_0279b378(param_1);
      iVar40 = FUN_02904f4c(plStack_2a8,uVar53,0);
      if (((long)iVar38 - (long)iVar40) + 0x80000000U >> 0x20 != 0) {
        uVar53 = FUN_0160eec4();
                    /* WARNING: Subroutine does not return */
        FUN_0160ee7c(uVar53,*(undefined8 *)PTR_DAT_06e42730);
      }
      auStack_a0._0_4_ = iVar38 - iVar40;
      plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)puVar4,auStack_a0);
      break;
    case 10:
      uVar53 = FUN_0279b378(param_1);
      if (*(int *)(*(long *)PTR_DAT_06ddaad8 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      uVar39 = FUN_029053b8(plStack_2c8,uVar53,0);
      uVar53 = FUN_0279b378(param_1);
      uVar36 = FUN_029053b8(plStack_2a8,uVar53,0);
      if ((ulong)uVar39 - (ulong)uVar36 >> 0x20 != 0) {
        uVar53 = FUN_0160eec4();
                    /* WARNING: Subroutine does not return */
        FUN_0160ee7c(uVar53,*(undefined8 *)PTR_DAT_06e42730);
      }
      auStack_a0._0_4_ = uVar39 - uVar36;
      plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)puVar11,auStack_a0);
      break;
    case 0xb:
      uVar53 = FUN_0279b378(param_1);
      if (*(int *)(*(long *)PTR_DAT_06ddaad8 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      lVar41 = FUN_029058f4(plStack_2c8,uVar53,0);
      puVar4 = PTR_DAT_06e199e0;
      uVar53 = FUN_0279b378(param_1);
      uVar42 = FUN_029058f4(plStack_2a8,uVar53,0);
      if (((-1 < (long)uVar42) && (lVar41 < (long)(uVar42 ^ 0x8000000000000000))) ||
         (((long)uVar42 < 0 && ((long)(uVar42 + 0x7fffffffffffffff) < lVar41)))) {
        uVar53 = FUN_0160eec4();
                    /* WARNING: Subroutine does not return */
        FUN_0160ee7c(uVar53,*(undefined8 *)PTR_DAT_06e42730);
      }
      auStack_a0._0_8_ = lVar41 - uVar42;
      plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)puVar4,auStack_a0);
      break;
    case 0xc:
      uVar53 = FUN_0279b378(param_1);
      if (*(int *)(*(long *)PTR_DAT_06ddaad8 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      uVar42 = FUN_02905dd8(plStack_2c8,uVar53,0);
      puVar4 = PTR_DAT_06e4c678;
      uVar53 = FUN_0279b378(param_1);
      uVar50 = FUN_02905dd8(plStack_2a8,uVar53,0);
      auStack_a0._0_8_ = uVar42 - uVar50;
      if (uVar42 < uVar50) {
        uVar53 = FUN_0160eec4();
                    /* WARNING: Subroutine does not return */
        FUN_0160ee7c(uVar53,*(undefined8 *)PTR_DAT_06e42730);
      }
      plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)puVar4,auStack_a0);
      break;
    case 0xd:
      uVar53 = FUN_0279b378(param_1);
      if (*(int *)(*(long *)PTR_DAT_06ddaad8 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      fVar57 = (float)FUN_0290631c(plStack_2c8,uVar53,0);
      uVar53 = FUN_0279b378(param_1);
      fVar58 = (float)FUN_0290631c(plStack_2a8,uVar53,0);
      auStack_a0._0_4_ = fVar57 - fVar58;
      plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)puVar20,auStack_a0);
      break;
    case 0xe:
      uVar53 = FUN_0279b378(param_1);
      puVar4 = PTR_DAT_06e01080;
      if (*(int *)(*(long *)PTR_DAT_06ddaad8 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      dVar59 = (double)FUN_02906664(plStack_2c8,uVar53,0);
      uVar53 = FUN_0279b378(param_1);
      dVar60 = (double)FUN_02906664(plStack_2a8,uVar53,0);
      auStack_a0._0_8_ = dVar59 - dVar60;
      plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)puVar4,auStack_a0);
      break;
    case 0xf:
      uVar53 = FUN_0279b378(param_1);
      if (*(int *)(*(long *)PTR_DAT_06ddaad8 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      auVar61 = FUN_029068b0(plStack_2c8,uVar53,0);
      uVar53 = FUN_0279b378(param_1);
      auVar62 = FUN_029068b0(plStack_2a8,uVar53,0);
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      auStack_a0 = FUN_03710128(auVar61._0_8_,auVar61._8_8_,auVar62._0_8_,auVar62._8_8_,0);
      plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)puVar6,auStack_a0);
      break;
    case 0x10:
      lVar41 = *(long *)PTR_DAT_06e56f18;
      plVar55 = (long *)PTR_DAT_06d9fd48;
      if (*(int *)(lVar41 + 0xe0) == 0) {
        thunk_FUN_016466fc(lVar41);
        lVar41 = *(long *)puVar25;
        plVar55 = (long *)PTR_DAT_06d9fd48;
      }
      PTR_DAT_06d9fd48 = (undefined *)plVar55;
      if (plStack_2c8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      if (*(long *)(*plStack_2c8 + 0x40) != *(long *)(lVar41 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_0160f170();
      }
      puVar52 = (undefined8 *)thunk_FUN_015d06c4();
      if (plStack_2a8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      if (*(long *)(*plStack_2a8 + 0x40) != *(long *)(*plVar55 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_0160f170(plStack_2a8);
      }
      uVar53 = *puVar52;
      puVar52 = (undefined8 *)thunk_FUN_015d06c4(plStack_2a8);
      auStack_a0._0_8_ = FUN_028bfb08(uVar53,*puVar52,0);
      plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)puVar25,auStack_a0);
      break;
    case 0x11:
      if ((plStack_2c8 == (long *)0x0) ||
         (lVar41 = *(long *)PTR_DAT_06e56f18, *plStack_2c8 != lVar41)) {
        lVar41 = *(long *)PTR_DAT_06d9fd48;
        if (*(int *)(lVar41 + 0xe0) == 0) {
          thunk_FUN_016466fc(lVar41);
          lVar41 = *(long *)puVar7;
        }
        if (plStack_2c8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
        if (*(long *)(*plStack_2c8 + 0x40) != *(long *)(lVar41 + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_0160f170(plStack_2c8);
        }
        puVar52 = (undefined8 *)thunk_FUN_015d06c4(plStack_2c8);
        if (plStack_2a8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
        if (*(long *)(*plStack_2a8 + 0x40) != *(long *)(*(long *)puVar7 + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_0160f170(plStack_2a8);
        }
        uVar53 = *puVar52;
        puVar52 = (undefined8 *)thunk_FUN_015d06c4(plStack_2a8);
        auStack_a0._0_8_ = FUN_031d1c10(uVar53,*puVar52,0);
        plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)puVar7,auStack_a0);
      }
      else {
        lVar43 = lVar41;
        if (*(int *)(lVar41 + 0xe0) == 0) {
          thunk_FUN_016466fc();
          lVar41 = *plStack_2c8;
          lVar43 = *(long *)puVar25;
        }
        if (*(long *)(lVar41 + 0x40) != *(long *)(lVar43 + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_0160f170(plStack_2c8);
        }
        puVar52 = (undefined8 *)thunk_FUN_015d06c4(plStack_2c8);
        if (plStack_2a8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
        if (*(long *)(*plStack_2a8 + 0x40) != *(long *)(*(long *)puVar25 + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_0160f170(plStack_2a8);
        }
        uVar53 = *puVar52;
        puVar52 = (undefined8 *)thunk_FUN_015d06c4(plStack_2a8);
        auStack_a0._0_8_ = FUN_028bfba4(uVar53,*puVar52,0);
        plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)puVar7,auStack_a0);
      }
      break;
    default:
      goto switchD_02794a1c_caseD_10;
    case 0x1c:
      uVar30 = FUN_038b57cc(plStack_2c8,0);
      puVar4 = PTR_DAT_06d953c8;
      uVar31 = FUN_038b57cc(plStack_2a8,0);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      uVar30 = FUN_02ed05e8(uVar30,uVar31,0);
      auStack_a0._0_2_ = uVar30;
      plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)puVar4,auStack_a0);
      break;
    case 0x1f:
      if (plStack_2c8 == (long *)0x0) goto LAB_02798f94;
      if (((*plStack_2c8 == *(long *)PTR_DAT_06d9fd48) && (plStack_2a8 != (long *)0x0)) &&
         (*plStack_2a8 == *(long *)PTR_DAT_06dc8928)) {
        auStack_d0 = FUN_038b7d34(plStack_2a8,0);
        uVar53 = FUN_02ed2e58(auStack_d0,0);
        if (*(int *)(*(long *)puVar25 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        if (*(long *)(*plStack_2c8 + 0x40) != *(long *)(*(long *)puVar7 + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_0160f170(plStack_2c8);
        }
        puVar52 = (undefined8 *)thunk_FUN_015d06c4(plStack_2c8);
        dStack_150 = (double)FUN_028bfb08(uVar53,*puVar52,0);
        uVar53 = thunk_FUN_015d01b0(*(undefined8 *)puVar25,&dStack_150);
        auVar63 = FUN_038b7d34(uVar53,0);
        auStack_a0._0_8_ = auVar63._0_8_;
        auStack_a0._8_4_ = auVar63._8_4_;
        plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)puVar10,auStack_a0);
        break;
      }
      if (*plStack_2c8 == *(long *)PTR_DAT_06dc8928) {
        if (plStack_2a8 == (long *)0x0) goto LAB_02798fd0;
        if (*plStack_2a8 == *(long *)PTR_DAT_06d9fd48) {
          auStack_e0 = FUN_038b7d34(plStack_2c8,0);
          uVar53 = FUN_02ed2e58(auStack_e0,0);
          if (*(int *)(*(long *)puVar25 + 0xe0) == 0) {
            thunk_FUN_016466fc();
          }
          if (*(long *)(*plStack_2a8 + 0x40) != *(long *)(*(long *)puVar7 + 0x40)) {
                    /* WARNING: Subroutine does not return */
            FUN_0160f170(plStack_2a8);
          }
          puVar52 = (undefined8 *)thunk_FUN_015d06c4(plStack_2a8);
          dStack_150 = (double)FUN_028bfb08(uVar53,*puVar52,0);
          uVar53 = thunk_FUN_015d01b0(*(undefined8 *)puVar25,&dStack_150);
          auVar63 = FUN_038b7d34(uVar53,0);
          auStack_a0._0_8_ = auVar63._0_8_;
          auStack_a0._8_4_ = auVar63._8_4_;
          plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)puVar10,auStack_a0);
          break;
        }
      }
      goto switchD_02794a1c_caseD_10;
    case 0x20:
      FUN_038b6b10(&dStack_150,plStack_2c8,0);
      auStack_a0._8_8_ = uStack_148;
      auStack_a0._0_8_ = dStack_150;
      uStack_90 = CONCAT44(uStack_90._4_4_,(undefined4)uStack_140);
      FUN_038b6b10(&dStack_170,plStack_2a8,0);
      uStack_148 = uStack_168;
      dStack_150 = dStack_170;
      uStack_140 = CONCAT44(uStack_140._4_4_,(undefined4)uStack_160);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      uStack_1e8 = auStack_a0._8_8_;
      dStack_1f0 = (double)auStack_a0._0_8_;
      uStack_1e0 = (undefined4)uStack_90;
      uStack_208 = uStack_148;
      dStack_210 = dStack_150;
      uStack_200 = (undefined4)uStack_140;
      FUN_02ed6b08(&dStack_190,&dStack_1f0,&dStack_210,0);
      uStack_168 = uStack_188;
      dStack_170 = dStack_190;
      uStack_160 = CONCAT44(uStack_160._4_4_,(undefined4)uStack_180);
      plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)puVar4,&dStack_190);
      break;
    case 0x21:
      auVar61 = FUN_038b6450(plStack_2c8,0);
      auVar62 = FUN_038b6450(plStack_2a8,0);
      if (*(int *)(*(long *)puVar17 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      auStack_a0 = FUN_02eda2d4(auVar61._0_8_,auVar61._8_8_,auVar62._0_8_,auVar62._8_8_,0);
      plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)puVar17,auStack_a0);
      break;
    case 0x23:
      uVar34 = FUN_038b5998(plStack_2c8,0);
      puVar4 = PTR_DAT_06dc0de0;
      uVar35 = FUN_038b5998(plStack_2a8,0);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      auStack_a0._0_4_ = FUN_02edc2b0(uVar34,uVar35,0);
      plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)puVar4,auStack_a0);
      break;
    case 0x24:
      uVar53 = FUN_038b5c1c(plStack_2c8,0);
      uVar54 = FUN_038b5c1c(plStack_2a8,0);
      if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      auStack_a0._0_8_ =
           System_Array_EmptyInternalEnumerator<Dictionary_Entry<Int32Enum,_TranscodeFormatTuple>>__System_Collections_IEnumerator_Reset
                     (uVar53,uVar54,0);
      plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)puVar13,auStack_a0);
      break;
    case 0x25:
      auVar61 = FUN_038b5fb0(plStack_2c8,0);
      puVar4 = PTR_DAT_06e05f90;
      auVar62 = FUN_038b5fb0(plStack_2a8,0);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      auStack_a0 = System_Array_EmptyInternalEnumerator<Dictionary_Entry<NetAddress,_object>>__System_Collections_IEnumerator_Reset
                             (auVar61._0_8_,auVar61._8_8_,auVar62._0_8_,auVar62._8_8_,0);
      plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)puVar4,auStack_a0);
      break;
    case 0x26:
      auVar61 = FUN_038b7788(plStack_2c8,0);
      puVar4 = PTR_DAT_06de6958;
      auVar62 = FUN_038b7788(plStack_2a8,0);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      auStack_a0 = FUN_02edfce8(auVar61._0_8_,auVar61._8_8_,auVar62._0_8_,auVar62._8_8_,0);
      plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)puVar4,auStack_a0);
      break;
    case 0x27:
      uVar53 = FUN_038b7138(plStack_2c8,0);
      uVar54 = FUN_038b7138(plStack_2a8,0);
      if (*(int *)(*(long *)puVar24 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      auStack_a0._0_8_ = FUN_02ee1080(uVar53,uVar54,0);
      plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)puVar24,auStack_a0);
    }
    goto LAB_02798e48;
  case 0x11:
    switch(uVar36) {
    case 5:
      uVar53 = FUN_0279b378(param_1);
      puVar5 = PTR_DAT_06e5e6c8;
      puVar4 = PTR_DAT_06e1faf8;
      if (*(int *)(*(long *)PTR_DAT_06ddaad8 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      cVar27 = FUN_02903890(plStack_2c8,uVar53,0);
      uVar53 = FUN_0279b378(param_1);
      cVar28 = FUN_02903890(plStack_2a8,uVar53,0);
      auStack_a0._0_4_ = (int)cVar28 * (int)cVar27;
      uVar53 = thunk_FUN_015d01b0(*(undefined8 *)puVar4,auStack_a0);
      uVar54 = FUN_0279b378(param_1);
      uVar29 = FUN_02903890(uVar53,uVar54,0);
      dStack_150 = (double)CONCAT71(dStack_150._1_7_,uVar29);
      plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)puVar5,&dStack_150);
      break;
    case 6:
      uVar53 = FUN_0279b378(param_1);
      puVar4 = PTR_DAT_06e1faf8;
      if (*(int *)(*(long *)PTR_DAT_06ddaad8 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      uVar39 = FUN_02903ee0(plStack_2c8,uVar53,0);
      uVar53 = FUN_0279b378(param_1);
      uVar36 = FUN_02903ee0(plStack_2a8,uVar53,0);
      auStack_a0._0_4_ = (uVar36 & 0xff) * (uVar39 & 0xff);
      uVar53 = thunk_FUN_015d01b0(*(undefined8 *)puVar4,auStack_a0);
      uVar54 = FUN_0279b378(param_1);
      uVar29 = FUN_02903ee0(uVar53,uVar54,0);
      dStack_150 = (double)CONCAT71(dStack_150._1_7_,uVar29);
      plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)puVar18,&dStack_150);
      break;
    case 7:
      uVar53 = FUN_0279b378(param_1);
      puVar4 = PTR_DAT_06e1faf8;
      if (*(int *)(*(long *)PTR_DAT_06ddaad8 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      sVar32 = FUN_02904500(plStack_2c8,uVar53,0);
      uVar53 = FUN_0279b378(param_1);
      sVar33 = FUN_02904500(plStack_2a8,uVar53,0);
      auStack_a0._0_4_ = (int)sVar33 * (int)sVar32;
      uVar53 = thunk_FUN_015d01b0(*(undefined8 *)puVar4,auStack_a0);
      uVar54 = FUN_0279b378(param_1);
      uVar30 = FUN_02904500(uVar53,uVar54,0);
      dStack_150 = (double)CONCAT62(dStack_150._2_6_,uVar30);
      plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)puVar22,&dStack_150);
      break;
    case 8:
      uVar53 = FUN_0279b378(param_1);
      puVar4 = PTR_DAT_06e1faf8;
      if (*(int *)(*(long *)PTR_DAT_06ddaad8 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      uVar39 = OVRPlugin_OVRP_1_1_0__ovrp_GetUserIPD(plStack_2c8,uVar53,0);
      uVar53 = FUN_0279b378(param_1);
      uVar36 = OVRPlugin_OVRP_1_1_0__ovrp_GetUserIPD(plStack_2a8,uVar53,0);
      auStack_a0._0_4_ = (uVar36 & 0xffff) * (uVar39 & 0xffff);
      uVar53 = thunk_FUN_015d01b0(*(undefined8 *)puVar4,auStack_a0);
      uVar54 = FUN_0279b378(param_1);
      uVar30 = OVRPlugin_OVRP_1_1_0__ovrp_GetUserIPD(uVar53,uVar54,0);
      dStack_150 = (double)CONCAT62(dStack_150._2_6_,uVar30);
      plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)puVar9,&dStack_150);
      break;
    case 9:
      uVar53 = FUN_0279b378(param_1);
      if (*(int *)(*(long *)PTR_DAT_06ddaad8 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      iVar38 = FUN_02904f4c(plStack_2c8,uVar53,0);
      puVar4 = PTR_DAT_06e1faf8;
      uVar53 = FUN_0279b378(param_1);
      iVar40 = FUN_02904f4c(plStack_2a8,uVar53,0);
      if ((long)iVar40 * (long)iVar38 - (long)(int)((long)iVar40 * (long)iVar38) != 0) {
        uVar53 = FUN_0160eec4();
                    /* WARNING: Subroutine does not return */
        FUN_0160ee7c(uVar53,*(undefined8 *)PTR_DAT_06e42730);
      }
      auStack_a0._0_4_ = iVar40 * iVar38;
      plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)puVar4,auStack_a0);
      break;
    case 10:
      uVar53 = FUN_0279b378(param_1);
      if (*(int *)(*(long *)PTR_DAT_06ddaad8 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      uVar39 = FUN_029053b8(plStack_2c8,uVar53,0);
      uVar53 = FUN_0279b378(param_1);
      uVar36 = FUN_029053b8(plStack_2a8,uVar53,0);
      if ((ulong)uVar39 * (ulong)uVar36 >> 0x20 != 0) {
        uVar53 = FUN_0160eec4();
                    /* WARNING: Subroutine does not return */
        FUN_0160ee7c(uVar53,*(undefined8 *)PTR_DAT_06e42730);
      }
      auStack_a0._0_4_ = uVar36 * uVar39;
      plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)puVar11,auStack_a0);
      break;
    case 0xb:
      uVar53 = FUN_0279b378(param_1);
      if (*(int *)(*(long *)PTR_DAT_06ddaad8 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      uVar50 = FUN_029058f4(plStack_2c8,uVar53,0);
      puVar4 = PTR_DAT_06e199e0;
      uVar53 = FUN_0279b378(param_1);
      uVar51 = FUN_029058f4(plStack_2a8,uVar53,0);
      uVar42 = -uVar50;
      if (-1 < (long)uVar50) {
        uVar42 = uVar50;
      }
      uVar1 = -uVar51;
      if (-1 < (long)uVar51) {
        uVar1 = uVar51;
      }
      uVar56 = 0x7fffffffffffffff;
      if (((long)uVar50 < 1) || ((long)uVar51 < 1)) {
        uVar56 = 0x7fffffffffffffff;
        if (0 < (long)uVar51 || 0 < (long)uVar50) {
          uVar56 = 0x8000000000000000;
        }
        if (uVar50 != 0) goto LAB_02796ccc;
      }
      else {
LAB_02796ccc:
        uVar2 = 0;
        if (uVar42 != 0) {
          uVar2 = uVar56 / uVar42;
        }
        if (uVar2 < uVar1) {
          uVar53 = FUN_0160eec4();
                    /* WARNING: Subroutine does not return */
          FUN_0160ee7c(uVar53,*(undefined8 *)PTR_DAT_06e42730);
        }
      }
      auStack_a0._0_8_ = uVar51 * uVar50;
      plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)puVar4,auStack_a0);
      break;
    case 0xc:
      uVar53 = FUN_0279b378(param_1);
      if (*(int *)(*(long *)PTR_DAT_06ddaad8 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      uVar42 = FUN_02905dd8(plStack_2c8,uVar53,0);
      puVar4 = PTR_DAT_06e4c678;
      uVar53 = FUN_0279b378(param_1);
      uVar50 = FUN_02905dd8(plStack_2a8,uVar53,0);
      if (uVar50 == 0) {
        auStack_a0._0_8_ = 0;
      }
      else {
        auStack_a0._0_8_ = uVar50 * uVar42;
        uVar51 = 0;
        if (uVar50 != 0) {
          uVar51 = (ulong)auStack_a0._0_8_ / uVar50;
        }
        if (uVar51 != uVar42) {
          uVar53 = FUN_0160eec4();
                    /* WARNING: Subroutine does not return */
          FUN_0160ee7c(uVar53,*(undefined8 *)PTR_DAT_06e42730);
        }
      }
      plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)puVar4,auStack_a0);
      break;
    case 0xd:
      uVar53 = FUN_0279b378(param_1);
      if (*(int *)(*(long *)PTR_DAT_06ddaad8 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      fVar57 = (float)FUN_0290631c(plStack_2c8,uVar53,0);
      uVar53 = FUN_0279b378(param_1);
      fVar58 = (float)FUN_0290631c(plStack_2a8,uVar53,0);
      auStack_a0._0_4_ = fVar57 * fVar58;
      plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)puVar20,auStack_a0);
      break;
    case 0xe:
      uVar53 = FUN_0279b378(param_1);
      puVar4 = PTR_DAT_06e01080;
      if (*(int *)(*(long *)PTR_DAT_06ddaad8 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      dVar59 = (double)FUN_02906664(plStack_2c8,uVar53,0);
      uVar53 = FUN_0279b378(param_1);
      dVar60 = (double)FUN_02906664(plStack_2a8,uVar53,0);
      auStack_a0._0_8_ = dVar59 * dVar60;
      plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)puVar4,auStack_a0);
      break;
    case 0xf:
      uVar53 = FUN_0279b378(param_1);
      if (*(int *)(*(long *)PTR_DAT_06ddaad8 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      auVar61 = FUN_029068b0(plStack_2c8,uVar53,0);
      uVar53 = FUN_0279b378(param_1);
      auVar62 = FUN_029068b0(plStack_2a8,uVar53,0);
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      auStack_a0 = FUN_037101dc(auVar61._0_8_,auVar61._8_8_,auVar62._0_8_,auVar62._8_8_,0);
      plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)puVar6,auStack_a0);
      break;
    default:
      goto switchD_02794a1c_caseD_10;
    case 0x1c:
      uVar30 = FUN_038b57cc(plStack_2c8,0);
      puVar4 = PTR_DAT_06d953c8;
      uVar31 = FUN_038b57cc(plStack_2a8,0);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      uVar30 = FUN_02ed06ec(uVar30,uVar31,0);
      auStack_a0._0_2_ = uVar30;
      plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)puVar4,auStack_a0);
      break;
    case 0x20:
      FUN_038b6b10(&dStack_150,plStack_2c8,0);
      auStack_a0._8_8_ = uStack_148;
      auStack_a0._0_8_ = dStack_150;
      uStack_90 = CONCAT44(uStack_90._4_4_,(undefined4)uStack_140);
      FUN_038b6b10(&dStack_170,plStack_2a8,0);
      uStack_148 = uStack_168;
      dStack_150 = dStack_170;
      uStack_140 = CONCAT44(uStack_140._4_4_,(undefined4)uStack_160);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      uStack_228 = auStack_a0._8_8_;
      dStack_230 = (double)auStack_a0._0_8_;
      uStack_220 = (undefined4)uStack_90;
      uStack_248 = uStack_148;
      dStack_250 = dStack_150;
      uStack_240 = (undefined4)uStack_140;
      FUN_02ed6be8(&dStack_190,&dStack_230,&dStack_250,0);
      uStack_168 = uStack_188;
      dStack_170 = dStack_190;
      uStack_160 = CONCAT44(uStack_160._4_4_,(undefined4)uStack_180);
      plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)puVar4,&dStack_190);
      break;
    case 0x21:
      auVar61 = FUN_038b6450(plStack_2c8,0);
      auVar62 = FUN_038b6450(plStack_2a8,0);
      if (*(int *)(*(long *)puVar17 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      auStack_a0 = FUN_02eda424(auVar61._0_8_,auVar61._8_8_,auVar62._0_8_,auVar62._8_8_,0);
      plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)puVar17,auStack_a0);
      break;
    case 0x23:
      uVar34 = FUN_038b5998(plStack_2c8,0);
      puVar4 = PTR_DAT_06dc0de0;
      uVar35 = FUN_038b5998(plStack_2a8,0);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      auStack_a0._0_4_ = FUN_02edc3a0(uVar34,uVar35,0);
      plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)puVar4,auStack_a0);
      break;
    case 0x24:
      uVar53 = FUN_038b5c1c(plStack_2c8,0);
      uVar54 = FUN_038b5c1c(plStack_2a8,0);
      if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      auStack_a0._0_8_ = FUN_02edd4d8(uVar53,uVar54,0);
      plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)puVar13,auStack_a0);
      break;
    case 0x25:
      auVar61 = FUN_038b5fb0(plStack_2c8,0);
      puVar4 = PTR_DAT_06e05f90;
      auVar62 = FUN_038b5fb0(plStack_2a8,0);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      auStack_a0 = FUN_02ede6b0(auVar61._0_8_,auVar61._8_8_,auVar62._0_8_,auVar62._8_8_,0);
      plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)puVar4,auStack_a0);
      break;
    case 0x26:
      auVar61 = FUN_038b7788(plStack_2c8,0);
      puVar4 = PTR_DAT_06de6958;
      auVar62 = FUN_038b7788(plStack_2a8,0);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      auStack_a0 = FUN_02edfe78(auVar61._0_8_,auVar61._8_8_,auVar62._0_8_,auVar62._8_8_,0);
      plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)puVar4,auStack_a0);
      break;
    case 0x27:
      uVar53 = FUN_038b7138(plStack_2c8,0);
      uVar54 = FUN_038b7138(plStack_2a8,0);
      if (*(int *)(*(long *)puVar24 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      auStack_a0._0_8_ = FUN_02ee11c8(uVar53,uVar54,0);
      plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)puVar24,auStack_a0);
    }
    goto LAB_02798e48;
  case 0x12:
    switch(uVar36) {
    case 5:
      uVar53 = FUN_0279b378(param_1);
      puVar4 = PTR_DAT_06e1faf8;
      if (*(int *)(*(long *)PTR_DAT_06ddaad8 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      cVar27 = FUN_02903890(plStack_2c8,uVar53,0);
      uVar53 = FUN_0279b378(param_1);
      cVar28 = FUN_02903890(plStack_2a8,uVar53,0);
      auStack_a0._0_4_ = 0;
      if (cVar28 != 0) {
        auStack_a0._0_4_ = (int)cVar27 / (int)cVar28;
      }
      uVar53 = thunk_FUN_015d01b0(*(undefined8 *)puVar4,auStack_a0);
      uVar54 = FUN_0279b378(param_1);
      puVar4 = PTR_DAT_06e5e6c8;
      uVar29 = FUN_02903890(uVar53,uVar54,0);
      dStack_150 = (double)CONCAT71(dStack_150._1_7_,uVar29);
      plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)puVar4,&dStack_150);
      break;
    case 6:
      uVar53 = FUN_0279b378(param_1);
      puVar4 = PTR_DAT_06e1faf8;
      if (*(int *)(*(long *)PTR_DAT_06ddaad8 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      uVar39 = FUN_02903ee0(plStack_2c8,uVar53,0);
      uVar53 = FUN_0279b378(param_1);
      uVar36 = FUN_02903ee0(plStack_2a8,uVar53,0);
      auStack_a0._0_4_ = 0;
      if ((uVar36 & 0xff) != 0) {
        auStack_a0._0_4_ = (uVar39 & 0xff) / (uVar36 & 0xff);
      }
      uVar53 = thunk_FUN_015d01b0(*(undefined8 *)puVar4,auStack_a0);
      uVar54 = FUN_0279b378(param_1);
      puVar4 = PTR_DAT_06e0ce20;
      uVar29 = FUN_02903ee0(uVar53,uVar54,0);
      dStack_150 = (double)CONCAT71(dStack_150._1_7_,uVar29);
      plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)puVar4,&dStack_150);
      break;
    case 7:
      uVar53 = FUN_0279b378(param_1);
      puVar4 = PTR_DAT_06e1faf8;
      if (*(int *)(*(long *)PTR_DAT_06ddaad8 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      sVar32 = FUN_02904500(plStack_2c8,uVar53,0);
      uVar53 = FUN_0279b378(param_1);
      sVar33 = FUN_02904500(plStack_2a8,uVar53,0);
      auStack_a0._0_4_ = 0;
      if (sVar33 != 0) {
        auStack_a0._0_4_ = (int)sVar32 / (int)sVar33;
      }
      uVar53 = thunk_FUN_015d01b0(*(undefined8 *)puVar4,auStack_a0);
      uVar54 = FUN_0279b378(param_1);
      puVar4 = PTR_DAT_06e467c0;
      uVar30 = FUN_02904500(uVar53,uVar54,0);
      dStack_150 = (double)CONCAT62(dStack_150._2_6_,uVar30);
      plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)puVar4,&dStack_150);
      break;
    case 8:
      uVar53 = FUN_0279b378(param_1);
      puVar4 = PTR_DAT_06e1faf8;
      if (*(int *)(*(long *)PTR_DAT_06ddaad8 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      uVar39 = OVRPlugin_OVRP_1_1_0__ovrp_GetUserIPD(plStack_2c8,uVar53,0);
      uVar53 = FUN_0279b378(param_1);
      uVar36 = OVRPlugin_OVRP_1_1_0__ovrp_GetUserIPD(plStack_2a8,uVar53,0);
      auStack_a0._0_4_ = 0;
      if ((uVar36 & 0xffff) != 0) {
        auStack_a0._0_4_ = (uVar39 & 0xffff) / (uVar36 & 0xffff);
      }
      uVar53 = thunk_FUN_015d01b0(*(undefined8 *)puVar4,auStack_a0);
      uVar54 = FUN_0279b378(param_1);
      puVar4 = PTR_DAT_06dc2fe0;
      uVar30 = OVRPlugin_OVRP_1_1_0__ovrp_GetUserIPD(uVar53,uVar54,0);
      dStack_150 = (double)CONCAT62(dStack_150._2_6_,uVar30);
      plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)puVar4,&dStack_150);
      break;
    case 9:
      uVar53 = FUN_0279b378(param_1);
      puVar4 = PTR_DAT_06e1faf8;
      if (*(int *)(*(long *)PTR_DAT_06ddaad8 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      iVar38 = FUN_02904f4c(plStack_2c8,uVar53,0);
      uVar53 = FUN_0279b378(param_1);
      iVar40 = FUN_02904f4c(plStack_2a8,uVar53,0);
      auStack_a0._0_4_ = 0;
      if (iVar40 != 0) {
        auStack_a0._0_4_ = iVar38 / iVar40;
      }
      plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)puVar4,auStack_a0);
      break;
    case 10:
      uVar53 = FUN_0279b378(param_1);
      if (*(int *)(*(long *)PTR_DAT_06ddaad8 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      uVar39 = FUN_029053b8(plStack_2c8,uVar53,0);
      uVar53 = FUN_0279b378(param_1);
      uVar36 = FUN_029053b8(plStack_2a8,uVar53,0);
      auStack_a0._0_4_ = 0;
      if (uVar36 != 0) {
        auStack_a0._0_4_ = uVar39 / uVar36;
      }
      plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)puVar11,auStack_a0);
      break;
    case 0xb:
      uVar53 = FUN_0279b378(param_1);
      if (*(int *)(*(long *)PTR_DAT_06ddaad8 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      lVar41 = FUN_029058f4(plStack_2c8,uVar53,0);
      uVar53 = FUN_0279b378(param_1);
      lVar43 = FUN_029058f4(plStack_2a8,uVar53,0);
      auStack_a0._0_8_ = 0;
      if (lVar43 != 0) {
        auStack_a0._0_8_ = lVar41 / lVar43;
      }
      plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)puVar21,auStack_a0);
      break;
    case 0xc:
      uVar53 = FUN_0279b378(param_1);
      if (*(int *)(*(long *)PTR_DAT_06ddaad8 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      uVar42 = FUN_02905dd8(plStack_2c8,uVar53,0);
      uVar53 = FUN_0279b378(param_1);
      uVar50 = FUN_02905dd8(plStack_2a8,uVar53,0);
      auStack_a0._0_8_ = 0;
      if (uVar50 != 0) {
        auStack_a0._0_8_ = uVar42 / uVar50;
      }
      plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)puVar23,auStack_a0);
      break;
    case 0xd:
      uVar53 = FUN_0279b378(param_1);
      if (*(int *)(*(long *)PTR_DAT_06ddaad8 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      fVar57 = (float)FUN_0290631c(plStack_2c8,uVar53,0);
      uVar53 = FUN_0279b378(param_1);
      fVar58 = (float)FUN_0290631c(plStack_2a8,uVar53,0);
      auStack_a0._0_4_ = fVar57 / fVar58;
      plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)puVar20,auStack_a0);
      break;
    case 0xe:
      uVar53 = FUN_0279b378(param_1);
      if (*(int *)(*(long *)PTR_DAT_06ddaad8 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      dVar59 = (double)FUN_02906664(plStack_2a8,uVar53,0);
      uVar53 = FUN_0279b378(param_1);
      dVar60 = (double)FUN_02906664(plStack_2c8,uVar53,0);
      auStack_a0._0_8_ = dVar60 / dVar59;
      plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)puVar14,auStack_a0);
      break;
    case 0xf:
      uVar53 = FUN_0279b378(param_1);
      if (*(int *)(*(long *)PTR_DAT_06ddaad8 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      auVar61 = FUN_029068b0(plStack_2c8,uVar53,0);
      uVar53 = FUN_0279b378(param_1);
      auVar62 = FUN_029068b0(plStack_2a8,uVar53,0);
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      auStack_a0 = FUN_0371028c(auVar61._0_8_,auVar61._8_8_,auVar62._0_8_,auVar62._8_8_,0);
      plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)puVar6,auStack_a0);
      break;
    default:
      goto switchD_02794a1c_caseD_10;
    case 0x1c:
      uVar30 = FUN_038b57cc(plStack_2c8,0);
      puVar4 = PTR_DAT_06d953c8;
      uVar31 = FUN_038b57cc(plStack_2a8,0);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      uVar30 = FUN_02ed07f0(uVar30,uVar31,0);
      auStack_a0._0_2_ = uVar30;
      plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)puVar4,auStack_a0);
      break;
    case 0x20:
      FUN_038b6b10(&dStack_150,plStack_2c8,0);
      auStack_a0._8_8_ = uStack_148;
      auStack_a0._0_8_ = dStack_150;
      uStack_90 = CONCAT44(uStack_90._4_4_,(undefined4)uStack_140);
      FUN_038b6b10(&dStack_170,plStack_2a8,0);
      uStack_148 = uStack_168;
      dStack_150 = dStack_170;
      uStack_140 = CONCAT44(uStack_140._4_4_,(undefined4)uStack_160);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      uStack_268 = auStack_a0._8_8_;
      dStack_270 = (double)auStack_a0._0_8_;
      uStack_260 = (undefined4)uStack_90;
      uStack_288 = uStack_148;
      dStack_290 = dStack_150;
      uStack_280 = (undefined4)uStack_140;
      FUN_02ed73ec(&dStack_190,&dStack_270,&dStack_290,0);
      uStack_168 = uStack_188;
      dStack_170 = dStack_190;
      uStack_160 = CONCAT44(uStack_160._4_4_,(undefined4)uStack_180);
      plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)puVar4,&dStack_190);
      break;
    case 0x21:
      auVar61 = FUN_038b6450(plStack_2c8,0);
      puVar4 = PTR_DAT_06e09ec0;
      auVar62 = FUN_038b6450(plStack_2a8,0);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      auStack_a0 = FUN_02eda574(auVar61._0_8_,auVar61._8_8_,auVar62._0_8_,auVar62._8_8_,0);
      plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)puVar4,auStack_a0);
      break;
    case 0x23:
      uVar34 = FUN_038b5998(plStack_2c8,0);
      uVar35 = FUN_038b5998(plStack_2a8,0);
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      auStack_a0._0_4_ = FUN_02edc4cc(uVar34,uVar35,0);
      plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)puVar8,auStack_a0);
      break;
    case 0x24:
      uVar53 = FUN_038b5c1c(plStack_2c8,0);
      uVar54 = FUN_038b5c1c(plStack_2a8,0);
      if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      auStack_a0._0_8_ = FUN_02edd604(uVar53,uVar54,0);
      plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)puVar13,auStack_a0);
      break;
    case 0x25:
      auVar61 = FUN_038b5fb0(plStack_2c8,0);
      puVar4 = PTR_DAT_06e05f90;
      auVar62 = FUN_038b5fb0(plStack_2a8,0);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      auStack_a0 = FUN_02ede818(auVar61._0_8_,auVar61._8_8_,auVar62._0_8_,auVar62._8_8_,0);
      plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)puVar4,auStack_a0);
      break;
    case 0x26:
      auVar61 = FUN_038b7788(plStack_2c8,0);
      puVar4 = PTR_DAT_06de6958;
      auVar62 = FUN_038b7788(plStack_2a8,0);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      auStack_a0 = FUN_02edff84(auVar61._0_8_,auVar61._8_8_,auVar62._0_8_,auVar62._8_8_,0);
      plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)puVar4,auStack_a0);
      break;
    case 0x27:
      uVar53 = FUN_038b7138(plStack_2c8,0);
      uVar54 = FUN_038b7138(plStack_2a8,0);
      if (*(int *)(*(long *)puVar24 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      auStack_a0._0_8_ = FUN_02ee1310(uVar53,uVar54,0);
      plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)puVar24,auStack_a0);
    }
    goto LAB_02798e48;
  case 0x14:
    if (uVar36 < 0x26) {
      if ((1L << ((ulong)uVar36 & 0x3f) & 0x3810000fe0U) != 0) {
        if (*(int *)(*(long *)PTR_DAT_06dfb060 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        uVar42 = FUN_038a5dd0(uVar36,0);
        if ((uVar42 & 1) == 0) {
          uVar53 = FUN_0279b378(param_1);
          if (*(int *)(*(long *)puVar12 + 0xe0) == 0) {
            thunk_FUN_016466fc();
          }
          lVar43 = FUN_029058f4(plStack_2c8,uVar53,0);
          uVar53 = FUN_0279b378(param_1);
          lVar44 = FUN_029058f4(plStack_2a8,uVar53,0);
          lVar41 = 0;
          if (lVar44 != 0) {
            lVar41 = lVar43 / lVar44;
          }
          auStack_a0._0_8_ = lVar43 - lVar41 * lVar44;
          uVar53 = thunk_FUN_015d01b0(*(undefined8 *)puVar21,auStack_a0);
          if (*(int *)(*(long *)PTR_DAT_06dfb060 + 0xe0) == 0) {
            thunk_FUN_016466fc();
          }
          uVar54 = FUN_038a5ce0(uVar36,0);
          uVar49 = FUN_0279b378(param_1);
          plVar55 = (long *)FUN_02902028(uVar53,uVar54,uVar49,0);
        }
        else {
          auVar61 = FUN_038b5fb0(plStack_2c8,0);
          auVar62 = FUN_038b5fb0(plStack_2a8,0);
          if (*(int *)(*(long *)puVar15 + 0xe0) == 0) {
            thunk_FUN_016466fc();
          }
          auStack_f8 = FUN_02ede950(auVar61._0_8_,auVar61._8_8_,auVar62._0_8_,auVar62._8_8_,0);
          if (uVar36 == 0x1c) {
            uVar30 = FUN_02eded98(auStack_f8,0);
            auStack_a0._0_2_ = uVar30;
            plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)puVar5,auStack_a0);
          }
          else if (uVar36 == 0x23) {
            uVar34 = FUN_02edee58(auStack_f8,0);
            auStack_a0._0_4_ = uVar34;
            plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)PTR_DAT_06dc0de0,auStack_a0);
          }
          else if (uVar36 == 0x24) {
            auStack_a0._0_8_ = FUN_02edeebc(auStack_f8,0);
            plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)puVar13,auStack_a0);
          }
          else {
            auStack_a0 = auStack_f8;
            plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)puVar15,auStack_a0);
          }
        }
        goto LAB_02798e48;
      }
      if ((ulong)uVar36 == 0xc) {
        uVar53 = FUN_0279b378(param_1);
        if (*(int *)(*(long *)puVar12 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        uVar50 = FUN_02905dd8(plStack_2c8,uVar53,0);
        uVar53 = FUN_0279b378(param_1);
        uVar51 = FUN_02905dd8(plStack_2a8,uVar53,0);
        uVar42 = 0;
        if (uVar51 != 0) {
          uVar42 = uVar50 / uVar51;
        }
        auStack_a0._0_8_ = uVar50 - uVar42 * uVar51;
        plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)puVar23,auStack_a0);
        goto LAB_02798e48;
      }
    }
    goto switchD_02794a1c_caseD_10;
  case 0x1a:
    plStack_2c8 = (long *)FUN_0279a570(param_3,param_5,param_6,param_7);
    lVar41 = *(long *)PTR_DAT_06ddfa10;
    if (*(int *)(lVar41 + 0xe0) == 0) {
      thunk_FUN_016466fc(lVar41);
      lVar41 = *(long *)PTR_DAT_06ddfa10;
    }
    if (plStack_2c8 != (long *)**(undefined8 **)(lVar41 + 0xb8)) {
      if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      uVar42 = (**(code **)(*param_3 + 0x178))(param_3,*(undefined8 *)(*param_3 + 0x180));
      puVar4 = PTR_DAT_06ddfa10;
      if ((uVar42 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_06dfb060 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        uVar42 = FUN_038a6350(plStack_2c8,0);
        if ((uVar42 & 1) != 0) {
          lVar41 = *(long *)puVar4;
          goto LAB_027957e8;
        }
      }
      if (plStack_2c8 != (long *)0x0) {
        lVar41 = *plStack_2c8;
        if (lVar41 == *(long *)PTR_DAT_06df2be8) {
          pcVar46 = (char *)thunk_FUN_015d06c4(plStack_2c8);
          if (*pcVar46 == '\0') {
            auStack_a0._0_8_ = auStack_a0._0_8_ & 0xffffffffffffff00;
            plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)PTR_DAT_06df2be8,auStack_a0);
            goto LAB_02798e48;
          }
        }
        else {
          if (lVar41 != *(long *)puVar16) goto LAB_02798ef0;
          if (*(long *)(lVar41 + 0x40) != *(long *)(*(long *)puVar16 + 0x40)) {
                    /* WARNING: Subroutine does not return */
            FUN_0160f170(plStack_2c8);
          }
          puVar48 = (undefined1 *)thunk_FUN_015d06c4(plStack_2c8);
          auStack_e8[0] = *puVar48;
          uVar42 = FUN_02bb877c(auStack_e8,0);
          if ((uVar42 & 1) != 0) {
            auStack_a0._0_8_ = auStack_a0._0_8_ & 0xffffffffffffff00;
            plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)PTR_DAT_06df2be8,auStack_a0);
            goto LAB_02798e48;
          }
        }
        plStack_2a8 = (long *)FUN_0279a570(param_4,param_5,param_6,param_7);
        lVar41 = *(long *)puVar4;
        if (*(int *)(lVar41 + 0xe0) == 0) {
          thunk_FUN_016466fc(lVar41);
          lVar41 = *(long *)puVar4;
        }
        if (plStack_2a8 == (long *)**(undefined8 **)(lVar41 + 0xb8)) {
LAB_02795ec8:
          if (*(int *)(lVar41 + 0xe0) == 0) {
            thunk_FUN_016466fc(lVar41);
            lVar41 = *(long *)puVar4;
          }
          goto LAB_02795910;
        }
        if (param_4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
        uVar42 = (**(code **)(*param_4 + 0x178))(param_4,*(undefined8 *)(*param_4 + 0x180));
        if ((uVar42 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_06dfb060 + 0xe0) == 0) {
            thunk_FUN_016466fc();
          }
          uVar42 = FUN_038a6350(plStack_2a8,0);
          if ((uVar42 & 1) != 0) {
            lVar41 = *(long *)puVar4;
            goto LAB_02795ec8;
          }
        }
        if (plStack_2a8 != (long *)0x0) {
          lVar41 = *plStack_2a8;
          if (lVar41 == *(long *)PTR_DAT_06df2be8) {
            puVar48 = (undefined1 *)thunk_FUN_015d06c4(plStack_2a8);
            auStack_a0[0] = *puVar48;
            plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)PTR_DAT_06df2be8,auStack_a0);
            goto LAB_02798e48;
          }
          if (lVar41 == *(long *)puVar16) {
            if (*(long *)(lVar41 + 0x40) != *(long *)(*(long *)puVar16 + 0x40)) {
                    /* WARNING: Subroutine does not return */
              FUN_0160f170(plStack_2a8);
            }
            puVar48 = (undefined1 *)thunk_FUN_015d06c4(plStack_2a8);
            auStack_e8[0] = *puVar48;
            uVar29 = FUN_02bb876c(auStack_e8,0);
            auStack_a0._0_8_ = CONCAT71(auStack_a0._1_7_,uVar29) & 0xffffffffffffff01;
            plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)PTR_DAT_06df2be8,auStack_a0);
            goto LAB_02798e48;
          }
          goto switchD_02794a1c_caseD_10;
        }
        goto LAB_02798fd0;
      }
LAB_02798ef0:
      plStack_2a8 = (long *)FUN_0279a570(param_4,param_5,param_6,param_7);
      goto switchD_02794a1c_caseD_10;
    }
LAB_027957e8:
    if (*(int *)(lVar41 + 0xe0) == 0) {
      thunk_FUN_016466fc(lVar41);
      goto LAB_0279590c;
    }
LAB_02795910:
    plVar55 = *(long **)(lVar41 + 0xb8);
    goto LAB_02795628;
  case 0x1b:
    plStack_2c8 = (long *)FUN_0279a570(param_3,param_5,param_6,param_7);
    lVar41 = *(long *)PTR_DAT_06ddfa10;
    if (*(int *)(lVar41 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      lVar41 = *(long *)PTR_DAT_06ddfa10;
    }
    if (plStack_2c8 != (long *)**(undefined8 **)(lVar41 + 0xb8)) {
      if (*(int *)(*(long *)PTR_DAT_06dfb060 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      uVar42 = FUN_038a6350(plStack_2c8,0);
      if ((uVar42 & 1) == 0) {
        if (plStack_2c8 != (long *)0x0) {
          lVar41 = *plStack_2c8;
          if ((lVar41 == *(long *)PTR_DAT_06df2be8) || (lVar41 == *(long *)puVar16)) {
            if (*(long *)(lVar41 + 0x40) != *(long *)(*(long *)PTR_DAT_06df2be8 + 0x40)) {
                    /* WARNING: Subroutine does not return */
              FUN_0160f170(plStack_2c8);
            }
            pcVar46 = (char *)thunk_FUN_015d06c4(plStack_2c8);
            if (*pcVar46 != '\0') {
              auStack_a0[0] = 1;
              plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)PTR_DAT_06df2be8,auStack_a0);
              goto LAB_02798e48;
            }
            goto LAB_02795b28;
          }
        }
        plStack_2a8 = (long *)FUN_0279a570(param_4,param_5,param_6,param_7);
        goto switchD_02794a1c_caseD_10;
      }
    }
LAB_02795b28:
    plVar47 = (long *)FUN_0279a570(param_4,param_5,param_6,param_7);
    lVar41 = *(long *)PTR_DAT_06ddfa10;
    if (*(int *)(lVar41 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      lVar41 = *(long *)PTR_DAT_06ddfa10;
    }
    plVar55 = plStack_2c8;
    if (plVar47 == (long *)**(undefined8 **)(lVar41 + 0xb8)) goto LAB_02798e48;
    if (*(int *)(*(long *)PTR_DAT_06dfb060 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    uVar42 = FUN_038a6350(plVar47,0);
    if ((uVar42 & 1) != 0) goto LAB_02798e48;
    lVar41 = *(long *)PTR_DAT_06ddfa10;
    if (*(int *)(lVar41 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      lVar41 = *(long *)PTR_DAT_06ddfa10;
    }
    plVar55 = plVar47;
    if (plStack_2c8 == (long *)**(undefined8 **)(lVar41 + 0xb8)) goto LAB_02798e48;
    if (*(int *)(*(long *)PTR_DAT_06dfb060 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    uVar42 = FUN_038a6350(plStack_2c8,0);
    if ((uVar42 & 1) != 0) goto LAB_02798e48;
    if (plVar47 != (long *)0x0) {
      lVar41 = *plVar47;
      if (lVar41 == *(long *)PTR_DAT_06df2be8) {
        pcVar46 = (char *)thunk_FUN_015d06c4(plVar47);
        uVar29 = *pcVar46 != '\0';
      }
      else {
        plStack_2a8 = plVar47;
        if (lVar41 != *(long *)puVar16) goto switchD_02794a1c_caseD_10;
        if (*(long *)(lVar41 + 0x40) != *(long *)(*(long *)puVar16 + 0x40)) goto LAB_0279905c;
        puVar48 = (undefined1 *)thunk_FUN_015d06c4(plVar47);
        auStack_e8[0] = *puVar48;
        uVar29 = FUN_02bb876c(auStack_e8,0);
      }
      auStack_a0._0_8_ = CONCAT71(auStack_a0._1_7_,uVar29) & 0xffffffffffffff01;
      plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)PTR_DAT_06df2be8,auStack_a0);
      goto LAB_02798e48;
    }
LAB_02798fd0:
    plStack_2a8 = (long *)0x0;
    goto switchD_02794a1c_caseD_10;
  case 0x27:
    lVar41 = FUN_0279a570(param_3,param_5,param_6,param_7);
    lVar43 = *(long *)PTR_DAT_06ddfa10;
    if (*(int *)(lVar43 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      lVar43 = *(long *)PTR_DAT_06ddfa10;
    }
    if (lVar41 == **(long **)(lVar43 + 0xb8)) {
LAB_02795734:
      auStack_a0._0_8_ = auStack_a0._0_8_ & 0xffffffffffffff00;
      plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)PTR_DAT_06df2be8,auStack_a0);
    }
    else {
      if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      uVar42 = (**(code **)(*param_3 + 0x178))(param_3,*(undefined8 *)(*param_3 + 0x180));
      if ((uVar42 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_06dfb060 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        uVar42 = FUN_038a6350(lVar41,0);
        if ((uVar42 & 1) != 0) goto LAB_02795734;
      }
      auStack_a0[0] = 1;
      plVar55 = (long *)thunk_FUN_015d01b0(*(undefined8 *)PTR_DAT_06df2be8,auStack_a0);
    }
    goto LAB_02798e48;
  }
LAB_02795624:
  plVar55 = *(long **)(lVar41 + 0xb8);
LAB_02795628:
  plVar55 = (long *)*plVar55;
LAB_02798e48:
  if (*(long *)(lVar3 + 0x28) != lStack_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return plVar55;
}


