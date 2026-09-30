/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.WatchManager$$.ctor
ENTRY_POINT: 052e8780
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


long Meta_XR_ImmersiveDebugger_Manager_WatchManager___ctor(void)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  undefined4 uVar4;
  long unaff_x19;
  undefined4 unaff_w20;
  int unaff_w21;
  undefined8 uVar5;
  undefined8 uVar6;
  long *unaff_x24;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar5 = *(undefined8 *)(unaff_x19 + 0x78);
  uVar7 = *(undefined4 *)(unaff_x19 + 0xa0);
  uVar8 = *(undefined4 *)(unaff_x19 + 0xa4);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar1 = FUN_066cd30c(uVar5,0);
  if ((uVar1 & 1) == 0) {
    uVar5 = *(undefined8 *)(unaff_x19 + 0x78);
  }
  if (unaff_w21 == 0) {
    uVar6 = *(undefined8 *)(unaff_x19 + 0x158);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar1 = FUN_066cd30c(uVar6,0);
    if ((uVar1 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x158) == 0) goto LAB_052e8b84;
      FUN_066c5cbc(*(long *)(unaff_x19 + 0x158),0,0);
    }
    uVar6 = *(undefined8 *)(unaff_x19 + 0x168);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar1 = FUN_066cd30c(uVar6,0);
    if ((uVar1 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x168) == 0) goto LAB_052e8b84;
      FUN_066c5cbc(*(long *)(unaff_x19 + 0x168),0,0);
    }
    uVar6 = *(undefined8 *)(unaff_x19 + 0x148);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar1 = FUN_066cd30c(uVar6,0);
    if ((uVar1 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x148) == 0) goto LAB_052e8b84;
      FUN_066c5cbc(*(long *)(unaff_x19 + 0x148),0,0);
    }
    uVar6 = *(undefined8 *)(unaff_x19 + 0x178);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar1 = FUN_066cd30c(uVar6,0);
    if ((uVar1 & 1) != 0) {
      lVar2 = *(long *)(unaff_x19 + 0x178);
      goto joined_r0x052e89b8;
    }
  }
  else {
    uVar6 = *(undefined8 *)(unaff_x19 + 0x160);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar1 = FUN_066cd30c(uVar6,0);
    if ((uVar1 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x160) == 0) goto LAB_052e8b84;
      FUN_066c5cbc(*(long *)(unaff_x19 + 0x160),0,0);
    }
    uVar6 = *(undefined8 *)(unaff_x19 + 0x170);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar1 = FUN_066cd30c(uVar6,0);
    if ((uVar1 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x170) == 0) goto LAB_052e8b84;
      FUN_066c5cbc(*(long *)(unaff_x19 + 0x170),0,0);
    }
    uVar6 = *(undefined8 *)(unaff_x19 + 0x150);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar1 = FUN_066cd30c(uVar6,0);
    if ((uVar1 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x150) == 0) goto LAB_052e8b84;
      FUN_066c5cbc(*(long *)(unaff_x19 + 0x150),0,0);
    }
    uVar6 = *(undefined8 *)(unaff_x19 + 0x180);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar1 = FUN_066cd30c(uVar6,0);
    if ((uVar1 & 1) != 0) {
      lVar2 = *(long *)(unaff_x19 + 0x180);
joined_r0x052e89b8:
      if (lVar2 == 0) goto LAB_052e8b84;
      FUN_066c5cbc(lVar2,0,0);
    }
  }
  lVar2 = 0;
  switch(*(undefined4 *)(unaff_x19 + 0xcc)) {
  case 0:
  case 4:
    lVar2 = 0x148;
    if (unaff_w21 != 0) {
      lVar2 = 0x150;
    }
    lVar2 = *(long *)(unaff_x19 + lVar2);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar1 = FUN_066cd30c(lVar2,0);
    if ((uVar1 & 1) == 0) {
      lVar2 = FUN_066c67ec();
      if (lVar2 == 0) goto LAB_052e8b84;
      lVar2 = FUN_03a862a4(lVar2,*(undefined8 *)PTR_DAT_06d3dbe8);
      if (unaff_w21 == 0) {
        plVar3 = (long *)(unaff_x19 + 0x148);
      }
      else {
        plVar3 = (long *)(unaff_x19 + 0x150);
      }
LAB_052e8ad0:
      *plVar3 = lVar2;
      thunk_FUN_02f411dc(plVar3,lVar2);
    }
    break;
  case 1:
  case 2:
    break;
  case 3:
    lVar2 = 0x178;
    if (unaff_w21 != 0) {
      lVar2 = 0x180;
    }
    lVar2 = *(long *)(unaff_x19 + lVar2);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar1 = FUN_066cd30c(lVar2,0);
    if ((uVar1 & 1) == 0) {
      lVar2 = FUN_066c67ec();
      if ((lVar2 == 0) || (lVar2 = FUN_03a862a4(lVar2,*(undefined8 *)PTR_DAT_06d3dbe0), lVar2 == 0))
      goto LAB_052e8b84;
      *(undefined1 *)(lVar2 + 0x180) = *(undefined1 *)(unaff_x19 + 0xe0);
      if (unaff_w21 == 0) {
        plVar3 = (long *)(unaff_x19 + 0x178);
      }
      else {
        plVar3 = (long *)(unaff_x19 + 0x180);
      }
      goto LAB_052e8ad0;
    }
    break;
  default:
    thunk_FUN_02f239f0(PTR_DAT_06d0e378);
    uVar5 = thunk_FUN_02ef1808();
    FUN_0555fdd4(uVar5,0);
    uVar6 = thunk_FUN_02f239f0(PTR_DAT_06d3dc08);
                    /* WARNING: Subroutine does not return */
    FUN_02f07f94(uVar5,uVar6);
  }
  if (*(char *)(unaff_x19 + 200) != '\0') {
    uVar7 = *(undefined4 *)(unaff_x19 + 0xc0);
    uVar8 = *(undefined4 *)(unaff_x19 + 0xc4);
  }
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar1 = FUN_066c971c(lVar2,0,0);
  if ((uVar1 & 1) == 0) {
    if (lVar2 != 0) goto Meta_XR_ImmersiveDebugger_Hierarchy_Item__get_Parent;
  }
  else if (lVar2 != 0) {
    uVar4 = 4;
    if (unaff_w21 != 0) {
      uVar4 = 5;
    }
    *(undefined4 *)(lVar2 + 0x140) = uVar7;
    *(undefined4 *)(lVar2 + 0x144) = uVar8;
    *(int *)(lVar2 + 0x20) = unaff_w21;
    *(undefined4 *)(lVar2 + 0x128) = uVar4;
    *(undefined8 *)(lVar2 + 0x148) = uVar5;
    thunk_FUN_02f411dc(lVar2 + 0x148,uVar5);
    FUN_066c5cbc(lVar2,1,0);
    *(undefined4 *)(lVar2 + 0x158) = unaff_w20;
Meta_XR_ImmersiveDebugger_Hierarchy_Item__get_Parent:
    *(undefined8 *)(lVar2 + 0x150) = *(undefined8 *)(unaff_x19 + 0x50);
    thunk_FUN_02f411dc(lVar2 + 0x150);
    return lVar2;
  }
LAB_052e8b84:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


