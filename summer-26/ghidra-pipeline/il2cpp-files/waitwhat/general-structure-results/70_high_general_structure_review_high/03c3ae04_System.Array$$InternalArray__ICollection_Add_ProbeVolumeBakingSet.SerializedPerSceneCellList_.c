/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<ProbeVolumeBakingSet.SerializedPerSceneCellList>
ENTRY_POINT: 03c3ae04
PROGRAM: waitwhat-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


uint System_Array__InternalArray__ICollection_Add<ProbeVolumeBakingSet_SerializedPerSceneCellList>
               (void)

{
  uint uVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  int unaff_w19;
  long unaff_x20;
  size_t unaff_x21;
  undefined8 unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  uint unaff_w25;
  uint uVar9;
  uint unaff_w26;
  long *unaff_x27;
  void *unaff_x28;
  long unaff_x29;
  
  while( true ) {
    lVar8 = *unaff_x27;
    lVar6 = *(long *)(lVar8 + 0x10);
    lVar5 = lVar6;
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_031c09d4(lVar6);
      lVar8 = *unaff_x27;
      lVar5 = *(long *)(lVar8 + 0x10);
    }
    uVar3 = *(undefined8 *)(lVar8 + 0x20);
    puVar7 = unaff_x23;
    lVar8 = *(long *)(unaff_x29 + -0x38);
    if (-1 < *(int *)(lVar5 + 0x28)) {
      puVar7 = (undefined8 *)*unaff_x23;
      lVar8 = unaff_x29 + -0x38;
    }
    *(undefined8 **)(unaff_x29 + -0x20) = puVar7;
    FUN_031896ac(lVar6,uVar3,*(undefined8 *)(unaff_x29 + -0xe8),lVar8,unaff_x29 + -0x20,
                 unaff_x29 + -0x14);
    if (*(char *)(unaff_x29 + -0x14) != '\0') goto LAB_03c3b5c0;
    pvVar2 = (void *)(*(code *)**(undefined8 **)(*unaff_x27 + 8))
                               (*(undefined8 *)(unaff_x29 + -0x40),unaff_w25 + 6);
    memcpy(unaff_x23,pvVar2,unaff_x21);
    memcpy(unaff_x28,pvVar2,unaff_x21);
    memmove(unaff_x24,pvVar2,unaff_x21);
    lVar8 = *unaff_x27;
    lVar6 = *(long *)(lVar8 + 0x10);
    lVar5 = lVar6;
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_031c09d4(lVar6);
      lVar8 = *unaff_x27;
      lVar5 = *(long *)(lVar8 + 0x10);
    }
    uVar4 = *(undefined8 *)(lVar8 + 0x20);
    puVar7 = unaff_x24;
    uVar3 = *(undefined8 *)(unaff_x29 + -0x28);
    if (-1 < *(int *)(lVar5 + 0x28)) {
      puVar7 = (undefined8 *)*unaff_x24;
      uVar3 = unaff_x22;
    }
    *(undefined8 **)(unaff_x29 + -0x20) = puVar7;
    FUN_031896ac(lVar6,uVar4,*(undefined8 *)(unaff_x29 + -0xf0),uVar3,unaff_x29 + -0x20,
                 unaff_x29 + -0x14);
    unaff_w26 = unaff_w25 | 6;
    if (*(char *)(unaff_x29 + -0x14) != '\0') goto LAB_03c3b5c0;
    memcpy(unaff_x23,unaff_x28,unaff_x21);
    lVar8 = *unaff_x27;
    lVar6 = *(long *)(lVar8 + 0x10);
    lVar5 = lVar6;
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_031c09d4(lVar6);
      lVar8 = *unaff_x27;
      lVar5 = *(long *)(lVar8 + 0x10);
    }
    uVar3 = *(undefined8 *)(lVar8 + 0x20);
    puVar7 = unaff_x23;
    lVar8 = *(long *)(unaff_x29 + -0x30);
    if (-1 < *(int *)(lVar5 + 0x28)) {
      puVar7 = (undefined8 *)*unaff_x23;
      lVar8 = unaff_x29 + -0x30;
    }
    *(undefined8 **)(unaff_x29 + -0x20) = puVar7;
    FUN_031896ac(lVar6,uVar3,*(undefined8 *)(unaff_x29 + -0xf8),lVar8,unaff_x29 + -0x20,
                 unaff_x29 + -0x14);
    if (*(char *)(unaff_x29 + -0x14) != '\0') goto LAB_03c3b5c0;
    memcpy(unaff_x23,unaff_x28,unaff_x21);
    lVar8 = *unaff_x27;
    lVar6 = *(long *)(lVar8 + 0x10);
    lVar5 = lVar6;
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_031c09d4(lVar6);
      lVar8 = *unaff_x27;
      lVar5 = *(long *)(lVar8 + 0x10);
    }
    uVar3 = *(undefined8 *)(lVar8 + 0x20);
    puVar7 = unaff_x23;
    lVar8 = *(long *)(unaff_x29 + -0x38);
    if (-1 < *(int *)(lVar5 + 0x28)) {
      puVar7 = (undefined8 *)*unaff_x23;
      lVar8 = unaff_x29 + -0x38;
    }
    *(undefined8 **)(unaff_x29 + -0x20) = puVar7;
    FUN_031896ac(lVar6,uVar3,*(undefined8 *)(unaff_x29 + -0x100),lVar8,unaff_x29 + -0x20,
                 unaff_x29 + -0x14);
    if (*(char *)(unaff_x29 + -0x14) != '\0') {
      unaff_w26 = unaff_w25 + 6;
      goto LAB_03c3b5c0;
    }
    pvVar2 = (void *)(*(code *)**(undefined8 **)(*unaff_x27 + 8))
                               (*(undefined8 *)(unaff_x29 + -0x40),unaff_w25 + 7);
    memcpy(unaff_x23,pvVar2,unaff_x21);
    memcpy(unaff_x28,pvVar2,unaff_x21);
    memmove(unaff_x24,pvVar2,unaff_x21);
    lVar8 = *unaff_x27;
    lVar6 = *(long *)(lVar8 + 0x10);
    lVar5 = lVar6;
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_031c09d4(lVar6);
      lVar8 = *unaff_x27;
      lVar5 = *(long *)(lVar8 + 0x10);
    }
    uVar4 = *(undefined8 *)(lVar8 + 0x20);
    puVar7 = unaff_x24;
    uVar3 = *(undefined8 *)(unaff_x29 + -0x28);
    if (-1 < *(int *)(lVar5 + 0x28)) {
      puVar7 = (undefined8 *)*unaff_x24;
      uVar3 = unaff_x22;
    }
    *(undefined8 **)(unaff_x29 + -0x20) = puVar7;
    FUN_031896ac(lVar6,uVar4,*(undefined8 *)(unaff_x29 + -0x108),uVar3,unaff_x29 + -0x20,
                 unaff_x29 + -0x14);
    if (*(char *)(unaff_x29 + -0x14) != '\0') {
      unaff_w26 = unaff_w25 + 7;
      goto LAB_03c3b5c0;
    }
    memcpy(unaff_x23,unaff_x28,unaff_x21);
    lVar8 = *unaff_x27;
    lVar6 = *(long *)(lVar8 + 0x10);
    lVar5 = lVar6;
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_031c09d4(lVar6);
      lVar8 = *unaff_x27;
      lVar5 = *(long *)(lVar8 + 0x10);
    }
    uVar3 = *(undefined8 *)(lVar8 + 0x20);
    puVar7 = unaff_x23;
    lVar8 = *(long *)(unaff_x29 + -0x30);
    if (-1 < *(int *)(lVar5 + 0x28)) {
      puVar7 = (undefined8 *)*unaff_x23;
      lVar8 = unaff_x29 + -0x30;
    }
    *(undefined8 **)(unaff_x29 + -0x20) = puVar7;
    FUN_031896ac(lVar6,uVar3,*(undefined8 *)(unaff_x29 + -0x110),lVar8,unaff_x29 + -0x20,
                 unaff_x29 + -0x14);
    unaff_w26 = unaff_w25 | 7;
    if (*(char *)(unaff_x29 + -0x14) != '\0') goto LAB_03c3b5c0;
    memcpy(unaff_x23,unaff_x28,unaff_x21);
    lVar8 = *unaff_x27;
    lVar6 = *(long *)(lVar8 + 0x10);
    lVar5 = lVar6;
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_031c09d4(lVar6);
      lVar8 = *unaff_x27;
      lVar5 = *(long *)(lVar8 + 0x10);
    }
    uVar3 = *(undefined8 *)(lVar8 + 0x20);
    puVar7 = unaff_x23;
    lVar8 = *(long *)(unaff_x29 + -0x38);
    if (-1 < *(int *)(lVar5 + 0x28)) {
      puVar7 = (undefined8 *)*unaff_x23;
      lVar8 = unaff_x29 + -0x38;
    }
    *(undefined8 **)(unaff_x29 + -0x20) = puVar7;
    FUN_031896ac(lVar6,uVar3,*(undefined8 *)(unaff_x29 + -0x118),lVar8,unaff_x29 + -0x20,
                 unaff_x29 + -0x14);
    if (*(char *)(unaff_x29 + -0x14) != '\0') goto LAB_03c3b5c0;
    unaff_w19 = unaff_w19 + -8;
    uVar9 = unaff_w25 + 8;
    uVar1 = *(uint *)(unaff_x29 + -0x17c);
    unaff_w26 = uVar9;
    if (unaff_w19 < 8) break;
    pvVar2 = (void *)(*(code *)**(undefined8 **)(*unaff_x27 + 8))
                               (*(undefined8 *)(unaff_x29 + -0x40),uVar9);
    memcpy(unaff_x23,pvVar2,unaff_x21);
    memcpy(unaff_x28,pvVar2,unaff_x21);
    memmove(unaff_x24,pvVar2,unaff_x21);
    lVar8 = *unaff_x27;
    lVar6 = *(long *)(lVar8 + 0x10);
    lVar5 = lVar6;
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_031c09d4(lVar6);
      lVar8 = *unaff_x27;
      lVar5 = *(long *)(lVar8 + 0x10);
    }
    uVar4 = *(undefined8 *)(lVar8 + 0x20);
    puVar7 = unaff_x24;
    uVar3 = *(undefined8 *)(unaff_x29 + -0x28);
    if (-1 < *(int *)(lVar5 + 0x28)) {
      puVar7 = (undefined8 *)*unaff_x24;
      uVar3 = unaff_x22;
    }
    *(undefined8 **)(unaff_x29 + -0x20) = puVar7;
    FUN_031896ac(lVar6,uVar4,*(undefined8 *)(unaff_x29 + -0x60),uVar3,unaff_x29 + -0x20,
                 unaff_x29 + -0x14);
    if (*(char *)(unaff_x29 + -0x14) != '\0') goto LAB_03c3b5c0;
    memcpy(unaff_x23,unaff_x28,unaff_x21);
    lVar8 = *unaff_x27;
    lVar6 = *(long *)(lVar8 + 0x10);
    lVar5 = lVar6;
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_031c09d4(lVar6);
      lVar8 = *unaff_x27;
      lVar5 = *(long *)(lVar8 + 0x10);
    }
    uVar3 = *(undefined8 *)(lVar8 + 0x20);
    puVar7 = unaff_x23;
    lVar8 = *(long *)(unaff_x29 + -0x30);
    if (-1 < *(int *)(lVar5 + 0x28)) {
      puVar7 = (undefined8 *)*unaff_x23;
      lVar8 = unaff_x29 + -0x30;
    }
    *(undefined8 **)(unaff_x29 + -0x20) = puVar7;
    FUN_031896ac(lVar6,uVar3,*(undefined8 *)(unaff_x29 + -0x68),lVar8,unaff_x29 + -0x20,
                 unaff_x29 + -0x14);
    if (*(char *)(unaff_x29 + -0x14) != '\0') goto LAB_03c3b5c0;
    memcpy(unaff_x23,unaff_x28,unaff_x21);
    lVar8 = *unaff_x27;
    lVar6 = *(long *)(lVar8 + 0x10);
    lVar5 = lVar6;
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_031c09d4(lVar6);
      lVar8 = *unaff_x27;
      lVar5 = *(long *)(lVar8 + 0x10);
    }
    uVar3 = *(undefined8 *)(lVar8 + 0x20);
    puVar7 = unaff_x23;
    lVar8 = *(long *)(unaff_x29 + -0x38);
    if (-1 < *(int *)(lVar5 + 0x28)) {
      puVar7 = (undefined8 *)*unaff_x23;
      lVar8 = unaff_x29 + -0x38;
    }
    *(undefined8 **)(unaff_x29 + -0x20) = puVar7;
    FUN_031896ac(lVar6,uVar3,*(undefined8 *)(unaff_x29 + -0x70),lVar8,unaff_x29 + -0x20,
                 unaff_x29 + -0x14);
    if (*(char *)(unaff_x29 + -0x14) != '\0') goto LAB_03c3b5c0;
    pvVar2 = (void *)(*(code *)**(undefined8 **)(*unaff_x27 + 8))
                               (*(undefined8 *)(unaff_x29 + -0x40),unaff_w25 + 9);
    memcpy(unaff_x23,pvVar2,unaff_x21);
    memcpy(unaff_x28,pvVar2,unaff_x21);
    memmove(unaff_x24,pvVar2,unaff_x21);
    lVar8 = *unaff_x27;
    lVar6 = *(long *)(lVar8 + 0x10);
    lVar5 = lVar6;
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_031c09d4(lVar6);
      lVar8 = *unaff_x27;
      lVar5 = *(long *)(lVar8 + 0x10);
    }
    uVar4 = *(undefined8 *)(lVar8 + 0x20);
    puVar7 = unaff_x24;
    uVar3 = *(undefined8 *)(unaff_x29 + -0x28);
    if (-1 < *(int *)(lVar5 + 0x28)) {
      puVar7 = (undefined8 *)*unaff_x24;
      uVar3 = unaff_x22;
    }
    *(undefined8 **)(unaff_x29 + -0x20) = puVar7;
    FUN_031896ac(lVar6,uVar4,*(undefined8 *)(unaff_x29 + -0x78),uVar3,unaff_x29 + -0x20,
                 unaff_x29 + -0x14);
    unaff_w26 = uVar9 | 1;
    if (*(char *)(unaff_x29 + -0x14) != '\0') goto LAB_03c3b5c0;
    memcpy(unaff_x23,unaff_x28,unaff_x21);
    lVar8 = *unaff_x27;
    lVar6 = *(long *)(lVar8 + 0x10);
    lVar5 = lVar6;
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_031c09d4(lVar6);
      lVar8 = *unaff_x27;
      lVar5 = *(long *)(lVar8 + 0x10);
    }
    uVar3 = *(undefined8 *)(lVar8 + 0x20);
    puVar7 = unaff_x23;
    lVar8 = *(long *)(unaff_x29 + -0x30);
    if (-1 < *(int *)(lVar5 + 0x28)) {
      puVar7 = (undefined8 *)*unaff_x23;
      lVar8 = unaff_x29 + -0x30;
    }
    *(undefined8 **)(unaff_x29 + -0x20) = puVar7;
    FUN_031896ac(lVar6,uVar3,*(undefined8 *)(unaff_x29 + -0x80),lVar8,unaff_x29 + -0x20,
                 unaff_x29 + -0x14);
    if (*(char *)(unaff_x29 + -0x14) != '\0') goto LAB_03c3b5c0;
    memcpy(unaff_x23,unaff_x28,unaff_x21);
    lVar8 = *unaff_x27;
    lVar6 = *(long *)(lVar8 + 0x10);
    lVar5 = lVar6;
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_031c09d4(lVar6);
      lVar8 = *unaff_x27;
      lVar5 = *(long *)(lVar8 + 0x10);
    }
    uVar3 = *(undefined8 *)(lVar8 + 0x20);
    puVar7 = unaff_x23;
    lVar8 = *(long *)(unaff_x29 + -0x38);
    if (-1 < *(int *)(lVar5 + 0x28)) {
      puVar7 = (undefined8 *)*unaff_x23;
      lVar8 = unaff_x29 + -0x38;
    }
    *(undefined8 **)(unaff_x29 + -0x20) = puVar7;
    FUN_031896ac(lVar6,uVar3,*(undefined8 *)(unaff_x29 + -0x88),lVar8,unaff_x29 + -0x20,
                 unaff_x29 + -0x14);
    if (*(char *)(unaff_x29 + -0x14) != '\0') {
      unaff_w26 = unaff_w25 + 9;
      goto LAB_03c3b5c0;
    }
    pvVar2 = (void *)(*(code *)**(undefined8 **)(*unaff_x27 + 8))
                               (*(undefined8 *)(unaff_x29 + -0x40),unaff_w25 + 10);
    memcpy(unaff_x23,pvVar2,unaff_x21);
    memcpy(unaff_x28,pvVar2,unaff_x21);
    memmove(unaff_x24,pvVar2,unaff_x21);
    lVar8 = *unaff_x27;
    lVar6 = *(long *)(lVar8 + 0x10);
    lVar5 = lVar6;
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_031c09d4(lVar6);
      lVar8 = *unaff_x27;
      lVar5 = *(long *)(lVar8 + 0x10);
    }
    uVar4 = *(undefined8 *)(lVar8 + 0x20);
    puVar7 = unaff_x24;
    uVar3 = *(undefined8 *)(unaff_x29 + -0x28);
    if (-1 < *(int *)(lVar5 + 0x28)) {
      puVar7 = (undefined8 *)*unaff_x24;
      uVar3 = unaff_x22;
    }
    *(undefined8 **)(unaff_x29 + -0x20) = puVar7;
    FUN_031896ac(lVar6,uVar4,*(undefined8 *)(unaff_x29 + -0x90),uVar3,unaff_x29 + -0x20,
                 unaff_x29 + -0x14);
    if (*(char *)(unaff_x29 + -0x14) != '\0') {
      unaff_w26 = unaff_w25 + 10;
      goto LAB_03c3b5c0;
    }
    memcpy(unaff_x23,unaff_x28,unaff_x21);
    lVar8 = *unaff_x27;
    lVar6 = *(long *)(lVar8 + 0x10);
    lVar5 = lVar6;
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_031c09d4(lVar6);
      lVar8 = *unaff_x27;
      lVar5 = *(long *)(lVar8 + 0x10);
    }
    uVar3 = *(undefined8 *)(lVar8 + 0x20);
    puVar7 = unaff_x23;
    lVar8 = *(long *)(unaff_x29 + -0x30);
    if (-1 < *(int *)(lVar5 + 0x28)) {
      puVar7 = (undefined8 *)*unaff_x23;
      lVar8 = unaff_x29 + -0x30;
    }
    *(undefined8 **)(unaff_x29 + -0x20) = puVar7;
    FUN_031896ac(lVar6,uVar3,*(undefined8 *)(unaff_x29 + -0x98),lVar8,unaff_x29 + -0x20,
                 unaff_x29 + -0x14);
    unaff_w26 = uVar9 | 2;
    if (*(char *)(unaff_x29 + -0x14) != '\0') goto LAB_03c3b5c0;
    memcpy(unaff_x23,unaff_x28,unaff_x21);
    lVar8 = *unaff_x27;
    lVar6 = *(long *)(lVar8 + 0x10);
    lVar5 = lVar6;
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_031c09d4(lVar6);
      lVar8 = *unaff_x27;
      lVar5 = *(long *)(lVar8 + 0x10);
    }
    uVar3 = *(undefined8 *)(lVar8 + 0x20);
    puVar7 = unaff_x23;
    lVar8 = *(long *)(unaff_x29 + -0x38);
    if (-1 < *(int *)(lVar5 + 0x28)) {
      puVar7 = (undefined8 *)*unaff_x23;
      lVar8 = unaff_x29 + -0x38;
    }
    *(undefined8 **)(unaff_x29 + -0x20) = puVar7;
    FUN_031896ac(lVar6,uVar3,*(undefined8 *)(unaff_x29 + -0xa0),lVar8,unaff_x29 + -0x20,
                 unaff_x29 + -0x14);
    if (*(char *)(unaff_x29 + -0x14) != '\0') goto LAB_03c3b5c0;
    pvVar2 = (void *)(*(code *)**(undefined8 **)(*unaff_x27 + 8))
                               (*(undefined8 *)(unaff_x29 + -0x40),unaff_w25 + 0xb);
    memcpy(unaff_x23,pvVar2,unaff_x21);
    memcpy(unaff_x28,pvVar2,unaff_x21);
    memmove(unaff_x24,pvVar2,unaff_x21);
    lVar8 = *unaff_x27;
    lVar6 = *(long *)(lVar8 + 0x10);
    lVar5 = lVar6;
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_031c09d4(lVar6);
      lVar8 = *unaff_x27;
      lVar5 = *(long *)(lVar8 + 0x10);
    }
    uVar4 = *(undefined8 *)(lVar8 + 0x20);
    puVar7 = unaff_x24;
    uVar3 = *(undefined8 *)(unaff_x29 + -0x28);
    if (-1 < *(int *)(lVar5 + 0x28)) {
      puVar7 = (undefined8 *)*unaff_x24;
      uVar3 = unaff_x22;
    }
    *(undefined8 **)(unaff_x29 + -0x20) = puVar7;
    FUN_031896ac(lVar6,uVar4,*(undefined8 *)(unaff_x29 + -0xa8),uVar3,unaff_x29 + -0x20,
                 unaff_x29 + -0x14);
    unaff_w26 = uVar9 | 3;
    if (*(char *)(unaff_x29 + -0x14) != '\0') goto LAB_03c3b5c0;
    memcpy(unaff_x23,unaff_x28,unaff_x21);
    lVar8 = *unaff_x27;
    lVar6 = *(long *)(lVar8 + 0x10);
    lVar5 = lVar6;
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_031c09d4(lVar6);
      lVar8 = *unaff_x27;
      lVar5 = *(long *)(lVar8 + 0x10);
    }
    uVar3 = *(undefined8 *)(lVar8 + 0x20);
    puVar7 = unaff_x23;
    lVar8 = *(long *)(unaff_x29 + -0x30);
    if (-1 < *(int *)(lVar5 + 0x28)) {
      puVar7 = (undefined8 *)*unaff_x23;
      lVar8 = unaff_x29 + -0x30;
    }
    *(undefined8 **)(unaff_x29 + -0x20) = puVar7;
    FUN_031896ac(lVar6,uVar3,*(undefined8 *)(unaff_x29 + -0xb0),lVar8,unaff_x29 + -0x20,
                 unaff_x29 + -0x14);
    if (*(char *)(unaff_x29 + -0x14) != '\0') goto LAB_03c3b5c0;
    memcpy(unaff_x23,unaff_x28,unaff_x21);
    lVar8 = *unaff_x27;
    lVar6 = *(long *)(lVar8 + 0x10);
    lVar5 = lVar6;
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_031c09d4(lVar6);
      lVar8 = *unaff_x27;
      lVar5 = *(long *)(lVar8 + 0x10);
    }
    uVar3 = *(undefined8 *)(lVar8 + 0x20);
    puVar7 = unaff_x23;
    lVar8 = *(long *)(unaff_x29 + -0x38);
    if (-1 < *(int *)(lVar5 + 0x28)) {
      puVar7 = (undefined8 *)*unaff_x23;
      lVar8 = unaff_x29 + -0x38;
    }
    *(undefined8 **)(unaff_x29 + -0x20) = puVar7;
    FUN_031896ac(lVar6,uVar3,*(undefined8 *)(unaff_x29 + -0xb8),lVar8,unaff_x29 + -0x20,
                 unaff_x29 + -0x14);
    if (*(char *)(unaff_x29 + -0x14) != '\0') {
      unaff_w26 = unaff_w25 + 0xb;
      goto LAB_03c3b5c0;
    }
    pvVar2 = (void *)(*(code *)**(undefined8 **)(*unaff_x27 + 8))
                               (*(undefined8 *)(unaff_x29 + -0x40),unaff_w25 + 0xc);
    memcpy(unaff_x23,pvVar2,unaff_x21);
    memcpy(unaff_x28,pvVar2,unaff_x21);
    memmove(unaff_x24,pvVar2,unaff_x21);
    lVar8 = *unaff_x27;
    lVar6 = *(long *)(lVar8 + 0x10);
    lVar5 = lVar6;
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_031c09d4(lVar6);
      lVar8 = *unaff_x27;
      lVar5 = *(long *)(lVar8 + 0x10);
    }
    uVar4 = *(undefined8 *)(lVar8 + 0x20);
    puVar7 = unaff_x24;
    uVar3 = *(undefined8 *)(unaff_x29 + -0x28);
    if (-1 < *(int *)(lVar5 + 0x28)) {
      puVar7 = (undefined8 *)*unaff_x24;
      uVar3 = unaff_x22;
    }
    *(undefined8 **)(unaff_x29 + -0x20) = puVar7;
    FUN_031896ac(lVar6,uVar4,*(undefined8 *)(unaff_x29 + -0xc0),uVar3,unaff_x29 + -0x20,
                 unaff_x29 + -0x14);
    unaff_w26 = uVar9 | 4;
    if (*(char *)(unaff_x29 + -0x14) != '\0') goto LAB_03c3b5c0;
    memcpy(unaff_x23,unaff_x28,unaff_x21);
    lVar8 = *unaff_x27;
    lVar6 = *(long *)(lVar8 + 0x10);
    lVar5 = lVar6;
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_031c09d4(lVar6);
      lVar8 = *unaff_x27;
      lVar5 = *(long *)(lVar8 + 0x10);
    }
    uVar3 = *(undefined8 *)(lVar8 + 0x20);
    puVar7 = unaff_x23;
    lVar8 = *(long *)(unaff_x29 + -0x30);
    if (-1 < *(int *)(lVar5 + 0x28)) {
      puVar7 = (undefined8 *)*unaff_x23;
      lVar8 = unaff_x29 + -0x30;
    }
    *(undefined8 **)(unaff_x29 + -0x20) = puVar7;
    FUN_031896ac(lVar6,uVar3,*(undefined8 *)(unaff_x29 + -200),lVar8,unaff_x29 + -0x20,
                 unaff_x29 + -0x14);
    if (*(char *)(unaff_x29 + -0x14) != '\0') goto LAB_03c3b5c0;
    memcpy(unaff_x23,unaff_x28,unaff_x21);
    lVar8 = *unaff_x27;
    lVar6 = *(long *)(lVar8 + 0x10);
    lVar5 = lVar6;
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_031c09d4(lVar6);
      lVar8 = *unaff_x27;
      lVar5 = *(long *)(lVar8 + 0x10);
    }
    uVar3 = *(undefined8 *)(lVar8 + 0x20);
    puVar7 = unaff_x23;
    lVar8 = *(long *)(unaff_x29 + -0x38);
    if (-1 < *(int *)(lVar5 + 0x28)) {
      puVar7 = (undefined8 *)*unaff_x23;
      lVar8 = unaff_x29 + -0x38;
    }
    *(undefined8 **)(unaff_x29 + -0x20) = puVar7;
    FUN_031896ac(lVar6,uVar3,*(undefined8 *)(unaff_x29 + -0xd0),lVar8,unaff_x29 + -0x20,
                 unaff_x29 + -0x14);
    if (*(char *)(unaff_x29 + -0x14) != '\0') {
      unaff_w26 = unaff_w25 + 0xc;
      goto LAB_03c3b5c0;
    }
    pvVar2 = (void *)(*(code *)**(undefined8 **)(*unaff_x27 + 8))
                               (*(undefined8 *)(unaff_x29 + -0x40),unaff_w25 + 0xd);
    memcpy(unaff_x23,pvVar2,unaff_x21);
    memcpy(unaff_x28,pvVar2,unaff_x21);
    memmove(unaff_x24,pvVar2,unaff_x21);
    lVar8 = *unaff_x27;
    lVar6 = *(long *)(lVar8 + 0x10);
    lVar5 = lVar6;
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_031c09d4(lVar6);
      lVar8 = *unaff_x27;
      lVar5 = *(long *)(lVar8 + 0x10);
    }
    uVar4 = *(undefined8 *)(lVar8 + 0x20);
    puVar7 = unaff_x24;
    uVar3 = *(undefined8 *)(unaff_x29 + -0x28);
    if (-1 < *(int *)(lVar5 + 0x28)) {
      puVar7 = (undefined8 *)*unaff_x24;
      uVar3 = unaff_x22;
    }
    *(undefined8 **)(unaff_x29 + -0x20) = puVar7;
    FUN_031896ac(lVar6,uVar4,*(undefined8 *)(unaff_x29 + -0xd8),uVar3,unaff_x29 + -0x20,
                 unaff_x29 + -0x14);
    if (*(char *)(unaff_x29 + -0x14) != '\0') {
      unaff_w26 = unaff_w25 + 0xd;
      goto LAB_03c3b5c0;
    }
    memcpy(unaff_x23,unaff_x28,unaff_x21);
    lVar8 = *unaff_x27;
    lVar6 = *(long *)(lVar8 + 0x10);
    lVar5 = lVar6;
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_031c09d4(lVar6);
      lVar8 = *unaff_x27;
      lVar5 = *(long *)(lVar8 + 0x10);
    }
    uVar3 = *(undefined8 *)(lVar8 + 0x20);
    puVar7 = unaff_x23;
    lVar8 = *(long *)(unaff_x29 + -0x30);
    if (-1 < *(int *)(lVar5 + 0x28)) {
      puVar7 = (undefined8 *)*unaff_x23;
      lVar8 = unaff_x29 + -0x30;
    }
    unaff_w26 = uVar9 | 5;
    *(undefined8 **)(unaff_x29 + -0x20) = puVar7;
    FUN_031896ac(lVar6,uVar3,*(undefined8 *)(unaff_x29 + -0xe0),lVar8,unaff_x29 + -0x20,
                 unaff_x29 + -0x14);
    if (*(char *)(unaff_x29 + -0x14) != '\0') goto LAB_03c3b5c0;
    memcpy(unaff_x23,unaff_x28,unaff_x21);
    unaff_w25 = uVar9;
  }
  if (3 < unaff_w19) {
    pvVar2 = (void *)(*(code *)**(undefined8 **)(*unaff_x27 + 8))
                               (*(undefined8 *)(unaff_x29 + -0x40),uVar9);
    memcpy(unaff_x23,pvVar2,unaff_x21);
    memcpy(unaff_x28,pvVar2,unaff_x21);
    memmove(unaff_x24,pvVar2,unaff_x21);
    lVar8 = *unaff_x27;
    lVar6 = *(long *)(lVar8 + 0x10);
    lVar5 = lVar6;
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_031c09d4(lVar6);
      lVar8 = *unaff_x27;
      lVar5 = *(long *)(lVar8 + 0x10);
    }
    uVar3 = *(undefined8 *)(lVar8 + 0x20);
    puVar7 = unaff_x24;
    lVar8 = *(long *)(unaff_x29 + -0x28);
    if (-1 < *(int *)(lVar5 + 0x28)) {
      puVar7 = (undefined8 *)*unaff_x24;
      lVar8 = unaff_x29 + -0x28;
    }
    *(undefined8 **)(unaff_x29 + -0x20) = puVar7;
    FUN_031896ac(lVar6,uVar3,*(undefined8 *)(unaff_x29 + -0x120),lVar8,unaff_x29 + -0x20,
                 unaff_x29 + -0x14);
    if (*(char *)(unaff_x29 + -0x14) != '\0') goto LAB_03c3b5c0;
    memcpy(unaff_x23,unaff_x28,unaff_x21);
    lVar8 = *unaff_x27;
    lVar6 = *(long *)(lVar8 + 0x10);
    lVar5 = lVar6;
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_031c09d4(lVar6);
      lVar8 = *unaff_x27;
      lVar5 = *(long *)(lVar8 + 0x10);
    }
    uVar3 = *(undefined8 *)(lVar8 + 0x20);
    puVar7 = unaff_x23;
    lVar8 = *(long *)(unaff_x29 + -0x30);
    if (-1 < *(int *)(lVar5 + 0x28)) {
      puVar7 = (undefined8 *)*unaff_x23;
      lVar8 = unaff_x29 + -0x30;
    }
    *(undefined8 **)(unaff_x29 + -0x20) = puVar7;
    FUN_031896ac(lVar6,uVar3,*(undefined8 *)(unaff_x29 + -0x128),lVar8,unaff_x29 + -0x20,
                 unaff_x29 + -0x14);
    if (*(char *)(unaff_x29 + -0x14) != '\0') goto LAB_03c3b5c0;
    memcpy(unaff_x23,unaff_x28,unaff_x21);
    lVar8 = *unaff_x27;
    lVar6 = *(long *)(lVar8 + 0x10);
    lVar5 = lVar6;
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_031c09d4(lVar6);
      lVar8 = *unaff_x27;
      lVar5 = *(long *)(lVar8 + 0x10);
    }
    uVar3 = *(undefined8 *)(lVar8 + 0x20);
    puVar7 = unaff_x23;
    lVar8 = *(long *)(unaff_x29 + -0x38);
    if (-1 < *(int *)(lVar5 + 0x28)) {
      puVar7 = (undefined8 *)*unaff_x23;
      lVar8 = unaff_x29 + -0x38;
    }
    *(undefined8 **)(unaff_x29 + -0x20) = puVar7;
    FUN_031896ac(lVar6,uVar3,*(undefined8 *)(unaff_x29 + -0x130),lVar8,unaff_x29 + -0x20,
                 unaff_x29 + -0x14);
    if (*(char *)(unaff_x29 + -0x14) != '\0') goto LAB_03c3b5c0;
    unaff_w26 = uVar9 | 1;
    pvVar2 = (void *)(*(code *)**(undefined8 **)(*unaff_x27 + 8))
                               (*(undefined8 *)(unaff_x29 + -0x40),unaff_w26);
    memcpy(unaff_x23,pvVar2,unaff_x21);
    memcpy(unaff_x28,pvVar2,unaff_x21);
    memmove(unaff_x24,pvVar2,unaff_x21);
    lVar8 = *unaff_x27;
    lVar6 = *(long *)(lVar8 + 0x10);
    lVar5 = lVar6;
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_031c09d4(lVar6);
      lVar8 = *unaff_x27;
      lVar5 = *(long *)(lVar8 + 0x10);
    }
    uVar3 = *(undefined8 *)(lVar8 + 0x20);
    puVar7 = unaff_x24;
    lVar8 = *(long *)(unaff_x29 + -0x28);
    if (-1 < *(int *)(lVar5 + 0x28)) {
      puVar7 = (undefined8 *)*unaff_x24;
      lVar8 = unaff_x29 + -0x28;
    }
    *(undefined8 **)(unaff_x29 + -0x20) = puVar7;
    FUN_031896ac(lVar6,uVar3,*(undefined8 *)(unaff_x29 + -0x138),lVar8,unaff_x29 + -0x20,
                 unaff_x29 + -0x14);
    if (*(char *)(unaff_x29 + -0x14) != '\0') goto LAB_03c3b5c0;
    memcpy(unaff_x23,unaff_x28,unaff_x21);
    lVar8 = *unaff_x27;
    lVar6 = *(long *)(lVar8 + 0x10);
    lVar5 = lVar6;
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_031c09d4(lVar6);
      lVar8 = *unaff_x27;
      lVar5 = *(long *)(lVar8 + 0x10);
    }
    uVar3 = *(undefined8 *)(lVar8 + 0x20);
    puVar7 = unaff_x23;
    lVar8 = *(long *)(unaff_x29 + -0x30);
    if (-1 < *(int *)(lVar5 + 0x28)) {
      puVar7 = (undefined8 *)*unaff_x23;
      lVar8 = unaff_x29 + -0x30;
    }
    *(undefined8 **)(unaff_x29 + -0x20) = puVar7;
    FUN_031896ac(lVar6,uVar3,*(undefined8 *)(unaff_x29 + -0x140),lVar8,unaff_x29 + -0x20,
                 unaff_x29 + -0x14);
    if (*(char *)(unaff_x29 + -0x14) != '\0') goto LAB_03c3b5c0;
    memcpy(unaff_x23,unaff_x28,unaff_x21);
    lVar8 = *unaff_x27;
    lVar6 = *(long *)(lVar8 + 0x10);
    lVar5 = lVar6;
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_031c09d4(lVar6);
      lVar8 = *unaff_x27;
      lVar5 = *(long *)(lVar8 + 0x10);
    }
    uVar3 = *(undefined8 *)(lVar8 + 0x20);
    puVar7 = unaff_x23;
    lVar8 = *(long *)(unaff_x29 + -0x38);
    if (-1 < *(int *)(lVar5 + 0x28)) {
      puVar7 = (undefined8 *)*unaff_x23;
      lVar8 = unaff_x29 + -0x38;
    }
    *(undefined8 **)(unaff_x29 + -0x20) = puVar7;
    FUN_031896ac(lVar6,uVar3,*(undefined8 *)(unaff_x29 + -0x148),lVar8,unaff_x29 + -0x20,
                 unaff_x29 + -0x14);
    if (*(char *)(unaff_x29 + -0x14) != '\0') goto LAB_03c3b5c0;
    unaff_w26 = uVar9 | 2;
    pvVar2 = (void *)(*(code *)**(undefined8 **)(*unaff_x27 + 8))
                               (*(undefined8 *)(unaff_x29 + -0x40),unaff_w26);
    memcpy(unaff_x23,pvVar2,unaff_x21);
    memcpy(unaff_x28,pvVar2,unaff_x21);
    memmove(unaff_x24,pvVar2,unaff_x21);
    lVar8 = *unaff_x27;
    lVar6 = *(long *)(lVar8 + 0x10);
    lVar5 = lVar6;
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_031c09d4(lVar6);
      lVar8 = *unaff_x27;
      lVar5 = *(long *)(lVar8 + 0x10);
    }
    uVar3 = *(undefined8 *)(lVar8 + 0x20);
    puVar7 = unaff_x24;
    lVar8 = *(long *)(unaff_x29 + -0x28);
    if (-1 < *(int *)(lVar5 + 0x28)) {
      puVar7 = (undefined8 *)*unaff_x24;
      lVar8 = unaff_x29 + -0x28;
    }
    *(undefined8 **)(unaff_x29 + -0x20) = puVar7;
    FUN_031896ac(lVar6,uVar3,*(undefined8 *)(unaff_x29 + -0x150),lVar8,unaff_x29 + -0x20,
                 unaff_x29 + -0x14);
    if (*(char *)(unaff_x29 + -0x14) != '\0') goto LAB_03c3b5c0;
    memcpy(unaff_x23,unaff_x28,unaff_x21);
    lVar8 = *unaff_x27;
    lVar6 = *(long *)(lVar8 + 0x10);
    lVar5 = lVar6;
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_031c09d4(lVar6);
      lVar8 = *unaff_x27;
      lVar5 = *(long *)(lVar8 + 0x10);
    }
    uVar3 = *(undefined8 *)(lVar8 + 0x20);
    puVar7 = unaff_x23;
    lVar8 = *(long *)(unaff_x29 + -0x30);
    if (-1 < *(int *)(lVar5 + 0x28)) {
      puVar7 = (undefined8 *)*unaff_x23;
      lVar8 = unaff_x29 + -0x30;
    }
    *(undefined8 **)(unaff_x29 + -0x20) = puVar7;
    FUN_031896ac(lVar6,uVar3,*(undefined8 *)(unaff_x29 + -0x158),lVar8,unaff_x29 + -0x20,
                 unaff_x29 + -0x14);
    if (*(char *)(unaff_x29 + -0x14) != '\0') goto LAB_03c3b5c0;
    *(long *)(unaff_x29 + -0x60) = unaff_x20;
    memcpy(unaff_x23,unaff_x28,unaff_x21);
    lVar8 = *unaff_x27;
    lVar6 = *(long *)(lVar8 + 0x10);
    lVar5 = lVar6;
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_031c09d4(lVar6);
      lVar8 = *unaff_x27;
      lVar5 = *(long *)(lVar8 + 0x10);
    }
    uVar3 = *(undefined8 *)(lVar8 + 0x20);
    puVar7 = unaff_x23;
    lVar8 = *(long *)(unaff_x29 + -0x38);
    if (-1 < *(int *)(lVar5 + 0x28)) {
      puVar7 = (undefined8 *)*unaff_x23;
      lVar8 = unaff_x29 + -0x38;
    }
    *(undefined8 **)(unaff_x29 + -0x20) = puVar7;
    FUN_031896ac(lVar6,uVar3,*(undefined8 *)(unaff_x29 + -0x160),lVar8,unaff_x29 + -0x20,
                 unaff_x29 + -0x14);
    unaff_x20 = *(long *)(unaff_x29 + -0x60);
    if (*(char *)(unaff_x29 + -0x14) != '\0') goto LAB_03c3b5c0;
    unaff_w26 = uVar9 | 3;
    pvVar2 = (void *)(*(code *)**(undefined8 **)(*unaff_x27 + 8))
                               (*(undefined8 *)(unaff_x29 + -0x40),unaff_w26);
    memcpy(unaff_x23,pvVar2,unaff_x21);
    memcpy(unaff_x28,pvVar2,unaff_x21);
    memmove(unaff_x24,pvVar2,unaff_x21);
    lVar8 = *unaff_x27;
    lVar6 = *(long *)(lVar8 + 0x10);
    lVar5 = lVar6;
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_031c09d4(lVar6);
      lVar8 = *unaff_x27;
      lVar5 = *(long *)(lVar8 + 0x10);
    }
    uVar3 = *(undefined8 *)(lVar8 + 0x20);
    puVar7 = unaff_x24;
    lVar8 = *(long *)(unaff_x29 + -0x28);
    if (-1 < *(int *)(lVar5 + 0x28)) {
      puVar7 = (undefined8 *)*unaff_x24;
      lVar8 = unaff_x29 + -0x28;
    }
    *(undefined8 **)(unaff_x29 + -0x20) = puVar7;
    FUN_031896ac(lVar6,uVar3,*(undefined8 *)(unaff_x29 + -0x168),lVar8,unaff_x29 + -0x20,
                 unaff_x29 + -0x14);
    if (*(char *)(unaff_x29 + -0x14) != '\0') goto LAB_03c3b4cc;
    memcpy(unaff_x23,unaff_x28,unaff_x21);
    lVar8 = *unaff_x27;
    lVar6 = *(long *)(lVar8 + 0x10);
    lVar5 = lVar6;
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_031c09d4(lVar6);
      lVar8 = *unaff_x27;
      lVar5 = *(long *)(lVar8 + 0x10);
    }
    uVar3 = *(undefined8 *)(lVar8 + 0x20);
    puVar7 = unaff_x23;
    lVar8 = *(long *)(unaff_x29 + -0x30);
    if (-1 < *(int *)(lVar5 + 0x28)) {
      puVar7 = (undefined8 *)*unaff_x23;
      lVar8 = unaff_x29 + -0x30;
    }
    *(undefined8 **)(unaff_x29 + -0x20) = puVar7;
    FUN_031896ac(lVar6,uVar3,*(undefined8 *)(unaff_x29 + -0x170),lVar8,unaff_x29 + -0x20,
                 unaff_x29 + -0x14);
    if (*(char *)(unaff_x29 + -0x14) != '\0') goto LAB_03c3b4cc;
    memcpy(unaff_x23,unaff_x28,unaff_x21);
    lVar8 = *unaff_x27;
    lVar6 = *(long *)(lVar8 + 0x10);
    lVar5 = lVar6;
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_031c09d4(lVar6);
      lVar8 = *unaff_x27;
      lVar5 = *(long *)(lVar8 + 0x10);
    }
    uVar3 = *(undefined8 *)(lVar8 + 0x20);
    puVar7 = unaff_x23;
    lVar8 = *(long *)(unaff_x29 + -0x38);
    if (-1 < *(int *)(lVar5 + 0x28)) {
      puVar7 = (undefined8 *)*unaff_x23;
      lVar8 = unaff_x29 + -0x38;
    }
    *(undefined8 **)(unaff_x29 + -0x20) = puVar7;
    FUN_031896ac(lVar6,uVar3,*(undefined8 *)(unaff_x29 + -0x178),lVar8,unaff_x29 + -0x20,
                 unaff_x29 + -0x14);
    unaff_x20 = *(long *)(unaff_x29 + -0x60);
    if (*(char *)(unaff_x29 + -0x14) != '\0') goto LAB_03c3b5c0;
    uVar9 = uVar9 | 4;
  }
  if ((int)uVar9 < (int)uVar1) {
    *(long *)(unaff_x29 + -0x60) = unaff_x20;
    unaff_w26 = uVar9;
    goto LAB_03c3b210;
  }
  unaff_w26 = 0xffffffff;
LAB_03c3b5c0:
  if (*(long *)(unaff_x20 + 0x28) == *(long *)(unaff_x29 + -0x10)) {
    return unaff_w26;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
  while( true ) {
    memcpy(unaff_x23,unaff_x28,unaff_x21);
    lVar8 = *unaff_x27;
    lVar6 = *(long *)(lVar8 + 0x10);
    lVar5 = lVar6;
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_031c09d4(lVar6);
      lVar8 = *unaff_x27;
      lVar5 = *(long *)(lVar8 + 0x10);
    }
    uVar3 = *(undefined8 *)(lVar8 + 0x20);
    puVar7 = unaff_x23;
    lVar8 = *(long *)(unaff_x29 + -0x30);
    if (-1 < *(int *)(lVar5 + 0x28)) {
      puVar7 = (undefined8 *)*unaff_x23;
      lVar8 = unaff_x29 + -0x30;
    }
    *(undefined8 **)(unaff_x29 + -0x20) = puVar7;
    FUN_031896ac(lVar6,uVar3,*(undefined8 *)(unaff_x29 + -0x50),lVar8,unaff_x29 + -0x20,
                 unaff_x29 + -0x14);
    if (*(char *)(unaff_x29 + -0x14) != '\0') goto LAB_03c3b4cc;
    memcpy(unaff_x23,unaff_x28,unaff_x21);
    lVar8 = *unaff_x27;
    lVar6 = *(long *)(lVar8 + 0x10);
    lVar5 = lVar6;
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_031c09d4(lVar6);
      lVar8 = *unaff_x27;
      lVar5 = *(long *)(lVar8 + 0x10);
    }
    uVar3 = *(undefined8 *)(lVar8 + 0x20);
    puVar7 = unaff_x23;
    lVar8 = *(long *)(unaff_x29 + -0x38);
    if (-1 < *(int *)(lVar5 + 0x28)) {
      puVar7 = (undefined8 *)*unaff_x23;
      lVar8 = unaff_x29 + -0x38;
    }
    *(undefined8 **)(unaff_x29 + -0x20) = puVar7;
    FUN_031896ac(lVar6,uVar3,*(undefined8 *)(unaff_x29 + -0x58),lVar8,unaff_x29 + -0x20,
                 unaff_x29 + -0x14);
    if (*(char *)(unaff_x29 + -0x14) != '\0') goto LAB_03c3b4cc;
    unaff_w26 = unaff_w26 + 1;
    if (uVar1 == unaff_w26) break;
LAB_03c3b210:
    pvVar2 = (void *)(*(code *)**(undefined8 **)(*unaff_x27 + 8))
                               (*(undefined8 *)(unaff_x29 + -0x40),unaff_w26);
    memcpy(unaff_x23,pvVar2,unaff_x21);
    memcpy(unaff_x28,pvVar2,unaff_x21);
    memmove(unaff_x24,pvVar2,unaff_x21);
    lVar8 = *unaff_x27;
    lVar6 = *(long *)(lVar8 + 0x10);
    lVar5 = lVar6;
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_031c09d4(lVar6);
      lVar8 = *unaff_x27;
      lVar5 = *(long *)(lVar8 + 0x10);
    }
    uVar3 = *(undefined8 *)(lVar8 + 0x20);
    puVar7 = unaff_x24;
    lVar8 = *(long *)(unaff_x29 + -0x28);
    if (-1 < *(int *)(lVar5 + 0x28)) {
      puVar7 = (undefined8 *)*unaff_x24;
      lVar8 = unaff_x29 + -0x28;
    }
    *(undefined8 **)(unaff_x29 + -0x20) = puVar7;
    FUN_031896ac(lVar6,uVar3,*(undefined8 *)(unaff_x29 + -0x48),lVar8,unaff_x29 + -0x20,
                 unaff_x29 + -0x14);
    if (*(char *)(unaff_x29 + -0x14) != '\0') goto LAB_03c3b4cc;
  }
  unaff_w26 = 0xffffffff;
LAB_03c3b4cc:
  unaff_x20 = *(long *)(unaff_x29 + -0x60);
  goto LAB_03c3b5c0;
}


