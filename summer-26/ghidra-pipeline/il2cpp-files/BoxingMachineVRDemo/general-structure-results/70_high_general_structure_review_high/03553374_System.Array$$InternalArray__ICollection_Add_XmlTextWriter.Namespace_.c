/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<XmlTextWriter.Namespace>
ENTRY_POINT: 03553374
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


void System_Array__InternalArray__ICollection_Add<XmlTextWriter_Namespace>
               (long param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  void *pvVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long in_x9;
  long lVar12;
  size_t unaff_x21;
  int unaff_w22;
  int iVar13;
  long lVar14;
  undefined8 *__dest;
  long unaff_x25;
  long *unaff_x26;
  long unaff_x29;
  
  lVar11 = (long)&stack0x00000000 - ((ulong)(*(int *)(param_2 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  if ((*(ushort *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_02d9a2e0(param_1);
    in_x9 = *unaff_x26;
  }
  lVar14 = lVar11 - ((ulong)(*(int *)(param_1 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  __dest = (undefined8 *)(lVar14 - (unaff_x21 + 0xf & 0x1fffffff0));
  uVar3 = (*(code *)**(undefined8 **)(in_x9 + 8))();
  if ((uVar3 & 1) != 0) {
    bVar2 = true;
    goto LAB_03553e14;
  }
  *(long *)(unaff_x29 + -0x78) = lVar11;
  *(long *)(unaff_x29 + -0x70) = unaff_x25;
  uVar4 = FUN_0505261c(0,0);
  iVar13 = unaff_w22;
  if (7 < unaff_w22) {
    do {
      uVar5 = (*(code *)**(undefined8 **)(*unaff_x26 + 0x10))();
      pvVar6 = (void *)(*(code *)**(undefined8 **)(*unaff_x26 + 0x10))();
      memcpy(__dest,pvVar6,unaff_x21);
      lVar12 = *unaff_x26;
      lVar9 = *(long *)(lVar12 + 0x18);
      lVar11 = lVar9;
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_02d9a2e0(lVar9);
        lVar12 = *unaff_x26;
        lVar11 = *(long *)(lVar12 + 0x18);
      }
      uVar7 = *(undefined8 *)(lVar12 + 0x28);
      puVar10 = __dest;
      if (-1 < *(int *)(lVar11 + 0x28)) {
        puVar10 = (undefined8 *)*__dest;
      }
      *(undefined8 **)(unaff_x29 + -0x18) = puVar10;
      FUN_02d613d0(lVar9,uVar7,*(undefined8 *)(unaff_x29 + -0x20),uVar5,unaff_x29 + -0x18,
                   unaff_x29 + -0xc);
      if (*(char *)(unaff_x29 + -0xc) == '\0') goto LAB_03553e0c;
      FUN_05052640(uVar4,1,0);
      uVar5 = (*(code *)**(undefined8 **)(*unaff_x26 + 0x10))();
      FUN_05052640(uVar4,1,0);
      pvVar6 = (void *)(*(code *)**(undefined8 **)(*unaff_x26 + 0x10))();
      memcpy(__dest,pvVar6,unaff_x21);
      lVar12 = *unaff_x26;
      lVar9 = *(long *)(lVar12 + 0x18);
      lVar11 = lVar9;
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_02d9a2e0(lVar9);
        lVar12 = *unaff_x26;
        lVar11 = *(long *)(lVar12 + 0x18);
      }
      uVar7 = *(undefined8 *)(lVar12 + 0x28);
      puVar10 = __dest;
      if (-1 < *(int *)(lVar11 + 0x28)) {
        puVar10 = (undefined8 *)*__dest;
      }
      *(undefined8 **)(unaff_x29 + -0x18) = puVar10;
      FUN_02d613d0(lVar9,uVar7,*(undefined8 *)(unaff_x29 + -0x28),uVar5,unaff_x29 + -0x18,
                   unaff_x29 + -0xc);
      if (*(char *)(unaff_x29 + -0xc) == '\0') goto LAB_03553e0c;
      FUN_05052640(uVar4,2,0);
      uVar5 = (*(code *)**(undefined8 **)(*unaff_x26 + 0x10))();
      FUN_05052640(uVar4,2,0);
      pvVar6 = (void *)(*(code *)**(undefined8 **)(*unaff_x26 + 0x10))();
      memcpy(__dest,pvVar6,unaff_x21);
      lVar12 = *unaff_x26;
      lVar9 = *(long *)(lVar12 + 0x18);
      lVar11 = lVar9;
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_02d9a2e0(lVar9);
        lVar12 = *unaff_x26;
        lVar11 = *(long *)(lVar12 + 0x18);
      }
      uVar7 = *(undefined8 *)(lVar12 + 0x28);
      puVar10 = __dest;
      if (-1 < *(int *)(lVar11 + 0x28)) {
        puVar10 = (undefined8 *)*__dest;
      }
      *(undefined8 **)(unaff_x29 + -0x18) = puVar10;
      FUN_02d613d0(lVar9,uVar7,*(undefined8 *)(unaff_x29 + -0x30),uVar5,unaff_x29 + -0x18,
                   unaff_x29 + -0xc);
      if (*(char *)(unaff_x29 + -0xc) == '\0') goto LAB_03553e0c;
      FUN_05052640(uVar4,3,0);
      uVar5 = (*(code *)**(undefined8 **)(*unaff_x26 + 0x10))();
      FUN_05052640(uVar4,3,0);
      pvVar6 = (void *)(*(code *)**(undefined8 **)(*unaff_x26 + 0x10))();
      memcpy(__dest,pvVar6,unaff_x21);
      lVar12 = *unaff_x26;
      lVar9 = *(long *)(lVar12 + 0x18);
      lVar11 = lVar9;
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_02d9a2e0(lVar9);
        lVar12 = *unaff_x26;
        lVar11 = *(long *)(lVar12 + 0x18);
      }
      uVar7 = *(undefined8 *)(lVar12 + 0x28);
      puVar10 = __dest;
      if (-1 < *(int *)(lVar11 + 0x28)) {
        puVar10 = (undefined8 *)*__dest;
      }
      *(undefined8 **)(unaff_x29 + -0x18) = puVar10;
      FUN_02d613d0(lVar9,uVar7,*(undefined8 *)(unaff_x29 + -0x38),uVar5,unaff_x29 + -0x18,
                   unaff_x29 + -0xc);
      if (*(char *)(unaff_x29 + -0xc) == '\0') goto LAB_03553e0c;
      FUN_05052640(uVar4,4,0);
      uVar5 = (*(code *)**(undefined8 **)(*unaff_x26 + 0x10))();
      FUN_05052640(uVar4,4,0);
      pvVar6 = (void *)(*(code *)**(undefined8 **)(*unaff_x26 + 0x10))();
      memcpy(__dest,pvVar6,unaff_x21);
      lVar12 = *unaff_x26;
      lVar9 = *(long *)(lVar12 + 0x18);
      lVar11 = lVar9;
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_02d9a2e0(lVar9);
        lVar12 = *unaff_x26;
        lVar11 = *(long *)(lVar12 + 0x18);
      }
      uVar7 = *(undefined8 *)(lVar12 + 0x28);
      puVar10 = __dest;
      if (-1 < *(int *)(lVar11 + 0x28)) {
        puVar10 = (undefined8 *)*__dest;
      }
      *(undefined8 **)(unaff_x29 + -0x18) = puVar10;
      FUN_02d613d0(lVar9,uVar7,*(undefined8 *)(unaff_x29 + -0x40),uVar5,unaff_x29 + -0x18,
                   unaff_x29 + -0xc);
      if (*(char *)(unaff_x29 + -0xc) == '\0') goto LAB_03553e0c;
      FUN_05052640(uVar4,5,0);
      uVar5 = (*(code *)**(undefined8 **)(*unaff_x26 + 0x10))();
      FUN_05052640(uVar4,5,0);
      pvVar6 = (void *)(*(code *)**(undefined8 **)(*unaff_x26 + 0x10))();
      memcpy(__dest,pvVar6,unaff_x21);
      lVar12 = *unaff_x26;
      lVar9 = *(long *)(lVar12 + 0x18);
      lVar11 = lVar9;
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_02d9a2e0(lVar9);
        lVar12 = *unaff_x26;
        lVar11 = *(long *)(lVar12 + 0x18);
      }
      uVar7 = *(undefined8 *)(lVar12 + 0x28);
      puVar10 = __dest;
      if (-1 < *(int *)(lVar11 + 0x28)) {
        puVar10 = (undefined8 *)*__dest;
      }
      *(undefined8 **)(unaff_x29 + -0x18) = puVar10;
      FUN_02d613d0(lVar9,uVar7,*(undefined8 *)(unaff_x29 + -0x48),uVar5,unaff_x29 + -0x18,
                   unaff_x29 + -0xc);
      if (*(char *)(unaff_x29 + -0xc) == '\0') goto LAB_03553e0c;
      FUN_05052640(uVar4,6,0);
      uVar5 = (*(code *)**(undefined8 **)(*unaff_x26 + 0x10))();
      FUN_05052640(uVar4,6,0);
      pvVar6 = (void *)(*(code *)**(undefined8 **)(*unaff_x26 + 0x10))();
      memcpy(__dest,pvVar6,unaff_x21);
      lVar12 = *unaff_x26;
      lVar9 = *(long *)(lVar12 + 0x18);
      lVar11 = lVar9;
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_02d9a2e0(lVar9);
        lVar12 = *unaff_x26;
        lVar11 = *(long *)(lVar12 + 0x18);
      }
      uVar7 = *(undefined8 *)(lVar12 + 0x28);
      puVar10 = __dest;
      if (-1 < *(int *)(lVar11 + 0x28)) {
        puVar10 = (undefined8 *)*__dest;
      }
      *(undefined8 **)(unaff_x29 + -0x18) = puVar10;
      FUN_02d613d0(lVar9,uVar7,*(undefined8 *)(unaff_x29 + -0x50),uVar5,unaff_x29 + -0x18,
                   unaff_x29 + -0xc);
      if (*(char *)(unaff_x29 + -0xc) == '\0') goto LAB_03553e0c;
      FUN_05052640(uVar4,7,0);
      (*(code *)**(undefined8 **)(*unaff_x26 + 0x10))();
      FUN_05052640(uVar4,7,0);
      pvVar6 = (void *)(*(code *)**(undefined8 **)(*unaff_x26 + 0x10))();
      memcpy(__dest,pvVar6,unaff_x21);
      lVar12 = *unaff_x26;
      lVar9 = *(long *)(lVar12 + 0x18);
      lVar11 = lVar9;
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_02d9a2e0(lVar9);
        lVar12 = *unaff_x26;
        lVar11 = *(long *)(lVar12 + 0x18);
      }
      uVar5 = *(undefined8 *)(lVar12 + 0x28);
      puVar10 = __dest;
      if (-1 < *(int *)(lVar11 + 0x28)) {
        puVar10 = (undefined8 *)*__dest;
      }
      *(undefined8 **)(unaff_x29 + -0x18) = puVar10;
      FUN_02d613d0(lVar9,uVar5);
      if (*(char *)(unaff_x29 + -0xc) == '\0') goto LAB_03553e0c;
      unaff_w22 = iVar13 + -8;
      uVar4 = FUN_05052640(uVar4,8,0);
      bVar2 = 0xf < iVar13;
      iVar13 = unaff_w22;
    } while (bVar2);
  }
  if (unaff_w22 < 4) {
LAB_03553a2c:
    if (unaff_w22 < 1) {
      bVar2 = true;
    }
    else {
      iVar13 = unaff_w22 + 1;
      do {
        uVar5 = (*(code *)**(undefined8 **)(*unaff_x26 + 0x10))();
        pvVar6 = (void *)(*(code *)**(undefined8 **)(*unaff_x26 + 0x10))();
        memcpy(__dest,pvVar6,unaff_x21);
        lVar12 = *unaff_x26;
        lVar9 = *(long *)(lVar12 + 0x18);
        lVar11 = lVar9;
        if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_02d9a2e0(lVar9);
          lVar12 = *unaff_x26;
          lVar11 = *(long *)(lVar12 + 0x18);
        }
        uVar7 = *(undefined8 *)(lVar12 + 0x28);
        puVar10 = __dest;
        if (-1 < *(int *)(lVar11 + 0x28)) {
          puVar10 = (undefined8 *)*__dest;
        }
        *(undefined8 **)(unaff_x29 + -0x18) = puVar10;
        FUN_02d613d0(lVar9,uVar7,lVar14,uVar5,unaff_x29 + -0x18,unaff_x29 + -0xc);
        cVar1 = *(char *)(unaff_x29 + -0xc);
        if (cVar1 == '\0') break;
        uVar4 = FUN_05052640(uVar4,1,0);
        iVar13 = iVar13 + -1;
      } while (1 < iVar13);
      bVar2 = cVar1 != '\0';
    }
  }
  else {
    uVar5 = (*(code *)**(undefined8 **)(*unaff_x26 + 0x10))();
    pvVar6 = (void *)(*(code *)**(undefined8 **)(*unaff_x26 + 0x10))();
    memcpy(__dest,pvVar6,unaff_x21);
    lVar12 = *unaff_x26;
    lVar9 = *(long *)(lVar12 + 0x18);
    lVar11 = lVar9;
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02d9a2e0(lVar9);
      lVar12 = *unaff_x26;
      lVar11 = *(long *)(lVar12 + 0x18);
    }
    uVar7 = *(undefined8 *)(lVar12 + 0x28);
    puVar10 = __dest;
    if (-1 < *(int *)(lVar11 + 0x28)) {
      puVar10 = (undefined8 *)*__dest;
    }
    *(undefined8 **)(unaff_x29 + -0x18) = puVar10;
    FUN_02d613d0(lVar9,uVar7,*(undefined8 *)(unaff_x29 + -0x58),uVar5,unaff_x29 + -0x18,
                 unaff_x29 + -0xc);
    uVar5 = *(undefined8 *)(unaff_x29 + -0x78);
    if (*(char *)(unaff_x29 + -0xc) != '\0') {
      FUN_05052640(uVar4,1,0);
      uVar7 = (*(code *)**(undefined8 **)(*unaff_x26 + 0x10))();
      FUN_05052640(uVar4,1,0);
      pvVar6 = (void *)(*(code *)**(undefined8 **)(*unaff_x26 + 0x10))();
      memcpy(__dest,pvVar6,unaff_x21);
      lVar12 = *unaff_x26;
      lVar9 = *(long *)(lVar12 + 0x18);
      lVar11 = lVar9;
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_02d9a2e0(lVar9);
        lVar12 = *unaff_x26;
        lVar11 = *(long *)(lVar12 + 0x18);
      }
      uVar8 = *(undefined8 *)(lVar12 + 0x28);
      puVar10 = __dest;
      if (-1 < *(int *)(lVar11 + 0x28)) {
        puVar10 = (undefined8 *)*__dest;
      }
      *(undefined8 **)(unaff_x29 + -0x18) = puVar10;
      FUN_02d613d0(lVar9,uVar8,*(undefined8 *)(unaff_x29 + -0x60),uVar7,unaff_x29 + -0x18,
                   unaff_x29 + -0xc);
      if (*(char *)(unaff_x29 + -0xc) != '\0') {
        FUN_05052640(uVar4,2,0);
        uVar7 = (*(code *)**(undefined8 **)(*unaff_x26 + 0x10))();
        FUN_05052640(uVar4,2,0);
        pvVar6 = (void *)(*(code *)**(undefined8 **)(*unaff_x26 + 0x10))();
        memcpy(__dest,pvVar6,unaff_x21);
        lVar12 = *unaff_x26;
        lVar9 = *(long *)(lVar12 + 0x18);
        lVar11 = lVar9;
        if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_02d9a2e0(lVar9);
          lVar12 = *unaff_x26;
          lVar11 = *(long *)(lVar12 + 0x18);
        }
        uVar8 = *(undefined8 *)(lVar12 + 0x28);
        puVar10 = __dest;
        if (-1 < *(int *)(lVar11 + 0x28)) {
          puVar10 = (undefined8 *)*__dest;
        }
        *(undefined8 **)(unaff_x29 + -0x18) = puVar10;
        FUN_02d613d0(lVar9,uVar8,*(undefined8 *)(unaff_x29 + -0x68),uVar7,unaff_x29 + -0x18,
                     unaff_x29 + -0xc);
        if (*(char *)(unaff_x29 + -0xc) != '\0') {
          FUN_05052640(uVar4,3,0);
          uVar7 = (*(code *)**(undefined8 **)(*unaff_x26 + 0x10))();
          FUN_05052640(uVar4,3,0);
          pvVar6 = (void *)(*(code *)**(undefined8 **)(*unaff_x26 + 0x10))();
          memcpy(__dest,pvVar6,unaff_x21);
          lVar12 = *unaff_x26;
          lVar9 = *(long *)(lVar12 + 0x18);
          lVar11 = lVar9;
          if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = FUN_02d9a2e0(lVar9);
            lVar12 = *unaff_x26;
            lVar11 = *(long *)(lVar12 + 0x18);
          }
          uVar8 = *(undefined8 *)(lVar12 + 0x28);
          puVar10 = __dest;
          if (-1 < *(int *)(lVar11 + 0x28)) {
            puVar10 = (undefined8 *)*__dest;
          }
          *(undefined8 **)(unaff_x29 + -0x18) = puVar10;
          FUN_02d613d0(lVar9,uVar8,uVar5,uVar7,unaff_x29 + -0x18,unaff_x29 + -0xc);
          if (*(char *)(unaff_x29 + -0xc) != '\0') {
            uVar4 = FUN_05052640(uVar4,4,0);
            unaff_w22 = unaff_w22 + -4;
            goto LAB_03553a2c;
          }
        }
      }
    }
LAB_03553e0c:
    bVar2 = false;
  }
  unaff_x25 = *(long *)(unaff_x29 + -0x70);
LAB_03553e14:
  if (*(long *)(unaff_x25 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar2);
  }
  return;
}


