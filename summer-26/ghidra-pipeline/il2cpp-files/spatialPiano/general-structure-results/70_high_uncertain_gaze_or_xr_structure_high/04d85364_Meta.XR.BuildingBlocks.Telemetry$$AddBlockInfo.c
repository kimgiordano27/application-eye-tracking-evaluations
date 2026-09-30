/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.Telemetry$$AddBlockInfo
ENTRY_POINT: 04d85364
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 Meta_XR_BuildingBlocks_Telemetry__AddBlockInfo(void)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  long unaff_x19;
  long *unaff_x20;
  long *plVar9;
  undefined8 uVar10;
  long *unaff_x24;
  long unaff_x25;
  
  uVar4 = FUN_050ed374();
  if ((uVar4 & 1) != 0) {
    lVar5 = (**(code **)(*unaff_x20 + 0x458))();
    if (lVar5 == 0) {
LAB_04d85684:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    if (*(int *)(lVar5 + 0x18) == 0) {
LAB_04d85688:
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    plVar9 = *(long **)(lVar5 + 0x20);
    if (plVar9 != (long *)0x0) {
      bVar1 = *(byte *)(*unaff_x24 + 0x130);
      if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x24)) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08d48(plVar9);
      }
    }
    uVar10 = *(undefined8 *)PTR_DAT_067ce400;
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    plVar6 = (long *)FUN_050e4454(uVar10,0);
    plVar7 = (long *)FUN_02f0880c(*(undefined8 *)PTR_DAT_067ca1a8,1);
    if (plVar7 == (long *)0x0) goto LAB_04d85684;
    if ((plVar9 != (long *)0x0) &&
       (lVar5 = thunk_FUN_02f45174(plVar9,*(undefined8 *)(*plVar7 + 0x40)), lVar5 == 0)) {
      uVar10 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
      FUN_02f0888c(uVar10,0);
    }
    if ((int)plVar7[3] == 0) goto LAB_04d85688;
    plVar7[4] = (long)plVar9;
    if ((plVar6 == (long *)0x0) ||
       (plVar6 = (long *)(**(code **)(*plVar6 + 0x938))
                                   (plVar6,plVar7,*(undefined8 *)(*plVar6 + 0x940)),
       plVar6 == (long *)0x0)) goto LAB_04d85684;
    uVar4 = (**(code **)(*plVar6 + 0x298))(plVar6,plVar9,*(undefined8 *)(*plVar6 + 0x2a0));
    if ((uVar4 & 1) != 0) {
      uVar10 = *(undefined8 *)PTR_DAT_067ce418;
      if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar10 = FUN_050e4454(uVar10,0);
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_02f6670c(*unaff_x24);
      }
      goto LAB_04d855b8;
    }
  }
  uVar4 = (**(code **)(*unaff_x20 + 0x598))();
  if ((uVar4 & 1) == 0) goto LAB_04d85618;
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
        if (uVar3 != 7) goto LAB_04d85568;
        lVar5 = *(long *)(unaff_x25 + 0xe0);
        puVar8 = (undefined8 *)PTR_DAT_067ce428;
      }
      else {
        lVar5 = *(long *)(unaff_x25 + 0xe0);
        puVar8 = (undefined8 *)PTR_DAT_067ce410;
      }
    }
    else {
      lVar5 = *(long *)(unaff_x25 + 0xe0);
      puVar8 = (undefined8 *)PTR_DAT_067ce3f0;
    }
  }
  else {
LAB_04d85568:
    if (uVar3 != 5) {
LAB_04d85618:
      lVar5 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02f41e9c();
      }
      if ((*(ushort *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        FUN_02f41e9c();
      }
      uVar10 = thunk_FUN_02f45270();
      lVar5 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02f41e9c(lVar5);
      }
      FUN_03f25a20(uVar10,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x38));
      return uVar10;
    }
    lVar5 = *(long *)(unaff_x25 + 0xe0);
    puVar8 = (undefined8 *)PTR_DAT_067ce420;
  }
  uVar10 = *puVar8;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar10 = FUN_050e4454(uVar10,0);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02f6670c(*unaff_x24);
  }
LAB_04d855b8:
  uVar10 = FUN_05115b34(uVar10);
  lVar5 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02f41e9c(lVar5);
  }
  lVar5 = **(long **)(lVar5 + 0xc0);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02f41e9c(lVar5);
  }
  uVar10 = FUN_02a7e998(uVar10,lVar5);
  return uVar10;
}


