/*
FUNCTION_NAME: OVRManager$$set_trackingOriginType
ENTRY_POINT: 02c051c4
PROGRAM: sharks-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;functionality_gaze_retrieval_or_extraction
*/


void OVRManager__set_trackingOriginType(void)

{
  long *plVar1;
  byte bVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int unaff_w19;
  long unaff_x20;
  long *unaff_x22;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  lVar5 = thunk_FUN_01861ac0();
  puVar3 = PTR_DAT_0380adb8;
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_017fc944();
  }
                    /* try { // try from 02c051e4 to 02d052a3 has its CatchHandler @ 02c051e4
                       catch() { ... } // from try @ 02c051e4 with catch @ 02c051e4
                       catch() { ... } // from try @ 02c0538c with catch @ 02c051e4
                       catch() { ... } // from try @ 02c053f4 with catch @ 02c051e4
                       catch() { ... } // from try @ 02c05460 with catch @ 02c051e4
                       catch() { ... } // from try @ 02c054a8 with catch @ 02c051e4
                       catch() { ... } // from try @ 02c054e4 with catch @ 02c051e4 */
  thunk_FUN_0188fd20();
  FUN_02bddb5c(*(undefined8 *)puVar3,0);
  plVar6 = (long *)FUN_02adfbec();
  if (plVar6 == (long *)0x0) {
    *(undefined8 *)(unaff_x20 + 0x28) = 0;
LAB_02c05294:
    puVar3 = PTR_DAT_03803548;
                    /* try { // try from 02c052a4 to 02d05317 has its CatchHandler @ 02c05478 */
    thunk_FUN_0188fd20(unaff_x20 + 0x28,plVar6);
    uVar7 = FUN_02ae2330();
    *(undefined8 *)(unaff_x20 + 0x30) = uVar7;
    thunk_FUN_0188fd20();
    uVar7 = FUN_02ae2330();
    puVar9 = (undefined8 *)(unaff_x20 + 0x40);
    *puVar9 = uVar7;
    thunk_FUN_0188fd20(puVar9,uVar7);
    uVar7 = FUN_02ae2330();
    puVar10 = (undefined8 *)(unaff_x20 + 0x48);
    *puVar10 = uVar7;
                    /* try { // try from 02c05338 to 02d0533b has its CatchHandler @ 02c05464 */
    thunk_FUN_0188fd20(puVar10,uVar7);
                    /* try { // try from 02c0533c to 02d05347 has its CatchHandler @ 02c05474 */
    uVar4 = FUN_02ae1ed4();
    *(undefined4 *)(unaff_x20 + 0x50) = uVar4;
                    /* try { // try from 02c05358 to 02d0535f has its CatchHandler @ 02c05470 */
    uVar4 = FUN_02ae1ed4();
                    /* try { // try from 02c05360 to 02d05367 has its CatchHandler @ 02c0546c */
    *(undefined4 *)(unaff_x20 + 0x60) = uVar4;
                    /* try { // try from 02c05370 to 02d05377 has its CatchHandler @ 02c05468 */
    uVar7 = FUN_02ae2330();
    *(undefined8 *)(unaff_x20 + 0x68) = uVar7;
                    /* try { // try from 02c05380 to 02d0538b has its CatchHandler @ 02c05460 */
    thunk_FUN_0188fd20();
                    /* try { // try from 02c0538c to 02d053eb has its CatchHandler @ 02c051e4 */
    FUN_02bddb5c(*(undefined8 *)puVar3,0);
    plVar6 = (long *)FUN_02adfae4();
    if (plVar6 == (long *)0x0) {
      plVar6 = (long *)0x0;
      *(undefined8 *)(unaff_x20 + 0x70) = 0;
    }
    else {
      lVar5 = *(long *)PTR_DAT_0380adb0;
      plVar1 = plVar6;
      if (*plVar6 != lVar5) {
        plVar1 = (long *)0x0;
      }
      *(long **)(unaff_x20 + 0x70) = plVar1;
      if (*plVar6 != lVar5) {
        plVar6 = (long *)0x0;
      }
    }
    thunk_FUN_0188fd20(unaff_x20 + 0x70,plVar6);
    if ((*unaff_x22 != 0) && (*(int *)(unaff_x20 + 0x60) != 0)) {
      if (unaff_w19 != 0x80) {
        return;
      }
      uVar7 = FUN_02a43498(*puVar10,*puVar9,0);
      *puVar10 = uVar7;
      thunk_FUN_0188fd20(puVar10,uVar7);
      *puVar9 = 0;
      thunk_FUN_0188fd20(puVar9,0);
      return;
    }
    uVar7 = thunk_FUN_01851c08(PTR_DAT_03804828);
    uVar7 = FUN_02c108dc(uVar7,0);
    thunk_FUN_01851c08(PTR_DAT_037fb188);
    uVar8 = thunk_FUN_01861bbc();
    FUN_02ad6d08(uVar8,uVar7,0);
    uVar7 = thunk_FUN_01851c08(PTR_DAT_0380ae08);
                    /* WARNING: Subroutine does not return */
    FUN_017fc474(uVar8,uVar7);
  }
  lVar5 = *(long *)PTR_DAT_037f4600;
  bVar2 = *(byte *)(lVar5 + 0x130);
  if ((bVar2 <= *(byte *)(*plVar6 + 0x130)) &&
     (*(long *)(*(long *)(*plVar6 + 200) + ((ulong)bVar2 - 1) * 8) == lVar5)) {
    *(long **)(unaff_x20 + 0x28) = plVar6;
    if ((bVar2 <= *(byte *)(*plVar6 + 0x130)) &&
       (*(long *)(*(long *)(*plVar6 + 200) + ((ulong)bVar2 - 1) * 8) == lVar5)) goto LAB_02c05294;
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc944(plVar6);
}


