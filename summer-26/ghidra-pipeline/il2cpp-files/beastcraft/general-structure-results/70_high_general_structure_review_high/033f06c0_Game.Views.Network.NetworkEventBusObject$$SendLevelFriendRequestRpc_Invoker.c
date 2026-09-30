/*
FUNCTION_NAME: Game.Views.Network.NetworkEventBusObject$$SendLevelFriendRequestRpc@Invoker
ENTRY_POINT: 033f06c0
PROGRAM: beastcraft-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Game_Views_Network_NetworkEventBusObject__SendLevelFriendRequestRpc_Invoker(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined4 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *plVar9;
  ulong uVar10;
  long *unaff_x23;
  undefined1 auVar11 [16];
  long *in_stack_00000000;
  ulong in_stack_00000008;
  ulong in_stack_00000010;
  long *in_stack_00000050;
  ulong in_stack_00000058;
  ulong in_stack_00000060;
  long *plStack0000000000000070;
  ulong uStack0000000000000078;
  
  uStack0000000000000078 = in_stack_00000008;
  plStack0000000000000070 = in_stack_00000000;
  if (*(char *)(unaff_x21 + 0xde3) == '\0') {
    FUN_02e3ca1c(PTR_DAT_06a5def0);
    *(undefined1 *)(unaff_x21 + 0xde3) = 1;
  }
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  if (DAT_06e86de4 == '\0') {
    FUN_02e3ca1c(PTR_DAT_06a5df08);
    DAT_06e86de4 = '\x01';
  }
  plVar9 = plStack0000000000000070;
  if (plStack0000000000000070 != (long *)0x0) {
    lVar5 = *plStack0000000000000070;
    uVar10 = uStack0000000000000078 & 0xffff;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_06a5df08) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_033f0774;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_02e759c0(plStack0000000000000070,*(long *)PTR_DAT_06a5df08,0);
LAB_033f0774:
    iVar2 = (*(code *)*puVar3)(plVar9,uVar10,puVar3[1]);
    if (iVar2 == 0) {
      *unaff_x19 = 1;
      *(ulong *)(unaff_x19 + 10) = uStack0000000000000078;
      *(long **)(unaff_x19 + 8) = plStack0000000000000070;
      thunk_FUN_02ee2be8(unaff_x19 + 8,0);
      FUN_033fdd08(unaff_x19 + 2,&stack0x00000070);
      return;
    }
  }
  if (DAT_06e86de5 == '\0') {
    FUN_02e3ca1c(PTR_DAT_06a5df08);
    DAT_06e86de5 = '\x01';
  }
  plVar9 = plStack0000000000000070;
  if (plStack0000000000000070 != (long *)0x0) {
    lVar5 = *plStack0000000000000070;
    uVar10 = uStack0000000000000078 & 0xffff;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_06a5df08) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar8 + 2) * 0x10 + 0x138);
          goto LAB_033f080c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_02e759c0(plStack0000000000000070,*(long *)PTR_DAT_06a5df08,2);
LAB_033f080c:
    (*(code *)*puVar3)(plVar9,uVar10,puVar3[1]);
  }
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
  plVar9 = *(long **)(unaff_x20 + 0x38);
  uVar4 = FUN_054114e0();
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
  lVar5 = *plVar9;
  uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_06a61488) {
        puVar3 = (undefined8 *)(lVar5 + (long)(*piVar8 + 1) * 0x10 + 0x138);
        goto LAB_033f0890;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_02e759c0(plVar9,*(long *)PTR_DAT_06a61488,1);
LAB_033f0890:
  (*(code *)*puVar3)(plVar9,uVar4,puVar3[1]);
  if ((*(byte *)(*(long *)(*(long *)PTR_DAT_06a614a0 + 0x20) + 0x135) & 1) == 0) {
    FUN_02e7568c();
  }
  thunk_FUN_02ee2be8();
  in_stack_00000058 = in_stack_00000008;
  in_stack_00000050 = in_stack_00000000;
  in_stack_00000060 = in_stack_00000010;
  uVar7 = FUN_033a6650(&stack0x00000050,*(undefined8 *)PTR_DAT_06a61478);
  plVar9 = in_stack_00000050;
  if ((uVar7 & 1) == 0) {
    *unaff_x19 = 2;
    *(ulong *)(unaff_x19 + 0xe) = in_stack_00000058;
    *(long **)(unaff_x19 + 0xc) = in_stack_00000050;
    *(ulong *)(unaff_x19 + 0x10) = in_stack_00000060;
    thunk_FUN_02ee2be8(unaff_x19 + 0xc,0);
    FUN_033fde14(unaff_x19 + 2,&stack0x00000050);
  }
  else {
    uVar7 = in_stack_00000058;
    if (in_stack_00000050 != (long *)0x0) {
      uVar7 = in_stack_00000060 & 0xffff;
      lVar5 = *(long *)(*(long *)PTR_DAT_06a61470 + 0x20);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02e7568c();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02e7568c(lVar5);
      }
      lVar6 = *plVar9;
      uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar10 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar5) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_033f09fc;
          }
          uVar10 = uVar10 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar10 != 0);
      }
      puVar3 = (undefined8 *)FUN_02e759c0(plVar9,lVar5,0);
LAB_033f09fc:
      uVar7 = (*(code *)*puVar3)(plVar9,uVar7,puVar3[1]);
    }
    *(ulong *)(unaff_x19 + 6) = uVar7;
    thunk_FUN_02ee2be8();
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    lVar5 = *(long *)(unaff_x20 + 0x28);
    uVar4 = FUN_054114e0();
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4(uVar4,uVar4);
    }
    auVar11 = FUN_03443178(lVar5,uVar4,0);
    puVar1 = PTR_DAT_06a5def0;
    if (*(int *)(*(long *)PTR_DAT_06a5def0 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
    }
    thunk_FUN_02ee2be8();
    _plStack0000000000000070 = auVar11;
    if (DAT_06e86de3 == '\0') {
      FUN_02e3ca1c(PTR_DAT_06a5def0);
      DAT_06e86de3 = '\x01';
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
    }
    if (DAT_06e86de4 == '\0') {
      FUN_02e3ca1c(PTR_DAT_06a5df08);
      DAT_06e86de4 = '\x01';
    }
    plVar9 = plStack0000000000000070;
    if (plStack0000000000000070 != (long *)0x0) {
      lVar5 = *plStack0000000000000070;
      uVar10 = uStack0000000000000078 & 0xffff;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_06a5df08) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_033f0b2c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_02e759c0(plStack0000000000000070,*(long *)PTR_DAT_06a5df08,0);
LAB_033f0b2c:
      iVar2 = (*(code *)*puVar3)(plVar9,uVar10,puVar3[1]);
      if (iVar2 == 0) {
        *unaff_x19 = 3;
        *(undefined1 (*) [16])(unaff_x19 + 8) = _plStack0000000000000070;
        thunk_FUN_02ee2be8(unaff_x19 + 8,0);
        FUN_033fdd08(unaff_x19 + 2,&stack0x00000070);
        return;
      }
    }
    if (DAT_06e86de5 == '\0') {
      FUN_02e3ca1c(PTR_DAT_06a5df08);
      DAT_06e86de5 = '\x01';
    }
    plVar9 = plStack0000000000000070;
    if (plStack0000000000000070 != (long *)0x0) {
      lVar5 = *plStack0000000000000070;
      uVar10 = uStack0000000000000078 & 0xffff;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_06a5df08) {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar8 + 2) * 0x10 + 0x138);
            goto LAB_033f0bc4;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_02e759c0(plStack0000000000000070,*(long *)PTR_DAT_06a5df08,2);
LAB_033f0bc4:
      (*(code *)*puVar3)(plVar9,uVar10,puVar3[1]);
    }
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    lVar5 = *(long *)(unaff_x20 + 0x30);
    uVar4 = FUN_054114e0();
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4(uVar4,uVar4);
    }
    auVar11 = FUN_03440a74(lVar5,uVar4,0);
    puVar1 = PTR_DAT_06a5def0;
    if (*(int *)(*(long *)PTR_DAT_06a5def0 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
    }
    thunk_FUN_02ee2be8();
    _plStack0000000000000070 = auVar11;
    if (DAT_06e86de3 == '\0') {
      FUN_02e3ca1c(PTR_DAT_06a5def0);
      DAT_06e86de3 = '\x01';
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
    }
    if (DAT_06e86de4 == '\0') {
      FUN_02e3ca1c(PTR_DAT_06a5df08);
      DAT_06e86de4 = '\x01';
    }
    plVar9 = plStack0000000000000070;
    if (plStack0000000000000070 != (long *)0x0) {
      lVar5 = *plStack0000000000000070;
      uVar10 = uStack0000000000000078 & 0xffff;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_06a5df08) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
            goto Game_Views_Network_NetworkWire__get_OnFixedUpdateNetwork;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_02e759c0(plStack0000000000000070,*(long *)PTR_DAT_06a5df08,0);
Game_Views_Network_NetworkWire__get_OnFixedUpdateNetwork:
      iVar2 = (*(code *)*puVar3)(plVar9,uVar10,puVar3[1]);
      if (iVar2 == 0) {
        *unaff_x19 = 4;
        *(undefined1 (*) [16])(unaff_x19 + 8) = _plStack0000000000000070;
        thunk_FUN_02ee2be8(unaff_x19 + 8,0);
        FUN_033fdd08(unaff_x19 + 2,&stack0x00000070);
        return;
      }
    }
    if (DAT_06e86de5 == '\0') {
      FUN_02e3ca1c(PTR_DAT_06a5df08);
      DAT_06e86de5 = '\x01';
    }
    plVar9 = plStack0000000000000070;
    if (plStack0000000000000070 != (long *)0x0) {
      lVar5 = *plStack0000000000000070;
      uVar10 = uStack0000000000000078 & 0xffff;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_06a5df08) {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar8 + 2) * 0x10 + 0x138);
            goto LAB_033f0db8;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_02e759c0(plStack0000000000000070,*(long *)PTR_DAT_06a5df08,2);
LAB_033f0db8:
      (*(code *)*puVar3)(plVar9,uVar10,puVar3[1]);
    }
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    if (*(long *)(unaff_x20 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    FUN_0343cd44(*(long *)(unaff_x20 + 0x58),*(undefined8 *)(unaff_x19 + 6),0);
    if (*(long *)(unaff_x19 + 6) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    if (*(long *)(unaff_x20 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    Game_Views_BuildZones_ClosedBuildZonePlaceholder___ctor
              (*(long *)(unaff_x20 + 0x48),*(undefined8 *)(*(long *)(unaff_x19 + 6) + 0x58),0);
    if (*(long *)(unaff_x20 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    FUN_0342fbf4(*(long *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x19 + 6),0);
    if (*(long *)(unaff_x20 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    uVar7 = FUN_0342ffe4(*(long *)(unaff_x20 + 0x18),0);
    if ((uVar7 & 1) == 0) {
      uVar4 = thunk_FUN_02e78ab8(*(undefined8 *)PTR_DAT_06a61480);
      FUN_034187b8(uVar4,*(undefined8 *)PTR_DAT_06a614a8,0);
      if (*(int *)(*(long *)PTR_DAT_06a5f770 + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      FUN_0411de9c(uVar4,*(undefined8 *)PTR_DAT_06a61498);
      uVar4 = FUN_054114e0();
      puVar1 = PTR_DAT_06a5def0;
      if (*(int *)(*(long *)PTR_DAT_06a5def0 + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      auVar11 = FUN_05c28b34(0x3c,0,8,uVar4,0,0);
      thunk_FUN_02ee2be8();
      _plStack0000000000000070 = auVar11;
      if (DAT_06e86de3 == '\0') {
        FUN_02e3ca1c(PTR_DAT_06a5def0);
        DAT_06e86de3 = '\x01';
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      if (DAT_06e86de4 == '\0') {
        FUN_02e3ca1c(PTR_DAT_06a5df08);
        DAT_06e86de4 = '\x01';
      }
      plVar9 = plStack0000000000000070;
      if (plStack0000000000000070 != (long *)0x0) {
        lVar5 = *plStack0000000000000070;
        uVar10 = uStack0000000000000078 & 0xffff;
        uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_06a5df08) {
              puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_033f1010;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)FUN_02e759c0(plStack0000000000000070,*(long *)PTR_DAT_06a5df08,0);
LAB_033f1010:
        iVar2 = (*(code *)*puVar3)(plVar9,uVar10,puVar3[1]);
        if (iVar2 == 0) {
          *unaff_x19 = 5;
          *(undefined1 (*) [16])(unaff_x19 + 8) = _plStack0000000000000070;
          thunk_FUN_02ee2be8(unaff_x19 + 8,0);
          FUN_033fdd08(unaff_x19 + 2,&stack0x00000070);
          return;
        }
      }
      if (DAT_06e86de5 == '\0') {
        FUN_02e3ca1c(PTR_DAT_06a5df08);
        DAT_06e86de5 = '\x01';
      }
      plVar9 = plStack0000000000000070;
      if (plStack0000000000000070 != (long *)0x0) {
        lVar5 = *plStack0000000000000070;
        uVar10 = uStack0000000000000078 & 0xffff;
        uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_06a5df08) {
              puVar3 = (undefined8 *)(lVar5 + (long)(*piVar8 + 2) * 0x10 + 0x138);
              goto FUN_033f10a8;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)FUN_02e759c0(plStack0000000000000070,*(long *)PTR_DAT_06a5df08,2);
FUN_033f10a8:
        (*(code *)*puVar3)(plVar9,uVar10,puVar3[1]);
      }
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02e3ccc4();
      }
      if (*(long *)(unaff_x20 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02e3ccc4();
      }
      FUN_036e8394(*(long *)(unaff_x20 + 0x50),*(undefined8 *)PTR_DAT_06a60288);
    }
    else {
      if (*(long *)(unaff_x20 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02e3ccc4();
      }
      FUN_03433d9c(*(long *)(unaff_x20 + 0x20),0);
    }
    *(undefined8 *)(unaff_x19 + 6) = 0;
    *unaff_x19 = 0xfffffffe;
    thunk_FUN_02ee2be8(unaff_x19 + 6,0);
    Game_Views_UI_Screens_Menu_MenuPanel__SetActivePublishSceneWidget(unaff_x19 + 2,0);
  }
  return;
}


