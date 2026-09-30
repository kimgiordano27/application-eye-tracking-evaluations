/*
FUNCTION_NAME: OVRManager$$get_trackingOriginType
ENTRY_POINT: 02c05134
PROGRAM: sharks-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_7;functionality_gaze_retrieval_or_extraction
*/


void OVRManager__get_trackingOriginType(void)

{
  long *plVar1;
  byte bVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  int unaff_w19;
  long unaff_x20;
  long *unaff_x22;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *unaff_x25;
  long *unaff_x26;
  
  thunk_FUN_0188fd20();
  uVar5 = FUN_02ae2330();
  *(undefined8 *)(unaff_x20 + 0x18) = uVar5;
  thunk_FUN_0188fd20();
  uVar5 = *unaff_x25;
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  FUN_02bddb5c(uVar5,0);
  lVar6 = FUN_02adfae4();
  puVar3 = PTR_DAT_037f9320;
  if (lVar6 == 0) {
    lVar7 = 0;
    *(undefined8 *)(unaff_x20 + 0x20) = 0;
  }
  else {
    uVar5 = *(undefined8 *)PTR_DAT_037f9320;
    lVar7 = thunk_FUN_01861ac0(lVar6,uVar5);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc944(lVar6,uVar5);
    }
    *(long *)(unaff_x20 + 0x20) = lVar7;
    uVar5 = *(undefined8 *)puVar3;
    lVar7 = thunk_FUN_01861ac0(lVar6,uVar5);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc944(lVar6,uVar5);
    }
  }
  puVar3 = PTR_DAT_0380adb8;
  thunk_FUN_0188fd20(unaff_x20 + 0x20,lVar7);
  FUN_02bddb5c(*(undefined8 *)puVar3,0);
  plVar8 = (long *)FUN_02adfbec();
  if (plVar8 == (long *)0x0) {
    *(undefined8 *)(unaff_x20 + 0x28) = 0;
LAB_02c05294:
    puVar3 = PTR_DAT_03803548;
    thunk_FUN_0188fd20(unaff_x20 + 0x28,plVar8);
    uVar5 = FUN_02ae2330();
    *(undefined8 *)(unaff_x20 + 0x30) = uVar5;
    thunk_FUN_0188fd20();
    uVar5 = FUN_02ae2330();
    puVar10 = (undefined8 *)(unaff_x20 + 0x40);
    *puVar10 = uVar5;
    thunk_FUN_0188fd20(puVar10,uVar5);
    uVar5 = FUN_02ae2330();
    puVar11 = (undefined8 *)(unaff_x20 + 0x48);
    *puVar11 = uVar5;
    thunk_FUN_0188fd20(puVar11,uVar5);
    uVar4 = FUN_02ae1ed4();
    *(undefined4 *)(unaff_x20 + 0x50) = uVar4;
    uVar4 = FUN_02ae1ed4();
    *(undefined4 *)(unaff_x20 + 0x60) = uVar4;
    uVar5 = FUN_02ae2330();
    *(undefined8 *)(unaff_x20 + 0x68) = uVar5;
    thunk_FUN_0188fd20();
    FUN_02bddb5c(*(undefined8 *)puVar3,0);
    plVar8 = (long *)FUN_02adfae4();
    if (plVar8 == (long *)0x0) {
      plVar8 = (long *)0x0;
      *(undefined8 *)(unaff_x20 + 0x70) = 0;
    }
    else {
      lVar6 = *(long *)PTR_DAT_0380adb0;
      plVar1 = plVar8;
      if (*plVar8 != lVar6) {
        plVar1 = (long *)0x0;
      }
      *(long **)(unaff_x20 + 0x70) = plVar1;
      if (*plVar8 != lVar6) {
        plVar8 = (long *)0x0;
      }
    }
    thunk_FUN_0188fd20(unaff_x20 + 0x70,plVar8);
    if ((*unaff_x22 != 0) && (*(int *)(unaff_x20 + 0x60) != 0)) {
      if (unaff_w19 != 0x80) {
        return;
      }
      uVar5 = FUN_02a43498(*puVar11,*puVar10,0);
      *puVar11 = uVar5;
      thunk_FUN_0188fd20(puVar11,uVar5);
      *puVar10 = 0;
      thunk_FUN_0188fd20(puVar10,0);
      return;
    }
    uVar5 = thunk_FUN_01851c08(PTR_DAT_03804828);
    uVar5 = FUN_02c108dc(uVar5,0);
    thunk_FUN_01851c08(PTR_DAT_037fb188);
    uVar9 = thunk_FUN_01861bbc();
    FUN_02ad6d08(uVar9,uVar5,0);
    uVar5 = thunk_FUN_01851c08(PTR_DAT_0380ae08);
                    /* WARNING: Subroutine does not return */
    FUN_017fc474(uVar9,uVar5);
  }
  lVar6 = *(long *)PTR_DAT_037f4600;
  bVar2 = *(byte *)(lVar6 + 0x130);
  if ((bVar2 <= *(byte *)(*plVar8 + 0x130)) &&
     (*(long *)(*(long *)(*plVar8 + 200) + ((ulong)bVar2 - 1) * 8) == lVar6)) {
    *(long **)(unaff_x20 + 0x28) = plVar8;
    if ((bVar2 <= *(byte *)(*plVar8 + 0x130)) &&
       (*(long *)(*(long *)(*plVar8 + 200) + ((ulong)bVar2 - 1) * 8) == lVar6)) goto LAB_02c05294;
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc944(plVar8);
}


