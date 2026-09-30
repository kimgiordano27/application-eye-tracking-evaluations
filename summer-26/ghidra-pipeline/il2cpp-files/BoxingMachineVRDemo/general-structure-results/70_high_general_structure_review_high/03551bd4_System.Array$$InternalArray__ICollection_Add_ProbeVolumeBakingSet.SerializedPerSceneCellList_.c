/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<ProbeVolumeBakingSet.SerializedPerSceneCellList>
ENTRY_POINT: 03551bd4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void System_Array__InternalArray__ICollection_Add<ProbeVolumeBakingSet_SerializedPerSceneCellList>
               (undefined8 param_1,void *param_2)

{
  long lVar1;
  void *pvVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  size_t unaff_x20;
  int unaff_w21;
  int iVar8;
  undefined8 unaff_x22;
  undefined8 *unaff_x24;
  long *unaff_x25;
  undefined8 unaff_x26;
  long unaff_x29;
  
  do {
    memcpy(unaff_x24,param_2,unaff_x20);
    plVar6 = (long *)*unaff_x25;
    lVar1 = *plVar6;
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02d9a2e0();
      plVar6 = (long *)*unaff_x25;
    }
    lVar4 = plVar6[4];
    puVar7 = unaff_x24;
    uVar3 = *(undefined8 *)(unaff_x29 + -0x20);
    if (-1 < *(int *)(*plVar6 + 0x28)) {
      puVar7 = (undefined8 *)*unaff_x24;
      uVar3 = unaff_x26;
    }
    *(undefined8 **)(unaff_x29 + -0x18) = puVar7;
    FUN_02d613d0(lVar1,lVar4,*(undefined8 *)(unaff_x29 + -0x38),uVar3,unaff_x29 + -0x18,
                 unaff_x29 + -0xc);
    if (*(char *)(unaff_x29 + -0xc) != '\0') {
LAB_035521dc:
      uVar3 = 2;
      goto LAB_0355227c;
    }
    FUN_05052640(unaff_x22,3,0);
    pvVar2 = (void *)(*(code *)**(undefined8 **)(*unaff_x25 + 0x10))();
    memcpy(unaff_x24,pvVar2,unaff_x20);
    plVar6 = (long *)*unaff_x25;
    lVar1 = *plVar6;
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02d9a2e0();
      plVar6 = (long *)*unaff_x25;
    }
    lVar4 = plVar6[4];
    puVar7 = unaff_x24;
    uVar3 = *(undefined8 *)(unaff_x29 + -0x20);
    if (-1 < *(int *)(*plVar6 + 0x28)) {
      puVar7 = (undefined8 *)*unaff_x24;
      uVar3 = unaff_x26;
    }
    *(undefined8 **)(unaff_x29 + -0x18) = puVar7;
    FUN_02d613d0(lVar1,lVar4,*(undefined8 *)(unaff_x29 + -0x40),uVar3,unaff_x29 + -0x18,
                 unaff_x29 + -0xc);
    if (*(char *)(unaff_x29 + -0xc) != '\0') {
LAB_03552278:
      uVar3 = 3;
      goto LAB_0355227c;
    }
    FUN_05052640(unaff_x22,4,0);
    pvVar2 = (void *)(*(code *)**(undefined8 **)(*unaff_x25 + 0x10))();
    memcpy(unaff_x24,pvVar2,unaff_x20);
    plVar6 = (long *)*unaff_x25;
    lVar1 = *plVar6;
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02d9a2e0();
      plVar6 = (long *)*unaff_x25;
    }
    lVar4 = plVar6[4];
    puVar7 = unaff_x24;
    uVar3 = *(undefined8 *)(unaff_x29 + -0x20);
    if (-1 < *(int *)(*plVar6 + 0x28)) {
      puVar7 = (undefined8 *)*unaff_x24;
      uVar3 = unaff_x26;
    }
    *(undefined8 **)(unaff_x29 + -0x18) = puVar7;
    FUN_02d613d0(lVar1,lVar4,*(undefined8 *)(unaff_x29 + -0x48),uVar3,unaff_x29 + -0x18,
                 unaff_x29 + -0xc);
    if (*(char *)(unaff_x29 + -0xc) != '\0') {
      uVar3 = 4;
LAB_03552130:
      uVar3 = FUN_05052640(unaff_x22,uVar3,0);
      uVar3 = FUN_05052634(uVar3,0);
      goto LAB_03552290;
    }
    FUN_05052640(unaff_x22,5,0);
    pvVar2 = (void *)(*(code *)**(undefined8 **)(*unaff_x25 + 0x10))();
    memcpy(unaff_x24,pvVar2,unaff_x20);
    plVar6 = (long *)*unaff_x25;
    lVar1 = *plVar6;
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02d9a2e0();
      plVar6 = (long *)*unaff_x25;
    }
    lVar4 = plVar6[4];
    puVar7 = unaff_x24;
    uVar3 = *(undefined8 *)(unaff_x29 + -0x20);
    if (-1 < *(int *)(*plVar6 + 0x28)) {
      puVar7 = (undefined8 *)*unaff_x24;
      uVar3 = unaff_x26;
    }
    *(undefined8 **)(unaff_x29 + -0x18) = puVar7;
    FUN_02d613d0(lVar1,lVar4,*(undefined8 *)(unaff_x29 + -0x50),uVar3,unaff_x29 + -0x18,
                 unaff_x29 + -0xc);
    if (*(char *)(unaff_x29 + -0xc) != '\0') {
      uVar3 = 5;
      goto LAB_03552130;
    }
    FUN_05052640(unaff_x22,6,0);
    pvVar2 = (void *)(*(code *)**(undefined8 **)(*unaff_x25 + 0x10))();
    memcpy(unaff_x24,pvVar2,unaff_x20);
    plVar6 = (long *)*unaff_x25;
    lVar1 = *plVar6;
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02d9a2e0();
      plVar6 = (long *)*unaff_x25;
    }
    lVar4 = plVar6[4];
    puVar7 = unaff_x24;
    if (-1 < *(int *)(*plVar6 + 0x28)) {
      puVar7 = (undefined8 *)*unaff_x24;
    }
    *(undefined8 **)(unaff_x29 + -0x18) = puVar7;
    FUN_02d613d0(lVar1,lVar4);
    if (*(char *)(unaff_x29 + -0xc) != '\0') {
      uVar3 = 6;
      goto LAB_03552130;
    }
    FUN_05052640(unaff_x22,7,0);
    pvVar2 = (void *)(*(code *)**(undefined8 **)(*unaff_x25 + 0x10))();
    memcpy(unaff_x24,pvVar2,unaff_x20);
    plVar6 = (long *)*unaff_x25;
    lVar1 = *plVar6;
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02d9a2e0();
      plVar6 = (long *)*unaff_x25;
    }
    lVar4 = plVar6[4];
    puVar7 = unaff_x24;
    if (-1 < *(int *)(*plVar6 + 0x28)) {
      puVar7 = (undefined8 *)*unaff_x24;
    }
    *(undefined8 **)(unaff_x29 + -0x18) = puVar7;
    FUN_02d613d0(lVar1,lVar4);
    if (*(char *)(unaff_x29 + -0xc) != '\0') {
      uVar3 = 7;
      goto LAB_03552130;
    }
    iVar8 = unaff_w21 + -8;
    unaff_x22 = FUN_05052640(unaff_x22,8,0);
    if (unaff_w21 < 0x10) {
      if (3 < iVar8) {
        pvVar2 = (void *)(*(code *)**(undefined8 **)(*unaff_x25 + 0x10))();
        memcpy(unaff_x24,pvVar2,unaff_x20);
        plVar6 = (long *)*unaff_x25;
        lVar1 = *plVar6;
        if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_02d9a2e0();
          plVar6 = (long *)*unaff_x25;
        }
        lVar5 = plVar6[4];
        puVar7 = unaff_x24;
        lVar4 = *(long *)(unaff_x29 + -0x20);
        if (-1 < *(int *)(*plVar6 + 0x28)) {
          puVar7 = (undefined8 *)*unaff_x24;
          lVar4 = unaff_x29 + -0x20;
        }
        *(undefined8 **)(unaff_x29 + -0x18) = puVar7;
        FUN_02d613d0(lVar1,lVar5,*(undefined8 *)(unaff_x29 + -0x60),lVar4,unaff_x29 + -0x18,
                     unaff_x29 + -0xc);
        if (*(char *)(unaff_x29 + -0xc) != '\0') goto LAB_03552288;
        FUN_05052640(unaff_x22,1,0);
        pvVar2 = (void *)(*(code *)**(undefined8 **)(*unaff_x25 + 0x10))();
        memcpy(unaff_x24,pvVar2,unaff_x20);
        plVar6 = (long *)*unaff_x25;
        lVar1 = *plVar6;
        if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_02d9a2e0();
          plVar6 = (long *)*unaff_x25;
        }
        lVar5 = plVar6[4];
        puVar7 = unaff_x24;
        lVar4 = *(long *)(unaff_x29 + -0x20);
        if (-1 < *(int *)(*plVar6 + 0x28)) {
          puVar7 = (undefined8 *)*unaff_x24;
          lVar4 = unaff_x29 + -0x20;
        }
        *(undefined8 **)(unaff_x29 + -0x18) = puVar7;
        FUN_02d613d0(lVar1,lVar5,*(undefined8 *)(unaff_x29 + -0x68),lVar4,unaff_x29 + -0x18,
                     unaff_x29 + -0xc);
        if (*(char *)(unaff_x29 + -0xc) != '\0') break;
        FUN_05052640(unaff_x22,2,0);
        pvVar2 = (void *)(*(code *)**(undefined8 **)(*unaff_x25 + 0x10))();
        memcpy(unaff_x24,pvVar2,unaff_x20);
        plVar6 = (long *)*unaff_x25;
        lVar1 = *plVar6;
        if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_02d9a2e0();
          plVar6 = (long *)*unaff_x25;
        }
        lVar5 = plVar6[4];
        puVar7 = unaff_x24;
        lVar4 = *(long *)(unaff_x29 + -0x20);
        if (-1 < *(int *)(*plVar6 + 0x28)) {
          puVar7 = (undefined8 *)*unaff_x24;
          lVar4 = unaff_x29 + -0x20;
        }
        *(undefined8 **)(unaff_x29 + -0x18) = puVar7;
        FUN_02d613d0(lVar1,lVar5,*(undefined8 *)(unaff_x29 + -0x70),lVar4,unaff_x29 + -0x18,
                     unaff_x29 + -0xc);
        if (*(char *)(unaff_x29 + -0xc) != '\0') goto LAB_035521dc;
        FUN_05052640(unaff_x22,3,0);
        pvVar2 = (void *)(*(code *)**(undefined8 **)(*unaff_x25 + 0x10))();
        memcpy(unaff_x24,pvVar2,unaff_x20);
        plVar6 = (long *)*unaff_x25;
        lVar1 = *plVar6;
        if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_02d9a2e0();
          plVar6 = (long *)*unaff_x25;
        }
        lVar5 = plVar6[4];
        puVar7 = unaff_x24;
        lVar4 = *(long *)(unaff_x29 + -0x20);
        if (-1 < *(int *)(*plVar6 + 0x28)) {
          puVar7 = (undefined8 *)*unaff_x24;
          lVar4 = unaff_x29 + -0x20;
        }
        *(undefined8 **)(unaff_x29 + -0x18) = puVar7;
        FUN_02d613d0(lVar1,lVar5,*(undefined8 *)(unaff_x29 + -0x78),lVar4,unaff_x29 + -0x18,
                     unaff_x29 + -0xc);
        if (*(char *)(unaff_x29 + -0xc) != '\0') goto LAB_03552278;
        unaff_x22 = FUN_05052640(unaff_x22,4,0);
        iVar8 = unaff_w21 + -0xc;
      }
      if (iVar8 < 1) goto LAB_03551fe4;
      iVar8 = iVar8 + 1;
      goto LAB_03551f44;
    }
    pvVar2 = (void *)(*(code *)**(undefined8 **)(*unaff_x25 + 0x10))();
    memcpy(unaff_x24,pvVar2,unaff_x20);
    plVar6 = (long *)*unaff_x25;
    lVar1 = *plVar6;
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02d9a2e0();
      plVar6 = (long *)*unaff_x25;
    }
    lVar4 = plVar6[4];
    puVar7 = unaff_x24;
    uVar3 = *(undefined8 *)(unaff_x29 + -0x20);
    if (-1 < *(int *)(*plVar6 + 0x28)) {
      puVar7 = (undefined8 *)*unaff_x24;
      uVar3 = unaff_x26;
    }
    *(undefined8 **)(unaff_x29 + -0x18) = puVar7;
    FUN_02d613d0(lVar1,lVar4,*(undefined8 *)(unaff_x29 + -0x28),uVar3,unaff_x29 + -0x18,
                 unaff_x29 + -0xc);
    if (*(char *)(unaff_x29 + -0xc) != '\0') goto LAB_03552288;
    FUN_05052640(unaff_x22,1,0);
    pvVar2 = (void *)(*(code *)**(undefined8 **)(*unaff_x25 + 0x10))();
    memcpy(unaff_x24,pvVar2,unaff_x20);
    plVar6 = (long *)*unaff_x25;
    lVar1 = *plVar6;
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02d9a2e0();
      plVar6 = (long *)*unaff_x25;
    }
    lVar4 = plVar6[4];
    puVar7 = unaff_x24;
    uVar3 = *(undefined8 *)(unaff_x29 + -0x20);
    if (-1 < *(int *)(*plVar6 + 0x28)) {
      puVar7 = (undefined8 *)*unaff_x24;
      uVar3 = unaff_x26;
    }
    *(undefined8 **)(unaff_x29 + -0x18) = puVar7;
    FUN_02d613d0(lVar1,lVar4,*(undefined8 *)(unaff_x29 + -0x30),uVar3,unaff_x29 + -0x18,
                 unaff_x29 + -0xc);
    if (*(char *)(unaff_x29 + -0xc) != '\0') break;
    FUN_05052640(unaff_x22,2,0);
    param_2 = (void *)(*(code *)**(undefined8 **)(*unaff_x25 + 0x10))();
    unaff_w21 = iVar8;
  } while( true );
  uVar3 = 1;
LAB_0355227c:
  unaff_x22 = FUN_05052640(unaff_x22,uVar3,0);
LAB_03552288:
  uVar3 = FUN_05052634(unaff_x22,0);
  goto LAB_03552290;
  while( true ) {
    unaff_x22 = FUN_05052640(unaff_x22,1,0);
    iVar8 = iVar8 + -1;
    if (iVar8 < 2) break;
LAB_03551f44:
    pvVar2 = (void *)(*(code *)**(undefined8 **)(*unaff_x25 + 0x10))();
    memcpy(unaff_x24,pvVar2,unaff_x20);
    plVar6 = (long *)*unaff_x25;
    lVar1 = *plVar6;
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02d9a2e0();
      plVar6 = (long *)*unaff_x25;
    }
    lVar4 = plVar6[4];
    puVar7 = unaff_x24;
    if (-1 < *(int *)(*plVar6 + 0x28)) {
      puVar7 = (undefined8 *)*unaff_x24;
    }
    *(undefined8 **)(unaff_x29 + -0x18) = puVar7;
    FUN_02d613d0(lVar1,lVar4);
    if (*(char *)(unaff_x29 + -0xc) != '\0') goto LAB_03552288;
  }
LAB_03551fe4:
  uVar3 = 0xffffffff;
LAB_03552290:
  if (*(long *)(*(long *)(unaff_x29 + -0x58) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


