/*
FUNCTION_NAME: UniGLTF.MeshUtility.MeshExtensions.<>c$$.cctor
ENTRY_POINT: 02fa8c08
PROGRAM: vrlegs-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x02fa8b74) */
/* WARNING: Removing unreachable block (ram,0x02fa886c) */
/* WARNING: Removing unreachable block (ram,0x02fa8dc0) */

void UniGLTF_MeshUtility_MeshExtensions_<>c___cctor(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  byte bVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *plVar12;
  undefined8 unaff_x21;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  long *plVar17;
  long *plVar18;
  long lVar19;
  uint uVar20;
  uint uVar21;
  undefined1 auVar22 [16];
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
  
  if (param_2 != 1) {
    if ((in_stack_00000000 < 0) && (in_stack_00000038._4_1_ != '\0')) {
      OVRManager_<>c__<InitOVRManager>b__424_0();
    }
    if (param_2 == 1) {
      puVar8 = (undefined8 *)__cxa_begin_catch(param_1);
      uVar13 = thunk_FUN_01a6ca08(PTR_DAT_03cbdd48);
      uVar6 = thunk_FUN_01a6848c(uVar13,*(undefined8 *)*puVar8);
      if ((uVar6 & 1) != 0) {
        uVar13 = *puVar8;
        __cxa_end_catch();
        *unaff_x19 = 0xfffffffe;
        lVar15 = thunk_FUN_01a6ca08(PTR_DAT_03cc9270);
        if (*(int *)(lVar15 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_02679b80(unaff_x19 + 2,uVar13,0);
        return;
      }
      puVar9 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar9 = *puVar8;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar9,&PTR_PTR_03abd138,0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01b3fef0(param_1);
  }
  plVar7 = (long *)__cxa_begin_catch(param_1);
  lVar15 = *plVar7;
  __cxa_end_catch();
  iVar16 = 0;
  plVar7 = (long *)PTR_DAT_03cbeeb0;
LAB_02fa8c44:
  do {
    if ((in_stack_00000000 < 0) && (in_stack_00000038._4_1_ != '\0')) {
      OVRManager_<>c__<InitOVRManager>b__424_0(unaff_x21,0);
    }
    if (lVar15 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01a28d1c(lVar15);
    }
    if ((iVar16 != 0) && (iVar16 != 0x1a)) {
      if (iVar16 != 0x10) {
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
    lVar15 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc0328);
    Animancer_AnimancerState__OnSetIsPlaying(lVar15,*(undefined8 *)PTR_DAT_03cc0320);
    plVar12 = (long *)(unaff_x19 + 0xe);
    *plVar12 = lVar15;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar12,lVar15);
    *(undefined1 *)(unaff_x19 + 0x12) = 0;
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar13 = *(undefined8 *)(unaff_x20 + 0x10);
    in_stack_00000038._4_1_ = '\0';
    FUN_027e0bd8(uVar13,(long)&stack0x00000038 + 4,0);
    FUN_02fa6018();
    if (*(long *)(unaff_x20 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar15 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03d26200,
                          *(undefined4 *)(*(long *)(unaff_x20 + 0x38) + 0x18));
    plVar18 = (long *)(unaff_x19 + 10);
    *plVar18 = lVar15;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar18);
    if (*(long *)(unaff_x20 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_02211100(*(long *)(unaff_x20 + 0x38),*plVar18,0,*(undefined8 *)PTR_DAT_03d261d8);
    if (*(long *)(unaff_x20 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar15 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03d26208,
                          *(undefined4 *)(*(long *)(unaff_x20 + 0x40) + 0x18));
    plVar17 = (long *)(unaff_x19 + 0xc);
    *plVar17 = lVar15;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar17);
    if (*(long *)(unaff_x20 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_02211100(*(long *)(unaff_x20 + 0x40),*plVar17,0,*(undefined8 *)PTR_DAT_03d261d0);
    if (*(long *)(unaff_x20 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar5 = FUN_02fa8174(*(long *)(unaff_x20 + 0x20),*(undefined4 *)(unaff_x20 + 0x1c));
    puVar8 = (undefined8 *)(unaff_x19 + 0x10);
    *puVar8 = uVar5;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar8);
    puVar1 = PTR_DAT_03cc0318;
    if (*plVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_01b5f01c(*plVar12,*puVar8,*(undefined8 *)PTR_DAT_03cc0318);
    if (*(long *)(unaff_x20 + 0x30) == 0) {
      if (*(long *)(unaff_x20 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar6 = FUN_02fa61f4();
      if ((uVar6 & 1) == 0) goto LAB_02fa866c;
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
      if (*(int *)(*plVar7 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar5 = FUN_02745e48(0);
      *(undefined8 *)(unaff_x20 + 0x50) = uVar5;
      *(undefined1 *)(unaff_x19 + 0x12) = 1;
    }
    else {
LAB_02fa866c:
      puVar2 = PTR_DAT_03d26210;
      lVar15 = *plVar18;
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar21 = *(uint *)(lVar15 + 0x18);
      if (0 < (int)uVar21) {
        uVar20 = 0;
        do {
          if (uVar21 <= uVar20) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          lVar10 = *(long *)(lVar15 + (long)(int)uVar20 * 0x10 + 0x28);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          lVar10 = *(long *)(lVar10 + 0x58);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          lVar19 = *plVar12;
          uVar5 = FUN_02132b44(lVar10,*(undefined8 *)puVar2);
          if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c(uVar5,uVar5);
          }
          FUN_01b5f01c(lVar19,uVar5,*(undefined8 *)puVar1);
          uVar21 = *(uint *)(lVar15 + 0x18);
          uVar20 = uVar20 + 1;
        } while ((int)uVar20 < (int)uVar21);
      }
      lVar15 = *plVar17;
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (0 < (int)*(ulong *)(lVar15 + 0x18)) {
        uVar6 = 0;
        uVar11 = *(ulong *)(lVar15 + 0x18) & 0xffffffff;
        puVar8 = (undefined8 *)(lVar15 + 0x30);
        do {
          if (uVar11 <= uVar6) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          if (*plVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          FUN_01b5f01c(*plVar12,*puVar8,*(undefined8 *)puVar1);
          uVar11 = (ulong)*(uint *)(lVar15 + 0x18);
          uVar6 = uVar6 + 1;
          puVar8 = puVar8 + 3;
        } while ((long)uVar6 < (long)(int)*(uint *)(lVar15 + 0x18));
      }
    }
    if ((in_stack_00000000 < 0) && (in_stack_00000038._4_1_ != '\0')) {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar13,0);
    }
    lVar15 = *plVar12;
    if (*(int *)(*(long *)PTR_DAT_03cc0330 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    lVar15 = FUN_027f7264(lVar15,0);
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    auVar22 = FUN_020a2c64(lVar15,0,*(undefined8 *)PTR_DAT_03cfce10);
    _in_stack_00000020 = auVar22;
    uVar6 = FUN_02189a30(&stack0x00000020,*(undefined8 *)PTR_DAT_03cfce08);
    if ((uVar6 & 1) == 0) {
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
    lVar15 = in_stack_00000040;
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    unaff_x21 = *(undefined8 *)(unaff_x20 + 0x10);
    in_stack_00000038._4_1_ = '\0';
    FUN_027e0bd8(unaff_x21,(long)&stack0x00000038 + 4,0);
    puVar1 = PTR_DAT_03d0b808;
    if (*(char *)(unaff_x19 + 0x12) == '\0') {
      if (*(long *)(unaff_x19 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_02215a88(*(long *)(unaff_x19 + 0xe),0,&stack0x00000050,*(undefined8 *)PTR_DAT_03d0b808);
      bVar3 = lVar15 == in_stack_00000050;
    }
    else {
      if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_020a2760(*(long *)(unaff_x19 + 0x10),(long)&stack0x00000048 + 4,
                   *(undefined8 *)PTR_DAT_03ccca78);
      if (in_stack_00000048._4_1_ == '\0') {
        FUN_02fa7004();
        lVar15 = 0;
        iVar16 = 0x10;
        goto LAB_02fa8c44;
      }
      bVar3 = true;
    }
    puVar2 = PTR_DAT_03d261e0;
    lVar10 = *(long *)(unaff_x19 + 10);
    if (lVar10 == 0) {
LAB_02fa89f0:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar19 = 0;
    uVar21 = 0;
    while ((int)uVar21 < (int)*(uint *)(lVar10 + 0x18)) {
      if (*(uint *)(lVar10 + 0x18) <= uVar21) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      lVar14 = *(long *)(lVar10 + lVar19 + 0x28);
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(long *)(lVar14 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(long *)(*(long *)(lVar14 + 0x58) + 0x18) != 0) {
        if (*(long *)(unaff_x20 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        in_stack_00000058 = *(undefined8 *)(lVar10 + lVar19 + 0x20);
        in_stack_00000060 = lVar14;
        FUN_022119cc(*(long *)(unaff_x20 + 0x38),&stack0x00000058,*(undefined8 *)puVar2);
        bVar4 = FUN_02fa65e8();
        lVar10 = *(long *)(unaff_x19 + 10);
        bVar3 = bVar3 | bVar4;
      }
      uVar21 = uVar21 + 1;
      lVar19 = lVar19 + 0x10;
      if (lVar10 == 0) goto LAB_02fa89f0;
    }
    if ((bVar3 & 1) != 0) {
      FUN_02fa6268();
    }
    plVar7 = (long *)PTR_DAT_03cbeeb0;
    lVar10 = 0;
    uVar21 = 0xffffffff;
    do {
      if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(int *)(*(long *)(unaff_x19 + 0xc) + 0x18) <= (int)(uVar21 + 1)) goto LAB_02fa8acc;
      if (*(long *)(unaff_x19 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(long *)(unaff_x19 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_02215a88(*(long *)(unaff_x19 + 0xe),
                   uVar21 + *(int *)(*(long *)(unaff_x19 + 10) + 0x18) + 2,&stack0x00000068,
                   *(undefined8 *)puVar1);
      lVar10 = lVar10 + 0x18;
      uVar21 = uVar21 + 1;
    } while (lVar15 != in_stack_00000068);
    lVar15 = *(long *)(unaff_x19 + 0xc);
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(uint *)(lVar15 + 0x18) <= uVar21) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    if (*(long *)(unaff_x20 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar15 = lVar15 + lVar10;
    in_stack_00000008 = *(undefined8 *)(lVar15 + 8);
    in_stack_00000010 = *(undefined8 *)(lVar15 + 0x10);
    in_stack_00000018 = *(undefined8 *)(lVar15 + 0x18);
    FUN_022119cc(*(long *)(unaff_x20 + 0x40),&stack0x00000008,*(undefined8 *)PTR_DAT_03d261e8);
    FUN_02fa6dd4();
LAB_02fa8acc:
    lVar15 = 0;
    iVar16 = 0x1a;
  } while( true );
}


