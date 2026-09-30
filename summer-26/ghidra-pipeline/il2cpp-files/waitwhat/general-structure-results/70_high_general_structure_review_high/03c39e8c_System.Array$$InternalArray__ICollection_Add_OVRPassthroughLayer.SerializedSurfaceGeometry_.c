/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<OVRPassthroughLayer.SerializedSurfaceGeometry>
ENTRY_POINT: 03c39e8c
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


uint System_Array__InternalArray__ICollection_Add<OVRPassthroughLayer_SerializedSurfaceGeometry>
               (long param_1,long param_2)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  long unaff_x20;
  size_t unaff_x21;
  undefined8 *__dest;
  undefined8 *__dest_00;
  uint uVar11;
  uint unaff_w26;
  uint uVar12;
  long *unaff_x27;
  void *__s;
  long unaff_x29;
  
  uVar1 = *(ushort *)(param_1 + 0x135);
  lVar9 = (long)&stack0x00000000 - ((ulong)(*(int *)(param_2 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0xf8) = lVar9;
  lVar2 = param_1;
  if ((uVar1 & 1) == 0) {
    param_1 = FUN_031c09d4(param_1);
    uVar1 = *(ushort *)(*(long *)(*unaff_x27 + 0x10) + 0x135);
    lVar2 = *(long *)(*unaff_x27 + 0x10);
  }
  lVar9 = lVar9 - ((ulong)(*(int *)(param_1 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x100) = lVar9;
  lVar3 = lVar2;
  if ((uVar1 & 1) == 0) {
    lVar2 = FUN_031c09d4(lVar2);
    uVar1 = *(ushort *)(*(long *)(*unaff_x27 + 0x10) + 0x135);
    lVar3 = *(long *)(*unaff_x27 + 0x10);
  }
  lVar9 = lVar9 - ((ulong)(*(int *)(lVar2 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x108) = lVar9;
  lVar2 = lVar3;
  if ((uVar1 & 1) == 0) {
    lVar3 = FUN_031c09d4(lVar3);
    uVar1 = *(ushort *)(*(long *)(*unaff_x27 + 0x10) + 0x135);
    lVar2 = *(long *)(*unaff_x27 + 0x10);
  }
  lVar9 = lVar9 - ((ulong)(*(int *)(lVar3 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x110) = lVar9;
  lVar3 = lVar2;
  if ((uVar1 & 1) == 0) {
    lVar2 = FUN_031c09d4(lVar2);
    uVar1 = *(ushort *)(*(long *)(*unaff_x27 + 0x10) + 0x135);
    lVar3 = *(long *)(*unaff_x27 + 0x10);
  }
  lVar9 = lVar9 - ((ulong)(*(int *)(lVar2 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x118) = lVar9;
  lVar2 = lVar3;
  if ((uVar1 & 1) == 0) {
    lVar3 = FUN_031c09d4(lVar3);
    uVar1 = *(ushort *)(*(long *)(*unaff_x27 + 0x10) + 0x135);
    lVar2 = *(long *)(*unaff_x27 + 0x10);
  }
  lVar9 = lVar9 - ((ulong)(*(int *)(lVar3 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x120) = lVar9;
  lVar3 = lVar2;
  if ((uVar1 & 1) == 0) {
    lVar2 = FUN_031c09d4(lVar2);
    uVar1 = *(ushort *)(*(long *)(*unaff_x27 + 0x10) + 0x135);
    lVar3 = *(long *)(*unaff_x27 + 0x10);
  }
  lVar9 = lVar9 - ((ulong)(*(int *)(lVar2 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x128) = lVar9;
  lVar2 = lVar3;
  if ((uVar1 & 1) == 0) {
    lVar3 = FUN_031c09d4(lVar3);
    uVar1 = *(ushort *)(*(long *)(*unaff_x27 + 0x10) + 0x135);
    lVar2 = *(long *)(*unaff_x27 + 0x10);
  }
  lVar9 = lVar9 - ((ulong)(*(int *)(lVar3 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x130) = lVar9;
  lVar3 = lVar2;
  if ((uVar1 & 1) == 0) {
    lVar2 = FUN_031c09d4(lVar2);
    uVar1 = *(ushort *)(*(long *)(*unaff_x27 + 0x10) + 0x135);
    lVar3 = *(long *)(*unaff_x27 + 0x10);
  }
  lVar9 = lVar9 - ((ulong)(*(int *)(lVar2 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x138) = lVar9;
  lVar2 = lVar3;
  if ((uVar1 & 1) == 0) {
    lVar3 = FUN_031c09d4(lVar3);
    uVar1 = *(ushort *)(*(long *)(*unaff_x27 + 0x10) + 0x135);
    lVar2 = *(long *)(*unaff_x27 + 0x10);
  }
  lVar9 = lVar9 - ((ulong)(*(int *)(lVar3 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x140) = lVar9;
  lVar3 = lVar2;
  if ((uVar1 & 1) == 0) {
    lVar2 = FUN_031c09d4(lVar2);
    uVar1 = *(ushort *)(*(long *)(*unaff_x27 + 0x10) + 0x135);
    lVar3 = *(long *)(*unaff_x27 + 0x10);
  }
  lVar9 = lVar9 - ((ulong)(*(int *)(lVar2 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x148) = lVar9;
  lVar2 = lVar3;
  if ((uVar1 & 1) == 0) {
    lVar3 = FUN_031c09d4(lVar3);
    uVar1 = *(ushort *)(*(long *)(*unaff_x27 + 0x10) + 0x135);
    lVar2 = *(long *)(*unaff_x27 + 0x10);
  }
  lVar9 = lVar9 - ((ulong)(*(int *)(lVar3 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x150) = lVar9;
  lVar3 = lVar2;
  if ((uVar1 & 1) == 0) {
    lVar2 = FUN_031c09d4(lVar2);
    uVar1 = *(ushort *)(*(long *)(*unaff_x27 + 0x10) + 0x135);
    lVar3 = *(long *)(*unaff_x27 + 0x10);
  }
  lVar9 = lVar9 - ((ulong)(*(int *)(lVar2 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x158) = lVar9;
  lVar2 = lVar3;
  if ((uVar1 & 1) == 0) {
    lVar3 = FUN_031c09d4(lVar3);
    uVar1 = *(ushort *)(*(long *)(*unaff_x27 + 0x10) + 0x135);
    lVar2 = *(long *)(*unaff_x27 + 0x10);
  }
  lVar9 = lVar9 - ((ulong)(*(int *)(lVar3 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x160) = lVar9;
  lVar3 = lVar2;
  if ((uVar1 & 1) == 0) {
    lVar2 = FUN_031c09d4(lVar2);
    uVar1 = *(ushort *)(*(long *)(*unaff_x27 + 0x10) + 0x135);
    lVar3 = *(long *)(*unaff_x27 + 0x10);
  }
  lVar9 = lVar9 - ((ulong)(*(int *)(lVar2 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x168) = lVar9;
  lVar2 = lVar3;
  if ((uVar1 & 1) == 0) {
    lVar3 = FUN_031c09d4(lVar3);
    uVar1 = *(ushort *)(*(long *)(*unaff_x27 + 0x10) + 0x135);
    lVar2 = *(long *)(*unaff_x27 + 0x10);
  }
  lVar9 = lVar9 - ((ulong)(*(int *)(lVar3 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x170) = lVar9;
  lVar3 = lVar2;
  if ((uVar1 & 1) == 0) {
    lVar2 = FUN_031c09d4(lVar2);
    uVar1 = *(ushort *)(*(long *)(*unaff_x27 + 0x10) + 0x135);
    lVar3 = *(long *)(*unaff_x27 + 0x10);
  }
  lVar9 = lVar9 - ((ulong)(*(int *)(lVar2 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x178) = lVar9;
  lVar2 = lVar3;
  if ((uVar1 & 1) == 0) {
    lVar3 = FUN_031c09d4(lVar3);
    uVar1 = *(ushort *)(*(long *)(*unaff_x27 + 0x10) + 0x135);
    lVar2 = *(long *)(*unaff_x27 + 0x10);
  }
  lVar9 = lVar9 - ((ulong)(*(int *)(lVar3 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x48) = lVar9;
  lVar3 = lVar2;
  if ((uVar1 & 1) == 0) {
    lVar2 = FUN_031c09d4(lVar2);
    uVar1 = *(ushort *)(*(long *)(*unaff_x27 + 0x10) + 0x135);
    lVar3 = *(long *)(*unaff_x27 + 0x10);
  }
  lVar9 = lVar9 - ((ulong)(*(int *)(lVar2 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x50) = lVar9;
  if ((uVar1 & 1) == 0) {
    lVar3 = FUN_031c09d4(lVar3);
  }
  lVar9 = lVar9 - ((ulong)(*(int *)(lVar3 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x58) = lVar9;
  uVar7 = unaff_x21 + 0xf & 0x1fffffff0;
  __dest = (undefined8 *)(lVar9 - uVar7);
  __dest_00 = (undefined8 *)((long)__dest - uVar7);
  __s = (void *)((long)__dest_00 - uVar7);
  memset(__s,0,unaff_x21);
  uVar11 = 0;
  uVar10 = unaff_w26;
  if (7 < (int)unaff_w26) {
    uVar11 = 0;
    lVar2 = unaff_x29 + -0x28;
    *(uint *)(unaff_x29 + -0x17c) = unaff_w26;
    do {
      pvVar4 = (void *)(*(code *)**(undefined8 **)(*unaff_x27 + 8))
                                 (*(undefined8 *)(unaff_x29 + -0x40),uVar11);
      memcpy(__dest,pvVar4,unaff_x21);
      memcpy(__s,pvVar4,unaff_x21);
      memmove(__dest_00,pvVar4,unaff_x21);
      lVar8 = *unaff_x27;
      lVar3 = *(long *)(lVar8 + 0x10);
      lVar9 = lVar3;
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_031c09d4(lVar3);
        lVar8 = *unaff_x27;
        lVar9 = *(long *)(lVar8 + 0x10);
      }
      uVar5 = *(undefined8 *)(lVar8 + 0x20);
      puVar6 = __dest_00;
      lVar8 = *(long *)(unaff_x29 + -0x28);
      if (-1 < *(int *)(lVar9 + 0x28)) {
        puVar6 = (undefined8 *)*__dest_00;
        lVar8 = lVar2;
      }
      *(undefined8 **)(unaff_x29 + -0x20) = puVar6;
      FUN_031896ac(lVar3,uVar5,*(undefined8 *)(unaff_x29 + -0x60),lVar8,unaff_x29 + -0x20,
                   unaff_x29 + -0x14);
      uVar12 = uVar11;
      if (*(char *)(unaff_x29 + -0x14) != '\0') goto LAB_03c3b5c0;
      memcpy(__dest,__s,unaff_x21);
      lVar8 = *unaff_x27;
      lVar3 = *(long *)(lVar8 + 0x10);
      lVar9 = lVar3;
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_031c09d4(lVar3);
        lVar8 = *unaff_x27;
        lVar9 = *(long *)(lVar8 + 0x10);
      }
      uVar5 = *(undefined8 *)(lVar8 + 0x20);
      puVar6 = __dest;
      lVar8 = *(long *)(unaff_x29 + -0x30);
      if (-1 < *(int *)(lVar9 + 0x28)) {
        puVar6 = (undefined8 *)*__dest;
        lVar8 = unaff_x29 + -0x30;
      }
      *(undefined8 **)(unaff_x29 + -0x20) = puVar6;
      FUN_031896ac(lVar3,uVar5,*(undefined8 *)(unaff_x29 + -0x68),lVar8,unaff_x29 + -0x20,
                   unaff_x29 + -0x14);
      if (*(char *)(unaff_x29 + -0x14) != '\0') goto LAB_03c3b5c0;
      memcpy(__dest,__s,unaff_x21);
      lVar8 = *unaff_x27;
      lVar3 = *(long *)(lVar8 + 0x10);
      lVar9 = lVar3;
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_031c09d4(lVar3);
        lVar8 = *unaff_x27;
        lVar9 = *(long *)(lVar8 + 0x10);
      }
      uVar5 = *(undefined8 *)(lVar8 + 0x20);
      puVar6 = __dest;
      lVar8 = *(long *)(unaff_x29 + -0x38);
      if (-1 < *(int *)(lVar9 + 0x28)) {
        puVar6 = (undefined8 *)*__dest;
        lVar8 = unaff_x29 + -0x38;
      }
      *(undefined8 **)(unaff_x29 + -0x20) = puVar6;
      FUN_031896ac(lVar3,uVar5,*(undefined8 *)(unaff_x29 + -0x70),lVar8,unaff_x29 + -0x20,
                   unaff_x29 + -0x14);
      if (*(char *)(unaff_x29 + -0x14) != '\0') goto LAB_03c3b5c0;
      pvVar4 = (void *)(*(code *)**(undefined8 **)(*unaff_x27 + 8))
                                 (*(undefined8 *)(unaff_x29 + -0x40),uVar11 + 1);
      memcpy(__dest,pvVar4,unaff_x21);
      memcpy(__s,pvVar4,unaff_x21);
      memmove(__dest_00,pvVar4,unaff_x21);
      lVar8 = *unaff_x27;
      lVar3 = *(long *)(lVar8 + 0x10);
      lVar9 = lVar3;
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_031c09d4(lVar3);
        lVar8 = *unaff_x27;
        lVar9 = *(long *)(lVar8 + 0x10);
      }
      uVar5 = *(undefined8 *)(lVar8 + 0x20);
      puVar6 = __dest_00;
      lVar8 = *(long *)(unaff_x29 + -0x28);
      if (-1 < *(int *)(lVar9 + 0x28)) {
        puVar6 = (undefined8 *)*__dest_00;
        lVar8 = lVar2;
      }
      *(undefined8 **)(unaff_x29 + -0x20) = puVar6;
      FUN_031896ac(lVar3,uVar5,*(undefined8 *)(unaff_x29 + -0x78),lVar8,unaff_x29 + -0x20,
                   unaff_x29 + -0x14);
      uVar12 = uVar11 | 1;
      if (*(char *)(unaff_x29 + -0x14) != '\0') goto LAB_03c3b5c0;
      memcpy(__dest,__s,unaff_x21);
      lVar8 = *unaff_x27;
      lVar3 = *(long *)(lVar8 + 0x10);
      lVar9 = lVar3;
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_031c09d4(lVar3);
        lVar8 = *unaff_x27;
        lVar9 = *(long *)(lVar8 + 0x10);
      }
      uVar5 = *(undefined8 *)(lVar8 + 0x20);
      puVar6 = __dest;
      lVar8 = *(long *)(unaff_x29 + -0x30);
      if (-1 < *(int *)(lVar9 + 0x28)) {
        puVar6 = (undefined8 *)*__dest;
        lVar8 = unaff_x29 + -0x30;
      }
      *(undefined8 **)(unaff_x29 + -0x20) = puVar6;
      FUN_031896ac(lVar3,uVar5,*(undefined8 *)(unaff_x29 + -0x80),lVar8,unaff_x29 + -0x20,
                   unaff_x29 + -0x14);
      if (*(char *)(unaff_x29 + -0x14) != '\0') goto LAB_03c3b5c0;
      memcpy(__dest,__s,unaff_x21);
      lVar8 = *unaff_x27;
      lVar3 = *(long *)(lVar8 + 0x10);
      lVar9 = lVar3;
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_031c09d4(lVar3);
        lVar8 = *unaff_x27;
        lVar9 = *(long *)(lVar8 + 0x10);
      }
      uVar5 = *(undefined8 *)(lVar8 + 0x20);
      puVar6 = __dest;
      lVar8 = *(long *)(unaff_x29 + -0x38);
      if (-1 < *(int *)(lVar9 + 0x28)) {
        puVar6 = (undefined8 *)*__dest;
        lVar8 = unaff_x29 + -0x38;
      }
      *(undefined8 **)(unaff_x29 + -0x20) = puVar6;
      FUN_031896ac(lVar3,uVar5,*(undefined8 *)(unaff_x29 + -0x88),lVar8,unaff_x29 + -0x20,
                   unaff_x29 + -0x14);
      if (*(char *)(unaff_x29 + -0x14) != '\0') {
        uVar12 = uVar11 + 1;
        goto LAB_03c3b5c0;
      }
      pvVar4 = (void *)(*(code *)**(undefined8 **)(*unaff_x27 + 8))
                                 (*(undefined8 *)(unaff_x29 + -0x40),uVar11 + 2);
      memcpy(__dest,pvVar4,unaff_x21);
      memcpy(__s,pvVar4,unaff_x21);
      memmove(__dest_00,pvVar4,unaff_x21);
      lVar8 = *unaff_x27;
      lVar3 = *(long *)(lVar8 + 0x10);
      lVar9 = lVar3;
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_031c09d4(lVar3);
        lVar8 = *unaff_x27;
        lVar9 = *(long *)(lVar8 + 0x10);
      }
      uVar5 = *(undefined8 *)(lVar8 + 0x20);
      puVar6 = __dest_00;
      lVar8 = *(long *)(unaff_x29 + -0x28);
      if (-1 < *(int *)(lVar9 + 0x28)) {
        puVar6 = (undefined8 *)*__dest_00;
        lVar8 = lVar2;
      }
      *(undefined8 **)(unaff_x29 + -0x20) = puVar6;
      FUN_031896ac(lVar3,uVar5,*(undefined8 *)(unaff_x29 + -0x90),lVar8,unaff_x29 + -0x20,
                   unaff_x29 + -0x14);
      if (*(char *)(unaff_x29 + -0x14) != '\0') {
        uVar12 = uVar11 + 2;
        goto LAB_03c3b5c0;
      }
      memcpy(__dest,__s,unaff_x21);
      lVar8 = *unaff_x27;
      lVar3 = *(long *)(lVar8 + 0x10);
      lVar9 = lVar3;
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_031c09d4(lVar3);
        lVar8 = *unaff_x27;
        lVar9 = *(long *)(lVar8 + 0x10);
      }
      uVar5 = *(undefined8 *)(lVar8 + 0x20);
      puVar6 = __dest;
      lVar8 = *(long *)(unaff_x29 + -0x30);
      if (-1 < *(int *)(lVar9 + 0x28)) {
        puVar6 = (undefined8 *)*__dest;
        lVar8 = unaff_x29 + -0x30;
      }
      *(undefined8 **)(unaff_x29 + -0x20) = puVar6;
      FUN_031896ac(lVar3,uVar5,*(undefined8 *)(unaff_x29 + -0x98),lVar8,unaff_x29 + -0x20,
                   unaff_x29 + -0x14);
      uVar12 = uVar11 | 2;
      if (*(char *)(unaff_x29 + -0x14) != '\0') goto LAB_03c3b5c0;
      memcpy(__dest,__s,unaff_x21);
      lVar8 = *unaff_x27;
      lVar3 = *(long *)(lVar8 + 0x10);
      lVar9 = lVar3;
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_031c09d4(lVar3);
        lVar8 = *unaff_x27;
        lVar9 = *(long *)(lVar8 + 0x10);
      }
      uVar5 = *(undefined8 *)(lVar8 + 0x20);
      puVar6 = __dest;
      lVar8 = *(long *)(unaff_x29 + -0x38);
      if (-1 < *(int *)(lVar9 + 0x28)) {
        puVar6 = (undefined8 *)*__dest;
        lVar8 = unaff_x29 + -0x38;
      }
      *(undefined8 **)(unaff_x29 + -0x20) = puVar6;
      FUN_031896ac(lVar3,uVar5,*(undefined8 *)(unaff_x29 + -0xa0),lVar8,unaff_x29 + -0x20,
                   unaff_x29 + -0x14);
      if (*(char *)(unaff_x29 + -0x14) != '\0') goto LAB_03c3b5c0;
      pvVar4 = (void *)(*(code *)**(undefined8 **)(*unaff_x27 + 8))
                                 (*(undefined8 *)(unaff_x29 + -0x40),uVar11 + 3);
      memcpy(__dest,pvVar4,unaff_x21);
      memcpy(__s,pvVar4,unaff_x21);
      memmove(__dest_00,pvVar4,unaff_x21);
      lVar8 = *unaff_x27;
      lVar3 = *(long *)(lVar8 + 0x10);
      lVar9 = lVar3;
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_031c09d4(lVar3);
        lVar8 = *unaff_x27;
        lVar9 = *(long *)(lVar8 + 0x10);
      }
      uVar5 = *(undefined8 *)(lVar8 + 0x20);
      puVar6 = __dest_00;
      lVar8 = *(long *)(unaff_x29 + -0x28);
      if (-1 < *(int *)(lVar9 + 0x28)) {
        puVar6 = (undefined8 *)*__dest_00;
        lVar8 = lVar2;
      }
      *(undefined8 **)(unaff_x29 + -0x20) = puVar6;
      FUN_031896ac(lVar3,uVar5,*(undefined8 *)(unaff_x29 + -0xa8),lVar8,unaff_x29 + -0x20,
                   unaff_x29 + -0x14);
      uVar12 = uVar11 | 3;
      if (*(char *)(unaff_x29 + -0x14) != '\0') goto LAB_03c3b5c0;
      memcpy(__dest,__s,unaff_x21);
      lVar8 = *unaff_x27;
      lVar3 = *(long *)(lVar8 + 0x10);
      lVar9 = lVar3;
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_031c09d4(lVar3);
        lVar8 = *unaff_x27;
        lVar9 = *(long *)(lVar8 + 0x10);
      }
      uVar5 = *(undefined8 *)(lVar8 + 0x20);
      puVar6 = __dest;
      lVar8 = *(long *)(unaff_x29 + -0x30);
      if (-1 < *(int *)(lVar9 + 0x28)) {
        puVar6 = (undefined8 *)*__dest;
        lVar8 = unaff_x29 + -0x30;
      }
      *(undefined8 **)(unaff_x29 + -0x20) = puVar6;
      FUN_031896ac(lVar3,uVar5,*(undefined8 *)(unaff_x29 + -0xb0),lVar8,unaff_x29 + -0x20,
                   unaff_x29 + -0x14);
      if (*(char *)(unaff_x29 + -0x14) != '\0') goto LAB_03c3b5c0;
      memcpy(__dest,__s,unaff_x21);
      lVar8 = *unaff_x27;
      lVar3 = *(long *)(lVar8 + 0x10);
      lVar9 = lVar3;
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_031c09d4(lVar3);
        lVar8 = *unaff_x27;
        lVar9 = *(long *)(lVar8 + 0x10);
      }
      uVar5 = *(undefined8 *)(lVar8 + 0x20);
      puVar6 = __dest;
      lVar8 = *(long *)(unaff_x29 + -0x38);
      if (-1 < *(int *)(lVar9 + 0x28)) {
        puVar6 = (undefined8 *)*__dest;
        lVar8 = unaff_x29 + -0x38;
      }
      *(undefined8 **)(unaff_x29 + -0x20) = puVar6;
      FUN_031896ac(lVar3,uVar5,*(undefined8 *)(unaff_x29 + -0xb8),lVar8,unaff_x29 + -0x20,
                   unaff_x29 + -0x14);
      if (*(char *)(unaff_x29 + -0x14) != '\0') {
        uVar12 = uVar11 + 3;
        goto LAB_03c3b5c0;
      }
      pvVar4 = (void *)(*(code *)**(undefined8 **)(*unaff_x27 + 8))
                                 (*(undefined8 *)(unaff_x29 + -0x40),uVar11 + 4);
      memcpy(__dest,pvVar4,unaff_x21);
      memcpy(__s,pvVar4,unaff_x21);
      memmove(__dest_00,pvVar4,unaff_x21);
      lVar8 = *unaff_x27;
      lVar3 = *(long *)(lVar8 + 0x10);
      lVar9 = lVar3;
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_031c09d4(lVar3);
        lVar8 = *unaff_x27;
        lVar9 = *(long *)(lVar8 + 0x10);
      }
      uVar5 = *(undefined8 *)(lVar8 + 0x20);
      puVar6 = __dest_00;
      lVar8 = *(long *)(unaff_x29 + -0x28);
      if (-1 < *(int *)(lVar9 + 0x28)) {
        puVar6 = (undefined8 *)*__dest_00;
        lVar8 = lVar2;
      }
      *(undefined8 **)(unaff_x29 + -0x20) = puVar6;
      FUN_031896ac(lVar3,uVar5,*(undefined8 *)(unaff_x29 + -0xc0),lVar8,unaff_x29 + -0x20,
                   unaff_x29 + -0x14);
      uVar12 = uVar11 | 4;
      if (*(char *)(unaff_x29 + -0x14) != '\0') goto LAB_03c3b5c0;
      memcpy(__dest,__s,unaff_x21);
      lVar8 = *unaff_x27;
      lVar3 = *(long *)(lVar8 + 0x10);
      lVar9 = lVar3;
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_031c09d4(lVar3);
        lVar8 = *unaff_x27;
        lVar9 = *(long *)(lVar8 + 0x10);
      }
      uVar5 = *(undefined8 *)(lVar8 + 0x20);
      puVar6 = __dest;
      lVar8 = *(long *)(unaff_x29 + -0x30);
      if (-1 < *(int *)(lVar9 + 0x28)) {
        puVar6 = (undefined8 *)*__dest;
        lVar8 = unaff_x29 + -0x30;
      }
      *(undefined8 **)(unaff_x29 + -0x20) = puVar6;
      FUN_031896ac(lVar3,uVar5,*(undefined8 *)(unaff_x29 + -200),lVar8,unaff_x29 + -0x20,
                   unaff_x29 + -0x14);
      if (*(char *)(unaff_x29 + -0x14) != '\0') goto LAB_03c3b5c0;
      memcpy(__dest,__s,unaff_x21);
      lVar8 = *unaff_x27;
      lVar3 = *(long *)(lVar8 + 0x10);
      lVar9 = lVar3;
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_031c09d4(lVar3);
        lVar8 = *unaff_x27;
        lVar9 = *(long *)(lVar8 + 0x10);
      }
      uVar5 = *(undefined8 *)(lVar8 + 0x20);
      puVar6 = __dest;
      lVar8 = *(long *)(unaff_x29 + -0x38);
      if (-1 < *(int *)(lVar9 + 0x28)) {
        puVar6 = (undefined8 *)*__dest;
        lVar8 = unaff_x29 + -0x38;
      }
      *(undefined8 **)(unaff_x29 + -0x20) = puVar6;
      FUN_031896ac(lVar3,uVar5,*(undefined8 *)(unaff_x29 + -0xd0),lVar8,unaff_x29 + -0x20,
                   unaff_x29 + -0x14);
      if (*(char *)(unaff_x29 + -0x14) != '\0') {
        uVar12 = uVar11 + 4;
        goto LAB_03c3b5c0;
      }
      pvVar4 = (void *)(*(code *)**(undefined8 **)(*unaff_x27 + 8))
                                 (*(undefined8 *)(unaff_x29 + -0x40),uVar11 + 5);
      memcpy(__dest,pvVar4,unaff_x21);
      memcpy(__s,pvVar4,unaff_x21);
      memmove(__dest_00,pvVar4,unaff_x21);
      lVar8 = *unaff_x27;
      lVar3 = *(long *)(lVar8 + 0x10);
      lVar9 = lVar3;
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_031c09d4(lVar3);
        lVar8 = *unaff_x27;
        lVar9 = *(long *)(lVar8 + 0x10);
      }
      uVar5 = *(undefined8 *)(lVar8 + 0x20);
      puVar6 = __dest_00;
      lVar8 = *(long *)(unaff_x29 + -0x28);
      if (-1 < *(int *)(lVar9 + 0x28)) {
        puVar6 = (undefined8 *)*__dest_00;
        lVar8 = lVar2;
      }
      *(undefined8 **)(unaff_x29 + -0x20) = puVar6;
      FUN_031896ac(lVar3,uVar5,*(undefined8 *)(unaff_x29 + -0xd8),lVar8,unaff_x29 + -0x20,
                   unaff_x29 + -0x14);
      if (*(char *)(unaff_x29 + -0x14) != '\0') {
        uVar12 = uVar11 + 5;
        goto LAB_03c3b5c0;
      }
      memcpy(__dest,__s,unaff_x21);
      lVar8 = *unaff_x27;
      lVar3 = *(long *)(lVar8 + 0x10);
      lVar9 = lVar3;
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_031c09d4(lVar3);
        lVar8 = *unaff_x27;
        lVar9 = *(long *)(lVar8 + 0x10);
      }
      uVar5 = *(undefined8 *)(lVar8 + 0x20);
      puVar6 = __dest;
      lVar8 = *(long *)(unaff_x29 + -0x30);
      if (-1 < *(int *)(lVar9 + 0x28)) {
        puVar6 = (undefined8 *)*__dest;
        lVar8 = unaff_x29 + -0x30;
      }
      *(undefined8 **)(unaff_x29 + -0x20) = puVar6;
      FUN_031896ac(lVar3,uVar5,*(undefined8 *)(unaff_x29 + -0xe0),lVar8,unaff_x29 + -0x20,
                   unaff_x29 + -0x14);
      uVar12 = uVar11 | 5;
      if (*(char *)(unaff_x29 + -0x14) != '\0') goto LAB_03c3b5c0;
      memcpy(__dest,__s,unaff_x21);
      lVar8 = *unaff_x27;
      lVar3 = *(long *)(lVar8 + 0x10);
      lVar9 = lVar3;
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_031c09d4(lVar3);
        lVar8 = *unaff_x27;
        lVar9 = *(long *)(lVar8 + 0x10);
      }
      uVar5 = *(undefined8 *)(lVar8 + 0x20);
      puVar6 = __dest;
      lVar8 = *(long *)(unaff_x29 + -0x38);
      if (-1 < *(int *)(lVar9 + 0x28)) {
        puVar6 = (undefined8 *)*__dest;
        lVar8 = unaff_x29 + -0x38;
      }
      *(undefined8 **)(unaff_x29 + -0x20) = puVar6;
      FUN_031896ac(lVar3,uVar5,*(undefined8 *)(unaff_x29 + -0xe8),lVar8,unaff_x29 + -0x20,
                   unaff_x29 + -0x14);
      if (*(char *)(unaff_x29 + -0x14) != '\0') goto LAB_03c3b5c0;
      pvVar4 = (void *)(*(code *)**(undefined8 **)(*unaff_x27 + 8))
                                 (*(undefined8 *)(unaff_x29 + -0x40),uVar11 + 6);
      memcpy(__dest,pvVar4,unaff_x21);
      memcpy(__s,pvVar4,unaff_x21);
      memmove(__dest_00,pvVar4,unaff_x21);
      lVar8 = *unaff_x27;
      lVar3 = *(long *)(lVar8 + 0x10);
      lVar9 = lVar3;
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_031c09d4(lVar3);
        lVar8 = *unaff_x27;
        lVar9 = *(long *)(lVar8 + 0x10);
      }
      uVar5 = *(undefined8 *)(lVar8 + 0x20);
      puVar6 = __dest_00;
      lVar8 = *(long *)(unaff_x29 + -0x28);
      if (-1 < *(int *)(lVar9 + 0x28)) {
        puVar6 = (undefined8 *)*__dest_00;
        lVar8 = lVar2;
      }
      *(undefined8 **)(unaff_x29 + -0x20) = puVar6;
      FUN_031896ac(lVar3,uVar5,*(undefined8 *)(unaff_x29 + -0xf0),lVar8,unaff_x29 + -0x20,
                   unaff_x29 + -0x14);
      uVar12 = uVar11 | 6;
      if (*(char *)(unaff_x29 + -0x14) != '\0') goto LAB_03c3b5c0;
      memcpy(__dest,__s,unaff_x21);
      lVar8 = *unaff_x27;
      lVar3 = *(long *)(lVar8 + 0x10);
      lVar9 = lVar3;
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_031c09d4(lVar3);
        lVar8 = *unaff_x27;
        lVar9 = *(long *)(lVar8 + 0x10);
      }
      uVar5 = *(undefined8 *)(lVar8 + 0x20);
      puVar6 = __dest;
      lVar8 = *(long *)(unaff_x29 + -0x30);
      if (-1 < *(int *)(lVar9 + 0x28)) {
        puVar6 = (undefined8 *)*__dest;
        lVar8 = unaff_x29 + -0x30;
      }
      *(undefined8 **)(unaff_x29 + -0x20) = puVar6;
      FUN_031896ac(lVar3,uVar5,*(undefined8 *)(unaff_x29 + -0xf8),lVar8,unaff_x29 + -0x20,
                   unaff_x29 + -0x14);
      if (*(char *)(unaff_x29 + -0x14) != '\0') goto LAB_03c3b5c0;
      memcpy(__dest,__s,unaff_x21);
      lVar8 = *unaff_x27;
      lVar3 = *(long *)(lVar8 + 0x10);
      lVar9 = lVar3;
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_031c09d4(lVar3);
        lVar8 = *unaff_x27;
        lVar9 = *(long *)(lVar8 + 0x10);
      }
      uVar5 = *(undefined8 *)(lVar8 + 0x20);
      puVar6 = __dest;
      lVar8 = *(long *)(unaff_x29 + -0x38);
      if (-1 < *(int *)(lVar9 + 0x28)) {
        puVar6 = (undefined8 *)*__dest;
        lVar8 = unaff_x29 + -0x38;
      }
      *(undefined8 **)(unaff_x29 + -0x20) = puVar6;
      FUN_031896ac(lVar3,uVar5,*(undefined8 *)(unaff_x29 + -0x100),lVar8,unaff_x29 + -0x20,
                   unaff_x29 + -0x14);
      if (*(char *)(unaff_x29 + -0x14) != '\0') {
        uVar12 = uVar11 + 6;
        goto LAB_03c3b5c0;
      }
      pvVar4 = (void *)(*(code *)**(undefined8 **)(*unaff_x27 + 8))
                                 (*(undefined8 *)(unaff_x29 + -0x40),uVar11 + 7);
      memcpy(__dest,pvVar4,unaff_x21);
      memcpy(__s,pvVar4,unaff_x21);
      memmove(__dest_00,pvVar4,unaff_x21);
      lVar8 = *unaff_x27;
      lVar3 = *(long *)(lVar8 + 0x10);
      lVar9 = lVar3;
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_031c09d4(lVar3);
        lVar8 = *unaff_x27;
        lVar9 = *(long *)(lVar8 + 0x10);
      }
      uVar5 = *(undefined8 *)(lVar8 + 0x20);
      puVar6 = __dest_00;
      lVar8 = *(long *)(unaff_x29 + -0x28);
      if (-1 < *(int *)(lVar9 + 0x28)) {
        puVar6 = (undefined8 *)*__dest_00;
        lVar8 = lVar2;
      }
      *(undefined8 **)(unaff_x29 + -0x20) = puVar6;
      FUN_031896ac(lVar3,uVar5,*(undefined8 *)(unaff_x29 + -0x108),lVar8,unaff_x29 + -0x20,
                   unaff_x29 + -0x14);
      if (*(char *)(unaff_x29 + -0x14) != '\0') {
        uVar12 = uVar11 + 7;
        goto LAB_03c3b5c0;
      }
      memcpy(__dest,__s,unaff_x21);
      lVar8 = *unaff_x27;
      lVar3 = *(long *)(lVar8 + 0x10);
      lVar9 = lVar3;
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_031c09d4(lVar3);
        lVar8 = *unaff_x27;
        lVar9 = *(long *)(lVar8 + 0x10);
      }
      uVar5 = *(undefined8 *)(lVar8 + 0x20);
      puVar6 = __dest;
      lVar8 = *(long *)(unaff_x29 + -0x30);
      if (-1 < *(int *)(lVar9 + 0x28)) {
        puVar6 = (undefined8 *)*__dest;
        lVar8 = unaff_x29 + -0x30;
      }
      *(undefined8 **)(unaff_x29 + -0x20) = puVar6;
      FUN_031896ac(lVar3,uVar5,*(undefined8 *)(unaff_x29 + -0x110),lVar8,unaff_x29 + -0x20,
                   unaff_x29 + -0x14);
      uVar12 = uVar11 | 7;
      if (*(char *)(unaff_x29 + -0x14) != '\0') goto LAB_03c3b5c0;
      memcpy(__dest,__s,unaff_x21);
      lVar8 = *unaff_x27;
      lVar3 = *(long *)(lVar8 + 0x10);
      lVar9 = lVar3;
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_031c09d4(lVar3);
        lVar8 = *unaff_x27;
        lVar9 = *(long *)(lVar8 + 0x10);
      }
      uVar5 = *(undefined8 *)(lVar8 + 0x20);
      puVar6 = __dest;
      lVar8 = *(long *)(unaff_x29 + -0x38);
      if (-1 < *(int *)(lVar9 + 0x28)) {
        puVar6 = (undefined8 *)*__dest;
        lVar8 = unaff_x29 + -0x38;
      }
      *(undefined8 **)(unaff_x29 + -0x20) = puVar6;
      FUN_031896ac(lVar3,uVar5,*(undefined8 *)(unaff_x29 + -0x118),lVar8,unaff_x29 + -0x20,
                   unaff_x29 + -0x14);
      if (*(char *)(unaff_x29 + -0x14) != '\0') goto LAB_03c3b5c0;
      uVar10 = uVar10 - 8;
      uVar11 = uVar11 + 8;
      unaff_w26 = *(uint *)(unaff_x29 + -0x17c);
    } while (7 < (int)uVar10);
  }
  if ((int)uVar10 < 4) {
LAB_03c3b1fc:
    if ((int)unaff_w26 <= (int)uVar11) {
      uVar12 = 0xffffffff;
      goto LAB_03c3b5c0;
    }
    *(long *)(unaff_x29 + -0x60) = unaff_x20;
    do {
      pvVar4 = (void *)(*(code *)**(undefined8 **)(*unaff_x27 + 8))
                                 (*(undefined8 *)(unaff_x29 + -0x40),uVar11);
      memcpy(__dest,pvVar4,unaff_x21);
      memcpy(__s,pvVar4,unaff_x21);
      memmove(__dest_00,pvVar4,unaff_x21);
      lVar3 = *unaff_x27;
      lVar9 = *(long *)(lVar3 + 0x10);
      lVar2 = lVar9;
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_031c09d4(lVar9);
        lVar3 = *unaff_x27;
        lVar2 = *(long *)(lVar3 + 0x10);
      }
      uVar5 = *(undefined8 *)(lVar3 + 0x20);
      puVar6 = __dest_00;
      lVar3 = *(long *)(unaff_x29 + -0x28);
      if (-1 < *(int *)(lVar2 + 0x28)) {
        puVar6 = (undefined8 *)*__dest_00;
        lVar3 = unaff_x29 + -0x28;
      }
      *(undefined8 **)(unaff_x29 + -0x20) = puVar6;
      FUN_031896ac(lVar9,uVar5,*(undefined8 *)(unaff_x29 + -0x48),lVar3,unaff_x29 + -0x20,
                   unaff_x29 + -0x14);
      uVar12 = uVar11;
      if (*(char *)(unaff_x29 + -0x14) != '\0') goto LAB_03c3b4cc;
      memcpy(__dest,__s,unaff_x21);
      lVar3 = *unaff_x27;
      lVar9 = *(long *)(lVar3 + 0x10);
      lVar2 = lVar9;
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_031c09d4(lVar9);
        lVar3 = *unaff_x27;
        lVar2 = *(long *)(lVar3 + 0x10);
      }
      uVar5 = *(undefined8 *)(lVar3 + 0x20);
      puVar6 = __dest;
      lVar3 = *(long *)(unaff_x29 + -0x30);
      if (-1 < *(int *)(lVar2 + 0x28)) {
        puVar6 = (undefined8 *)*__dest;
        lVar3 = unaff_x29 + -0x30;
      }
      *(undefined8 **)(unaff_x29 + -0x20) = puVar6;
      FUN_031896ac(lVar9,uVar5,*(undefined8 *)(unaff_x29 + -0x50),lVar3,unaff_x29 + -0x20,
                   unaff_x29 + -0x14);
      if (*(char *)(unaff_x29 + -0x14) != '\0') goto LAB_03c3b4cc;
      memcpy(__dest,__s,unaff_x21);
      lVar3 = *unaff_x27;
      lVar9 = *(long *)(lVar3 + 0x10);
      lVar2 = lVar9;
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_031c09d4(lVar9);
        lVar3 = *unaff_x27;
        lVar2 = *(long *)(lVar3 + 0x10);
      }
      uVar5 = *(undefined8 *)(lVar3 + 0x20);
      puVar6 = __dest;
      lVar3 = *(long *)(unaff_x29 + -0x38);
      if (-1 < *(int *)(lVar2 + 0x28)) {
        puVar6 = (undefined8 *)*__dest;
        lVar3 = unaff_x29 + -0x38;
      }
      *(undefined8 **)(unaff_x29 + -0x20) = puVar6;
      FUN_031896ac(lVar9,uVar5,*(undefined8 *)(unaff_x29 + -0x58),lVar3,unaff_x29 + -0x20,
                   unaff_x29 + -0x14);
      if (*(char *)(unaff_x29 + -0x14) != '\0') goto LAB_03c3b4cc;
      uVar11 = uVar11 + 1;
    } while (unaff_w26 != uVar11);
    uVar12 = 0xffffffff;
  }
  else {
    pvVar4 = (void *)(*(code *)**(undefined8 **)(*unaff_x27 + 8))
                               (*(undefined8 *)(unaff_x29 + -0x40),uVar11);
    memcpy(__dest,pvVar4,unaff_x21);
    memcpy(__s,pvVar4,unaff_x21);
    memmove(__dest_00,pvVar4,unaff_x21);
    lVar3 = *unaff_x27;
    lVar9 = *(long *)(lVar3 + 0x10);
    lVar2 = lVar9;
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_031c09d4(lVar9);
      lVar3 = *unaff_x27;
      lVar2 = *(long *)(lVar3 + 0x10);
    }
    uVar5 = *(undefined8 *)(lVar3 + 0x20);
    puVar6 = __dest_00;
    lVar3 = *(long *)(unaff_x29 + -0x28);
    if (-1 < *(int *)(lVar2 + 0x28)) {
      puVar6 = (undefined8 *)*__dest_00;
      lVar3 = unaff_x29 + -0x28;
    }
    *(undefined8 **)(unaff_x29 + -0x20) = puVar6;
    FUN_031896ac(lVar9,uVar5,*(undefined8 *)(unaff_x29 + -0x120),lVar3,unaff_x29 + -0x20,
                 unaff_x29 + -0x14);
    uVar12 = uVar11;
    if (*(char *)(unaff_x29 + -0x14) != '\0') goto LAB_03c3b5c0;
    memcpy(__dest,__s,unaff_x21);
    lVar3 = *unaff_x27;
    lVar9 = *(long *)(lVar3 + 0x10);
    lVar2 = lVar9;
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_031c09d4(lVar9);
      lVar3 = *unaff_x27;
      lVar2 = *(long *)(lVar3 + 0x10);
    }
    uVar5 = *(undefined8 *)(lVar3 + 0x20);
    puVar6 = __dest;
    lVar3 = *(long *)(unaff_x29 + -0x30);
    if (-1 < *(int *)(lVar2 + 0x28)) {
      puVar6 = (undefined8 *)*__dest;
      lVar3 = unaff_x29 + -0x30;
    }
    *(undefined8 **)(unaff_x29 + -0x20) = puVar6;
    FUN_031896ac(lVar9,uVar5,*(undefined8 *)(unaff_x29 + -0x128),lVar3,unaff_x29 + -0x20,
                 unaff_x29 + -0x14);
    if (*(char *)(unaff_x29 + -0x14) != '\0') goto LAB_03c3b5c0;
    memcpy(__dest,__s,unaff_x21);
    lVar3 = *unaff_x27;
    lVar9 = *(long *)(lVar3 + 0x10);
    lVar2 = lVar9;
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_031c09d4(lVar9);
      lVar3 = *unaff_x27;
      lVar2 = *(long *)(lVar3 + 0x10);
    }
    uVar5 = *(undefined8 *)(lVar3 + 0x20);
    puVar6 = __dest;
    lVar3 = *(long *)(unaff_x29 + -0x38);
    if (-1 < *(int *)(lVar2 + 0x28)) {
      puVar6 = (undefined8 *)*__dest;
      lVar3 = unaff_x29 + -0x38;
    }
    *(undefined8 **)(unaff_x29 + -0x20) = puVar6;
    FUN_031896ac(lVar9,uVar5,*(undefined8 *)(unaff_x29 + -0x130),lVar3,unaff_x29 + -0x20,
                 unaff_x29 + -0x14);
    if (*(char *)(unaff_x29 + -0x14) != '\0') goto LAB_03c3b5c0;
    uVar12 = uVar11 | 1;
    pvVar4 = (void *)(*(code *)**(undefined8 **)(*unaff_x27 + 8))
                               (*(undefined8 *)(unaff_x29 + -0x40),uVar12);
    memcpy(__dest,pvVar4,unaff_x21);
    memcpy(__s,pvVar4,unaff_x21);
    memmove(__dest_00,pvVar4,unaff_x21);
    lVar3 = *unaff_x27;
    lVar9 = *(long *)(lVar3 + 0x10);
    lVar2 = lVar9;
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_031c09d4(lVar9);
      lVar3 = *unaff_x27;
      lVar2 = *(long *)(lVar3 + 0x10);
    }
    uVar5 = *(undefined8 *)(lVar3 + 0x20);
    puVar6 = __dest_00;
    lVar3 = *(long *)(unaff_x29 + -0x28);
    if (-1 < *(int *)(lVar2 + 0x28)) {
      puVar6 = (undefined8 *)*__dest_00;
      lVar3 = unaff_x29 + -0x28;
    }
    *(undefined8 **)(unaff_x29 + -0x20) = puVar6;
    FUN_031896ac(lVar9,uVar5,*(undefined8 *)(unaff_x29 + -0x138),lVar3,unaff_x29 + -0x20,
                 unaff_x29 + -0x14);
    if (*(char *)(unaff_x29 + -0x14) != '\0') goto LAB_03c3b5c0;
    memcpy(__dest,__s,unaff_x21);
    lVar3 = *unaff_x27;
    lVar9 = *(long *)(lVar3 + 0x10);
    lVar2 = lVar9;
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_031c09d4(lVar9);
      lVar3 = *unaff_x27;
      lVar2 = *(long *)(lVar3 + 0x10);
    }
    uVar5 = *(undefined8 *)(lVar3 + 0x20);
    puVar6 = __dest;
    lVar3 = *(long *)(unaff_x29 + -0x30);
    if (-1 < *(int *)(lVar2 + 0x28)) {
      puVar6 = (undefined8 *)*__dest;
      lVar3 = unaff_x29 + -0x30;
    }
    *(undefined8 **)(unaff_x29 + -0x20) = puVar6;
    FUN_031896ac(lVar9,uVar5,*(undefined8 *)(unaff_x29 + -0x140),lVar3,unaff_x29 + -0x20,
                 unaff_x29 + -0x14);
    if (*(char *)(unaff_x29 + -0x14) != '\0') goto LAB_03c3b5c0;
    memcpy(__dest,__s,unaff_x21);
    lVar3 = *unaff_x27;
    lVar9 = *(long *)(lVar3 + 0x10);
    lVar2 = lVar9;
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_031c09d4(lVar9);
      lVar3 = *unaff_x27;
      lVar2 = *(long *)(lVar3 + 0x10);
    }
    uVar5 = *(undefined8 *)(lVar3 + 0x20);
    puVar6 = __dest;
    lVar3 = *(long *)(unaff_x29 + -0x38);
    if (-1 < *(int *)(lVar2 + 0x28)) {
      puVar6 = (undefined8 *)*__dest;
      lVar3 = unaff_x29 + -0x38;
    }
    *(undefined8 **)(unaff_x29 + -0x20) = puVar6;
    FUN_031896ac(lVar9,uVar5,*(undefined8 *)(unaff_x29 + -0x148),lVar3,unaff_x29 + -0x20,
                 unaff_x29 + -0x14);
    if (*(char *)(unaff_x29 + -0x14) != '\0') goto LAB_03c3b5c0;
    uVar12 = uVar11 | 2;
    pvVar4 = (void *)(*(code *)**(undefined8 **)(*unaff_x27 + 8))
                               (*(undefined8 *)(unaff_x29 + -0x40),uVar12);
    memcpy(__dest,pvVar4,unaff_x21);
    memcpy(__s,pvVar4,unaff_x21);
    memmove(__dest_00,pvVar4,unaff_x21);
    lVar3 = *unaff_x27;
    lVar9 = *(long *)(lVar3 + 0x10);
    lVar2 = lVar9;
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_031c09d4(lVar9);
      lVar3 = *unaff_x27;
      lVar2 = *(long *)(lVar3 + 0x10);
    }
    uVar5 = *(undefined8 *)(lVar3 + 0x20);
    puVar6 = __dest_00;
    lVar3 = *(long *)(unaff_x29 + -0x28);
    if (-1 < *(int *)(lVar2 + 0x28)) {
      puVar6 = (undefined8 *)*__dest_00;
      lVar3 = unaff_x29 + -0x28;
    }
    *(undefined8 **)(unaff_x29 + -0x20) = puVar6;
    FUN_031896ac(lVar9,uVar5,*(undefined8 *)(unaff_x29 + -0x150),lVar3,unaff_x29 + -0x20,
                 unaff_x29 + -0x14);
    if (*(char *)(unaff_x29 + -0x14) != '\0') goto LAB_03c3b5c0;
    memcpy(__dest,__s,unaff_x21);
    lVar3 = *unaff_x27;
    lVar9 = *(long *)(lVar3 + 0x10);
    lVar2 = lVar9;
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_031c09d4(lVar9);
      lVar3 = *unaff_x27;
      lVar2 = *(long *)(lVar3 + 0x10);
    }
    uVar5 = *(undefined8 *)(lVar3 + 0x20);
    puVar6 = __dest;
    lVar3 = *(long *)(unaff_x29 + -0x30);
    if (-1 < *(int *)(lVar2 + 0x28)) {
      puVar6 = (undefined8 *)*__dest;
      lVar3 = unaff_x29 + -0x30;
    }
    *(undefined8 **)(unaff_x29 + -0x20) = puVar6;
    FUN_031896ac(lVar9,uVar5,*(undefined8 *)(unaff_x29 + -0x158),lVar3,unaff_x29 + -0x20,
                 unaff_x29 + -0x14);
    if (*(char *)(unaff_x29 + -0x14) != '\0') goto LAB_03c3b5c0;
    *(long *)(unaff_x29 + -0x60) = unaff_x20;
    memcpy(__dest,__s,unaff_x21);
    lVar3 = *unaff_x27;
    lVar9 = *(long *)(lVar3 + 0x10);
    lVar2 = lVar9;
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_031c09d4(lVar9);
      lVar3 = *unaff_x27;
      lVar2 = *(long *)(lVar3 + 0x10);
    }
    uVar5 = *(undefined8 *)(lVar3 + 0x20);
    puVar6 = __dest;
    lVar3 = *(long *)(unaff_x29 + -0x38);
    if (-1 < *(int *)(lVar2 + 0x28)) {
      puVar6 = (undefined8 *)*__dest;
      lVar3 = unaff_x29 + -0x38;
    }
    *(undefined8 **)(unaff_x29 + -0x20) = puVar6;
    FUN_031896ac(lVar9,uVar5,*(undefined8 *)(unaff_x29 + -0x160),lVar3,unaff_x29 + -0x20,
                 unaff_x29 + -0x14);
    unaff_x20 = *(long *)(unaff_x29 + -0x60);
    if (*(char *)(unaff_x29 + -0x14) != '\0') goto LAB_03c3b5c0;
    uVar12 = uVar11 | 3;
    pvVar4 = (void *)(*(code *)**(undefined8 **)(*unaff_x27 + 8))
                               (*(undefined8 *)(unaff_x29 + -0x40),uVar12);
    memcpy(__dest,pvVar4,unaff_x21);
    memcpy(__s,pvVar4,unaff_x21);
    memmove(__dest_00,pvVar4,unaff_x21);
    lVar3 = *unaff_x27;
    lVar9 = *(long *)(lVar3 + 0x10);
    lVar2 = lVar9;
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_031c09d4(lVar9);
      lVar3 = *unaff_x27;
      lVar2 = *(long *)(lVar3 + 0x10);
    }
    uVar5 = *(undefined8 *)(lVar3 + 0x20);
    puVar6 = __dest_00;
    lVar3 = *(long *)(unaff_x29 + -0x28);
    if (-1 < *(int *)(lVar2 + 0x28)) {
      puVar6 = (undefined8 *)*__dest_00;
      lVar3 = unaff_x29 + -0x28;
    }
    *(undefined8 **)(unaff_x29 + -0x20) = puVar6;
    FUN_031896ac(lVar9,uVar5,*(undefined8 *)(unaff_x29 + -0x168),lVar3,unaff_x29 + -0x20,
                 unaff_x29 + -0x14);
    if (*(char *)(unaff_x29 + -0x14) == '\0') {
      memcpy(__dest,__s,unaff_x21);
      lVar3 = *unaff_x27;
      lVar9 = *(long *)(lVar3 + 0x10);
      lVar2 = lVar9;
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_031c09d4(lVar9);
        lVar3 = *unaff_x27;
        lVar2 = *(long *)(lVar3 + 0x10);
      }
      uVar5 = *(undefined8 *)(lVar3 + 0x20);
      puVar6 = __dest;
      lVar3 = *(long *)(unaff_x29 + -0x30);
      if (-1 < *(int *)(lVar2 + 0x28)) {
        puVar6 = (undefined8 *)*__dest;
        lVar3 = unaff_x29 + -0x30;
      }
      *(undefined8 **)(unaff_x29 + -0x20) = puVar6;
      FUN_031896ac(lVar9,uVar5,*(undefined8 *)(unaff_x29 + -0x170),lVar3,unaff_x29 + -0x20,
                   unaff_x29 + -0x14);
      if (*(char *)(unaff_x29 + -0x14) == '\0') {
        memcpy(__dest,__s,unaff_x21);
        lVar3 = *unaff_x27;
        lVar9 = *(long *)(lVar3 + 0x10);
        lVar2 = lVar9;
        if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_031c09d4(lVar9);
          lVar3 = *unaff_x27;
          lVar2 = *(long *)(lVar3 + 0x10);
        }
        uVar5 = *(undefined8 *)(lVar3 + 0x20);
        puVar6 = __dest;
        lVar3 = *(long *)(unaff_x29 + -0x38);
        if (-1 < *(int *)(lVar2 + 0x28)) {
          puVar6 = (undefined8 *)*__dest;
          lVar3 = unaff_x29 + -0x38;
        }
        *(undefined8 **)(unaff_x29 + -0x20) = puVar6;
        FUN_031896ac(lVar9,uVar5,*(undefined8 *)(unaff_x29 + -0x178),lVar3,unaff_x29 + -0x20,
                     unaff_x29 + -0x14);
        unaff_x20 = *(long *)(unaff_x29 + -0x60);
        if (*(char *)(unaff_x29 + -0x14) != '\0') goto LAB_03c3b5c0;
        uVar11 = uVar11 | 4;
        goto LAB_03c3b1fc;
      }
    }
  }
LAB_03c3b4cc:
  unaff_x20 = *(long *)(unaff_x29 + -0x60);
LAB_03c3b5c0:
  if (*(long *)(unaff_x20 + 0x28) == *(long *)(unaff_x29 + -0x10)) {
    return uVar12;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


