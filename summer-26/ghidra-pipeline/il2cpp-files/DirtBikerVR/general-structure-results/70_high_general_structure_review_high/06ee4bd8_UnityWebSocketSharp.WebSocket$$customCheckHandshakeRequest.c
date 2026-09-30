/*
FUNCTION_NAME: UnityWebSocketSharp.WebSocket$$customCheckHandshakeRequest
ENTRY_POINT: 06ee4bd8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x06ee50b0) */
/* WARNING: Removing unreachable block (ram,0x06ee5390) */
/* WARNING: Removing unreachable block (ram,0x06ee55c8) */

void UnityWebSocketSharp_WebSocket__customCheckHandshakeRequest(undefined8 param_1)

{
  undefined *puVar1;
  byte bVar2;
  byte bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *plVar14;
  long *plVar15;
  int iVar16;
  long *plVar17;
  int unaff_w26;
  long *unaff_x27;
  uint uVar18;
  uint uVar19;
  long *unaff_x28;
  undefined8 *unaff_x29;
  undefined1 auVar20 [16];
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  if (*(int *)(*(long *)PTR_DAT_0848a698 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar4 = FUN_06767f60(DAT_015c4c08,0);
  uVar4 = FUN_067331b0(param_1,uVar4,0);
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  *(undefined8 *)(unaff_x20 + 0x50) = uVar4;
  do {
    lVar5 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084d2008);
    FUN_04de7d48(lVar5,*(undefined8 *)PTR_DAT_084d1ff8);
    plVar14 = (long *)(unaff_x19 + 0xe);
    *plVar14 = lVar5;
    thunk_FUN_03afed3c(plVar14,lVar5);
    *(undefined1 *)(unaff_x19 + 0x12) = 0;
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
    in_stack_00000020._4_1_ = '\0';
    FUN_067b43ac(uVar4,(long)&stack0x00000020 + 4,0);
    FUN_06ee291c();
    if (*(long *)(unaff_x20 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar5 = FUN_03a8a804(*(undefined8 *)PTR_DAT_084d2010,
                         *(undefined4 *)(*(long *)(unaff_x20 + 0x38) + 0x18));
    plVar17 = (long *)(unaff_x19 + 10);
    *plVar17 = lVar5;
    thunk_FUN_03afed3c(plVar17);
    if (*(long *)(unaff_x20 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    System_Collections_Generic_List<Color32>__IndexOf
              (*(long *)(unaff_x20 + 0x38),*plVar17,0,*(undefined8 *)PTR_DAT_084d1fc8);
    if (*(long *)(unaff_x20 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar5 = FUN_03a8a804(*(undefined8 *)PTR_DAT_084d2018,
                         *(undefined4 *)(*(long *)(unaff_x20 + 0x40) + 0x18));
    plVar15 = (long *)(unaff_x19 + 0xc);
    *plVar15 = lVar5;
    thunk_FUN_03afed3c(plVar15);
    if (*(long *)(unaff_x20 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    FUN_04bedf0c(*(long *)(unaff_x20 + 0x40),*plVar15,0,*(undefined8 *)PTR_DAT_084d1fc0);
    if (*(long *)(unaff_x20 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar6 = FUN_06ee48dc(*(long *)(unaff_x20 + 0x20),*(undefined4 *)(unaff_x20 + 0x1c));
    puVar9 = (undefined8 *)(unaff_x19 + 0x10);
    *puVar9 = uVar6;
    thunk_FUN_03afed3c(puVar9);
    lVar5 = *plVar14;
    if (lVar5 == 0) {
LAB_06ee4fb8:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar8 = *(long *)(lVar5 + 0x10);
    uVar6 = *puVar9;
    lVar12 = *unaff_x27;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar8 == 0) goto LAB_06ee4fb8;
    uVar19 = *(uint *)(lVar5 + 0x18);
    if (uVar19 < *(uint *)(lVar8 + 0x18)) {
      *(uint *)(lVar5 + 0x18) = uVar19 + 1;
      puVar9 = (undefined8 *)(lVar8 + (long)(int)uVar19 * 8 + 0x20);
      *puVar9 = uVar6;
      thunk_FUN_03afed3c(puVar9);
    }
    else {
      FUN_04de85b0(lVar5,uVar6,*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
    }
    if (*(long *)(unaff_x20 + 0x30) == 0) {
      if (*(long *)(unaff_x20 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      uVar7 = FUN_06ee2afc();
      if ((uVar7 & 1) == 0) goto LAB_06ee4e10;
      if (*(long *)(unaff_x20 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      if (*(int *)(*(long *)(unaff_x20 + 0x38) + 0x18) != 0) goto LAB_06ee4e10;
      if (*(long *)(unaff_x20 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      if (*(int *)(*(long *)(unaff_x20 + 0x40) + 0x18) != 0) goto LAB_06ee4e10;
      if (*(int *)(*unaff_x28 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar6 = FUN_067319e8(0);
      *(undefined8 *)(unaff_x20 + 0x50) = uVar6;
      *(undefined1 *)(unaff_x19 + 0x12) = 1;
    }
    else {
LAB_06ee4e10:
      lVar5 = *plVar17;
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      uVar19 = *(uint *)(lVar5 + 0x18);
      if (0 < (int)uVar19) {
        uVar18 = 0;
        do {
          if (uVar19 <= uVar18) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c8();
          }
          lVar8 = *(long *)(lVar5 + (long)(int)uVar18 * 0x10 + 0x28);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          lVar8 = *(long *)(lVar8 + 0x58);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          lVar12 = *plVar14;
          uVar6 = FUN_05c65ef8(lVar8,*unaff_x29);
          if (lVar12 == 0) {
LAB_06ee4f70:
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          lVar8 = *(long *)(lVar12 + 0x10);
          lVar13 = *unaff_x27;
          *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
          if (lVar8 == 0) goto LAB_06ee4f70;
          uVar19 = *(uint *)(lVar12 + 0x18);
          if (uVar19 < *(uint *)(lVar8 + 0x18)) {
            *(uint *)(lVar12 + 0x18) = uVar19 + 1;
            *(undefined8 *)(lVar8 + (long)(int)uVar19 * 8 + 0x20) = uVar6;
            thunk_FUN_03afed3c();
          }
          else {
            FUN_04de85b0(lVar12,uVar6,
                         *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
          }
          uVar19 = *(uint *)(lVar5 + 0x18);
          uVar18 = uVar18 + 1;
        } while ((int)uVar18 < (int)uVar19);
      }
      unaff_x28 = (long *)PTR_DAT_08488d10;
      lVar5 = *plVar15;
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      if (0 < (int)*(ulong *)(lVar5 + 0x18)) {
        uVar7 = 0;
        uVar10 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
        puVar9 = (undefined8 *)(lVar5 + 0x30);
        do {
          if (uVar10 <= uVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c8();
          }
          lVar8 = *plVar14;
          if (lVar8 == 0) {
LAB_06ee4f74:
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          lVar12 = *(long *)(lVar8 + 0x10);
          uVar6 = *puVar9;
          lVar13 = *unaff_x27;
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          if (lVar12 == 0) goto LAB_06ee4f74;
          uVar19 = *(uint *)(lVar8 + 0x18);
          if (uVar19 < *(uint *)(lVar12 + 0x18)) {
            *(uint *)(lVar8 + 0x18) = uVar19 + 1;
            puVar11 = (undefined8 *)(lVar12 + (long)(int)uVar19 * 8 + 0x20);
            *puVar11 = uVar6;
            thunk_FUN_03afed3c(puVar11);
          }
          else {
            FUN_04de85b0(lVar8,uVar6,
                         *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
          }
          uVar10 = (ulong)*(uint *)(lVar5 + 0x18);
          uVar7 = uVar7 + 1;
          puVar9 = puVar9 + 3;
        } while ((long)uVar7 < (long)(int)*(uint *)(lVar5 + 0x18));
      }
    }
    if ((unaff_w26 < 0) && (in_stack_00000020._4_1_ != '\0')) {
      thunk_FUN_03a98474(uVar4,0);
    }
    lVar5 = *plVar14;
    if (*(int *)(*(long *)PTR_DAT_0848acd8 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    lVar5 = FUN_067cd8ac(lVar5,0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    auVar20 = FUN_058b7208(lVar5,0,*(undefined8 *)PTR_DAT_084abf58);
    _in_stack_00000010 = auVar20;
    uVar7 = FUN_05d63724(&stack0x00000010,*(undefined8 *)PTR_DAT_084abf50);
    if ((uVar7 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined1 (*) [16])(unaff_x19 + 0x14) = _in_stack_00000010;
      thunk_FUN_03afed3c(unaff_x19 + 0x14,0);
      if (*(int *)(*(long *)PTR_DAT_08488b88 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_043e0ef8(unaff_x19 + 2,&stack0x00000010);
      return;
    }
    lVar5 = FUN_05d6376c(&stack0x00000010,*(undefined8 *)PTR_DAT_084abf48);
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
    in_stack_00000020._4_1_ = '\0';
    FUN_067b43ac(uVar4,(long)&stack0x00000020 + 4,0);
    if (*(char *)(unaff_x19 + 0x12) == '\0') {
      if (*(long *)(unaff_x19 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar8 = FUN_04de82e0(*(long *)(unaff_x19 + 0xe),0,*(undefined8 *)PTR_DAT_084d2000);
      bVar2 = lVar5 == lVar8;
LAB_06ee51a8:
      lVar8 = *(long *)(unaff_x19 + 10);
      if (lVar8 == 0) {
LAB_06ee5224:
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      uVar19 = 0;
      while ((int)uVar19 < (int)*(uint *)(lVar8 + 0x18)) {
        if (*(uint *)(lVar8 + 0x18) <= uVar19) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c8();
        }
        lVar12 = lVar8 + (long)(int)uVar19 * 0x10;
        lVar13 = *(long *)(lVar12 + 0x28);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        if (*(long *)(lVar13 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        if (*(long *)(*(long *)(lVar13 + 0x58) + 0x18) != 0) {
          if (*(long *)(unaff_x20 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          FUN_04becf38(*(long *)(unaff_x20 + 0x38),*(undefined8 *)(lVar12 + 0x20),lVar13,
                       *(undefined8 *)PTR_DAT_084d1fd0);
          bVar3 = UnityWebSocketSharp_WebSocket__set_EnableRedirection();
          lVar8 = *(long *)(unaff_x19 + 10);
          bVar2 = bVar2 | bVar3;
        }
        uVar19 = uVar19 + 1;
        if (lVar8 == 0) goto LAB_06ee5224;
      }
      if ((bVar2 & 1) != 0) {
        FUN_06ee2b70();
      }
      unaff_x28 = (long *)PTR_DAT_08488d10;
      lVar8 = 0;
      uVar19 = 0xffffffff;
      do {
        if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        if (*(int *)(*(long *)(unaff_x19 + 0xc) + 0x18) <= (int)(uVar19 + 1)) {
          iVar16 = 0x1a;
          goto LAB_06ee5464;
        }
        if ((*(long *)(unaff_x19 + 10) == 0) || (*(long *)(unaff_x19 + 0xe) == 0)) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        lVar12 = FUN_04de82e0(*(long *)(unaff_x19 + 0xe),
                              uVar19 + *(int *)(*(long *)(unaff_x19 + 10) + 0x18) + 2,
                              *(undefined8 *)PTR_DAT_084d2000);
        lVar8 = lVar8 + 0x18;
        uVar19 = uVar19 + 1;
      } while (lVar5 != lVar12);
      lVar5 = *(long *)(unaff_x19 + 0xc);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      if (*(uint *)(lVar5 + 0x18) <= uVar19) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c8();
      }
      if (*(long *)(unaff_x20 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar5 = lVar5 + lVar8;
      in_stack_00000028 = *(undefined8 *)(lVar5 + 8);
      in_stack_00000030 = *(undefined8 *)(lVar5 + 0x10);
      in_stack_00000038 = *(undefined8 *)(lVar5 + 0x18);
      FUN_04bee240(*(long *)(unaff_x20 + 0x40),&stack0x00000028,*(undefined8 *)PTR_DAT_084d1fd8);
      iVar16 = 0x1a;
      FUN_06ee3608();
    }
    else {
      if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      uVar7 = FUN_058b01d0(*(long *)(unaff_x19 + 0x10),*(undefined8 *)PTR_DAT_084ad498);
      bVar2 = true;
      if ((uVar7 & 1) != 0) goto LAB_06ee51a8;
      iVar16 = 0x10;
      FUN_06ee37f8();
    }
LAB_06ee5464:
    if ((unaff_w26 < 0) && (in_stack_00000020._4_1_ != '\0')) {
      thunk_FUN_03a98474(uVar4,0);
    }
    puVar1 = PTR_DAT_08488b88;
    if ((iVar16 != 0) && (iVar16 != 0x1a)) {
      if (iVar16 == 0x10) {
        *unaff_x19 = 0xfffffffe;
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_0666d184(unaff_x19 + 2,0);
      }
      return;
    }
    *(undefined8 *)(unaff_x19 + 10) = 0;
    thunk_FUN_03afed3c(unaff_x19 + 10,0);
    *(undefined8 *)(unaff_x19 + 0xc) = 0;
    thunk_FUN_03afed3c(unaff_x19 + 0xc,0);
    *(undefined8 *)(unaff_x19 + 0xe) = 0;
    thunk_FUN_03afed3c(unaff_x19 + 0xe,0);
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
    thunk_FUN_03afed3c(unaff_x19 + 0x10,0);
  } while( true );
}


