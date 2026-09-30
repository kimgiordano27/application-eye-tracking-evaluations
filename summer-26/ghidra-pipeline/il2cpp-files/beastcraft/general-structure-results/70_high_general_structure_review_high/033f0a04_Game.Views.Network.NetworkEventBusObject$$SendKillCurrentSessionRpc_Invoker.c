/*
FUNCTION_NAME: Game.Views.Network.NetworkEventBusObject$$SendKillCurrentSessionRpc@Invoker
ENTRY_POINT: 033f0a04
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


void Game_Views_Network_NetworkEventBusObject__SendKillCurrentSessionRpc_Invoker
               (code *param_1,undefined8 param_2)

{
  undefined *puVar1;
  long *plVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  undefined4 *unaff_x19;
  long unaff_x20;
  long lVar8;
  undefined4 unaff_w22;
  ulong uVar9;
  undefined1 auVar10 [16];
  long *in_stack_00000070;
  ulong in_stack_00000078;
  
  uVar4 = (*param_1)(param_2,unaff_w22);
  *(undefined8 *)(unaff_x19 + 6) = uVar4;
  thunk_FUN_02ee2be8();
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
  lVar8 = *(long *)(unaff_x20 + 0x28);
  uVar4 = FUN_054114e0();
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4(uVar4,uVar4);
  }
  auVar10 = FUN_03443178(lVar8,uVar4,0);
  puVar1 = PTR_DAT_06a5def0;
  if (*(int *)(*(long *)PTR_DAT_06a5def0 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  thunk_FUN_02ee2be8();
  _in_stack_00000070 = auVar10;
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
  plVar2 = in_stack_00000070;
  if (in_stack_00000070 != (long *)0x0) {
    lVar8 = *in_stack_00000070;
    uVar9 = in_stack_00000078 & 0xffff;
    uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_06a5df08) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_033f0b2c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined8 *)FUN_02e759c0(in_stack_00000070,*(long *)PTR_DAT_06a5df08,0);
LAB_033f0b2c:
    iVar3 = (*(code *)*puVar5)(plVar2,uVar9,puVar5[1]);
    if (iVar3 == 0) {
      *unaff_x19 = 3;
      *(undefined1 (*) [16])(unaff_x19 + 8) = _in_stack_00000070;
      thunk_FUN_02ee2be8(unaff_x19 + 8,0);
      FUN_033fdd08(unaff_x19 + 2,&stack0x00000070);
      return;
    }
  }
  if (DAT_06e86de5 == '\0') {
    FUN_02e3ca1c(PTR_DAT_06a5df08);
    DAT_06e86de5 = '\x01';
  }
  plVar2 = in_stack_00000070;
  if (in_stack_00000070 != (long *)0x0) {
    lVar8 = *in_stack_00000070;
    uVar9 = in_stack_00000078 & 0xffff;
    uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_06a5df08) {
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_033f0bc4;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined8 *)FUN_02e759c0(in_stack_00000070,*(long *)PTR_DAT_06a5df08,2);
LAB_033f0bc4:
    (*(code *)*puVar5)(plVar2,uVar9,puVar5[1]);
  }
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
  lVar8 = *(long *)(unaff_x20 + 0x30);
  uVar4 = FUN_054114e0();
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4(uVar4,uVar4);
  }
  auVar10 = FUN_03440a74(lVar8,uVar4,0);
  puVar1 = PTR_DAT_06a5def0;
  if (*(int *)(*(long *)PTR_DAT_06a5def0 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  thunk_FUN_02ee2be8();
  _in_stack_00000070 = auVar10;
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
  plVar2 = in_stack_00000070;
  if (in_stack_00000070 != (long *)0x0) {
    lVar8 = *in_stack_00000070;
    uVar9 = in_stack_00000078 & 0xffff;
    uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_06a5df08) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar7 * 0x10 + 0x138);
          goto Game_Views_Network_NetworkWire__get_OnFixedUpdateNetwork;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined8 *)FUN_02e759c0(in_stack_00000070,*(long *)PTR_DAT_06a5df08,0);
Game_Views_Network_NetworkWire__get_OnFixedUpdateNetwork:
    iVar3 = (*(code *)*puVar5)(plVar2,uVar9,puVar5[1]);
    if (iVar3 == 0) {
      *unaff_x19 = 4;
      *(undefined1 (*) [16])(unaff_x19 + 8) = _in_stack_00000070;
      thunk_FUN_02ee2be8(unaff_x19 + 8,0);
      FUN_033fdd08(unaff_x19 + 2,&stack0x00000070);
      return;
    }
  }
  if (DAT_06e86de5 == '\0') {
    FUN_02e3ca1c(PTR_DAT_06a5df08);
    DAT_06e86de5 = '\x01';
  }
  plVar2 = in_stack_00000070;
  if (in_stack_00000070 != (long *)0x0) {
    lVar8 = *in_stack_00000070;
    uVar9 = in_stack_00000078 & 0xffff;
    uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_06a5df08) {
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_033f0db8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined8 *)FUN_02e759c0(in_stack_00000070,*(long *)PTR_DAT_06a5df08,2);
LAB_033f0db8:
    (*(code *)*puVar5)(plVar2,uVar9,puVar5[1]);
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
  uVar6 = FUN_0342ffe4(*(long *)(unaff_x20 + 0x18),0);
  if ((uVar6 & 1) == 0) {
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
    auVar10 = FUN_05c28b34(0x3c,0,8,uVar4,0,0);
    thunk_FUN_02ee2be8();
    _in_stack_00000070 = auVar10;
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
    plVar2 = in_stack_00000070;
    if (in_stack_00000070 != (long *)0x0) {
      lVar8 = *in_stack_00000070;
      uVar9 = in_stack_00000078 & 0xffff;
      uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_06a5df08) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_033f1010;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar5 = (undefined8 *)FUN_02e759c0(in_stack_00000070,*(long *)PTR_DAT_06a5df08,0);
LAB_033f1010:
      iVar3 = (*(code *)*puVar5)(plVar2,uVar9,puVar5[1]);
      if (iVar3 == 0) {
        *unaff_x19 = 5;
        *(undefined1 (*) [16])(unaff_x19 + 8) = _in_stack_00000070;
        thunk_FUN_02ee2be8(unaff_x19 + 8,0);
        FUN_033fdd08(unaff_x19 + 2,&stack0x00000070);
        return;
      }
    }
    if (DAT_06e86de5 == '\0') {
      FUN_02e3ca1c(PTR_DAT_06a5df08);
      DAT_06e86de5 = '\x01';
    }
    plVar2 = in_stack_00000070;
    if (in_stack_00000070 != (long *)0x0) {
      lVar8 = *in_stack_00000070;
      uVar9 = in_stack_00000078 & 0xffff;
      uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_06a5df08) {
            puVar5 = (undefined8 *)(lVar8 + (long)(*piVar7 + 2) * 0x10 + 0x138);
            goto FUN_033f10a8;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar5 = (undefined8 *)FUN_02e759c0(in_stack_00000070,*(long *)PTR_DAT_06a5df08,2);
FUN_033f10a8:
      (*(code *)*puVar5)(plVar2,uVar9,puVar5[1]);
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
  return;
}


