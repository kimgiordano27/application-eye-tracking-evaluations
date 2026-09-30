/*
FUNCTION_NAME: UniGLTF.GltfTextureImporter.<>c__DisplayClass5_0$$<TryCreateSrgb>b__0
ENTRY_POINT: 02f9f5c8
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


/* WARNING: Removing unreachable block (ram,0x02fa0148) */
/* WARNING: Removing unreachable block (ram,0x02f9fac8) */
/* WARNING: Removing unreachable block (ram,0x02fa00f0) */
/* WARNING: Removing unreachable block (ram,0x02f9f8e8) */

void UniGLTF_GltfTextureImporter_<>c__DisplayClass5_0__<TryCreateSrgb>b__0(void)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  uint *unaff_x19;
  long unaff_x20;
  long lVar8;
  undefined8 uVar9;
  uint *puVar10;
  int iVar11;
  long lVar12;
  undefined8 uVar13;
  uint uVar14;
  undefined1 auVar15 [16];
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
  char cStack0000000000000074;
  long in_stack_00000078;
  undefined8 in_stack_00000088;
  
  FUN_01ab69ac(PTR_DAT_03d25bc0);
  FUN_01ab69ac(PTR_DAT_03cc9e10);
  FUN_01ab69ac(PTR_DAT_03d1f9e0);
  FUN_01ab69ac(PTR_DAT_03d25d50);
  FUN_01ab69ac(PTR_DAT_03d25d58);
  FUN_01ab69ac(PTR_DAT_03d1f9e8);
  FUN_01ab69ac(PTR_DAT_03d25d60);
  FUN_01ab69ac(PTR_DAT_03d1f9f0);
  FUN_01ab69ac(PTR_DAT_03d25d68);
  FUN_01ab69ac(PTR_DAT_03d25d70);
  FUN_01ab69ac(PTR_DAT_03d25d78);
  FUN_01ab69ac(PTR_DAT_03d1f9f8);
  FUN_01ab69ac(PTR_DAT_03d25d80);
  FUN_01ab69ac(PTR_DAT_03d25d88);
  FUN_01ab69ac(PTR_DAT_03d1fb50);
  FUN_01ab69ac(PTR_DAT_03d25d90);
  FUN_01ab69ac(PTR_DAT_03d1fab8);
  *(undefined1 *)(unaff_x20 + 0xde8) = 1;
  cStack0000000000000074 = '\0';
  in_stack_00000060 = 0;
  in_stack_00000068 = 0;
  in_stack_00000050 = 0;
  in_stack_00000058 = 0;
  in_stack_00000048 = 0;
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  auVar15 = ZEXT816(0);
  uVar14 = *unaff_x19;
  lVar8 = *(long *)(unaff_x19 + 8);
  if (uVar14 < 4) {
    uVar9 = 0;
    _in_stack_00000050 = ZEXT816(0);
    _in_stack_00000060 = ZEXT816(0);
    goto LAB_02f9fb70;
  }
  if (uVar14 == 4) {
    uVar9 = 0;
    _in_stack_00000030 = ZEXT816(0);
    _in_stack_00000050 = ZEXT816(0);
    _in_stack_00000060 = ZEXT816(0);
    do {
      if (uVar14 == 4) {
        _in_stack_00000050 = *(undefined1 (*) [16])(unaff_x19 + 0x20);
        uVar14 = 0xffffffff;
        unaff_x19[0x20] = 0;
        unaff_x19[0x21] = 0;
        unaff_x19[0x22] = 0;
        unaff_x19[0x23] = 0;
        *unaff_x19 = 0xffffffff;
LAB_02f9fa00:
        FUN_02679308(&stack0x00000050,0);
      }
      else if (*(char *)((long)unaff_x19 + 0x59) != '\0') {
        if ((char)unaff_x19[0x16] == '\0') {
          bVar3 = *(long *)(unaff_x19 + 0x18) != 0;
        }
        else {
          bVar3 = true;
        }
        if (*(long *)(unaff_x19 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c(0,bVar3);
        }
        lVar12 = FUN_02eb74c0(*(long *)(unaff_x19 + 0x14),bVar3,*(undefined8 *)(unaff_x19 + 10),0);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        auVar15 = FUN_027e9a10(lVar12,0,0);
        _in_stack_00000050 = auVar15;
        uVar7 = FUN_026792ec(&stack0x00000050,0);
        if ((uVar7 & 1) == 0) {
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
      plVar5 = *(long **)(unaff_x19 + 0x12);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      (**(code **)(*plVar5 + 0x1c8))(plVar5,*(undefined8 *)(*plVar5 + 0x1d0));
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar13 = *(undefined8 *)(lVar8 + 0x128);
      cStack0000000000000074 = '\0';
      FUN_027e0bd8(uVar13,&stack0x00000074,0);
      puVar10 = unaff_x19 + 0x10;
      lVar12 = *(long *)puVar10;
      if (lVar12 != 0) {
        *(undefined1 *)(lVar8 + 0x88) = 1;
        plVar5 = *(long **)(unaff_x19 + 0x14);
        if (plVar5 != (long *)0x0) {
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          (**(code **)(*plVar5 + 0x278))(plVar5,*(undefined8 *)(*plVar5 + 0x280));
          lVar12 = *(long *)puVar10;
        }
        lVar8 = *(long *)(unaff_x19 + 0xc);
        if (lVar8 != 0) {
          uVar9 = thunk_FUN_01a6ca08(PTR_DAT_03d1fb60);
          FUN_02132e78(lVar8,lVar12,uVar9);
          uVar13 = *(undefined8 *)puVar10;
          uVar9 = thunk_FUN_01a6ca08(PTR_DAT_03d25da0);
                    /* WARNING: Subroutine does not return */
          FUN_01ab6b14(uVar13,uVar9);
        }
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(long *)(unaff_x19 + 0x18) == 0) {
        uVar6 = UniGLTF_GlbLowLevelParser__FixNameUnique
                          (lVar8,1,*(undefined8 *)(unaff_x19 + 0x1a),*(undefined8 *)(unaff_x19 + 10)
                          );
        *(undefined8 *)(unaff_x19 + 0xe) = uVar6;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      }
      else {
        *(long *)(unaff_x19 + 0xe) = *(long *)(unaff_x19 + 0x18);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      }
      if (((int)uVar14 < 0) && (cStack0000000000000074 != '\0')) {
        OVRManager_<>c__<InitOVRManager>b__424_0(uVar13,0);
      }
      puVar10 = unaff_x19 + 0x10;
      puVar10[0] = 0;
      puVar10[1] = 0;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar10,0);
      puVar10 = unaff_x19 + 0x12;
      puVar10[0] = 0;
      puVar10[1] = 0;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar10,0);
      puVar10 = unaff_x19 + 0x14;
      puVar10[0] = 0;
      puVar10[1] = 0;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar10,0);
      puVar10 = unaff_x19 + 0x18;
      puVar10[0] = 0;
      puVar10[1] = 0;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar10,0);
      puVar10 = unaff_x19 + 0x1a;
      puVar10[0] = 0;
      puVar10[1] = 0;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar10,0);
LAB_02f9fb1c:
      puVar10 = unaff_x19 + 0x10;
      puVar10[0] = 0;
      puVar10[1] = 0;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar10,0);
      puVar10 = unaff_x19 + 0x12;
      puVar10[0] = 0;
      puVar10[1] = 0;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar10,0);
      puVar10 = unaff_x19 + 0x14;
      puVar10[0] = 0;
      puVar10[1] = 0;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar10,0);
      puVar10 = unaff_x19 + 0x18;
      puVar10[0] = 0;
      puVar10[1] = 0;
      *(undefined2 *)(unaff_x19 + 0x16) = 0;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar10,0);
      puVar10 = unaff_x19 + 0x1a;
      puVar10[0] = 0;
      puVar10[1] = 0;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar10,0);
      auVar15 = _in_stack_00000030;
LAB_02f9fb70:
      switch(uVar14) {
      case 0:
        _in_stack_00000060 = *(undefined1 (*) [16])(unaff_x19 + 0x1c);
        uVar14 = 0xffffffff;
        unaff_x19[0x1c] = 0;
        unaff_x19[0x1d] = 0;
        unaff_x19[0x1e] = 0;
        unaff_x19[0x1f] = 0;
        *unaff_x19 = 0xffffffff;
        break;
      case 1:
        _in_stack_00000050 = *(undefined1 (*) [16])(unaff_x19 + 0x20);
        uVar14 = 0xffffffff;
        unaff_x19[0x20] = 0;
        unaff_x19[0x21] = 0;
        unaff_x19[0x22] = 0;
        unaff_x19[0x23] = 0;
        *unaff_x19 = 0xffffffff;
        goto LAB_02f9fcc8;
      case 2:
        in_stack_00000048 = *(undefined8 *)(unaff_x19 + 0x24);
        uVar14 = 0xffffffff;
        unaff_x19[0x24] = 0;
        unaff_x19[0x25] = 0;
        *unaff_x19 = 0xffffffff;
        goto LAB_02f9fd14;
      case 3:
        _in_stack_00000030 = *(undefined1 (*) [16])(unaff_x19 + 0x26);
        uVar14 = 0xffffffff;
        unaff_x19[0x26] = 0;
        unaff_x19[0x27] = 0;
        unaff_x19[0x28] = 0;
        unaff_x19[0x29] = 0;
        *unaff_x19 = 0xffffffff;
        goto LAB_02f9fd88;
      default:
        _in_stack_00000030 = auVar15;
        if (*(int *)(*(long *)PTR_DAT_03cc9e10 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_027d7fa0(unaff_x19 + 10,0);
        if (*(long *)(unaff_x19 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        lVar12 = FUN_02eb0dc8(*(long *)(unaff_x19 + 0xe),0);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        auVar15 = FUN_020a2c64(lVar12,0,*(undefined8 *)PTR_DAT_03d1f9f8);
        _in_stack_00000060 = auVar15;
        uVar7 = FUN_02189a30(&stack0x00000060,*(undefined8 *)PTR_DAT_03d1f9f0);
        auVar15 = _in_stack_00000030;
        if ((uVar7 & 1) == 0) {
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
      _in_stack_00000030 = auVar15;
      FUN_02189a7c(&stack0x00000060,&stack0x00000078,*(undefined8 *)PTR_DAT_03d1f9e8);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      plVar5 = (long *)(lVar8 + 0xf8);
      *plVar5 = in_stack_00000078;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar5);
      if (*plVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar12 = FUN_02eb3698(*plVar5,*(undefined8 *)(unaff_x19 + 10),0);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      auVar15 = FUN_027e9a10(lVar12,0,0);
      _in_stack_00000050 = auVar15;
      uVar7 = FUN_026792ec(&stack0x00000050,0);
      auVar15 = _in_stack_00000030;
      if ((uVar7 & 1) == 0) {
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
      _in_stack_00000030 = auVar15;
      FUN_02679308(&stack0x00000050,0);
      if (*(long *)(unaff_x19 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar12 = FUN_02eb0e30(*(long *)(unaff_x19 + 0xe),0);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      in_stack_00000048 = FUN_020a2c44(lVar12,*(undefined8 *)PTR_DAT_03d25d80);
      uVar7 = FUN_0209f888(&stack0x00000048,*(undefined8 *)PTR_DAT_03d25d70);
      auVar15 = _in_stack_00000030;
      if ((uVar7 & 1) == 0) {
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
      _in_stack_00000030 = auVar15;
      FUN_0209f8cc(&stack0x00000048,&stack0x00000088,*(undefined8 *)PTR_DAT_03d25d68);
      *(undefined8 *)(unaff_x19 + 0x14) = in_stack_00000088;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar12 = FUN_02f9cb10(lVar8,*(undefined8 *)(unaff_x19 + 0x14),*(undefined8 *)(unaff_x19 + 10))
      ;
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      auVar15 = FUN_020a2c64(lVar12,0,*(undefined8 *)PTR_DAT_03d25d78);
      _in_stack_00000030 = auVar15;
      uVar7 = FUN_02189a30(&stack0x00000030,*(undefined8 *)PTR_DAT_03d25d60);
      if ((uVar7 & 1) == 0) {
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
      uVar6 = in_stack_00000028;
      uVar13 = in_stack_00000020;
      bVar2 = bStack0000000000000019;
      bVar1 = bStack0000000000000018;
      *(undefined8 *)(unaff_x19 + 0x12) = in_stack_00000010;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      *(undefined8 *)(unaff_x19 + 0x1a) = uVar13;
      *(byte *)(unaff_x19 + 0x16) = bVar1 & 1;
      *(byte *)((long)unaff_x19 + 0x59) = bVar2 & 1;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x1a,uVar13);
      *(undefined8 *)(unaff_x19 + 0x18) = uVar6;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x18,uVar6);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar13 = *(undefined8 *)(lVar8 + 0x128);
      cStack0000000000000074 = '\0';
      FUN_027e0bd8(uVar13,&stack0x00000074,0);
      lVar12 = *(long *)(unaff_x19 + 0x10);
      if (lVar12 != 0) {
        *(undefined1 *)(lVar8 + 0x88) = 1;
        lVar8 = *(long *)(unaff_x19 + 0xc);
        if (lVar8 != 0) {
          uVar9 = thunk_FUN_01a6ca08(PTR_DAT_03d1fb60);
          FUN_02132e78(lVar8,lVar12,uVar9);
          uVar13 = *(undefined8 *)(unaff_x19 + 0x10);
          uVar9 = thunk_FUN_01a6ca08(PTR_DAT_03d25da0);
                    /* WARNING: Subroutine does not return */
          FUN_01ab6b14(uVar13,uVar9);
        }
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if ((char)unaff_x19[0x16] == '\0') {
        *(undefined1 *)(lVar8 + 0x88) = 1;
        *(undefined8 *)(lVar8 + 0x100) = *(undefined8 *)(unaff_x19 + 0x12);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(lVar8 + 0x100);
        if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        FUN_02132ca8(*(long *)(unaff_x19 + 0xc),*(undefined8 *)PTR_DAT_03d1fb50);
        uVar9 = *(undefined8 *)(unaff_x19 + 0x12);
        iVar11 = 9;
        iVar4 = 9;
      }
      else {
        *(undefined1 *)(lVar8 + 0x130) = 0;
        *(undefined1 *)(lVar8 + 0x88) = 0;
        *(undefined8 *)(lVar8 + 0x100) = 0;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(lVar8 + 0x100,0);
        *(undefined8 *)(lVar8 + 0x110) = *(undefined8 *)(unaff_x19 + 0x18);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(lVar8 + 0x110);
        iVar11 = 3;
        iVar4 = 3;
      }
      if (((int)uVar14 < 0) && (iVar4 = iVar11, cStack0000000000000074 != '\0')) {
        OVRManager_<>c__<InitOVRManager>b__424_0(uVar13,0);
      }
    } while ((iVar4 == 0) || (iVar4 == 3));
    auVar15 = _in_stack_00000050;
    if (iVar4 != 9) {
      return;
    }
  }
  else {
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    iVar4 = thunk_FUN_01aa519c(lVar8 + 0x118,0,0,0);
    if (iVar4 == 1) {
      lVar8 = thunk_FUN_01a6ca08(PTR_DAT_03cd81b0);
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar9 = FUN_02f9c61c();
      uVar13 = thunk_FUN_01a6ca08(PTR_DAT_03d25da0);
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar9,uVar13);
    }
    uVar9 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d1fab8);
    FUN_02fa0644();
    puVar10 = unaff_x19 + 0xc;
    *(undefined8 *)puVar10 = uVar9;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar10,uVar9);
    uVar13 = *(undefined8 *)(lVar8 + 0x128);
    cStack0000000000000074 = '\0';
    FUN_027e0bd8(uVar13,&stack0x00000074,0);
    *(undefined1 *)(lVar8 + 0x125) = 1;
    lVar12 = FUN_01aa50f0(lVar8 + 0x108,*(undefined8 *)puVar10,0);
    if (lVar12 == 0) {
      puVar10 = unaff_x19 + 0xe;
      *(undefined8 *)puVar10 = *(undefined8 *)(lVar8 + 0x110);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar10);
      if (*(long *)(lVar8 + 0x110) != 0) {
        uVar9 = FUN_02eb0e18(*(long *)(lVar8 + 0x110),0);
        *(undefined8 *)(lVar8 + 0xf8) = uVar9;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      }
      *(undefined8 *)(lVar8 + 0xb0) = *(undefined8 *)(lVar8 + 0xa8);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      uVar9 = UniGLTF_GlbLowLevelParser__FixNameUnique(lVar8,0,0,*(undefined8 *)(unaff_x19 + 10));
      *(undefined8 *)puVar10 = uVar9;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar10);
      uVar9 = 0;
      iVar11 = 0xd;
      iVar4 = 0xd;
    }
    else {
      FUN_02132f34(lVar12,*(undefined8 *)PTR_DAT_03d25d88);
      if (*(char *)(lVar8 + 0x88) == '\0') {
LAB_02f9f864:
        thunk_FUN_01a6ca08(PTR_DAT_03cbdd28);
        uVar9 = thunk_FUN_01a89e68();
        uVar13 = thunk_FUN_01a6ca08(PTR_DAT_03d25d98);
        FUN_0276a4a8(uVar9,uVar13,0);
        uVar13 = thunk_FUN_01a6ca08(PTR_DAT_03d25da0);
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar9,uVar13);
      }
      lVar12 = FUN_02132b44(lVar12,*(undefined8 *)PTR_DAT_03d25d90);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar7 = FUN_027e971c(lVar12,0);
      if ((uVar7 & 1) == 0) goto LAB_02f9f864;
      uVar9 = *(undefined8 *)(lVar8 + 0x100);
      iVar11 = 9;
      iVar4 = 9;
    }
    if (((int)uVar14 < 0) && (iVar4 = iVar11, cStack0000000000000074 != '\0')) {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar13,0);
    }
    auVar15._8_8_ = in_stack_00000058;
    auVar15._0_8_ = in_stack_00000050;
    if (iVar4 == 0xd) goto LAB_02f9fb1c;
    if (iVar4 != 9) {
      _in_stack_00000050 = auVar15;
      if (iVar4 == 0) goto LAB_02f9fb1c;
      return;
    }
  }
  *unaff_x19 = 0xfffffffe;
  puVar10 = unaff_x19 + 0xc;
  puVar10[0] = 0;
  puVar10[1] = 0;
  _in_stack_00000050 = auVar15;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar10,0);
  puVar10 = unaff_x19 + 0xe;
  puVar10[0] = 0;
  puVar10[1] = 0;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar10,0);
  if (*(int *)(*(long *)PTR_DAT_03d25bc0 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_02145584(unaff_x19 + 2,uVar9,*(undefined8 *)PTR_DAT_03d25d48);
  return;
}


