/*
FUNCTION_NAME: UniGLTF.GltfTextureImporter.<>c__DisplayClass8_1$$<TryCreateStandard>b__0
ENTRY_POINT: 02f9f7c8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x02fa00f0) */
/* WARNING: Removing unreachable block (ram,0x02f9f854) */
/* WARNING: Removing unreachable block (ram,0x02f9f85c) */
/* WARNING: Removing unreachable block (ram,0x02f9f860) */
/* WARNING: Removing unreachable block (ram,0x02fa0148) */
/* WARNING: Removing unreachable block (ram,0x02f9fac8) */
/* WARNING: Removing unreachable block (ram,0x02f9f8e8) */

void UniGLTF_GltfTextureImporter_<>c__DisplayClass8_1__<TryCreateStandard>b__0(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  byte bVar3;
  byte bVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  int iVar10;
  int iVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  int unaff_w26;
  long *plVar15;
  undefined1 auVar16 [16];
  undefined8 in_stack_00000010;
  byte bStack0000000000000018;
  byte bStack0000000000000019;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  long in_stack_00000078;
  undefined8 in_stack_00000088;
  
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  if (*(long *)(unaff_x20 + 0x110) != 0) {
    uVar6 = FUN_02eb0e18(*(long *)(unaff_x20 + 0x110),0);
    *(undefined8 *)(unaff_x20 + 0xf8) = uVar6;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  }
  *(undefined8 *)(unaff_x20 + 0xb0) = *(undefined8 *)(unaff_x20 + 0xa8);
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  uVar6 = UniGLTF_GlbLowLevelParser__FixNameUnique();
  *unaff_x21 = uVar6;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  auVar2._8_8_ = in_stack_00000068;
  auVar2._0_8_ = in_stack_00000060;
  auVar1._8_8_ = in_stack_00000038;
  auVar1._0_8_ = in_stack_00000030;
  auVar16._8_8_ = in_stack_00000058;
  auVar16._0_8_ = in_stack_00000050;
  uVar6 = 0;
  if ((unaff_w26 < 0) &&
     (_in_stack_00000050 = auVar16, _in_stack_00000030 = auVar1, _in_stack_00000060 = auVar2,
     in_stack_00000070._4_1_ != '\0')) {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  do {
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x10,0);
    *(undefined8 *)(unaff_x19 + 0x12) = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x12,0);
    *(undefined8 *)(unaff_x19 + 0x14) = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x14,0);
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
    *(undefined2 *)(unaff_x19 + 0x16) = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x18,0);
    *(undefined8 *)(unaff_x19 + 0x1a) = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x1a,0);
    switch(unaff_w26) {
    case 0:
      _in_stack_00000060 = *(undefined1 (*) [16])(unaff_x19 + 0x1c);
      unaff_w26 = -1;
      *(undefined8 *)(unaff_x19 + 0x1c) = 0;
      *(undefined8 *)(unaff_x19 + 0x1e) = 0;
      *unaff_x19 = 0xffffffff;
      break;
    case 1:
      _in_stack_00000050 = *(undefined1 (*) [16])(unaff_x19 + 0x20);
      unaff_w26 = -1;
      *(undefined8 *)(unaff_x19 + 0x20) = 0;
      *(undefined8 *)(unaff_x19 + 0x22) = 0;
      *unaff_x19 = 0xffffffff;
      goto LAB_02f9fcc8;
    case 2:
      in_stack_00000048 = *(undefined8 *)(unaff_x19 + 0x24);
      unaff_w26 = -1;
      *(undefined8 *)(unaff_x19 + 0x24) = 0;
      *unaff_x19 = 0xffffffff;
      goto LAB_02f9fd14;
    case 3:
      _in_stack_00000030 = *(undefined1 (*) [16])(unaff_x19 + 0x26);
      unaff_w26 = -1;
      *(undefined8 *)(unaff_x19 + 0x26) = 0;
      *(undefined8 *)(unaff_x19 + 0x28) = 0;
      *unaff_x19 = 0xffffffff;
      goto LAB_02f9fd88;
    default:
      if (*(int *)(*(long *)PTR_DAT_03cc9e10 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_027d7fa0(unaff_x19 + 10,0);
      if (*(long *)(unaff_x19 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar8 = FUN_02eb0dc8(*(long *)(unaff_x19 + 0xe),0);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      auVar16 = FUN_020a2c64(lVar8,0,*(undefined8 *)PTR_DAT_03d1f9f8);
      _in_stack_00000060 = auVar16;
      uVar9 = FUN_02189a30(&stack0x00000060,*(undefined8 *)PTR_DAT_03d1f9f0);
      if ((uVar9 & 1) == 0) {
        *unaff_x19 = 0;
        *(undefined1 (*) [16])(unaff_x19 + 0x1c) = _in_stack_00000060;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x1c,0);
        if (*(int *)(*(long *)PTR_DAT_03d25bc0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01f07574(unaff_x19 + 2,&stack0x00000060);
        return;
      }
    }
    FUN_02189a7c(&stack0x00000060,&stack0x00000078,*(undefined8 *)PTR_DAT_03d1f9e8);
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    plVar12 = (long *)(unaff_x20 + 0xf8);
    *plVar12 = in_stack_00000078;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar12);
    if (*plVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar8 = FUN_02eb3698(*plVar12,*(undefined8 *)(unaff_x19 + 10),0);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    auVar16 = FUN_027e9a10(lVar8,0,0);
    _in_stack_00000050 = auVar16;
    uVar9 = FUN_026792ec(&stack0x00000050,0);
    if ((uVar9 & 1) == 0) {
      *unaff_x19 = 1;
      *(undefined1 (*) [16])(unaff_x19 + 0x20) = _in_stack_00000050;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x20,0);
      if (*(int *)(*(long *)PTR_DAT_03d25bc0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01f07574(unaff_x19 + 2,&stack0x00000050);
      return;
    }
LAB_02f9fcc8:
    FUN_02679308(&stack0x00000050,0);
    if (*(long *)(unaff_x19 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar8 = FUN_02eb0e30(*(long *)(unaff_x19 + 0xe),0);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    in_stack_00000048 = FUN_020a2c44(lVar8,*(undefined8 *)PTR_DAT_03d25d80);
    uVar9 = FUN_0209f888(&stack0x00000048,*(undefined8 *)PTR_DAT_03d25d70);
    if ((uVar9 & 1) == 0) {
      *unaff_x19 = 2;
      *(undefined8 *)(unaff_x19 + 0x24) = in_stack_00000048;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x24,0);
      if (*(int *)(*(long *)PTR_DAT_03d25bc0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01f07574(unaff_x19 + 2,&stack0x00000048);
      return;
    }
LAB_02f9fd14:
    FUN_0209f8cc(&stack0x00000048,&stack0x00000088,*(undefined8 *)PTR_DAT_03d25d68);
    *(undefined8 *)(unaff_x19 + 0x14) = in_stack_00000088;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar8 = FUN_02f9cb10();
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    auVar16 = FUN_020a2c64(lVar8,0,*(undefined8 *)PTR_DAT_03d25d78);
    _in_stack_00000030 = auVar16;
    uVar9 = FUN_02189a30(&stack0x00000030,*(undefined8 *)PTR_DAT_03d25d60);
    if ((uVar9 & 1) == 0) {
      *unaff_x19 = 3;
      *(undefined1 (*) [16])(unaff_x19 + 0x26) = _in_stack_00000030;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x26,0);
      if (*(int *)(*(long *)PTR_DAT_03d25bc0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01f07574(unaff_x19 + 2,&stack0x00000030);
      return;
    }
LAB_02f9fd88:
    FUN_02189a7c(&stack0x00000030,&stack0x00000010,*(undefined8 *)PTR_DAT_03d25d58);
    uVar7 = in_stack_00000028;
    uVar14 = in_stack_00000020;
    bVar4 = bStack0000000000000019;
    bVar3 = bStack0000000000000018;
    *(undefined8 *)(unaff_x19 + 0x12) = in_stack_00000010;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    *(undefined8 *)(unaff_x19 + 0x1a) = uVar14;
    *(byte *)(unaff_x19 + 0x16) = bVar3 & 1;
    *(byte *)((long)unaff_x19 + 0x59) = bVar4 & 1;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x1a,uVar14);
    *(undefined8 *)(unaff_x19 + 0x18) = uVar7;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x18,uVar7);
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar14 = *(undefined8 *)(unaff_x20 + 0x128);
    in_stack_00000070._4_1_ = '\0';
    FUN_027e0bd8(uVar14,(long)&stack0x00000070 + 4,0);
    lVar8 = *(long *)(unaff_x19 + 0x10);
    if (lVar8 != 0) {
      *(undefined1 *)(unaff_x20 + 0x88) = 1;
      lVar13 = *(long *)(unaff_x19 + 0xc);
      if (lVar13 != 0) {
        uVar6 = thunk_FUN_01a6ca08(PTR_DAT_03d1fb60);
        FUN_02132e78(lVar13,lVar8,uVar6);
        uVar14 = *(undefined8 *)(unaff_x19 + 0x10);
        uVar6 = thunk_FUN_01a6ca08(PTR_DAT_03d25da0);
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar14,uVar6);
      }
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(char *)(unaff_x19 + 0x16) == '\0') {
      *(undefined1 *)(unaff_x20 + 0x88) = 1;
      *(undefined8 *)(unaff_x20 + 0x100) = *(undefined8 *)(unaff_x19 + 0x12);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x20 + 0x100);
      if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_02132ca8(*(long *)(unaff_x19 + 0xc),*(undefined8 *)PTR_DAT_03d1fb50);
      uVar6 = *(undefined8 *)(unaff_x19 + 0x12);
      iVar11 = 9;
      iVar10 = 9;
    }
    else {
      *(undefined1 *)(unaff_x20 + 0x130) = 0;
      *(undefined1 *)(unaff_x20 + 0x88) = 0;
      *(undefined8 *)(unaff_x20 + 0x100) = 0;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x20 + 0x100,0);
      *(undefined8 *)(unaff_x20 + 0x110) = *(undefined8 *)(unaff_x19 + 0x18);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x20 + 0x110);
      iVar11 = 3;
      iVar10 = 3;
    }
    if ((unaff_w26 < 0) && (iVar10 = iVar11, in_stack_00000070._4_1_ != '\0')) {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar14,0);
    }
    if ((iVar10 != 0) && (iVar10 != 3)) {
      if (iVar10 != 9) {
        return;
      }
      *unaff_x19 = 0xfffffffe;
      *(undefined8 *)(unaff_x19 + 0xc) = 0;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0xc,0);
      *(undefined8 *)(unaff_x19 + 0xe) = 0;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0xe,0);
      if (*(int *)(*(long *)PTR_DAT_03d25bc0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_02145584(unaff_x19 + 2,uVar6,*(undefined8 *)PTR_DAT_03d25d48);
      return;
    }
    if (unaff_w26 == 4) {
      _in_stack_00000050 = *(undefined1 (*) [16])(unaff_x19 + 0x20);
      unaff_w26 = -1;
      *(undefined8 *)(unaff_x19 + 0x20) = 0;
      *(undefined8 *)(unaff_x19 + 0x22) = 0;
      *unaff_x19 = 0xffffffff;
LAB_02f9fa00:
      FUN_02679308(&stack0x00000050,0);
    }
    else if (*(char *)((long)unaff_x19 + 0x59) != '\0') {
      if (*(char *)(unaff_x19 + 0x16) == '\0') {
        bVar5 = *(long *)(unaff_x19 + 0x18) != 0;
      }
      else {
        bVar5 = true;
      }
      if (*(long *)(unaff_x19 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c(0,bVar5);
      }
      lVar8 = FUN_02eb74c0(*(long *)(unaff_x19 + 0x14),bVar5,*(undefined8 *)(unaff_x19 + 10),0);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      auVar16 = FUN_027e9a10(lVar8,0,0);
      _in_stack_00000050 = auVar16;
      uVar9 = FUN_026792ec(&stack0x00000050,0);
      if ((uVar9 & 1) == 0) {
        *unaff_x19 = 4;
        *(undefined1 (*) [16])(unaff_x19 + 0x20) = _in_stack_00000050;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x20,0);
        if (*(int *)(*(long *)PTR_DAT_03d25bc0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01f07574(unaff_x19 + 2,&stack0x00000050);
        return;
      }
      goto LAB_02f9fa00;
    }
    if (*(long *)(unaff_x19 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_02eb0484(*(long *)(unaff_x19 + 0xe),1,0,0);
    plVar12 = *(long **)(unaff_x19 + 0x12);
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    (**(code **)(*plVar12 + 0x1c8))(plVar12,*(undefined8 *)(*plVar12 + 0x1d0));
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar14 = *(undefined8 *)(unaff_x20 + 0x128);
    in_stack_00000070._4_1_ = '\0';
    FUN_027e0bd8(uVar14,(long)&stack0x00000070 + 4,0);
    plVar12 = (long *)(unaff_x19 + 0x10);
    lVar8 = *plVar12;
    if (lVar8 != 0) {
      *(undefined1 *)(unaff_x20 + 0x88) = 1;
      plVar15 = *(long **)(unaff_x19 + 0x14);
      if (plVar15 != (long *)0x0) {
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        (**(code **)(*plVar15 + 0x278))(plVar15,*(undefined8 *)(*plVar15 + 0x280));
        lVar8 = *plVar12;
      }
      lVar13 = *(long *)(unaff_x19 + 0xc);
      if (lVar13 != 0) {
        uVar6 = thunk_FUN_01a6ca08(PTR_DAT_03d1fb60);
        FUN_02132e78(lVar13,lVar8,uVar6);
        lVar8 = *plVar12;
        uVar6 = thunk_FUN_01a6ca08(PTR_DAT_03d25da0);
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(lVar8,uVar6);
      }
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(long *)(unaff_x19 + 0x18) == 0) {
      uVar7 = UniGLTF_GlbLowLevelParser__FixNameUnique();
      *(undefined8 *)(unaff_x19 + 0xe) = uVar7;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    }
    else {
      *(long *)(unaff_x19 + 0xe) = *(long *)(unaff_x19 + 0x18);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    }
    if ((unaff_w26 < 0) && (in_stack_00000070._4_1_ != '\0')) {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar14,0);
    }
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x10,0);
    *(undefined8 *)(unaff_x19 + 0x12) = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x12,0);
    *(undefined8 *)(unaff_x19 + 0x14) = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x14,0);
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x18,0);
    *(undefined8 *)(unaff_x19 + 0x1a) = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x1a,0);
  } while( true );
}


