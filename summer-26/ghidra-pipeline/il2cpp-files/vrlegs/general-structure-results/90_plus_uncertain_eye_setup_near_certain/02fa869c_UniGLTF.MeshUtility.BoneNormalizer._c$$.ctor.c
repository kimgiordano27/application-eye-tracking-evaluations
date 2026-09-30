/*
FUNCTION_NAME: UniGLTF.MeshUtility.BoneNormalizer.<>c$$.ctor
ENTRY_POINT: 02fa869c
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

void UniGLTF_MeshUtility_BoneNormalizer_<>c___ctor(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  byte bVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 unaff_x22;
  long lVar8;
  int iVar9;
  long *unaff_x23;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  long unaff_x25;
  undefined8 *puVar13;
  uint unaff_w26;
  uint uVar14;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  long lVar15;
  undefined1 auVar16 [16];
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
  
code_r0x02fa869c:
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (*(long *)(param_1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar11 = *unaff_x21;
  uVar5 = FUN_02132b44(*(long *)(param_1 + 0x58),*unaff_x27);
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c(uVar5,uVar5);
  }
  FUN_01b5f01c(lVar11,uVar5,*unaff_x28);
  uVar14 = *(uint *)(unaff_x25 + 0x18);
  unaff_w26 = unaff_w26 + 1;
  if ((int)uVar14 <= (int)unaff_w26) {
LAB_02fa86d8:
    lVar11 = *unaff_x23;
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (0 < (int)*(ulong *)(lVar11 + 0x18)) {
      uVar12 = 0;
      uVar6 = *(ulong *)(lVar11 + 0x18) & 0xffffffff;
      puVar13 = (undefined8 *)(lVar11 + 0x30);
      do {
        if (uVar6 <= uVar12) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        if (*unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        FUN_01b5f01c(*unaff_x21,*puVar13,*unaff_x28);
        uVar6 = (ulong)*(uint *)(lVar11 + 0x18);
        uVar12 = uVar12 + 1;
        puVar13 = puVar13 + 3;
      } while ((long)uVar12 < (long)(int)*(uint *)(lVar11 + 0x18));
    }
    do {
      if ((in_stack_00000000 < 0) && (in_stack_00000038._4_1_ != '\0')) {
        OVRManager_<>c__<InitOVRManager>b__424_0(unaff_x22,0);
      }
      lVar11 = *unaff_x21;
      if (*(int *)(*(long *)PTR_DAT_03cc0330 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      lVar11 = FUN_027f7264(lVar11,0);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      auVar16 = FUN_020a2c64(lVar11,0,*(undefined8 *)PTR_DAT_03cfce10);
      _in_stack_00000020 = auVar16;
      uVar12 = FUN_02189a30(&stack0x00000020,*(undefined8 *)PTR_DAT_03cfce08);
      if ((uVar12 & 1) == 0) {
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
      lVar11 = in_stack_00000040;
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
      in_stack_00000038._4_1_ = '\0';
      FUN_027e0bd8(uVar5,(long)&stack0x00000038 + 4,0);
      puVar1 = PTR_DAT_03d0b808;
      if (*(char *)(unaff_x19 + 0x12) == '\0') {
        if (*(long *)(unaff_x19 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        FUN_02215a88(*(long *)(unaff_x19 + 0xe),0,&stack0x00000050,*(undefined8 *)PTR_DAT_03d0b808);
        bVar3 = lVar11 == in_stack_00000050;
LAB_02fa8968:
        puVar2 = PTR_DAT_03d261e0;
        lVar7 = *(long *)(unaff_x19 + 10);
        if (lVar7 == 0) {
LAB_02fa89f0:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        lVar15 = 0;
        uVar14 = 0;
        while ((int)uVar14 < (int)*(uint *)(lVar7 + 0x18)) {
          if (*(uint *)(lVar7 + 0x18) <= uVar14) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          lVar8 = *(long *)(lVar7 + lVar15 + 0x28);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          if (*(long *)(lVar8 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          if (*(long *)(*(long *)(lVar8 + 0x58) + 0x18) != 0) {
            if (*(long *)(unaff_x20 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            in_stack_00000058 = *(undefined8 *)(lVar7 + lVar15 + 0x20);
            in_stack_00000060 = lVar8;
            FUN_022119cc(*(long *)(unaff_x20 + 0x38),&stack0x00000058,*(undefined8 *)puVar2);
            bVar4 = FUN_02fa65e8();
            lVar7 = *(long *)(unaff_x19 + 10);
            bVar3 = bVar3 | bVar4;
          }
          uVar14 = uVar14 + 1;
          lVar15 = lVar15 + 0x10;
          if (lVar7 == 0) goto LAB_02fa89f0;
        }
        if ((bVar3 & 1) != 0) {
          FUN_02fa6268();
        }
        unaff_x29 = (long *)PTR_DAT_03cbeeb0;
        lVar7 = 0;
        uVar14 = 0xffffffff;
        do {
          if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          if (*(int *)(*(long *)(unaff_x19 + 0xc) + 0x18) <= (int)(uVar14 + 1)) goto LAB_02fa8acc;
          if (*(long *)(unaff_x19 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          if (*(long *)(unaff_x19 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          FUN_02215a88(*(long *)(unaff_x19 + 0xe),
                       uVar14 + *(int *)(*(long *)(unaff_x19 + 10) + 0x18) + 2,&stack0x00000068,
                       *(undefined8 *)puVar1);
          lVar7 = lVar7 + 0x18;
          uVar14 = uVar14 + 1;
        } while (lVar11 != in_stack_00000068);
        lVar11 = *(long *)(unaff_x19 + 0xc);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        if (*(uint *)(lVar11 + 0x18) <= uVar14) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        if (*(long *)(unaff_x20 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        lVar11 = lVar11 + lVar7;
        in_stack_00000008 = *(undefined8 *)(lVar11 + 8);
        in_stack_00000010 = *(undefined8 *)(lVar11 + 0x10);
        in_stack_00000018 = *(undefined8 *)(lVar11 + 0x18);
        FUN_022119cc(*(long *)(unaff_x20 + 0x40),&stack0x00000008,*(undefined8 *)PTR_DAT_03d261e8);
        FUN_02fa6dd4();
LAB_02fa8acc:
        iVar9 = 0x1a;
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
        iVar9 = 0x10;
      }
      if ((in_stack_00000000 < 0) && (in_stack_00000038._4_1_ != '\0')) {
        OVRManager_<>c__<InitOVRManager>b__424_0(uVar5,0);
      }
      if ((iVar9 != 0) && (iVar9 != 0x1a)) {
        if (iVar9 == 0x10) {
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
      lVar11 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc0328);
      Animancer_AnimancerState__OnSetIsPlaying(lVar11,*(undefined8 *)PTR_DAT_03cc0320);
      unaff_x21 = (long *)(unaff_x19 + 0xe);
      *unaff_x21 = lVar11;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x21,lVar11);
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
      lVar11 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03d26200,
                            *(undefined4 *)(*(long *)(unaff_x20 + 0x38) + 0x18));
      plVar10 = (long *)(unaff_x19 + 10);
      *plVar10 = lVar11;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar10);
      if (*(long *)(unaff_x20 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_02211100(*(long *)(unaff_x20 + 0x38),*plVar10,0,*(undefined8 *)PTR_DAT_03d261d8);
      if (*(long *)(unaff_x20 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar11 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03d26208,
                            *(undefined4 *)(*(long *)(unaff_x20 + 0x40) + 0x18));
      unaff_x23 = (long *)(unaff_x19 + 0xc);
      *unaff_x23 = lVar11;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x23);
      if (*(long *)(unaff_x20 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_02211100(*(long *)(unaff_x20 + 0x40),*unaff_x23,0,*(undefined8 *)PTR_DAT_03d261d0);
      if (*(long *)(unaff_x20 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar5 = FUN_02fa8174(*(long *)(unaff_x20 + 0x20),*(undefined4 *)(unaff_x20 + 0x1c));
      puVar13 = (undefined8 *)(unaff_x19 + 0x10);
      *puVar13 = uVar5;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar13);
      unaff_x28 = (undefined8 *)PTR_DAT_03cc0318;
      if (*unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_01b5f01c(*unaff_x21,*puVar13,*(undefined8 *)PTR_DAT_03cc0318);
      if (*(long *)(unaff_x20 + 0x30) != 0) goto LAB_02fa866c;
      if (*(long *)(unaff_x20 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar12 = FUN_02fa61f4();
      if ((uVar12 & 1) == 0) goto LAB_02fa866c;
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
      uVar5 = FUN_02745e48(0);
      *(undefined8 *)(unaff_x20 + 0x50) = uVar5;
      *(undefined1 *)(unaff_x19 + 0x12) = 1;
    } while( true );
  }
  goto LAB_02fa868c;
LAB_02fa866c:
  unaff_x25 = *plVar10;
  if (unaff_x25 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar14 = *(uint *)(unaff_x25 + 0x18);
  if (0 < (int)uVar14) goto code_r0x02fa8680;
  goto LAB_02fa86d8;
code_r0x02fa8680:
  unaff_w26 = 0;
  unaff_x27 = (undefined8 *)PTR_DAT_03d26210;
LAB_02fa868c:
  if (uVar14 <= unaff_w26) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  param_1 = *(long *)(unaff_x25 + (long)(int)unaff_w26 * 0x10 + 0x28);
  goto code_r0x02fa869c;
}


