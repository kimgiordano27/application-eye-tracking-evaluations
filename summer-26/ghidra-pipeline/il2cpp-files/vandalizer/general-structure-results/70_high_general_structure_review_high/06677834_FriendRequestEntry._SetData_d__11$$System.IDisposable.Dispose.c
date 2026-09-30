/*
FUNCTION_NAME: FriendRequestEntry.<SetData>d__11$$System.IDisposable.Dispose
ENTRY_POINT: 06677834
PROGRAM: vandalizer-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void FriendRequestEntry_<SetData>d__11__System_IDisposable_Dispose(void)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  int iVar7;
  int *piVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  int *unaff_x19;
  long *plVar16;
  long *plVar17;
  long lVar18;
  undefined1 auVar19 [16];
  int iStack000000000000002c;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  long lStack0000000000000040;
  int iStack000000000000004c;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  
  iStack000000000000004c = 0;
  uStack0000000000000038 = 0;
  lStack0000000000000040 = 0;
  uStack0000000000000030 = 0;
  iStack000000000000002c = 0;
  lVar18 = *(long *)(unaff_x19 + 0xc);
  if (*unaff_x19 == 0) {
    _uStack0000000000000030 = *(undefined1 (*) [16])(unaff_x19 + 0x16);
    unaff_x19[0x16] = 0;
    unaff_x19[0x17] = 0;
    unaff_x19[0x18] = 0;
    unaff_x19[0x19] = 0;
    *unaff_x19 = -1;
    goto LAB_0667793c;
  }
  piVar8 = unaff_x19 + 0xe;
  piVar8[0] = 0;
  piVar8[1] = 0;
  thunk_FUN_0329bf60(piVar8,0);
  unaff_x19[0x10] = 200;
  uVar9 = FUN_031f21dc(*(undefined8 *)PTR_DAT_0759bae0,0x400);
  *(undefined8 *)(unaff_x19 + 0x12) = uVar9;
  thunk_FUN_0329bf60();
  uVar9 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_0759c868);
  FUN_05db84e8(uVar9,0);
  *(undefined8 *)(unaff_x19 + 0x14) = uVar9;
  thunk_FUN_0329bf60(unaff_x19 + 0x14,uVar9);
  while( true ) {
    if (*(int *)(*(long *)PTR_DAT_0759cf78 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    FUN_05e6492c(unaff_x19 + 8,0);
    plVar10 = *(long **)(unaff_x19 + 10);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    lVar11 = (**(code **)(*plVar10 + 0x2c8))
                       (plVar10,*(undefined8 *)(unaff_x19 + 0x12),0,0x400,
                        *(undefined8 *)(unaff_x19 + 8),*(undefined8 *)(*plVar10 + 0x2d0));
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    auVar19 = FUN_05101c10(lVar11,0,*(undefined8 *)PTR_DAT_075eb648);
    _uStack0000000000000030 = auVar19;
    uVar12 = FUN_055c3510(&stack0x00000030,*(undefined8 *)PTR_DAT_075eb640);
    if ((uVar12 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined1 (*) [16])(unaff_x19 + 0x16) = _uStack0000000000000030;
      thunk_FUN_0329bf60(unaff_x19 + 0x16,0);
      if (*(int *)(*(long *)PTR_DAT_07616790 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      FUN_039dc230(unaff_x19 + 2,&stack0x00000030);
      return;
    }
LAB_0667793c:
    iVar7 = FUN_055c355c(&stack0x00000030,*(undefined8 *)PTR_DAT_075eb638);
    if (iVar7 == 0) {
      uVar9 = FUN_06769fd8(0xb,0,0,0);
      uVar13 = thunk_FUN_03257e30(PTR_DAT_07616858);
                    /* WARNING: Subroutine does not return */
      FUN_031f225c(uVar9,uVar13);
    }
    plVar16 = (long *)(unaff_x19 + 0x14);
    plVar10 = (long *)*plVar16;
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    (**(code **)(*plVar10 + 0x378))
              (plVar10,*(undefined8 *)(unaff_x19 + 0x12),0,iVar7,*(undefined8 *)(*plVar10 + 0x380));
    iStack000000000000004c = 0;
    lStack0000000000000040 = 0;
    lVar11 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_07616868);
    FUN_0673a294(lVar11,0);
    puVar5 = PTR_DAT_07616878;
    puVar4 = PTR_DAT_07616870;
    puVar3 = PTR_DAT_07616700;
    plVar10 = (long *)*plVar16;
    if (plVar10 == (long *)0x0) break;
    bVar2 = false;
    puVar1 = (undefined8 *)(lVar18 + 0x50);
    while( true ) {
      uVar9 = (**(code **)(*plVar10 + 0x3a8))(plVar10,*(undefined8 *)(*plVar10 + 0x3b0));
      plVar10 = (long *)*plVar16;
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      uVar13 = (**(code **)(*plVar10 + 0x1e8))(plVar10,*(undefined8 *)(*plVar10 + 0x1f0));
      uVar12 = FUN_0676a158(uVar9,&stack0x0000004c,uVar13,&stack0x00000040,0);
      if ((uVar12 & 1) == 0) break;
      if (lStack0000000000000040 == 0) {
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2390();
        }
        uVar9 = FUN_0671ed00(lVar11,*(undefined8 *)PTR_DAT_0759c2f0,0);
        uVar12 = FUN_05c87ee0(uVar9,0);
        if ((uVar12 & 1) == 0) {
          uVar12 = FUN_05dff544(uVar9,&stack0x0000002c,0);
          if ((uVar12 & 1) != 0) goto LAB_06677ba4;
        }
        iStack000000000000002c = 0;
LAB_06677ba4:
        plVar10 = (long *)*plVar16;
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2390();
        }
        lVar14 = (**(code **)(*plVar10 + 0x1e8))(plVar10,*(undefined8 *)(*plVar10 + 0x1f0));
        iVar7 = iStack000000000000002c;
        if ((lVar14 - iStack000000000000004c) - (long)iStack000000000000002c < 1) {
          plVar10 = *(long **)(unaff_x19 + 0x14);
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_031f2390();
          }
          uVar13 = *(undefined8 *)(unaff_x19 + 10);
          uVar9 = (**(code **)(*plVar10 + 0x1e8))(plVar10,*(undefined8 *)(*plVar10 + 0x1f0));
          if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_031f2390();
          }
          FUN_06676828(uVar9,uVar13,(iVar7 - (int)uVar9) + iStack000000000000004c);
        }
        else {
          plVar10 = (long *)*plVar16;
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_031f2390();
          }
          iVar7 = (**(code **)(*plVar10 + 0x1e8))(plVar10,*(undefined8 *)(*plVar10 + 0x1f0));
          lVar18 = FUN_031f21dc(*(undefined8 *)PTR_DAT_0759bae0,
                                (iVar7 - iStack000000000000004c) - iStack000000000000002c);
          plVar17 = (long *)(unaff_x19 + 0xe);
          *plVar17 = lVar18;
          thunk_FUN_0329bf60(plVar17);
          plVar10 = (long *)*plVar16;
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_031f2390();
          }
          uVar9 = (**(code **)(*plVar10 + 0x3a8))(plVar10,*(undefined8 *)(*plVar10 + 0x3b0));
          lVar18 = *plVar17;
          if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_031f2390();
          }
          FUN_05e2e8d8(uVar9,iStack000000000000004c + iStack000000000000002c,lVar18,0,
                       *(undefined4 *)(lVar18 + 0x18),0);
        }
        in_stack_00000070 = 0;
        in_stack_00000078 = 0;
        in_stack_00000080 = 0;
        FUN_05311fa8(&stack0x00000070,lVar11,*(undefined8 *)(unaff_x19 + 0xe),unaff_x19[0x10],
                     *(undefined8 *)PTR_DAT_07616860);
        in_stack_00000058 = in_stack_00000078;
        in_stack_00000050 = in_stack_00000070;
        in_stack_00000060 = in_stack_00000080;
        *unaff_x19 = -2;
        unaff_x19[0xe] = 0;
        unaff_x19[0xf] = 0;
        thunk_FUN_0329bf60(unaff_x19 + 0xe,0);
        unaff_x19[0x12] = 0;
        unaff_x19[0x13] = 0;
        thunk_FUN_0329bf60(unaff_x19 + 0x12,0);
        unaff_x19[0x14] = 0;
        unaff_x19[0x15] = 0;
        thunk_FUN_0329bf60(plVar16,0);
        uVar6 = in_stack_00000060;
        uVar13 = in_stack_00000058;
        uVar9 = in_stack_00000050;
        if (*(int *)(*(long *)PTR_DAT_07616790 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        in_stack_00000078 = uVar13;
        in_stack_00000070 = uVar9;
        in_stack_00000080 = uVar6;
        FUN_050c054c(unaff_x19 + 2,&stack0x00000070,*(undefined8 *)PTR_DAT_07616850);
        return;
      }
      if (bVar2) {
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2390();
        }
        FUN_0673ed78(lVar11,lStack0000000000000040,0);
      }
      else {
        lVar14 = FUN_05c8b44c(lStack0000000000000040,0x20,0,0);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2390();
        }
        if (*(int *)(lVar14 + 0x18) < 2) {
          uVar9 = FUN_06769fd8(0xb,0,0);
          uVar13 = thunk_FUN_03257e30(PTR_DAT_07616858);
                    /* WARNING: Subroutine does not return */
          FUN_031f225c(uVar9,uVar13);
        }
        iVar7 = FUN_05c859ec(*(undefined8 *)(lVar14 + 0x20),*(undefined8 *)puVar4,1,0);
        if (iVar7 == 0) {
          lVar15 = *(long *)puVar3;
          if (*(int *)(lVar15 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
            lVar15 = *(long *)puVar3;
          }
          if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_031f2390();
          }
          *puVar1 = *(undefined8 *)(*(long *)(lVar15 + 0xb8) + 0x10);
          thunk_FUN_0329bf60(puVar1);
        }
        else {
          if (*(int *)(lVar14 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_031f2398();
          }
          iVar7 = FUN_05c859ec(*(undefined8 *)(lVar14 + 0x20),*(undefined8 *)puVar5,1,0);
          if (iVar7 != 0) {
            uVar9 = FUN_06769fd8(0xb,0,0);
            uVar13 = thunk_FUN_03257e30(PTR_DAT_07616858);
                    /* WARNING: Subroutine does not return */
            FUN_031f225c(uVar9,uVar13);
          }
          lVar15 = *(long *)puVar3;
          if (*(int *)(lVar15 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
            lVar15 = *(long *)puVar3;
          }
          if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_031f2390();
          }
          *puVar1 = *(undefined8 *)(*(long *)(lVar15 + 0xb8) + 8);
          thunk_FUN_0329bf60(puVar1);
        }
        if (*(uint *)(lVar14 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2398();
        }
        iVar7 = FUN_05e1e564(*(undefined8 *)(lVar14 + 0x28),0);
        unaff_x19[0x10] = iVar7;
        if (2 < *(int *)(lVar14 + 0x18)) {
          uVar9 = FUN_05c89a98(*(undefined8 *)PTR_DAT_075a8330,lVar14,2,*(int *)(lVar14 + 0x18) + -2
                               ,0);
          *(undefined8 *)(lVar18 + 0x38) = uVar9;
          thunk_FUN_0329bf60((undefined8 *)(lVar18 + 0x38));
        }
      }
      plVar10 = (long *)*plVar16;
      bVar2 = true;
      if (plVar10 == (long *)0x0) goto LAB_06677b5c;
    }
  }
LAB_06677b5c:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


