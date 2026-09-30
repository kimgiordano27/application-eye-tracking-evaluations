/*
FUNCTION_NAME: OVRManager$$GetSpaceWarp
ENTRY_POINT: 02c050dc
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__GetSpaceWarp(void)

{
  long *plVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined1 in_w8;
  int unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  *(undefined1 *)(unaff_x22 + 0xdf0) = in_w8;
  FUN_02c108e4();
  puVar4 = PTR_DAT_03802be0;
  puVar3 = PTR_DAT_037f2c78;
  if (unaff_x21 == 0) {
    thunk_FUN_01851c08(PTR_DAT_037f66a8);
    uVar7 = thunk_FUN_01861bbc();
    uVar10 = thunk_FUN_01851c08(PTR_DAT_037faa38);
    FUN_02b3cbec(uVar7,uVar10,0);
    uVar10 = thunk_FUN_01851c08(PTR_DAT_0380ae08);
                    /* WARNING: Subroutine does not return */
    FUN_017fc474(uVar7,uVar10);
  }
  lVar6 = FUN_02ae2330();
  plVar11 = (long *)(unaff_x20 + 0x10);
  *plVar11 = lVar6;
  thunk_FUN_0188fd20(plVar11,lVar6);
  uVar7 = FUN_02ae2330();
  *(undefined8 *)(unaff_x20 + 0x18) = uVar7;
  thunk_FUN_0188fd20();
  uVar7 = *(undefined8 *)puVar4;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  FUN_02bddb5c(uVar7,0);
  lVar6 = FUN_02adfae4();
  puVar3 = PTR_DAT_037f9320;
  if (lVar6 == 0) {
    lVar8 = 0;
    *(undefined8 *)(unaff_x20 + 0x20) = 0;
  }
  else {
    uVar7 = *(undefined8 *)PTR_DAT_037f9320;
    lVar8 = thunk_FUN_01861ac0(lVar6,uVar7);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc944(lVar6,uVar7);
    }
    *(long *)(unaff_x20 + 0x20) = lVar8;
    uVar7 = *(undefined8 *)puVar3;
    lVar8 = thunk_FUN_01861ac0(lVar6,uVar7);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc944(lVar6,uVar7);
    }
  }
  puVar3 = PTR_DAT_0380adb8;
  thunk_FUN_0188fd20(unaff_x20 + 0x20,lVar8);
  FUN_02bddb5c(*(undefined8 *)puVar3,0);
  plVar9 = (long *)FUN_02adfbec();
  if (plVar9 == (long *)0x0) {
    *(undefined8 *)(unaff_x20 + 0x28) = 0;
LAB_02c05294:
    puVar3 = PTR_DAT_03803548;
    thunk_FUN_0188fd20(unaff_x20 + 0x28,plVar9);
    uVar7 = FUN_02ae2330();
    *(undefined8 *)(unaff_x20 + 0x30) = uVar7;
    thunk_FUN_0188fd20();
    uVar7 = FUN_02ae2330();
    puVar12 = (undefined8 *)(unaff_x20 + 0x40);
    *puVar12 = uVar7;
    thunk_FUN_0188fd20(puVar12,uVar7);
    uVar7 = FUN_02ae2330();
    puVar13 = (undefined8 *)(unaff_x20 + 0x48);
    *puVar13 = uVar7;
    thunk_FUN_0188fd20(puVar13,uVar7);
    uVar5 = FUN_02ae1ed4();
    *(undefined4 *)(unaff_x20 + 0x50) = uVar5;
    uVar5 = FUN_02ae1ed4();
    *(undefined4 *)(unaff_x20 + 0x60) = uVar5;
    uVar7 = FUN_02ae2330();
    *(undefined8 *)(unaff_x20 + 0x68) = uVar7;
    thunk_FUN_0188fd20();
    FUN_02bddb5c(*(undefined8 *)puVar3,0);
    plVar9 = (long *)FUN_02adfae4();
    if (plVar9 == (long *)0x0) {
      plVar9 = (long *)0x0;
      *(undefined8 *)(unaff_x20 + 0x70) = 0;
    }
    else {
      lVar6 = *(long *)PTR_DAT_0380adb0;
      plVar1 = plVar9;
      if (*plVar9 != lVar6) {
        plVar1 = (long *)0x0;
      }
      *(long **)(unaff_x20 + 0x70) = plVar1;
      if (*plVar9 != lVar6) {
        plVar9 = (long *)0x0;
      }
    }
    thunk_FUN_0188fd20(unaff_x20 + 0x70,plVar9);
    if ((*plVar11 != 0) && (*(int *)(unaff_x20 + 0x60) != 0)) {
      if (unaff_w19 != 0x80) {
        return;
      }
      uVar7 = FUN_02a43498(*puVar13,*puVar12,0);
      *puVar13 = uVar7;
      thunk_FUN_0188fd20(puVar13,uVar7);
      *puVar12 = 0;
      thunk_FUN_0188fd20(puVar12,0);
      return;
    }
    uVar7 = thunk_FUN_01851c08(PTR_DAT_03804828);
    uVar7 = FUN_02c108dc(uVar7,0);
    thunk_FUN_01851c08(PTR_DAT_037fb188);
    uVar10 = thunk_FUN_01861bbc();
    FUN_02ad6d08(uVar10,uVar7,0);
    uVar7 = thunk_FUN_01851c08(PTR_DAT_0380ae08);
                    /* WARNING: Subroutine does not return */
    FUN_017fc474(uVar10,uVar7);
  }
  lVar6 = *(long *)PTR_DAT_037f4600;
  bVar2 = *(byte *)(lVar6 + 0x130);
  if ((bVar2 <= *(byte *)(*plVar9 + 0x130)) &&
     (*(long *)(*(long *)(*plVar9 + 200) + ((ulong)bVar2 - 1) * 8) == lVar6)) {
    *(long **)(unaff_x20 + 0x28) = plVar9;
    if ((bVar2 <= *(byte *)(*plVar9 + 0x130)) &&
       (*(long *)(*(long *)(*plVar9 + 200) + ((ulong)bVar2 - 1) * 8) == lVar6)) goto LAB_02c05294;
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc944(plVar9);
}


