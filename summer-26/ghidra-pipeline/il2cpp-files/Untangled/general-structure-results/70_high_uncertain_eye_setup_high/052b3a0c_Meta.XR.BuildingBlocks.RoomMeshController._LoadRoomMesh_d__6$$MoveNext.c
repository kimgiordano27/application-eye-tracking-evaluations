/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.RoomMeshController.<LoadRoomMesh>d__6$$MoveNext
ENTRY_POINT: 052b3a0c
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_BuildingBlocks_RoomMeshController_<LoadRoomMesh>d__6__MoveNext(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x19;
  long unaff_x20;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  long *unaff_x24;
  
  FUN_02f07e70(PTR_DAT_06d3d1a0);
  FUN_02f07e70(PTR_DAT_06d01fb8);
  FUN_02f07e70(PTR_DAT_06d01e20);
  FUN_02f07e70(PTR_DAT_06d3d1a8);
  FUN_02f07e70(PTR_DAT_06d3d1b0);
  FUN_02f07e70(PTR_DAT_06d3d1b8);
  FUN_02f07e70(PTR_DAT_06d3d0e0);
  FUN_02f07e70(PTR_DAT_06d026a8);
  FUN_02f07e70(PTR_DAT_06d3d0e8);
  FUN_02f07e70(PTR_DAT_06d3d1c0);
  *(undefined1 *)(unaff_x20 + 1) = 1;
  plVar6 = (long *)(unaff_x19 + 0x38);
  lVar7 = *plVar6;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar3 = FUN_066cd30c(lVar7,0);
  if ((uVar3 & 1) == 0) {
    lVar7 = FUN_066c67b0();
    if ((lVar7 == 0) || (lVar7 = FUN_066d60d0(lVar7,0), lVar7 == 0)) goto LAB_052b3f54;
    uVar4 = FUN_037f22a4(lVar7,*(undefined8 *)PTR_DAT_06d0bea0);
    puVar1 = PTR_DAT_06d3d1b8;
    lVar7 = *(long *)PTR_DAT_06d3d1b8;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_02f12b58(lVar7);
      lVar7 = *(long *)puVar1;
    }
    lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
    if (lVar9 == 0) {
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_02f12b58(lVar7);
        lVar7 = *(long *)puVar1;
      }
      uVar10 = **(undefined8 **)(lVar7 + 0xb8);
      lVar9 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d0bc80);
      FUN_0513bd28(lVar9,uVar10,*(undefined8 *)PTR_DAT_06d3d1a8,0);
      plVar5 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
      *plVar5 = lVar9;
      thunk_FUN_02f411dc(plVar5,lVar9);
    }
    lVar7 = FUN_03a1d938(uVar4,lVar9,*(undefined8 *)PTR_DAT_06d0bc78);
    *plVar6 = lVar7;
    thunk_FUN_02f411dc(plVar6,lVar7);
  }
  lVar7 = *plVar6;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar3 = FUN_066cd30c(lVar7,0);
  if ((uVar3 & 1) != 0) {
    puVar8 = (undefined8 *)(unaff_x19 + 0x40);
    uVar4 = *puVar8;
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar3 = FUN_066cd30c(uVar4,0);
    if ((uVar3 & 1) == 0) {
      if ((*plVar6 == 0) || (lVar7 = FUN_066c67ec(*plVar6,0), lVar7 == 0)) goto LAB_052b3f54;
      uVar4 = FUN_03a8638c(lVar7,*(undefined8 *)PTR_DAT_06d3d1a0);
      *puVar8 = uVar4;
      thunk_FUN_02f411dc(puVar8,uVar4);
    }
  }
  plVar6 = (long *)(unaff_x19 + 0x48);
  lVar7 = *plVar6;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar3 = FUN_066cd30c(lVar7,0);
  if ((uVar3 & 1) == 0) {
    lVar7 = FUN_066c67b0();
    if ((lVar7 == 0) || (lVar7 = FUN_066d60d0(lVar7,0), lVar7 == 0)) goto LAB_052b3f54;
    uVar4 = FUN_037f22a4(lVar7,*(undefined8 *)PTR_DAT_06d0bea0);
    puVar1 = PTR_DAT_06d3d1b8;
    lVar7 = *(long *)PTR_DAT_06d3d1b8;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_02f12b58(lVar7);
      lVar7 = *(long *)puVar1;
    }
    lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
    if (lVar9 == 0) {
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_02f12b58(lVar7);
        lVar7 = *(long *)puVar1;
      }
      uVar10 = **(undefined8 **)(lVar7 + 0xb8);
      lVar9 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d0bc80);
      FUN_0513bd28(lVar9,uVar10,*(undefined8 *)PTR_DAT_06d3d1b0,0);
      plVar5 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
      *plVar5 = lVar9;
      thunk_FUN_02f411dc(plVar5,lVar9);
    }
    lVar7 = FUN_03a1d938(uVar4,lVar9,*(undefined8 *)PTR_DAT_06d0bc78);
    *plVar6 = lVar7;
    thunk_FUN_02f411dc(plVar6,lVar7);
  }
  lVar7 = *plVar6;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar3 = FUN_066cd30c(lVar7,0);
  if ((uVar3 & 1) != 0) {
    puVar8 = (undefined8 *)(unaff_x19 + 0x50);
    uVar4 = *puVar8;
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar3 = FUN_066cd30c(uVar4,0);
    if ((uVar3 & 1) == 0) {
      if ((*plVar6 == 0) || (lVar7 = FUN_066c67ec(*plVar6,0), lVar7 == 0)) goto LAB_052b3f54;
      uVar4 = FUN_03a8638c(lVar7,*(undefined8 *)PTR_DAT_06d3d1a0);
      *puVar8 = uVar4;
      thunk_FUN_02f411dc(puVar8,uVar4);
    }
  }
  plVar6 = (long *)(unaff_x19 + 0x30);
  lVar7 = *plVar6;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar3 = FUN_066cd30c(lVar7,0);
  if ((uVar3 & 1) == 0) {
    lVar7 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d01fb8);
    FUN_066c9ce0(lVar7,*(undefined8 *)PTR_DAT_06d3d1c0,0);
    if (lVar7 == 0) goto LAB_052b3f54;
    lVar9 = FUN_066c9a48(lVar7,0);
    uVar4 = FUN_066c67b0();
    if (lVar9 == 0) goto LAB_052b3f54;
    FUN_066d5054(lVar9,uVar4,0);
    lVar7 = FUN_066c9a48(lVar7,0);
    *plVar6 = lVar7;
    thunk_FUN_02f411dc(plVar6,lVar7);
    FUN_0529929c(*plVar6,1,0);
    if (*plVar6 == 0) goto LAB_052b3f54;
    FUN_066d3f5c(0,0x3fc00000,0,*plVar6,0);
  }
  lVar7 = FUN_037f15fc();
  if (lVar7 != 0) {
    lVar9 = *(long *)(lVar7 + 0x130);
    uVar4 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d026a8);
    FUN_066dbbb0();
    puVar1 = PTR_DAT_06d3d0e0;
    if (lVar9 != 0) {
      FUN_066dbc80(lVar9,uVar4,0);
      lVar9 = *(long *)(lVar7 + 0x138);
      uVar4 = thunk_FUN_02ef1808(*(undefined8 *)puVar1);
      FUN_04754090();
      puVar2 = PTR_DAT_06d3d0e8;
      if (lVar9 != 0) {
        FUN_0475b550(lVar9,uVar4,*(undefined8 *)PTR_DAT_06d3d0e8);
        lVar7 = *(long *)(lVar7 + 0x128);
        uVar4 = thunk_FUN_02ef1808(*(undefined8 *)puVar1);
        FUN_04754090();
        if (lVar7 != 0) {
          FUN_0475b550(lVar7,uVar4,*(undefined8 *)puVar2);
          return;
        }
      }
    }
  }
LAB_052b3f54:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


