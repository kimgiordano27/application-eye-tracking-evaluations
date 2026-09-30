/*
FUNCTION_NAME: UniGLTF.MeshUtility.BoneNormalizer.BlendShapeReport.BlendShapeStat$$ToString
ENTRY_POINT: 02fa83a8
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

void UniGLTF_MeshUtility_BoneNormalizer_BlendShapeReport_BlendShapeStat__ToString(void)

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
  int *unaff_x19;
  long unaff_x20;
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
  int iStack0000000000000004;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  char cStack000000000000003c;
  long in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000050;
  undefined8 in_stack_00000058;
  long in_stack_00000060;
  long in_stack_00000068;
  
  FUN_01ab69ac();
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
  *(undefined1 *)(unaff_x20 + 0xe33) = 1;
  plVar23 = (long *)PTR_DAT_03cbeeb0;
  cStack000000000000003c = '\0';
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  iStack0000000000000004 = *unaff_x19;
  lVar12 = *(long *)(unaff_x19 + 8);
  if (iStack0000000000000004 == 0) {
    _in_stack_00000020 = *(undefined1 (*) [16])(unaff_x19 + 0x14);
    iStack0000000000000004 = -1;
    unaff_x19[0x14] = 0;
    unaff_x19[0x15] = 0;
    unaff_x19[0x16] = 0;
    unaff_x19[0x17] = 0;
    *unaff_x19 = -1;
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
                    /* try { // try from 02fa8504 to 030a8697 has its CatchHandler @ 02fa8504
                       catch() { ... } // from try @ 02fa8504 with catch @ 02fa8504
                       catch() { ... } // from try @ 02fa86a8 with catch @ 02fa8504
                       catch() { ... } // from try @ 02fa86f4 with catch @ 02fa8504
                       catch() { ... } // from try @ 02fa8850 with catch @ 02fa8504
                       catch() { ... } // from try @ 02fa8890 with catch @ 02fa8504 */
    Animancer_AnimancerState__OnSetIsPlaying(lVar8,*(undefined8 *)PTR_DAT_03cc0320);
    plVar13 = (long *)(unaff_x19 + 0xe);
    *plVar13 = lVar8;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar13,lVar8);
    *(undefined1 *)(unaff_x19 + 0x12) = 0;
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar6 = *(undefined8 *)(lVar12 + 0x10);
    cStack000000000000003c = '\0';
    FUN_027e0bd8(uVar6,&stack0x0000003c,0);
    FUN_02fa6018(lVar12);
    if (*(long *)(lVar12 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar8 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03d26200,
                         *(undefined4 *)(*(long *)(lVar12 + 0x38) + 0x18));
    plVar17 = (long *)(unaff_x19 + 10);
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
    plVar16 = (long *)(unaff_x19 + 0xc);
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
    piVar19 = unaff_x19 + 0x10;
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
      *(undefined1 *)(unaff_x19 + 0x12) = 1;
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
    if ((iStack0000000000000004 < 0) && (cStack000000000000003c != '\0')) {
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
    _in_stack_00000020 = auVar24;
    uVar9 = FUN_02189a30(&stack0x00000020,*(undefined8 *)PTR_DAT_03cfce08);
    if ((uVar9 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined1 (*) [16])(unaff_x19 + 0x14) = _in_stack_00000020;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x14,0);
      if (*(int *)(*(long *)PTR_DAT_03cc9270 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01f2e2b8(unaff_x19 + 2,&stack0x00000020);
      return;
    }
UniGLTF_MeshUtility_BoneNormalizer_<>c__DisplayClass5_0__<MapBoneWeight>b__1:
    FUN_02189a7c(&stack0x00000020,&stack0x00000040,*(undefined8 *)PTR_DAT_03cfce00);
    lVar8 = in_stack_00000040;
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar6 = *(undefined8 *)(lVar12 + 0x10);
    cStack000000000000003c = '\0';
    FUN_027e0bd8(uVar6,&stack0x0000003c,0);
    puVar2 = PTR_DAT_03d0b808;
    if ((char)unaff_x19[0x12] == '\0') {
      if (*(long *)(unaff_x19 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_02215a88(*(long *)(unaff_x19 + 0xe),0,&stack0x00000050,*(undefined8 *)PTR_DAT_03d0b808);
      bVar4 = lVar8 == in_stack_00000050;
LAB_02fa8968:
      puVar3 = PTR_DAT_03d261e0;
      lVar10 = *(long *)(unaff_x19 + 10);
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
          in_stack_00000058 = uVar7;
          in_stack_00000060 = lVar14;
          FUN_022119cc(*(long *)(lVar12 + 0x38),&stack0x00000058,*(undefined8 *)puVar3);
          bVar5 = FUN_02fa65e8(lVar12,uVar7,lVar14);
          lVar10 = *(long *)(unaff_x19 + 10);
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
        if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        if (*(int *)(*(long *)(unaff_x19 + 0xc) + 0x18) <= (int)(uVar22 + 1)) goto LAB_02fa8acc;
        if (*(long *)(unaff_x19 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        if (*(long *)(unaff_x19 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        FUN_02215a88(*(long *)(unaff_x19 + 0xe),
                     uVar22 + *(int *)(*(long *)(unaff_x19 + 10) + 0x18) + 2,&stack0x00000068,
                     *(undefined8 *)puVar2);
        lVar10 = lVar10 + 0x18;
        uVar22 = uVar22 + 1;
      } while (lVar8 != in_stack_00000068);
      lVar8 = *(long *)(unaff_x19 + 0xc);
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
      in_stack_00000018 = *(undefined8 *)(lVar8 + 0x18);
      in_stack_00000008 = uVar7;
      in_stack_00000010 = uVar1;
      FUN_022119cc(*(long *)(lVar12 + 0x40),&stack0x00000008,*(undefined8 *)PTR_DAT_03d261e8);
      FUN_02fa6dd4(lVar12,uVar7,uVar1);
LAB_02fa8acc:
      iVar15 = 0x1a;
    }
    else {
      if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_020a2760(*(long *)(unaff_x19 + 0x10),(long)&stack0x00000048 + 4,
                   *(undefined8 *)PTR_DAT_03ccca78);
      if (in_stack_00000048._4_1_ != '\0') {
        bVar4 = true;
        goto LAB_02fa8968;
      }
      FUN_02fa7004(lVar12);
      iVar15 = 0x10;
    }
    if ((iStack0000000000000004 < 0) && (cStack000000000000003c != '\0')) {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar6,0);
    }
    if ((iVar15 != 0) && (iVar15 != 0x1a)) {
      if (iVar15 == 0x10) {
        *unaff_x19 = -2;
        if (*(int *)(*(long *)PTR_DAT_03cc9270 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_02679adc(unaff_x19 + 2,0);
      }
      return;
    }
    piVar19 = unaff_x19 + 10;
    piVar19[0] = 0;
    piVar19[1] = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(piVar19,0);
    piVar19 = unaff_x19 + 0xc;
    piVar19[0] = 0;
    piVar19[1] = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(piVar19,0);
    piVar19 = unaff_x19 + 0xe;
    piVar19[0] = 0;
    piVar19[1] = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(piVar19,0);
    piVar19 = unaff_x19 + 0x10;
    piVar19[0] = 0;
    piVar19[1] = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(piVar19,0);
  } while( true );
}


