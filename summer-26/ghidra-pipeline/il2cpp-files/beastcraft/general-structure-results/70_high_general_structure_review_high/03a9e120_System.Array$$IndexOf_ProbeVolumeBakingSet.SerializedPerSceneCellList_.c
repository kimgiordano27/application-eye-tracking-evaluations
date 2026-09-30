/*
FUNCTION_NAME: System.Array$$IndexOf<ProbeVolumeBakingSet.SerializedPerSceneCellList>
ENTRY_POINT: 03a9e120
PROGRAM: beastcraft-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void System_Array__IndexOf<ProbeVolumeBakingSet_SerializedPerSceneCellList>(void)

{
  bool bVar1;
  undefined8 uVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  long unaff_x19;
  size_t unaff_x21;
  uint unaff_w23;
  uint uVar11;
  int iVar12;
  undefined8 *__dest;
  long lVar13;
  long unaff_x29;
  
  __dest = (undefined8 *)(&stack0x00000000 + -(unaff_x21 + 0xf & 0x1fffffff0));
  uVar2 = FUN_0565112c(0,0);
  if (7 < (int)unaff_w23) {
    lVar13 = unaff_x29 + -0x20;
    uVar11 = unaff_w23;
    do {
      pvVar3 = (void *)(*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
      memcpy(__dest,pvVar3,unaff_x21);
      plVar10 = *(long **)(unaff_x19 + 0x38);
      lVar7 = *plVar10;
      lVar9 = lVar7;
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_02e7568c(lVar7);
        plVar10 = *(long **)(unaff_x19 + 0x38);
        lVar9 = *plVar10;
      }
      lVar4 = plVar10[4];
      puVar8 = __dest;
      lVar5 = *(long *)(unaff_x29 + -0x20);
      if (-1 < *(int *)(lVar9 + 0x28)) {
        puVar8 = (undefined8 *)*__dest;
        lVar5 = lVar13;
      }
      *(undefined8 **)(unaff_x29 + -0x18) = puVar8;
      FUN_02e3d698(lVar7,lVar4,*(undefined8 *)(unaff_x29 + -0x28),lVar5,unaff_x29 + -0x18,
                   unaff_x29 + -0xc);
      if (*(char *)(unaff_x29 + -0xc) != '\0') goto LAB_03a9ea14;
      FUN_05651150(uVar2,1,0);
      pvVar3 = (void *)(*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
      memcpy(__dest,pvVar3,unaff_x21);
      plVar10 = *(long **)(unaff_x19 + 0x38);
      lVar7 = *plVar10;
      lVar9 = lVar7;
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_02e7568c(lVar7);
        plVar10 = *(long **)(unaff_x19 + 0x38);
        lVar9 = *plVar10;
      }
      lVar4 = plVar10[4];
      puVar8 = __dest;
      lVar5 = *(long *)(unaff_x29 + -0x20);
      if (-1 < *(int *)(lVar9 + 0x28)) {
        puVar8 = (undefined8 *)*__dest;
        lVar5 = lVar13;
      }
      *(undefined8 **)(unaff_x29 + -0x18) = puVar8;
      FUN_02e3d698(lVar7,lVar4,*(undefined8 *)(unaff_x29 + -0x30),lVar5,unaff_x29 + -0x18,
                   unaff_x29 + -0xc);
      if (*(char *)(unaff_x29 + -0xc) != '\0') goto LAB_03a9e894;
      FUN_05651150(uVar2,2,0);
      pvVar3 = (void *)(*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
      memcpy(__dest,pvVar3,unaff_x21);
      plVar10 = *(long **)(unaff_x19 + 0x38);
      lVar7 = *plVar10;
      lVar9 = lVar7;
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_02e7568c(lVar7);
        plVar10 = *(long **)(unaff_x19 + 0x38);
        lVar9 = *plVar10;
      }
      lVar4 = plVar10[4];
      puVar8 = __dest;
      lVar5 = *(long *)(unaff_x29 + -0x20);
      if (-1 < *(int *)(lVar9 + 0x28)) {
        puVar8 = (undefined8 *)*__dest;
        lVar5 = lVar13;
      }
      *(undefined8 **)(unaff_x29 + -0x18) = puVar8;
      FUN_02e3d698(lVar7,lVar4,*(undefined8 *)(unaff_x29 + -0x38),lVar5,unaff_x29 + -0x18,
                   unaff_x29 + -0xc);
      if (*(char *)(unaff_x29 + -0xc) != '\0') goto LAB_03a9e950;
      FUN_05651150(uVar2,3,0);
      pvVar3 = (void *)(*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
      memcpy(__dest,pvVar3,unaff_x21);
      plVar10 = *(long **)(unaff_x19 + 0x38);
      lVar7 = *plVar10;
      lVar9 = lVar7;
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_02e7568c(lVar7);
        plVar10 = *(long **)(unaff_x19 + 0x38);
        lVar9 = *plVar10;
      }
      lVar4 = plVar10[4];
      puVar8 = __dest;
      lVar5 = *(long *)(unaff_x29 + -0x20);
      if (-1 < *(int *)(lVar9 + 0x28)) {
        puVar8 = (undefined8 *)*__dest;
        lVar5 = lVar13;
      }
      *(undefined8 **)(unaff_x29 + -0x18) = puVar8;
      FUN_02e3d698(lVar7,lVar4,*(undefined8 *)(unaff_x29 + -0x40),lVar5,unaff_x29 + -0x18,
                   unaff_x29 + -0xc);
      if (*(char *)(unaff_x29 + -0xc) != '\0') goto LAB_03a9ea00;
      FUN_05651150(uVar2,4,0);
      pvVar3 = (void *)(*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
      memcpy(__dest,pvVar3,unaff_x21);
      plVar10 = *(long **)(unaff_x19 + 0x38);
      lVar7 = *plVar10;
      lVar9 = lVar7;
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_02e7568c(lVar7);
        plVar10 = *(long **)(unaff_x19 + 0x38);
        lVar9 = *plVar10;
      }
      lVar4 = plVar10[4];
      puVar8 = __dest;
      lVar5 = *(long *)(unaff_x29 + -0x20);
      if (-1 < *(int *)(lVar9 + 0x28)) {
        puVar8 = (undefined8 *)*__dest;
        lVar5 = lVar13;
      }
      *(undefined8 **)(unaff_x29 + -0x18) = puVar8;
      FUN_02e3d698(lVar7,lVar4,*(undefined8 *)(unaff_x29 + -0x48),lVar5,unaff_x29 + -0x18,
                   unaff_x29 + -0xc);
      if (*(char *)(unaff_x29 + -0xc) != '\0') {
        uVar6 = 4;
        goto LAB_03a9ea08;
      }
      FUN_05651150(uVar2,5,0);
      pvVar3 = (void *)(*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
      memcpy(__dest,pvVar3,unaff_x21);
      plVar10 = *(long **)(unaff_x19 + 0x38);
      lVar7 = *plVar10;
      lVar9 = lVar7;
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_02e7568c(lVar7);
        plVar10 = *(long **)(unaff_x19 + 0x38);
        lVar9 = *plVar10;
      }
      lVar4 = plVar10[4];
      puVar8 = __dest;
      lVar5 = *(long *)(unaff_x29 + -0x20);
      if (-1 < *(int *)(lVar9 + 0x28)) {
        puVar8 = (undefined8 *)*__dest;
        lVar5 = lVar13;
      }
      *(undefined8 **)(unaff_x29 + -0x18) = puVar8;
      FUN_02e3d698(lVar7,lVar4,*(undefined8 *)(unaff_x29 + -0x50),lVar5,unaff_x29 + -0x18,
                   unaff_x29 + -0xc);
      if (*(char *)(unaff_x29 + -0xc) != '\0') {
        uVar6 = 5;
        goto LAB_03a9ea08;
      }
      FUN_05651150(uVar2,6,0);
      pvVar3 = (void *)(*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
      memcpy(__dest,pvVar3,unaff_x21);
      plVar10 = *(long **)(unaff_x19 + 0x38);
      lVar7 = *plVar10;
      lVar9 = lVar7;
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_02e7568c(lVar7);
        plVar10 = *(long **)(unaff_x19 + 0x38);
        lVar9 = *plVar10;
      }
      lVar5 = plVar10[4];
      puVar8 = __dest;
      if (-1 < *(int *)(lVar9 + 0x28)) {
        puVar8 = (undefined8 *)*__dest;
      }
      *(undefined8 **)(unaff_x29 + -0x18) = puVar8;
      FUN_02e3d698(lVar7,lVar5);
      if (*(char *)(unaff_x29 + -0xc) != '\0') {
        uVar6 = 6;
        goto LAB_03a9ea08;
      }
      FUN_05651150(uVar2,7,0);
      pvVar3 = (void *)(*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
      memcpy(__dest,pvVar3,unaff_x21);
      plVar10 = *(long **)(unaff_x19 + 0x38);
      lVar7 = *plVar10;
      lVar9 = lVar7;
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_02e7568c(lVar7);
        plVar10 = *(long **)(unaff_x19 + 0x38);
        lVar9 = *plVar10;
      }
      lVar5 = plVar10[4];
      puVar8 = __dest;
      if (-1 < *(int *)(lVar9 + 0x28)) {
        puVar8 = (undefined8 *)*__dest;
      }
      *(undefined8 **)(unaff_x29 + -0x18) = puVar8;
      FUN_02e3d698(lVar7,lVar5);
      if (*(char *)(unaff_x29 + -0xc) != '\0') {
        uVar6 = 7;
        goto LAB_03a9ea08;
      }
      unaff_w23 = uVar11 - 8;
      uVar2 = FUN_05651150(uVar2,8,0);
      bVar1 = 0xf < uVar11;
      uVar11 = unaff_w23;
    } while (bVar1);
  }
  if ((int)unaff_w23 < 4) {
LAB_03a9e66c:
    if (0 < (int)unaff_w23) {
      iVar12 = unaff_w23 + 1;
      do {
        pvVar3 = (void *)(*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
        memcpy(__dest,pvVar3,unaff_x21);
        plVar10 = *(long **)(unaff_x19 + 0x38);
        lVar9 = *plVar10;
        lVar13 = lVar9;
        if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_02e7568c(lVar9);
          plVar10 = *(long **)(unaff_x19 + 0x38);
          lVar13 = *plVar10;
        }
        lVar7 = plVar10[4];
        puVar8 = __dest;
        if (-1 < *(int *)(lVar13 + 0x28)) {
          puVar8 = (undefined8 *)*__dest;
        }
        *(undefined8 **)(unaff_x29 + -0x18) = puVar8;
        FUN_02e3d698(lVar9,lVar7);
        if (*(char *)(unaff_x29 + -0xc) != '\0') goto LAB_03a9ea14;
        uVar2 = FUN_05651150(uVar2,1,0);
        iVar12 = iVar12 + -1;
      } while (1 < iVar12);
    }
    lVar13 = *(long *)(unaff_x29 + -0x58);
    uVar2 = 0xffffffff;
  }
  else {
    pvVar3 = (void *)(*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
    memcpy(__dest,pvVar3,unaff_x21);
    plVar10 = *(long **)(unaff_x19 + 0x38);
    lVar9 = *plVar10;
    lVar13 = lVar9;
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02e7568c(lVar9);
      plVar10 = *(long **)(unaff_x19 + 0x38);
      lVar13 = *plVar10;
    }
    lVar5 = plVar10[4];
    puVar8 = __dest;
    lVar7 = *(long *)(unaff_x29 + -0x20);
    if (-1 < *(int *)(lVar13 + 0x28)) {
      puVar8 = (undefined8 *)*__dest;
      lVar7 = unaff_x29 + -0x20;
    }
    *(undefined8 **)(unaff_x29 + -0x18) = puVar8;
    FUN_02e3d698(lVar9,lVar5,*(undefined8 *)(unaff_x29 + -0x60),lVar7,unaff_x29 + -0x18,
                 unaff_x29 + -0xc);
    if (*(char *)(unaff_x29 + -0xc) == '\0') {
      FUN_05651150(uVar2,1,0);
      pvVar3 = (void *)(*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
      memcpy(__dest,pvVar3,unaff_x21);
      plVar10 = *(long **)(unaff_x19 + 0x38);
      lVar9 = *plVar10;
      lVar13 = lVar9;
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_02e7568c(lVar9);
        plVar10 = *(long **)(unaff_x19 + 0x38);
        lVar13 = *plVar10;
      }
      lVar5 = plVar10[4];
      puVar8 = __dest;
      lVar7 = *(long *)(unaff_x29 + -0x20);
      if (-1 < *(int *)(lVar13 + 0x28)) {
        puVar8 = (undefined8 *)*__dest;
        lVar7 = unaff_x29 + -0x20;
      }
      *(undefined8 **)(unaff_x29 + -0x18) = puVar8;
      FUN_02e3d698(lVar9,lVar5,*(undefined8 *)(unaff_x29 + -0x68),lVar7,unaff_x29 + -0x18,
                   unaff_x29 + -0xc);
      if (*(char *)(unaff_x29 + -0xc) == '\0') {
        FUN_05651150(uVar2,2,0);
        pvVar3 = (void *)(*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
        memcpy(__dest,pvVar3,unaff_x21);
        plVar10 = *(long **)(unaff_x19 + 0x38);
        lVar9 = *plVar10;
        lVar13 = lVar9;
        if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_02e7568c(lVar9);
          plVar10 = *(long **)(unaff_x19 + 0x38);
          lVar13 = *plVar10;
        }
        lVar5 = plVar10[4];
        puVar8 = __dest;
        lVar7 = *(long *)(unaff_x29 + -0x20);
        if (-1 < *(int *)(lVar13 + 0x28)) {
          puVar8 = (undefined8 *)*__dest;
          lVar7 = unaff_x29 + -0x20;
        }
        *(undefined8 **)(unaff_x29 + -0x18) = puVar8;
        FUN_02e3d698(lVar9,lVar5,*(undefined8 *)(unaff_x29 + -0x70),lVar7,unaff_x29 + -0x18,
                     unaff_x29 + -0xc);
        if (*(char *)(unaff_x29 + -0xc) == '\0') {
          FUN_05651150(uVar2,3,0);
          pvVar3 = (void *)(*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
          memcpy(__dest,pvVar3,unaff_x21);
          plVar10 = *(long **)(unaff_x19 + 0x38);
          lVar9 = *plVar10;
          lVar13 = lVar9;
          if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = FUN_02e7568c(lVar9);
            plVar10 = *(long **)(unaff_x19 + 0x38);
            lVar13 = *plVar10;
          }
          lVar5 = plVar10[4];
          puVar8 = __dest;
          lVar7 = *(long *)(unaff_x29 + -0x20);
          if (-1 < *(int *)(lVar13 + 0x28)) {
            puVar8 = (undefined8 *)*__dest;
            lVar7 = unaff_x29 + -0x20;
          }
          *(undefined8 **)(unaff_x29 + -0x18) = puVar8;
          FUN_02e3d698(lVar9,lVar5,*(undefined8 *)(unaff_x29 + -0x78),lVar7,unaff_x29 + -0x18,
                       unaff_x29 + -0xc);
          if (*(char *)(unaff_x29 + -0xc) == '\0') {
            uVar2 = FUN_05651150(uVar2,4,0);
            unaff_w23 = unaff_w23 - 4;
            goto LAB_03a9e66c;
          }
LAB_03a9ea00:
          uVar6 = 3;
        }
        else {
LAB_03a9e950:
          uVar6 = 2;
        }
      }
      else {
LAB_03a9e894:
        uVar6 = 1;
      }
LAB_03a9ea08:
      uVar2 = FUN_05651150(uVar2,uVar6,0);
    }
LAB_03a9ea14:
    lVar13 = *(long *)(unaff_x29 + -0x58);
    uVar2 = FUN_05651144(uVar2,0);
  }
  if (*(long *)(lVar13 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


