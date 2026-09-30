/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.WatchManager$$GetCountPerType
ENTRY_POINT: 052e86f4
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_17;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


long Meta_XR_ImmersiveDebugger_Manager_WatchManager__GetCountPerType(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  long unaff_x19;
  undefined4 unaff_w20;
  int unaff_w21;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  uVar2 = thunk_FUN_02ef1438(*(undefined8 *)PTR_DAT_06d3dbf0,&stack0x0000001c);
  uVar2 = FUN_0545c378(*(undefined8 *)PTR_DAT_06d3dc00,uVar2,0);
  if (*(int *)(*(long *)PTR_DAT_06d02708 + 0xe0) == 0) {
    thunk_FUN_02f12b58(*(long *)PTR_DAT_06d02708);
  }
  FUN_06693690(uVar2,0);
  puVar1 = PTR_DAT_06d01e20;
  switch(unaff_w20) {
  default:
    puVar8 = (undefined8 *)(unaff_x19 + 0x78);
    puVar7 = (undefined4 *)(unaff_x19 + 0xa0);
    puVar9 = (undefined4 *)(unaff_x19 + 0xa4);
    break;
  case 2:
    puVar8 = (undefined8 *)(unaff_x19 + 0x68);
    puVar7 = (undefined4 *)(unaff_x19 + 0x98);
    puVar9 = (undefined4 *)(unaff_x19 + 0x9c);
    break;
  case 3:
    puVar7 = (undefined4 *)(unaff_x19 + 0xa8);
    puVar9 = (undefined4 *)(unaff_x19 + 0xac);
    puVar8 = (undefined8 *)(unaff_x19 + 0x80);
    break;
  case 4:
    puVar7 = (undefined4 *)(unaff_x19 + 0xb0);
    puVar9 = (undefined4 *)(unaff_x19 + 0xb4);
    puVar8 = (undefined8 *)(unaff_x19 + 0x88);
    break;
  case 5:
    puVar8 = (undefined8 *)(unaff_x19 + 0x90);
    puVar7 = (undefined4 *)(unaff_x19 + 0xb8);
    puVar9 = (undefined4 *)(unaff_x19 + 0xbc);
    break;
  case 6:
    puVar7 = (undefined4 *)(unaff_x19 + 0x98);
    puVar9 = (undefined4 *)(unaff_x19 + 0x9c);
    puVar8 = (undefined8 *)(unaff_x19 + 0x70);
  }
  uVar2 = *puVar8;
  uVar11 = *puVar7;
  uVar12 = *puVar9;
  if (*(int *)(*(long *)PTR_DAT_06d01e20 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar3 = FUN_066cd30c(uVar2,0);
  if ((uVar3 & 1) == 0) {
    uVar2 = *(undefined8 *)(unaff_x19 + 0x78);
  }
  if (unaff_w21 == 0) {
    uVar10 = *(undefined8 *)(unaff_x19 + 0x158);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar3 = FUN_066cd30c(uVar10,0);
    if ((uVar3 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x158) == 0) goto LAB_052e8b84;
      FUN_066c5cbc(*(long *)(unaff_x19 + 0x158),0,0);
    }
    uVar10 = *(undefined8 *)(unaff_x19 + 0x168);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar3 = FUN_066cd30c(uVar10,0);
    if ((uVar3 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x168) == 0) goto LAB_052e8b84;
      FUN_066c5cbc(*(long *)(unaff_x19 + 0x168),0,0);
    }
    uVar10 = *(undefined8 *)(unaff_x19 + 0x148);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar3 = FUN_066cd30c(uVar10,0);
    if ((uVar3 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x148) == 0) goto LAB_052e8b84;
      FUN_066c5cbc(*(long *)(unaff_x19 + 0x148),0,0);
    }
    uVar10 = *(undefined8 *)(unaff_x19 + 0x178);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar3 = FUN_066cd30c(uVar10,0);
    if ((uVar3 & 1) != 0) {
      lVar4 = *(long *)(unaff_x19 + 0x178);
      goto joined_r0x052e89b8;
    }
  }
  else {
    uVar10 = *(undefined8 *)(unaff_x19 + 0x160);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar3 = FUN_066cd30c(uVar10,0);
    if ((uVar3 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x160) == 0) goto LAB_052e8b84;
      FUN_066c5cbc(*(long *)(unaff_x19 + 0x160),0,0);
    }
    uVar10 = *(undefined8 *)(unaff_x19 + 0x170);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar3 = FUN_066cd30c(uVar10,0);
    if ((uVar3 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x170) == 0) goto LAB_052e8b84;
      FUN_066c5cbc(*(long *)(unaff_x19 + 0x170),0,0);
    }
    uVar10 = *(undefined8 *)(unaff_x19 + 0x150);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar3 = FUN_066cd30c(uVar10,0);
    if ((uVar3 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x150) == 0) goto LAB_052e8b84;
      FUN_066c5cbc(*(long *)(unaff_x19 + 0x150),0,0);
    }
    uVar10 = *(undefined8 *)(unaff_x19 + 0x180);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar3 = FUN_066cd30c(uVar10,0);
    if ((uVar3 & 1) != 0) {
      lVar4 = *(long *)(unaff_x19 + 0x180);
joined_r0x052e89b8:
      if (lVar4 == 0) goto LAB_052e8b84;
      FUN_066c5cbc(lVar4,0,0);
    }
  }
  lVar4 = 0;
  switch(*(undefined4 *)(unaff_x19 + 0xcc)) {
  case 0:
  case 4:
    lVar4 = 0x148;
    if (unaff_w21 != 0) {
      lVar4 = 0x150;
    }
    lVar4 = *(long *)(unaff_x19 + lVar4);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar3 = FUN_066cd30c(lVar4,0);
    if ((uVar3 & 1) == 0) {
      lVar4 = FUN_066c67ec();
      if (lVar4 == 0) goto LAB_052e8b84;
      lVar4 = FUN_03a862a4(lVar4,*(undefined8 *)PTR_DAT_06d3dbe8);
      if (unaff_w21 == 0) {
        plVar5 = (long *)(unaff_x19 + 0x148);
      }
      else {
        plVar5 = (long *)(unaff_x19 + 0x150);
      }
LAB_052e8ad0:
      *plVar5 = lVar4;
      thunk_FUN_02f411dc(plVar5,lVar4);
    }
    break;
  case 1:
  case 2:
    break;
  case 3:
    lVar4 = 0x178;
    if (unaff_w21 != 0) {
      lVar4 = 0x180;
    }
    lVar4 = *(long *)(unaff_x19 + lVar4);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar3 = FUN_066cd30c(lVar4,0);
    if ((uVar3 & 1) == 0) {
      lVar4 = FUN_066c67ec();
      if ((lVar4 == 0) || (lVar4 = FUN_03a862a4(lVar4,*(undefined8 *)PTR_DAT_06d3dbe0), lVar4 == 0))
      goto LAB_052e8b84;
      *(undefined1 *)(lVar4 + 0x180) = *(undefined1 *)(unaff_x19 + 0xe0);
      if (unaff_w21 == 0) {
        plVar5 = (long *)(unaff_x19 + 0x178);
      }
      else {
        plVar5 = (long *)(unaff_x19 + 0x180);
      }
      goto LAB_052e8ad0;
    }
    break;
  default:
    thunk_FUN_02f239f0(PTR_DAT_06d0e378);
    uVar2 = thunk_FUN_02ef1808();
    FUN_0555fdd4(uVar2,0);
    uVar10 = thunk_FUN_02f239f0(PTR_DAT_06d3dc08);
                    /* WARNING: Subroutine does not return */
    FUN_02f07f94(uVar2,uVar10);
  }
  if (*(char *)(unaff_x19 + 200) != '\0') {
    uVar11 = *(undefined4 *)(unaff_x19 + 0xc0);
    uVar12 = *(undefined4 *)(unaff_x19 + 0xc4);
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar3 = FUN_066c971c(lVar4,0,0);
  if ((uVar3 & 1) == 0) {
    if (lVar4 != 0) goto Meta_XR_ImmersiveDebugger_Hierarchy_Item__get_Parent;
  }
  else if (lVar4 != 0) {
    uVar6 = 4;
    if (unaff_w21 != 0) {
      uVar6 = 5;
    }
    *(undefined4 *)(lVar4 + 0x140) = uVar11;
    *(undefined4 *)(lVar4 + 0x144) = uVar12;
    *(int *)(lVar4 + 0x20) = unaff_w21;
    *(undefined4 *)(lVar4 + 0x128) = uVar6;
    *(undefined8 *)(lVar4 + 0x148) = uVar2;
    thunk_FUN_02f411dc(lVar4 + 0x148,uVar2);
    FUN_066c5cbc(lVar4,1,0);
    *(undefined4 *)(lVar4 + 0x158) = unaff_w20;
Meta_XR_ImmersiveDebugger_Hierarchy_Item__get_Parent:
    *(undefined8 *)(lVar4 + 0x150) = *(undefined8 *)(unaff_x19 + 0x50);
    thunk_FUN_02f411dc(lVar4 + 0x150);
    return lVar4;
  }
LAB_052e8b84:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


