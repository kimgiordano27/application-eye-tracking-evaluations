/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.ControllerButtonsMapper.ButtonClickAction$$OnCallbackWithContext
ENTRY_POINT: 04d85d48
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


long * Meta_XR_BuildingBlocks_ControllerButtonsMapper_ButtonClickAction__OnCallbackWithContext
                 (long param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  long *unaff_x24;
  long unaff_x25;
  
  uVar10 = *(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x28);
  if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02f6670c(*(long *)(unaff_x25 + 0xe0));
  }
  plVar4 = (long *)FUN_050e4454(uVar10,0);
  if (plVar4 == (long *)0x0) {
Meta_XR_BuildingBlocks_RoomMeshController_<LoadRoomMesh>d__6___ctor:
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar5 = (**(code **)(*plVar4 + 0x298))();
  if ((uVar5 & 1) != 0) {
    uVar10 = *(undefined8 *)PTR_DAT_067ce3f8;
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar10 = FUN_050e4454(uVar10,0);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_02f6670c(*unaff_x24);
    }
    plVar4 = (long *)FUN_05115b34(uVar10);
    lVar8 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02f41e9c(lVar8);
    }
    lVar8 = **(long **)(lVar8 + 0xc0);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02f41e9c(lVar8);
    }
    if (plVar4 == (long *)0x0) {
      return (long *)0x0;
    }
    if ((*(byte *)(lVar8 + 0x130) <= *(byte *)(*plVar4 + 0x130)) &&
       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(lVar8 + 0x130) * 8 + -8) == lVar8)) {
      return plVar4;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f08d48(plVar4);
  }
  if (unaff_x20 == (long *)0x0)
  goto Meta_XR_BuildingBlocks_RoomMeshController_<LoadRoomMesh>d__6___ctor;
  uVar5 = (**(code **)(*unaff_x20 + 0x3b8))();
  if ((uVar5 & 1) != 0) {
    uVar10 = (**(code **)(*unaff_x20 + 0x438))();
    uVar11 = *(undefined8 *)PTR_DAT_067cda88;
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)(unaff_x25 + 0xe0));
    }
    uVar11 = FUN_050e4454(uVar11,0);
    uVar5 = FUN_050ed374(uVar10,uVar11,0);
    if ((uVar5 & 1) != 0) {
      lVar8 = (**(code **)(*unaff_x20 + 0x458))();
      if (lVar8 == 0) goto Meta_XR_BuildingBlocks_RoomMeshController_<LoadRoomMesh>d__6___ctor;
      if (*(int *)(lVar8 + 0x18) == 0) {
LAB_04d86194:
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      plVar4 = *(long **)(lVar8 + 0x20);
      if (plVar4 != (long *)0x0) {
        bVar1 = *(byte *)(*unaff_x24 + 0x130);
        if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x24)) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08d48(plVar4);
        }
      }
      uVar10 = *(undefined8 *)PTR_DAT_067ce400;
      if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      plVar6 = (long *)FUN_050e4454(uVar10,0);
      plVar7 = (long *)FUN_02f0880c(*(undefined8 *)PTR_DAT_067ca1a8,1);
      if (plVar7 == (long *)0x0)
      goto Meta_XR_BuildingBlocks_RoomMeshController_<LoadRoomMesh>d__6___ctor;
      if ((plVar4 != (long *)0x0) &&
         (lVar8 = thunk_FUN_02f45174(plVar4,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0)) {
        uVar10 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
        FUN_02f0888c(uVar10,0);
      }
      if ((int)plVar7[3] == 0) goto LAB_04d86194;
      plVar7[4] = (long)plVar4;
      if ((plVar6 == (long *)0x0) ||
         (plVar6 = (long *)(**(code **)(*plVar6 + 0x938))
                                     (plVar6,plVar7,*(undefined8 *)(*plVar6 + 0x940)),
         plVar6 == (long *)0x0))
      goto Meta_XR_BuildingBlocks_RoomMeshController_<LoadRoomMesh>d__6___ctor;
      uVar5 = (**(code **)(*plVar6 + 0x298))(plVar6,plVar4,*(undefined8 *)(*plVar6 + 0x2a0));
      if ((uVar5 & 1) != 0) {
        uVar10 = *(undefined8 *)PTR_DAT_067ce418;
        if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar10 = FUN_050e4454(uVar10,0);
        if (*(int *)(*unaff_x24 + 0xe4) == 0) {
          thunk_FUN_02f6670c(*unaff_x24);
        }
        goto LAB_04d860c4;
      }
    }
  }
  uVar5 = (**(code **)(*unaff_x20 + 0x598))();
  if ((uVar5 & 1) == 0) goto LAB_04d86124;
  if (*(int *)(*(long *)(unaff_x25 + 0x98) + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar10 = FUN_05108c84();
  if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02f6670c(*(long *)(unaff_x25 + 0xe0));
  }
  uVar3 = FUN_050efb68(uVar10,0);
  if (uVar3 < 0xd) {
    uVar2 = 1 << (ulong)(uVar3 & 0x1f);
    if ((uVar2 & 0x740) == 0) {
      if ((uVar2 & 0x1800) == 0) {
        if (uVar3 != 7) goto LAB_04d86074;
        lVar8 = *(long *)(unaff_x25 + 0xe0);
        puVar9 = (undefined8 *)PTR_DAT_067ce428;
      }
      else {
        lVar8 = *(long *)(unaff_x25 + 0xe0);
        puVar9 = (undefined8 *)PTR_DAT_067ce410;
      }
    }
    else {
      lVar8 = *(long *)(unaff_x25 + 0xe0);
      puVar9 = (undefined8 *)PTR_DAT_067ce3f0;
    }
  }
  else {
LAB_04d86074:
    if (uVar3 != 5) {
LAB_04d86124:
      lVar8 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_02f41e9c();
      }
      if ((*(ushort *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        FUN_02f41e9c();
      }
      plVar4 = (long *)thunk_FUN_02f45270();
      lVar8 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_02f41e9c(lVar8);
      }
      FUN_03f25d88(plVar4,*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x38));
      return plVar4;
    }
    lVar8 = *(long *)(unaff_x25 + 0xe0);
    puVar9 = (undefined8 *)PTR_DAT_067ce420;
  }
  uVar10 = *puVar9;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar10 = FUN_050e4454(uVar10,0);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02f6670c(*unaff_x24);
  }
LAB_04d860c4:
  uVar10 = FUN_05115b34(uVar10);
  lVar8 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_02f41e9c(lVar8);
  }
  lVar8 = **(long **)(lVar8 + 0xc0);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_02f41e9c(lVar8);
  }
  plVar4 = (long *)FUN_02a7e998(uVar10,lVar8);
  return plVar4;
}


