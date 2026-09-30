/*
FUNCTION_NAME: UniGLTF.MeshUtility.BoneNormalizer.BlendShapeReport.<>c$$.cctor
ENTRY_POINT: 02fa85bc
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

void UniGLTF_MeshUtility_BoneNormalizer_BlendShapeReport_<>c___cctor
               (undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 unaff_x22;
  long lVar10;
  int iVar11;
  long *plVar12;
  long *unaff_x24;
  long lVar13;
  undefined8 *puVar14;
  uint uVar15;
  uint uVar16;
  long *unaff_x29;
  undefined1 auVar17 [16];
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
  
  do {
    lVar5 = FUN_01ab6a94(param_1,param_2);
    plVar12 = (long *)(unaff_x19 + 0xc);
    *plVar12 = lVar5;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar12);
    if (*(long *)(unaff_x20 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_02211100(*(long *)(unaff_x20 + 0x40),*plVar12,0,*(undefined8 *)PTR_DAT_03d261d0);
    if (*(long *)(unaff_x20 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar6 = FUN_02fa8174(*(long *)(unaff_x20 + 0x20),*(undefined4 *)(unaff_x20 + 0x1c));
    puVar14 = (undefined8 *)(unaff_x19 + 0x10);
    *puVar14 = uVar6;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar14);
    puVar1 = PTR_DAT_03cc0318;
    if (*unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_01b5f01c(*unaff_x21,*puVar14,*(undefined8 *)PTR_DAT_03cc0318);
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
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar6 = FUN_02745e48(0);
      *(undefined8 *)(unaff_x20 + 0x50) = uVar6;
      *(undefined1 *)(unaff_x19 + 0x12) = 1;
    }
    else {
LAB_02fa866c:
      puVar2 = PTR_DAT_03d26210;
      lVar5 = *unaff_x24;
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar16 = *(uint *)(lVar5 + 0x18);
      if (0 < (int)uVar16) {
        uVar15 = 0;
        do {
          if (uVar16 <= uVar15) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          lVar8 = *(long *)(lVar5 + (long)(int)uVar15 * 0x10 + 0x28);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          lVar8 = *(long *)(lVar8 + 0x58);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          lVar13 = *unaff_x21;
          uVar6 = FUN_02132b44(lVar8,*(undefined8 *)puVar2);
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c(uVar6,uVar6);
          }
          FUN_01b5f01c(lVar13,uVar6,*(undefined8 *)puVar1);
          uVar16 = *(uint *)(lVar5 + 0x18);
          uVar15 = uVar15 + 1;
        } while ((int)uVar15 < (int)uVar16);
      }
      lVar5 = *plVar12;
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (0 < (int)*(ulong *)(lVar5 + 0x18)) {
        uVar7 = 0;
        uVar9 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
        puVar14 = (undefined8 *)(lVar5 + 0x30);
        do {
          if (uVar9 <= uVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          if (*unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          FUN_01b5f01c(*unaff_x21,*puVar14,*(undefined8 *)puVar1);
          uVar9 = (ulong)*(uint *)(lVar5 + 0x18);
          uVar7 = uVar7 + 1;
          puVar14 = puVar14 + 3;
        } while ((long)uVar7 < (long)(int)*(uint *)(lVar5 + 0x18));
      }
    }
    if ((in_stack_00000000 < 0) && (in_stack_00000038._4_1_ != '\0')) {
      OVRManager_<>c__<InitOVRManager>b__424_0(unaff_x22,0);
    }
    lVar5 = *unaff_x21;
    if (*(int *)(*(long *)PTR_DAT_03cc0330 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    lVar5 = FUN_027f7264(lVar5,0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    auVar17 = FUN_020a2c64(lVar5,0,*(undefined8 *)PTR_DAT_03cfce10);
    _in_stack_00000020 = auVar17;
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
    lVar5 = in_stack_00000040;
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
    in_stack_00000038._4_1_ = '\0';
    FUN_027e0bd8(uVar6,(long)&stack0x00000038 + 4,0);
    puVar1 = PTR_DAT_03d0b808;
    if (*(char *)(unaff_x19 + 0x12) == '\0') {
      if (*(long *)(unaff_x19 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_02215a88(*(long *)(unaff_x19 + 0xe),0,&stack0x00000050,*(undefined8 *)PTR_DAT_03d0b808);
      bVar3 = lVar5 == in_stack_00000050;
LAB_02fa8968:
      puVar2 = PTR_DAT_03d261e0;
      lVar8 = *(long *)(unaff_x19 + 10);
      if (lVar8 == 0) {
LAB_02fa89f0:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar13 = 0;
      uVar16 = 0;
      while ((int)uVar16 < (int)*(uint *)(lVar8 + 0x18)) {
        if (*(uint *)(lVar8 + 0x18) <= uVar16) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        lVar10 = *(long *)(lVar8 + lVar13 + 0x28);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        if (*(long *)(lVar10 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        if (*(long *)(*(long *)(lVar10 + 0x58) + 0x18) != 0) {
          if (*(long *)(unaff_x20 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          in_stack_00000058 = *(undefined8 *)(lVar8 + lVar13 + 0x20);
          in_stack_00000060 = lVar10;
          FUN_022119cc(*(long *)(unaff_x20 + 0x38),&stack0x00000058,*(undefined8 *)puVar2);
          bVar4 = FUN_02fa65e8();
          lVar8 = *(long *)(unaff_x19 + 10);
          bVar3 = bVar3 | bVar4;
        }
        uVar16 = uVar16 + 1;
        lVar13 = lVar13 + 0x10;
        if (lVar8 == 0) goto LAB_02fa89f0;
      }
      if ((bVar3 & 1) != 0) {
        FUN_02fa6268();
      }
      unaff_x29 = (long *)PTR_DAT_03cbeeb0;
      lVar8 = 0;
      uVar16 = 0xffffffff;
      do {
        if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        if (*(int *)(*(long *)(unaff_x19 + 0xc) + 0x18) <= (int)(uVar16 + 1)) goto LAB_02fa8acc;
        if (*(long *)(unaff_x19 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        if (*(long *)(unaff_x19 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        FUN_02215a88(*(long *)(unaff_x19 + 0xe),
                     uVar16 + *(int *)(*(long *)(unaff_x19 + 10) + 0x18) + 2,&stack0x00000068,
                     *(undefined8 *)puVar1);
        lVar8 = lVar8 + 0x18;
        uVar16 = uVar16 + 1;
      } while (lVar5 != in_stack_00000068);
      lVar5 = *(long *)(unaff_x19 + 0xc);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(uint *)(lVar5 + 0x18) <= uVar16) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      if (*(long *)(unaff_x20 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar5 = lVar5 + lVar8;
      in_stack_00000008 = *(undefined8 *)(lVar5 + 8);
      in_stack_00000010 = *(undefined8 *)(lVar5 + 0x10);
      in_stack_00000018 = *(undefined8 *)(lVar5 + 0x18);
      FUN_022119cc(*(long *)(unaff_x20 + 0x40),&stack0x00000008,*(undefined8 *)PTR_DAT_03d261e8);
      FUN_02fa6dd4();
LAB_02fa8acc:
      iVar11 = 0x1a;
    }
    else {
      if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_020a2760(*(long *)(unaff_x19 + 0x10),(long)&stack0x00000048 + 4,
                   *(undefined8 *)PTR_DAT_03ccca78);
      if (in_stack_00000048._4_1_ != '\0') {
        bVar3 = true;
        goto LAB_02fa8968;
      }
      FUN_02fa7004();
      iVar11 = 0x10;
    }
    if ((in_stack_00000000 < 0) && (in_stack_00000038._4_1_ != '\0')) {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar6,0);
    }
    if ((iVar11 != 0) && (iVar11 != 0x1a)) {
      if (iVar11 == 0x10) {
        *unaff_x19 = 0xfffffffe;
        if (*(int *)(*(long *)PTR_DAT_03cc9270 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_02679adc(unaff_x19 + 2,0);
      }
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
    lVar5 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc0328);
    Animancer_AnimancerState__OnSetIsPlaying(lVar5,*(undefined8 *)PTR_DAT_03cc0320);
    unaff_x21 = (long *)(unaff_x19 + 0xe);
    *unaff_x21 = lVar5;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x21,lVar5);
    *(undefined1 *)(unaff_x19 + 0x12) = 0;
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    unaff_x22 = *(undefined8 *)(unaff_x20 + 0x10);
    in_stack_00000038._4_1_ = '\0';
    FUN_027e0bd8(unaff_x22,(long)&stack0x00000038 + 4,0);
    FUN_02fa6018();
    if (*(long *)(unaff_x20 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar5 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03d26200,
                         *(undefined4 *)(*(long *)(unaff_x20 + 0x38) + 0x18));
    unaff_x24 = (long *)(unaff_x19 + 10);
    *unaff_x24 = lVar5;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x24);
    if (*(long *)(unaff_x20 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_02211100(*(long *)(unaff_x20 + 0x38),*unaff_x24,0,*(undefined8 *)PTR_DAT_03d261d8);
    if (*(long *)(unaff_x20 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    param_2 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x40) + 0x18);
    param_1 = *(undefined8 *)PTR_DAT_03d26208;
  } while( true );
}


