/*
FUNCTION_NAME: System.Array$$IndexOfImpl<ProbeVolumeBakingSet.SerializedPerSceneCellList>
ENTRY_POINT: 033796b0
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


bool System_Array__IndexOfImpl<ProbeVolumeBakingSet_SerializedPerSceneCellList>
               (undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  bool bVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long unaff_x19;
  size_t unaff_x22;
  uint unaff_w23;
  uint uVar10;
  int iVar11;
  undefined8 *unaff_x25;
  undefined8 unaff_x26;
  long lVar12;
  undefined8 uVar13;
  long unaff_x29;
  
  while( true ) {
    FUN_0504e228(param_1,param_2,0);
    pvVar3 = (void *)(*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
    memcpy(unaff_x25,pvVar3,unaff_x22);
    lVar9 = *(long *)(unaff_x19 + 0x38);
    lVar7 = *(long *)(lVar9 + 0x18);
    lVar6 = lVar7;
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02d8720c(lVar7);
      lVar9 = *(long *)(unaff_x19 + 0x38);
      lVar6 = *(long *)(lVar9 + 0x18);
    }
    uVar4 = *(undefined8 *)(lVar9 + 0x28);
    puVar8 = unaff_x25;
    if (-1 < *(int *)(lVar6 + 0x28)) {
      puVar8 = (undefined8 *)*unaff_x25;
    }
                    /* try { // try from 03379724 to 03479733 has its CatchHandler @ 03379760 */
    *(undefined8 **)(unaff_x29 + -0x18) = puVar8;
    FUN_02d4e8bc(lVar7,uVar4);
    if (*(char *)(unaff_x29 + -0xc) == '\0') break;
    FUN_0504e228(unaff_x26,7,0);
    (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
    FUN_0504e228(unaff_x26,7,0);
    pvVar3 = (void *)(*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
    memcpy(unaff_x25,pvVar3,unaff_x22);
    lVar9 = *(long *)(unaff_x19 + 0x38);
    lVar7 = *(long *)(lVar9 + 0x18);
    lVar6 = lVar7;
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02d8720c(lVar7);
      lVar9 = *(long *)(unaff_x19 + 0x38);
      lVar6 = *(long *)(lVar9 + 0x18);
    }
    uVar4 = *(undefined8 *)(lVar9 + 0x28);
    puVar8 = unaff_x25;
    if (-1 < *(int *)(lVar6 + 0x28)) {
      puVar8 = (undefined8 *)*unaff_x25;
    }
    *(undefined8 **)(unaff_x29 + -0x18) = puVar8;
    FUN_02d4e8bc(lVar7,uVar4);
    if (*(char *)(unaff_x29 + -0xc) == '\0') break;
    uVar1 = unaff_w23 - 8;
    param_1 = FUN_0504e228(unaff_x26,8,0);
    if (unaff_w23 < 0x10) {
      uVar10 = unaff_w23 - 0xc;
      if ((int)uVar1 < 4) {
        lVar12 = *(long *)(unaff_x29 + -0x28);
        uVar13 = *(undefined8 *)(unaff_x29 + -0x58);
        uVar10 = uVar1;
      }
      else {
        uVar4 = (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
        pvVar3 = (void *)(*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
        memcpy(unaff_x25,pvVar3,unaff_x22);
        lVar9 = *(long *)(unaff_x19 + 0x38);
        lVar12 = *(long *)(unaff_x29 + -0x28);
        uVar13 = *(undefined8 *)(unaff_x29 + -0x58);
        lVar7 = *(long *)(lVar9 + 0x18);
        lVar6 = lVar7;
        if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_02d8720c(lVar7);
          lVar9 = *(long *)(unaff_x19 + 0x38);
          lVar6 = *(long *)(lVar9 + 0x18);
        }
        uVar5 = *(undefined8 *)(lVar9 + 0x28);
        puVar8 = unaff_x25;
        if (-1 < *(int *)(lVar6 + 0x28)) {
          puVar8 = (undefined8 *)*unaff_x25;
        }
        *(undefined8 **)(unaff_x29 + -0x18) = puVar8;
        FUN_02d4e8bc(lVar7,uVar5,*(undefined8 *)(unaff_x29 + -0x60),uVar4,unaff_x29 + -0x18,
                     unaff_x29 + -0xc);
        if (*(char *)(unaff_x29 + -0xc) == '\0') goto LAB_03379918;
        FUN_0504e228(param_1,1,0);
        uVar4 = (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
        FUN_0504e228(param_1,1,0);
        pvVar3 = (void *)(*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
        memcpy(unaff_x25,pvVar3,unaff_x22);
        lVar9 = *(long *)(unaff_x19 + 0x38);
        lVar7 = *(long *)(lVar9 + 0x18);
        lVar6 = lVar7;
        if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_02d8720c(lVar7);
          lVar9 = *(long *)(unaff_x19 + 0x38);
          lVar6 = *(long *)(lVar9 + 0x18);
        }
        uVar5 = *(undefined8 *)(lVar9 + 0x28);
        puVar8 = unaff_x25;
        if (-1 < *(int *)(lVar6 + 0x28)) {
          puVar8 = (undefined8 *)*unaff_x25;
        }
        *(undefined8 **)(unaff_x29 + -0x18) = puVar8;
        FUN_02d4e8bc(lVar7,uVar5,*(undefined8 *)(unaff_x29 + -0x68),uVar4,unaff_x29 + -0x18,
                     unaff_x29 + -0xc);
        if (*(char *)(unaff_x29 + -0xc) == '\0') goto LAB_03379918;
        FUN_0504e228(param_1,2,0);
        uVar4 = (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
        FUN_0504e228(param_1,2,0);
        pvVar3 = (void *)(*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
        memcpy(unaff_x25,pvVar3,unaff_x22);
        lVar9 = *(long *)(unaff_x19 + 0x38);
        lVar7 = *(long *)(lVar9 + 0x18);
        lVar6 = lVar7;
        if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_02d8720c(lVar7);
          lVar9 = *(long *)(unaff_x19 + 0x38);
          lVar6 = *(long *)(lVar9 + 0x18);
        }
        uVar5 = *(undefined8 *)(lVar9 + 0x28);
        puVar8 = unaff_x25;
        if (-1 < *(int *)(lVar6 + 0x28)) {
          puVar8 = (undefined8 *)*unaff_x25;
        }
        *(undefined8 **)(unaff_x29 + -0x18) = puVar8;
        FUN_02d4e8bc(lVar7,uVar5,*(undefined8 *)(unaff_x29 + -0x70),uVar4,unaff_x29 + -0x18,
                     unaff_x29 + -0xc);
        if (*(char *)(unaff_x29 + -0xc) == '\0') goto LAB_03379918;
        FUN_0504e228(param_1,3,0);
        uVar4 = (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
        FUN_0504e228(param_1,3,0);
        pvVar3 = (void *)(*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
        memcpy(unaff_x25,pvVar3,unaff_x22);
        lVar9 = *(long *)(unaff_x19 + 0x38);
        lVar7 = *(long *)(lVar9 + 0x18);
        lVar6 = lVar7;
        if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_02d8720c(lVar7);
          lVar9 = *(long *)(unaff_x19 + 0x38);
          lVar6 = *(long *)(lVar9 + 0x18);
        }
        uVar5 = *(undefined8 *)(lVar9 + 0x28);
        puVar8 = unaff_x25;
        if (-1 < *(int *)(lVar6 + 0x28)) {
          puVar8 = (undefined8 *)*unaff_x25;
        }
        *(undefined8 **)(unaff_x29 + -0x18) = puVar8;
        FUN_02d4e8bc(lVar7,uVar5,*(undefined8 *)(unaff_x29 + -0x78),uVar4,unaff_x29 + -0x18,
                     unaff_x29 + -0xc);
        if (*(char *)(unaff_x29 + -0xc) == '\0') goto LAB_03379918;
        param_1 = FUN_0504e228(param_1,4,0);
      }
      if ((int)uVar10 < 1) {
        bVar2 = true;
        goto LAB_0337991c;
      }
      iVar11 = uVar10 + 1;
      goto LAB_03379844;
    }
    uVar4 = (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
    pvVar3 = (void *)(*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
    memcpy(unaff_x25,pvVar3,unaff_x22);
    lVar9 = *(long *)(unaff_x19 + 0x38);
    lVar7 = *(long *)(lVar9 + 0x18);
    lVar6 = lVar7;
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02d8720c(lVar7);
      lVar9 = *(long *)(unaff_x19 + 0x38);
      lVar6 = *(long *)(lVar9 + 0x18);
    }
    uVar13 = *(undefined8 *)(lVar9 + 0x28);
    puVar8 = unaff_x25;
    if (-1 < *(int *)(lVar6 + 0x28)) {
      puVar8 = (undefined8 *)*unaff_x25;
    }
    *(undefined8 **)(unaff_x29 + -0x18) = puVar8;
    FUN_02d4e8bc(lVar7,uVar13,*(undefined8 *)(unaff_x29 + -0x20),uVar4,unaff_x29 + -0x18,
                 unaff_x29 + -0xc);
    if (*(char *)(unaff_x29 + -0xc) == '\0') break;
    FUN_0504e228(param_1,1,0);
    uVar4 = (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
    FUN_0504e228(param_1,1,0);
    pvVar3 = (void *)(*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
    memcpy(unaff_x25,pvVar3,unaff_x22);
    lVar9 = *(long *)(unaff_x19 + 0x38);
    lVar7 = *(long *)(lVar9 + 0x18);
    lVar6 = lVar7;
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02d8720c(lVar7);
      lVar9 = *(long *)(unaff_x19 + 0x38);
      lVar6 = *(long *)(lVar9 + 0x18);
    }
    uVar13 = *(undefined8 *)(lVar9 + 0x28);
    puVar8 = unaff_x25;
    if (-1 < *(int *)(lVar6 + 0x28)) {
      puVar8 = (undefined8 *)*unaff_x25;
    }
    *(undefined8 **)(unaff_x29 + -0x18) = puVar8;
    FUN_02d4e8bc(lVar7,uVar13,*(undefined8 *)(unaff_x29 + -0x30),uVar4,unaff_x29 + -0x18,
                 unaff_x29 + -0xc);
    if (*(char *)(unaff_x29 + -0xc) == '\0') break;
    FUN_0504e228(param_1,2,0);
    uVar4 = (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
    FUN_0504e228(param_1,2,0);
    pvVar3 = (void *)(*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
    memcpy(unaff_x25,pvVar3,unaff_x22);
    lVar9 = *(long *)(unaff_x19 + 0x38);
    lVar7 = *(long *)(lVar9 + 0x18);
    lVar6 = lVar7;
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02d8720c(lVar7);
      lVar9 = *(long *)(unaff_x19 + 0x38);
      lVar6 = *(long *)(lVar9 + 0x18);
    }
    uVar13 = *(undefined8 *)(lVar9 + 0x28);
    puVar8 = unaff_x25;
    if (-1 < *(int *)(lVar6 + 0x28)) {
      puVar8 = (undefined8 *)*unaff_x25;
    }
    *(undefined8 **)(unaff_x29 + -0x18) = puVar8;
    FUN_02d4e8bc(lVar7,uVar13,*(undefined8 *)(unaff_x29 + -0x38),uVar4,unaff_x29 + -0x18,
                 unaff_x29 + -0xc);
    if (*(char *)(unaff_x29 + -0xc) == '\0') break;
    FUN_0504e228(param_1,3,0);
    uVar4 = (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
    FUN_0504e228(param_1,3,0);
    pvVar3 = (void *)(*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
    memcpy(unaff_x25,pvVar3,unaff_x22);
    lVar9 = *(long *)(unaff_x19 + 0x38);
    lVar7 = *(long *)(lVar9 + 0x18);
    lVar6 = lVar7;
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02d8720c(lVar7);
      lVar9 = *(long *)(unaff_x19 + 0x38);
      lVar6 = *(long *)(lVar9 + 0x18);
    }
    uVar13 = *(undefined8 *)(lVar9 + 0x28);
    puVar8 = unaff_x25;
    if (-1 < *(int *)(lVar6 + 0x28)) {
      puVar8 = (undefined8 *)*unaff_x25;
    }
    *(undefined8 **)(unaff_x29 + -0x18) = puVar8;
    FUN_02d4e8bc(lVar7,uVar13,*(undefined8 *)(unaff_x29 + -0x40),uVar4,unaff_x29 + -0x18,
                 unaff_x29 + -0xc);
    if (*(char *)(unaff_x29 + -0xc) == '\0') break;
    FUN_0504e228(param_1,4,0);
    uVar4 = (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
    FUN_0504e228(param_1,4,0);
    pvVar3 = (void *)(*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
    memcpy(unaff_x25,pvVar3,unaff_x22);
    lVar9 = *(long *)(unaff_x19 + 0x38);
    lVar7 = *(long *)(lVar9 + 0x18);
    lVar6 = lVar7;
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02d8720c(lVar7);
      lVar9 = *(long *)(unaff_x19 + 0x38);
      lVar6 = *(long *)(lVar9 + 0x18);
    }
    uVar13 = *(undefined8 *)(lVar9 + 0x28);
    puVar8 = unaff_x25;
    if (-1 < *(int *)(lVar6 + 0x28)) {
      puVar8 = (undefined8 *)*unaff_x25;
    }
    *(undefined8 **)(unaff_x29 + -0x18) = puVar8;
    FUN_02d4e8bc(lVar7,uVar13,*(undefined8 *)(unaff_x29 + -0x48),uVar4,unaff_x29 + -0x18,
                 unaff_x29 + -0xc);
    if (*(char *)(unaff_x29 + -0xc) == '\0') break;
    FUN_0504e228(param_1,5,0);
    uVar4 = (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
    FUN_0504e228(param_1,5,0);
    pvVar3 = (void *)(*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
    memcpy(unaff_x25,pvVar3,unaff_x22);
    lVar9 = *(long *)(unaff_x19 + 0x38);
    lVar7 = *(long *)(lVar9 + 0x18);
    lVar6 = lVar7;
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02d8720c(lVar7);
      lVar9 = *(long *)(unaff_x19 + 0x38);
      lVar6 = *(long *)(lVar9 + 0x18);
    }
    uVar13 = *(undefined8 *)(lVar9 + 0x28);
    puVar8 = unaff_x25;
    if (-1 < *(int *)(lVar6 + 0x28)) {
      puVar8 = (undefined8 *)*unaff_x25;
    }
    *(undefined8 **)(unaff_x29 + -0x18) = puVar8;
    FUN_02d4e8bc(lVar7,uVar13,*(undefined8 *)(unaff_x29 + -0x50),uVar4,unaff_x29 + -0x18,
                 unaff_x29 + -0xc);
    if (*(char *)(unaff_x29 + -0xc) == '\0') break;
    FUN_0504e228(param_1,6,0);
    (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
    param_2 = 6;
    unaff_x26 = param_1;
    unaff_w23 = uVar1;
  }
  lVar12 = *(long *)(unaff_x29 + -0x28);
LAB_03379918:
  bVar2 = false;
  goto LAB_0337991c;
  while( true ) {
    param_1 = FUN_0504e228(param_1,1,0);
    iVar11 = iVar11 + -1;
    if (iVar11 < 2) break;
LAB_03379844:
    uVar4 = (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
    pvVar3 = (void *)(*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
    memcpy(unaff_x25,pvVar3,unaff_x22);
    lVar9 = *(long *)(unaff_x19 + 0x38);
    lVar7 = *(long *)(lVar9 + 0x18);
    lVar6 = lVar7;
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02d8720c(lVar7);
      lVar9 = *(long *)(unaff_x19 + 0x38);
      lVar6 = *(long *)(lVar9 + 0x18);
    }
    uVar5 = *(undefined8 *)(lVar9 + 0x28);
    puVar8 = unaff_x25;
    if (-1 < *(int *)(lVar6 + 0x28)) {
      puVar8 = (undefined8 *)*unaff_x25;
    }
    *(undefined8 **)(unaff_x29 + -0x18) = puVar8;
    FUN_02d4e8bc(lVar7,uVar5,uVar13,uVar4,unaff_x29 + -0x18,unaff_x29 + -0xc);
    bVar2 = *(char *)(unaff_x29 + -0xc) != '\0';
    if (*(char *)(unaff_x29 + -0xc) == '\0') break;
  }
LAB_0337991c:
  if (*(long *)(lVar12 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar2;
}


