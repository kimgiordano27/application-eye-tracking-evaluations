/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<ProbeVolumeBakingSet.SerializedPerSceneCellList>
ENTRY_POINT: 0316ddb0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


long System_Array__InternalArray__ICollection_Contains<ProbeVolumeBakingSet_SerializedPerSceneCellList>
               (undefined1 param_1 [16],ulong param_2,ulong param_3,undefined8 *param_4)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  undefined8 extraout_x1;
  ulong extraout_x1_00;
  char cVar19;
  long lVar20;
  ulong uVar21;
  float *pfVar22;
  long lVar23;
  float *pfVar24;
  ulong unaff_x20;
  long *plVar25;
  undefined8 *puVar26;
  long unaff_x21;
  int iVar27;
  byte bVar28;
  int iVar29;
  int iVar30;
  ulong unaff_x24;
  undefined4 *puVar31;
  float *pfVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined4 uVar38;
  float fVar39;
  float fVar40;
  double dVar41;
  float fVar42;
  float fVar43;
  ulong uVar44;
  float fVar45;
  float fVar46;
  uint uVar47;
  float fVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  float fVar51;
  float fVar52;
  undefined4 uVar53;
  float fVar54;
  int iVar55;
  undefined8 in_stack_00000048;
  float fStack0000000000000050;
  float fStack0000000000000054;
  int iStack0000000000000058;
  float fStack000000000000005c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined8 in_stack_00000070;
  long *in_stack_00000078;
  undefined8 in_stack_00000080;
  float fStack0000000000000088;
  float fStack000000000000008c;
  long *in_stack_00000090;
  long in_stack_00000098;
  float fStack00000000000000a0;
  float fStack00000000000000a4;
  float in_stack_000000b0;
  long *in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  float *in_stack_000000d8;
  long *in_stack_000000e0;
  float fStack00000000000000f0;
  float fStack00000000000000f4;
  float fStack00000000000000f8;
  float fStack00000000000000fc;
  float fStack0000000000000100;
  float fStack0000000000000104;
  int iStack0000000000000108;
  float fStack000000000000010c;
  ulong in_stack_00000110;
  undefined8 in_stack_00000120;
  float fStack0000000000000128;
  float fStack000000000000012c;
  float in_stack_00000130;
  long in_stack_00000148;
  undefined8 in_stack_00000160;
  ulong in_stack_00000168;
  long in_stack_00000170;
  int in_stack_00000198;
  undefined4 uStack00000000000001a0;
  float fStack00000000000001a4;
  float fStack00000000000001a8;
  undefined4 uStack00000000000001ac;
  undefined4 uStack00000000000001b0;
  undefined4 uStack00000000000001b4;
  float in_stack_000001b8;
  float fStack00000000000001c0;
  float fStack00000000000001c4;
  float in_stack_000001c8;
  float fStack00000000000001d0;
  float fStack00000000000001d4;
  float in_stack_00000230;
  long in_stack_00000238;
  long in_stack_00000240;
  undefined4 in_stack_00000268;
  float in_stack_0000026c;
  float in_stack_00000270;
  ulong in_stack_00000278;
  float in_stack_00000280;
  long in_stack_00000290;
  undefined4 in_stack_00000298;
  undefined4 in_stack_0000029c;
  
                    /* try { // try from 0316ddb8 to 0326ddc3 has its CatchHandler @ 0316e030 */
                    /* try { // try from 0316ddc4 to 0326ddcf has its CatchHandler @ 0316e00c */
  uVar13 = thunk_FUN_02df8d3c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x10),*(undefined8 *)*param_4);
  iVar30 = in_stack_00000198;
  if ((uVar13 & 1) == 0) {
    puVar18 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar18 = *param_4;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar18,&PTR_PTR_066567d8,0);
  }
  *(undefined8 *)(&stack0x00000190 + (long)in_stack_00000198 * 8) = *param_4;
                    /* try { // try from 0316dde0 to 0326dde7 has its CatchHandler @ 0316dfc0 */
  in_stack_00000198 = in_stack_00000198 + 1;
  __cxa_end_catch();
  thunk_FUN_02dfd288(PTR_DAT_06a0b438);
  if (*(int *)(in_stack_00000098 + 0x18) < 3) {
    lVar14 = *(long *)(unaff_x21 + 0x78);
    if (lVar14 == 0) goto LAB_03168190;
    thunk_FUN_02dfd288(PTR_DAT_069fd080);
    if (1 < *(int *)(lVar14 + 0x18)) {
      lVar14 = *(long *)(unaff_x21 + 0x78);
                    /* try { // try from 0316decc to 0326ded7 has its CatchHandler @ 0316e03c */
      if (lVar14 == 0) goto LAB_03168190;
      thunk_FUN_02dfd288(PTR_DAT_069fd080);
      in_stack_00000298 = *(undefined4 *)(lVar14 + 0x18);
                    /* try { // try from 0316dee8 to 0326deef has its CatchHandler @ 0316dfd4 */
                    /* try { // try from 0316def4 to 0326defb has its CatchHandler @ 0316dfd0 */
      uVar15 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x48),&stack0x00000298);
                    /* try { // try from 0316df00 to 0326df17 has its CatchHandler @ 0316e034 */
      uVar16 = thunk_FUN_02dfd288(PTR_DAT_06a0c5b0);
      uVar15 = FUN_0536d408(uVar16,uVar15,0);
      lVar14 = thunk_FUN_02dfd288(PTR_DAT_069fb930);
      if (*(int *)(lVar14 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_0630bbe4(uVar15,0);
      puVar18 = (undefined8 *)PTR_DAT_069fd088;
      puVar26 = (undefined8 *)PTR_DAT_06a0b440;
      plVar25 = (long *)PTR_DAT_069fb978;
      uVar13 = in_stack_00000168;
      in_stack_00000198 = iVar30;
      goto LAB_0316c904;
    }
    lVar14 = thunk_FUN_02dfd288(PTR_DAT_069fb930);
                    /* try { // try from 0316dea4 to 0326deab has its CatchHandler @ 0316e02c */
    if (*(int *)(lVar14 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
                    /* try { // try from 0316deb0 to 0326decb has its CatchHandler @ 0316e074 */
    uVar15 = thunk_FUN_02dfd288(PTR_DAT_06a0c5c0);
  }
  else {
                    /* try { // try from 0316de08 to 0326de13 has its CatchHandler @ 0316e044 */
    lVar14 = FUN_0634bbcc(in_stack_00000148,0);
    if (lVar14 == 0) goto LAB_03168190;
    uVar15 = thunk_FUN_06354368(lVar14,0);
                    /* try { // try from 0316de20 to 0326de27 has its CatchHandler @ 0316e018 */
                    /* try { // try from 0316de2c to 0326de37 has its CatchHandler @ 0316e014 */
    uVar16 = thunk_FUN_02dfd288(PTR_DAT_06a0c5b0);
                    /* try { // try from 0316de3c to 0326de47 has its CatchHandler @ 0316e038 */
    uVar17 = thunk_FUN_02dfd288(PTR_DAT_06a0c5b8);
                    /* try { // try from 0316de48 to 0326de53 has its CatchHandler @ 0316e040 */
    uVar15 = FUN_0536d554(uVar16,uVar15,uVar17,0);
    lVar14 = thunk_FUN_02dfd288(PTR_DAT_069fb930);
    if (*(int *)(lVar14 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
  }
  FUN_06309d28(uVar15,0);
  puVar18 = (undefined8 *)PTR_DAT_069fd088;
  puVar26 = (undefined8 *)PTR_DAT_06a0b440;
  plVar25 = (long *)PTR_DAT_069fb978;
  uVar13 = in_stack_00000168;
  in_stack_00000198 = iVar30;
LAB_0316c904:
  in_stack_00000168 = uVar13;
  fVar45 = (float)param_3;
  fVar42 = (float)param_2;
  uVar13 = in_stack_00000168;
  if (unaff_x24 == 1) {
    lVar14 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,*puVar26);
    lVar12 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,*puVar26);
    if (in_stack_00000290 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    fVar33 = (float)FUN_0409f2f4(in_stack_00000290,1,*puVar18);
    if (in_stack_00000290 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    fVar46 = fVar42;
    fVar43 = fVar45;
    fVar34 = (float)FUN_0409f2f4(in_stack_00000290,0,*puVar18);
    if (DAT_06db4c75 == '\0') {
      FUN_02d965b8(PTR_DAT_069fbb48);
      DAT_06db4c75 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    fVar33 = fVar33 - fVar34;
    fVar42 = fVar42 - fVar46;
    fVar45 = fVar45 - fVar43;
    fVar46 = SQRT(fVar45 * fVar45 + fVar33 * fVar33 + fVar42 * fVar42);
    if (fVar46 <= DAT_010fd13c) {
      if (DAT_06db4c71 == '\0') {
        FUN_02d965b8(plVar25);
        DAT_06db4c71 = '\x01';
      }
      pfVar24 = *(float **)(*plVar25 + 0xb8);
      fVar33 = *pfVar24;
      fVar42 = pfVar24[1];
      fVar45 = pfVar24[2];
    }
    else {
      fVar33 = fVar33 / fVar46;
      fVar42 = fVar42 / fVar46;
      fVar45 = fVar45 / fVar46;
    }
    param_3 = (ulong)(uint)fVar45;
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    *(float *)(lVar12 + 0x94) = fVar33;
    *(float *)(lVar12 + 0x98) = fVar42;
    *(float *)(lVar12 + 0x9c) = fVar45;
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    *(float *)(lVar14 + 0x88) = fVar33;
    *(float *)(lVar14 + 0x8c) = fVar42;
    *(float *)(lVar14 + 0x90) = fVar45;
  }
LAB_0316cbac:
  in_stack_00000168 = uVar13;
  fVar42 = (float)param_3;
  if ((long)unaff_x24 < (long)*(int *)(in_stack_00000098 + 0x18)) {
    lVar14 = FUN_0400ff1c(in_stack_00000098,unaff_x24 & 0xffffffff,*puVar26);
    lVar12 = FUN_0400ff1c(in_stack_00000098,unaff_x24 & 0xffffffff,*puVar26);
    if ((lVar12 == 0) || (lVar14 == 0)) goto LAB_03168190;
    uVar15 = *(undefined8 *)(lVar12 + 0x48);
    *(undefined4 *)(lVar14 + 0x5c) = *(undefined4 *)(lVar12 + 0x50);
    *(undefined8 *)(lVar14 + 0x54) = uVar15;
  }
  if ((long)(*(int *)(in_stack_00000170 + 0x18) + -2) <= (long)in_stack_00000168) {
    if (*(char *)(in_stack_00000148 + 0x84) == '\0') {
      lVar14 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,*puVar26);
      if ((in_stack_00000290 == 0) || (lVar14 == 0)) goto LAB_03168190;
      uVar15 = *puVar26;
      *(undefined4 *)(lVar14 + 0xbc) = *(undefined4 *)(in_stack_00000290 + 0x18);
      lVar14 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,uVar15);
      if (lVar14 == 0) goto LAB_03168190;
      uVar15 = *puVar26;
      *(float *)(lVar14 + 0xc0) = *in_stack_000000d8;
      lVar14 = FUN_0400ff1c(in_stack_00000098,0,uVar15);
      if (lVar14 == 0) goto LAB_03168190;
      uVar15 = *puVar26;
      *(undefined4 *)(lVar14 + 0xbc) = 0;
      lVar14 = FUN_0400ff1c(in_stack_00000098,0,uVar15);
      if (lVar14 == 0) goto LAB_03168190;
      *(undefined4 *)(lVar14 + 0xc0) = 0;
      if (2 < *(int *)(in_stack_00000098 + 0x18)) {
        lVar14 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -2,*puVar26);
        fVar42 = *in_stack_000000d8;
        lVar12 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -2,*puVar26);
        if ((lVar12 == 0) || (lVar14 == 0)) goto LAB_03168190;
        uVar15 = *puVar26;
        *(float *)(lVar14 + 200) = fVar42 - *(float *)(lVar12 + 0xc0);
        lVar14 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -2,uVar15);
        if (lVar14 == 0) goto LAB_03168190;
        fVar42 = *(float *)(lVar14 + 200);
        lVar14 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -2,*puVar26);
        lVar12 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -2,*puVar26);
        if (1000.0 <= fVar42) {
          if (lVar12 == 0) goto LAB_03168190;
          fStack00000000000001d0 = *(float *)(lVar12 + 200) / 1000.0;
          uVar15 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c4e0,0);
          uVar15 = FUN_05362cb4(uVar15,*(undefined8 *)PTR_DAT_06a0c488,0);
        }
        else {
          if (lVar12 == 0) goto LAB_03168190;
          uVar15 = FUN_054fad00(lVar12 + 200,*(undefined8 *)PTR_DAT_06a0c498,0);
          uVar15 = FUN_05362cb4(uVar15,*(undefined8 *)PTR_DAT_06a0c4f0,0);
        }
        if (lVar14 != 0) {
          *(undefined8 *)(lVar14 + 0xd0) = uVar15;
          LeanTween__value((undefined8 *)(lVar14 + 0xd0),uVar15);
          lVar14 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -2,*puVar26);
          if (lVar14 != 0) {
            fVar45 = *(float *)(lVar14 + 0x4c);
            lVar14 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,*puVar26
                                 );
            if (lVar14 != 0) {
              fVar33 = *(float *)(lVar14 + 0x4c);
              fVar42 = fVar45 - fVar33;
              if (DAT_06db4ece == '\0') {
                FUN_02d965b8(PTR_DAT_069fbb48);
                DAT_06db4ece = '\x01';
              }
              puVar2 = PTR_DAT_069fbb48;
              if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              fVar43 = 0.0;
              fVar46 = SQRT((in_stack_00000230 * in_stack_00000230 + fVar42 * fVar42) * DAT_010fd194
                           );
              fVar42 = DAT_010fcd14;
              if (DAT_010fcd14 <= fVar46) {
                fVar42 = -1.0;
                fVar46 = (in_stack_00000230 * 0.0 + ABS(fVar45 - fVar33) * 50.0 + 0.0) / fVar46;
                fVar45 = 1.0;
                if (fVar46 <= 1.0) {
                  fVar45 = fVar46;
                }
                fVar33 = -1.0;
                if (-1.0 <= fVar46) {
                  fVar33 = fVar45;
                }
                if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                  fVar42 = -1.0;
                  thunk_FUN_02df485c();
                }
                dVar41 = acos((double)fVar33);
                fVar43 = (float)dVar41 * DAT_010fcf40;
              }
              fVar43 = 90.0 - fVar43;
              lVar14 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -2,
                                    *puVar26);
              if (fVar43 <= 10.0) {
                uVar15 = FUN_054fad00(&stack0x00000234,*(undefined8 *)PTR_DAT_06a0c498,0);
              }
              else {
                dVar41 = modf((double)fVar43,(double *)&stack0x00000298);
                if (0.0 <= fVar43) {
                  if (dVar41 == 0.5) {
                    fVar42 = 1.0;
                    goto LAB_0316e5fc;
                  }
                  fStack00000000000001d0 = (float)(int)(fVar43 + 0.5);
                }
                else if (dVar41 == -0.5) {
                  fVar42 = -1.0;
LAB_0316e5fc:
                  fStack00000000000001d0 =
                       (float)(double)CONCAT44(in_stack_0000029c,in_stack_00000298);
                  if (((long)(double)CONCAT44(in_stack_0000029c,in_stack_00000298) & 1U) != 0) {
                    fStack00000000000001d0 = fStack00000000000001d0 + fVar42;
                  }
                }
                else {
                  fStack00000000000001d0 = (float)(int)(fVar43 + -0.5);
                }
                uVar15 = FUN_054fabf8(&stack0x000001d0,0);
              }
              if (lVar14 != 0) {
                *(undefined8 *)(lVar14 + 0xd8) = uVar15;
                LeanTween__value((undefined8 *)(lVar14 + 0xd8),uVar15);
                lVar14 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -2,
                                      *puVar26);
                if (lVar14 != 0) {
                  fVar45 = *(float *)(lVar14 + 0x4c);
                  lVar14 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,
                                        *puVar26);
                  if (lVar14 != 0) {
                    fVar33 = *(float *)(lVar14 + 0x4c);
                    lVar14 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -2,
                                          *puVar26);
                    if (lVar14 != 0) {
                      fVar46 = *(float *)(lVar14 + 0x48);
                      lVar14 = FUN_0400ff1c(in_stack_00000098,
                                            *(int *)(in_stack_00000098 + 0x18) + -2,*puVar26);
                      if (lVar14 != 0) {
                        fVar43 = *(float *)(lVar14 + 0x50);
                        lVar14 = FUN_0400ff1c(in_stack_00000098,
                                              *(int *)(in_stack_00000098 + 0x18) + -1,*puVar26);
                        if (lVar14 != 0) {
                          fVar34 = *(float *)(lVar14 + 0x48);
                          lVar14 = FUN_0400ff1c(in_stack_00000098,
                                                *(int *)(in_stack_00000098 + 0x18) + -1,*puVar26);
                          if (lVar14 != 0) {
                            fVar52 = *(float *)(lVar14 + 0x50);
                            if (DAT_06db4c77 == '\0') {
                              FUN_02d965b8(PTR_DAT_069fbb48);
                              DAT_06db4c77 = '\x01';
                            }
                            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                              thunk_FUN_02df485c();
                            }
                            fVar43 = fVar43 - fVar52;
                            fVar46 = fVar46 - fVar34;
                            lVar14 = FUN_0400ff1c(in_stack_00000098,
                                                  *(int *)(in_stack_00000098 + 0x18) + -2,*puVar26);
                            fStack00000000000001d0 =
                                 (ABS(fVar45 - fVar33) / SQRT(fVar46 * fVar46 + fVar43 * fVar43)) *
                                 100.0;
                            uVar15 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c498,0
                                                 );
                            if (lVar14 != 0) goto LAB_0316ea58;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        goto LAB_03168190;
      }
    }
    else {
      lVar14 = FUN_0400ff1c(in_stack_00000098,0,*puVar26);
      if ((in_stack_00000290 == 0) || (lVar14 == 0)) goto LAB_03168190;
      uVar15 = *puVar26;
      *(undefined4 *)(lVar14 + 0xbc) = *(undefined4 *)(in_stack_00000290 + 0x18);
      lVar14 = FUN_0400ff1c(in_stack_00000098,0,uVar15);
      if (lVar14 == 0) goto LAB_03168190;
      *(float *)(lVar14 + 0xc0) = *in_stack_000000d8;
      if (2 < *(int *)(in_stack_00000098 + 0x18)) {
        lVar14 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,*puVar26);
        fVar42 = *in_stack_000000d8;
        lVar12 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,*puVar26);
        if ((lVar12 == 0) || (lVar14 == 0)) goto LAB_03168190;
        uVar15 = *puVar26;
        *(float *)(lVar14 + 200) = fVar42 - *(float *)(lVar12 + 0xc0);
        lVar14 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,uVar15);
        if (lVar14 == 0) goto LAB_03168190;
        fVar42 = *(float *)(lVar14 + 200);
        lVar14 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,*puVar26);
        lVar12 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,*puVar26);
        if (1000.0 <= fVar42) {
          if (lVar12 == 0) goto LAB_03168190;
          fStack00000000000001d0 = *(float *)(lVar12 + 200) / 1000.0;
          uVar15 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c4e0,0);
          uVar15 = FUN_05362cb4(uVar15,*(undefined8 *)PTR_DAT_06a0c488,0);
        }
        else {
          if (lVar12 == 0) goto LAB_03168190;
          uVar15 = FUN_054fad00(lVar12 + 200,*(undefined8 *)PTR_DAT_06a0c498,0);
          uVar15 = FUN_05362cb4(uVar15,*(undefined8 *)PTR_DAT_06a0c4f0,0);
        }
        if (lVar14 == 0) goto LAB_03168190;
        *(undefined8 *)(lVar14 + 0xd0) = uVar15;
        LeanTween__value((undefined8 *)(lVar14 + 0xd0),uVar15);
        lVar14 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,*puVar26);
        if (lVar14 == 0) goto LAB_03168190;
        fVar45 = *(float *)(lVar14 + 0x4c);
        lVar14 = FUN_0400ff1c(in_stack_00000098,0,*puVar26);
        if (lVar14 == 0) goto LAB_03168190;
        fVar33 = *(float *)(lVar14 + 0x4c);
        fVar42 = fVar45 - fVar33;
        if (DAT_06db4ece == '\0') {
          FUN_02d965b8(PTR_DAT_069fbb48);
          DAT_06db4ece = '\x01';
        }
        puVar2 = PTR_DAT_069fbb48;
        if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        fVar43 = 0.0;
        fVar46 = SQRT((in_stack_00000230 * in_stack_00000230 + fVar42 * fVar42) * DAT_010fd194);
        fVar42 = DAT_010fcd14;
        if (DAT_010fcd14 <= fVar46) {
          fVar42 = -1.0;
          fVar46 = (in_stack_00000230 * 0.0 + ABS(fVar45 - fVar33) * 50.0 + 0.0) / fVar46;
          fVar45 = 1.0;
          if (fVar46 <= 1.0) {
            fVar45 = fVar46;
          }
          fVar33 = -1.0;
          if (-1.0 <= fVar46) {
            fVar33 = fVar45;
          }
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            fVar42 = -1.0;
            thunk_FUN_02df485c();
          }
          dVar41 = acos((double)fVar33);
          fVar43 = (float)dVar41 * DAT_010fcf40;
        }
        fVar43 = 90.0 - fVar43;
        lVar14 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,*puVar26);
        if (fVar43 <= 10.0) {
          uVar15 = FUN_054fad00(&stack0x00000234,*(undefined8 *)PTR_DAT_06a0c498,0);
        }
        else {
          dVar41 = modf((double)fVar43,(double *)&stack0x00000298);
          if (0.0 <= fVar43) {
            if (dVar41 == 0.5) {
              fVar42 = 1.0;
              goto LAB_0316e5d0;
            }
            fStack00000000000001d0 = (float)(int)(fVar43 + 0.5);
          }
          else if (dVar41 == -0.5) {
            fVar42 = -1.0;
LAB_0316e5d0:
            fStack00000000000001d0 = (float)(double)CONCAT44(in_stack_0000029c,in_stack_00000298);
            if (((long)(double)CONCAT44(in_stack_0000029c,in_stack_00000298) & 1U) != 0) {
              fStack00000000000001d0 = fStack00000000000001d0 + fVar42;
            }
          }
          else {
            fStack00000000000001d0 = (float)(int)(fVar43 + -0.5);
          }
          uVar15 = FUN_054fabf8(&stack0x000001d0,0);
        }
        if (lVar14 == 0) goto LAB_03168190;
        *(undefined8 *)(lVar14 + 0xd8) = uVar15;
        LeanTween__value((undefined8 *)(lVar14 + 0xd8),uVar15);
        lVar14 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -2,*puVar26);
        if (lVar14 == 0) goto LAB_03168190;
        fVar45 = *(float *)(lVar14 + 0x4c);
        lVar14 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,*puVar26);
        if (lVar14 == 0) goto LAB_03168190;
        fVar33 = *(float *)(lVar14 + 0x4c);
        lVar14 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -2,*puVar26);
        if (lVar14 == 0) goto LAB_03168190;
        fVar46 = *(float *)(lVar14 + 0x48);
        lVar14 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -2,*puVar26);
        if (lVar14 == 0) goto LAB_03168190;
        fVar43 = *(float *)(lVar14 + 0x50);
        lVar14 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,*puVar26);
        if (lVar14 == 0) goto LAB_03168190;
        fVar34 = *(float *)(lVar14 + 0x48);
        lVar14 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,*puVar26);
        if (lVar14 == 0) goto LAB_03168190;
        fVar52 = *(float *)(lVar14 + 0x50);
        if (DAT_06db4c77 == '\0') {
          FUN_02d965b8(PTR_DAT_069fbb48);
          DAT_06db4c77 = '\x01';
        }
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        fVar43 = fVar43 - fVar52;
        fVar46 = fVar46 - fVar34;
        lVar14 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,*puVar26);
        fStack00000000000001d0 =
             (ABS(fVar45 - fVar33) / SQRT(fVar46 * fVar46 + fVar43 * fVar43)) * 100.0;
        uVar15 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c498,0);
        if (lVar14 == 0) goto LAB_03168190;
LAB_0316ea58:
        *(undefined8 *)(lVar14 + 0xe0) = uVar15;
        LeanTween__value((undefined8 *)(lVar14 + 0xe0),uVar15);
      }
    }
    fVar45 = 1000.0;
    if (1000.0 <= *in_stack_000000d8) {
      fVar45 = 1000.0;
      fStack00000000000001d0 = *in_stack_000000d8 / 1000.0;
      uVar15 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c4e0,0);
      puVar18 = (undefined8 *)PTR_DAT_06a0c488;
    }
    else {
      uVar15 = FUN_054fad00(in_stack_000000d8,*(undefined8 *)PTR_DAT_06a0c498,0);
      puVar18 = (undefined8 *)PTR_DAT_06a0c4f0;
    }
    uVar15 = FUN_05362cb4(uVar15,*puVar18,0);
    *(undefined8 *)(in_stack_00000148 + 0x2d0) = uVar15;
    LeanTween__value(in_stack_00000148 + 0x2d0,uVar15);
    if (*(int *)(in_stack_00000098 + 0x18) == 2) {
      lVar14 = FUN_0400ff1c(in_stack_00000098,0,*puVar26);
      if (lVar14 == 0) goto LAB_03168190;
      fVar33 = *(float *)(lVar14 + 200);
      lVar14 = FUN_0400ff1c(in_stack_00000098,0,*puVar26);
      lVar12 = FUN_0400ff1c(in_stack_00000098,0,*puVar26);
      if (1000.0 <= fVar33) {
        if (lVar12 == 0) goto LAB_03168190;
        fVar45 = 1000.0;
        fStack00000000000001d0 = *(float *)(lVar12 + 200) / 1000.0;
        uVar15 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c4e0,0);
        uVar15 = FUN_05362cb4(uVar15,*(undefined8 *)PTR_DAT_06a0c488,0);
      }
      else {
        if (lVar12 == 0) goto LAB_03168190;
        uVar15 = FUN_054fad00(lVar12 + 200,*(undefined8 *)PTR_DAT_06a0c498,0);
        uVar15 = FUN_05362cb4(uVar15,*(undefined8 *)PTR_DAT_06a0c4f0,0);
      }
      if (lVar14 == 0) goto LAB_03168190;
      *(undefined8 *)(lVar14 + 0xd0) = uVar15;
      LeanTween__value((undefined8 *)(lVar14 + 0xd0),uVar15);
    }
    if (*(char *)(in_stack_00000148 + 0x84) == '\0') {
      lVar14 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,*puVar26);
      if (lVar14 == 0) goto LAB_03168190;
      *(undefined8 *)(lVar14 + 0xd0) = *(undefined8 *)PTR_DAT_069fcde0;
      LeanTween__value();
    }
    puVar3 = PTR_DAT_06a0b440;
    puVar2 = PTR_DAT_069fd088;
    fVar33 = fVar45;
    if (iStack0000000000000058 == 0) goto LAB_0316ee54;
    if ((in_stack_00000290 == 0) ||
       (fVar46 = (float)FUN_0409f2f4(in_stack_00000290,0,*(undefined8 *)PTR_DAT_069fd088),
       in_stack_00000290 == 0)) goto LAB_03168190;
    FUN_0409f2f4(in_stack_00000290,0,*(undefined8 *)puVar2);
    lVar14 = FUN_0400ff1c(in_stack_00000098,0,*(undefined8 *)puVar3);
    puVar4 = PTR_DAT_06a0b7d0;
    puVar3 = PTR_DAT_069fbb48;
    if (lVar14 == 0) goto LAB_03168190;
    fVar33 = *(float *)(lVar14 + 200) * 0.5;
    fVar43 = 5.0;
    if (fVar33 <= 5.0) {
      fVar43 = fVar33;
    }
    if (in_stack_00000290 == 0) goto LAB_03168190;
    uVar21 = (ulong)(uint)fStack0000000000000054;
    iVar30 = 1;
    fVar46 = fStack0000000000000050 * 10.0 + fVar46;
    uVar13 = (ulong)(uint)fVar46;
    fVar34 = fStack0000000000000054 * 10.0 + fVar42;
    fVar52 = 0.0;
    goto LAB_0316ecc4;
  }
  unaff_x20 = in_stack_00000168 - 1;
  fStack00000000000001d4 = 0.0;
  lVar14 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,*puVar26);
  if ((in_stack_00000290 == 0) || (lVar14 == 0)) goto LAB_03168190;
  uVar15 = *puVar26;
  *(undefined4 *)(lVar14 + 0xbc) = *(undefined4 *)(in_stack_00000290 + 0x18);
  lVar14 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,uVar15);
  if (lVar14 == 0) goto LAB_03168190;
  *(float *)(lVar14 + 0xc0) = *in_stack_000000d8;
  iVar30 = (int)in_stack_00000168;
  if (1 < in_stack_00000168) {
    if (in_stack_00000168 == 2) {
      lVar14 = FUN_0400ff1c(in_stack_00000098,0,*puVar26);
      if (lVar14 == 0) goto LAB_03168190;
      iVar27 = 0;
      fVar42 = *in_stack_000000d8;
    }
    else {
      iVar27 = iVar30 + -2;
      lVar14 = FUN_0400ff1c(in_stack_00000098,iVar27,*puVar26);
      fVar42 = *in_stack_000000d8;
      lVar12 = FUN_0400ff1c(in_stack_00000098,iVar27,*puVar26);
      if ((lVar12 == 0) || (lVar14 == 0)) goto LAB_03168190;
      fVar42 = fVar42 - *(float *)(lVar12 + 0xc0);
    }
    puVar2 = PTR_DAT_06a0b440;
    *(float *)(lVar14 + 200) = fVar42;
    lVar14 = FUN_0400ff1c(in_stack_00000098,iVar27,*(undefined8 *)puVar2);
    if (lVar14 == 0) goto LAB_03168190;
    fVar42 = *(float *)(lVar14 + 200);
    lVar14 = FUN_0400ff1c(in_stack_00000098,iVar27,*(undefined8 *)puVar2);
    lVar12 = FUN_0400ff1c(in_stack_00000098,iVar27,*(undefined8 *)puVar2);
    if (1000.0 <= fVar42) {
      if (lVar12 == 0) goto LAB_03168190;
      fStack00000000000001d0 = *(float *)(lVar12 + 200) / 1000.0;
      uVar15 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c4e0,0);
      puVar18 = (undefined8 *)PTR_DAT_06a0c488;
    }
    else {
      if (lVar12 == 0) goto LAB_03168190;
      uVar15 = FUN_054fad00(lVar12 + 200,*(undefined8 *)PTR_DAT_06a0c498,0);
      puVar18 = (undefined8 *)PTR_DAT_06a0c4f0;
    }
    uVar15 = FUN_05362cb4(uVar15,*puVar18,0);
    if (lVar14 == 0) goto LAB_03168190;
    *(undefined8 *)(lVar14 + 0xd0) = uVar15;
    LeanTween__value((undefined8 *)(lVar14 + 0xd0),uVar15);
    puVar2 = PTR_DAT_06a0b440;
    lVar14 = FUN_0400ff1c(in_stack_00000098,iVar27,*(undefined8 *)PTR_DAT_06a0b440);
    if (lVar14 == 0) goto LAB_03168190;
    fVar42 = *(float *)(lVar14 + 0x4c);
    lVar14 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,*(undefined8 *)puVar2);
    if (lVar14 == 0) goto LAB_03168190;
    fVar45 = *(float *)(lVar14 + 0x4c);
    if (DAT_06db4ece == '\0') {
      FUN_02d965b8(PTR_DAT_069fbb48);
      DAT_06db4ece = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    fVar33 = fVar42 - fVar45;
    fVar43 = 0.0;
    fVar46 = SQRT((in_stack_00000230 * in_stack_00000230 + fVar33 * fVar33) * DAT_010fd194);
    fVar33 = DAT_010fcd14;
    if (DAT_010fcd14 <= fVar46) {
      fVar33 = -1.0;
      fVar46 = (in_stack_00000230 * 0.0 + ABS(fVar42 - fVar45) * 50.0 + 0.0) / fVar46;
      fVar42 = 1.0;
      if (fVar46 <= 1.0) {
        fVar42 = fVar46;
      }
      fVar45 = -1.0;
      if (-1.0 <= fVar46) {
        fVar45 = fVar42;
      }
      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
        fVar33 = -1.0;
        thunk_FUN_02df485c();
      }
      dVar41 = acos((double)fVar45);
      fVar43 = (float)dVar41 * DAT_010fcf40;
    }
    fVar43 = 90.0 - fVar43;
    lVar14 = FUN_0400ff1c(in_stack_00000098,iVar27,*(undefined8 *)puVar2);
    if (fVar43 <= 10.0) {
      uVar15 = FUN_054fad00(&stack0x00000234,*(undefined8 *)PTR_DAT_06a0c498,0);
      puVar18 = (undefined8 *)PTR_DAT_069fd088;
    }
    else {
      dVar41 = modf((double)fVar43,(double *)&stack0x00000298);
      puVar18 = (undefined8 *)PTR_DAT_069fd088;
      if (0.0 <= fVar43) {
        if (dVar41 == 0.5) {
          fVar42 = 1.0;
          goto LAB_0316a098;
        }
        fStack00000000000001d0 = (float)(int)(fVar43 + 0.5);
      }
      else if (dVar41 == -0.5) {
        fVar42 = -1.0;
LAB_0316a098:
        fStack00000000000001d0 = (float)(double)CONCAT44(in_stack_0000029c,in_stack_00000298);
        if (((long)(double)CONCAT44(in_stack_0000029c,in_stack_00000298) & 1U) != 0) {
          fStack00000000000001d0 = fStack00000000000001d0 + fVar42;
        }
      }
      else {
        fStack00000000000001d0 = (float)(int)(fVar43 + -0.5);
      }
      uVar15 = FUN_054fabf8(&stack0x000001d0,0);
    }
    if (lVar14 == 0) goto LAB_03168190;
    *(undefined8 *)(lVar14 + 0xd8) = uVar15;
    LeanTween__value((undefined8 *)(lVar14 + 0xd8),uVar15);
    puVar26 = (undefined8 *)PTR_DAT_06a0b440;
    lVar14 = FUN_0400ff1c(in_stack_00000098,iVar27,*(undefined8 *)PTR_DAT_06a0b440);
    if (lVar14 == 0) goto LAB_03168190;
    fVar42 = *(float *)(lVar14 + 0x4c);
    lVar14 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,*puVar26);
    if (lVar14 == 0) goto LAB_03168190;
    fVar45 = *(float *)(lVar14 + 0x4c);
    lVar14 = FUN_0400ff1c(in_stack_00000098,iVar27,*puVar26);
    if (lVar14 == 0) goto LAB_03168190;
    fVar46 = *(float *)(lVar14 + 0x48);
    lVar14 = FUN_0400ff1c(in_stack_00000098,iVar27,*puVar26);
    if (lVar14 == 0) goto LAB_03168190;
    fVar43 = *(float *)(lVar14 + 0x50);
    lVar14 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,*puVar26);
    if (lVar14 == 0) goto LAB_03168190;
    fVar34 = *(float *)(lVar14 + 0x48);
    lVar14 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,*puVar26);
    if (lVar14 == 0) goto LAB_03168190;
    fVar52 = *(float *)(lVar14 + 0x50);
    if (DAT_06db4c77 == '\0') {
      FUN_02d965b8(PTR_DAT_069fbb48);
      DAT_06db4c77 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    fVar43 = fVar43 - fVar52;
    fVar46 = fVar46 - fVar34;
    lVar14 = FUN_0400ff1c(in_stack_00000098,iVar27,*puVar26);
    fVar34 = 100.0;
    fStack00000000000001d0 =
         (ABS(fVar42 - fVar45) / SQRT(fVar46 * fVar46 + fVar43 * fVar43)) * 100.0;
    uVar15 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c498,0);
    if (lVar14 == 0) goto LAB_03168190;
    *(undefined8 *)(lVar14 + 0xe0) = uVar15;
    LeanTween__value((undefined8 *)(lVar14 + 0xe0),uVar15);
    if (in_stack_00000290 == 0) goto LAB_03168190;
    if (2 < *(int *)(in_stack_00000290 + 0x18)) {
      fStack0000000000000104 =
           (float)FUN_0409f2f4(in_stack_00000290,*(int *)(in_stack_00000290 + 0x18) + -1,*puVar18);
      if (in_stack_00000290 == 0) goto LAB_03168190;
      fVar42 = fVar34;
      fVar45 = fVar33;
      fVar46 = (float)FUN_0409f2f4(in_stack_00000290,*(int *)(in_stack_00000290 + 0x18) + -2,
                                   *puVar18);
      if (DAT_06db4c75 == '\0') {
        FUN_02d965b8(PTR_DAT_069fbb48);
        DAT_06db4c75 = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      fStack0000000000000104 = fStack0000000000000104 - fVar46;
      fVar34 = fVar34 - fVar42;
      fVar33 = fVar33 - fVar45;
      fStack00000000000000fc =
           SQRT(fVar33 * fVar33 + fStack0000000000000104 * fStack0000000000000104 + fVar34 * fVar34)
      ;
      if (fStack00000000000000fc <= DAT_010fd13c) {
        if (DAT_06db4c71 == '\0') {
          FUN_02d965b8(plVar25);
          DAT_06db4c71 = '\x01';
        }
        pfVar24 = *(float **)(*plVar25 + 0xb8);
        fStack0000000000000104 = *pfVar24;
        fStack0000000000000100 = pfVar24[1];
        fStack00000000000000fc = pfVar24[2];
      }
      else {
        fStack0000000000000104 = fStack0000000000000104 / fStack00000000000000fc;
        fStack0000000000000100 = fVar34 / fStack00000000000000fc;
        fStack00000000000000fc = fVar33 / fStack00000000000000fc;
      }
    }
  }
  if (in_stack_00000240 == 0) goto LAB_03168190;
  *(undefined4 *)(in_stack_00000240 + 0x18) = 0;
  *(int *)(in_stack_00000240 + 0x1c) = *(int *)(in_stack_00000240 + 0x1c) + 1;
  if (in_stack_00000238 == 0) goto LAB_03168190;
  in_stack_00000230 = 0.0;
  *(undefined4 *)(in_stack_00000238 + 0x18) = 0;
  *(int *)(in_stack_00000238 + 0x1c) = *(int *)(in_stack_00000238 + 0x1c) + 1;
  if ((*(uint *)(in_stack_00000170 + 0x18) <= in_stack_00000168) ||
     (uVar13 = in_stack_00000168 + 1, *(uint *)(in_stack_00000170 + 0x18) <= uVar13))
  goto LAB_0316f2c4;
  lVar14 = in_stack_00000170 + in_stack_00000168 * 0xc;
  lVar12 = in_stack_00000170 + uVar13 * 0xc;
  fVar45 = *in_stack_000000d8;
  pfVar24 = (float *)(lVar14 + 0x20);
  fVar46 = *pfVar24;
  fVar42 = *(float *)(lVar14 + 0x24);
  fVar33 = *(float *)(lVar14 + 0x28);
  pfVar32 = (float *)(lVar12 + 0x20);
  fVar43 = *pfVar32;
  fVar52 = *(float *)(lVar12 + 0x24);
  fVar34 = *(float *)(lVar12 + 0x28);
  if (DAT_06db4c77 == '\0') {
    FUN_02d965b8(PTR_DAT_069fbb48);
    DAT_06db4c77 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
     (lVar9 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),unaff_x20 & 0xffffffff,*puVar26),
     lVar9 == 0)) goto LAB_03168190;
  fVar42 = fVar42 - fVar52;
  fVar33 = fVar33 - fVar34;
  uVar44 = (ulong)(uint)fVar33;
  uVar21 = (ulong)(uint)(fVar33 * fVar33);
  fVar45 = fVar45 + SQRT(fVar33 * fVar33 + (fVar46 - fVar43) * (fVar46 - fVar43) + fVar42 * fVar42);
  if (*(int *)(lVar9 + 0x6c) == 0) {
    if ((*(uint *)(in_stack_00000170 + 0x18) <= in_stack_00000168) ||
       (*(uint *)(in_stack_00000170 + 0x18) <= uVar13)) goto LAB_0316f2c4;
    fVar46 = *pfVar24;
    fVar42 = *(float *)(lVar14 + 0x24);
    fVar43 = *pfVar32;
    fVar52 = *(float *)(lVar12 + 0x24);
    fVar33 = *(float *)(lVar14 + 0x28);
    fVar34 = *(float *)(lVar12 + 0x28);
    if (DAT_06db4c77 == '\0') {
      FUN_02d965b8(PTR_DAT_069fbb48);
      DAT_06db4c77 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    if (in_stack_00000168 < 2) {
      bVar7 = false;
    }
    else {
      if (*(long *)(in_stack_00000148 + 0x68) == 0) goto LAB_03168190;
      lVar9 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),iVar30 + -2,*puVar26);
      if (lVar9 == 0) goto LAB_03168190;
      if (*(int *)(lVar9 + 0x6c) == 1) {
        bVar7 = true;
      }
      else {
        if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
           (lVar9 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),iVar30 + -2,*puVar26),
           lVar9 == 0)) goto LAB_03168190;
        bVar7 = *(int *)(lVar9 + 0x6c) == 2;
      }
    }
    fVar35 = 0.0;
    if (in_stack_00000168 == 1) {
      fVar35 = fStack0000000000000064;
    }
    fVar37 = fStack0000000000000068;
    if (in_stack_00000168 != *(int *)(in_stack_00000170 + 0x18) - 3) {
      fVar37 = 1.0;
    }
    if (fVar37 <= fVar35) {
      iStack0000000000000108 = 0;
    }
    else {
      fVar42 = fVar42 - fVar52;
      fVar33 = fVar33 - fVar34;
      fVar42 = DAT_010fcf10 /
               SQRT(fVar33 * fVar33 + (fVar46 - fVar43) * (fVar46 - fVar43) + fVar42 * fVar42);
      do {
        uVar21 = *(ulong *)(in_stack_00000170 + 0x18);
        if (fVar42 + fVar35 <= 1.0) {
          bVar28 = 0;
        }
        else if (in_stack_00000168 == (int)uVar21 - 3) {
          bVar28 = *(byte *)(in_stack_00000148 + 0x84) ^ 1;
        }
        else {
          bVar28 = 0;
        }
        bVar8 = bVar28 != 0;
        fVar33 = 1.0;
        if (!bVar8) {
          fVar33 = fVar35;
        }
        if (((uVar21 & 0xffffffff) <= in_stack_00000168) || ((uVar21 & 0xffffffff) <= uVar13))
        goto LAB_0316f2c4;
        uVar49 = *(undefined4 *)(lVar14 + 0x24);
        uVar38 = *(undefined4 *)(lVar14 + 0x28);
        fVar46 = *pfVar24;
        FUN_04059a68(in_stack_000000c8,in_stack_00000168 & 0xffffffff,
                     *(undefined8 *)PTR_DAT_06a0a108);
        fVar34 = in_stack_0000026c;
        fVar52 = in_stack_00000270;
        fVar35 = (float)FUN_0316f340(in_stack_00000268,in_stack_0000026c,in_stack_00000270,fVar46,
                                     uVar49,uVar38);
        _fStack00000000000001c0 = CONCAT44(fVar34,fVar35);
        fVar46 = in_stack_00000160._4_4_;
        fVar43 = (float)in_stack_00000110;
        if (iStack0000000000000108 == 3) {
          iStack0000000000000108 = 0;
          fVar46 = fVar52;
          fVar43 = fVar35;
          fStack0000000000000128 = fVar34;
          fStack000000000000012c = fVar52;
          in_stack_00000130 = fVar35;
        }
        in_stack_000001c8 = fVar52;
        if (DAT_06db4c77 == '\0') {
          FUN_02d965b8(PTR_DAT_069fbb48);
          DAT_06db4c77 = '\x01';
        }
        if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        fVar39 = in_stack_000001c8;
        if (*(uint *)(in_stack_00000170 + 0x18) <= uVar13) goto LAB_0316f2c4;
        fVar51 = *pfVar32;
        fVar48 = *(float *)(lVar12 + 0x24);
        fVar36 = fStack00000000000001c0;
        fVar40 = fStack00000000000001c4;
        fVar54 = *(float *)(lVar12 + 0x28);
        if (DAT_06db4c77 == '\0') {
          FUN_02d965b8(PTR_DAT_069fbb48);
          DAT_06db4c77 = '\x01';
        }
        if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        if (in_stack_00000238 == 0) goto LAB_03168190;
        fVar40 = fVar40 - fVar48;
        iVar27 = *(int *)(in_stack_00000238 + 0x18);
        fVar39 = fVar39 - fVar54;
        fVar48 = fVar39 * fVar39;
        fVar36 = SQRT(fVar48 + (fVar36 - fVar51) * (fVar36 - fVar51) + fVar40 * fVar40);
        lVar9 = in_stack_00000238;
        if (iVar27 < 1) {
          if (in_stack_00000290 == 0) goto LAB_03168190;
          iVar27 = *(int *)(in_stack_00000290 + 0x18);
          lVar9 = in_stack_00000290;
          if (0 < iVar27) goto LAB_0316b4d8;
        }
        else {
LAB_0316b4d8:
          fVar40 = (float)FUN_0409f2f4(lVar9,iVar27 + -1,*(undefined8 *)PTR_DAT_069fd088);
          fStack00000000000000f0 = in_stack_000001c8;
          fStack00000000000000f8 = fStack00000000000001c0;
          fStack00000000000000f4 = fStack00000000000001c4;
          if (DAT_06db4c75 == '\0') {
            FUN_02d965b8(PTR_DAT_069fbb48);
            DAT_06db4c75 = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          plVar25 = (long *)PTR_DAT_069fb978;
          fStack00000000000000f8 = fStack00000000000000f8 - fVar40;
          fStack00000000000000f4 = fStack00000000000000f4 - fVar48;
          fStack00000000000000f0 = fStack00000000000000f0 - fVar39;
          fVar39 = SQRT(fStack00000000000000f0 * fStack00000000000000f0 +
                        fStack00000000000000f8 * fStack00000000000000f8 +
                        fStack00000000000000f4 * fStack00000000000000f4);
          if (fVar39 <= DAT_010fd13c) {
            if (DAT_06db4c71 == '\0') {
              FUN_02d965b8(PTR_DAT_069fb978);
              DAT_06db4c71 = '\x01';
            }
            pfVar22 = *(float **)(*(long *)PTR_DAT_069fb978 + 0xb8);
            fStack00000000000000f8 = *pfVar22;
            fStack00000000000000f4 = pfVar22[1];
            fStack00000000000000f0 = pfVar22[2];
            plVar25 = (long *)PTR_DAT_069fb978;
          }
          else {
            fStack00000000000000f8 = fStack00000000000000f8 / fVar39;
            fStack00000000000000f4 = fStack00000000000000f4 / fVar39;
            fStack00000000000000f0 = fStack00000000000000f0 / fVar39;
            if (DAT_06db4c71 == '\0') {
              FUN_02d965b8(PTR_DAT_069fb978);
              DAT_06db4c71 = '\x01';
            }
          }
          pfVar22 = *(float **)(*plVar25 + 0xb8);
          if (fStack00000000000000a4 <=
              (fStack00000000000000fc - pfVar22[2]) * (fStack00000000000000fc - pfVar22[2]) +
              (fStack0000000000000104 - *pfVar22) * (fStack0000000000000104 - *pfVar22) +
              (fStack0000000000000100 - pfVar22[1]) * (fStack0000000000000100 - pfVar22[1])) {
            if (DAT_06db4ece == '\0') {
              FUN_02d965b8(PTR_DAT_069fbb48);
              DAT_06db4ece = '\x01';
            }
            if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            in_stack_00000120._4_4_ = 0.0;
            fVar39 = SQRT((fStack00000000000000fc * fStack00000000000000fc +
                          fStack0000000000000100 * fStack0000000000000100 +
                          fStack0000000000000104 * fStack0000000000000104) *
                          (fStack00000000000000f0 * fStack00000000000000f0 +
                          fStack00000000000000f8 * fStack00000000000000f8 +
                          fStack00000000000000f4 * fStack00000000000000f4));
            if (DAT_010fcd14 <= fVar39) {
              fVar39 = (fStack00000000000000fc * fStack00000000000000f0 +
                       fStack0000000000000104 * fStack00000000000000f8 +
                       fStack0000000000000100 * fStack00000000000000f4) / fVar39;
              fVar40 = 1.0;
              if (fVar39 <= 1.0) {
                fVar40 = fVar39;
              }
              fVar48 = -1.0;
              if (-1.0 <= fVar39) {
                fVar48 = fVar40;
              }
              if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              dVar41 = acos((double)fVar48);
              in_stack_00000120._4_4_ = (float)dVar41 * DAT_010fcf40;
            }
            bVar8 = false;
            bVar5 = true;
            bVar6 = false;
            if (*(float *)(in_stack_00000148 + 0x80) < in_stack_00000120._4_4_) {
              bVar8 = false;
              bVar5 = false;
              bVar6 = true;
              if (!NAN(fVar36)) {
                bVar8 = fVar36 < 1.5;
                bVar5 = fVar36 == 1.5;
                bVar6 = false;
              }
            }
            bVar8 = bVar28 != 0 ||
                    (!bVar5 && bVar8 == bVar6) &&
                    1.0 <= SQRT((fStack000000000000012c - fVar52) *
                                (fStack000000000000012c - fVar52) +
                                (fStack0000000000000128 - fVar34) *
                                (fStack0000000000000128 - fVar34) +
                                (in_stack_00000130 - fVar35) * (in_stack_00000130 - fVar35));
          }
        }
        puVar26 = (undefined8 *)PTR_DAT_06a0b440;
        if (*(char *)(in_stack_00000148 + 0x5d6) != '\0') {
          if (*(long *)(in_stack_00000148 + 0x20) == 0) goto LAB_03168190;
          FUN_03199614(*(long *)(in_stack_00000148 + 0x20),&stack0x000001c0,0);
        }
        bVar5 = bVar8;
        if (fVar37 < fVar42 + fVar33 + DAT_010fd060) {
          bVar6 = bVar8;
          if (fStack00000000000000a0 <= fVar36) {
            bVar6 = true;
          }
          if (bVar6 == false && (in_stack_000000c0._4_1_ & 1) == 0) {
            if (*(uint *)(in_stack_00000170 + 0x18) <= uVar13) goto LAB_0316f2c4;
            fVar33 = 1.0;
            _fStack00000000000001c0 = *(ulong *)pfVar32;
            in_stack_000001c8 = *(float *)(lVar12 + 0x28);
            bVar5 = true;
          }
        }
        if (fVar42 + fVar33 <= fVar37) {
          fVar34 = fStack00000000000001c0;
          fVar52 = fStack00000000000001c4;
        }
        else {
          if (*(uint *)(in_stack_00000170 + 0x18) <= uVar13) goto LAB_0316f2c4;
          _fStack00000000000001c0 = *(ulong *)pfVar32;
          fVar33 = 1.0;
          in_stack_000001c8 = *(float *)(lVar12 + 0x28);
          bVar5 = true;
          fVar34 = *pfVar32;
          fVar52 = *(float *)(lVar12 + 0x24);
        }
        fVar35 = in_stack_000001c8;
        if (DAT_06db4c77 == '\0') {
          FUN_02d965b8(PTR_DAT_069fbb48);
          DAT_06db4c77 = '\x01';
        }
        if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        fVar39 = in_stack_000001c8;
        bVar6 = bVar5;
        if (fStack000000000000010c <
            SQRT((fStack000000000000012c - fVar35) * (fStack000000000000012c - fVar35) +
                 (in_stack_00000130 - fVar34) * (in_stack_00000130 - fVar34) +
                 (fStack0000000000000128 - fVar52) * (fStack0000000000000128 - fVar52))) {
          bVar6 = true;
        }
        bVar1 = bVar6;
        if (in_stack_00000168 != 1) {
          bVar1 = true;
        }
        if (bVar1 == false) {
          bVar6 = fVar33 == 0.0;
        }
        if (bVar6 == true) {
          fVar34 = fStack00000000000001c0;
          fVar52 = fStack00000000000001c4;
          if (DAT_06db4c77 == '\0') {
            FUN_02d965b8(PTR_DAT_069fbb48);
            DAT_06db4c77 = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
            thunk_FUN_02df485c();
            cVar19 = DAT_06db4c77;
          }
          else {
            cVar19 = '\x01';
          }
          fVar35 = in_stack_000001c8;
          uVar21 = _fStack00000000000001c0;
          in_stack_00000110 = _fStack00000000000001c0 & 0xffffffff;
          fVar34 = SQRT((fStack000000000000012c - fVar39) * (fStack000000000000012c - fVar39) +
                        (in_stack_00000130 - fVar34) * (in_stack_00000130 - fVar34) +
                        (fStack0000000000000128 - fVar52) * (fStack0000000000000128 - fVar52));
          in_stack_00000160._4_4_ = in_stack_000001c8;
          fStack00000000000001d4 = fVar34 + fStack00000000000001d4;
          *in_stack_000000d8 = fVar34 + *in_stack_000000d8;
          if (cVar19 == '\0') {
            FUN_02d965b8(PTR_DAT_069fbb48);
            DAT_06db4c77 = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          in_stack_00000280 = in_stack_000001c8;
          in_stack_00000278 = _fStack00000000000001c0;
          fVar43 = (float)uVar21 - fVar43;
          in_stack_00000130 = fStack00000000000001c0;
          in_stack_00000230 =
               in_stack_00000230 + SQRT(fVar43 * fVar43 + (fVar35 - fVar46) * (fVar35 - fVar46));
          fVar46 = fStack00000000000001c4;
          fStack0000000000000128 = fStack00000000000001c4;
          fStack000000000000012c = in_stack_000001c8;
          if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
             (lVar9 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),unaff_x20 & 0xffffffff,
                                   *puVar26), lVar9 == 0)) goto LAB_03168190;
          if (*(float *)(lVar9 + 0x100) == 0.0) {
            if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
               (lVar9 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),unaff_x20 & 0xffffffff,
                                     *puVar26), lVar9 == 0)) goto LAB_03168190;
            if (*(float *)(lVar9 + 0x104) != 0.0) goto LAB_0316bb78;
            if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
               (lVar9 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),unaff_x20 & 0xffffffff,
                                     *puVar26), lVar9 == 0)) goto LAB_03168190;
            if (*(float *)(lVar9 + 0x110) != 0.0) goto LAB_0316bb78;
            if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
               (lVar9 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),unaff_x20 & 0xffffffff,
                                     *puVar26), lVar9 == 0)) goto LAB_03168190;
            if (*(float *)(lVar9 + 0x114) != 0.0) goto LAB_0316bb78;
            lVar9 = *in_stack_000000e0;
            if (lVar9 == 0) goto LAB_03168190;
            lVar10 = *(long *)(lVar9 + 0x10);
            lVar20 = *(long *)PTR_DAT_069ff178;
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            if (lVar10 == 0) goto LAB_03168190;
            uVar47 = *(uint *)(lVar9 + 0x18);
            if (uVar47 < *(uint *)(lVar10 + 0x18)) {
              *(uint *)(lVar9 + 0x18) = uVar47 + 1;
              *(undefined4 *)(lVar10 + (long)(int)uVar47 * 4 + 0x20) = 0;
            }
            else {
              FUN_04059d64(0,lVar9,*(undefined8 *)
                                    (*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
            }
          }
          else {
LAB_0316bb78:
            if (*(long *)(in_stack_00000148 + 0x68) == 0) goto LAB_03168190;
            fVar43 = *in_stack_000000d8;
            uVar15 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),unaff_x20 & 0xffffffff,
                                  *puVar26);
            FUN_0316f6a0(fVar43,fVar45,uVar15,uVar15,&stack0x0000022c,&stack0x00000228,
                         &stack0x00000224,&stack0x00000218,&stack0x00000278,&stack0x00000214);
          }
          lVar9 = *in_stack_000000b8;
          if (fVar34 <= 5.0) {
            if (lVar9 == 0) goto LAB_03168190;
            lVar10 = *(long *)(lVar9 + 0x10);
            lVar20 = *(long *)PTR_DAT_069ff178;
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            if (lVar10 == 0) goto LAB_03168190;
            uVar47 = *(uint *)(lVar9 + 0x18);
            fVar43 = (in_stack_00000120._4_4_ / fVar34) * 5.0;
            if (*(uint *)(lVar10 + 0x18) <= uVar47) {
              lVar10 = *(long *)(lVar20 + 0x20);
              goto LAB_0316bcb0;
            }
            *(uint *)(lVar9 + 0x18) = uVar47 + 1;
            *(float *)(lVar10 + (long)(int)uVar47 * 4 + 0x20) = fVar43;
          }
          else {
            if (lVar9 == 0) goto LAB_03168190;
            lVar10 = *(long *)(lVar9 + 0x10);
            lVar20 = *(long *)PTR_DAT_069ff178;
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            if (lVar10 == 0) goto LAB_03168190;
            uVar47 = *(uint *)(lVar9 + 0x18);
            if (uVar47 < *(uint *)(lVar10 + 0x18)) {
              *(uint *)(lVar9 + 0x18) = uVar47 + 1;
              *(float *)(lVar10 + (long)(int)uVar47 * 4 + 0x20) = in_stack_00000120._4_4_;
            }
            else {
              lVar10 = *(long *)(lVar20 + 0x20);
              fVar43 = in_stack_00000120._4_4_;
LAB_0316bcb0:
              FUN_04059d64(fVar43,lVar9,*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x70));
            }
          }
          if (bVar7) {
            lVar9 = *in_stack_000000b8;
            if (lVar9 == 0) goto LAB_03168190;
            iVar27 = *(int *)(lVar9 + 0x18);
            if (1 < iVar27) {
              FUN_04059a68(lVar9,iVar27 + -1,*(undefined8 *)PTR_DAT_06a0a108);
              FUN_04059abc(lVar9,iVar27 + -2,*(undefined8 *)PTR_DAT_06a0b5c0);
            }
          }
          puVar2 = PTR_DAT_069fbee0;
          if (in_stack_00000238 == 0) goto LAB_03168190;
          lVar9 = *(long *)(in_stack_00000238 + 0x10);
          *(int *)(in_stack_00000238 + 0x1c) = *(int *)(in_stack_00000238 + 0x1c) + 1;
          if (lVar9 == 0) goto LAB_03168190;
          uVar47 = *(uint *)(in_stack_00000238 + 0x18);
          if (uVar47 < *(uint *)(lVar9 + 0x18)) {
            lVar9 = lVar9 + (long)(int)uVar47 * 0xc;
            *(uint *)(in_stack_00000238 + 0x18) = uVar47 + 1;
            *(float *)(lVar9 + 0x20) = in_stack_00000130;
            *(float *)(lVar9 + 0x24) = fVar46;
            *(float *)(lVar9 + 0x28) = in_stack_00000280;
          }
          else {
            FUN_0409f624(in_stack_00000238,
                         *(undefined8 *)(*(long *)(*(long *)(*(long *)puVar2 + 0x20) + 0xc0) + 0x70)
                        );
          }
          puVar26 = (undefined8 *)PTR_DAT_06a0b440;
          if (in_stack_00000240 == 0) goto LAB_03168190;
          lVar9 = *(long *)(in_stack_00000240 + 0x10);
          lVar10 = *(long *)PTR_DAT_069ff178;
          *(int *)(in_stack_00000240 + 0x1c) = *(int *)(in_stack_00000240 + 0x1c) + 1;
          if (lVar9 == 0) goto LAB_03168190;
          uVar47 = *(uint *)(in_stack_00000240 + 0x18);
          if (uVar47 < *(uint *)(lVar9 + 0x18)) {
            *(uint *)(in_stack_00000240 + 0x18) = uVar47 + 1;
            *(float *)(lVar9 + (long)(int)uVar47 * 4 + 0x20) = fVar33;
          }
          else {
            FUN_04059d64(fVar33,in_stack_00000240,
                         *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
          }
          if (bVar5 != false) {
            lVar9 = *(long *)(in_stack_00000148 + 0x2c8);
            if (lVar9 == 0) goto LAB_03168190;
            lVar10 = *(long *)(lVar9 + 0x10);
            lVar20 = *(long *)PTR_DAT_069fc3e0;
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            if (lVar10 == 0) goto LAB_03168190;
            uVar47 = *(uint *)(lVar9 + 0x18);
            if (uVar47 < *(uint *)(lVar10 + 0x18)) {
              *(uint *)(lVar9 + 0x18) = uVar47 + 1;
              *(int *)(lVar10 + (long)(int)uVar47 * 4 + 0x20) = in_stack_000000d0._4_4_;
            }
            else {
              FUN_03fb3e1c(lVar9,in_stack_000000d0._4_4_,
                           *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
            }
          }
          bVar7 = false;
          fStack00000000000000fc = fStack00000000000000f0;
          fStack0000000000000100 = fStack00000000000000f4;
          in_stack_000000d0._4_4_ = in_stack_000000d0._4_4_ + 1;
          fStack0000000000000104 = fStack00000000000000f8;
          in_stack_000000c0._4_1_ = bVar8;
        }
        else {
          in_stack_00000110 = (ulong)(uint)fVar43;
          in_stack_00000160._4_4_ = fVar46;
        }
        fVar35 = fVar42 + fVar33;
      } while (fVar35 < fVar37);
      iStack0000000000000108 = 0;
      plVar25 = (long *)PTR_DAT_069fb978;
    }
  }
  else {
    if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
       (lVar9 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),unaff_x20 & 0xffffffff,*puVar26),
       lVar9 == 0)) goto LAB_03168190;
    if (*(int *)(lVar9 + 0x6c) != 1) {
      if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
         (lVar9 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),unaff_x20 & 0xffffffff,*puVar26),
         lVar9 == 0)) goto LAB_03168190;
      if (*(int *)(lVar9 + 0x6c) != 2) {
        if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
           (lVar9 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),unaff_x20 & 0xffffffff,*puVar26
                                ), lVar9 == 0)) goto LAB_03168190;
        if (*(int *)(lVar9 + 0x6c) == 3) {
          uStack00000000000001ac = 0;
          if (*(long *)(in_stack_00000148 + 0x68) == 0) goto LAB_03168190;
          if (((long)(*(int *)(*(long *)(in_stack_00000148 + 0x68) + 0x18) + -2) <
               (long)in_stack_00000168) && (*(char *)(in_stack_00000148 + 0x84) == '\0')) {
            uVar15 = *(undefined8 *)(in_stack_00000148 + 0x2e0);
            if (*(int *)(*(long *)PTR_DAT_069fb990 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            uVar11 = FUN_0634eb94(uVar15,0,0);
            if ((uVar11 & 1) != 0) goto LAB_0316adcc;
            FUN_030fd644(&stack0x00000290,in_stack_00000148,in_stack_00000168 & 0xffffffff,
                         &stack0x00000238,&stack0x00000240,(long)&stack0x000001d0 + 4,0,
                         &stack0x00000230);
          }
          else {
LAB_0316adcc:
            FUN_030faa2c(&stack0x00000290,in_stack_00000148,in_stack_00000168 & 0xffffffff,
                         &stack0x00000238,&stack0x00000240,(long)&stack0x000001d0 + 4,0,
                         &stack0x00000230);
          }
          if (((*(long *)(in_stack_00000148 + 0x68) == 0) ||
              (lVar9 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),unaff_x20 & 0xffffffff,
                                    *puVar26), lVar9 == 0)) ||
             (*(undefined4 *)(lVar9 + 0x34) = uStack00000000000001ac, in_stack_00000240 == 0))
          goto LAB_03168190;
          fVar42 = 0.0;
          iVar27 = 0;
          puVar31 = (undefined4 *)(in_stack_00000170 + 0x20 + unaff_x20 * 0xc);
          while( true ) {
            puVar26 = (undefined8 *)PTR_DAT_06a0b440;
            puVar2 = PTR_DAT_069fbee0;
            plVar25 = (long *)PTR_DAT_069fb978;
            fVar33 = (float)uVar21;
            in_stack_00000160._4_4_ = (float)uVar44;
            iVar55 = *(int *)(in_stack_00000240 + 0x18);
            if (iVar55 <= iVar27) break;
            if (in_stack_00000238 == 0) goto LAB_03168190;
            uStack00000000000001a0 =
                 FUN_0409f2f4(in_stack_00000238,iVar27,*(undefined8 *)PTR_DAT_069fd088);
            fStack00000000000001a4 = fVar33;
            fStack00000000000001a8 = in_stack_00000160._4_4_;
            if (*(char *)(in_stack_00000148 + 0x5d6) == '\0') {
              uVar21 = (ulong)*(uint *)(in_stack_00000170 + 0x18);
              if (((uVar21 <= unaff_x20) || (uVar21 <= in_stack_00000168)) ||
                 ((uVar21 <= uVar13 || (uVar21 <= in_stack_00000168 + 2)))) goto LAB_0316f2c4;
              if (in_stack_00000240 == 0) goto LAB_03168190;
              uVar38 = *puVar31;
              fVar33 = (float)puVar31[1];
              uVar49 = puVar31[2];
              fVar46 = *pfVar24;
              uVar53 = *(undefined4 *)(lVar14 + 0x24);
              uVar50 = *(undefined4 *)(lVar14 + 0x28);
              FUN_04059a68(in_stack_00000240,iVar27,*(undefined8 *)PTR_DAT_06a0a108);
              FUN_0316f340(uVar38,fVar33,uVar49,fVar46,uVar53,uVar50);
              fStack00000000000001a4 = fVar33;
              if (in_stack_00000238 == 0) goto LAB_03168190;
              in_stack_00000160._4_4_ = fStack00000000000001a8;
              FUN_0409f350(uStack00000000000001a0,in_stack_00000238,iVar27,
                           *(undefined8 *)PTR_DAT_06a0b7d0);
              if (iVar27 != 0) goto LAB_0316af8c;
LAB_0316b04c:
              lVar9 = *in_stack_000000e0;
              if (lVar9 == 0) goto LAB_03168190;
              lVar10 = *(long *)(lVar9 + 0x10);
              lVar20 = *(long *)PTR_DAT_069ff178;
              *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
              if (lVar10 == 0) goto LAB_03168190;
              uVar47 = *(uint *)(lVar9 + 0x18);
              if (uVar47 < *(uint *)(lVar10 + 0x18)) {
                *(uint *)(lVar9 + 0x18) = uVar47 + 1;
                *(undefined4 *)(lVar10 + (long)(int)uVar47 * 4 + 0x20) = 0;
              }
              else {
                FUN_04059d64(0,lVar9,*(undefined8 *)
                                      (*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
              }
            }
            else {
              if (*(long *)(in_stack_00000148 + 0x20) == 0) goto LAB_03168190;
              FUN_03199614(*(long *)(in_stack_00000148 + 0x20),&stack0x000001a0,0);
              if (iVar27 == 0) goto LAB_0316b04c;
LAB_0316af8c:
              if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                 (lVar9 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),unaff_x20 & 0xffffffff,
                                       *(undefined8 *)PTR_DAT_06a0b440), lVar9 == 0))
              goto LAB_03168190;
              if (*(float *)(lVar9 + 0x100) == 0.0) {
                if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                   (lVar9 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),unaff_x20 & 0xffffffff,
                                         *(undefined8 *)PTR_DAT_06a0b440), lVar9 == 0))
                goto LAB_03168190;
                if (*(float *)(lVar9 + 0x104) == 0.0) {
                  if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                     (lVar9 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                           unaff_x20 & 0xffffffff,*(undefined8 *)PTR_DAT_06a0b440),
                     lVar9 == 0)) goto LAB_03168190;
                  if (*(float *)(lVar9 + 0x110) == 0.0) {
                    if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                       (lVar9 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                             unaff_x20 & 0xffffffff,*(undefined8 *)PTR_DAT_06a0b440)
                       , lVar9 == 0)) goto LAB_03168190;
                    if (*(float *)(lVar9 + 0x114) == 0.0) goto LAB_0316b04c;
                  }
                }
              }
              puVar2 = PTR_DAT_069fd088;
              if ((in_stack_00000238 == 0) ||
                 (fVar46 = (float)FUN_0409f2f4(in_stack_00000238,iVar27 + -1,
                                               *(undefined8 *)PTR_DAT_069fd088),
                 in_stack_00000238 == 0)) goto LAB_03168190;
              fVar43 = fVar33;
              fVar34 = in_stack_00000160._4_4_;
              fVar52 = (float)FUN_0409f2f4(in_stack_00000238,iVar27,*(undefined8 *)puVar2);
              if (DAT_06db4c77 == '\0') {
                FUN_02d965b8(PTR_DAT_069fbb48);
                DAT_06db4c77 = '\x01';
              }
              if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              if (*(long *)(in_stack_00000148 + 0x68) == 0) goto LAB_03168190;
              fVar35 = *in_stack_000000d8;
              fVar42 = fVar42 + SQRT((in_stack_00000160._4_4_ - fVar34) *
                                     (in_stack_00000160._4_4_ - fVar34) +
                                     (fVar46 - fVar52) * (fVar46 - fVar52) +
                                     (fVar33 - fVar43) * (fVar33 - fVar43));
              uVar15 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),unaff_x20 & 0xffffffff,
                                    *(undefined8 *)PTR_DAT_06a0b440);
              FUN_0316f6a0(fVar42 + fVar35,fVar45,uVar15,uVar15,&stack0x0000022c,&stack0x00000228,
                           &stack0x00000224,&stack0x00000218,&stack0x000001a0,&stack0x00000214);
            }
            if (in_stack_00000238 == 0) goto LAB_03168190;
            uVar44 = (ulong)(uint)fStack00000000000001a8;
            uVar21 = (ulong)(uint)fStack00000000000001a4;
            FUN_0409f350(uStack00000000000001a0,in_stack_00000238,iVar27,
                         *(undefined8 *)PTR_DAT_06a0b7d0);
            iVar27 = iVar27 + 1;
            if (in_stack_00000240 == 0) goto LAB_03168190;
          }
          uVar21 = (ulong)(iVar55 - 1);
          if (iVar55 < 1) {
            if (*(uint *)(in_stack_00000170 + 0x18) <= uVar13) goto LAB_0316f2c4;
            if (in_stack_00000238 == 0) goto LAB_03168190;
            lVar9 = *(long *)(in_stack_00000238 + 0x10);
            fVar42 = *pfVar32;
            uVar38 = *(undefined4 *)(lVar12 + 0x24);
            in_stack_00000160._4_4_ = *(float *)(lVar12 + 0x28);
            *(int *)(in_stack_00000238 + 0x1c) = *(int *)(in_stack_00000238 + 0x1c) + 1;
            if (lVar9 == 0) goto LAB_03168190;
            uVar47 = *(uint *)(in_stack_00000238 + 0x18);
            if (uVar47 < *(uint *)(lVar9 + 0x18)) {
              lVar9 = lVar9 + (long)(int)uVar47 * 0xc;
              *(uint *)(in_stack_00000238 + 0x18) = uVar47 + 1;
              *(float *)(lVar9 + 0x20) = fVar42;
              *(undefined4 *)(lVar9 + 0x24) = uVar38;
              *(float *)(lVar9 + 0x28) = in_stack_00000160._4_4_;
            }
            else {
              FUN_0409f624(in_stack_00000238,
                           *(undefined8 *)
                            (*(long *)(*(long *)(*(long *)puVar2 + 0x20) + 0xc0) + 0x70));
              uVar21 = extraout_x1_00;
            }
            fVar42 = fStack00000000000001d4;
            if ((*(uint *)(in_stack_00000170 + 0x18) <= in_stack_00000168) ||
               (*(uint *)(in_stack_00000170 + 0x18) <= uVar13)) goto LAB_0316f2c4;
            uVar15 = *(undefined8 *)pfVar24;
            fVar45 = *(float *)(lVar14 + 0x28);
            uVar16 = *(undefined8 *)pfVar32;
            fVar33 = *(float *)(lVar12 + 0x28);
            if (DAT_06db4c77 == '\0') {
              FUN_02d965b8(PTR_DAT_069fbb48,uVar21);
              DAT_06db4c77 = '\x01';
            }
            if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            fVar46 = (float)uVar15 - (float)uVar16;
            fVar43 = (float)((ulong)uVar15 >> 0x20) - (float)((ulong)uVar16 >> 0x20);
            fVar45 = fVar45 - fVar33;
            fVar45 = fVar45 * fVar45;
            fStack00000000000001d4 = fVar42 + SQRT(fVar45 + fVar46 * fVar46 + fVar43 * fVar43);
LAB_0316d2dc:
            if (in_stack_00000240 == 0) goto LAB_03168190;
            lVar14 = *(long *)(in_stack_00000240 + 0x10);
            lVar12 = *(long *)PTR_DAT_069ff178;
            *(int *)(in_stack_00000240 + 0x1c) = *(int *)(in_stack_00000240 + 0x1c) + 1;
            if (lVar14 == 0) goto LAB_03168190;
            uVar47 = *(uint *)(in_stack_00000240 + 0x18);
            if (uVar47 < *(uint *)(lVar14 + 0x18)) {
              *(uint *)(in_stack_00000240 + 0x18) = uVar47 + 1;
              *(undefined4 *)(lVar14 + (long)(int)uVar47 * 4 + 0x20) = 0x3f800000;
            }
            else {
              FUN_04059d64(0x3f800000,in_stack_00000240,
                           *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
            }
            lVar14 = *in_stack_000000e0;
            if (lVar14 == 0) goto LAB_03168190;
            lVar12 = *(long *)(lVar14 + 0x10);
            lVar9 = *(long *)PTR_DAT_069ff178;
            *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
            if (lVar12 == 0) goto LAB_03168190;
            uVar47 = *(uint *)(lVar14 + 0x18);
            if (uVar47 < *(uint *)(lVar12 + 0x18)) {
              *(uint *)(lVar14 + 0x18) = uVar47 + 1;
              *(undefined4 *)(lVar12 + (long)(int)uVar47 * 4 + 0x20) = 0;
            }
            else {
              FUN_04059d64(0,lVar14,*(undefined8 *)
                                     (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
            }
          }
          else {
            fVar42 = (float)FUN_04059a68(in_stack_00000240,uVar21,*(undefined8 *)PTR_DAT_06a0a108);
            puVar26 = (undefined8 *)PTR_DAT_06a0b440;
            puVar2 = PTR_DAT_069fd088;
            plVar25 = (long *)PTR_DAT_069fb978;
            fVar33 = 1.0;
            if (fVar42 <= 1.0) {
              if (in_stack_00000238 == 0) goto LAB_03168190;
              fVar42 = (float)FUN_0409f2f4(in_stack_00000238,*(int *)(in_stack_00000238 + 0x18) + -1
                                           ,*(undefined8 *)PTR_DAT_069fd088);
              if (*(uint *)(in_stack_00000170 + 0x18) <= uVar13) goto LAB_0316f2c4;
              fVar33 = fVar33 - *(float *)(lVar12 + 0x24);
              in_stack_00000160._4_4_ = in_stack_00000160._4_4_ - *(float *)(lVar12 + 0x28);
              fVar45 = fStack00000000000000a4;
              if (fStack00000000000000a4 <=
                  in_stack_00000160._4_4_ * in_stack_00000160._4_4_ +
                  (fVar42 - *pfVar32) * (fVar42 - *pfVar32) + fVar33 * fVar33) {
                if (in_stack_00000238 == 0) goto LAB_03168190;
                fVar42 = fStack00000000000000a4;
                fVar45 = (float)FUN_0409f2f4(in_stack_00000238,
                                             *(int *)(in_stack_00000238 + 0x18) + -1,
                                             *(undefined8 *)puVar2);
                if (*(uint *)(in_stack_00000170 + 0x18) <= uVar13) goto LAB_0316f2c4;
                fVar33 = *pfVar32;
                fVar43 = *(float *)(lVar12 + 0x24);
                fVar46 = *(float *)(lVar12 + 0x28);
                if (DAT_06db4c77 == '\0') {
                  FUN_02d965b8(PTR_DAT_069fbb48);
                  DAT_06db4c77 = '\x01';
                }
                if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                }
                puVar3 = PTR_DAT_069fbee0;
                fVar42 = fVar42 - fVar43;
                in_stack_00000160._4_4_ = in_stack_00000160._4_4_ - fVar46;
                if (in_stack_000000b0 <=
                    SQRT(in_stack_00000160._4_4_ * in_stack_00000160._4_4_ +
                         (fVar45 - fVar33) * (fVar45 - fVar33) + fVar42 * fVar42)) {
                  if (*(uint *)(in_stack_00000170 + 0x18) <= uVar13) goto LAB_0316f2c4;
                  if (in_stack_00000238 != 0) {
                    lVar14 = *(long *)(in_stack_00000238 + 0x10);
                    fVar42 = *pfVar32;
                    fVar33 = *(float *)(lVar12 + 0x24);
                    in_stack_00000160._4_4_ = *(float *)(lVar12 + 0x28);
                    *(int *)(in_stack_00000238 + 0x1c) = *(int *)(in_stack_00000238 + 0x1c) + 1;
                    if (lVar14 != 0) {
                      uVar47 = *(uint *)(in_stack_00000238 + 0x18);
                      if (uVar47 < *(uint *)(lVar14 + 0x18)) {
                        lVar14 = lVar14 + (long)(int)uVar47 * 0xc;
                        *(uint *)(in_stack_00000238 + 0x18) = uVar47 + 1;
                        *(float *)(lVar14 + 0x20) = fVar42;
                        *(float *)(lVar14 + 0x24) = fVar33;
                        *(float *)(lVar14 + 0x28) = in_stack_00000160._4_4_;
                      }
                      else {
                        FUN_0409f624(in_stack_00000238,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(*(long *)puVar3 + 0x20) + 0xc0) + 0x70));
                      }
                      fVar42 = fStack00000000000001d4;
                      if (in_stack_00000238 != 0) {
                        fVar46 = (float)FUN_0409f2f4(in_stack_00000238,
                                                     *(int *)(in_stack_00000238 + 0x18) + -1,
                                                     *(undefined8 *)puVar2);
                        if (*(uint *)(in_stack_00000170 + 0x18) <= uVar13) goto LAB_0316f2c4;
                        fVar43 = *pfVar32;
                        fVar34 = *(float *)(lVar12 + 0x24);
                        fVar45 = *(float *)(lVar12 + 0x28);
                        if (DAT_06db4c77 == '\0') {
                          FUN_02d965b8(PTR_DAT_069fbb48);
                          DAT_06db4c77 = '\x01';
                        }
                        if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                          thunk_FUN_02df485c();
                        }
                        fVar33 = fVar33 - fVar34;
                        in_stack_00000160._4_4_ = in_stack_00000160._4_4_ - fVar45;
                        fVar45 = in_stack_00000160._4_4_ * in_stack_00000160._4_4_;
                        fStack00000000000001d4 =
                             fVar42 + SQRT(fVar45 + (fVar46 - fVar43) * (fVar46 - fVar43) +
                                                    fVar33 * fVar33);
                        goto LAB_0316d2dc;
                      }
                    }
                  }
                  goto LAB_03168190;
                }
                if (in_stack_00000238 == 0) goto LAB_03168190;
                if (*(uint *)(in_stack_00000170 + 0x18) <= uVar13) goto LAB_0316f2c4;
                in_stack_00000160._4_4_ = *(float *)(lVar12 + 0x28);
                fVar45 = *(float *)(lVar12 + 0x24);
                FUN_0409f350(*pfVar32,in_stack_00000238,*(int *)(in_stack_00000238 + 0x18) + -1,
                             *(undefined8 *)PTR_DAT_06a0b7d0);
                if (in_stack_00000240 == 0) goto LAB_03168190;
                FUN_04059abc(0x3f800000,in_stack_00000240,*(int *)(in_stack_00000240 + 0x18) + -1,
                             *(undefined8 *)PTR_DAT_06a0b5c0);
              }
            }
            else {
              if ((in_stack_00000240 == 0) ||
                 (FUN_04059abc(0x3f800000,in_stack_00000240,*(int *)(in_stack_00000240 + 0x18) + -1,
                               *(undefined8 *)PTR_DAT_06a0b5c0), in_stack_00000238 == 0))
              goto LAB_03168190;
              if (*(uint *)(in_stack_00000170 + 0x18) <= uVar13) goto LAB_0316f2c4;
              in_stack_00000160._4_4_ = *(float *)(lVar12 + 0x28);
              fVar45 = *(float *)(lVar12 + 0x24);
              FUN_0409f350(*pfVar32,in_stack_00000238,*(int *)(in_stack_00000238 + 0x18) + -1,
                           *(undefined8 *)PTR_DAT_06a0b7d0);
            }
          }
          if (in_stack_00000238 == 0) goto LAB_03168190;
          iVar27 = *(int *)(in_stack_00000238 + 0x18);
          in_stack_00000110 =
               FUN_0409f2f4(in_stack_00000238,iVar27 + -1,*(undefined8 *)PTR_DAT_069fd088);
          puVar2 = PTR_DAT_069fd088;
          in_stack_00000278 = CONCAT44(fVar45,(int)in_stack_00000110);
          if (in_stack_00000238 == 0) goto LAB_03168190;
          fVar42 = in_stack_00000160._4_4_;
          if (1 < *(int *)(in_stack_00000238 + 0x18)) {
            fStack000000000000008c =
                 (float)FUN_0409f2f4(in_stack_00000238,*(int *)(in_stack_00000238 + 0x18) + -2,
                                     *(undefined8 *)PTR_DAT_069fd088);
            if (in_stack_00000238 == 0) goto LAB_03168190;
            fVar33 = fVar45;
            fVar46 = fVar42;
            fVar43 = (float)FUN_0409f2f4(in_stack_00000238,*(int *)(in_stack_00000238 + 0x18) + -1,
                                         *(undefined8 *)puVar2);
            if (DAT_06db4c75 == '\0') {
              FUN_02d965b8(PTR_DAT_069fbb48);
              DAT_06db4c75 = '\x01';
            }
            if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            fStack000000000000008c = fStack000000000000008c - fVar43;
            fVar45 = fVar45 - fVar33;
            fVar42 = fVar42 - fVar46;
            in_stack_00000080._4_4_ =
                 SQRT(fVar42 * fVar42 +
                      fStack000000000000008c * fStack000000000000008c + fVar45 * fVar45);
            if (in_stack_00000080._4_4_ <= DAT_010fd13c) {
              if (DAT_06db4c71 == '\0') {
                FUN_02d965b8(plVar25);
                DAT_06db4c71 = '\x01';
              }
              pfVar24 = *(float **)(*plVar25 + 0xb8);
              fStack000000000000008c = *pfVar24;
              fStack0000000000000088 = pfVar24[1];
              in_stack_00000080._4_4_ = pfVar24[2];
            }
            else {
              fStack000000000000008c = fStack000000000000008c / in_stack_00000080._4_4_;
              fStack0000000000000088 = fVar45 / in_stack_00000080._4_4_;
              in_stack_00000080._4_4_ = fVar42 / in_stack_00000080._4_4_;
            }
          }
          lVar14 = *(long *)(in_stack_00000148 + 0x2c8);
          *(float *)(in_stack_00000148 + 0x2c0) =
               *(float *)(in_stack_00000148 + 0x2c0) + fStack00000000000001d4;
          if (lVar14 == 0) goto LAB_03168190;
          lVar12 = *(long *)(lVar14 + 0x10);
          lVar9 = *(long *)PTR_DAT_069fc3e0;
          *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
          if (lVar12 == 0) goto LAB_03168190;
          uVar47 = *(uint *)(lVar14 + 0x18);
          in_stack_000000d0._4_4_ = iVar27 + in_stack_000000d0._4_4_;
          fVar45 = fStack00000000000001d4;
          if (uVar47 < *(uint *)(lVar12 + 0x18)) {
            *(uint *)(lVar14 + 0x18) = uVar47 + 1;
            *(int *)(lVar12 + (long)(int)uVar47 * 4 + 0x20) = in_stack_000000d0._4_4_;
          }
          else {
            FUN_03fb3e1c(lVar14,in_stack_000000d0._4_4_,
                         *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
          }
          if (in_stack_00000290 == 0) goto LAB_03168190;
          iVar27 = *(int *)(in_stack_00000290 + 0x18);
          in_stack_00000280 = in_stack_00000160._4_4_;
          if (iVar27 < 1) {
            iStack0000000000000108 = 3;
            goto LAB_0316c620;
          }
          lVar14 = FUN_0400ff1c(in_stack_00000098,iVar30 + -2,*puVar26);
          if ((lVar14 == 0) || (lVar12 = *in_stack_00000090, lVar12 == 0)) goto LAB_03168190;
          iVar55 = *(int *)(lVar14 + 0xbc);
          fVar33 = (float)FUN_04059a68(lVar12,*(int *)(lVar12 + 0x18) + -1,
                                       *(undefined8 *)PTR_DAT_06a0a108);
          lVar14 = *in_stack_00000090;
          if (lVar14 == 0) goto LAB_03168190;
          if (1 < *(int *)(lVar14 + 0x18)) {
            fVar45 = (float)FUN_04059a68(lVar14,*(int *)(lVar14 + 0x18) + -2,
                                         *(undefined8 *)PTR_DAT_06a0a108);
            fVar45 = fVar33 - fVar45;
            fVar33 = fVar45;
          }
          puVar2 = PTR_DAT_069fd088;
          if ((in_stack_00000290 == 0) ||
             (fVar46 = (float)FUN_0409f2f4(in_stack_00000290,*(int *)(in_stack_00000290 + 0x18) + -1
                                           ,*(undefined8 *)PTR_DAT_069fd088), in_stack_00000238 == 0
             )) goto LAB_03168190;
          fVar43 = fVar45;
          fVar34 = fVar42;
          fVar52 = (float)FUN_0409f2f4(in_stack_00000238,0,*(undefined8 *)puVar2);
          if (DAT_06db4c75 == '\0') {
            FUN_02d965b8(PTR_DAT_069fbb48);
            DAT_06db4c75 = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          fVar45 = fVar45 - fVar43;
          uVar21 = (ulong)(uint)DAT_010fd13c;
          fVar42 = SQRT((fVar42 - fVar34) * (fVar42 - fVar34) +
                        (fVar46 - fVar52) * (fVar46 - fVar52) + fVar45 * fVar45);
          if (fVar42 <= DAT_010fd13c) {
            if (DAT_06db4c71 == '\0') {
              FUN_02d965b8(plVar25);
              DAT_06db4c71 = '\x01';
            }
            fVar45 = *(float *)(*(long *)(*plVar25 + 0xb8) + 4);
          }
          else {
            fVar45 = fVar45 / fVar42;
          }
          puVar2 = PTR_DAT_069fd088;
          if (((in_stack_00000290 == 0) ||
              (FUN_0409f2f4(in_stack_00000290,*(int *)(in_stack_00000290 + 0x18) + -1,
                            *(undefined8 *)PTR_DAT_069fd088), in_stack_00000290 == 0)) ||
             (fVar43 = fVar42,
             fVar46 = (float)FUN_0409f2f4(in_stack_00000290,*(int *)(in_stack_00000290 + 0x18) + -1,
                                          *(undefined8 *)puVar2), in_stack_00000290 == 0))
          goto LAB_03168190;
          uVar44 = (ulong)(uint)(float)iVar55;
          fVar34 = (float)iVar27 - (float)iVar55;
          if (1.0 <= fVar34) {
            fVar52 = 0.0;
            iVar55 = *(int *)(in_stack_00000290 + 0x18);
            iVar27 = 2;
            iVar29 = -2;
            do {
              fVar35 = (float)uVar44;
              if ((iVar27 - iVar55) + -1 < 0) {
                if (in_stack_00000290 == 0) goto LAB_03168190;
                fVar37 = (float)uVar21;
                fVar39 = (float)FUN_0409f2f4(in_stack_00000290,
                                             iVar29 + *(int *)(in_stack_00000290 + 0x18),
                                             *(undefined8 *)PTR_DAT_069fd088);
                if (DAT_06db4c77 == '\0') {
                  FUN_02d965b8(PTR_DAT_069fbb48);
                  DAT_06db4c77 = '\x01';
                }
                if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                }
                if (in_stack_00000290 == 0) goto LAB_03168190;
                fVar36 = fVar37 - (float)uVar21;
                fVar52 = fVar52 + SQRT(fVar36 * fVar36 +
                                       (fVar39 - fVar46) * (fVar39 - fVar46) +
                                       (fVar35 - fVar43) * (fVar35 - fVar43));
                fVar42 = (fVar33 / fVar34) * fVar45 + fVar42;
                fVar46 = 1.0;
                if (SQRT(fVar52 / fVar33) <= 1.0) {
                  fVar46 = SQRT(fVar52 / fVar33);
                }
                fVar43 = fVar42 + (fVar35 - fVar42) * fVar46;
                uVar44 = (ulong)(uint)fVar43;
                FUN_0409f350(fVar39,uVar44,fVar37,in_stack_00000290,
                             iVar29 + *(int *)(in_stack_00000290 + 0x18),
                             *(undefined8 *)PTR_DAT_06a0b7d0);
                uVar21 = (ulong)(uint)fVar37;
                fVar46 = fVar39;
              }
              fVar35 = (float)iVar27;
              iVar27 = iVar27 + 1;
              iVar29 = iVar29 + -1;
            } while (fVar35 <= fVar34);
            iStack0000000000000108 = 3;
            puVar26 = (undefined8 *)PTR_DAT_06a0b440;
          }
          else {
            iStack0000000000000108 = 3;
          }
        }
        else {
          if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
             (lVar14 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),unaff_x20 & 0xffffffff,
                                    *puVar26), puVar2 = PTR_DAT_069fd088, lVar14 == 0))
          goto LAB_03168190;
          if (*(int *)(lVar14 + 0x6c) != 4) goto LAB_0316c620;
          if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
             (lVar14 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),unaff_x20 & 0xffffffff,
                                    *puVar26), lVar14 == 0)) goto LAB_03168190;
          in_stack_00000238 = *(long *)(lVar14 + 0x1d8);
          fStack00000000000001d4 = 0.0;
          lVar14 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069ff188);
          FUN_040594d0(lVar14,*(undefined8 *)PTR_DAT_069ff180);
          if (lVar14 == 0) goto LAB_03168190;
          lVar12 = *(long *)(lVar14 + 0x10);
          lVar9 = *(long *)PTR_DAT_069ff178;
          *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
          if (lVar12 == 0) goto LAB_03168190;
          uVar47 = *(uint *)(lVar14 + 0x18);
          if (uVar47 < *(uint *)(lVar12 + 0x18)) {
            *(uint *)(lVar14 + 0x18) = uVar47 + 1;
            *(undefined4 *)(lVar12 + (long)(int)uVar47 * 4 + 0x20) = 0;
          }
          else {
            FUN_04059d64(0,lVar14,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70))
            ;
          }
          if (in_stack_00000238 == 0) goto LAB_03168190;
          iVar27 = 1;
          while( true ) {
            fVar42 = fStack00000000000001d4;
            fVar33 = (float)uVar44;
            fVar45 = (float)uVar21;
            if (*(int *)(in_stack_00000238 + 0x18) <= iVar27) break;
            fVar46 = (float)FUN_0409f2f4(in_stack_00000238,iVar27 + -1,*(undefined8 *)puVar2);
            if (in_stack_00000238 == 0) goto LAB_03168190;
            fVar43 = fVar45;
            fVar34 = fVar33;
            fVar52 = (float)FUN_0409f2f4(in_stack_00000238,iVar27,*(undefined8 *)puVar2);
            if (DAT_06db4c77 == '\0') {
              FUN_02d965b8(PTR_DAT_069fbb48);
              DAT_06db4c77 = '\x01';
            }
            if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            fVar33 = fVar33 - fVar34;
            uVar44 = (ulong)(uint)fVar33;
            lVar12 = *(long *)(lVar14 + 0x10);
            *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
            uVar21 = (ulong)(uint)(fVar33 * fVar33);
            fStack00000000000001d4 =
                 fVar42 + SQRT(fVar33 * fVar33 +
                               (fVar46 - fVar52) * (fVar46 - fVar52) +
                               (fVar45 - fVar43) * (fVar45 - fVar43));
            if (lVar12 == 0) goto LAB_03168190;
            uVar47 = *(uint *)(lVar14 + 0x18);
            if (uVar47 < *(uint *)(lVar12 + 0x18)) {
              *(uint *)(lVar14 + 0x18) = uVar47 + 1;
              *(float *)(lVar12 + (long)(int)uVar47 * 4 + 0x20) = fStack00000000000001d4;
            }
            else {
              FUN_04059d64(lVar14,*(undefined8 *)
                                   (*(long *)(*(long *)(*(long *)PTR_DAT_069ff178 + 0x20) + 0xc0) +
                                   0x70));
            }
            iVar27 = iVar27 + 1;
            if (in_stack_00000238 == 0) goto LAB_03168190;
          }
          *in_stack_000000d8 = *in_stack_000000d8 + fStack00000000000001d4;
          if (in_stack_00000240 == 0) goto LAB_03168190;
          lVar12 = *(long *)(in_stack_00000240 + 0x10);
          lVar9 = *(long *)PTR_DAT_069ff178;
          *(int *)(in_stack_00000240 + 0x1c) = *(int *)(in_stack_00000240 + 0x1c) + 1;
          if (lVar12 == 0) goto LAB_03168190;
          uVar47 = *(uint *)(in_stack_00000240 + 0x18);
          if (uVar47 < *(uint *)(lVar12 + 0x18)) {
            *(uint *)(in_stack_00000240 + 0x18) = uVar47 + 1;
            *(undefined4 *)(lVar12 + (long)(int)uVar47 * 4 + 0x20) = 0;
          }
          else {
            FUN_04059d64(0,in_stack_00000240,
                         *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
          }
          lVar12 = *in_stack_000000e0;
          if (lVar12 == 0) goto LAB_03168190;
          lVar9 = *(long *)(lVar12 + 0x10);
          lVar10 = *(long *)PTR_DAT_069ff178;
          *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
          if (lVar9 == 0) goto LAB_03168190;
          uVar47 = *(uint *)(lVar12 + 0x18);
          if (uVar47 < *(uint *)(lVar9 + 0x18)) {
            *(uint *)(lVar12 + 0x18) = uVar47 + 1;
            *(undefined4 *)(lVar9 + (long)(int)uVar47 * 4 + 0x20) = 0;
          }
          else {
            FUN_04059d64(0,lVar12,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70)
                        );
          }
          if (in_stack_00000238 == 0) goto LAB_03168190;
          iVar27 = 0;
          while (iVar27 < *(int *)(in_stack_00000238 + 0x18)) {
            fVar42 = (float)FUN_04059a68(lVar14,iVar27,*(undefined8 *)PTR_DAT_06a0a108);
            if (in_stack_00000240 == 0) goto LAB_03168190;
            lVar12 = *(long *)(in_stack_00000240 + 0x10);
            lVar9 = *(long *)PTR_DAT_069ff178;
            *(int *)(in_stack_00000240 + 0x1c) = *(int *)(in_stack_00000240 + 0x1c) + 1;
            if (lVar12 == 0) goto LAB_03168190;
            uVar47 = *(uint *)(in_stack_00000240 + 0x18);
            if (uVar47 < *(uint *)(lVar12 + 0x18)) {
              *(uint *)(in_stack_00000240 + 0x18) = uVar47 + 1;
              *(float *)(lVar12 + (long)(int)uVar47 * 4 + 0x20) = fVar42 / fStack00000000000001d4;
            }
            else {
              FUN_04059d64(in_stack_00000240,
                           *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
            }
            lVar12 = *in_stack_000000e0;
            if (lVar12 == 0) goto LAB_03168190;
            lVar9 = *(long *)(lVar12 + 0x10);
            lVar10 = *(long *)PTR_DAT_069ff178;
            *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
            if (lVar9 == 0) goto LAB_03168190;
            uVar47 = *(uint *)(lVar12 + 0x18);
            if (uVar47 < *(uint *)(lVar9 + 0x18)) {
              *(uint *)(lVar12 + 0x18) = uVar47 + 1;
              *(undefined4 *)(lVar9 + (long)(int)uVar47 * 4 + 0x20) = 0;
            }
            else {
              FUN_04059d64(0,lVar12,*(undefined8 *)
                                     (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
            }
            iVar27 = iVar27 + 1;
            if (in_stack_00000238 == 0) goto LAB_03168190;
          }
          iStack0000000000000108 = 4;
          puVar26 = (undefined8 *)PTR_DAT_06a0b440;
        }
        goto LAB_0316c620;
      }
    }
    in_stack_00000160._4_4_ = in_stack_00000280;
    if (in_stack_00000168 == 1) {
      if ((ulong)*(uint *)(in_stack_00000170 + 0x18) < 2) goto LAB_0316f2c4;
      in_stack_00000278 = *(ulong *)pfVar24;
      in_stack_00000160._4_4_ = *(float *)(lVar14 + 0x28);
    }
    if (*(uint *)(in_stack_00000170 + 0x18) <= uVar13) {
LAB_0316f2c4:
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    fVar42 = *(float *)(lVar12 + 0x28);
    uVar15 = *(undefined8 *)pfVar32;
    uVar16 = *(undefined8 *)pfVar24;
    fVar33 = *(float *)(lVar14 + 0x28);
    if (DAT_06db4c75 == '\0') {
      FUN_02d965b8(PTR_DAT_069fbb48);
      DAT_06db4c75 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    fVar46 = (float)uVar15 - (float)uVar16;
    fVar43 = (float)((ulong)uVar15 >> 0x20) - (float)((ulong)uVar16 >> 0x20);
    fVar42 = fVar42 - fVar33;
    fVar33 = SQRT(fVar42 * fVar42 + fVar46 * fVar46 + fVar43 * fVar43);
    uVar21 = (ulong)(uint)fVar33;
    if (fVar33 <= DAT_010fd13c) {
      if (DAT_06db4c71 == '\0') {
        FUN_02d965b8(plVar25);
        DAT_06db4c71 = '\x01';
      }
      uVar15 = **(undefined8 **)(*plVar25 + 0xb8);
      fVar42 = *(float *)(*(undefined8 **)(*plVar25 + 0xb8) + 1);
    }
    else {
      fVar42 = fVar42 / fVar33;
      uVar15 = CONCAT44(fVar43 / fVar33,fVar46 / fVar33);
    }
    if (*(uint *)(in_stack_00000170 + 0x18) <= uVar13) goto LAB_0316f2c4;
    fVar33 = *(float *)(lVar12 + 0x28);
    uVar16 = *(undefined8 *)pfVar32;
    uVar17 = *(undefined8 *)pfVar24;
    fVar46 = *(float *)(lVar14 + 0x28);
    if (DAT_06db4c77 == '\0') {
      FUN_02d965b8(PTR_DAT_069fbb48);
      DAT_06db4c77 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    fVar43 = (float)uVar16 - (float)uVar17;
    fVar34 = (float)((ulong)uVar16 >> 0x20) - (float)((ulong)uVar17 >> 0x20);
    fVar33 = fVar33 - fVar46;
    fStack00000000000001d4 = SQRT(fVar33 * fVar33 + fVar43 * fVar43 + fVar34 * fVar34);
    if (*(uint *)(in_stack_00000170 + 0x18) <= uVar13) goto LAB_0316f2c4;
    fVar43 = (float)in_stack_00000278;
    in_stack_00000110 = in_stack_00000278 & 0xffffffff;
    fVar46 = *pfVar32;
    fVar33 = *(float *)(lVar12 + 0x28);
    if (DAT_06db4c77 == '\0') {
      FUN_02d965b8(PTR_DAT_069fbb48);
      DAT_06db4c77 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    fVar33 = fVar33 - in_stack_00000160._4_4_;
    in_stack_00000230 = SQRT((fVar46 - fVar43) * (fVar46 - fVar43) + fVar33 * fVar33) + 0.0;
    fVar33 = 0.0;
    if (in_stack_00000168 != 1) {
      fVar33 = fStack000000000000010c;
    }
    uVar11 = (ulong)(uint)fVar33;
    uVar44 = uVar11;
    lVar9 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069ff188);
    FUN_040594d0(lVar9,*(undefined8 *)PTR_DAT_069ff180);
    if (fVar33 < fStack00000000000001d4 - fStack000000000000010c) {
      fVar33 = *(float *)((ulong)&stack0x00000278 | 4);
      do {
        if (*(uint *)(in_stack_00000170 + 0x18) <= uVar13) goto LAB_0316f2c4;
        uVar16 = *(undefined8 *)pfVar32;
        fVar46 = *(float *)(lVar12 + 0x28);
        if (DAT_06db4c77 == '\0') {
          FUN_02d965b8(PTR_DAT_069fbb48);
          DAT_06db4c77 = '\x01';
        }
        if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        fVar37 = (float)uVar11;
        fVar34 = (float)uVar15 * fVar37 + fVar43;
        fVar52 = (float)((ulong)uVar15 >> 0x20) * fVar37 + fVar33;
        uVar17 = CONCAT44(fVar52,fVar34);
        fVar35 = fVar42 * fVar37 + in_stack_00000160._4_4_;
        fVar34 = fVar34 - (float)uVar16;
        fVar52 = fVar52 - (float)((ulong)uVar16 >> 0x20);
        fVar46 = fVar35 - fVar46;
        fVar46 = SQRT(fVar46 * fVar46 + fVar34 * fVar34 + fVar52 * fVar52);
        uVar21 = (ulong)(uint)fVar46;
        if (in_stack_000000b0 < fVar46) {
          _uStack00000000000001b0 = uVar17;
          in_stack_000001b8 = fVar35;
          if (*(char *)(in_stack_00000148 + 0x5d6) != '\0') {
            if (*(long *)(in_stack_00000148 + 0x20) == 0) goto LAB_03168190;
            FUN_03199614(*(long *)(in_stack_00000148 + 0x20),&stack0x000001b0,0);
          }
          if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
             (lVar10 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),unaff_x20 & 0xffffffff,
                                    *puVar26), lVar10 == 0)) goto LAB_03168190;
          if (*(float *)(lVar10 + 0x100) == 0.0) {
            if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
               (lVar10 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),unaff_x20 & 0xffffffff,
                                      *puVar26), lVar10 == 0)) goto LAB_03168190;
            if (*(float *)(lVar10 + 0x104) != 0.0) goto LAB_0316a920;
            if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
               (lVar10 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),unaff_x20 & 0xffffffff,
                                      *puVar26), lVar10 == 0)) goto LAB_03168190;
            if (*(float *)(lVar10 + 0x110) != 0.0) goto LAB_0316a920;
            if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
               (lVar10 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),unaff_x20 & 0xffffffff,
                                      *puVar26), lVar10 == 0)) goto LAB_03168190;
            if (*(float *)(lVar10 + 0x114) != 0.0) goto LAB_0316a920;
            lVar10 = *in_stack_000000e0;
            if (lVar10 == 0) goto LAB_03168190;
            lVar20 = *(long *)(lVar10 + 0x10);
            lVar23 = *(long *)PTR_DAT_069ff178;
            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
            if (lVar20 == 0) goto LAB_03168190;
            uVar47 = *(uint *)(lVar10 + 0x18);
            if (uVar47 < *(uint *)(lVar20 + 0x18)) {
              *(uint *)(lVar10 + 0x18) = uVar47 + 1;
              *(undefined4 *)(lVar20 + (long)(int)uVar47 * 4 + 0x20) = 0;
            }
            else {
              FUN_04059d64(0,lVar10,*(undefined8 *)
                                     (*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
            }
          }
          else {
LAB_0316a920:
            if (*(long *)(in_stack_00000148 + 0x68) == 0) goto LAB_03168190;
            fVar46 = *in_stack_000000d8;
            uVar16 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),unaff_x20 & 0xffffffff,
                                  *puVar26);
            FUN_0316f6a0(fVar37 + fVar46,fVar45,uVar16,uVar16,&stack0x0000022c,&stack0x00000228,
                         &stack0x00000224,&stack0x00000218,&stack0x000001b0,&stack0x00000214);
          }
          puVar2 = PTR_DAT_069fbee0;
          if (in_stack_00000238 == 0) goto LAB_03168190;
          lVar10 = *(long *)(in_stack_00000238 + 0x10);
          uVar21 = (ulong)(uint)in_stack_000001b8;
          *(int *)(in_stack_00000238 + 0x1c) = *(int *)(in_stack_00000238 + 0x1c) + 1;
          if (lVar10 == 0) goto LAB_03168190;
          uVar47 = *(uint *)(in_stack_00000238 + 0x18);
          if (uVar47 < *(uint *)(lVar10 + 0x18)) {
            lVar10 = lVar10 + (long)(int)uVar47 * 0xc;
            *(uint *)(in_stack_00000238 + 0x18) = uVar47 + 1;
            *(undefined4 *)(lVar10 + 0x20) = uStack00000000000001b0;
            *(undefined4 *)(lVar10 + 0x24) = uStack00000000000001b4;
            *(float *)(lVar10 + 0x28) = in_stack_000001b8;
          }
          else {
            FUN_0409f624(in_stack_00000238,
                         *(undefined8 *)(*(long *)(*(long *)(*(long *)puVar2 + 0x20) + 0xc0) + 0x70)
                        );
          }
          if (lVar9 == 0) goto LAB_03168190;
          lVar10 = *(long *)(lVar9 + 0x10);
          lVar20 = *(long *)PTR_DAT_069ff178;
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          if (lVar10 == 0) goto LAB_03168190;
          uVar47 = *(uint *)(lVar9 + 0x18);
          if (uVar47 < *(uint *)(lVar10 + 0x18)) {
            *(uint *)(lVar9 + 0x18) = uVar47 + 1;
            *(undefined4 *)(lVar10 + (long)(int)uVar47 * 4 + 0x20) = 0;
          }
          else {
            FUN_04059d64(lVar9,*(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
          }
          lVar10 = *in_stack_000000b8;
          if (lVar10 == 0) goto LAB_03168190;
          lVar20 = *(long *)(lVar10 + 0x10);
          lVar23 = *(long *)PTR_DAT_069ff178;
          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
          if (lVar20 == 0) goto LAB_03168190;
          uVar47 = *(uint *)(lVar10 + 0x18);
          if (uVar47 < *(uint *)(lVar20 + 0x18)) {
            *(uint *)(lVar10 + 0x18) = uVar47 + 1;
            *(undefined4 *)(lVar20 + (long)(int)uVar47 * 4 + 0x20) = 0;
          }
          else {
            FUN_04059d64(0,lVar10,*(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70)
                        );
          }
          if (in_stack_00000240 == 0) goto LAB_03168190;
          lVar10 = *(long *)(in_stack_00000240 + 0x10);
          lVar20 = *(long *)PTR_DAT_069ff178;
          *(int *)(in_stack_00000240 + 0x1c) = *(int *)(in_stack_00000240 + 0x1c) + 1;
          if (lVar10 == 0) goto LAB_03168190;
          uVar47 = *(uint *)(in_stack_00000240 + 0x18);
          if (uVar47 < *(uint *)(lVar10 + 0x18)) {
            *(uint *)(in_stack_00000240 + 0x18) = uVar47 + 1;
            *(float *)(lVar10 + (long)(int)uVar47 * 4 + 0x20) = fVar37 / fStack00000000000001d4;
          }
          else {
            FUN_04059d64(in_stack_00000240,
                         *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
          }
        }
        uVar44 = (ulong)(uint)fStack000000000000010c;
        uVar11 = (ulong)(uint)(fVar37 + fStack000000000000010c);
      } while (fVar37 + fStack000000000000010c < fStack00000000000001d4 - fStack000000000000010c);
    }
    fStack000000000000012c = (float)uVar21;
    fStack0000000000000128 = (float)uVar44;
    if (*(char *)(in_stack_00000148 + 0x5d6) == '\0') {
      if (*(long *)(in_stack_00000148 + 0x68) == 0) goto LAB_03168190;
      lVar10 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),unaff_x20 & 0xffffffff,
                            *(undefined8 *)PTR_DAT_06a0b440);
      fStack000000000000012c = (float)uVar21;
      fStack0000000000000128 = (float)uVar44;
      if (lVar10 == 0) goto LAB_03168190;
      if (*(int *)(lVar10 + 0x6c) == 1) {
        if (in_stack_00000240 == 0) goto LAB_03168190;
        iVar27 = 0;
        puVar31 = (undefined4 *)(in_stack_00000170 + 0x20 + unaff_x20 * 0xc);
        while( true ) {
          fStack000000000000012c = (float)uVar21;
          fStack0000000000000128 = (float)uVar44;
          if (*(int *)(in_stack_00000240 + 0x18) <= iVar27) break;
          uVar21 = (ulong)*(uint *)(in_stack_00000170 + 0x18);
          if ((((uVar21 <= unaff_x20) || (uVar21 <= in_stack_00000168)) || (uVar21 <= uVar13)) ||
             (uVar21 <= in_stack_00000168 + 2)) goto LAB_0316f2c4;
          uVar38 = *puVar31;
          fVar42 = (float)puVar31[1];
          uVar47 = puVar31[2];
          fVar45 = *pfVar24;
          uVar49 = *(undefined4 *)(lVar14 + 0x24);
          uVar53 = *(undefined4 *)(lVar14 + 0x28);
          FUN_04059a68(in_stack_00000240,iVar27,*(undefined8 *)PTR_DAT_06a0a108);
          FUN_0316f340(uVar38,fVar42,uVar47,fVar45,uVar49,uVar53);
          if (((in_stack_00000238 == 0) ||
              (uVar38 = FUN_0409f2f4(in_stack_00000238,iVar27,*(undefined8 *)PTR_DAT_069fd088),
              lVar9 == 0)) ||
             (fVar45 = (float)FUN_04059a68(lVar9,iVar27,*(undefined8 *)PTR_DAT_06a0a108),
             in_stack_00000238 == 0)) goto LAB_03168190;
          uVar44 = (ulong)(uint)(fVar42 + fVar45);
          uVar21 = (ulong)uVar47;
          FUN_0409f350(uVar38,in_stack_00000238,iVar27,*(undefined8 *)PTR_DAT_06a0b7d0);
          iVar27 = iVar27 + 1;
          if (in_stack_00000240 == 0) goto LAB_03168190;
        }
      }
    }
    puVar2 = PTR_DAT_069fbee0;
    if (in_stack_00000238 == 0) goto LAB_03168190;
    if (*(int *)(in_stack_00000238 + 0x18) == 0) {
      if (*(uint *)(in_stack_00000170 + 0x18) <= uVar13) goto LAB_0316f2c4;
      lVar14 = *(long *)(in_stack_00000238 + 0x10);
      fVar42 = *pfVar32;
      uVar38 = *(undefined4 *)(lVar12 + 0x24);
      uVar49 = *(undefined4 *)(lVar12 + 0x28);
      *(int *)(in_stack_00000238 + 0x1c) = *(int *)(in_stack_00000238 + 0x1c) + 1;
      if (lVar14 == 0) goto LAB_03168190;
      if (*(int *)(lVar14 + 0x18) == 0) {
        FUN_0409f624(in_stack_00000238,
                     *(undefined8 *)(*(long *)(*(long *)(*(long *)puVar2 + 0x20) + 0xc0) + 0x70));
      }
      else {
        *(undefined4 *)(in_stack_00000238 + 0x18) = 1;
        *(float *)(lVar14 + 0x20) = fVar42;
        *(undefined4 *)(lVar14 + 0x24) = uVar38;
        *(undefined4 *)(lVar14 + 0x28) = uVar49;
      }
      if (*(uint *)(in_stack_00000170 + 0x18) <= uVar13) goto LAB_0316f2c4;
      fVar45 = *pfVar32;
      fVar42 = *(float *)(lVar12 + 0x24);
      fStack000000000000012c = *(float *)(lVar12 + 0x28);
      if (DAT_06db4c77 == '\0') {
        FUN_02d965b8(PTR_DAT_069fbb48);
        DAT_06db4c77 = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      fVar42 = (float)(in_stack_00000278 >> 0x20) - fVar42;
      fStack000000000000012c = in_stack_00000160._4_4_ - fStack000000000000012c;
      fStack0000000000000128 = fStack000000000000012c * fStack000000000000012c;
      fStack00000000000001d4 =
           SQRT(fStack0000000000000128 + (fVar43 - fVar45) * (fVar43 - fVar45) + fVar42 * fVar42);
      if (in_stack_00000240 == 0) goto LAB_03168190;
      lVar14 = *(long *)(in_stack_00000240 + 0x10);
      lVar9 = *(long *)PTR_DAT_069ff178;
      *(int *)(in_stack_00000240 + 0x1c) = *(int *)(in_stack_00000240 + 0x1c) + 1;
      if (lVar14 == 0) goto LAB_03168190;
      uVar47 = *(uint *)(in_stack_00000240 + 0x18);
      if (uVar47 < *(uint *)(lVar14 + 0x18)) {
        *(uint *)(in_stack_00000240 + 0x18) = uVar47 + 1;
        *(undefined4 *)(lVar14 + (long)(int)uVar47 * 4 + 0x20) = 0x3f800000;
      }
      else {
        FUN_04059d64(0x3f800000,in_stack_00000240,
                     *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      }
      lVar14 = *in_stack_000000e0;
      if (lVar14 == 0) goto LAB_03168190;
      lVar9 = *(long *)(lVar14 + 0x10);
      lVar10 = *(long *)PTR_DAT_069ff178;
      *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
      if (lVar9 == 0) goto LAB_03168190;
      uVar47 = *(uint *)(lVar14 + 0x18);
      if (uVar47 < *(uint *)(lVar9 + 0x18)) {
        *(uint *)(lVar14 + 0x18) = uVar47 + 1;
        *(undefined4 *)(lVar9 + (long)(int)uVar47 * 4 + 0x20) = 0;
      }
      else {
        FUN_04059d64(0,lVar14,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
      }
      lVar14 = *in_stack_000000b8;
      if (lVar14 == 0) goto LAB_03168190;
      lVar9 = *(long *)(lVar14 + 0x10);
      lVar10 = *(long *)PTR_DAT_069ff178;
      *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
      if (lVar9 == 0) goto LAB_03168190;
      uVar47 = *(uint *)(lVar14 + 0x18);
      if (uVar47 < *(uint *)(lVar9 + 0x18)) {
        *(uint *)(lVar14 + 0x18) = uVar47 + 1;
        *(undefined4 *)(lVar9 + (long)(int)uVar47 * 4 + 0x20) = 0;
      }
      else {
        FUN_04059d64(0,lVar14,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
      }
    }
    puVar26 = (undefined8 *)PTR_DAT_06a0b440;
    puVar2 = PTR_DAT_069fd088;
    plVar25 = (long *)PTR_DAT_069fb978;
    if (in_stack_00000238 == 0) goto LAB_03168190;
    if (0 < *(int *)(in_stack_00000238 + 0x18)) {
      fVar42 = (float)FUN_0409f2f4(in_stack_00000238,*(int *)(in_stack_00000238 + 0x18) + -1,
                                   *(undefined8 *)PTR_DAT_069fd088);
      if (*(uint *)(in_stack_00000170 + 0x18) <= uVar13) goto LAB_0316f2c4;
      fVar45 = fStack0000000000000128 - *(float *)(lVar12 + 0x24);
      fStack000000000000012c = fStack000000000000012c - *(float *)(lVar12 + 0x28);
      fStack0000000000000128 = fStack00000000000000a4;
      if (fStack00000000000000a4 <=
          fStack000000000000012c * fStack000000000000012c +
          (fVar42 - *pfVar32) * (fVar42 - *pfVar32) + fVar45 * fVar45) {
        if (in_stack_00000238 == 0) goto LAB_03168190;
        fVar42 = fStack00000000000000a4;
        fVar45 = (float)FUN_0409f2f4(in_stack_00000238,*(int *)(in_stack_00000238 + 0x18) + -1,
                                     *(undefined8 *)puVar2);
        if (*(uint *)(in_stack_00000170 + 0x18) <= uVar13) goto LAB_0316f2c4;
        fVar33 = *pfVar32;
        fVar43 = *(float *)(lVar12 + 0x24);
        fVar46 = *(float *)(lVar12 + 0x28);
        if (DAT_06db4c77 == '\0') {
          FUN_02d965b8(PTR_DAT_069fbb48);
          DAT_06db4c77 = '\x01';
        }
        if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        puVar3 = PTR_DAT_069fbee0;
        fVar42 = fVar42 - fVar43;
        fStack000000000000012c = fStack000000000000012c - fVar46;
        if (in_stack_000000b0 <=
            SQRT(fStack000000000000012c * fStack000000000000012c +
                 (fVar45 - fVar33) * (fVar45 - fVar33) + fVar42 * fVar42)) {
          if (*(uint *)(in_stack_00000170 + 0x18) <= uVar13) goto LAB_0316f2c4;
          if (in_stack_00000238 == 0) goto LAB_03168190;
          lVar14 = *(long *)(in_stack_00000238 + 0x10);
          fVar42 = *pfVar32;
          fVar45 = *(float *)(lVar12 + 0x24);
          fStack000000000000012c = *(float *)(lVar12 + 0x28);
          *(int *)(in_stack_00000238 + 0x1c) = *(int *)(in_stack_00000238 + 0x1c) + 1;
          if (lVar14 == 0) goto LAB_03168190;
          uVar47 = *(uint *)(in_stack_00000238 + 0x18);
          if (uVar47 < *(uint *)(lVar14 + 0x18)) {
            lVar14 = lVar14 + (long)(int)uVar47 * 0xc;
            *(uint *)(in_stack_00000238 + 0x18) = uVar47 + 1;
            *(float *)(lVar14 + 0x20) = fVar42;
            *(float *)(lVar14 + 0x24) = fVar45;
            *(float *)(lVar14 + 0x28) = fStack000000000000012c;
          }
          else {
            FUN_0409f624(in_stack_00000238,
                         *(undefined8 *)(*(long *)(*(long *)(*(long *)puVar3 + 0x20) + 0xc0) + 0x70)
                        );
          }
          fVar42 = fStack00000000000001d4;
          if (in_stack_00000238 == 0) goto LAB_03168190;
          fVar33 = (float)FUN_0409f2f4(in_stack_00000238,*(int *)(in_stack_00000238 + 0x18) + -1,
                                       *(undefined8 *)puVar2);
          if (*(uint *)(in_stack_00000170 + 0x18) <= uVar13) goto LAB_0316f2c4;
          fVar46 = *pfVar32;
          fVar34 = *(float *)(lVar12 + 0x24);
          fVar43 = *(float *)(lVar12 + 0x28);
          if (DAT_06db4c77 == '\0') {
            FUN_02d965b8(PTR_DAT_069fbb48);
            DAT_06db4c77 = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          fVar45 = fVar45 - fVar34;
          fStack000000000000012c = fStack000000000000012c - fVar43;
          fStack0000000000000128 = fStack000000000000012c * fStack000000000000012c;
          fStack00000000000001d4 =
               fVar42 + SQRT(fStack0000000000000128 +
                             (fVar33 - fVar46) * (fVar33 - fVar46) + fVar45 * fVar45);
          if (in_stack_00000240 == 0) goto LAB_03168190;
          lVar14 = *(long *)(in_stack_00000240 + 0x10);
          lVar12 = *(long *)PTR_DAT_069ff178;
          *(int *)(in_stack_00000240 + 0x1c) = *(int *)(in_stack_00000240 + 0x1c) + 1;
          if (lVar14 == 0) goto LAB_03168190;
          uVar47 = *(uint *)(in_stack_00000240 + 0x18);
          if (uVar47 < *(uint *)(lVar14 + 0x18)) {
            *(uint *)(in_stack_00000240 + 0x18) = uVar47 + 1;
            *(undefined4 *)(lVar14 + (long)(int)uVar47 * 4 + 0x20) = 0x3f800000;
          }
          else {
            FUN_04059d64(0x3f800000,in_stack_00000240,
                         *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
          }
          lVar14 = *in_stack_000000e0;
          if (lVar14 == 0) goto LAB_03168190;
          lVar12 = *(long *)(lVar14 + 0x10);
          lVar9 = *(long *)PTR_DAT_069ff178;
          *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
          if (lVar12 == 0) goto LAB_03168190;
          uVar47 = *(uint *)(lVar14 + 0x18);
          if (uVar47 < *(uint *)(lVar12 + 0x18)) {
            *(uint *)(lVar14 + 0x18) = uVar47 + 1;
            *(undefined4 *)(lVar12 + (long)(int)uVar47 * 4 + 0x20) = 0;
          }
          else {
            FUN_04059d64(0,lVar14,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70))
            ;
          }
        }
        else {
          if (in_stack_00000238 == 0) goto LAB_03168190;
          if (*(uint *)(in_stack_00000170 + 0x18) <= uVar13) goto LAB_0316f2c4;
          fStack000000000000012c = *(float *)(lVar12 + 0x28);
          fStack0000000000000128 = *(float *)(lVar12 + 0x24);
          FUN_0409f350(*pfVar32,in_stack_00000238,*(int *)(in_stack_00000238 + 0x18) + -1,
                       *(undefined8 *)PTR_DAT_06a0b7d0);
          if (in_stack_00000240 == 0) goto LAB_03168190;
          FUN_04059abc(0x3f800000,in_stack_00000240,*(int *)(in_stack_00000240 + 0x18) + -1,
                       *(undefined8 *)PTR_DAT_06a0b5c0);
        }
      }
    }
    if (in_stack_00000238 == 0) goto LAB_03168190;
    iVar27 = *(int *)(in_stack_00000238 + 0x18);
    in_stack_00000130 =
         (float)FUN_0409f2f4(in_stack_00000238,iVar27 + -1,*(undefined8 *)PTR_DAT_069fd088);
    lVar14 = *(long *)(in_stack_00000148 + 0x2c8);
    in_stack_00000278 = CONCAT44(fStack0000000000000128,in_stack_00000130);
    *(float *)(in_stack_00000148 + 0x2c0) =
         *(float *)(in_stack_00000148 + 0x2c0) + fStack00000000000001d4;
    if (lVar14 == 0) goto LAB_03168190;
    lVar12 = *(long *)(lVar14 + 0x10);
    lVar9 = *(long *)PTR_DAT_069fc3e0;
    *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
    if (lVar12 == 0) goto LAB_03168190;
    uVar47 = *(uint *)(lVar14 + 0x18);
    in_stack_000000d0._4_4_ = iVar27 + in_stack_000000d0._4_4_;
    if (uVar47 < *(uint *)(lVar12 + 0x18)) {
      *(uint *)(lVar14 + 0x18) = uVar47 + 1;
      *(int *)(lVar12 + (long)(int)uVar47 * 4 + 0x20) = in_stack_000000d0._4_4_;
    }
    else {
      FUN_03fb3e1c(lVar14,in_stack_000000d0._4_4_,
                   *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
    }
    if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
       (lVar14 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),unaff_x20 & 0xffffffff,*puVar26),
       lVar14 == 0)) goto LAB_03168190;
    iStack0000000000000108 = *(int *)(lVar14 + 0x6c);
    in_stack_00000280 = fStack000000000000012c;
  }
LAB_0316c620:
  if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
     (lVar14 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),unaff_x20 & 0xffffffff,*puVar26),
     fVar42 = fStack00000000000001d4, lVar14 == 0)) goto LAB_03168190;
  if (*(char *)(lVar14 + 0xb8) != '\0') {
    if (*(long *)(in_stack_00000148 + 0x68) == 0) goto LAB_03168190;
    uVar15 = *(undefined8 *)(in_stack_00000148 + 0x20);
    uVar38 = *(undefined4 *)(in_stack_00000148 + 0x128);
    lVar14 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),in_stack_00000168 & 0xffffffff,
                          *(undefined8 *)PTR_DAT_06a0b440);
    if (lVar14 == 0) goto LAB_03168190;
    FUN_031098f4(uVar38,uStack000000000000006c,fVar42,uVar15,&stack0x00000238,in_stack_00000240,
                 &stack0x00000248,*(undefined1 *)(lVar14 + 0xb8),in_stack_00000290,in_stack_00000070
                 ,in_stack_000000e0);
    puVar26 = (undefined8 *)PTR_DAT_06a0b440;
  }
  if (in_stack_00000290 == 0) goto LAB_03168190;
  FUN_0409f858(in_stack_00000290,in_stack_00000238,*(undefined8 *)PTR_DAT_06a0b3a0);
  if (*in_stack_00000078 == 0) goto LAB_03168190;
  FUN_04059f70(*in_stack_00000078,in_stack_00000240,*(undefined8 *)PTR_DAT_06a0b3d8);
  param_2 = (ulong)(uint)fStack0000000000000088;
  param_3 = (ulong)(uint)in_stack_00000080._4_4_;
  FUN_0316fb80(fStack000000000000008c,in_stack_00000148,extraout_x1,in_stack_00000168 & 0xffffffff,
               in_stack_00000170,&stack0x00000268,0,in_stack_00000290);
  if (iVar30 + 3 < *(int *)(in_stack_00000170 + 0x18)) {
    FUN_0317018c(in_stack_00000148,*(undefined8 *)(in_stack_00000148 + 0x68),
                 in_stack_00000168 & 0xffffffff,in_stack_00000170,&stack0x00000258,0);
  }
  puVar2 = PTR_DAT_069ff178;
  puVar18 = (undefined8 *)PTR_DAT_069fd088;
  lVar14 = *in_stack_00000090;
  if (lVar14 == 0) goto LAB_03168190;
  lVar12 = *(long *)(lVar14 + 0x10);
  fVar42 = *in_stack_000000d8;
  *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
  if (lVar12 == 0) goto LAB_03168190;
  uVar47 = *(uint *)(lVar14 + 0x18);
  if (uVar47 < *(uint *)(lVar12 + 0x18)) {
    *(uint *)(lVar14 + 0x18) = uVar47 + 1;
    *(float *)(lVar12 + (long)(int)uVar47 * 4 + 0x20) = fVar42;
  }
  else {
    FUN_04059d64(lVar14,*(undefined8 *)(*(long *)(*(long *)(*(long *)puVar2 + 0x20) + 0xc0) + 0x70))
    ;
  }
  fVar45 = (float)param_3;
  fVar42 = (float)param_2;
  if ((long)in_stack_00000168 < (long)*(int *)(in_stack_00000098 + 0x18)) {
    lVar14 = FUN_0400ff1c(in_stack_00000098,in_stack_00000168 & 0xffffffff,*puVar26);
    lVar12 = FUN_0400ff1c(in_stack_00000098,in_stack_00000168 & 0xffffffff,*puVar26);
    if (in_stack_00000290 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    fVar33 = (float)FUN_0409f2f4(in_stack_00000290,*(int *)(in_stack_00000290 + 0x18) + -1,*puVar18)
    ;
    if (in_stack_00000290 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    fVar46 = fVar42;
    fVar43 = fVar45;
    fVar34 = (float)FUN_0409f2f4(in_stack_00000290,*(int *)(in_stack_00000290 + 0x18) + -2,*puVar18)
    ;
    if (DAT_06db4c75 == '\0') {
      FUN_02d965b8(PTR_DAT_069fbb48);
      DAT_06db4c75 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    fVar33 = fVar33 - fVar34;
    fVar42 = fVar42 - fVar46;
    fVar45 = fVar45 - fVar43;
    fVar46 = SQRT(fVar45 * fVar45 + fVar33 * fVar33 + fVar42 * fVar42);
    if (fVar46 <= DAT_010fd13c) {
      if (DAT_06db4c71 == '\0') {
        FUN_02d965b8(plVar25);
        DAT_06db4c71 = '\x01';
      }
      pfVar24 = *(float **)(*plVar25 + 0xb8);
      fVar33 = *pfVar24;
      fVar42 = pfVar24[1];
      fVar45 = pfVar24[2];
    }
    else {
      fVar33 = fVar33 / fVar46;
      fVar42 = fVar42 / fVar46;
      fVar45 = fVar45 / fVar46;
    }
    param_3 = (ulong)(uint)fVar45;
    param_2 = (ulong)(uint)fVar42;
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    *(float *)(lVar12 + 0x94) = fVar33;
    *(float *)(lVar12 + 0x98) = fVar42;
    *(float *)(lVar12 + 0x9c) = fVar45;
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    *(float *)(lVar14 + 0x88) = fVar33;
    *(float *)(lVar14 + 0x8c) = fVar42;
    *(float *)(lVar14 + 0x90) = fVar45;
    puVar26 = (undefined8 *)PTR_DAT_06a0b440;
  }
  fVar42 = (float)param_2;
  unaff_x24 = in_stack_00000168;
  if (1 < in_stack_00000168) {
    if ((long)in_stack_00000168 < (long)*(int *)(in_stack_00000098 + 0x18)) {
      if (in_stack_00000290 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      iVar30 = *(int *)(in_stack_00000290 + 0x18);
      lVar14 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,*puVar26);
      puVar2 = PTR_DAT_069fd088;
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      if (*(int *)(lVar14 + 0xbc) + 1 < iVar30) {
        lVar14 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,*puVar26);
        fVar45 = (float)param_3;
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        if (*(int *)(lVar14 + 0x6c) != 3) {
          lVar14 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,*puVar26);
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          if (in_stack_00000290 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          fVar43 = (float)FUN_0409f2f4(in_stack_00000290,*(int *)(lVar14 + 0xbc) + 1,
                                       *(undefined8 *)puVar2);
          fVar33 = fVar42;
          fVar46 = fVar45;
          lVar14 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,*puVar26);
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          if (in_stack_00000290 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          fVar34 = (float)FUN_0409f2f4(in_stack_00000290,*(undefined4 *)(lVar14 + 0xbc),
                                       *(undefined8 *)puVar2);
          lVar14 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,*puVar26);
          if (DAT_06db4c75 == '\0') {
            FUN_02d965b8(PTR_DAT_069fbb48);
            DAT_06db4c75 = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          fVar52 = DAT_010fd13c;
          fVar43 = fVar43 - fVar34;
          fVar34 = fVar42 - fVar33;
          fVar45 = fVar45 - fVar46;
          fVar46 = SQRT(fVar45 * fVar45 + fVar43 * fVar43 + fVar34 * fVar34);
          if (fVar46 <= DAT_010fd13c) {
            if (DAT_06db4c71 == '\0') {
              FUN_02d965b8(plVar25);
              DAT_06db4c71 = '\x01';
            }
            pfVar24 = *(float **)(*plVar25 + 0xb8);
            fVar35 = *pfVar24;
            fVar34 = pfVar24[1];
            fVar46 = pfVar24[2];
          }
          else {
            fVar35 = fVar43 / fVar46;
            fVar34 = fVar34 / fVar46;
            fVar46 = fVar45 / fVar46;
          }
          param_3 = (ulong)(uint)fVar46;
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          *(float *)(lVar14 + 0x88) = fVar35;
          *(float *)(lVar14 + 0x8c) = fVar34;
          uVar15 = *puVar26;
          *(float *)(lVar14 + 0x90) = fVar46;
          uVar47 = *(uint *)(in_stack_00000098 + 0x18);
          lVar14 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,uVar15);
          if (in_stack_00000168 != uVar47) {
            fVar42 = fVar33;
          }
          if (DAT_06db4c75 == '\0') {
            FUN_02d965b8(PTR_DAT_069fbb48);
            DAT_06db4c75 = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          fVar42 = fVar42 - fVar33;
          fVar33 = SQRT(fVar45 * fVar45 + fVar43 * fVar43 + fVar42 * fVar42);
          if (fVar33 <= fVar52) {
            if (DAT_06db4c71 == '\0') {
              FUN_02d965b8(plVar25);
              DAT_06db4c71 = '\x01';
            }
            uVar15 = **(undefined8 **)(*plVar25 + 0xb8);
            fVar45 = *(float *)(*(undefined8 **)(*plVar25 + 0xb8) + 1);
          }
          else {
            param_3 = CONCAT44(fVar42,fVar43);
            fVar45 = fVar45 / fVar33;
            uVar15 = CONCAT44(fVar42 / fVar33,fVar43 / fVar33);
          }
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          *(undefined8 *)(lVar14 + 0x94) = uVar15;
          *(float *)(lVar14 + 0x9c) = fVar45;
        }
      }
    }
    goto LAB_0316cbac;
  }
  goto LAB_0316c904;
LAB_0316ecc4:
  fVar42 = (float)uVar21;
  fVar33 = (float)uVar13;
  if (*(int *)(in_stack_00000290 + 0x18) <= iVar30) goto LAB_0316ee54;
  fVar35 = (float)FUN_0409f2f4(in_stack_00000290,iVar30 + -1,*(undefined8 *)puVar2);
  if (in_stack_00000290 == 0) goto LAB_03168190;
  fVar37 = fVar33;
  fVar39 = fVar42;
  fVar36 = (float)FUN_0409f2f4(in_stack_00000290,iVar30,*(undefined8 *)puVar2);
  if (DAT_06db4c77 == '\0') {
    FUN_02d965b8(puVar3);
    DAT_06db4c77 = '\x01';
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  fVar37 = fVar33 - fVar37;
  fVar42 = fVar42 - fVar39;
  fVar33 = fVar42 * fVar42;
  fVar52 = fVar52 + SQRT(fVar33 + (fVar35 - fVar36) * (fVar35 - fVar36) + fVar37 * fVar37);
  if (fVar43 < fVar52) goto LAB_0316ee54;
  if ((in_stack_00000290 == 0) ||
     (uVar38 = FUN_0409f2f4(in_stack_00000290,0,*(undefined8 *)puVar2), in_stack_00000290 == 0))
  goto LAB_03168190;
  FUN_0409f2f4(in_stack_00000290,iVar30,*(undefined8 *)puVar2);
  fVar33 = (float)FUN_031765b0(uVar38,fVar33,fVar42,fVar46,fVar45,fVar34,0);
  if (in_stack_00000290 == 0) goto LAB_03168190;
  fVar37 = fVar42;
  fVar39 = (float)FUN_0409f2f4(in_stack_00000290,iVar30,*(undefined8 *)puVar2);
  fVar36 = fVar52 / fVar43;
  fVar35 = 1.0;
  if (fVar36 <= 1.0) {
    fVar35 = fVar36;
  }
  uVar13 = (ulong)(uint)fVar35;
  fVar40 = 0.0;
  if (0.0 <= fVar36) {
    fVar40 = fVar35;
  }
  if ((in_stack_00000290 == 0) ||
     (FUN_0409f2f4(in_stack_00000290,iVar30,*(undefined8 *)puVar2), in_stack_00000290 == 0))
  goto LAB_03168190;
  uVar21 = (ulong)(uint)(fVar42 + fVar40 * (fVar37 - fVar42));
  FUN_0409f350(fVar33 + fVar40 * (fVar39 - fVar33),in_stack_00000290,iVar30,*(undefined8 *)puVar4);
  iVar30 = iVar30 + 1;
  if (in_stack_00000290 == 0) goto LAB_03168190;
  goto LAB_0316ecc4;
LAB_0316ee54:
  puVar2 = PTR_DAT_069fd088;
  if (in_stack_00000048._4_4_ != 0) {
    if ((in_stack_00000290 == 0) ||
       (fVar45 = (float)FUN_0409f2f4(in_stack_00000290,*(int *)(in_stack_00000290 + 0x18) + -1,
                                     *(undefined8 *)PTR_DAT_069fd088), puVar3 = PTR_DAT_06a0b440,
       in_stack_00000290 == 0)) goto LAB_03168190;
    fVar46 = fVar33;
    FUN_0409f2f4(in_stack_00000290,0,*(undefined8 *)puVar2);
    lVar14 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -2,
                          *(undefined8 *)puVar3);
    puVar4 = PTR_DAT_06a0b7d0;
    puVar3 = PTR_DAT_069fbb48;
    if (lVar14 == 0) goto LAB_03168190;
    fVar34 = *(float *)(lVar14 + 200) * 0.5;
    fVar43 = 5.0;
    if (fVar34 <= 5.0) {
      fVar43 = fVar34;
    }
    if (in_stack_00000290 == 0) goto LAB_03168190;
    if (0 < *(int *)(in_stack_00000290 + 0x18) + -2) {
      fVar34 = 0.0;
      iVar30 = *(int *)(in_stack_00000290 + 0x18) + -1;
      uVar13 = (ulong)(uint)fVar45;
      uVar21 = (ulong)(uint)fVar42;
      do {
        fVar35 = (float)uVar13;
        fVar52 = (float)uVar21;
        if ((in_stack_00000290 == 0) ||
           (fVar37 = (float)FUN_0409f2f4(in_stack_00000290,iVar30,*(undefined8 *)puVar2),
           in_stack_00000290 == 0)) goto LAB_03168190;
        iVar30 = iVar30 + -1;
        fVar39 = fVar52;
        fVar36 = fVar35;
        fVar40 = (float)FUN_0409f2f4(in_stack_00000290,iVar30,*(undefined8 *)puVar2);
        if (DAT_06db4c77 == '\0') {
          FUN_02d965b8(puVar3);
          DAT_06db4c77 = '\x01';
        }
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        fVar34 = fVar34 + SQRT((fVar35 - fVar36) * (fVar35 - fVar36) +
                               (fVar37 - fVar40) * (fVar37 - fVar40) +
                               (fVar52 - fVar39) * (fVar52 - fVar39));
        if (fVar43 < fVar34) break;
        if (in_stack_00000290 == 0) goto LAB_03168190;
        FUN_0409f2f4(in_stack_00000290,iVar30,*(undefined8 *)puVar2);
        fVar52 = fVar42;
        fVar35 = (float)FUN_031765b0(fVar45,fVar33,fVar42,fStack0000000000000060 * 10.0 + fVar45,
                                     fVar46,fStack000000000000005c * 10.0 + fVar42,0);
        if (in_stack_00000290 == 0) goto LAB_03168190;
        fVar39 = fVar52;
        fVar36 = (float)FUN_0409f2f4(in_stack_00000290,iVar30,*(undefined8 *)puVar2);
        fVar40 = fVar34 / fVar43;
        fVar37 = 1.0;
        if (fVar40 <= 1.0) {
          fVar37 = fVar40;
        }
        uVar21 = (ulong)(uint)fVar37;
        fVar48 = 0.0;
        if (0.0 <= fVar40) {
          fVar48 = fVar37;
        }
        if ((in_stack_00000290 == 0) ||
           (FUN_0409f2f4(in_stack_00000290,iVar30,*(undefined8 *)puVar2), in_stack_00000290 == 0))
        goto LAB_03168190;
        uVar13 = (ulong)(uint)(fVar52 + fVar48 * (fVar39 - fVar52));
        FUN_0409f350(fVar35 + fVar48 * (fVar36 - fVar35),in_stack_00000290,iVar30,
                     *(undefined8 *)puVar4);
      } while (1 < iVar30);
    }
  }
  puVar2 = PTR_DAT_06a0b440;
  lVar14 = FUN_0400ff1c(in_stack_00000098,0,*(undefined8 *)PTR_DAT_06a0b440);
  lVar12 = FUN_0400ff1c(in_stack_00000098,0,*(undefined8 *)puVar2);
  if (lVar12 != 0) {
    fVar42 = *(float *)(lVar12 + 0x94);
    lVar12 = FUN_0400ff1c(in_stack_00000098,0,*(undefined8 *)puVar2);
    if (lVar12 != 0) {
      fVar45 = *(float *)(lVar12 + 0x9c);
      if (DAT_06db4c75 == '\0') {
        FUN_02d965b8(PTR_DAT_069fbb48);
        DAT_06db4c75 = '\x01';
      }
      puVar3 = PTR_DAT_069fbb48;
      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      fVar33 = DAT_010fd13c;
      fVar46 = SQRT(fVar42 * fVar42 + fVar45 * fVar45);
      if (fVar46 <= DAT_010fd13c) {
        if (DAT_06db4c71 == '\0') {
          FUN_02d965b8(PTR_DAT_069fb978);
          DAT_06db4c71 = '\x01';
        }
        uVar15 = **(undefined8 **)(*plVar25 + 0xb8);
        fVar45 = *(float *)(*(undefined8 **)(*plVar25 + 0xb8) + 1);
      }
      else {
        fVar45 = fVar45 / fVar46;
        uVar15 = CONCAT44(0.0 / fVar46,fVar42 / fVar46);
      }
      if (lVar14 != 0) {
        *(undefined8 *)(lVar14 + 0x94) = uVar15;
        uVar15 = *(undefined8 *)puVar2;
        *(float *)(lVar14 + 0x9c) = fVar45;
        lVar14 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,uVar15);
        lVar12 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,
                              *(undefined8 *)puVar2);
        if (lVar12 != 0) {
          fVar42 = *(float *)(lVar12 + 0x94);
          lVar12 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,
                                *(undefined8 *)puVar2);
          if (lVar12 != 0) {
            fVar45 = *(float *)(lVar12 + 0x9c);
            if (DAT_06db4c75 == '\0') {
              FUN_02d965b8(PTR_DAT_069fbb48);
              DAT_06db4c75 = '\x01';
            }
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            fVar46 = SQRT(fVar42 * fVar42 + fVar45 * fVar45);
            if (fVar46 <= fVar33) {
              if (DAT_06db4c71 == '\0') {
                FUN_02d965b8(PTR_DAT_069fb978);
                DAT_06db4c71 = '\x01';
              }
              uVar15 = **(undefined8 **)(*plVar25 + 0xb8);
              fVar45 = *(float *)(*(undefined8 **)(*plVar25 + 0xb8) + 1);
            }
            else {
              fVar45 = fVar45 / fVar46;
              uVar15 = CONCAT44(0.0 / fVar46,fVar42 / fVar46);
            }
            if (lVar14 != 0) {
              *(undefined8 *)(lVar14 + 0x94) = uVar15;
              *(float *)(lVar14 + 0x9c) = fVar45;
              return in_stack_00000290;
            }
          }
        }
      }
    }
  }
LAB_03168190:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


