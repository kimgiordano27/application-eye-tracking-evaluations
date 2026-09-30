/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<XmlTextWriter.Namespace>
ENTRY_POINT: 03c3c67c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


bool System_Array__InternalArray__ICollection_Add<XmlTextWriter_Namespace>(void)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long unaff_x19;
  size_t unaff_x22;
  uint unaff_w23;
  uint uVar11;
  int iVar12;
  undefined8 unaff_x24;
  undefined8 *unaff_x25;
  long lVar13;
  long unaff_x29;
  
  uVar2 = FUN_0597a8dc();
  *(undefined8 *)(unaff_x29 + -0x78) = unaff_x24;
  uVar11 = unaff_w23;
  if (7 < (int)unaff_w23) {
    do {
                    /* try { // try from 03c3c694 to 03d3c69f has its CatchHandler @ 03c3c6ac */
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 03c3c5ec with catch @ 03c3c6a0
                       try { // try from 03c3c6a0 to 03d3c6c7 has its CatchHandler @ 03c3c568 */
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 03c3c5c0 with catch @ 03c3c6a4
                        */
      uVar3 = (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 03c3c5f0 with catch @ 03c3c6a8
                        */
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 03c3c618 with catch @ 03c3c6ac
                       catch(type#1 @ 06cdc248) { ... } // from try @ 03c3c694 with catch @ 03c3c6ac
                        */
      pvVar4 = (void *)(*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
      memcpy(unaff_x25,pvVar4,unaff_x22);
      lVar9 = *(long *)(unaff_x19 + 0x38);
      lVar7 = *(long *)(lVar9 + 0x18);
      lVar13 = lVar7;
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_031c09d4(lVar7);
        lVar9 = *(long *)(unaff_x19 + 0x38);
        lVar13 = *(long *)(lVar9 + 0x18);
      }
      uVar5 = *(undefined8 *)(lVar9 + 0x28);
      puVar8 = unaff_x25;
      if (-1 < *(int *)(lVar13 + 0x28)) {
        puVar8 = (undefined8 *)*unaff_x25;
      }
      *(undefined8 **)(unaff_x29 + -0x18) = puVar8;
      FUN_031896ac(lVar7,uVar5,*(undefined8 *)(unaff_x29 + -0x20),uVar3,unaff_x29 + -0x18,
                   unaff_x29 + -0xc);
      if (*(char *)(unaff_x29 + -0xc) == '\0') {
LAB_03c3cda0:
        lVar13 = *(long *)(unaff_x29 + -0x28);
        goto LAB_03c3cda4;
      }
      FUN_0597a900(uVar2,1,0);
      uVar3 = (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
      FUN_0597a900(uVar2,1,0);
      pvVar4 = (void *)(*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
      memcpy(unaff_x25,pvVar4,unaff_x22);
      lVar9 = *(long *)(unaff_x19 + 0x38);
      lVar7 = *(long *)(lVar9 + 0x18);
      lVar13 = lVar7;
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_031c09d4(lVar7);
        lVar9 = *(long *)(unaff_x19 + 0x38);
        lVar13 = *(long *)(lVar9 + 0x18);
      }
      uVar5 = *(undefined8 *)(lVar9 + 0x28);
      puVar8 = unaff_x25;
      if (-1 < *(int *)(lVar13 + 0x28)) {
        puVar8 = (undefined8 *)*unaff_x25;
      }
      *(undefined8 **)(unaff_x29 + -0x18) = puVar8;
      FUN_031896ac(lVar7,uVar5,*(undefined8 *)(unaff_x29 + -0x30),uVar3,unaff_x29 + -0x18,
                   unaff_x29 + -0xc);
      if (*(char *)(unaff_x29 + -0xc) == '\0') goto LAB_03c3cda0;
      FUN_0597a900(uVar2,2,0);
      uVar3 = (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
      FUN_0597a900(uVar2,2,0);
      pvVar4 = (void *)(*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
      memcpy(unaff_x25,pvVar4,unaff_x22);
      lVar9 = *(long *)(unaff_x19 + 0x38);
      lVar7 = *(long *)(lVar9 + 0x18);
      lVar13 = lVar7;
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_031c09d4(lVar7);
        lVar9 = *(long *)(unaff_x19 + 0x38);
        lVar13 = *(long *)(lVar9 + 0x18);
      }
      uVar5 = *(undefined8 *)(lVar9 + 0x28);
      puVar8 = unaff_x25;
      if (-1 < *(int *)(lVar13 + 0x28)) {
        puVar8 = (undefined8 *)*unaff_x25;
      }
      *(undefined8 **)(unaff_x29 + -0x18) = puVar8;
      FUN_031896ac(lVar7,uVar5,*(undefined8 *)(unaff_x29 + -0x38),uVar3,unaff_x29 + -0x18,
                   unaff_x29 + -0xc);
      if (*(char *)(unaff_x29 + -0xc) == '\0') goto LAB_03c3cda0;
      FUN_0597a900(uVar2,3,0);
      uVar3 = (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
      FUN_0597a900(uVar2,3,0);
      pvVar4 = (void *)(*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
      memcpy(unaff_x25,pvVar4,unaff_x22);
      lVar9 = *(long *)(unaff_x19 + 0x38);
      lVar7 = *(long *)(lVar9 + 0x18);
      lVar13 = lVar7;
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_031c09d4(lVar7);
        lVar9 = *(long *)(unaff_x19 + 0x38);
        lVar13 = *(long *)(lVar9 + 0x18);
      }
      uVar5 = *(undefined8 *)(lVar9 + 0x28);
      puVar8 = unaff_x25;
      if (-1 < *(int *)(lVar13 + 0x28)) {
        puVar8 = (undefined8 *)*unaff_x25;
      }
      *(undefined8 **)(unaff_x29 + -0x18) = puVar8;
      FUN_031896ac(lVar7,uVar5,*(undefined8 *)(unaff_x29 + -0x40),uVar3,unaff_x29 + -0x18,
                   unaff_x29 + -0xc);
      if (*(char *)(unaff_x29 + -0xc) == '\0') goto LAB_03c3cda0;
      FUN_0597a900(uVar2,4,0);
      uVar3 = (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
      FUN_0597a900(uVar2,4,0);
      pvVar4 = (void *)(*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
      memcpy(unaff_x25,pvVar4,unaff_x22);
      lVar9 = *(long *)(unaff_x19 + 0x38);
      lVar7 = *(long *)(lVar9 + 0x18);
      lVar13 = lVar7;
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_031c09d4(lVar7);
        lVar9 = *(long *)(unaff_x19 + 0x38);
        lVar13 = *(long *)(lVar9 + 0x18);
      }
      uVar5 = *(undefined8 *)(lVar9 + 0x28);
      puVar8 = unaff_x25;
      if (-1 < *(int *)(lVar13 + 0x28)) {
        puVar8 = (undefined8 *)*unaff_x25;
      }
      *(undefined8 **)(unaff_x29 + -0x18) = puVar8;
      FUN_031896ac(lVar7,uVar5,*(undefined8 *)(unaff_x29 + -0x48),uVar3,unaff_x29 + -0x18,
                   unaff_x29 + -0xc);
      if (*(char *)(unaff_x29 + -0xc) == '\0') goto LAB_03c3cda0;
      FUN_0597a900(uVar2,5,0);
      uVar3 = (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
      FUN_0597a900(uVar2,5,0);
      pvVar4 = (void *)(*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
      memcpy(unaff_x25,pvVar4,unaff_x22);
      lVar9 = *(long *)(unaff_x19 + 0x38);
      lVar7 = *(long *)(lVar9 + 0x18);
      lVar13 = lVar7;
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_031c09d4(lVar7);
        lVar9 = *(long *)(unaff_x19 + 0x38);
        lVar13 = *(long *)(lVar9 + 0x18);
      }
      uVar5 = *(undefined8 *)(lVar9 + 0x28);
      puVar8 = unaff_x25;
      if (-1 < *(int *)(lVar13 + 0x28)) {
        puVar8 = (undefined8 *)*unaff_x25;
      }
      *(undefined8 **)(unaff_x29 + -0x18) = puVar8;
      FUN_031896ac(lVar7,uVar5,*(undefined8 *)(unaff_x29 + -0x50),uVar3,unaff_x29 + -0x18,
                   unaff_x29 + -0xc);
      if (*(char *)(unaff_x29 + -0xc) == '\0') goto LAB_03c3cda0;
      FUN_0597a900(uVar2,6,0);
      (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
      FUN_0597a900(uVar2,6,0);
      pvVar4 = (void *)(*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
      memcpy(unaff_x25,pvVar4,unaff_x22);
      lVar9 = *(long *)(unaff_x19 + 0x38);
      lVar7 = *(long *)(lVar9 + 0x18);
      lVar13 = lVar7;
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_031c09d4(lVar7);
        lVar9 = *(long *)(unaff_x19 + 0x38);
        lVar13 = *(long *)(lVar9 + 0x18);
      }
      uVar3 = *(undefined8 *)(lVar9 + 0x28);
      puVar8 = unaff_x25;
      if (-1 < *(int *)(lVar13 + 0x28)) {
        puVar8 = (undefined8 *)*unaff_x25;
      }
      *(undefined8 **)(unaff_x29 + -0x18) = puVar8;
      FUN_031896ac(lVar7,uVar3);
      if (*(char *)(unaff_x29 + -0xc) == '\0') goto LAB_03c3cda0;
      FUN_0597a900(uVar2,7,0);
      (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
      FUN_0597a900(uVar2,7,0);
      pvVar4 = (void *)(*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
      memcpy(unaff_x25,pvVar4,unaff_x22);
      lVar9 = *(long *)(unaff_x19 + 0x38);
      lVar7 = *(long *)(lVar9 + 0x18);
      lVar13 = lVar7;
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_031c09d4(lVar7);
        lVar9 = *(long *)(unaff_x19 + 0x38);
        lVar13 = *(long *)(lVar9 + 0x18);
      }
      uVar3 = *(undefined8 *)(lVar9 + 0x28);
      puVar8 = unaff_x25;
      if (-1 < *(int *)(lVar13 + 0x28)) {
        puVar8 = (undefined8 *)*unaff_x25;
      }
      *(undefined8 **)(unaff_x29 + -0x18) = puVar8;
      FUN_031896ac(lVar7,uVar3);
      if (*(char *)(unaff_x29 + -0xc) == '\0') goto LAB_03c3cda0;
      unaff_w23 = uVar11 - 8;
      uVar2 = FUN_0597a900(uVar2,8,0);
      bVar1 = 0xf < uVar11;
      uVar11 = unaff_w23;
    } while (bVar1);
  }
  uVar11 = unaff_w23 - 4;
  if ((int)unaff_w23 < 4) {
    lVar13 = *(long *)(unaff_x29 + -0x28);
    uVar5 = *(undefined8 *)(unaff_x29 + -0x58);
    uVar11 = unaff_w23;
LAB_03c3ccc4:
    if ((int)uVar11 < 1) {
      bVar1 = true;
    }
    else {
      iVar12 = uVar11 + 1;
      do {
        uVar3 = (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
        pvVar4 = (void *)(*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
        memcpy(unaff_x25,pvVar4,unaff_x22);
        lVar10 = *(long *)(unaff_x19 + 0x38);
        lVar9 = *(long *)(lVar10 + 0x18);
        lVar7 = lVar9;
        if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_031c09d4(lVar9);
          lVar10 = *(long *)(unaff_x19 + 0x38);
          lVar7 = *(long *)(lVar10 + 0x18);
        }
        uVar6 = *(undefined8 *)(lVar10 + 0x28);
        puVar8 = unaff_x25;
        if (-1 < *(int *)(lVar7 + 0x28)) {
          puVar8 = (undefined8 *)*unaff_x25;
        }
        *(undefined8 **)(unaff_x29 + -0x18) = puVar8;
        FUN_031896ac(lVar9,uVar6,uVar5,uVar3,unaff_x29 + -0x18,unaff_x29 + -0xc);
        bVar1 = *(char *)(unaff_x29 + -0xc) != '\0';
        if (*(char *)(unaff_x29 + -0xc) == '\0') break;
        uVar2 = FUN_0597a900(uVar2,1,0);
        iVar12 = iVar12 + -1;
      } while (1 < iVar12);
    }
  }
  else {
    uVar3 = (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
    pvVar4 = (void *)(*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
    memcpy(unaff_x25,pvVar4,unaff_x22);
    lVar10 = *(long *)(unaff_x19 + 0x38);
    lVar13 = *(long *)(unaff_x29 + -0x28);
    uVar5 = *(undefined8 *)(unaff_x29 + -0x58);
    lVar9 = *(long *)(lVar10 + 0x18);
    lVar7 = lVar9;
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_031c09d4(lVar9);
      lVar10 = *(long *)(unaff_x19 + 0x38);
      lVar7 = *(long *)(lVar10 + 0x18);
    }
    uVar6 = *(undefined8 *)(lVar10 + 0x28);
    puVar8 = unaff_x25;
    if (-1 < *(int *)(lVar7 + 0x28)) {
      puVar8 = (undefined8 *)*unaff_x25;
    }
    *(undefined8 **)(unaff_x29 + -0x18) = puVar8;
    FUN_031896ac(lVar9,uVar6,*(undefined8 *)(unaff_x29 + -0x60),uVar3,unaff_x29 + -0x18,
                 unaff_x29 + -0xc);
    if (*(char *)(unaff_x29 + -0xc) != '\0') {
      FUN_0597a900(uVar2,1,0);
      uVar3 = (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
      FUN_0597a900(uVar2,1,0);
      pvVar4 = (void *)(*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
      memcpy(unaff_x25,pvVar4,unaff_x22);
      lVar10 = *(long *)(unaff_x19 + 0x38);
      lVar9 = *(long *)(lVar10 + 0x18);
      lVar7 = lVar9;
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_031c09d4(lVar9);
        lVar10 = *(long *)(unaff_x19 + 0x38);
        lVar7 = *(long *)(lVar10 + 0x18);
      }
      uVar6 = *(undefined8 *)(lVar10 + 0x28);
      puVar8 = unaff_x25;
      if (-1 < *(int *)(lVar7 + 0x28)) {
        puVar8 = (undefined8 *)*unaff_x25;
      }
      *(undefined8 **)(unaff_x29 + -0x18) = puVar8;
      FUN_031896ac(lVar9,uVar6,*(undefined8 *)(unaff_x29 + -0x68),uVar3,unaff_x29 + -0x18,
                   unaff_x29 + -0xc);
      if (*(char *)(unaff_x29 + -0xc) != '\0') {
        FUN_0597a900(uVar2,2,0);
        uVar3 = (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
        FUN_0597a900(uVar2,2,0);
        pvVar4 = (void *)(*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
        memcpy(unaff_x25,pvVar4,unaff_x22);
        lVar10 = *(long *)(unaff_x19 + 0x38);
        lVar9 = *(long *)(lVar10 + 0x18);
        lVar7 = lVar9;
        if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_031c09d4(lVar9);
          lVar10 = *(long *)(unaff_x19 + 0x38);
          lVar7 = *(long *)(lVar10 + 0x18);
        }
        uVar6 = *(undefined8 *)(lVar10 + 0x28);
        puVar8 = unaff_x25;
        if (-1 < *(int *)(lVar7 + 0x28)) {
          puVar8 = (undefined8 *)*unaff_x25;
        }
        *(undefined8 **)(unaff_x29 + -0x18) = puVar8;
        FUN_031896ac(lVar9,uVar6,*(undefined8 *)(unaff_x29 + -0x70),uVar3,unaff_x29 + -0x18,
                     unaff_x29 + -0xc);
        if (*(char *)(unaff_x29 + -0xc) != '\0') {
          FUN_0597a900(uVar2,3,0);
          uVar3 = (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
          FUN_0597a900(uVar2,3,0);
          pvVar4 = (void *)(*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
          memcpy(unaff_x25,pvVar4,unaff_x22);
          lVar10 = *(long *)(unaff_x19 + 0x38);
          lVar9 = *(long *)(lVar10 + 0x18);
          lVar7 = lVar9;
          if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = FUN_031c09d4(lVar9);
            lVar10 = *(long *)(unaff_x19 + 0x38);
            lVar7 = *(long *)(lVar10 + 0x18);
          }
          uVar6 = *(undefined8 *)(lVar10 + 0x28);
          puVar8 = unaff_x25;
          if (-1 < *(int *)(lVar7 + 0x28)) {
            puVar8 = (undefined8 *)*unaff_x25;
          }
          *(undefined8 **)(unaff_x29 + -0x18) = puVar8;
          FUN_031896ac(lVar9,uVar6,*(undefined8 *)(unaff_x29 + -0x78),uVar3,unaff_x29 + -0x18,
                       unaff_x29 + -0xc);
          if (*(char *)(unaff_x29 + -0xc) != '\0') {
            uVar2 = FUN_0597a900(uVar2,4,0);
            goto LAB_03c3ccc4;
          }
        }
      }
    }
LAB_03c3cda4:
    bVar1 = false;
  }
  if (*(long *)(lVar13 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar1;
}


