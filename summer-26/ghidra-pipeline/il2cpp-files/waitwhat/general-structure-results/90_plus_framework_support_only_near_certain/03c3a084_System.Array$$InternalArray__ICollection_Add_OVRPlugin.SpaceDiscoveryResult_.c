/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 03c3a084
PROGRAM: waitwhat-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint System_Array__InternalArray__ICollection_Add<OVRPlugin_SpaceDiscoveryResult>
               (long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ushort in_w9;
  ulong uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  long unaff_x20;
  size_t unaff_x21;
  undefined8 *__dest;
  undefined8 *__dest_00;
  uint uVar10;
  uint unaff_w26;
  uint uVar11;
  long *unaff_x27;
  void *__s;
  long unaff_x29;
  
  lVar8 = (long)&stack0x00000000 - ((ulong)(*(int *)(param_2 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x130) = lVar8;
  lVar1 = param_1;
  if ((in_w9 & 1) == 0) {
    param_1 = FUN_031c09d4(param_1);
    in_w9 = *(ushort *)(*(long *)(*unaff_x27 + 0x10) + 0x135);
    lVar1 = *(long *)(*unaff_x27 + 0x10);
  }
  lVar8 = lVar8 - ((ulong)(*(int *)(param_1 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x138) = lVar8;
  lVar2 = lVar1;
  if ((in_w9 & 1) == 0) {
    lVar1 = FUN_031c09d4(lVar1);
    in_w9 = *(ushort *)(*(long *)(*unaff_x27 + 0x10) + 0x135);
    lVar2 = *(long *)(*unaff_x27 + 0x10);
  }
  lVar8 = lVar8 - ((ulong)(*(int *)(lVar1 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x140) = lVar8;
  lVar1 = lVar2;
  if ((in_w9 & 1) == 0) {
    lVar2 = FUN_031c09d4(lVar2);
    in_w9 = *(ushort *)(*(long *)(*unaff_x27 + 0x10) + 0x135);
    lVar1 = *(long *)(*unaff_x27 + 0x10);
  }
  lVar8 = lVar8 - ((ulong)(*(int *)(lVar2 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x148) = lVar8;
  lVar2 = lVar1;
  if ((in_w9 & 1) == 0) {
    lVar1 = FUN_031c09d4(lVar1);
    in_w9 = *(ushort *)(*(long *)(*unaff_x27 + 0x10) + 0x135);
    lVar2 = *(long *)(*unaff_x27 + 0x10);
  }
  lVar8 = lVar8 - ((ulong)(*(int *)(lVar1 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x150) = lVar8;
  lVar1 = lVar2;
  if ((in_w9 & 1) == 0) {
    lVar2 = FUN_031c09d4(lVar2);
    in_w9 = *(ushort *)(*(long *)(*unaff_x27 + 0x10) + 0x135);
    lVar1 = *(long *)(*unaff_x27 + 0x10);
  }
  lVar8 = lVar8 - ((ulong)(*(int *)(lVar2 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x158) = lVar8;
  lVar2 = lVar1;
  if ((in_w9 & 1) == 0) {
    lVar1 = FUN_031c09d4(lVar1);
    in_w9 = *(ushort *)(*(long *)(*unaff_x27 + 0x10) + 0x135);
    lVar2 = *(long *)(*unaff_x27 + 0x10);
  }
  lVar8 = lVar8 - ((ulong)(*(int *)(lVar1 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x160) = lVar8;
  lVar1 = lVar2;
  if ((in_w9 & 1) == 0) {
    lVar2 = FUN_031c09d4(lVar2);
    in_w9 = *(ushort *)(*(long *)(*unaff_x27 + 0x10) + 0x135);
    lVar1 = *(long *)(*unaff_x27 + 0x10);
  }
  lVar8 = lVar8 - ((ulong)(*(int *)(lVar2 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x168) = lVar8;
  lVar2 = lVar1;
  if ((in_w9 & 1) == 0) {
    lVar1 = FUN_031c09d4(lVar1);
    in_w9 = *(ushort *)(*(long *)(*unaff_x27 + 0x10) + 0x135);
    lVar2 = *(long *)(*unaff_x27 + 0x10);
  }
  lVar8 = lVar8 - ((ulong)(*(int *)(lVar1 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x170) = lVar8;
  lVar1 = lVar2;
  if ((in_w9 & 1) == 0) {
    lVar2 = FUN_031c09d4(lVar2);
    in_w9 = *(ushort *)(*(long *)(*unaff_x27 + 0x10) + 0x135);
    lVar1 = *(long *)(*unaff_x27 + 0x10);
  }
  lVar8 = lVar8 - ((ulong)(*(int *)(lVar2 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x178) = lVar8;
  lVar2 = lVar1;
  if ((in_w9 & 1) == 0) {
    lVar1 = FUN_031c09d4(lVar1);
    in_w9 = *(ushort *)(*(long *)(*unaff_x27 + 0x10) + 0x135);
    lVar2 = *(long *)(*unaff_x27 + 0x10);
  }
  lVar8 = lVar8 - ((ulong)(*(int *)(lVar1 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x48) = lVar8;
  lVar1 = lVar2;
  if ((in_w9 & 1) == 0) {
    lVar2 = FUN_031c09d4(lVar2);
    in_w9 = *(ushort *)(*(long *)(*unaff_x27 + 0x10) + 0x135);
    lVar1 = *(long *)(*unaff_x27 + 0x10);
  }
  lVar8 = lVar8 - ((ulong)(*(int *)(lVar2 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x50) = lVar8;
  if ((in_w9 & 1) == 0) {
    lVar1 = FUN_031c09d4(lVar1);
  }
  lVar8 = lVar8 - ((ulong)(*(int *)(lVar1 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x58) = lVar8;
  uVar6 = unaff_x21 + 0xf & 0x1fffffff0;
  __dest = (undefined8 *)(lVar8 - uVar6);
  __dest_00 = (undefined8 *)((long)__dest - uVar6);
  __s = (void *)((long)__dest_00 - uVar6);
  memset(__s,0,unaff_x21);
  uVar10 = 0;
  uVar9 = unaff_w26;
  if (7 < (int)unaff_w26) {
    uVar10 = 0;
    lVar1 = unaff_x29 + -0x28;
    *(uint *)(unaff_x29 + -0x17c) = unaff_w26;
    do {
      pvVar3 = (void *)(*(code *)**(undefined8 **)(*unaff_x27 + 8))
                                 (*(undefined8 *)(unaff_x29 + -0x40),uVar10);
      memcpy(__dest,pvVar3,unaff_x21);
      memcpy(__s,pvVar3,unaff_x21);
      memmove(__dest_00,pvVar3,unaff_x21);
      lVar7 = *unaff_x27;
      lVar2 = *(long *)(lVar7 + 0x10);
      lVar8 = lVar2;
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_031c09d4(lVar2);
        lVar7 = *unaff_x27;
        lVar8 = *(long *)(lVar7 + 0x10);
      }
      uVar4 = *(undefined8 *)(lVar7 + 0x20);
      puVar5 = __dest_00;
      lVar7 = *(long *)(unaff_x29 + -0x28);
      if (-1 < *(int *)(lVar8 + 0x28)) {
        puVar5 = (undefined8 *)*__dest_00;
        lVar7 = lVar1;
      }
      *(undefined8 **)(unaff_x29 + -0x20) = puVar5;
      FUN_031896ac(lVar2,uVar4,*(undefined8 *)(unaff_x29 + -0x60),lVar7,unaff_x29 + -0x20,
                   unaff_x29 + -0x14);
      uVar11 = uVar10;
      if (*(char *)(unaff_x29 + -0x14) != '\0') goto LAB_03c3b5c0;
      memcpy(__dest,__s,unaff_x21);
      lVar7 = *unaff_x27;
      lVar2 = *(long *)(lVar7 + 0x10);
      lVar8 = lVar2;
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_031c09d4(lVar2);
        lVar7 = *unaff_x27;
        lVar8 = *(long *)(lVar7 + 0x10);
      }
      uVar4 = *(undefined8 *)(lVar7 + 0x20);
      puVar5 = __dest;
      lVar7 = *(long *)(unaff_x29 + -0x30);
      if (-1 < *(int *)(lVar8 + 0x28)) {
        puVar5 = (undefined8 *)*__dest;
        lVar7 = unaff_x29 + -0x30;
      }
      *(undefined8 **)(unaff_x29 + -0x20) = puVar5;
      FUN_031896ac(lVar2,uVar4,*(undefined8 *)(unaff_x29 + -0x68),lVar7,unaff_x29 + -0x20,
                   unaff_x29 + -0x14);
      if (*(char *)(unaff_x29 + -0x14) != '\0') goto LAB_03c3b5c0;
      memcpy(__dest,__s,unaff_x21);
      lVar7 = *unaff_x27;
      lVar2 = *(long *)(lVar7 + 0x10);
      lVar8 = lVar2;
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_031c09d4(lVar2);
        lVar7 = *unaff_x27;
        lVar8 = *(long *)(lVar7 + 0x10);
      }
      uVar4 = *(undefined8 *)(lVar7 + 0x20);
      puVar5 = __dest;
      lVar7 = *(long *)(unaff_x29 + -0x38);
      if (-1 < *(int *)(lVar8 + 0x28)) {
        puVar5 = (undefined8 *)*__dest;
        lVar7 = unaff_x29 + -0x38;
      }
      *(undefined8 **)(unaff_x29 + -0x20) = puVar5;
      FUN_031896ac(lVar2,uVar4,*(undefined8 *)(unaff_x29 + -0x70),lVar7,unaff_x29 + -0x20,
                   unaff_x29 + -0x14);
      if (*(char *)(unaff_x29 + -0x14) != '\0') goto LAB_03c3b5c0;
      pvVar3 = (void *)(*(code *)**(undefined8 **)(*unaff_x27 + 8))
                                 (*(undefined8 *)(unaff_x29 + -0x40),uVar10 + 1);
      memcpy(__dest,pvVar3,unaff_x21);
      memcpy(__s,pvVar3,unaff_x21);
      memmove(__dest_00,pvVar3,unaff_x21);
      lVar7 = *unaff_x27;
      lVar2 = *(long *)(lVar7 + 0x10);
      lVar8 = lVar2;
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_031c09d4(lVar2);
        lVar7 = *unaff_x27;
        lVar8 = *(long *)(lVar7 + 0x10);
      }
      uVar4 = *(undefined8 *)(lVar7 + 0x20);
      puVar5 = __dest_00;
      lVar7 = *(long *)(unaff_x29 + -0x28);
      if (-1 < *(int *)(lVar8 + 0x28)) {
        puVar5 = (undefined8 *)*__dest_00;
        lVar7 = lVar1;
      }
      *(undefined8 **)(unaff_x29 + -0x20) = puVar5;
      FUN_031896ac(lVar2,uVar4,*(undefined8 *)(unaff_x29 + -0x78),lVar7,unaff_x29 + -0x20,
                   unaff_x29 + -0x14);
      uVar11 = uVar10 | 1;
      if (*(char *)(unaff_x29 + -0x14) != '\0') goto LAB_03c3b5c0;
      memcpy(__dest,__s,unaff_x21);
      lVar7 = *unaff_x27;
      lVar2 = *(long *)(lVar7 + 0x10);
      lVar8 = lVar2;
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_031c09d4(lVar2);
        lVar7 = *unaff_x27;
        lVar8 = *(long *)(lVar7 + 0x10);
      }
      uVar4 = *(undefined8 *)(lVar7 + 0x20);
      puVar5 = __dest;
      lVar7 = *(long *)(unaff_x29 + -0x30);
      if (-1 < *(int *)(lVar8 + 0x28)) {
        puVar5 = (undefined8 *)*__dest;
        lVar7 = unaff_x29 + -0x30;
      }
      *(undefined8 **)(unaff_x29 + -0x20) = puVar5;
      FUN_031896ac(lVar2,uVar4,*(undefined8 *)(unaff_x29 + -0x80),lVar7,unaff_x29 + -0x20,
                   unaff_x29 + -0x14);
      if (*(char *)(unaff_x29 + -0x14) != '\0') goto LAB_03c3b5c0;
      memcpy(__dest,__s,unaff_x21);
      lVar7 = *unaff_x27;
      lVar2 = *(long *)(lVar7 + 0x10);
      lVar8 = lVar2;
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_031c09d4(lVar2);
        lVar7 = *unaff_x27;
        lVar8 = *(long *)(lVar7 + 0x10);
      }
      uVar4 = *(undefined8 *)(lVar7 + 0x20);
      puVar5 = __dest;
      lVar7 = *(long *)(unaff_x29 + -0x38);
      if (-1 < *(int *)(lVar8 + 0x28)) {
        puVar5 = (undefined8 *)*__dest;
        lVar7 = unaff_x29 + -0x38;
      }
      *(undefined8 **)(unaff_x29 + -0x20) = puVar5;
      FUN_031896ac(lVar2,uVar4,*(undefined8 *)(unaff_x29 + -0x88),lVar7,unaff_x29 + -0x20,
                   unaff_x29 + -0x14);
      if (*(char *)(unaff_x29 + -0x14) != '\0') {
        uVar11 = uVar10 + 1;
        goto LAB_03c3b5c0;
      }
      pvVar3 = (void *)(*(code *)**(undefined8 **)(*unaff_x27 + 8))
                                 (*(undefined8 *)(unaff_x29 + -0x40),uVar10 + 2);
      memcpy(__dest,pvVar3,unaff_x21);
      memcpy(__s,pvVar3,unaff_x21);
      memmove(__dest_00,pvVar3,unaff_x21);
      lVar7 = *unaff_x27;
      lVar2 = *(long *)(lVar7 + 0x10);
      lVar8 = lVar2;
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_031c09d4(lVar2);
        lVar7 = *unaff_x27;
        lVar8 = *(long *)(lVar7 + 0x10);
      }
      uVar4 = *(undefined8 *)(lVar7 + 0x20);
      puVar5 = __dest_00;
      lVar7 = *(long *)(unaff_x29 + -0x28);
      if (-1 < *(int *)(lVar8 + 0x28)) {
        puVar5 = (undefined8 *)*__dest_00;
        lVar7 = lVar1;
      }
      *(undefined8 **)(unaff_x29 + -0x20) = puVar5;
      FUN_031896ac(lVar2,uVar4,*(undefined8 *)(unaff_x29 + -0x90),lVar7,unaff_x29 + -0x20,
                   unaff_x29 + -0x14);
      if (*(char *)(unaff_x29 + -0x14) != '\0') {
        uVar11 = uVar10 + 2;
        goto LAB_03c3b5c0;
      }
      memcpy(__dest,__s,unaff_x21);
      lVar7 = *unaff_x27;
      lVar2 = *(long *)(lVar7 + 0x10);
      lVar8 = lVar2;
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_031c09d4(lVar2);
        lVar7 = *unaff_x27;
        lVar8 = *(long *)(lVar7 + 0x10);
      }
      uVar4 = *(undefined8 *)(lVar7 + 0x20);
      puVar5 = __dest;
      lVar7 = *(long *)(unaff_x29 + -0x30);
      if (-1 < *(int *)(lVar8 + 0x28)) {
        puVar5 = (undefined8 *)*__dest;
        lVar7 = unaff_x29 + -0x30;
      }
      *(undefined8 **)(unaff_x29 + -0x20) = puVar5;
      FUN_031896ac(lVar2,uVar4,*(undefined8 *)(unaff_x29 + -0x98),lVar7,unaff_x29 + -0x20,
                   unaff_x29 + -0x14);
      uVar11 = uVar10 | 2;
      if (*(char *)(unaff_x29 + -0x14) != '\0') goto LAB_03c3b5c0;
      memcpy(__dest,__s,unaff_x21);
      lVar7 = *unaff_x27;
      lVar2 = *(long *)(lVar7 + 0x10);
      lVar8 = lVar2;
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_031c09d4(lVar2);
        lVar7 = *unaff_x27;
        lVar8 = *(long *)(lVar7 + 0x10);
      }
      uVar4 = *(undefined8 *)(lVar7 + 0x20);
      puVar5 = __dest;
      lVar7 = *(long *)(unaff_x29 + -0x38);
      if (-1 < *(int *)(lVar8 + 0x28)) {
        puVar5 = (undefined8 *)*__dest;
        lVar7 = unaff_x29 + -0x38;
      }
      *(undefined8 **)(unaff_x29 + -0x20) = puVar5;
      FUN_031896ac(lVar2,uVar4,*(undefined8 *)(unaff_x29 + -0xa0),lVar7,unaff_x29 + -0x20,
                   unaff_x29 + -0x14);
      if (*(char *)(unaff_x29 + -0x14) != '\0') goto LAB_03c3b5c0;
      pvVar3 = (void *)(*(code *)**(undefined8 **)(*unaff_x27 + 8))
                                 (*(undefined8 *)(unaff_x29 + -0x40),uVar10 + 3);
      memcpy(__dest,pvVar3,unaff_x21);
      memcpy(__s,pvVar3,unaff_x21);
      memmove(__dest_00,pvVar3,unaff_x21);
      lVar7 = *unaff_x27;
      lVar2 = *(long *)(lVar7 + 0x10);
      lVar8 = lVar2;
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_031c09d4(lVar2);
        lVar7 = *unaff_x27;
        lVar8 = *(long *)(lVar7 + 0x10);
      }
      uVar4 = *(undefined8 *)(lVar7 + 0x20);
      puVar5 = __dest_00;
      lVar7 = *(long *)(unaff_x29 + -0x28);
      if (-1 < *(int *)(lVar8 + 0x28)) {
        puVar5 = (undefined8 *)*__dest_00;
        lVar7 = lVar1;
      }
      *(undefined8 **)(unaff_x29 + -0x20) = puVar5;
      FUN_031896ac(lVar2,uVar4,*(undefined8 *)(unaff_x29 + -0xa8),lVar7,unaff_x29 + -0x20,
                   unaff_x29 + -0x14);
      uVar11 = uVar10 | 3;
      if (*(char *)(unaff_x29 + -0x14) != '\0') goto LAB_03c3b5c0;
      memcpy(__dest,__s,unaff_x21);
      lVar7 = *unaff_x27;
      lVar2 = *(long *)(lVar7 + 0x10);
      lVar8 = lVar2;
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_031c09d4(lVar2);
        lVar7 = *unaff_x27;
        lVar8 = *(long *)(lVar7 + 0x10);
      }
      uVar4 = *(undefined8 *)(lVar7 + 0x20);
      puVar5 = __dest;
      lVar7 = *(long *)(unaff_x29 + -0x30);
      if (-1 < *(int *)(lVar8 + 0x28)) {
        puVar5 = (undefined8 *)*__dest;
        lVar7 = unaff_x29 + -0x30;
      }
      *(undefined8 **)(unaff_x29 + -0x20) = puVar5;
      FUN_031896ac(lVar2,uVar4,*(undefined8 *)(unaff_x29 + -0xb0),lVar7,unaff_x29 + -0x20,
                   unaff_x29 + -0x14);
      if (*(char *)(unaff_x29 + -0x14) != '\0') goto LAB_03c3b5c0;
      memcpy(__dest,__s,unaff_x21);
      lVar7 = *unaff_x27;
      lVar2 = *(long *)(lVar7 + 0x10);
      lVar8 = lVar2;
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_031c09d4(lVar2);
        lVar7 = *unaff_x27;
        lVar8 = *(long *)(lVar7 + 0x10);
      }
      uVar4 = *(undefined8 *)(lVar7 + 0x20);
      puVar5 = __dest;
      lVar7 = *(long *)(unaff_x29 + -0x38);
      if (-1 < *(int *)(lVar8 + 0x28)) {
        puVar5 = (undefined8 *)*__dest;
        lVar7 = unaff_x29 + -0x38;
      }
      *(undefined8 **)(unaff_x29 + -0x20) = puVar5;
      FUN_031896ac(lVar2,uVar4,*(undefined8 *)(unaff_x29 + -0xb8),lVar7,unaff_x29 + -0x20,
                   unaff_x29 + -0x14);
      if (*(char *)(unaff_x29 + -0x14) != '\0') {
        uVar11 = uVar10 + 3;
        goto LAB_03c3b5c0;
      }
      pvVar3 = (void *)(*(code *)**(undefined8 **)(*unaff_x27 + 8))
                                 (*(undefined8 *)(unaff_x29 + -0x40),uVar10 + 4);
      memcpy(__dest,pvVar3,unaff_x21);
      memcpy(__s,pvVar3,unaff_x21);
      memmove(__dest_00,pvVar3,unaff_x21);
      lVar7 = *unaff_x27;
      lVar2 = *(long *)(lVar7 + 0x10);
      lVar8 = lVar2;
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_031c09d4(lVar2);
        lVar7 = *unaff_x27;
        lVar8 = *(long *)(lVar7 + 0x10);
      }
      uVar4 = *(undefined8 *)(lVar7 + 0x20);
      puVar5 = __dest_00;
      lVar7 = *(long *)(unaff_x29 + -0x28);
      if (-1 < *(int *)(lVar8 + 0x28)) {
        puVar5 = (undefined8 *)*__dest_00;
        lVar7 = lVar1;
      }
      *(undefined8 **)(unaff_x29 + -0x20) = puVar5;
      FUN_031896ac(lVar2,uVar4,*(undefined8 *)(unaff_x29 + -0xc0),lVar7,unaff_x29 + -0x20,
                   unaff_x29 + -0x14);
      uVar11 = uVar10 | 4;
      if (*(char *)(unaff_x29 + -0x14) != '\0') goto LAB_03c3b5c0;
      memcpy(__dest,__s,unaff_x21);
      lVar7 = *unaff_x27;
      lVar2 = *(long *)(lVar7 + 0x10);
      lVar8 = lVar2;
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_031c09d4(lVar2);
        lVar7 = *unaff_x27;
        lVar8 = *(long *)(lVar7 + 0x10);
      }
      uVar4 = *(undefined8 *)(lVar7 + 0x20);
      puVar5 = __dest;
      lVar7 = *(long *)(unaff_x29 + -0x30);
      if (-1 < *(int *)(lVar8 + 0x28)) {
        puVar5 = (undefined8 *)*__dest;
        lVar7 = unaff_x29 + -0x30;
      }
      *(undefined8 **)(unaff_x29 + -0x20) = puVar5;
      FUN_031896ac(lVar2,uVar4,*(undefined8 *)(unaff_x29 + -200),lVar7,unaff_x29 + -0x20,
                   unaff_x29 + -0x14);
      if (*(char *)(unaff_x29 + -0x14) != '\0') goto LAB_03c3b5c0;
      memcpy(__dest,__s,unaff_x21);
      lVar7 = *unaff_x27;
      lVar2 = *(long *)(lVar7 + 0x10);
      lVar8 = lVar2;
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_031c09d4(lVar2);
        lVar7 = *unaff_x27;
        lVar8 = *(long *)(lVar7 + 0x10);
      }
      uVar4 = *(undefined8 *)(lVar7 + 0x20);
      puVar5 = __dest;
      lVar7 = *(long *)(unaff_x29 + -0x38);
      if (-1 < *(int *)(lVar8 + 0x28)) {
        puVar5 = (undefined8 *)*__dest;
        lVar7 = unaff_x29 + -0x38;
      }
      *(undefined8 **)(unaff_x29 + -0x20) = puVar5;
      FUN_031896ac(lVar2,uVar4,*(undefined8 *)(unaff_x29 + -0xd0),lVar7,unaff_x29 + -0x20,
                   unaff_x29 + -0x14);
      if (*(char *)(unaff_x29 + -0x14) != '\0') {
        uVar11 = uVar10 + 4;
        goto LAB_03c3b5c0;
      }
      pvVar3 = (void *)(*(code *)**(undefined8 **)(*unaff_x27 + 8))
                                 (*(undefined8 *)(unaff_x29 + -0x40),uVar10 + 5);
      memcpy(__dest,pvVar3,unaff_x21);
      memcpy(__s,pvVar3,unaff_x21);
      memmove(__dest_00,pvVar3,unaff_x21);
      lVar7 = *unaff_x27;
      lVar2 = *(long *)(lVar7 + 0x10);
      lVar8 = lVar2;
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_031c09d4(lVar2);
        lVar7 = *unaff_x27;
        lVar8 = *(long *)(lVar7 + 0x10);
      }
      uVar4 = *(undefined8 *)(lVar7 + 0x20);
      puVar5 = __dest_00;
      lVar7 = *(long *)(unaff_x29 + -0x28);
      if (-1 < *(int *)(lVar8 + 0x28)) {
        puVar5 = (undefined8 *)*__dest_00;
        lVar7 = lVar1;
      }
      *(undefined8 **)(unaff_x29 + -0x20) = puVar5;
      FUN_031896ac(lVar2,uVar4,*(undefined8 *)(unaff_x29 + -0xd8),lVar7,unaff_x29 + -0x20,
                   unaff_x29 + -0x14);
      if (*(char *)(unaff_x29 + -0x14) != '\0') {
        uVar11 = uVar10 + 5;
        goto LAB_03c3b5c0;
      }
      memcpy(__dest,__s,unaff_x21);
      lVar7 = *unaff_x27;
      lVar2 = *(long *)(lVar7 + 0x10);
      lVar8 = lVar2;
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_031c09d4(lVar2);
        lVar7 = *unaff_x27;
        lVar8 = *(long *)(lVar7 + 0x10);
      }
      uVar4 = *(undefined8 *)(lVar7 + 0x20);
      puVar5 = __dest;
      lVar7 = *(long *)(unaff_x29 + -0x30);
      if (-1 < *(int *)(lVar8 + 0x28)) {
        puVar5 = (undefined8 *)*__dest;
        lVar7 = unaff_x29 + -0x30;
      }
      *(undefined8 **)(unaff_x29 + -0x20) = puVar5;
      FUN_031896ac(lVar2,uVar4,*(undefined8 *)(unaff_x29 + -0xe0),lVar7,unaff_x29 + -0x20,
                   unaff_x29 + -0x14);
      uVar11 = uVar10 | 5;
      if (*(char *)(unaff_x29 + -0x14) != '\0') goto LAB_03c3b5c0;
      memcpy(__dest,__s,unaff_x21);
      lVar7 = *unaff_x27;
      lVar2 = *(long *)(lVar7 + 0x10);
      lVar8 = lVar2;
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_031c09d4(lVar2);
        lVar7 = *unaff_x27;
        lVar8 = *(long *)(lVar7 + 0x10);
      }
      uVar4 = *(undefined8 *)(lVar7 + 0x20);
      puVar5 = __dest;
      lVar7 = *(long *)(unaff_x29 + -0x38);
      if (-1 < *(int *)(lVar8 + 0x28)) {
        puVar5 = (undefined8 *)*__dest;
        lVar7 = unaff_x29 + -0x38;
      }
      *(undefined8 **)(unaff_x29 + -0x20) = puVar5;
      FUN_031896ac(lVar2,uVar4,*(undefined8 *)(unaff_x29 + -0xe8),lVar7,unaff_x29 + -0x20,
                   unaff_x29 + -0x14);
      if (*(char *)(unaff_x29 + -0x14) != '\0') goto LAB_03c3b5c0;
      pvVar3 = (void *)(*(code *)**(undefined8 **)(*unaff_x27 + 8))
                                 (*(undefined8 *)(unaff_x29 + -0x40),uVar10 + 6);
      memcpy(__dest,pvVar3,unaff_x21);
      memcpy(__s,pvVar3,unaff_x21);
      memmove(__dest_00,pvVar3,unaff_x21);
      lVar7 = *unaff_x27;
      lVar2 = *(long *)(lVar7 + 0x10);
      lVar8 = lVar2;
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_031c09d4(lVar2);
        lVar7 = *unaff_x27;
        lVar8 = *(long *)(lVar7 + 0x10);
      }
      uVar4 = *(undefined8 *)(lVar7 + 0x20);
      puVar5 = __dest_00;
      lVar7 = *(long *)(unaff_x29 + -0x28);
      if (-1 < *(int *)(lVar8 + 0x28)) {
        puVar5 = (undefined8 *)*__dest_00;
        lVar7 = lVar1;
      }
      *(undefined8 **)(unaff_x29 + -0x20) = puVar5;
      FUN_031896ac(lVar2,uVar4,*(undefined8 *)(unaff_x29 + -0xf0),lVar7,unaff_x29 + -0x20,
                   unaff_x29 + -0x14);
      uVar11 = uVar10 | 6;
      if (*(char *)(unaff_x29 + -0x14) != '\0') goto LAB_03c3b5c0;
      memcpy(__dest,__s,unaff_x21);
      lVar7 = *unaff_x27;
      lVar2 = *(long *)(lVar7 + 0x10);
      lVar8 = lVar2;
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_031c09d4(lVar2);
        lVar7 = *unaff_x27;
        lVar8 = *(long *)(lVar7 + 0x10);
      }
      uVar4 = *(undefined8 *)(lVar7 + 0x20);
      puVar5 = __dest;
      lVar7 = *(long *)(unaff_x29 + -0x30);
      if (-1 < *(int *)(lVar8 + 0x28)) {
        puVar5 = (undefined8 *)*__dest;
        lVar7 = unaff_x29 + -0x30;
      }
      *(undefined8 **)(unaff_x29 + -0x20) = puVar5;
      FUN_031896ac(lVar2,uVar4,*(undefined8 *)(unaff_x29 + -0xf8),lVar7,unaff_x29 + -0x20,
                   unaff_x29 + -0x14);
      if (*(char *)(unaff_x29 + -0x14) != '\0') goto LAB_03c3b5c0;
      memcpy(__dest,__s,unaff_x21);
      lVar7 = *unaff_x27;
      lVar2 = *(long *)(lVar7 + 0x10);
      lVar8 = lVar2;
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_031c09d4(lVar2);
        lVar7 = *unaff_x27;
        lVar8 = *(long *)(lVar7 + 0x10);
      }
      uVar4 = *(undefined8 *)(lVar7 + 0x20);
      puVar5 = __dest;
      lVar7 = *(long *)(unaff_x29 + -0x38);
      if (-1 < *(int *)(lVar8 + 0x28)) {
        puVar5 = (undefined8 *)*__dest;
        lVar7 = unaff_x29 + -0x38;
      }
      *(undefined8 **)(unaff_x29 + -0x20) = puVar5;
      FUN_031896ac(lVar2,uVar4,*(undefined8 *)(unaff_x29 + -0x100),lVar7,unaff_x29 + -0x20,
                   unaff_x29 + -0x14);
      if (*(char *)(unaff_x29 + -0x14) != '\0') {
        uVar11 = uVar10 + 6;
        goto LAB_03c3b5c0;
      }
      pvVar3 = (void *)(*(code *)**(undefined8 **)(*unaff_x27 + 8))
                                 (*(undefined8 *)(unaff_x29 + -0x40),uVar10 + 7);
      memcpy(__dest,pvVar3,unaff_x21);
      memcpy(__s,pvVar3,unaff_x21);
      memmove(__dest_00,pvVar3,unaff_x21);
      lVar7 = *unaff_x27;
      lVar2 = *(long *)(lVar7 + 0x10);
      lVar8 = lVar2;
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_031c09d4(lVar2);
        lVar7 = *unaff_x27;
        lVar8 = *(long *)(lVar7 + 0x10);
      }
      uVar4 = *(undefined8 *)(lVar7 + 0x20);
      puVar5 = __dest_00;
      lVar7 = *(long *)(unaff_x29 + -0x28);
      if (-1 < *(int *)(lVar8 + 0x28)) {
        puVar5 = (undefined8 *)*__dest_00;
        lVar7 = lVar1;
      }
      *(undefined8 **)(unaff_x29 + -0x20) = puVar5;
      FUN_031896ac(lVar2,uVar4,*(undefined8 *)(unaff_x29 + -0x108),lVar7,unaff_x29 + -0x20,
                   unaff_x29 + -0x14);
      if (*(char *)(unaff_x29 + -0x14) != '\0') {
        uVar11 = uVar10 + 7;
        goto LAB_03c3b5c0;
      }
      memcpy(__dest,__s,unaff_x21);
      lVar7 = *unaff_x27;
      lVar2 = *(long *)(lVar7 + 0x10);
      lVar8 = lVar2;
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_031c09d4(lVar2);
        lVar7 = *unaff_x27;
        lVar8 = *(long *)(lVar7 + 0x10);
      }
      uVar4 = *(undefined8 *)(lVar7 + 0x20);
      puVar5 = __dest;
      lVar7 = *(long *)(unaff_x29 + -0x30);
      if (-1 < *(int *)(lVar8 + 0x28)) {
        puVar5 = (undefined8 *)*__dest;
        lVar7 = unaff_x29 + -0x30;
      }
      *(undefined8 **)(unaff_x29 + -0x20) = puVar5;
      FUN_031896ac(lVar2,uVar4,*(undefined8 *)(unaff_x29 + -0x110),lVar7,unaff_x29 + -0x20,
                   unaff_x29 + -0x14);
      uVar11 = uVar10 | 7;
      if (*(char *)(unaff_x29 + -0x14) != '\0') goto LAB_03c3b5c0;
      memcpy(__dest,__s,unaff_x21);
      lVar7 = *unaff_x27;
      lVar2 = *(long *)(lVar7 + 0x10);
      lVar8 = lVar2;
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_031c09d4(lVar2);
        lVar7 = *unaff_x27;
        lVar8 = *(long *)(lVar7 + 0x10);
      }
      uVar4 = *(undefined8 *)(lVar7 + 0x20);
      puVar5 = __dest;
      lVar7 = *(long *)(unaff_x29 + -0x38);
      if (-1 < *(int *)(lVar8 + 0x28)) {
        puVar5 = (undefined8 *)*__dest;
        lVar7 = unaff_x29 + -0x38;
      }
      *(undefined8 **)(unaff_x29 + -0x20) = puVar5;
      FUN_031896ac(lVar2,uVar4,*(undefined8 *)(unaff_x29 + -0x118),lVar7,unaff_x29 + -0x20,
                   unaff_x29 + -0x14);
      if (*(char *)(unaff_x29 + -0x14) != '\0') goto LAB_03c3b5c0;
      uVar9 = uVar9 - 8;
      uVar10 = uVar10 + 8;
      unaff_w26 = *(uint *)(unaff_x29 + -0x17c);
    } while (7 < (int)uVar9);
  }
  if ((int)uVar9 < 4) {
LAB_03c3b1fc:
    if ((int)unaff_w26 <= (int)uVar10) {
      uVar11 = 0xffffffff;
      goto LAB_03c3b5c0;
    }
    *(long *)(unaff_x29 + -0x60) = unaff_x20;
    do {
      pvVar3 = (void *)(*(code *)**(undefined8 **)(*unaff_x27 + 8))
                                 (*(undefined8 *)(unaff_x29 + -0x40),uVar10);
      memcpy(__dest,pvVar3,unaff_x21);
      memcpy(__s,pvVar3,unaff_x21);
      memmove(__dest_00,pvVar3,unaff_x21);
      lVar2 = *unaff_x27;
      lVar8 = *(long *)(lVar2 + 0x10);
      lVar1 = lVar8;
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_031c09d4(lVar8);
        lVar2 = *unaff_x27;
        lVar1 = *(long *)(lVar2 + 0x10);
      }
      uVar4 = *(undefined8 *)(lVar2 + 0x20);
      puVar5 = __dest_00;
      lVar2 = *(long *)(unaff_x29 + -0x28);
      if (-1 < *(int *)(lVar1 + 0x28)) {
        puVar5 = (undefined8 *)*__dest_00;
        lVar2 = unaff_x29 + -0x28;
      }
      *(undefined8 **)(unaff_x29 + -0x20) = puVar5;
      FUN_031896ac(lVar8,uVar4,*(undefined8 *)(unaff_x29 + -0x48),lVar2,unaff_x29 + -0x20,
                   unaff_x29 + -0x14);
      uVar11 = uVar10;
      if (*(char *)(unaff_x29 + -0x14) != '\0') goto LAB_03c3b4cc;
      memcpy(__dest,__s,unaff_x21);
      lVar2 = *unaff_x27;
      lVar8 = *(long *)(lVar2 + 0x10);
      lVar1 = lVar8;
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_031c09d4(lVar8);
        lVar2 = *unaff_x27;
        lVar1 = *(long *)(lVar2 + 0x10);
      }
      uVar4 = *(undefined8 *)(lVar2 + 0x20);
      puVar5 = __dest;
      lVar2 = *(long *)(unaff_x29 + -0x30);
      if (-1 < *(int *)(lVar1 + 0x28)) {
        puVar5 = (undefined8 *)*__dest;
        lVar2 = unaff_x29 + -0x30;
      }
      *(undefined8 **)(unaff_x29 + -0x20) = puVar5;
      FUN_031896ac(lVar8,uVar4,*(undefined8 *)(unaff_x29 + -0x50),lVar2,unaff_x29 + -0x20,
                   unaff_x29 + -0x14);
      if (*(char *)(unaff_x29 + -0x14) != '\0') goto LAB_03c3b4cc;
      memcpy(__dest,__s,unaff_x21);
      lVar2 = *unaff_x27;
      lVar8 = *(long *)(lVar2 + 0x10);
      lVar1 = lVar8;
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_031c09d4(lVar8);
        lVar2 = *unaff_x27;
        lVar1 = *(long *)(lVar2 + 0x10);
      }
      uVar4 = *(undefined8 *)(lVar2 + 0x20);
      puVar5 = __dest;
      lVar2 = *(long *)(unaff_x29 + -0x38);
      if (-1 < *(int *)(lVar1 + 0x28)) {
        puVar5 = (undefined8 *)*__dest;
        lVar2 = unaff_x29 + -0x38;
      }
      *(undefined8 **)(unaff_x29 + -0x20) = puVar5;
      FUN_031896ac(lVar8,uVar4,*(undefined8 *)(unaff_x29 + -0x58),lVar2,unaff_x29 + -0x20,
                   unaff_x29 + -0x14);
      if (*(char *)(unaff_x29 + -0x14) != '\0') goto LAB_03c3b4cc;
      uVar10 = uVar10 + 1;
    } while (unaff_w26 != uVar10);
    uVar11 = 0xffffffff;
  }
  else {
    pvVar3 = (void *)(*(code *)**(undefined8 **)(*unaff_x27 + 8))
                               (*(undefined8 *)(unaff_x29 + -0x40),uVar10);
    memcpy(__dest,pvVar3,unaff_x21);
    memcpy(__s,pvVar3,unaff_x21);
    memmove(__dest_00,pvVar3,unaff_x21);
    lVar2 = *unaff_x27;
    lVar8 = *(long *)(lVar2 + 0x10);
    lVar1 = lVar8;
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_031c09d4(lVar8);
      lVar2 = *unaff_x27;
      lVar1 = *(long *)(lVar2 + 0x10);
    }
    uVar4 = *(undefined8 *)(lVar2 + 0x20);
    puVar5 = __dest_00;
    lVar2 = *(long *)(unaff_x29 + -0x28);
    if (-1 < *(int *)(lVar1 + 0x28)) {
      puVar5 = (undefined8 *)*__dest_00;
      lVar2 = unaff_x29 + -0x28;
    }
    *(undefined8 **)(unaff_x29 + -0x20) = puVar5;
    FUN_031896ac(lVar8,uVar4,*(undefined8 *)(unaff_x29 + -0x120),lVar2,unaff_x29 + -0x20,
                 unaff_x29 + -0x14);
    uVar11 = uVar10;
    if (*(char *)(unaff_x29 + -0x14) != '\0') goto LAB_03c3b5c0;
    memcpy(__dest,__s,unaff_x21);
    lVar2 = *unaff_x27;
    lVar8 = *(long *)(lVar2 + 0x10);
    lVar1 = lVar8;
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_031c09d4(lVar8);
      lVar2 = *unaff_x27;
      lVar1 = *(long *)(lVar2 + 0x10);
    }
    uVar4 = *(undefined8 *)(lVar2 + 0x20);
    puVar5 = __dest;
    lVar2 = *(long *)(unaff_x29 + -0x30);
    if (-1 < *(int *)(lVar1 + 0x28)) {
      puVar5 = (undefined8 *)*__dest;
      lVar2 = unaff_x29 + -0x30;
    }
    *(undefined8 **)(unaff_x29 + -0x20) = puVar5;
    FUN_031896ac(lVar8,uVar4,*(undefined8 *)(unaff_x29 + -0x128),lVar2,unaff_x29 + -0x20,
                 unaff_x29 + -0x14);
    if (*(char *)(unaff_x29 + -0x14) != '\0') goto LAB_03c3b5c0;
    memcpy(__dest,__s,unaff_x21);
    lVar2 = *unaff_x27;
    lVar8 = *(long *)(lVar2 + 0x10);
    lVar1 = lVar8;
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_031c09d4(lVar8);
      lVar2 = *unaff_x27;
      lVar1 = *(long *)(lVar2 + 0x10);
    }
    uVar4 = *(undefined8 *)(lVar2 + 0x20);
    puVar5 = __dest;
    lVar2 = *(long *)(unaff_x29 + -0x38);
    if (-1 < *(int *)(lVar1 + 0x28)) {
      puVar5 = (undefined8 *)*__dest;
      lVar2 = unaff_x29 + -0x38;
    }
    *(undefined8 **)(unaff_x29 + -0x20) = puVar5;
    FUN_031896ac(lVar8,uVar4,*(undefined8 *)(unaff_x29 + -0x130),lVar2,unaff_x29 + -0x20,
                 unaff_x29 + -0x14);
    if (*(char *)(unaff_x29 + -0x14) != '\0') goto LAB_03c3b5c0;
    uVar11 = uVar10 | 1;
    pvVar3 = (void *)(*(code *)**(undefined8 **)(*unaff_x27 + 8))
                               (*(undefined8 *)(unaff_x29 + -0x40),uVar11);
    memcpy(__dest,pvVar3,unaff_x21);
    memcpy(__s,pvVar3,unaff_x21);
    memmove(__dest_00,pvVar3,unaff_x21);
    lVar2 = *unaff_x27;
    lVar8 = *(long *)(lVar2 + 0x10);
    lVar1 = lVar8;
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_031c09d4(lVar8);
      lVar2 = *unaff_x27;
      lVar1 = *(long *)(lVar2 + 0x10);
    }
    uVar4 = *(undefined8 *)(lVar2 + 0x20);
    puVar5 = __dest_00;
    lVar2 = *(long *)(unaff_x29 + -0x28);
    if (-1 < *(int *)(lVar1 + 0x28)) {
      puVar5 = (undefined8 *)*__dest_00;
      lVar2 = unaff_x29 + -0x28;
    }
    *(undefined8 **)(unaff_x29 + -0x20) = puVar5;
    FUN_031896ac(lVar8,uVar4,*(undefined8 *)(unaff_x29 + -0x138),lVar2,unaff_x29 + -0x20,
                 unaff_x29 + -0x14);
    if (*(char *)(unaff_x29 + -0x14) != '\0') goto LAB_03c3b5c0;
    memcpy(__dest,__s,unaff_x21);
    lVar2 = *unaff_x27;
    lVar8 = *(long *)(lVar2 + 0x10);
    lVar1 = lVar8;
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_031c09d4(lVar8);
      lVar2 = *unaff_x27;
      lVar1 = *(long *)(lVar2 + 0x10);
    }
    uVar4 = *(undefined8 *)(lVar2 + 0x20);
    puVar5 = __dest;
    lVar2 = *(long *)(unaff_x29 + -0x30);
    if (-1 < *(int *)(lVar1 + 0x28)) {
      puVar5 = (undefined8 *)*__dest;
      lVar2 = unaff_x29 + -0x30;
    }
    *(undefined8 **)(unaff_x29 + -0x20) = puVar5;
    FUN_031896ac(lVar8,uVar4,*(undefined8 *)(unaff_x29 + -0x140),lVar2,unaff_x29 + -0x20,
                 unaff_x29 + -0x14);
    if (*(char *)(unaff_x29 + -0x14) != '\0') goto LAB_03c3b5c0;
    memcpy(__dest,__s,unaff_x21);
    lVar2 = *unaff_x27;
    lVar8 = *(long *)(lVar2 + 0x10);
    lVar1 = lVar8;
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_031c09d4(lVar8);
      lVar2 = *unaff_x27;
      lVar1 = *(long *)(lVar2 + 0x10);
    }
    uVar4 = *(undefined8 *)(lVar2 + 0x20);
    puVar5 = __dest;
    lVar2 = *(long *)(unaff_x29 + -0x38);
    if (-1 < *(int *)(lVar1 + 0x28)) {
      puVar5 = (undefined8 *)*__dest;
      lVar2 = unaff_x29 + -0x38;
    }
    *(undefined8 **)(unaff_x29 + -0x20) = puVar5;
    FUN_031896ac(lVar8,uVar4,*(undefined8 *)(unaff_x29 + -0x148),lVar2,unaff_x29 + -0x20,
                 unaff_x29 + -0x14);
    if (*(char *)(unaff_x29 + -0x14) != '\0') goto LAB_03c3b5c0;
    uVar11 = uVar10 | 2;
    pvVar3 = (void *)(*(code *)**(undefined8 **)(*unaff_x27 + 8))
                               (*(undefined8 *)(unaff_x29 + -0x40),uVar11);
    memcpy(__dest,pvVar3,unaff_x21);
    memcpy(__s,pvVar3,unaff_x21);
    memmove(__dest_00,pvVar3,unaff_x21);
    lVar2 = *unaff_x27;
    lVar8 = *(long *)(lVar2 + 0x10);
    lVar1 = lVar8;
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_031c09d4(lVar8);
      lVar2 = *unaff_x27;
      lVar1 = *(long *)(lVar2 + 0x10);
    }
    uVar4 = *(undefined8 *)(lVar2 + 0x20);
    puVar5 = __dest_00;
    lVar2 = *(long *)(unaff_x29 + -0x28);
    if (-1 < *(int *)(lVar1 + 0x28)) {
      puVar5 = (undefined8 *)*__dest_00;
      lVar2 = unaff_x29 + -0x28;
    }
    *(undefined8 **)(unaff_x29 + -0x20) = puVar5;
    FUN_031896ac(lVar8,uVar4,*(undefined8 *)(unaff_x29 + -0x150),lVar2,unaff_x29 + -0x20,
                 unaff_x29 + -0x14);
    if (*(char *)(unaff_x29 + -0x14) != '\0') goto LAB_03c3b5c0;
    memcpy(__dest,__s,unaff_x21);
    lVar2 = *unaff_x27;
    lVar8 = *(long *)(lVar2 + 0x10);
    lVar1 = lVar8;
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_031c09d4(lVar8);
      lVar2 = *unaff_x27;
      lVar1 = *(long *)(lVar2 + 0x10);
    }
    uVar4 = *(undefined8 *)(lVar2 + 0x20);
    puVar5 = __dest;
    lVar2 = *(long *)(unaff_x29 + -0x30);
    if (-1 < *(int *)(lVar1 + 0x28)) {
      puVar5 = (undefined8 *)*__dest;
      lVar2 = unaff_x29 + -0x30;
    }
    *(undefined8 **)(unaff_x29 + -0x20) = puVar5;
    FUN_031896ac(lVar8,uVar4,*(undefined8 *)(unaff_x29 + -0x158),lVar2,unaff_x29 + -0x20,
                 unaff_x29 + -0x14);
    if (*(char *)(unaff_x29 + -0x14) != '\0') goto LAB_03c3b5c0;
    *(long *)(unaff_x29 + -0x60) = unaff_x20;
    memcpy(__dest,__s,unaff_x21);
    lVar2 = *unaff_x27;
    lVar8 = *(long *)(lVar2 + 0x10);
    lVar1 = lVar8;
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_031c09d4(lVar8);
      lVar2 = *unaff_x27;
      lVar1 = *(long *)(lVar2 + 0x10);
    }
    uVar4 = *(undefined8 *)(lVar2 + 0x20);
    puVar5 = __dest;
    lVar2 = *(long *)(unaff_x29 + -0x38);
    if (-1 < *(int *)(lVar1 + 0x28)) {
      puVar5 = (undefined8 *)*__dest;
      lVar2 = unaff_x29 + -0x38;
    }
    *(undefined8 **)(unaff_x29 + -0x20) = puVar5;
    FUN_031896ac(lVar8,uVar4,*(undefined8 *)(unaff_x29 + -0x160),lVar2,unaff_x29 + -0x20,
                 unaff_x29 + -0x14);
    unaff_x20 = *(long *)(unaff_x29 + -0x60);
    if (*(char *)(unaff_x29 + -0x14) != '\0') goto LAB_03c3b5c0;
    uVar11 = uVar10 | 3;
    pvVar3 = (void *)(*(code *)**(undefined8 **)(*unaff_x27 + 8))
                               (*(undefined8 *)(unaff_x29 + -0x40),uVar11);
    memcpy(__dest,pvVar3,unaff_x21);
    memcpy(__s,pvVar3,unaff_x21);
    memmove(__dest_00,pvVar3,unaff_x21);
    lVar2 = *unaff_x27;
    lVar8 = *(long *)(lVar2 + 0x10);
    lVar1 = lVar8;
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_031c09d4(lVar8);
      lVar2 = *unaff_x27;
      lVar1 = *(long *)(lVar2 + 0x10);
    }
    uVar4 = *(undefined8 *)(lVar2 + 0x20);
    puVar5 = __dest_00;
    lVar2 = *(long *)(unaff_x29 + -0x28);
    if (-1 < *(int *)(lVar1 + 0x28)) {
      puVar5 = (undefined8 *)*__dest_00;
      lVar2 = unaff_x29 + -0x28;
    }
    *(undefined8 **)(unaff_x29 + -0x20) = puVar5;
    FUN_031896ac(lVar8,uVar4,*(undefined8 *)(unaff_x29 + -0x168),lVar2,unaff_x29 + -0x20,
                 unaff_x29 + -0x14);
    if (*(char *)(unaff_x29 + -0x14) == '\0') {
      memcpy(__dest,__s,unaff_x21);
      lVar2 = *unaff_x27;
      lVar8 = *(long *)(lVar2 + 0x10);
      lVar1 = lVar8;
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_031c09d4(lVar8);
        lVar2 = *unaff_x27;
        lVar1 = *(long *)(lVar2 + 0x10);
      }
      uVar4 = *(undefined8 *)(lVar2 + 0x20);
      puVar5 = __dest;
      lVar2 = *(long *)(unaff_x29 + -0x30);
      if (-1 < *(int *)(lVar1 + 0x28)) {
        puVar5 = (undefined8 *)*__dest;
        lVar2 = unaff_x29 + -0x30;
      }
      *(undefined8 **)(unaff_x29 + -0x20) = puVar5;
      FUN_031896ac(lVar8,uVar4,*(undefined8 *)(unaff_x29 + -0x170),lVar2,unaff_x29 + -0x20,
                   unaff_x29 + -0x14);
      if (*(char *)(unaff_x29 + -0x14) == '\0') {
        memcpy(__dest,__s,unaff_x21);
        lVar2 = *unaff_x27;
        lVar8 = *(long *)(lVar2 + 0x10);
        lVar1 = lVar8;
        if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_031c09d4(lVar8);
          lVar2 = *unaff_x27;
          lVar1 = *(long *)(lVar2 + 0x10);
        }
        uVar4 = *(undefined8 *)(lVar2 + 0x20);
        puVar5 = __dest;
        lVar2 = *(long *)(unaff_x29 + -0x38);
        if (-1 < *(int *)(lVar1 + 0x28)) {
          puVar5 = (undefined8 *)*__dest;
          lVar2 = unaff_x29 + -0x38;
        }
        *(undefined8 **)(unaff_x29 + -0x20) = puVar5;
        FUN_031896ac(lVar8,uVar4,*(undefined8 *)(unaff_x29 + -0x178),lVar2,unaff_x29 + -0x20,
                     unaff_x29 + -0x14);
        unaff_x20 = *(long *)(unaff_x29 + -0x60);
        if (*(char *)(unaff_x29 + -0x14) != '\0') goto LAB_03c3b5c0;
        uVar10 = uVar10 | 4;
        goto LAB_03c3b1fc;
      }
    }
  }
LAB_03c3b4cc:
  unaff_x20 = *(long *)(unaff_x29 + -0x60);
LAB_03c3b5c0:
  if (*(long *)(unaff_x20 + 0x28) == *(long *)(unaff_x29 + -0x10)) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


