/*
FUNCTION_NAME: OVRManager$$add_SpaceSaveComplete
ENTRY_POINT: 07c58d60
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_SpaceSaveComplete
               (undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4,
               undefined8 param_5)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  byte bVar11;
  int iVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  float *pfVar16;
  ulong uVar17;
  ulong uVar18;
  int *piVar19;
  long unaff_x19;
  long *plVar20;
  uint *puVar21;
  uint uVar22;
  long *unaff_x21;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined8 uVar35;
  ulong uVar36;
  ulong uVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fStack0000000000000020;
  float fStack0000000000000024;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 in_stack_00000058;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  undefined4 uStack000000000000006c;
  float fStack0000000000000070;
  float fStack0000000000000074;
  undefined4 in_stack_00000078;
  
  puVar13 = (undefined8 *)FUN_044822ac(param_4,param_5,0);
                    /* try { // try from 07c58d7c to 07d58d87 has its CatchHandler @ 07c58f80 */
  iVar12 = (*(code *)*puVar13)();
  if (DAT_0a51bf40 == '\0') {
                    /* try { // try from 07c58d98 to 07d58da3 has its CatchHandler @ 07c59060 */
    FUN_04447ba8(PTR_DAT_09f1e740);
    DAT_0a51bf40 = '\x01';
  }
  fVar38 = fStack0000000000000068;
  fVar41 = fStack0000000000000060;
  puVar5 = PTR_DAT_09f1e740;
  if (*(long *)(unaff_x19 + 0x30) != 0) {
                    /* try { // try from 07c58dc0 to 07d58dc3 has its CatchHandler @ 07c58f00 */
                    /* try { // try from 07c58dc4 to 07d58dcf has its CatchHandler @ 07c58f5c */
    lVar14 = *(long *)(*(long *)PTR_DAT_09f1e740 + 0xb8);
    fVar23 = *(float *)(lVar14 + 0x18);
    fVar44 = *(float *)(lVar14 + 0x1c);
    fVar42 = *(float *)(lVar14 + 0x20);
    fVar24 = (float)FUN_09539d64(*(long *)(unaff_x19 + 0x30),0);
                    /* try { // try from 07c58de0 to 07d58deb has its CatchHandler @ 07c58f64 */
                    /* try { // try from 07c58dec to 07d58e8b has its CatchHandler @ 07c57ed4 */
    if (DAT_0a51bf42 == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e748);
      DAT_0a51bf42 = '\x01';
    }
    puVar6 = PTR_DAT_09f1e748;
    fVar41 = fVar41 - fVar24;
    param_2 = fStack0000000000000064 - param_2;
    fVar38 = fVar38 - param_3;
    if (*(int *)(*(long *)PTR_DAT_09f1e748 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    fVar24 = DAT_01c7607c;
    fVar25 = SQRT(fVar38 * fVar38 + fVar41 * fVar41 + param_2 * param_2);
    if (fVar25 <= DAT_01c7607c) {
      if (DAT_0a51bf43 == '\0') {
        FUN_04447ba8(PTR_DAT_09f1e740);
        DAT_0a51bf43 = '\x01';
      }
      pfVar16 = *(float **)(*(long *)puVar5 + 0xb8);
      fVar41 = *pfVar16;
      param_2 = pfVar16[1];
      fVar38 = pfVar16[2];
    }
    else {
      param_2 = param_2 / fVar25;
      fVar41 = fVar41 / fVar25;
      fVar38 = fVar38 / fVar25;
    }
    if (DAT_0a51bf42 == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e748);
      DAT_0a51bf42 = '\x01';
    }
    fVar25 = fVar44 * fVar38 - fVar42 * param_2;
    fVar40 = fVar42 * fVar41 - fVar23 * fVar38;
    fVar39 = fVar23 * param_2 - fVar44 * fVar41;
    if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    fVar33 = SQRT(fVar39 * fVar39 + fVar25 * fVar25 + fVar40 * fVar40);
    if (fVar33 <= fVar24) {
      if (DAT_0a51bf43 == '\0') {
        FUN_04447ba8(PTR_DAT_09f1e740);
        DAT_0a51bf43 = '\x01';
      }
      pfVar16 = *(float **)(*(long *)puVar5 + 0xb8);
      fVar25 = *pfVar16;
      fVar40 = pfVar16[1];
      fVar39 = pfVar16[2];
    }
    else {
      fVar25 = fVar25 / fVar33;
      fVar40 = fVar40 / fVar33;
      fVar39 = fVar39 / fVar33;
    }
    uVar9 = in_stack_00000078;
    fVar43 = fStack0000000000000074;
    fVar33 = fStack0000000000000070;
    uVar8 = uStack000000000000006c;
    puVar7 = PTR_DAT_09f4d0d8;
    uVar18 = (ulong)(uint)param_2;
    lVar14 = *(long *)PTR_DAT_09f4d0d8;
    if (iVar12 != 1) {
      fVar25 = -fVar25;
      fVar40 = -fVar40;
      fVar39 = -fVar39;
    }
    if (*(int *)(lVar14 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      lVar14 = *(long *)puVar7;
    }
    lVar15 = *(long *)(lVar14 + 0xb8);
    bVar10 = iVar12 != 1;
    lVar14 = 0x2c;
    if (bVar10) {
      lVar14 = 0x74;
    }
    lVar1 = 0x28;
    if (bVar10) {
      lVar1 = 0x70;
    }
    lVar2 = 0x24;
    if (bVar10) {
      lVar2 = 0x6c;
    }
    fVar26 = (float)FUN_09516eb8(uVar8,fVar33,fVar43,uVar9,*(undefined4 *)(lVar15 + lVar2),
                                 *(undefined4 *)(lVar15 + lVar1),*(undefined4 *)(lVar15 + lVar14),0)
    ;
    uVar8 = in_stack_00000078;
    fVar31 = fStack0000000000000070;
    lVar14 = *(long *)puVar7;
    if (*(int *)(lVar14 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      lVar14 = *(long *)puVar7;
    }
    lVar15 = *(long *)(lVar14 + 0xb8);
    bVar10 = iVar12 != 1;
    lVar14 = 0x14;
    if (bVar10) {
      lVar14 = 0x5c;
    }
    lVar1 = 0x10;
    if (bVar10) {
      lVar1 = 0x58;
    }
    lVar2 = 0xc;
    if (bVar10) {
      lVar2 = 0x54;
    }
    fVar34 = fStack0000000000000074;
    fVar27 = (float)FUN_09516eb8(uStack000000000000006c,fVar31,fStack0000000000000074,uVar8,
                                 *(undefined4 *)(lVar15 + lVar2),*(undefined4 *)(lVar15 + lVar1),
                                 *(undefined4 *)(lVar15 + lVar14),0);
    if (DAT_0a5233ad == '\0') {
      FUN_04447ba8(PTR_DAT_09f1f580);
      DAT_0a5233ad = '\x01';
    }
    puVar7 = PTR_DAT_09f1f580;
    fVar28 = fVar42 * fVar42 + fVar23 * fVar23 + fVar44 * fVar44;
    fVar32 = fVar38;
    fStack0000000000000024 = fVar41;
    fStack0000000000000020 = param_2;
    if (**(float **)(*(long *)PTR_DAT_09f1f580 + 0xb8) <= fVar28) {
      fVar32 = fVar42 * fVar38 + fVar23 * fVar41 + fVar44 * param_2;
      fStack0000000000000024 = fVar41 - (fVar23 * fVar32) / fVar28;
      fStack0000000000000020 = param_2 - (fVar44 * fVar32) / fVar28;
      fVar32 = fVar38 - (fVar42 * fVar32) / fVar28;
    }
    if (DAT_0a51bf42 == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e748);
      DAT_0a51bf42 = '\x01';
    }
    if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    fVar23 = SQRT(fVar32 * fVar32 +
                  fStack0000000000000024 * fStack0000000000000024 +
                  fStack0000000000000020 * fStack0000000000000020);
    if (fVar23 <= fVar24) {
      if (DAT_0a51bf43 == '\0') {
        FUN_04447ba8(PTR_DAT_09f1e740);
        DAT_0a51bf43 = '\x01';
      }
      pfVar16 = *(float **)(*(long *)puVar5 + 0xb8);
      fStack0000000000000024 = *pfVar16;
      fStack0000000000000020 = pfVar16[1];
      fVar32 = pfVar16[2];
    }
    else {
      fStack0000000000000024 = fStack0000000000000024 / fVar23;
      fStack0000000000000020 = fStack0000000000000020 / fVar23;
      fVar32 = fVar32 / fVar23;
    }
    if (DAT_0a5233ad == '\0') {
      FUN_04447ba8(PTR_DAT_09f1f580);
      DAT_0a5233ad = '\x01';
    }
    fVar23 = fVar38 * fVar38 + fVar41 * fVar41 + param_2 * param_2;
    if (**(float **)(*(long *)puVar7 + 0xb8) <= fVar23) {
      fVar42 = fVar38 * fVar43 + fVar41 * fVar26 + param_2 * fVar33;
      fVar26 = fVar26 - (fVar41 * fVar42) / fVar23;
      fVar33 = fVar33 - (param_2 * fVar42) / fVar23;
      fVar43 = fVar43 - (fVar38 * fVar42) / fVar23;
    }
    if (DAT_0a51bf42 == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e748);
      DAT_0a51bf42 = '\x01';
    }
    if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    fVar23 = SQRT(fVar43 * fVar43 + fVar26 * fVar26 + fVar33 * fVar33);
    if (fVar23 <= fVar24) {
      if (DAT_0a51bf43 == '\0') {
        FUN_04447ba8(PTR_DAT_09f1e740);
        DAT_0a51bf43 = '\x01';
      }
      pfVar16 = *(float **)(*(long *)puVar5 + 0xb8);
      fVar26 = *pfVar16;
      fVar33 = pfVar16[1];
      fVar43 = pfVar16[2];
    }
    else {
      fVar26 = fVar26 / fVar23;
      fVar33 = fVar33 / fVar23;
      fVar43 = fVar43 / fVar23;
    }
    uVar37 = (ulong)(uint)fVar25;
    fVar23 = (float)FUN_0770668c(fVar26,fVar33,fVar43,uVar37,fVar40,fVar39,0);
    plVar20 = *(long **)(unaff_x19 + 0x28);
    if (plVar20 != (long *)0x0) {
      lVar14 = *plVar20;
      uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar17 != 0) {
        piVar19 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *unaff_x21) {
            puVar13 = (undefined8 *)(lVar14 + (long)*piVar19 * 0x10 + 0x138);
            goto LAB_07c59348;
          }
          uVar17 = uVar17 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 != 0);
      }
      puVar13 = (undefined8 *)FUN_044822ac(plVar20,*unaff_x21,0);
LAB_07c59348:
      iVar12 = (*(code *)*puVar13)(plVar20,puVar13[1]);
      fVar24 = -fVar23;
      if (iVar12 != 1) {
        fVar24 = fVar23;
      }
      uVar35 = 0xc28c0000;
      uVar17 = (ulong)(uint)(fVar24 + 360.0);
      fVar23 = fVar24 + 360.0;
      if (-70.0 <= fVar24) {
        fVar23 = fVar24;
      }
      *(float *)(unaff_x19 + 0x7c) = fVar23;
      if (*(long *)(unaff_x19 + 0x30) != 0) {
        uVar29 = FUN_09539d64(*(long *)(unaff_x19 + 0x30),0);
        uVar36 = (ulong)(uint)fVar38;
        uVar30 = FUN_09516c60(fVar41,uVar18,uVar36,0);
        in_stack_00000040 = 0;
        uStack0000000000000048 = 0;
        uStack000000000000004c = 0;
        in_stack_00000058 = 0;
        uStack0000000000000050 = 0;
        uStack0000000000000054 = 0;
        FUN_09537b20(uVar29,uVar17,uVar35,uVar30,uVar18,uVar36,uVar37,&stack0x00000040,0);
        plVar20 = *(long **)(unaff_x19 + 0x48);
        *(float *)(unaff_x19 + 0x80) = fVar26;
        *(float *)(unaff_x19 + 0x84) = fVar33;
        *(float *)(unaff_x19 + 0x88) = fVar43;
        *(ulong *)(unaff_x19 + 0xa0) = CONCAT44(in_stack_00000058,uStack0000000000000054);
        *(ulong *)(unaff_x19 + 0x98) = CONCAT44(uStack0000000000000050,uStack000000000000004c);
        *(ulong *)(unaff_x19 + 0x94) = CONCAT44(uStack000000000000004c,uStack0000000000000048);
        *(undefined8 *)(unaff_x19 + 0x8c) = in_stack_00000040;
        puVar5 = PTR_DAT_09f28c08;
        if (plVar20 != (long *)0x0) {
          lVar14 = *plVar20;
          uVar18 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar18 != 0) {
            piVar19 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_09f28c08) {
                puVar13 = (undefined8 *)(lVar14 + (long)*piVar19 * 0x10 + 0x138);
                goto LAB_07c59468;
              }
              uVar18 = uVar18 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar18 != 0);
          }
          puVar13 = (undefined8 *)FUN_044822ac(plVar20,*(long *)PTR_DAT_09f28c08,0);
LAB_07c59468:
          uVar18 = (*(code *)*puVar13)(plVar20,puVar13[1]);
          if ((uVar18 & 1) == 0) {
            uVar22 = 0;
          }
          else {
            uVar22 = *(byte *)(unaff_x19 + 0x71) ^ 1;
          }
          plVar20 = *(long **)(unaff_x19 + 0x48);
          if (plVar20 != (long *)0x0) {
            lVar15 = *plVar20;
            lVar14 = *(long *)puVar5;
            uVar18 = (ulong)*(ushort *)(lVar15 + 0x12e);
            if (uVar18 != 0) {
              piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == lVar14) {
                  puVar13 = (undefined8 *)(lVar15 + (long)*piVar19 * 0x10 + 0x138);
                  goto LAB_07c59514;
                }
                uVar18 = uVar18 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar18 != 0);
            }
            puVar13 = (undefined8 *)FUN_044822ac(plVar20,lVar14,0);
LAB_07c59514:
            bVar11 = (*(code *)*puVar13)(plVar20,puVar13[1]);
            puVar21 = (uint *)(unaff_x19 + 0x74);
            *(byte *)(unaff_x19 + 0x71) = bVar11 & 1;
            if ((uVar22 & 0.5 < (fVar34 * fVar32 +
                                fVar27 * fStack0000000000000024 + fVar31 * fStack0000000000000020) *
                                0.5 + 0.5 & *puVar21 >> 0x1f) == 0) {
              if ((int)*puVar21 < 0) {
                return;
              }
              plVar20 = *(long **)(unaff_x19 + 0x58);
              if (plVar20 != (long *)0x0) {
                lVar15 = *plVar20;
                lVar14 = *(long *)puVar5;
                uVar18 = (ulong)*(ushort *)(lVar15 + 0x12e);
                if (uVar18 != 0) {
                  piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar19 + -2) == lVar14) {
                      puVar13 = (undefined8 *)(lVar15 + (long)*piVar19 * 0x10 + 0x138);
                      goto LAB_07c595d8;
                    }
                    uVar18 = uVar18 - 1;
                    piVar19 = piVar19 + 4;
                  } while (uVar18 != 0);
                }
                puVar13 = (undefined8 *)FUN_044822ac(plVar20,lVar14,0);
LAB_07c595d8:
                uVar18 = (*(code *)*puVar13)(plVar20,puVar13[1]);
                if ((uVar18 & 1) != 0) {
                  FUN_07c586d0();
                  *(undefined4 *)(unaff_x19 + 0x74) = 0xffffffff;
                  *(undefined1 *)(unaff_x19 + 0xb0) = 0;
                  return;
                }
                uVar22 = *puVar21;
                if ((int)uVar22 < 0) {
                  return;
                }
                if (*(char *)(unaff_x19 + 0xb0) != '\0') {
                  return;
                }
                lVar14 = *(long *)(unaff_x19 + 0x38);
                if (lVar14 != 0) {
                  uVar3 = *(uint *)(lVar14 + 0x18);
                  if (uVar3 <= uVar22) goto LAB_07c596cc;
                  lVar15 = *(long *)(lVar14 + (ulong)uVar22 * 8 + 0x20);
                  if (lVar15 != 0) {
                    if (*(float *)(lVar15 + 0x10) <= *(float *)(unaff_x19 + 0x7c)) {
                      if (*(float *)(unaff_x19 + 0x7c) <= *(float *)(lVar15 + 0x14)) {
                        return;
                      }
                      uVar4 = uVar3 - 1;
                      if ((int)(uVar22 + 1) <= (int)uVar4) {
                        uVar4 = uVar22 + 1;
                      }
                      *puVar21 = uVar4;
                      if (uVar3 <= uVar4) goto LAB_07c596cc;
                      uVar18 = (ulong)(int)uVar4;
                    }
                    else {
                      if ((int)uVar22 < 2) {
                        uVar22 = 1;
                      }
                      uVar22 = uVar22 - 1;
                      *puVar21 = uVar22;
                      if (uVar3 <= uVar22) {
LAB_07c596cc:
                    /* WARNING: Subroutine does not return */
                        FUN_04447e4c();
                      }
                      uVar18 = (ulong)uVar22;
                    }
                    if (*(long *)(lVar14 + uVar18 * 8 + 0x20) != 0) goto LAB_07c59568;
                  }
                }
              }
            }
            else {
              lVar14 = FUN_07c596d0(*(undefined4 *)(unaff_x19 + 0x7c));
              if (lVar14 != 0) {
                if (*(char *)(lVar14 + 0x18) == '\0') {
                  *puVar21 = 0xffffffff;
                  return;
                }
LAB_07c59568:
                FUN_07c586d0();
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


