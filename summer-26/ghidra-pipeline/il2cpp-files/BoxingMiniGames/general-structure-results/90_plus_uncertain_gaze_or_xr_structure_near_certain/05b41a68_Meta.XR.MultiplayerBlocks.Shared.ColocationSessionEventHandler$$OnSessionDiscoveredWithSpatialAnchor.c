/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler$$OnSessionDiscoveredWithSpatialAnchor
ENTRY_POINT: 05b41a68
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 91
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


undefined8
Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler__OnSessionDiscoveredWithSpatialAnchor
          (void)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  code *in_x9;
  long unaff_x19;
  long *unaff_x20;
  long *plVar10;
  undefined8 uVar11;
  long *unaff_x24;
  long unaff_x25;
  
  uVar4 = (*in_x9)();
  uVar11 = *(undefined8 *)PTR_DAT_07a02540;
  if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_036a1978(*(long *)(unaff_x25 + 0xe0));
  }
  uVar11 = FUN_05e26f18(uVar11,0);
  uVar5 = FUN_05e30794(uVar4,uVar11,0);
  if ((uVar5 & 1) != 0) {
    lVar6 = (**(code **)(*unaff_x20 + 0x458))();
    if (lVar6 == 0) {
LAB_05b41dd4:
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    if (*(int *)(lVar6 + 0x18) == 0) {
LAB_05b41dd8:
                    /* WARNING: Subroutine does not return */
      FUN_03642c20();
    }
    plVar10 = *(long **)(lVar6 + 0x20);
    if (plVar10 != (long *)0x0) {
      bVar1 = *(byte *)(*unaff_x24 + 0x130);
      if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x24)) {
                    /* WARNING: Subroutine does not return */
        FUN_03643084(plVar10);
      }
    }
    uVar4 = *(undefined8 *)PTR_DAT_07a03000;
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    plVar7 = (long *)FUN_05e26f18(uVar4,0);
    plVar8 = (long *)FUN_03642a4c(*(undefined8 *)PTR_DAT_079f7098,1);
    if (plVar8 == (long *)0x0) goto LAB_05b41dd4;
    if ((plVar10 != (long *)0x0) &&
       (lVar6 = thunk_FUN_0367fd24(plVar10,*(undefined8 *)(*plVar8 + 0x40)), lVar6 == 0)) {
      uVar4 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
      FUN_03642acc(uVar4,0);
    }
    if ((int)plVar8[3] == 0) goto LAB_05b41dd8;
    plVar8[4] = (long)plVar10;
    thunk_FUN_036b7ad0(plVar8 + 4,plVar10);
    if ((plVar7 == (long *)0x0) ||
       (plVar7 = (long *)(**(code **)(*plVar7 + 0x948))
                                   (plVar7,plVar8,*(undefined8 *)(*plVar7 + 0x950)),
       plVar7 == (long *)0x0)) goto LAB_05b41dd4;
    uVar5 = (**(code **)(*plVar7 + 0x298))(plVar7,plVar10,*(undefined8 *)(*plVar7 + 0x2a0));
    if ((uVar5 & 1) != 0) {
      uVar4 = *(undefined8 *)PTR_DAT_07a03018;
      if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      uVar4 = FUN_05e26f18(uVar4,0);
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_036a1978(*unaff_x24);
      }
      goto LAB_05b41d08;
    }
  }
  uVar5 = (**(code **)(*unaff_x20 + 0x598))();
  if ((uVar5 & 1) == 0) goto LAB_05b41d68;
  if (*(int *)(*(long *)(unaff_x25 + 0x98) + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  uVar4 = FUN_05e4c8a4();
  if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_036a1978(*(long *)(unaff_x25 + 0xe0));
  }
  uVar3 = FUN_05e32ff8(uVar4,0);
  if (uVar3 < 0xd) {
    uVar2 = 1 << (ulong)(uVar3 & 0x1f);
    if ((uVar2 & 0x740) == 0) {
      if ((uVar2 & 0x1800) == 0) {
        if (uVar3 != 7) goto LAB_05b41cb8;
        lVar6 = *(long *)(unaff_x25 + 0xe0);
        puVar9 = (undefined8 *)PTR_DAT_07a03028;
      }
      else {
        lVar6 = *(long *)(unaff_x25 + 0xe0);
        puVar9 = (undefined8 *)PTR_DAT_07a03010;
      }
    }
    else {
      lVar6 = *(long *)(unaff_x25 + 0xe0);
      puVar9 = (undefined8 *)PTR_DAT_07a02ff0;
    }
  }
  else {
LAB_05b41cb8:
    if (uVar3 != 5) {
LAB_05b41d68:
      lVar6 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0367c9fc();
      }
      if ((*(ushort *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        FUN_0367c9fc();
      }
      uVar4 = thunk_FUN_0367fe20();
      lVar6 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0367c9fc(lVar6);
      }
      FUN_04a708dc(uVar4,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x38));
      return uVar4;
    }
    lVar6 = *(long *)(unaff_x25 + 0xe0);
    puVar9 = (undefined8 *)PTR_DAT_07a03020;
  }
  uVar4 = *puVar9;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  uVar4 = FUN_05e26f18(uVar4,0);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_036a1978(*unaff_x24);
  }
LAB_05b41d08:
  uVar4 = FUN_05e59d90(uVar4);
  lVar6 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0367c9fc(lVar6);
  }
  lVar6 = **(long **)(lVar6 + 0xc0);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0367c9fc(lVar6);
  }
  uVar4 = FUN_03156018(uVar4,lVar6);
  return uVar4;
}


