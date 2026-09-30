/*
FUNCTION_NAME: FUN_02fa82e4
ENTRY_POINT: 02fa82e4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x02fa8d98) */
/* WARNING: Removing unreachable block (ram,0x02fa886c) */
/* WARNING: Removing unreachable block (ram,0x02fa8b74) */

void FUN_02fa82e4(int *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  byte bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  int iVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  int *piVar19;
  undefined8 *puVar20;
  uint uVar21;
  uint uVar22;
  long *plVar23;
  undefined1 auVar24 [16];
  int local_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined1 local_b0 [16];
  char local_94 [4];
  long local_90;
  char local_84 [4];
  long local_80;
  undefined8 local_78;
  long lStack_70;
  long local_68;
  
  if ((DAT_0412ae33 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d261c8);
    FUN_01ab69ac(PTR_DAT_03cc9270);
    FUN_01ab69ac(PTR_DAT_03cfcdf8);
    FUN_01ab69ac(PTR_DAT_03cfce00);
    FUN_01ab69ac(PTR_DAT_03cfce08);
    FUN_01ab69ac(PTR_DAT_03cbeeb0);
    FUN_01ab69ac(PTR_DAT_03d261d0);
    FUN_01ab69ac(PTR_DAT_03d261d8);
    FUN_01ab69ac(PTR_DAT_03d261e0);
    FUN_01ab69ac(PTR_DAT_03d261e8);
    FUN_01ab69ac(PTR_DAT_03d261f0);
    FUN_01ab69ac(PTR_DAT_03d261f8);
    FUN_01ab69ac(PTR_DAT_03cc0318);
    FUN_01ab69ac(PTR_DAT_03cc0320);
    FUN_01ab69ac(PTR_DAT_03d0b808);
    FUN_01ab69ac(PTR_DAT_03cc0328);
    FUN_01ab69ac(PTR_DAT_03cfce10);
    FUN_01ab69ac(PTR_DAT_03ccca78);
    FUN_01ab69ac(PTR_DAT_03cc0330);
    FUN_01ab69ac(PTR_DAT_03cc4b20);
    FUN_01ab69ac(PTR_DAT_03d26200);
    FUN_01ab69ac(PTR_DAT_03d26208);
    FUN_01ab69ac(PTR_DAT_03d260a0);
    FUN_01ab69ac(PTR_DAT_03d26210);
    DAT_0412ae33 = 1;
  }
  plVar23 = (long *)PTR_DAT_03cbeeb0;
  local_94[0] = '\0';
  local_b0._0_8_ = 0;
  local_b0._8_8_ = 0;
  local_cc = *param_1;
  lVar12 = *(long *)(param_1 + 8);
  if (local_cc == 0) {
    local_b0 = *(undefined1 (*) [16])(param_1 + 0x14);
    local_cc = -1;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    *param_1 = -1;
    goto UniGLTF_MeshUtility_BoneNormalizer_<>c__DisplayClass5_0__<MapBoneWeight>b__1;
  }
  if (*(int *)(*(long *)PTR_DAT_03cbeeb0 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar6 = FUN_02745e48(0);
  if (*(int *)(*(long *)PTR_DAT_03cc4b20 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar7 = FUN_02784b3c(DAT_00d376e0,0);
  uVar6 = FUN_027483ec(uVar6,uVar7,0);
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  *(undefined8 *)(lVar12 + 0x50) = uVar6;
  do {
    lVar8 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc0328);
    Animancer_AnimancerState__OnSetIsPlaying(lVar8,*(undefined8 *)PTR_DAT_03cc0320);
    plVar13 = (long *)(param_1 + 0xe);
    *plVar13 = lVar8;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar13,lVar8);
    *(undefined1 *)(param_1 + 0x12) = 0;
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar6 = *(undefined8 *)(lVar12 + 0x10);
    local_94[0] = '\0';
    FUN_027e0bd8(uVar6,local_94,0);
    FUN_02fa6018(lVar12);
    if (*(long *)(lVar12 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar8 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03d26200,
                         *(undefined4 *)(*(long *)(lVar12 + 0x38) + 0x18));
    plVar17 = (long *)(param_1 + 10);
    *plVar17 = lVar8;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar17);
    if (*(long *)(lVar12 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_02211100(*(long *)(lVar12 + 0x38),*plVar17,0,*(undefined8 *)PTR_DAT_03d261d8);
    if (*(long *)(lVar12 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar8 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03d26208,
                         *(undefined4 *)(*(long *)(lVar12 + 0x40) + 0x18));
    plVar16 = (long *)(param_1 + 0xc);
    *plVar16 = lVar8;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar16);
    if (*(long *)(lVar12 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_02211100(*(long *)(lVar12 + 0x40),*plVar16,0,*(undefined8 *)PTR_DAT_03d261d0);
    if (*(long *)(lVar12 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar7 = FUN_02fa8174(*(long *)(lVar12 + 0x20),*(undefined4 *)(lVar12 + 0x1c));
    piVar19 = param_1 + 0x10;
    *(undefined8 *)piVar19 = uVar7;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(piVar19);
    puVar2 = PTR_DAT_03cc0318;
    if (*plVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_01b5f01c(*plVar13,*(undefined8 *)piVar19,*(undefined8 *)PTR_DAT_03cc0318);
    if (*(long *)(lVar12 + 0x30) == 0) {
      if (*(long *)(lVar12 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar9 = FUN_02fa61f4();
      if ((uVar9 & 1) == 0) goto LAB_02fa866c;
      if (*(long *)(lVar12 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(int *)(*(long *)(lVar12 + 0x38) + 0x18) != 0) goto LAB_02fa866c;
      if (*(long *)(lVar12 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(int *)(*(long *)(lVar12 + 0x40) + 0x18) != 0) goto LAB_02fa866c;
      if (*(int *)(*plVar23 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar7 = FUN_02745e48(0);
      *(undefined8 *)(lVar12 + 0x50) = uVar7;
      *(undefined1 *)(param_1 + 0x12) = 1;
    }
    else {
LAB_02fa866c:
      puVar3 = PTR_DAT_03d26210;
      lVar8 = *plVar17;
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar22 = *(uint *)(lVar8 + 0x18);
      if (0 < (int)uVar22) {
        uVar21 = 0;
        do {
          if (uVar22 <= uVar21) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          lVar10 = *(long *)(lVar8 + (long)(int)uVar21 * 0x10 + 0x28);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          lVar10 = *(long *)(lVar10 + 0x58);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          lVar18 = *plVar13;
          uVar7 = FUN_02132b44(lVar10,*(undefined8 *)puVar3);
          if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c(uVar7,uVar7);
          }
          FUN_01b5f01c(lVar18,uVar7,*(undefined8 *)puVar2);
          uVar22 = *(uint *)(lVar8 + 0x18);
          uVar21 = uVar21 + 1;
        } while ((int)uVar21 < (int)uVar22);
      }
      lVar8 = *plVar16;
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (0 < (int)*(ulong *)(lVar8 + 0x18)) {
        uVar9 = 0;
        uVar11 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
        puVar20 = (undefined8 *)(lVar8 + 0x30);
        do {
          if (uVar11 <= uVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          if (*plVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          FUN_01b5f01c(*plVar13,*puVar20,*(undefined8 *)puVar2);
          uVar11 = (ulong)*(uint *)(lVar8 + 0x18);
          uVar9 = uVar9 + 1;
          puVar20 = puVar20 + 3;
        } while ((long)uVar9 < (long)(int)*(uint *)(lVar8 + 0x18));
      }
    }
    if ((local_cc < 0) && (local_94[0] != '\0')) {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar6,0);
    }
    lVar8 = *plVar13;
    if (*(int *)(*(long *)PTR_DAT_03cc0330 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    lVar8 = FUN_027f7264(lVar8,0);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    auVar24 = FUN_020a2c64(lVar8,0,*(undefined8 *)PTR_DAT_03cfce10);
    local_b0 = auVar24;
    uVar9 = FUN_02189a30(local_b0,*(undefined8 *)PTR_DAT_03cfce08);
    if ((uVar9 & 1) == 0) {
      *param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 0x14) = local_b0;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0x14,0);
      if (*(int *)(*(long *)PTR_DAT_03cc9270 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01f2e2b8(param_1 + 2,local_b0,param_1,*(undefined8 *)PTR_DAT_03d261c8);
      return;
    }
UniGLTF_MeshUtility_BoneNormalizer_<>c__DisplayClass5_0__<MapBoneWeight>b__1:
    FUN_02189a7c(local_b0,&local_90,*(undefined8 *)PTR_DAT_03cfce00);
    lVar8 = local_90;
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar6 = *(undefined8 *)(lVar12 + 0x10);
    local_94[0] = '\0';
    FUN_027e0bd8(uVar6,local_94,0);
    puVar2 = PTR_DAT_03d0b808;
    if ((char)param_1[0x12] == '\0') {
      if (*(long *)(param_1 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_02215a88(*(long *)(param_1 + 0xe),0,&local_80,*(undefined8 *)PTR_DAT_03d0b808);
      bVar4 = lVar8 == local_80;
LAB_02fa8968:
      puVar3 = PTR_DAT_03d261e0;
      lVar10 = *(long *)(param_1 + 10);
      if (lVar10 == 0) {
LAB_02fa89f0:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar18 = 0;
      uVar22 = 0;
      while ((int)uVar22 < (int)*(uint *)(lVar10 + 0x18)) {
        if (*(uint *)(lVar10 + 0x18) <= uVar22) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        lVar14 = *(long *)(lVar10 + lVar18 + 0x28);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        if (*(long *)(lVar14 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        if (*(long *)(*(long *)(lVar14 + 0x58) + 0x18) != 0) {
          if (*(long *)(lVar12 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          uVar7 = *(undefined8 *)(lVar10 + lVar18 + 0x20);
          local_78 = uVar7;
          lStack_70 = lVar14;
          FUN_022119cc(*(long *)(lVar12 + 0x38),&local_78,*(undefined8 *)puVar3);
          bVar5 = FUN_02fa65e8(lVar12,uVar7,lVar14);
          lVar10 = *(long *)(param_1 + 10);
          bVar4 = bVar4 | bVar5;
        }
        uVar22 = uVar22 + 1;
        lVar18 = lVar18 + 0x10;
        if (lVar10 == 0) goto LAB_02fa89f0;
      }
      if ((bVar4 & 1) != 0) {
        FUN_02fa6268(lVar12);
      }
      plVar23 = (long *)PTR_DAT_03cbeeb0;
      lVar10 = 0;
      uVar22 = 0xffffffff;
      do {
        if (*(long *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        if (*(int *)(*(long *)(param_1 + 0xc) + 0x18) <= (int)(uVar22 + 1)) goto LAB_02fa8acc;
        if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        if (*(long *)(param_1 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        FUN_02215a88(*(long *)(param_1 + 0xe),uVar22 + *(int *)(*(long *)(param_1 + 10) + 0x18) + 2,
                     &local_68,*(undefined8 *)puVar2);
        lVar10 = lVar10 + 0x18;
        uVar22 = uVar22 + 1;
      } while (lVar8 != local_68);
      lVar8 = *(long *)(param_1 + 0xc);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(uint *)(lVar8 + 0x18) <= uVar22) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      if (*(long *)(lVar12 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar8 = lVar8 + lVar10;
      uVar7 = *(undefined8 *)(lVar8 + 8);
      uVar1 = *(undefined8 *)(lVar8 + 0x10);
      local_b8 = *(undefined8 *)(lVar8 + 0x18);
      local_c8 = uVar7;
      uStack_c0 = uVar1;
      FUN_022119cc(*(long *)(lVar12 + 0x40),&local_c8,*(undefined8 *)PTR_DAT_03d261e8);
      FUN_02fa6dd4(lVar12,uVar7,uVar1);
LAB_02fa8acc:
      iVar15 = 0x1a;
    }
    else {
      if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_020a2760(*(long *)(param_1 + 0x10),local_84,*(undefined8 *)PTR_DAT_03ccca78);
      if (local_84[0] != '\0') {
        bVar4 = true;
        goto LAB_02fa8968;
      }
      FUN_02fa7004(lVar12);
      iVar15 = 0x10;
    }
    if ((local_cc < 0) && (local_94[0] != '\0')) {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar6,0);
    }
    if ((iVar15 != 0) && (iVar15 != 0x1a)) {
      if (iVar15 == 0x10) {
        *param_1 = -2;
        if (*(int *)(*(long *)PTR_DAT_03cc9270 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_02679adc(param_1 + 2,0);
      }
      return;
    }
    piVar19 = param_1 + 10;
    piVar19[0] = 0;
    piVar19[1] = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(piVar19,0);
    piVar19 = param_1 + 0xc;
    piVar19[0] = 0;
    piVar19[1] = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(piVar19,0);
    piVar19 = param_1 + 0xe;
    piVar19[0] = 0;
    piVar19[1] = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(piVar19,0);
    piVar19 = param_1 + 0x10;
    piVar19[0] = 0;
    piVar19[1] = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(piVar19,0);
  } while( true );
}


