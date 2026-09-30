/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<ConnectionDataMap.ConnectionSlot<TCPNetworkInterface.ConnectionData>>
ENTRY_POINT: 03f2b940
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_3;paired_field_refs_with_structure_only;telemetry_or_network_hits_1
*/


void System_Array__InternalArray__ICollection_Add<ConnectionDataMap_ConnectionSlot<TCPNetworkInterface_ConnectionData>>
               (void)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar13;
  long unaff_x22;
  undefined8 uVar14;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  
                    /* try { // try from 03f2b940 to 0402b943 has its CatchHandler @ 03f2b988 */
  FUN_061c1960();
                    /* try { // try from 03f2b944 to 0402b947 has its CatchHandler @ 03f2b984 */
  if (unaff_x22 != 0) {
                    /* try { // try from 03f2b948 to 0402b94b has its CatchHandler @ 03f2b978 */
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03f2b94c to 0402b953 has its CatchHandler @ 03f2b974 */
    FUN_03a8a9b8();
  }
  lVar9 = *(long *)(unaff_x19 + 0x180);
  if (lVar9 != 0) {
    iVar13 = *(int *)(lVar9 + 0x18);
    *(undefined4 *)(lVar9 + 0x18) = 0;
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    if (0 < iVar13) {
      Newtonsoft_Json_Schema_ValidationEventArgs__get_Path(*(undefined8 *)(lVar9 + 0x10),0,iVar13,0)
      ;
    }
    if ((unaff_x21 != 0) && (lVar9 = *(long *)(unaff_x21 + 0x180), lVar9 != 0)) {
      iVar13 = 0;
      while (iVar13 < *(int *)(lVar9 + 0x18)) {
        lVar9 = *(long *)(unaff_x19 + 0x180);
        uVar5 = thunk_FUN_03ac74bc(*unaff_x27);
        FUN_03f24b10();
        if (lVar9 == 0) goto LAB_03f2b8c0;
        lVar10 = *(long *)(lVar9 + 0x10);
        lVar11 = *unaff_x29;
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        if (lVar10 == 0) goto LAB_03f2b8c0;
        uVar2 = *(uint *)(lVar9 + 0x18);
        if (uVar2 < *(uint *)(lVar10 + 0x18)) {
          *(uint *)(lVar9 + 0x18) = uVar2 + 1;
          puVar6 = (undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20);
          *puVar6 = uVar5;
          thunk_FUN_03afed3c(puVar6,uVar5);
        }
        else {
          FUN_04de85b0(lVar9,uVar5,
                       *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        }
        if (*(long *)(unaff_x19 + 0x180) == 0) goto LAB_03f2b8c0;
        lVar9 = FUN_04de82e0(*(long *)(unaff_x19 + 0x180),iVar13,*unaff_x25);
        if (((*(long *)(unaff_x21 + 0x180) == 0) ||
            (lVar10 = FUN_04de82e0(*(long *)(unaff_x21 + 0x180),iVar13,*unaff_x25), lVar10 == 0)) ||
           (lVar9 == 0)) goto LAB_03f2b8c0;
        *(undefined4 *)(lVar9 + 0x10) = *(undefined4 *)(lVar10 + 0x10);
        if (*(long *)(unaff_x19 + 0x180) == 0) goto LAB_03f2b8c0;
        lVar9 = FUN_04de82e0(*(long *)(unaff_x19 + 0x180),iVar13,*unaff_x25);
        if (((*(long *)(unaff_x21 + 0x180) == 0) ||
            (lVar10 = FUN_04de82e0(*(long *)(unaff_x21 + 0x180),iVar13,*unaff_x25), lVar10 == 0)) ||
           (lVar9 == 0)) goto LAB_03f2b8c0;
        *(undefined4 *)(lVar9 + 0x14) = *(undefined4 *)(lVar10 + 0x14);
        if (*(long *)(unaff_x19 + 0x180) == 0) goto LAB_03f2b8c0;
        lVar9 = FUN_04de82e0(*(long *)(unaff_x19 + 0x180),iVar13,*unaff_x25);
        if (((*(long *)(unaff_x21 + 0x180) == 0) ||
            (lVar10 = FUN_04de82e0(*(long *)(unaff_x21 + 0x180),iVar13,*unaff_x25), lVar10 == 0)) ||
           (lVar9 == 0)) goto LAB_03f2b8c0;
        *(undefined4 *)(lVar9 + 0x18) = *(undefined4 *)(lVar10 + 0x18);
        if (*(long *)(unaff_x19 + 0x180) == 0) goto LAB_03f2b8c0;
        lVar9 = FUN_04de82e0(*(long *)(unaff_x19 + 0x180),iVar13,*unaff_x25);
        if (((*(long *)(unaff_x21 + 0x180) == 0) ||
            (lVar10 = FUN_04de82e0(*(long *)(unaff_x21 + 0x180),iVar13,*unaff_x25), lVar10 == 0)) ||
           (lVar9 == 0)) goto LAB_03f2b8c0;
        *(undefined1 *)(lVar9 + 0x1c) = *(undefined1 *)(lVar10 + 0x1c);
        if (*(long *)(unaff_x19 + 0x180) == 0) goto LAB_03f2b8c0;
        lVar9 = FUN_04de82e0(*(long *)(unaff_x19 + 0x180),iVar13,*unaff_x25);
        if (((*(long *)(unaff_x21 + 0x180) == 0) ||
            (lVar10 = FUN_04de82e0(*(long *)(unaff_x21 + 0x180),iVar13,*unaff_x25), lVar10 == 0)) ||
           (lVar9 == 0)) goto LAB_03f2b8c0;
        *(undefined4 *)(lVar9 + 0x20) = *(undefined4 *)(lVar10 + 0x20);
        if (*(long *)(unaff_x19 + 0x180) == 0) goto LAB_03f2b8c0;
        lVar9 = FUN_04de82e0(*(long *)(unaff_x19 + 0x180),iVar13,*unaff_x25);
        if (((*(long *)(unaff_x21 + 0x180) == 0) ||
            (lVar10 = FUN_04de82e0(*(long *)(unaff_x21 + 0x180),iVar13,*unaff_x25), lVar10 == 0)) ||
           (lVar9 == 0)) goto LAB_03f2b8c0;
        *(undefined4 *)(lVar9 + 0x24) = *(undefined4 *)(lVar10 + 0x24);
        if (*(long *)(unaff_x19 + 0x180) == 0) goto LAB_03f2b8c0;
        lVar9 = FUN_04de82e0(*(long *)(unaff_x19 + 0x180),iVar13,*unaff_x25);
        if (((*(long *)(unaff_x21 + 0x180) == 0) ||
            (lVar10 = FUN_04de82e0(*(long *)(unaff_x21 + 0x180),iVar13,*unaff_x25), lVar10 == 0)) ||
           (lVar9 == 0)) goto LAB_03f2b8c0;
        *(undefined4 *)(lVar9 + 0x28) = *(undefined4 *)(lVar10 + 0x28);
        if (*(long *)(unaff_x19 + 0x180) == 0) goto LAB_03f2b8c0;
        lVar9 = FUN_04de82e0(*(long *)(unaff_x19 + 0x180),iVar13,*unaff_x25);
        if (((*(long *)(unaff_x21 + 0x180) == 0) ||
            (lVar10 = FUN_04de82e0(*(long *)(unaff_x21 + 0x180),iVar13,*unaff_x25), lVar10 == 0)) ||
           (lVar9 == 0)) goto LAB_03f2b8c0;
        *(undefined4 *)(lVar9 + 0x2c) = *(undefined4 *)(lVar10 + 0x2c);
        if (*(long *)(unaff_x19 + 0x180) == 0) goto LAB_03f2b8c0;
        lVar9 = FUN_04de82e0(*(long *)(unaff_x19 + 0x180),iVar13,*unaff_x25);
        if (((*(long *)(unaff_x21 + 0x180) == 0) ||
            (lVar10 = FUN_04de82e0(*(long *)(unaff_x21 + 0x180),iVar13,*unaff_x25), lVar10 == 0)) ||
           (lVar9 == 0)) goto LAB_03f2b8c0;
        *(undefined4 *)(lVar9 + 0x30) = *(undefined4 *)(lVar10 + 0x30);
        if (*(long *)(unaff_x19 + 0x180) == 0) goto LAB_03f2b8c0;
        lVar9 = FUN_04de82e0(*(long *)(unaff_x19 + 0x180),iVar13,*unaff_x25);
        if (((*(long *)(unaff_x21 + 0x180) == 0) ||
            (lVar10 = FUN_04de82e0(*(long *)(unaff_x21 + 0x180),iVar13,*unaff_x25), lVar10 == 0)) ||
           (lVar9 == 0)) goto LAB_03f2b8c0;
        *(undefined4 *)(lVar9 + 0x34) = *(undefined4 *)(lVar10 + 0x34);
        if (*(long *)(unaff_x19 + 0x180) == 0) goto LAB_03f2b8c0;
        lVar9 = FUN_04de82e0(*(long *)(unaff_x19 + 0x180),iVar13,*unaff_x25);
        if (((*(long *)(unaff_x21 + 0x180) == 0) ||
            (lVar10 = FUN_04de82e0(*(long *)(unaff_x21 + 0x180),iVar13,*unaff_x25), lVar10 == 0)) ||
           (lVar9 == 0)) goto LAB_03f2b8c0;
        *(undefined4 *)(lVar9 + 0x38) = *(undefined4 *)(lVar10 + 0x38);
        if (*(long *)(unaff_x19 + 0x180) == 0) goto LAB_03f2b8c0;
        lVar9 = FUN_04de82e0(*(long *)(unaff_x19 + 0x180),iVar13,*unaff_x25);
        if (((*(long *)(unaff_x21 + 0x180) == 0) ||
            (lVar10 = FUN_04de82e0(*(long *)(unaff_x21 + 0x180),iVar13,*unaff_x25), lVar10 == 0)) ||
           (lVar9 == 0)) goto LAB_03f2b8c0;
        *(undefined4 *)(lVar9 + 0x3c) = *(undefined4 *)(lVar10 + 0x3c);
        if (*(long *)(unaff_x19 + 0x180) == 0) goto LAB_03f2b8c0;
        lVar9 = FUN_04de82e0(*(long *)(unaff_x19 + 0x180),iVar13,*unaff_x25);
        if (((*(long *)(unaff_x21 + 0x180) == 0) ||
            (lVar10 = FUN_04de82e0(*(long *)(unaff_x21 + 0x180),iVar13,*unaff_x25), lVar10 == 0)) ||
           (lVar9 == 0)) goto LAB_03f2b8c0;
        *(undefined4 *)(lVar9 + 0x40) = *(undefined4 *)(lVar10 + 0x40);
        if (*(long *)(unaff_x19 + 0x180) == 0) goto LAB_03f2b8c0;
        lVar9 = FUN_04de82e0(*(long *)(unaff_x19 + 0x180),iVar13,*unaff_x25);
        if (((*(long *)(unaff_x21 + 0x180) == 0) ||
            (lVar10 = FUN_04de82e0(*(long *)(unaff_x21 + 0x180),iVar13,*unaff_x25), lVar10 == 0)) ||
           (lVar9 == 0)) goto LAB_03f2b8c0;
        *(undefined4 *)(lVar9 + 0x44) = *(undefined4 *)(lVar10 + 0x44);
        if (*(long *)(unaff_x19 + 0x180) == 0) goto LAB_03f2b8c0;
        lVar9 = FUN_04de82e0(*(long *)(unaff_x19 + 0x180),iVar13,*unaff_x25);
        if (((*(long *)(unaff_x21 + 0x180) == 0) ||
            (lVar10 = FUN_04de82e0(*(long *)(unaff_x21 + 0x180),iVar13,*unaff_x25), lVar10 == 0)) ||
           (lVar9 == 0)) goto LAB_03f2b8c0;
        *(undefined4 *)(lVar9 + 0x48) = *(undefined4 *)(lVar10 + 0x48);
        if (*(long *)(unaff_x19 + 0x180) == 0) goto LAB_03f2b8c0;
        lVar9 = FUN_04de82e0(*(long *)(unaff_x19 + 0x180),iVar13,*unaff_x25);
        if (((*(long *)(unaff_x21 + 0x180) == 0) ||
            (lVar10 = FUN_04de82e0(*(long *)(unaff_x21 + 0x180),iVar13,*unaff_x25), lVar10 == 0)) ||
           (lVar9 == 0)) goto LAB_03f2b8c0;
        uVar5 = *(undefined8 *)(lVar10 + 0x134);
        *(undefined4 *)(lVar9 + 0x13c) = *(undefined4 *)(lVar10 + 0x13c);
        *(undefined8 *)(lVar9 + 0x134) = uVar5;
        if (*(long *)(unaff_x19 + 0x180) == 0) goto LAB_03f2b8c0;
        lVar9 = FUN_04de82e0(*(long *)(unaff_x19 + 0x180),iVar13,*unaff_x25);
        if (((*(long *)(unaff_x21 + 0x180) == 0) ||
            (lVar10 = FUN_04de82e0(*(long *)(unaff_x21 + 0x180),iVar13,*unaff_x25), lVar10 == 0)) ||
           (lVar9 == 0)) goto LAB_03f2b8c0;
        *(undefined1 *)(lVar9 + 0x152) = *(undefined1 *)(lVar10 + 0x152);
        if (*(long *)(unaff_x19 + 0x180) == 0) goto LAB_03f2b8c0;
        lVar9 = FUN_04de82e0(*(long *)(unaff_x19 + 0x180),iVar13,*unaff_x25);
        if (((*(long *)(unaff_x21 + 0x180) == 0) ||
            (lVar10 = FUN_04de82e0(*(long *)(unaff_x21 + 0x180),iVar13,*unaff_x25), lVar10 == 0)) ||
           (lVar9 == 0)) goto LAB_03f2b8c0;
        *(undefined8 *)(lVar9 + 0x158) = *(undefined8 *)(lVar10 + 0x158);
        thunk_FUN_03afed3c(lVar9 + 0x158);
        if (*(long *)(unaff_x19 + 0x180) == 0) goto LAB_03f2b8c0;
        lVar9 = FUN_04de82e0(*(long *)(unaff_x19 + 0x180),iVar13,*unaff_x25);
        if (((*(long *)(unaff_x21 + 0x180) == 0) ||
            (lVar10 = FUN_04de82e0(*(long *)(unaff_x21 + 0x180),iVar13,*unaff_x25), lVar10 == 0)) ||
           (lVar9 == 0)) goto LAB_03f2b8c0;
        *(undefined8 *)(lVar9 + 0x160) = *(undefined8 *)(lVar10 + 0x160);
        thunk_FUN_03afed3c(lVar9 + 0x160);
        if (*(long *)(unaff_x19 + 0x180) == 0) goto LAB_03f2b8c0;
        lVar9 = FUN_04de82e0(*(long *)(unaff_x19 + 0x180),iVar13,*unaff_x25);
        if (((*(long *)(unaff_x21 + 0x180) == 0) ||
            (lVar10 = FUN_04de82e0(*(long *)(unaff_x21 + 0x180),iVar13,*unaff_x25), lVar10 == 0)) ||
           (lVar9 == 0)) goto LAB_03f2b8c0;
        *(undefined4 *)(lVar9 + 0x168) = *(undefined4 *)(lVar10 + 0x168);
        if (*(long *)(unaff_x19 + 0x180) == 0) goto LAB_03f2b8c0;
        lVar9 = FUN_04de82e0(*(long *)(unaff_x19 + 0x180),iVar13,*unaff_x25);
        if (((*(long *)(unaff_x21 + 0x180) == 0) ||
            (lVar10 = FUN_04de82e0(*(long *)(unaff_x21 + 0x180),iVar13,*unaff_x25), lVar10 == 0)) ||
           (lVar9 == 0)) goto LAB_03f2b8c0;
        *(undefined8 *)(lVar9 + 0x200) = *(undefined8 *)(lVar10 + 0x200);
        if (*(long *)(unaff_x19 + 0x180) == 0) goto LAB_03f2b8c0;
        lVar9 = FUN_04de82e0(*(long *)(unaff_x19 + 0x180),iVar13,*unaff_x25);
        if (((*(long *)(unaff_x21 + 0x180) == 0) ||
            (lVar10 = FUN_04de82e0(*(long *)(unaff_x21 + 0x180),iVar13,*unaff_x25), lVar10 == 0)) ||
           (lVar9 == 0)) goto LAB_03f2b8c0;
        *(undefined8 *)(lVar9 + 0x208) = *(undefined8 *)(lVar10 + 0x208);
        if (*(long *)(unaff_x19 + 0x180) == 0) goto LAB_03f2b8c0;
        lVar9 = FUN_04de82e0(*(long *)(unaff_x19 + 0x180),iVar13,*unaff_x25);
        if (((*(long *)(unaff_x21 + 0x180) == 0) ||
            (lVar10 = FUN_04de82e0(*(long *)(unaff_x21 + 0x180),iVar13,*unaff_x25), lVar10 == 0)) ||
           (lVar9 == 0)) goto LAB_03f2b8c0;
        *(undefined8 *)(lVar9 + 0x210) = *(undefined8 *)(lVar10 + 0x210);
        if (*(long *)(unaff_x19 + 0x180) == 0) goto LAB_03f2b8c0;
        lVar9 = FUN_04de82e0(*(long *)(unaff_x19 + 0x180),iVar13,*unaff_x25);
        if (((*(long *)(unaff_x21 + 0x180) == 0) ||
            (lVar10 = FUN_04de82e0(*(long *)(unaff_x21 + 0x180),iVar13,*unaff_x25), lVar10 == 0)) ||
           (lVar9 == 0)) goto LAB_03f2b8c0;
        iVar13 = iVar13 + 1;
        *(undefined8 *)(lVar9 + 0x218) = *(undefined8 *)(lVar10 + 0x218);
        lVar9 = *(long *)(unaff_x21 + 0x180);
        if (lVar9 == 0) goto LAB_03f2b8c0;
      }
      lVar9 = FUN_07c99058();
      if (lVar9 != 0) {
        lVar9 = FUN_04561560(lVar9,*(undefined8 *)PTR_DAT_0848e770);
        if (*(int *)(*(long *)PTR_DAT_08486738 + 0xe4) == 0) {
          thunk_FUN_03ae8be4(*(long *)PTR_DAT_08486738);
        }
        uVar7 = FUN_07c9c218(lVar9,0,0);
        puVar4 = PTR_DAT_0848e820;
        puVar3 = PTR_DAT_08489628;
        if ((uVar7 & 1) == 0) goto LAB_03f2b724;
        if ((lVar9 != 0) && (lVar10 = *(long *)(lVar9 + 0x20), lVar10 != 0)) {
          iVar13 = 0;
          goto LAB_03f2abc0;
        }
      }
    }
  }
  goto LAB_03f2b8c0;
  while( true ) {
    lVar10 = *(long *)(lVar9 + 0x20);
    iVar13 = iVar13 + 1;
    if (lVar10 == 0) break;
LAB_03f2abc0:
    if (*(int *)(lVar10 + 0x18) <= iVar13) goto LAB_03f2b724;
    if (*unaff_x20 == 0) break;
    lVar10 = *(long *)(*unaff_x20 + 0x20);
    uVar5 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_0848e838);
    FUN_03f87a60(uVar5,0);
    if (lVar10 == 0) break;
    lVar11 = *(long *)(lVar10 + 0x10);
    lVar12 = *(long *)PTR_DAT_0848e7f0;
    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
    if (lVar11 == 0) break;
    uVar2 = *(uint *)(lVar10 + 0x18);
    if (uVar2 < *(uint *)(lVar11 + 0x18)) {
      *(uint *)(lVar10 + 0x18) = uVar2 + 1;
      puVar6 = (undefined8 *)(lVar11 + (long)(int)uVar2 * 8 + 0x20);
      *puVar6 = uVar5;
      thunk_FUN_03afed3c(puVar6,uVar5);
    }
    else {
      FUN_04de85b0(lVar10,uVar5,*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
    }
    if ((*unaff_x20 == 0) || (lVar10 = *(long *)(*unaff_x20 + 0x20), lVar10 == 0)) break;
    lVar10 = FUN_04de82e0(lVar10,iVar13,*unaff_x26);
    if ((*(long *)(lVar9 + 0x20) == 0) ||
       ((lVar11 = FUN_04de82e0(*(long *)(lVar9 + 0x20),iVar13,*unaff_x26), lVar11 == 0 ||
        (lVar10 == 0)))) break;
    *(undefined1 *)(lVar10 + 0x160) = *(undefined1 *)(lVar11 + 0x160);
    if ((*unaff_x20 == 0) || (lVar10 = *(long *)(*unaff_x20 + 0x20), lVar10 == 0)) break;
    lVar10 = FUN_04de82e0(lVar10,iVar13,*unaff_x26);
    if (((*(long *)(lVar9 + 0x20) == 0) ||
        (lVar11 = FUN_04de82e0(*(long *)(lVar9 + 0x20),iVar13,*unaff_x26), lVar11 == 0)) ||
       (lVar10 == 0)) break;
    *(undefined1 *)(lVar10 + 400) = *(undefined1 *)(lVar11 + 400);
    if ((*unaff_x20 == 0) || (lVar10 = *(long *)(*unaff_x20 + 0x20), lVar10 == 0)) break;
    lVar10 = FUN_04de82e0(lVar10,iVar13,*unaff_x26);
    if ((*(long *)(lVar9 + 0x20) == 0) ||
       ((lVar11 = FUN_04de82e0(*(long *)(lVar9 + 0x20),iVar13,*unaff_x26), lVar11 == 0 ||
        (lVar10 == 0)))) break;
    *(undefined1 *)(lVar10 + 0x191) = *(undefined1 *)(lVar11 + 0x191);
    if ((*unaff_x20 == 0) || (lVar10 = *(long *)(*unaff_x20 + 0x20), lVar10 == 0)) break;
    lVar10 = FUN_04de82e0(lVar10,iVar13,*unaff_x26);
    if (((*(long *)(lVar9 + 0x20) == 0) ||
        (lVar11 = FUN_04de82e0(*(long *)(lVar9 + 0x20),iVar13,*unaff_x26), lVar11 == 0)) ||
       (lVar10 == 0)) break;
    *(undefined8 *)(lVar10 + 0x198) = *(undefined8 *)(lVar11 + 0x198);
    thunk_FUN_03afed3c(lVar10 + 0x198);
    if ((*unaff_x20 == 0) || (lVar10 = *(long *)(*unaff_x20 + 0x20), lVar10 == 0)) break;
    lVar10 = FUN_04de82e0(lVar10,iVar13,*unaff_x26);
    if ((*(long *)(lVar9 + 0x20) == 0) ||
       ((lVar11 = FUN_04de82e0(*(long *)(lVar9 + 0x20),iVar13,*unaff_x26), lVar11 == 0 ||
        (lVar10 == 0)))) break;
    *(undefined8 *)(lVar10 + 0x290) = *(undefined8 *)(lVar11 + 0x290);
    if ((*unaff_x20 == 0) || (lVar10 = *(long *)(*unaff_x20 + 0x20), lVar10 == 0)) break;
    lVar10 = FUN_04de82e0(lVar10,iVar13,*unaff_x26);
    if (((*(long *)(lVar9 + 0x20) == 0) ||
        (lVar11 = FUN_04de82e0(*(long *)(lVar9 + 0x20),iVar13,*unaff_x26), lVar11 == 0)) ||
       (lVar10 == 0)) break;
    *(undefined8 *)(lVar10 + 0x2a0) = *(undefined8 *)(lVar11 + 0x2a0);
    if (*unaff_x20 == 0) break;
    lVar10 = *(long *)(*unaff_x20 + 0x28);
    uVar5 = *(undefined8 *)PTR_DAT_0848e758;
    if (*(int *)(*(long *)(PTR_DAT_08486760 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar5 = FUN_0675ff58(uVar5,0);
    if (*(int *)(*(long *)PTR_DAT_08486738 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)PTR_DAT_08486738);
    }
    plVar8 = (long *)FUN_07ca3718(uVar5,0);
    uVar5 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_0848e840);
    if (plVar8 == (long *)0x0) {
LAB_03f2aebc:
      plVar8 = (long *)0x0;
    }
    else {
      bVar1 = *(byte *)(*(long *)PTR_DAT_0848e760 + 0x130);
      if (*(byte *)(*plVar8 + 0x130) < bVar1) goto LAB_03f2aebc;
      if (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_0848e760)
      {
        plVar8 = (long *)0x0;
      }
    }
    FUN_03f1fda0(uVar5,plVar8);
    if (lVar10 == 0) break;
    lVar11 = *(long *)(lVar10 + 0x10);
    lVar12 = *(long *)PTR_DAT_0848e800;
    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
    if (lVar11 == 0) break;
    uVar2 = *(uint *)(lVar10 + 0x18);
    if (uVar2 < *(uint *)(lVar11 + 0x18)) {
      *(uint *)(lVar10 + 0x18) = uVar2 + 1;
      puVar6 = (undefined8 *)(lVar11 + (long)(int)uVar2 * 8 + 0x20);
      *puVar6 = uVar5;
      thunk_FUN_03afed3c(puVar6,uVar5);
    }
    else {
      FUN_04de85b0(lVar10,uVar5,*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
    }
    if (*(long *)(lVar9 + 0x28) == 0) break;
    if (iVar13 < *(int *)(*(long *)(lVar9 + 0x28) + 0x18)) {
      if ((*unaff_x20 == 0) || (lVar10 = *(long *)(*unaff_x20 + 0x28), lVar10 == 0)) break;
      lVar10 = FUN_04de82e0(lVar10,iVar13,*unaff_x28);
      if ((*(long *)(lVar9 + 0x28) == 0) ||
         ((lVar11 = FUN_04de82e0(*(long *)(lVar9 + 0x28),iVar13,*unaff_x28), lVar11 == 0 ||
          (lVar10 == 0)))) break;
      *(undefined4 *)(lVar10 + 0x10) = *(undefined4 *)(lVar11 + 0x10);
      if ((*unaff_x20 == 0) || (lVar10 = *(long *)(*unaff_x20 + 0x28), lVar10 == 0)) break;
      lVar10 = FUN_04de82e0(lVar10,iVar13,*unaff_x28);
      if (((*(long *)(lVar9 + 0x28) == 0) ||
          (lVar11 = FUN_04de82e0(*(long *)(lVar9 + 0x28),iVar13,*unaff_x28), lVar11 == 0)) ||
         (lVar10 == 0)) break;
      *(undefined4 *)(lVar10 + 0x14) = *(undefined4 *)(lVar11 + 0x14);
      if ((*unaff_x20 == 0) || (lVar10 = *(long *)(*unaff_x20 + 0x28), lVar10 == 0)) break;
      lVar10 = FUN_04de82e0(lVar10,iVar13,*unaff_x28);
      if ((*(long *)(lVar9 + 0x28) == 0) ||
         ((lVar11 = FUN_04de82e0(*(long *)(lVar9 + 0x28),iVar13,*unaff_x28), lVar11 == 0 ||
          (lVar10 == 0)))) break;
      uVar5 = *(undefined8 *)(lVar11 + 0x18);
      *(undefined4 *)(lVar10 + 0x20) = *(undefined4 *)(lVar11 + 0x20);
      *(undefined8 *)(lVar10 + 0x18) = uVar5;
      if ((*unaff_x20 == 0) || (lVar10 = *(long *)(*unaff_x20 + 0x28), lVar10 == 0)) break;
      lVar10 = FUN_04de82e0(lVar10,iVar13,*unaff_x28);
      if (((*(long *)(lVar9 + 0x28) == 0) ||
          (lVar11 = FUN_04de82e0(*(long *)(lVar9 + 0x28),iVar13,*unaff_x28), lVar11 == 0)) ||
         (lVar10 == 0)) break;
      uVar5 = *(undefined8 *)(lVar11 + 0x30);
      *(undefined4 *)(lVar10 + 0x38) = *(undefined4 *)(lVar11 + 0x38);
      *(undefined8 *)(lVar10 + 0x30) = uVar5;
      if ((*unaff_x20 == 0) || (lVar10 = *(long *)(*unaff_x20 + 0x28), lVar10 == 0)) break;
      lVar10 = FUN_04de82e0(lVar10,iVar13,*unaff_x28);
      if ((*(long *)(lVar9 + 0x28) == 0) ||
         ((lVar11 = FUN_04de82e0(*(long *)(lVar9 + 0x28),iVar13,*unaff_x28), lVar11 == 0 ||
          (lVar10 == 0)))) break;
      uVar5 = *(undefined8 *)(lVar11 + 0x3c);
      *(undefined4 *)(lVar10 + 0x44) = *(undefined4 *)(lVar11 + 0x44);
      *(undefined8 *)(lVar10 + 0x3c) = uVar5;
      if ((*unaff_x20 == 0) || (lVar10 = *(long *)(*unaff_x20 + 0x28), lVar10 == 0)) break;
      lVar10 = FUN_04de82e0(lVar10,iVar13,*unaff_x28);
      if (((*(long *)(lVar9 + 0x28) == 0) ||
          (lVar11 = FUN_04de82e0(*(long *)(lVar9 + 0x28),iVar13,*unaff_x28), lVar11 == 0)) ||
         (lVar10 == 0)) break;
      *(undefined1 *)(lVar10 + 0x48) = *(undefined1 *)(lVar11 + 0x48);
      if ((*unaff_x20 == 0) || (lVar10 = *(long *)(*unaff_x20 + 0x28), lVar10 == 0)) break;
      lVar10 = FUN_04de82e0(lVar10,iVar13,*unaff_x28);
      if ((*(long *)(lVar9 + 0x28) == 0) ||
         ((lVar11 = FUN_04de82e0(*(long *)(lVar9 + 0x28),iVar13,*unaff_x28), lVar11 == 0 ||
          (lVar10 == 0)))) break;
      *(undefined1 *)(lVar10 + 0x49) = *(undefined1 *)(lVar11 + 0x49);
      if ((*unaff_x20 == 0) || (lVar10 = *(long *)(*unaff_x20 + 0x28), lVar10 == 0)) break;
      lVar10 = FUN_04de82e0(lVar10,iVar13,*unaff_x28);
      if (((*(long *)(lVar9 + 0x28) == 0) ||
          (lVar11 = FUN_04de82e0(*(long *)(lVar9 + 0x28),iVar13,*unaff_x28), lVar11 == 0)) ||
         (lVar10 == 0)) break;
      *(undefined1 *)(lVar10 + 0x4a) = *(undefined1 *)(lVar11 + 0x4a);
      if ((*unaff_x20 == 0) || (lVar10 = *(long *)(*unaff_x20 + 0x28), lVar10 == 0)) break;
      lVar10 = FUN_04de82e0(lVar10,iVar13,*unaff_x28);
      if ((*(long *)(lVar9 + 0x28) == 0) ||
         ((lVar11 = FUN_04de82e0(*(long *)(lVar9 + 0x28),iVar13,*unaff_x28), lVar11 == 0 ||
          (lVar10 == 0)))) break;
      *(undefined4 *)(lVar10 + 0x4c) = *(undefined4 *)(lVar11 + 0x4c);
      if ((*unaff_x20 == 0) || (lVar10 = *(long *)(*unaff_x20 + 0x28), lVar10 == 0)) break;
      lVar10 = FUN_04de82e0(lVar10,iVar13,*unaff_x28);
      if (((*(long *)(lVar9 + 0x28) == 0) ||
          (lVar11 = FUN_04de82e0(*(long *)(lVar9 + 0x28),iVar13,*unaff_x28), lVar11 == 0)) ||
         (lVar10 == 0)) break;
      *(undefined4 *)(lVar10 + 0x50) = *(undefined4 *)(lVar11 + 0x50);
      if ((*unaff_x20 == 0) || (lVar10 = *(long *)(*unaff_x20 + 0x28), lVar10 == 0)) break;
      lVar10 = FUN_04de82e0(lVar10,iVar13,*unaff_x28);
      if ((*(long *)(lVar9 + 0x28) == 0) ||
         ((lVar11 = FUN_04de82e0(*(long *)(lVar9 + 0x28),iVar13,*unaff_x28), lVar11 == 0 ||
          (lVar10 == 0)))) break;
      *(undefined4 *)(lVar10 + 0x54) = *(undefined4 *)(lVar11 + 0x54);
      if ((*unaff_x20 == 0) || (lVar10 = *(long *)(*unaff_x20 + 0x28), lVar10 == 0)) break;
      lVar10 = FUN_04de82e0(lVar10,iVar13,*unaff_x28);
      if (((*(long *)(lVar9 + 0x28) == 0) ||
          (lVar11 = FUN_04de82e0(*(long *)(lVar9 + 0x28),iVar13,*unaff_x28), lVar11 == 0)) ||
         (lVar10 == 0)) break;
      *(undefined4 *)(lVar10 + 0x58) = *(undefined4 *)(lVar11 + 0x58);
      if ((*unaff_x20 == 0) || (lVar10 = *(long *)(*unaff_x20 + 0x28), lVar10 == 0)) break;
      lVar10 = FUN_04de82e0(lVar10,iVar13,*unaff_x28);
      if ((*(long *)(lVar9 + 0x28) == 0) ||
         ((lVar11 = FUN_04de82e0(*(long *)(lVar9 + 0x28),iVar13,*unaff_x28), lVar11 == 0 ||
          (lVar10 == 0)))) break;
      *(undefined1 *)(lVar10 + 0x5c) = *(undefined1 *)(lVar11 + 0x5c);
      if ((*unaff_x20 == 0) || (lVar10 = *(long *)(*unaff_x20 + 0x28), lVar10 == 0)) break;
      lVar10 = FUN_04de82e0(lVar10,iVar13,*unaff_x28);
      if (((*(long *)(lVar9 + 0x28) == 0) ||
          (lVar11 = FUN_04de82e0(*(long *)(lVar9 + 0x28),iVar13,*unaff_x28), lVar11 == 0)) ||
         (lVar10 == 0)) break;
      *(undefined4 *)(lVar10 + 0x60) = *(undefined4 *)(lVar11 + 0x60);
      if ((*unaff_x20 == 0) || (lVar10 = *(long *)(*unaff_x20 + 0x28), lVar10 == 0)) break;
      lVar10 = FUN_04de82e0(lVar10,iVar13,*unaff_x28);
      if ((*(long *)(lVar9 + 0x28) == 0) ||
         ((lVar11 = FUN_04de82e0(*(long *)(lVar9 + 0x28),iVar13,*unaff_x28), lVar11 == 0 ||
          (lVar10 == 0)))) break;
      *(undefined4 *)(lVar10 + 100) = *(undefined4 *)(lVar11 + 100);
      if ((*unaff_x20 == 0) || (lVar10 = *(long *)(*unaff_x20 + 0x28), lVar10 == 0)) break;
      lVar10 = FUN_04de82e0(lVar10,iVar13,*unaff_x28);
      if (((*(long *)(lVar9 + 0x28) == 0) ||
          (lVar11 = FUN_04de82e0(*(long *)(lVar9 + 0x28),iVar13,*unaff_x28), lVar11 == 0)) ||
         (lVar10 == 0)) break;
      *(undefined1 *)(lVar10 + 0x68) = *(undefined1 *)(lVar11 + 0x68);
      if ((*unaff_x20 == 0) || (lVar10 = *(long *)(*unaff_x20 + 0x28), lVar10 == 0)) break;
      lVar10 = FUN_04de82e0(lVar10,iVar13,*unaff_x28);
      if ((*(long *)(lVar9 + 0x28) == 0) ||
         ((lVar11 = FUN_04de82e0(*(long *)(lVar9 + 0x28),iVar13,*unaff_x28), lVar11 == 0 ||
          (lVar10 == 0)))) break;
      *(undefined1 *)(lVar10 + 0x69) = *(undefined1 *)(lVar11 + 0x69);
      if ((*unaff_x20 == 0) || (lVar10 = *(long *)(*unaff_x20 + 0x28), lVar10 == 0)) break;
      lVar10 = FUN_04de82e0(lVar10,iVar13,*unaff_x28);
      if (((*(long *)(lVar9 + 0x28) == 0) ||
          (lVar11 = FUN_04de82e0(*(long *)(lVar9 + 0x28),iVar13,*unaff_x28), lVar11 == 0)) ||
         (lVar10 == 0)) break;
      *(undefined1 *)(lVar10 + 0x6a) = *(undefined1 *)(lVar11 + 0x6a);
      if ((*unaff_x20 == 0) || (lVar10 = *(long *)(*unaff_x20 + 0x28), lVar10 == 0)) break;
      lVar10 = FUN_04de82e0(lVar10,iVar13,*unaff_x28);
      if ((*(long *)(lVar9 + 0x28) == 0) ||
         ((lVar11 = FUN_04de82e0(*(long *)(lVar9 + 0x28),iVar13,*unaff_x28), lVar11 == 0 ||
          (lVar10 == 0)))) break;
      *(undefined8 *)(lVar10 + 0x70) = *(undefined8 *)(lVar11 + 0x70);
      thunk_FUN_03afed3c((undefined8 *)(lVar10 + 0x70));
      if ((*unaff_x20 == 0) || (lVar10 = *(long *)(*unaff_x20 + 0x28), lVar10 == 0)) break;
      lVar10 = FUN_04de82e0(lVar10,iVar13,*unaff_x28);
      if ((*(long *)(lVar9 + 0x28) == 0) ||
         (lVar11 = FUN_04de82e0(*(long *)(lVar9 + 0x28),iVar13,*unaff_x28), lVar11 == 0)) break;
      uVar14 = *(undefined8 *)(lVar11 + 0x78);
      uVar5 = thunk_FUN_03ac74bc(*(undefined8 *)puVar3);
      FUN_04e86ce4(uVar5,uVar14,*(undefined8 *)puVar4);
      if (lVar10 == 0) break;
      *(undefined8 *)(lVar10 + 0x78) = uVar5;
      thunk_FUN_03afed3c((undefined8 *)(lVar10 + 0x78),uVar5);
      if ((*unaff_x20 == 0) || (lVar10 = *(long *)(*unaff_x20 + 0x28), lVar10 == 0)) break;
      lVar10 = FUN_04de82e0(lVar10,iVar13,*unaff_x28);
      if ((*(long *)(lVar9 + 0x28) == 0) ||
         (lVar11 = FUN_04de82e0(*(long *)(lVar9 + 0x28),iVar13,*unaff_x28), lVar11 == 0)) break;
      uVar14 = *(undefined8 *)(lVar11 + 0x80);
      uVar5 = thunk_FUN_03ac74bc(*(undefined8 *)puVar3);
      FUN_04e86ce4(uVar5,uVar14,*(undefined8 *)puVar4);
      if (lVar10 == 0) break;
      *(undefined8 *)(lVar10 + 0x80) = uVar5;
      thunk_FUN_03afed3c((undefined8 *)(lVar10 + 0x80),uVar5);
      if ((*unaff_x20 == 0) || (lVar10 = *(long *)(*unaff_x20 + 0x28), lVar10 == 0)) break;
      lVar10 = FUN_04de82e0(lVar10,iVar13,*unaff_x28);
      if ((*(long *)(lVar9 + 0x28) == 0) ||
         ((lVar11 = FUN_04de82e0(*(long *)(lVar9 + 0x28),iVar13,*unaff_x28), lVar11 == 0 ||
          (lVar10 == 0)))) break;
      *(undefined1 *)(lVar10 + 0x88) = *(undefined1 *)(lVar11 + 0x88);
      if ((*unaff_x20 == 0) || (lVar10 = *(long *)(*unaff_x20 + 0x28), lVar10 == 0)) break;
      lVar10 = FUN_04de82e0(lVar10,iVar13,*unaff_x28);
      if (((*(long *)(lVar9 + 0x28) == 0) ||
          (lVar11 = FUN_04de82e0(*(long *)(lVar9 + 0x28),iVar13,*unaff_x28), lVar11 == 0)) ||
         (lVar10 == 0)) break;
      *(undefined4 *)(lVar10 + 0x8c) = *(undefined4 *)(lVar11 + 0x8c);
      if ((*unaff_x20 == 0) || (lVar10 = *(long *)(*unaff_x20 + 0x28), lVar10 == 0)) break;
      lVar10 = FUN_04de82e0(lVar10,iVar13,*unaff_x28);
      if ((*(long *)(lVar9 + 0x28) == 0) ||
         ((lVar11 = FUN_04de82e0(*(long *)(lVar9 + 0x28),iVar13,*unaff_x28), lVar11 == 0 ||
          (lVar10 == 0)))) break;
      *(undefined4 *)(lVar10 + 0x90) = *(undefined4 *)(lVar11 + 0x90);
      if ((*unaff_x20 == 0) || (lVar10 = *(long *)(*unaff_x20 + 0x28), lVar10 == 0)) break;
      lVar10 = FUN_04de82e0(lVar10,iVar13,*unaff_x28);
      if (((*(long *)(lVar9 + 0x28) == 0) ||
          (lVar11 = FUN_04de82e0(*(long *)(lVar9 + 0x28),iVar13,*unaff_x28), lVar11 == 0)) ||
         (lVar10 == 0)) break;
      *(undefined4 *)(lVar10 + 0x94) = *(undefined4 *)(lVar11 + 0x94);
      if ((*unaff_x20 == 0) || (lVar10 = *(long *)(*unaff_x20 + 0x28), lVar10 == 0)) break;
      lVar10 = FUN_04de82e0(lVar10,iVar13,*unaff_x28);
      if ((*(long *)(lVar9 + 0x28) == 0) ||
         ((lVar11 = FUN_04de82e0(*(long *)(lVar9 + 0x28),iVar13,*unaff_x28), lVar11 == 0 ||
          (lVar10 == 0)))) break;
      *(undefined4 *)(lVar10 + 0x98) = *(undefined4 *)(lVar11 + 0x98);
    }
  }
  goto LAB_03f2b8c0;

  System_Array__InternalArray__ICollection_Add<ConnectionDataMap_ConnectionSlot<DTLSLayer_DTLSConnectionData>>
  :
  lVar10 = *(long *)(lVar10 + 0x20);
  if (lVar10 == 0) goto LAB_03f2b8c0;
  if (*(int *)(lVar10 + 0x18) <= iVar13) {
    System_Array__IndexOfImpl<SerializedCommand>();
    System_Array__IndexOfImpl<Vector4>();
    FUN_03f26eac();
    return;
  }
  lVar10 = FUN_04de82e0(lVar10,iVar13,*unaff_x26);
  if ((((lVar9 == 0) || (*(long *)(lVar9 + 0x20) == 0)) ||
      (lVar11 = FUN_04de82e0(*(long *)(lVar9 + 0x20),iVar13,*unaff_x26), lVar11 == 0)) ||
     (lVar10 == 0)) goto LAB_03f2b8c0;
  *(undefined1 *)(lVar10 + 400) = *(undefined1 *)(lVar11 + 400);
  if ((*unaff_x20 == 0) || (lVar10 = *(long *)(*unaff_x20 + 0x20), lVar10 == 0)) goto LAB_03f2b8c0;
  lVar10 = FUN_04de82e0(lVar10,iVar13,*unaff_x26);
  if ((*(long *)(lVar9 + 0x20) == 0) ||
     ((lVar11 = FUN_04de82e0(*(long *)(lVar9 + 0x20),iVar13,*unaff_x26), lVar11 == 0 ||
      (lVar10 == 0)))) goto LAB_03f2b8c0;
  iVar13 = iVar13 + 1;
  *(undefined1 *)(lVar10 + 0x191) = *(undefined1 *)(lVar11 + 0x191);
  lVar10 = *unaff_x20;
  if (lVar10 == 0) goto LAB_03f2b8c0;
  goto 
  System_Array__InternalArray__ICollection_Add<ConnectionDataMap_ConnectionSlot<DTLSLayer_DTLSConnectionData>>
  ;
LAB_03f2b724:
  lVar10 = *unaff_x20;
  if (lVar10 != 0) {
    iVar13 = 0;
    while (lVar11 = *(long *)(lVar10 + 0x28), lVar11 != 0) {
      if (*(int *)(lVar11 + 0x18) <= iVar13) {
        iVar13 = 0;
        goto 
        System_Array__InternalArray__ICollection_Add<ConnectionDataMap_ConnectionSlot<DTLSLayer_DTLSConnectionData>>
        ;
      }
      lVar10 = FUN_04de82e0(lVar11,iVar13,*unaff_x28);
      if ((((lVar9 == 0) || (*(long *)(lVar9 + 0x28) == 0)) ||
          (lVar11 = FUN_04de82e0(*(long *)(lVar9 + 0x28),iVar13,*unaff_x28), lVar11 == 0)) ||
         (lVar10 == 0)) break;
      *(undefined1 *)(lVar10 + 0x48) = *(undefined1 *)(lVar11 + 0x48);
      if ((*unaff_x20 == 0) || (lVar10 = *(long *)(*unaff_x20 + 0x28), lVar10 == 0)) break;
      lVar10 = FUN_04de82e0(lVar10,iVar13,*unaff_x28);
      if ((*(long *)(lVar9 + 0x28) == 0) ||
         ((lVar11 = FUN_04de82e0(*(long *)(lVar9 + 0x28),iVar13,*unaff_x28), lVar11 == 0 ||
          (lVar10 == 0)))) break;
      *(undefined1 *)(lVar10 + 0x49) = *(undefined1 *)(lVar11 + 0x49);
      if ((*unaff_x20 == 0) || (lVar10 = *(long *)(*unaff_x20 + 0x28), lVar10 == 0)) break;
      lVar10 = FUN_04de82e0(lVar10,iVar13,*unaff_x28);
      if (((*(long *)(lVar9 + 0x28) == 0) ||
          (lVar11 = FUN_04de82e0(*(long *)(lVar9 + 0x28),iVar13,*unaff_x28), lVar11 == 0)) ||
         (lVar10 == 0)) break;
      iVar13 = iVar13 + 1;
      *(undefined1 *)(lVar10 + 0x4a) = *(undefined1 *)(lVar11 + 0x4a);
      lVar10 = *unaff_x20;
      if (lVar10 == 0) break;
    }
  }
LAB_03f2b8c0:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


