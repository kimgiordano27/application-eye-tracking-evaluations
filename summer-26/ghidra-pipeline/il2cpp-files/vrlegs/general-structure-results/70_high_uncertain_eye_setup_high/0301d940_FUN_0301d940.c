/*
FUNCTION_NAME: FUN_0301d940
ENTRY_POINT: 0301d940
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0301df1c) */
/* WARNING: Removing unreachable block (ram,0x0301df20) */
/* WARNING: Removing unreachable block (ram,0x0301e34c) */

void FUN_0301d940(long param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined4 *puVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  uint uVar27;
  uint uVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  ulong uVar36;
  undefined8 uVar37;
  float fVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  ulong uVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined8 uVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  ulong uVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  undefined8 uVar55;
  ulong uVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  undefined4 uVar66;
  long local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined8 uStack_ac;
  char local_a4 [4];
  
                    /* try { // try from 0301d940 to 0311d94b has its CatchHandler @ 0301da00 */
                    /* try { // try from 0301d94c to 0311d9e3 has its CatchHandler @ 0301d784 */
  if ((DAT_0412b1f7 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d27ec8);
    FUN_01ab69ac(PTR_DAT_03cbdee0);
    DAT_0412b1f7 = 1;
  }
  local_a4[0] = '\0';
  plVar10 = *(long **)(param_1 + 0x10);
  if (plVar10 != (long *)0x0) {
    iVar8 = (**(code **)(*plVar10 + 0x198))(plVar10,*(undefined8 *)(*plVar10 + 0x1a0));
    lVar13 = *(long *)(param_1 + 0x10);
    if ((lVar13 != 0) && (*(long *)(param_1 + 0x18) != 0)) {
      lVar29 = *(long *)(lVar13 + 0x98);
      lVar31 = *(long *)(lVar13 + 0x68);
      lVar23 = *(long *)(lVar13 + 0x38);
      lVar14 = *(long *)(lVar13 + 0x58);
      FUN_02215a88(*(long *)(param_1 + 0x18),*param_2,&local_d0,*(undefined8 *)PTR_DAT_03d27ec8);
      lVar13 = local_d0;
      if (local_d0 != 0) {
        lVar15 = *(long *)(local_d0 + 0x68);
        uVar1 = *(uint *)(local_d0 + 0x70);
        lVar16 = *(long *)(local_d0 + 0x98);
        iVar2 = *(int *)(local_d0 + 0xa0);
        lVar17 = *(long *)(local_d0 + 0xa8);
        iVar3 = *(int *)(local_d0 + 0xb0);
        lVar11 = FUN_03000554(local_d0,0);
        lVar18 = *(long *)(param_1 + 0x20);
        if (lVar18 != 0) {
          if (*(uint *)(lVar18 + 0x18) <= param_3) {
LAB_0301e310:
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          lVar18 = *(long *)(lVar18 + (long)(int)param_3 * 8 + 0x20);
          if (lVar18 != 0) {
            *(undefined8 *)(lVar18 + 0x18) = *(undefined8 *)(lVar13 + 0x18);
            lVar22 = *(long *)(lVar18 + 0x98);
            lVar19 = *(long *)(lVar18 + 0xa8);
            lVar18 = *(long *)(lVar18 + 0x68);
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
            lVar13 = *(long *)(param_1 + 0x10);
            if (lVar13 != 0) {
              uVar36 = *(ulong *)(param_2 + 1);
              fVar48 = *(float *)(lVar13 + 0x34);
              fVar47 = (float)param_2[3];
              uVar46 = *(undefined8 *)(param_2 + 8);
              fVar49 = (float)param_2[10];
              uVar6 = iVar8 - 1;
              fVar32 = (float)FUN_0301d5f0(uVar36,uVar36 >> 0x20,fVar47,fVar48,lVar13,lVar14,uVar6,
                                           lVar23);
              lVar13 = *(long *)(param_1 + 0x28);
              if (DAT_0411f169 == '\0') {
                FUN_01ab69ac(PTR_DAT_03cbdeb8);
                DAT_0411f169 = '\x01';
              }
              puVar20 = *(undefined4 **)(*(long *)PTR_DAT_03cbdeb8 + 0xb8);
              uStack_ac = 0;
              uStack_b0 = 0;
              uStack_c8 = 0;
              local_d0 = 0;
              uStack_b8 = 0;
              local_b4 = 0;
              uStack_c0 = 0;
              FUN_02ffa7f4(uVar36,uVar36 >> 0x20,fVar47,*puVar20,puVar20[1],puVar20[2],puVar20[3],
                           &local_d0,param_3,0);
              if (lVar13 != 0) {
                if (*(uint *)(lVar13 + 0x18) <= param_3) goto LAB_0301e310;
                lVar13 = lVar13 + (long)(int)param_3 * 0x2c;
                *(undefined8 *)(lVar13 + 0x44) = uStack_ac;
                *(ulong *)(lVar13 + 0x3c) = CONCAT44(uStack_b0,local_b4);
                *(undefined8 *)(lVar13 + 0x28) = uStack_c8;
                *(long *)(lVar13 + 0x20) = local_d0;
                *(ulong *)(lVar13 + 0x38) = CONCAT44(local_b4,uStack_b8);
                *(undefined8 *)(lVar13 + 0x30) = uStack_c0;
                if (DAT_0411f172 == '\0') {
                  FUN_01ab69ac(PTR_DAT_03cbded8);
                  DAT_0411f172 = '\x01';
                }
                if (0 < (int)uVar1) {
                  if (lVar11 == 0) goto LAB_0301e314;
                  uVar39 = NEON_fmov(0x3f800000,4);
                  fVar33 = NAN;
                  uVar51 = **(ulong **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
                  fVar52 = *(float *)(*(ulong **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
                  uVar27 = 0;
                  uVar56 = uVar51 >> 0x20;
                  uVar41 = uVar51;
                  fVar34 = fVar33;
                  fVar35 = fVar33;
                  fVar50 = fVar33;
                  fVar38 = fVar33;
                  fVar53 = fVar33;
                  fVar43 = fVar33;
                  fVar44 = fVar33;
                  fVar57 = fVar33;
                  fVar42 = fVar33;
                  do {
                    if (*(uint *)(lVar11 + 0x18) <= uVar27) goto LAB_0301e310;
                    if (lVar15 == 0) goto LAB_0301e314;
                    uVar5 = *(uint *)(lVar11 + (long)(int)uVar27 * 4 + 0x20);
                    lVar13 = (long)(int)uVar5;
                    if (*(uint *)(lVar15 + 0x18) <= uVar5) goto LAB_0301e310;
                    lVar21 = lVar15 + lVar13 * 0xc;
                    fVar45 = *(float *)(lVar21 + 0x20);
                    fVar54 = *(float *)(lVar21 + 0x24);
                    fVar59 = *(float *)(lVar21 + 0x28);
                    if ((uVar27 == 0) || (fVar33 != fVar59)) {
                      fVar33 = fVar32 + fVar49 * fVar59;
                      if (*(char *)(param_1 + 0x38) != '\0') {
                        fVar33 = fVar33 + (fVar33 - *(float *)(param_1 + 0x3c)) *
                                          *(float *)(param_1 + 0x40);
                      }
                      if (*(long *)(param_1 + 0x10) == 0) goto LAB_0301e314;
                      fVar33 = (1.0 / fVar48) * fVar33;
                      bVar7 = fVar33 < 0.0;
                      if (*(char *)(*(long *)(param_1 + 0x10) + 0x32) == '\0') {
                        fVar34 = 0.0;
                        if ((!bVar7) && (fVar34 = fVar33, 1.0 < fVar33)) {
                          fVar34 = 1.0;
                        }
                      }
                      else {
                        while (bVar7) {
                          fVar33 = fVar33 + 1.0;
                          bVar7 = fVar33 < 0.0;
                        }
                        for (; fVar34 = fVar33, 1.0 < fVar33; fVar33 = fVar33 + -1.0) {
                        }
                      }
                      uVar9 = FUN_02fcde38(fVar34,lVar23,iVar8,0);
                      fVar33 = 1.0;
                      uVar28 = iVar8 - 2;
                      if (uVar9 != uVar6) {
                        if (lVar23 == 0) goto LAB_0301e314;
                        if ((*(uint *)(lVar23 + 0x18) <= uVar9) ||
                           (*(uint *)(lVar23 + 0x18) <= uVar9 + 1)) goto LAB_0301e310;
                        fVar33 = *(float *)(lVar23 + (long)(int)uVar9 * 4 + 0x20);
                        fVar33 = (fVar34 - fVar33) /
                                 (*(float *)(lVar23 + (long)(int)(uVar9 + 1) * 4 + 0x20) - fVar33);
                        uVar28 = uVar9;
                      }
                      if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      uVar9 = FUN_0276c214(uVar28 + 1,uVar6,0);
                      if (lVar14 == 0) goto LAB_0301e314;
                      if ((*(uint *)(lVar14 + 0x18) <= uVar28) ||
                         (*(uint *)(lVar14 + 0x18) <= uVar9)) goto LAB_0301e310;
                      lVar21 = *(long *)(param_1 + 0x48);
                      if (lVar21 == 0) goto LAB_0301e314;
                      lVar30 = (long)(int)uVar28;
                      lVar26 = (long)(int)uVar9;
                      lVar24 = lVar14 + lVar30 * 0xc;
                      lVar25 = lVar14 + lVar26 * 0xc;
                      uVar40 = *(undefined8 *)(lVar25 + 0x20);
                      uVar55 = *(undefined8 *)(lVar24 + 0x20);
                      fVar34 = *(float *)(lVar24 + 0x28);
                      fVar38 = *(float *)(lVar25 + 0x28);
                      if (*(int *)(lVar21 + 0x10) == 0) {
LAB_0301df28:
                        uVar41 = (ulong)*(uint *)(lVar21 + 0x20);
                        uVar56 = (ulong)*(uint *)(lVar21 + 0x24);
                        if (*(char *)(lVar21 + 0x18) != '\0') {
                          uVar56 = (ulong)*(uint *)(lVar21 + 0x20);
                        }
                      }
                      else {
                        if (*(int *)(lVar21 + 0x10) != 1) {
                          thunk_FUN_01a6ca08(PTR_DAT_03cbde98);
                          uVar46 = thunk_FUN_01a89e68();
                          FUN_026b3f6c(uVar46,0);
                          uVar39 = thunk_FUN_01a6ca08(PTR_DAT_03d28a00);
                    /* WARNING: Subroutine does not return */
                          FUN_01ab6b14(uVar46,uVar39);
                        }
                        if (*(char *)(param_1 + 0x50) == '\0') goto LAB_0301df28;
                        lVar24 = *(long *)(param_1 + 0x10);
                        if (lVar24 == 0) goto LAB_0301e314;
                        fVar35 = (float)FUN_0300b038(uVar28,*(undefined4 *)(lVar21 + 0x14),
                                                     *(undefined8 *)(lVar24 + 0x38),
                                                     *(undefined8 *)(lVar24 + 0x40),
                                                     *(undefined8 *)(lVar24 + 0x48),
                                                     *(undefined8 *)(lVar24 + 0x50),0);
                        uVar12 = *(undefined8 *)(param_1 + 0x48);
                        local_a4[0] = '\0';
                        FUN_027e0bd8(uVar12,local_a4,0);
                        lVar21 = *(long *)(param_1 + 0x48);
                        if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_01ab6c3c();
                        }
                        fVar53 = *(float *)(lVar21 + 0x20);
                        cVar4 = *(char *)(lVar21 + 0x18);
                        fVar50 = *(float *)(lVar21 + 0x24);
                        lVar24 = *(long *)(lVar21 + 0x28);
                        lVar25 = *(long *)(lVar21 + 0x30);
                        uVar37 = FUN_01cbd448(fVar35 - *(float *)(lVar21 + 0x1c),0x3f800000,0);
                        if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_01ab6c3c();
                        }
                        fVar35 = (float)FUN_0366c2a0(lVar24,0);
                        uVar41 = (ulong)(uint)(fVar53 * fVar35);
                        uVar56 = uVar41;
                        if (cVar4 == '\0') {
                          if (lVar25 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_01ab6c3c();
                          }
                          fVar35 = (float)FUN_0366c2a0(uVar37,lVar25,0);
                          uVar56 = (ulong)(uint)(fVar50 * fVar35);
                        }
                        if (local_a4[0] != '\0') {
                          OVRManager_<>c__<InitOVRManager>b__424_0(uVar12,0);
                        }
                      }
                      if (lVar29 == 0) goto LAB_0301e314;
                      if (*(uint *)(lVar29 + 0x18) <= uVar28) goto LAB_0301e310;
                      if (lVar31 == 0) goto LAB_0301e314;
                      if (*(uint *)(lVar31 + 0x18) <= uVar28) goto LAB_0301e310;
                      lVar21 = lVar29 + lVar30 * 0xc;
                      fVar35 = *(float *)(lVar21 + 0x24);
                      fVar50 = *(float *)(lVar21 + 0x28);
                      fVar42 = *(float *)(lVar31 + lVar30 * 0xc + 0x20);
                      uVar12 = FUN_036c0d90(*(undefined4 *)(lVar21 + 0x20),0);
                      if ((*(uint *)(lVar29 + 0x18) <= uVar9) || (*(uint *)(lVar31 + 0x18) <= uVar9)
                         ) goto LAB_0301e310;
                      fVar53 = (float)uVar55;
                      fVar43 = (float)((ulong)uVar55 >> 0x20);
                      lVar21 = lVar29 + lVar26 * 0xc;
                      uVar51 = CONCAT44(((float)((ulong)uVar39 >> 0x20) /
                                        (float)((ulong)uVar46 >> 0x20)) *
                                        ((fVar43 + ((float)((ulong)uVar40 >> 0x20) - fVar43) *
                                                   fVar33) - (float)(uVar36 >> 0x20)),
                                        ((float)uVar39 / (float)uVar46) *
                                        ((fVar53 + ((float)uVar40 - fVar53) * fVar33) -
                                        (float)uVar36));
                      lVar24 = lVar31 + lVar26 * 0xc;
                      fVar52 = (1.0 / fVar49) * ((fVar34 + fVar33 * (fVar38 - fVar34)) - fVar47);
                      FUN_036c0d90(*(undefined4 *)(lVar21 + 0x20),*(undefined4 *)(lVar21 + 0x24),
                                   *(undefined4 *)(lVar21 + 0x28),*(undefined4 *)(lVar24 + 0x20),
                                   *(undefined4 *)(lVar24 + 0x24),*(undefined4 *)(lVar24 + 0x28),0);
                      fVar33 = (float)FUN_036c0a20(uVar12,0);
                      fVar57 = fVar35 + fVar35;
                      fVar58 = fVar50 + fVar50;
                      fVar38 = fVar33 * (fVar33 + fVar33);
                      fVar53 = fVar35 * fVar57;
                      fVar50 = fVar50 * fVar58;
                      fVar43 = fVar33 * fVar57;
                      fVar34 = fVar33 * fVar58;
                      fVar35 = fVar35 * fVar58;
                      fVar44 = fVar42 * (fVar33 + fVar33);
                      fVar57 = fVar42 * fVar57;
                      fVar42 = fVar42 * fVar58;
                      fVar33 = fVar59;
                    }
                    if (lVar18 == 0) goto LAB_0301e314;
                    if (*(uint *)(lVar18 + 0x18) <= uVar5) goto LAB_0301e310;
                    fVar61 = fVar42 + fVar43;
                    fVar59 = (float)uVar41;
                    fVar62 = fVar34 - fVar57;
                    fVar64 = 1.0 - (fVar50 + fVar53);
                    fVar65 = 1.0 - (fVar50 + fVar38);
                    fVar60 = fVar43 - fVar42;
                    fVar63 = fVar44 + fVar35;
                    fVar58 = (float)uVar56;
                    lVar21 = lVar18 + lVar13 * 0xc;
                    *(float *)(lVar21 + 0x20) =
                         fVar54 * fVar60 * fVar58 + (float)uVar51 + fVar45 * fVar64 * fVar59;
                    *(float *)(lVar21 + 0x24) =
                         fVar54 * fVar65 * fVar58 +
                         (float)(uVar51 >> 0x20) + fVar45 * fVar61 * fVar59;
                    *(float *)(lVar21 + 0x28) =
                         fVar54 * fVar63 * fVar58 + fVar52 + fVar45 * fVar62 * fVar59;
                    if ((int)uVar5 < iVar2) {
                      if (lVar16 == 0) goto LAB_0301e314;
                      if (*(uint *)(lVar16 + 0x18) <= uVar5) goto LAB_0301e310;
                      if (lVar22 == 0) goto LAB_0301e314;
                      if (*(uint *)(lVar22 + 0x18) <= uVar5) goto LAB_0301e310;
                      lVar21 = lVar16 + lVar13 * 0xc;
                      fVar45 = *(float *)(lVar21 + 0x20);
                      fVar54 = *(float *)(lVar21 + 0x24);
                      fVar59 = *(float *)(lVar21 + 0x28);
                      lVar21 = lVar22 + lVar13 * 0xc;
                      *(float *)(lVar21 + 0x20) =
                           fVar64 * fVar45 + fVar60 * fVar54 + (fVar57 + fVar34) * fVar59;
                      *(float *)(lVar21 + 0x24) =
                           fVar61 * fVar45 + fVar65 * fVar54 + (fVar35 - fVar44) * fVar59;
                      *(float *)(lVar21 + 0x28) =
                           fVar62 * fVar45 + fVar63 * fVar54 + (1.0 - (fVar53 + fVar38)) * fVar59;
                    }
                    if ((int)uVar5 < iVar3) {
                      if (lVar17 == 0) goto LAB_0301e314;
                      if (*(uint *)(lVar17 + 0x18) <= uVar5) goto LAB_0301e310;
                      if (lVar19 == 0) goto LAB_0301e314;
                      if (*(uint *)(lVar19 + 0x18) <= uVar5) goto LAB_0301e310;
                      lVar21 = lVar17 + lVar13 * 0x10;
                      fVar45 = *(float *)(lVar21 + 0x20);
                      fVar59 = *(float *)(lVar21 + 0x24);
                      fVar54 = *(float *)(lVar21 + 0x28);
                      uVar66 = *(undefined4 *)(lVar21 + 0x2c);
                      lVar13 = lVar19 + lVar13 * 0x10;
                      *(float *)(lVar13 + 0x20) =
                           fVar64 * fVar45 + fVar60 * fVar59 + (fVar57 + fVar34) * fVar54;
                      *(float *)(lVar13 + 0x24) =
                           fVar61 * fVar45 + fVar65 * fVar59 + (fVar35 - fVar44) * fVar54;
                      *(float *)(lVar13 + 0x28) =
                           fVar62 * fVar45 + fVar63 * fVar59 + (1.0 - (fVar53 + fVar38)) * fVar54;
                      *(undefined4 *)(lVar13 + 0x2c) = uVar66;
                    }
                    uVar27 = uVar27 + 1;
                  } while (uVar27 != uVar1);
                }
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_0301e314:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


