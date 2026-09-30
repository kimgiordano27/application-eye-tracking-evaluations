/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsBaseConverter$$DeserializeMember<Vector3>
ENTRY_POINT: 047d3f2c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


void Unity_VisualScripting_FullSerializer_fsBaseConverter__DeserializeMember<Vector3>
               (undefined8 *param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  int in_w10;
  size_t unaff_x21;
  int unaff_w22;
  int iVar11;
  undefined8 *unaff_x24;
  undefined8 unaff_x25;
  long *unaff_x26;
  long unaff_x29;
  
  while( true ) {
    if (-1 < in_w10) {
      param_1 = (undefined8 *)*unaff_x24;
    }
    *(undefined8 **)(unaff_x29 + -0x18) = param_1;
    FUN_03c90414(param_2,param_3);
    if (*(char *)(unaff_x29 + -0xc) == '\0') goto LAB_047d4360;
    iVar11 = unaff_w22 + -8;
    unaff_x25 = FUN_0714e4e8(unaff_x25,8,0);
    if (unaff_w22 < 0x10) break;
    uVar4 = (*(code *)**(undefined8 **)(*unaff_x26 + 0x10))();
    pvVar3 = (void *)(*(code *)**(undefined8 **)(*unaff_x26 + 0x10))();
    memcpy(unaff_x24,pvVar3,unaff_x21);
    lVar10 = *unaff_x26;
    lVar8 = *(long *)(lVar10 + 0x18);
    lVar7 = lVar8;
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03cf1244(lVar8);
      lVar10 = *unaff_x26;
      lVar7 = *(long *)(lVar10 + 0x18);
    }
    uVar5 = *(undefined8 *)(lVar10 + 0x28);
    puVar9 = unaff_x24;
    if (-1 < *(int *)(lVar7 + 0x28)) {
      puVar9 = (undefined8 *)*unaff_x24;
    }
    *(undefined8 **)(unaff_x29 + -0x18) = puVar9;
    FUN_03c90414(lVar8,uVar5,*(undefined8 *)(unaff_x29 + -0x20),uVar4,unaff_x29 + -0x18,
                 unaff_x29 + -0xc);
    if (*(char *)(unaff_x29 + -0xc) == '\0') goto LAB_047d4360;
    FUN_0714e4e8(unaff_x25,1,0);
    uVar4 = (*(code *)**(undefined8 **)(*unaff_x26 + 0x10))();
    FUN_0714e4e8(unaff_x25,1,0);
    pvVar3 = (void *)(*(code *)**(undefined8 **)(*unaff_x26 + 0x10))();
    memcpy(unaff_x24,pvVar3,unaff_x21);
    lVar10 = *unaff_x26;
    lVar8 = *(long *)(lVar10 + 0x18);
    lVar7 = lVar8;
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03cf1244(lVar8);
      lVar10 = *unaff_x26;
      lVar7 = *(long *)(lVar10 + 0x18);
    }
    uVar5 = *(undefined8 *)(lVar10 + 0x28);
    puVar9 = unaff_x24;
    if (-1 < *(int *)(lVar7 + 0x28)) {
      puVar9 = (undefined8 *)*unaff_x24;
    }
    *(undefined8 **)(unaff_x29 + -0x18) = puVar9;
    FUN_03c90414(lVar8,uVar5,*(undefined8 *)(unaff_x29 + -0x28),uVar4,unaff_x29 + -0x18,
                 unaff_x29 + -0xc);
    if (*(char *)(unaff_x29 + -0xc) == '\0') goto LAB_047d4360;
    FUN_0714e4e8(unaff_x25,2,0);
    uVar4 = (*(code *)**(undefined8 **)(*unaff_x26 + 0x10))();
    FUN_0714e4e8(unaff_x25,2,0);
    pvVar3 = (void *)(*(code *)**(undefined8 **)(*unaff_x26 + 0x10))();
    memcpy(unaff_x24,pvVar3,unaff_x21);
    lVar10 = *unaff_x26;
    lVar8 = *(long *)(lVar10 + 0x18);
    lVar7 = lVar8;
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03cf1244(lVar8);
      lVar10 = *unaff_x26;
      lVar7 = *(long *)(lVar10 + 0x18);
    }
    uVar5 = *(undefined8 *)(lVar10 + 0x28);
    puVar9 = unaff_x24;
    if (-1 < *(int *)(lVar7 + 0x28)) {
      puVar9 = (undefined8 *)*unaff_x24;
    }
    *(undefined8 **)(unaff_x29 + -0x18) = puVar9;
    FUN_03c90414(lVar8,uVar5,*(undefined8 *)(unaff_x29 + -0x30),uVar4,unaff_x29 + -0x18,
                 unaff_x29 + -0xc);
    if (*(char *)(unaff_x29 + -0xc) == '\0') goto LAB_047d4360;
    FUN_0714e4e8(unaff_x25,3,0);
    uVar4 = (*(code *)**(undefined8 **)(*unaff_x26 + 0x10))();
    FUN_0714e4e8(unaff_x25,3,0);
    pvVar3 = (void *)(*(code *)**(undefined8 **)(*unaff_x26 + 0x10))();
    memcpy(unaff_x24,pvVar3,unaff_x21);
    lVar10 = *unaff_x26;
    lVar8 = *(long *)(lVar10 + 0x18);
    lVar7 = lVar8;
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03cf1244(lVar8);
      lVar10 = *unaff_x26;
      lVar7 = *(long *)(lVar10 + 0x18);
    }
    uVar5 = *(undefined8 *)(lVar10 + 0x28);
    puVar9 = unaff_x24;
    if (-1 < *(int *)(lVar7 + 0x28)) {
      puVar9 = (undefined8 *)*unaff_x24;
    }
    *(undefined8 **)(unaff_x29 + -0x18) = puVar9;
    FUN_03c90414(lVar8,uVar5,*(undefined8 *)(unaff_x29 + -0x38),uVar4,unaff_x29 + -0x18,
                 unaff_x29 + -0xc);
    if (*(char *)(unaff_x29 + -0xc) == '\0') goto LAB_047d4360;
    FUN_0714e4e8(unaff_x25,4,0);
    uVar4 = (*(code *)**(undefined8 **)(*unaff_x26 + 0x10))();
    FUN_0714e4e8(unaff_x25,4,0);
    pvVar3 = (void *)(*(code *)**(undefined8 **)(*unaff_x26 + 0x10))();
    memcpy(unaff_x24,pvVar3,unaff_x21);
    lVar10 = *unaff_x26;
    lVar8 = *(long *)(lVar10 + 0x18);
    lVar7 = lVar8;
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03cf1244(lVar8);
      lVar10 = *unaff_x26;
      lVar7 = *(long *)(lVar10 + 0x18);
    }
    uVar5 = *(undefined8 *)(lVar10 + 0x28);
    puVar9 = unaff_x24;
    if (-1 < *(int *)(lVar7 + 0x28)) {
      puVar9 = (undefined8 *)*unaff_x24;
    }
    *(undefined8 **)(unaff_x29 + -0x18) = puVar9;
    FUN_03c90414(lVar8,uVar5,*(undefined8 *)(unaff_x29 + -0x40),uVar4,unaff_x29 + -0x18,
                 unaff_x29 + -0xc);
    if (*(char *)(unaff_x29 + -0xc) == '\0') goto LAB_047d4360;
    FUN_0714e4e8(unaff_x25,5,0);
    uVar4 = (*(code *)**(undefined8 **)(*unaff_x26 + 0x10))();
    FUN_0714e4e8(unaff_x25,5,0);
    pvVar3 = (void *)(*(code *)**(undefined8 **)(*unaff_x26 + 0x10))();
    memcpy(unaff_x24,pvVar3,unaff_x21);
    lVar10 = *unaff_x26;
    lVar8 = *(long *)(lVar10 + 0x18);
    lVar7 = lVar8;
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03cf1244(lVar8);
      lVar10 = *unaff_x26;
      lVar7 = *(long *)(lVar10 + 0x18);
    }
    uVar5 = *(undefined8 *)(lVar10 + 0x28);
    puVar9 = unaff_x24;
    if (-1 < *(int *)(lVar7 + 0x28)) {
      puVar9 = (undefined8 *)*unaff_x24;
    }
    *(undefined8 **)(unaff_x29 + -0x18) = puVar9;
    FUN_03c90414(lVar8,uVar5,*(undefined8 *)(unaff_x29 + -0x48),uVar4,unaff_x29 + -0x18,
                 unaff_x29 + -0xc);
    if (*(char *)(unaff_x29 + -0xc) == '\0') goto LAB_047d4360;
    FUN_0714e4e8(unaff_x25,6,0);
    uVar4 = (*(code *)**(undefined8 **)(*unaff_x26 + 0x10))();
    FUN_0714e4e8(unaff_x25,6,0);
    pvVar3 = (void *)(*(code *)**(undefined8 **)(*unaff_x26 + 0x10))();
    memcpy(unaff_x24,pvVar3,unaff_x21);
    lVar10 = *unaff_x26;
    lVar8 = *(long *)(lVar10 + 0x18);
    lVar7 = lVar8;
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03cf1244(lVar8);
      lVar10 = *unaff_x26;
      lVar7 = *(long *)(lVar10 + 0x18);
    }
    uVar5 = *(undefined8 *)(lVar10 + 0x28);
    puVar9 = unaff_x24;
    if (-1 < *(int *)(lVar7 + 0x28)) {
      puVar9 = (undefined8 *)*unaff_x24;
    }
    *(undefined8 **)(unaff_x29 + -0x18) = puVar9;
    FUN_03c90414(lVar8,uVar5,*(undefined8 *)(unaff_x29 + -0x50),uVar4,unaff_x29 + -0x18,
                 unaff_x29 + -0xc);
    if (*(char *)(unaff_x29 + -0xc) == '\0') goto LAB_047d4360;
    FUN_0714e4e8(unaff_x25,7,0);
    (*(code *)**(undefined8 **)(*unaff_x26 + 0x10))();
    FUN_0714e4e8(unaff_x25,7,0);
    pvVar3 = (void *)(*(code *)**(undefined8 **)(*unaff_x26 + 0x10))();
    memcpy(unaff_x24,pvVar3,unaff_x21);
    lVar8 = *unaff_x26;
    param_2 = *(long *)(lVar8 + 0x18);
    lVar7 = param_2;
    if ((*(byte *)(param_2 + 0x135) & 1) == 0) {
      param_2 = FUN_03cf1244(param_2);
      lVar8 = *unaff_x26;
      lVar7 = *(long *)(lVar8 + 0x18);
    }
    in_w10 = *(int *)(lVar7 + 0x28);
    param_3 = *(undefined8 *)(lVar8 + 0x28);
    param_1 = unaff_x24;
    unaff_w22 = iVar11;
  }
  if (iVar11 < 4) {
LAB_047d3f80:
    if (iVar11 < 1) {
      bVar2 = true;
      goto LAB_047d4364;
    }
    iVar11 = iVar11 + 1;
    goto LAB_047d3f8c;
  }
  uVar4 = (*(code *)**(undefined8 **)(*unaff_x26 + 0x10))();
  pvVar3 = (void *)(*(code *)**(undefined8 **)(*unaff_x26 + 0x10))();
  memcpy(unaff_x24,pvVar3,unaff_x21);
  lVar10 = *unaff_x26;
  lVar8 = *(long *)(lVar10 + 0x18);
  lVar7 = lVar8;
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_03cf1244(lVar8);
    lVar10 = *unaff_x26;
    lVar7 = *(long *)(lVar10 + 0x18);
  }
  uVar5 = *(undefined8 *)(lVar10 + 0x28);
  puVar9 = unaff_x24;
  if (-1 < *(int *)(lVar7 + 0x28)) {
    puVar9 = (undefined8 *)*unaff_x24;
  }
  *(undefined8 **)(unaff_x29 + -0x18) = puVar9;
  FUN_03c90414(lVar8,uVar5,*(undefined8 *)(unaff_x29 + -0x58),uVar4,unaff_x29 + -0x18,
               unaff_x29 + -0xc);
  uVar4 = *(undefined8 *)(unaff_x29 + -0x78);
  if (*(char *)(unaff_x29 + -0xc) != '\0') {
    FUN_0714e4e8(unaff_x25,1,0);
    uVar5 = (*(code *)**(undefined8 **)(*unaff_x26 + 0x10))();
    FUN_0714e4e8(unaff_x25,1,0);
    pvVar3 = (void *)(*(code *)**(undefined8 **)(*unaff_x26 + 0x10))();
    memcpy(unaff_x24,pvVar3,unaff_x21);
    lVar10 = *unaff_x26;
    lVar8 = *(long *)(lVar10 + 0x18);
    lVar7 = lVar8;
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03cf1244(lVar8);
      lVar10 = *unaff_x26;
      lVar7 = *(long *)(lVar10 + 0x18);
    }
    uVar6 = *(undefined8 *)(lVar10 + 0x28);
    puVar9 = unaff_x24;
    if (-1 < *(int *)(lVar7 + 0x28)) {
      puVar9 = (undefined8 *)*unaff_x24;
    }
    *(undefined8 **)(unaff_x29 + -0x18) = puVar9;
    FUN_03c90414(lVar8,uVar6,*(undefined8 *)(unaff_x29 + -0x60),uVar5,unaff_x29 + -0x18,
                 unaff_x29 + -0xc);
    if (*(char *)(unaff_x29 + -0xc) != '\0') {
      FUN_0714e4e8(unaff_x25,2,0);
      uVar5 = (*(code *)**(undefined8 **)(*unaff_x26 + 0x10))();
      FUN_0714e4e8(unaff_x25,2,0);
      pvVar3 = (void *)(*(code *)**(undefined8 **)(*unaff_x26 + 0x10))();
      memcpy(unaff_x24,pvVar3,unaff_x21);
      lVar10 = *unaff_x26;
      lVar8 = *(long *)(lVar10 + 0x18);
      lVar7 = lVar8;
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03cf1244(lVar8);
        lVar10 = *unaff_x26;
        lVar7 = *(long *)(lVar10 + 0x18);
      }
      uVar6 = *(undefined8 *)(lVar10 + 0x28);
      puVar9 = unaff_x24;
      if (-1 < *(int *)(lVar7 + 0x28)) {
        puVar9 = (undefined8 *)*unaff_x24;
      }
      *(undefined8 **)(unaff_x29 + -0x18) = puVar9;
      FUN_03c90414(lVar8,uVar6,*(undefined8 *)(unaff_x29 + -0x68),uVar5,unaff_x29 + -0x18,
                   unaff_x29 + -0xc);
      if (*(char *)(unaff_x29 + -0xc) != '\0') {
        FUN_0714e4e8(unaff_x25,3,0);
        uVar5 = (*(code *)**(undefined8 **)(*unaff_x26 + 0x10))();
        FUN_0714e4e8(unaff_x25,3,0);
        pvVar3 = (void *)(*(code *)**(undefined8 **)(*unaff_x26 + 0x10))();
        memcpy(unaff_x24,pvVar3,unaff_x21);
        lVar10 = *unaff_x26;
        lVar8 = *(long *)(lVar10 + 0x18);
        lVar7 = lVar8;
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_03cf1244(lVar8);
          lVar10 = *unaff_x26;
          lVar7 = *(long *)(lVar10 + 0x18);
        }
        uVar6 = *(undefined8 *)(lVar10 + 0x28);
        puVar9 = unaff_x24;
        if (-1 < *(int *)(lVar7 + 0x28)) {
          puVar9 = (undefined8 *)*unaff_x24;
        }
        *(undefined8 **)(unaff_x29 + -0x18) = puVar9;
        FUN_03c90414(lVar8,uVar6,uVar4,uVar5,unaff_x29 + -0x18,unaff_x29 + -0xc);
        if (*(char *)(unaff_x29 + -0xc) != '\0') {
          unaff_x25 = FUN_0714e4e8(unaff_x25,4,0);
          iVar11 = unaff_w22 + -0xc;
          goto LAB_047d3f80;
        }
      }
    }
  }
LAB_047d4360:
  bVar2 = false;
  goto LAB_047d4364;
  while( true ) {
    unaff_x25 = FUN_0714e4e8(unaff_x25,1,0);
    iVar11 = iVar11 + -1;
    if (iVar11 < 2) break;
LAB_047d3f8c:
    (*(code *)**(undefined8 **)(*unaff_x26 + 0x10))();
    pvVar3 = (void *)(*(code *)**(undefined8 **)(*unaff_x26 + 0x10))();
    memcpy(unaff_x24,pvVar3,unaff_x21);
    lVar10 = *unaff_x26;
    lVar8 = *(long *)(lVar10 + 0x18);
    lVar7 = lVar8;
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03cf1244(lVar8);
      lVar10 = *unaff_x26;
      lVar7 = *(long *)(lVar10 + 0x18);
    }
    uVar4 = *(undefined8 *)(lVar10 + 0x28);
    puVar9 = unaff_x24;
    if (-1 < *(int *)(lVar7 + 0x28)) {
      puVar9 = (undefined8 *)*unaff_x24;
    }
    *(undefined8 **)(unaff_x29 + -0x18) = puVar9;
    FUN_03c90414(lVar8,uVar4);
    cVar1 = *(char *)(unaff_x29 + -0xc);
    if (cVar1 == '\0') break;
  }
  bVar2 = cVar1 != '\0';
LAB_047d4364:
  if (*(long *)(*(long *)(unaff_x29 + -0x70) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar2);
  }
  return;
}


