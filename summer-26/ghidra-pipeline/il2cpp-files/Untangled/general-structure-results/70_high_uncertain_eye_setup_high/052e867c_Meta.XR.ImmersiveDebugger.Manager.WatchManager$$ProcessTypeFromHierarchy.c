/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.WatchManager$$ProcessTypeFromHierarchy
ENTRY_POINT: 052e867c
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


long Meta_XR_ImmersiveDebugger_Manager_WatchManager__ProcessTypeFromHierarchy(long param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  long unaff_x19;
  undefined4 unaff_w20;
  int unaff_w21;
  long unaff_x22;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 in_stack_00000018;
  
  FUN_02f07e70(*(undefined8 *)(param_1 + 0xc00));
  *(undefined1 *)(unaff_x22 + 0x175) = 1;
  iVar1 = *(int *)(unaff_x19 + 0xcc);
  Meta_XR_ImmersiveDebugger_Hierarchy_Item__Clear();
  iVar2 = *(int *)(unaff_x19 + 0xcc);
  if (iVar2 == 1) {
    if (*(int *)(*(long *)PTR_DAT_06d02708 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    FUN_06694324(*(undefined8 *)PTR_DAT_06d3dbf8,0);
    *(undefined4 *)(unaff_x19 + 0xcc) = 0;
    iVar2 = 0;
    iVar4 = in_stack_00000018._4_4_;
joined_r0x052e86f0:
    in_stack_00000018._4_4_ = iVar2;
    if (iVar1 == 4) {
      uVar12 = thunk_FUN_02ef1438(*(undefined8 *)PTR_DAT_06d3dbf0,(long)&stack0x00000018 + 4);
      uVar12 = FUN_0545c378(*(undefined8 *)PTR_DAT_06d3dc00,uVar12,0);
      if (*(int *)(*(long *)PTR_DAT_06d02708 + 0xe0) == 0) {
        thunk_FUN_02f12b58(*(long *)PTR_DAT_06d02708);
      }
      FUN_06693690(uVar12,0);
      iVar4 = in_stack_00000018._4_4_;
    }
  }
  else {
    iVar4 = in_stack_00000018._4_4_;
    if (iVar2 != 4) goto joined_r0x052e86f0;
  }
  in_stack_00000018._4_4_ = iVar4;
  puVar3 = PTR_DAT_06d01e20;
  switch(unaff_w20) {
  default:
    puVar10 = (undefined8 *)(unaff_x19 + 0x78);
    puVar9 = (undefined4 *)(unaff_x19 + 0xa0);
    puVar11 = (undefined4 *)(unaff_x19 + 0xa4);
    break;
  case 2:
    puVar10 = (undefined8 *)(unaff_x19 + 0x68);
    puVar9 = (undefined4 *)(unaff_x19 + 0x98);
    puVar11 = (undefined4 *)(unaff_x19 + 0x9c);
    break;
  case 3:
    puVar9 = (undefined4 *)(unaff_x19 + 0xa8);
    puVar11 = (undefined4 *)(unaff_x19 + 0xac);
    puVar10 = (undefined8 *)(unaff_x19 + 0x80);
    break;
  case 4:
    puVar9 = (undefined4 *)(unaff_x19 + 0xb0);
    puVar11 = (undefined4 *)(unaff_x19 + 0xb4);
    puVar10 = (undefined8 *)(unaff_x19 + 0x88);
    break;
  case 5:
    puVar10 = (undefined8 *)(unaff_x19 + 0x90);
    puVar9 = (undefined4 *)(unaff_x19 + 0xb8);
    puVar11 = (undefined4 *)(unaff_x19 + 0xbc);
    break;
  case 6:
    puVar9 = (undefined4 *)(unaff_x19 + 0x98);
    puVar11 = (undefined4 *)(unaff_x19 + 0x9c);
    puVar10 = (undefined8 *)(unaff_x19 + 0x70);
  }
  uVar12 = *puVar10;
  uVar14 = *puVar9;
  uVar15 = *puVar11;
  if (*(int *)(*(long *)PTR_DAT_06d01e20 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar5 = FUN_066cd30c(uVar12,0);
  if ((uVar5 & 1) == 0) {
    uVar12 = *(undefined8 *)(unaff_x19 + 0x78);
  }
  if (unaff_w21 == 0) {
    uVar13 = *(undefined8 *)(unaff_x19 + 0x158);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar5 = FUN_066cd30c(uVar13,0);
    if ((uVar5 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x158) == 0) goto LAB_052e8b84;
      FUN_066c5cbc(*(long *)(unaff_x19 + 0x158),0,0);
    }
    uVar13 = *(undefined8 *)(unaff_x19 + 0x168);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar5 = FUN_066cd30c(uVar13,0);
    if ((uVar5 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x168) == 0) goto LAB_052e8b84;
      FUN_066c5cbc(*(long *)(unaff_x19 + 0x168),0,0);
    }
    uVar13 = *(undefined8 *)(unaff_x19 + 0x148);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar5 = FUN_066cd30c(uVar13,0);
    if ((uVar5 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x148) == 0) goto LAB_052e8b84;
      FUN_066c5cbc(*(long *)(unaff_x19 + 0x148),0,0);
    }
    uVar13 = *(undefined8 *)(unaff_x19 + 0x178);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar5 = FUN_066cd30c(uVar13,0);
    if ((uVar5 & 1) != 0) {
      lVar6 = *(long *)(unaff_x19 + 0x178);
      goto joined_r0x052e89b8;
    }
  }
  else {
    uVar13 = *(undefined8 *)(unaff_x19 + 0x160);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar5 = FUN_066cd30c(uVar13,0);
    if ((uVar5 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x160) == 0) goto LAB_052e8b84;
      FUN_066c5cbc(*(long *)(unaff_x19 + 0x160),0,0);
    }
    uVar13 = *(undefined8 *)(unaff_x19 + 0x170);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar5 = FUN_066cd30c(uVar13,0);
    if ((uVar5 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x170) == 0) goto LAB_052e8b84;
      FUN_066c5cbc(*(long *)(unaff_x19 + 0x170),0,0);
    }
    uVar13 = *(undefined8 *)(unaff_x19 + 0x150);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar5 = FUN_066cd30c(uVar13,0);
    if ((uVar5 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x150) == 0) goto LAB_052e8b84;
      FUN_066c5cbc(*(long *)(unaff_x19 + 0x150),0,0);
    }
    uVar13 = *(undefined8 *)(unaff_x19 + 0x180);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar5 = FUN_066cd30c(uVar13,0);
    if ((uVar5 & 1) != 0) {
      lVar6 = *(long *)(unaff_x19 + 0x180);
joined_r0x052e89b8:
      if (lVar6 == 0) goto LAB_052e8b84;
      FUN_066c5cbc(lVar6,0,0);
    }
  }
  lVar6 = 0;
  switch(*(undefined4 *)(unaff_x19 + 0xcc)) {
  case 0:
  case 4:
    lVar6 = 0x148;
    if (unaff_w21 != 0) {
      lVar6 = 0x150;
    }
    lVar6 = *(long *)(unaff_x19 + lVar6);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar5 = FUN_066cd30c(lVar6,0);
    if ((uVar5 & 1) == 0) {
      lVar6 = FUN_066c67ec();
      if (lVar6 == 0) goto LAB_052e8b84;
      lVar6 = FUN_03a862a4(lVar6,*(undefined8 *)PTR_DAT_06d3dbe8);
      if (unaff_w21 == 0) {
        plVar7 = (long *)(unaff_x19 + 0x148);
      }
      else {
        plVar7 = (long *)(unaff_x19 + 0x150);
      }
LAB_052e8ad0:
      *plVar7 = lVar6;
      thunk_FUN_02f411dc(plVar7,lVar6);
    }
    break;
  case 1:
  case 2:
    break;
  case 3:
    lVar6 = 0x178;
    if (unaff_w21 != 0) {
      lVar6 = 0x180;
    }
    lVar6 = *(long *)(unaff_x19 + lVar6);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar5 = FUN_066cd30c(lVar6,0);
    if ((uVar5 & 1) == 0) {
      lVar6 = FUN_066c67ec();
      if ((lVar6 == 0) || (lVar6 = FUN_03a862a4(lVar6,*(undefined8 *)PTR_DAT_06d3dbe0), lVar6 == 0))
      goto LAB_052e8b84;
      *(undefined1 *)(lVar6 + 0x180) = *(undefined1 *)(unaff_x19 + 0xe0);
      if (unaff_w21 == 0) {
        plVar7 = (long *)(unaff_x19 + 0x178);
      }
      else {
        plVar7 = (long *)(unaff_x19 + 0x180);
      }
      goto LAB_052e8ad0;
    }
    break;
  default:
    thunk_FUN_02f239f0(PTR_DAT_06d0e378);
    uVar12 = thunk_FUN_02ef1808();
    FUN_0555fdd4(uVar12,0);
    uVar13 = thunk_FUN_02f239f0(PTR_DAT_06d3dc08);
                    /* WARNING: Subroutine does not return */
    FUN_02f07f94(uVar12,uVar13);
  }
  if (*(char *)(unaff_x19 + 200) != '\0') {
    uVar14 = *(undefined4 *)(unaff_x19 + 0xc0);
    uVar15 = *(undefined4 *)(unaff_x19 + 0xc4);
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar5 = FUN_066c971c(lVar6,0,0);
  if ((uVar5 & 1) == 0) {
    if (lVar6 != 0) goto Meta_XR_ImmersiveDebugger_Hierarchy_Item__get_Parent;
  }
  else if (lVar6 != 0) {
    uVar8 = 4;
    if (unaff_w21 != 0) {
      uVar8 = 5;
    }
    *(undefined4 *)(lVar6 + 0x140) = uVar14;
    *(undefined4 *)(lVar6 + 0x144) = uVar15;
    *(int *)(lVar6 + 0x20) = unaff_w21;
    *(undefined4 *)(lVar6 + 0x128) = uVar8;
    *(undefined8 *)(lVar6 + 0x148) = uVar12;
    thunk_FUN_02f411dc(lVar6 + 0x148,uVar12);
    FUN_066c5cbc(lVar6,1,0);
    *(undefined4 *)(lVar6 + 0x158) = unaff_w20;
Meta_XR_ImmersiveDebugger_Hierarchy_Item__get_Parent:
    *(undefined8 *)(lVar6 + 0x150) = *(undefined8 *)(unaff_x19 + 0x50);
    thunk_FUN_02f411dc(lVar6 + 0x150);
    return lVar6;
  }
LAB_052e8b84:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


