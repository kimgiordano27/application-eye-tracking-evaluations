/*
FUNCTION_NAME: UniGLTF.MeshUtility.BoneNormalizer.<>c__DisplayClass5_0$$<MapBoneWeight>b__2
ENTRY_POINT: 02fa8944
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


/* WARNING: Removing unreachable block (ram,0x02fa8b74) */
/* WARNING: Removing unreachable block (ram,0x02fa886c) */
/* WARNING: Removing unreachable block (ram,0x02fa8d98) */

void UniGLTF_MeshUtility_BoneNormalizer_<>c__DisplayClass5_0__<MapBoneWeight>b__2(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  byte bVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *plVar10;
  undefined8 unaff_x21;
  undefined8 uVar11;
  long lVar12;
  int iVar13;
  long *plVar14;
  long *plVar15;
  long unaff_x24;
  undefined8 *puVar16;
  undefined8 *unaff_x25;
  uint uVar17;
  uint uVar18;
  long lVar19;
  undefined1 auVar20 [16];
  long in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000038;
  long in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000050;
  undefined8 in_stack_00000058;
  long in_stack_00000060;
  long in_stack_00000068;
  
code_r0x02fa8944:
  if (*(long *)(unaff_x19 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  FUN_02215a88(*(long *)(unaff_x19 + 0xe),0,&stack0x00000050,*unaff_x25);
  bVar4 = unaff_x24 == in_stack_00000050;
LAB_02fa8968:
  puVar1 = PTR_DAT_03d261e0;
  lVar9 = *(long *)(unaff_x19 + 10);
  if (lVar9 == 0) {
LAB_02fa89f0:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar19 = 0;
  uVar18 = 0;
  while ((int)uVar18 < (int)*(uint *)(lVar9 + 0x18)) {
    if (*(uint *)(lVar9 + 0x18) <= uVar18) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    lVar12 = *(long *)(lVar9 + lVar19 + 0x28);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(long *)(lVar12 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(long *)(*(long *)(lVar12 + 0x58) + 0x18) != 0) {
      if (*(long *)(unaff_x20 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      in_stack_00000058 = *(undefined8 *)(lVar9 + lVar19 + 0x20);
      in_stack_00000060 = lVar12;
      FUN_022119cc(*(long *)(unaff_x20 + 0x38),&stack0x00000058,*(undefined8 *)puVar1);
      bVar5 = FUN_02fa65e8();
      lVar9 = *(long *)(unaff_x19 + 10);
      bVar4 = bVar4 | bVar5;
    }
    uVar18 = uVar18 + 1;
    lVar19 = lVar19 + 0x10;
    if (lVar9 == 0) goto LAB_02fa89f0;
  }
  if ((bVar4 & 1) != 0) {
    FUN_02fa6268();
  }
  puVar1 = PTR_DAT_03cbeeb0;
  lVar9 = 0;
  uVar18 = 0xffffffff;
  do {
    if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(int *)(*(long *)(unaff_x19 + 0xc) + 0x18) <= (int)(uVar18 + 1)) goto LAB_02fa8acc;
    if (*(long *)(unaff_x19 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(long *)(unaff_x19 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_02215a88(*(long *)(unaff_x19 + 0xe),uVar18 + *(int *)(*(long *)(unaff_x19 + 10) + 0x18) + 2,
                 &stack0x00000068,*unaff_x25);
    lVar9 = lVar9 + 0x18;
    uVar18 = uVar18 + 1;
  } while (unaff_x24 != in_stack_00000068);
  lVar19 = *(long *)(unaff_x19 + 0xc);
  if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (*(uint *)(lVar19 + 0x18) <= uVar18) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  if (*(long *)(unaff_x20 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar19 = lVar19 + lVar9;
  in_stack_00000008 = *(undefined8 *)(lVar19 + 8);
  in_stack_00000010 = *(undefined8 *)(lVar19 + 0x10);
  in_stack_00000018 = *(undefined8 *)(lVar19 + 0x18);
  FUN_022119cc(*(long *)(unaff_x20 + 0x40),&stack0x00000008,*(undefined8 *)PTR_DAT_03d261e8);
  FUN_02fa6dd4();
LAB_02fa8acc:
  iVar13 = 0x1a;
  do {
    if ((in_stack_00000000 < 0) && (in_stack_00000038._4_1_ != '\0')) {
      OVRManager_<>c__<InitOVRManager>b__424_0(unaff_x21,0);
    }
    if ((iVar13 != 0) && (iVar13 != 0x1a)) {
      if (iVar13 != 0x10) {
        return;
      }
      *unaff_x19 = 0xfffffffe;
      if (*(int *)(*(long *)PTR_DAT_03cc9270 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_02679adc(unaff_x19 + 2,0);
      return;
    }
    *(undefined8 *)(unaff_x19 + 10) = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 10,0);
    *(undefined8 *)(unaff_x19 + 0xc) = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0xc,0);
    *(undefined8 *)(unaff_x19 + 0xe) = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0xe,0);
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x10,0);
    lVar9 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc0328);
    Animancer_AnimancerState__OnSetIsPlaying(lVar9,*(undefined8 *)PTR_DAT_03cc0320);
    plVar10 = (long *)(unaff_x19 + 0xe);
    *plVar10 = lVar9;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar10,lVar9);
    *(undefined1 *)(unaff_x19 + 0x12) = 0;
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar11 = *(undefined8 *)(unaff_x20 + 0x10);
    in_stack_00000038._4_1_ = '\0';
    FUN_027e0bd8(uVar11,(long)&stack0x00000038 + 4,0);
    FUN_02fa6018();
    if (*(long *)(unaff_x20 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar9 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03d26200,
                         *(undefined4 *)(*(long *)(unaff_x20 + 0x38) + 0x18));
    plVar15 = (long *)(unaff_x19 + 10);
    *plVar15 = lVar9;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar15);
    if (*(long *)(unaff_x20 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_02211100(*(long *)(unaff_x20 + 0x38),*plVar15,0,*(undefined8 *)PTR_DAT_03d261d8);
    if (*(long *)(unaff_x20 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar9 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03d26208,
                         *(undefined4 *)(*(long *)(unaff_x20 + 0x40) + 0x18));
    plVar14 = (long *)(unaff_x19 + 0xc);
    *plVar14 = lVar9;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar14);
    if (*(long *)(unaff_x20 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_02211100(*(long *)(unaff_x20 + 0x40),*plVar14,0,*(undefined8 *)PTR_DAT_03d261d0);
    if (*(long *)(unaff_x20 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar6 = FUN_02fa8174(*(long *)(unaff_x20 + 0x20),*(undefined4 *)(unaff_x20 + 0x1c));
    puVar16 = (undefined8 *)(unaff_x19 + 0x10);
    *puVar16 = uVar6;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar16);
    puVar2 = PTR_DAT_03cc0318;
    if (*plVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_01b5f01c(*plVar10,*puVar16,*(undefined8 *)PTR_DAT_03cc0318);
    if (*(long *)(unaff_x20 + 0x30) == 0) {
      if (*(long *)(unaff_x20 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar7 = FUN_02fa61f4();
      if ((uVar7 & 1) == 0) goto LAB_02fa866c;
      if (*(long *)(unaff_x20 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(int *)(*(long *)(unaff_x20 + 0x38) + 0x18) != 0) goto LAB_02fa866c;
      if (*(long *)(unaff_x20 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(int *)(*(long *)(unaff_x20 + 0x40) + 0x18) != 0) goto LAB_02fa866c;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar6 = FUN_02745e48(0);
      *(undefined8 *)(unaff_x20 + 0x50) = uVar6;
      *(undefined1 *)(unaff_x19 + 0x12) = 1;
    }
    else {
LAB_02fa866c:
      puVar3 = PTR_DAT_03d26210;
      lVar9 = *plVar15;
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar18 = *(uint *)(lVar9 + 0x18);
      if (0 < (int)uVar18) {
        uVar17 = 0;
        do {
          if (uVar18 <= uVar17) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          lVar19 = *(long *)(lVar9 + (long)(int)uVar17 * 0x10 + 0x28);
          if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          lVar19 = *(long *)(lVar19 + 0x58);
          if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          lVar12 = *plVar10;
          uVar6 = FUN_02132b44(lVar19,*(undefined8 *)puVar3);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c(uVar6,uVar6);
          }
          FUN_01b5f01c(lVar12,uVar6,*(undefined8 *)puVar2);
          uVar18 = *(uint *)(lVar9 + 0x18);
          uVar17 = uVar17 + 1;
        } while ((int)uVar17 < (int)uVar18);
      }
      lVar9 = *plVar14;
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (0 < (int)*(ulong *)(lVar9 + 0x18)) {
        uVar7 = 0;
        uVar8 = *(ulong *)(lVar9 + 0x18) & 0xffffffff;
        puVar16 = (undefined8 *)(lVar9 + 0x30);
        do {
          if (uVar8 <= uVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          if (*plVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          FUN_01b5f01c(*plVar10,*puVar16,*(undefined8 *)puVar2);
          uVar8 = (ulong)*(uint *)(lVar9 + 0x18);
          uVar7 = uVar7 + 1;
          puVar16 = puVar16 + 3;
        } while ((long)uVar7 < (long)(int)*(uint *)(lVar9 + 0x18));
      }
    }
    if ((in_stack_00000000 < 0) && (in_stack_00000038._4_1_ != '\0')) {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar11,0);
    }
    lVar9 = *plVar10;
    if (*(int *)(*(long *)PTR_DAT_03cc0330 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    lVar9 = FUN_027f7264(lVar9,0);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    auVar20 = FUN_020a2c64(lVar9,0,*(undefined8 *)PTR_DAT_03cfce10);
    _in_stack_00000020 = auVar20;
    uVar7 = FUN_02189a30(&stack0x00000020,*(undefined8 *)PTR_DAT_03cfce08);
    if ((uVar7 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined1 (*) [16])(unaff_x19 + 0x14) = _in_stack_00000020;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x14,0);
      if (*(int *)(*(long *)PTR_DAT_03cc9270 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01f2e2b8(unaff_x19 + 2,&stack0x00000020);
      return;
    }
    FUN_02189a7c(&stack0x00000020,&stack0x00000040,*(undefined8 *)PTR_DAT_03cfce00);
    unaff_x24 = in_stack_00000040;
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    unaff_x21 = *(undefined8 *)(unaff_x20 + 0x10);
    in_stack_00000038._4_1_ = '\0';
    FUN_027e0bd8(unaff_x21,(long)&stack0x00000038 + 4,0);
    unaff_x25 = (undefined8 *)PTR_DAT_03d0b808;
    if (*(char *)(unaff_x19 + 0x12) == '\0') goto code_r0x02fa8944;
    if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_020a2760(*(long *)(unaff_x19 + 0x10),(long)&stack0x00000048 + 4,
                 *(undefined8 *)PTR_DAT_03ccca78);
    if (in_stack_00000048._4_1_ != '\0') break;
    FUN_02fa7004();
    iVar13 = 0x10;
  } while( true );
  bVar4 = true;
  goto LAB_02fa8968;
}


