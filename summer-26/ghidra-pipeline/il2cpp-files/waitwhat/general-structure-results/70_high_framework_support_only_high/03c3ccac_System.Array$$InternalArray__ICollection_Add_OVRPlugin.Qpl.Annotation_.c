/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<OVRPlugin.Qpl.Annotation>
ENTRY_POINT: 03c3ccac
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool System_Array__InternalArray__ICollection_Add<OVRPlugin_Qpl_Annotation>(void)

{
  bool bVar1;
  undefined8 uVar2;
  void *pvVar3;
  undefined8 uVar4;
  uint in_w8;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long unaff_x19;
  size_t unaff_x22;
  uint unaff_w23;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined8 *unaff_x25;
  undefined8 unaff_x26;
  long lVar12;
  undefined8 uVar13;
  long unaff_x29;
  
  while (uVar9 = unaff_w23, 0xf < in_w8) {
    uVar2 = (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
    pvVar3 = (void *)(*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
    memcpy(unaff_x25,pvVar3,unaff_x22);
    lVar6 = *(long *)(unaff_x19 + 0x38);
    lVar5 = *(long *)(lVar6 + 0x18);
    lVar12 = lVar5;
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_031c09d4(lVar5);
      lVar6 = *(long *)(unaff_x19 + 0x38);
      lVar12 = *(long *)(lVar6 + 0x18);
    }
    uVar13 = *(undefined8 *)(lVar6 + 0x28);
    puVar7 = unaff_x25;
    if (-1 < *(int *)(lVar12 + 0x28)) {
      puVar7 = (undefined8 *)*unaff_x25;
    }
    *(undefined8 **)(unaff_x29 + -0x18) = puVar7;
    FUN_031896ac(lVar5,uVar13,*(undefined8 *)(unaff_x29 + -0x20),uVar2,unaff_x29 + -0x18,
                 unaff_x29 + -0xc);
    if (*(char *)(unaff_x29 + -0xc) == '\0') {
LAB_03c3cda0:
      lVar12 = *(long *)(unaff_x29 + -0x28);
      goto LAB_03c3cda4;
    }
    FUN_0597a900(unaff_x26,1,0);
    uVar2 = (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
    FUN_0597a900(unaff_x26,1,0);
    pvVar3 = (void *)(*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
    memcpy(unaff_x25,pvVar3,unaff_x22);
    lVar6 = *(long *)(unaff_x19 + 0x38);
    lVar5 = *(long *)(lVar6 + 0x18);
    lVar12 = lVar5;
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_031c09d4(lVar5);
      lVar6 = *(long *)(unaff_x19 + 0x38);
      lVar12 = *(long *)(lVar6 + 0x18);
    }
    uVar13 = *(undefined8 *)(lVar6 + 0x28);
    puVar7 = unaff_x25;
    if (-1 < *(int *)(lVar12 + 0x28)) {
      puVar7 = (undefined8 *)*unaff_x25;
    }
    *(undefined8 **)(unaff_x29 + -0x18) = puVar7;
    FUN_031896ac(lVar5,uVar13,*(undefined8 *)(unaff_x29 + -0x30),uVar2,unaff_x29 + -0x18,
                 unaff_x29 + -0xc);
    if (*(char *)(unaff_x29 + -0xc) == '\0') goto LAB_03c3cda0;
    FUN_0597a900(unaff_x26,2,0);
    uVar2 = (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
    FUN_0597a900(unaff_x26,2,0);
    pvVar3 = (void *)(*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
    memcpy(unaff_x25,pvVar3,unaff_x22);
    lVar6 = *(long *)(unaff_x19 + 0x38);
    lVar5 = *(long *)(lVar6 + 0x18);
    lVar12 = lVar5;
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_031c09d4(lVar5);
      lVar6 = *(long *)(unaff_x19 + 0x38);
      lVar12 = *(long *)(lVar6 + 0x18);
    }
    uVar13 = *(undefined8 *)(lVar6 + 0x28);
    puVar7 = unaff_x25;
    if (-1 < *(int *)(lVar12 + 0x28)) {
      puVar7 = (undefined8 *)*unaff_x25;
    }
    *(undefined8 **)(unaff_x29 + -0x18) = puVar7;
    FUN_031896ac(lVar5,uVar13,*(undefined8 *)(unaff_x29 + -0x38),uVar2,unaff_x29 + -0x18,
                 unaff_x29 + -0xc);
    if (*(char *)(unaff_x29 + -0xc) == '\0') goto LAB_03c3cda0;
    FUN_0597a900(unaff_x26,3,0);
    uVar2 = (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
    FUN_0597a900(unaff_x26,3,0);
    pvVar3 = (void *)(*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
    memcpy(unaff_x25,pvVar3,unaff_x22);
    lVar6 = *(long *)(unaff_x19 + 0x38);
    lVar5 = *(long *)(lVar6 + 0x18);
    lVar12 = lVar5;
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_031c09d4(lVar5);
      lVar6 = *(long *)(unaff_x19 + 0x38);
      lVar12 = *(long *)(lVar6 + 0x18);
    }
    uVar13 = *(undefined8 *)(lVar6 + 0x28);
    puVar7 = unaff_x25;
    if (-1 < *(int *)(lVar12 + 0x28)) {
      puVar7 = (undefined8 *)*unaff_x25;
    }
    *(undefined8 **)(unaff_x29 + -0x18) = puVar7;
    FUN_031896ac(lVar5,uVar13,*(undefined8 *)(unaff_x29 + -0x40),uVar2,unaff_x29 + -0x18,
                 unaff_x29 + -0xc);
    if (*(char *)(unaff_x29 + -0xc) == '\0') goto LAB_03c3cda0;
    FUN_0597a900(unaff_x26,4,0);
    uVar2 = (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
    FUN_0597a900(unaff_x26,4,0);
    pvVar3 = (void *)(*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
    memcpy(unaff_x25,pvVar3,unaff_x22);
    lVar6 = *(long *)(unaff_x19 + 0x38);
    lVar5 = *(long *)(lVar6 + 0x18);
    lVar12 = lVar5;
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_031c09d4(lVar5);
      lVar6 = *(long *)(unaff_x19 + 0x38);
      lVar12 = *(long *)(lVar6 + 0x18);
    }
    uVar13 = *(undefined8 *)(lVar6 + 0x28);
    puVar7 = unaff_x25;
    if (-1 < *(int *)(lVar12 + 0x28)) {
      puVar7 = (undefined8 *)*unaff_x25;
    }
    *(undefined8 **)(unaff_x29 + -0x18) = puVar7;
    FUN_031896ac(lVar5,uVar13,*(undefined8 *)(unaff_x29 + -0x48),uVar2,unaff_x29 + -0x18,
                 unaff_x29 + -0xc);
    if (*(char *)(unaff_x29 + -0xc) == '\0') goto LAB_03c3cda0;
    FUN_0597a900(unaff_x26,5,0);
    uVar2 = (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
    FUN_0597a900(unaff_x26,5,0);
    pvVar3 = (void *)(*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
    memcpy(unaff_x25,pvVar3,unaff_x22);
    lVar6 = *(long *)(unaff_x19 + 0x38);
    lVar5 = *(long *)(lVar6 + 0x18);
    lVar12 = lVar5;
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_031c09d4(lVar5);
      lVar6 = *(long *)(unaff_x19 + 0x38);
      lVar12 = *(long *)(lVar6 + 0x18);
    }
    uVar13 = *(undefined8 *)(lVar6 + 0x28);
    puVar7 = unaff_x25;
    if (-1 < *(int *)(lVar12 + 0x28)) {
      puVar7 = (undefined8 *)*unaff_x25;
    }
    *(undefined8 **)(unaff_x29 + -0x18) = puVar7;
    FUN_031896ac(lVar5,uVar13,*(undefined8 *)(unaff_x29 + -0x50),uVar2,unaff_x29 + -0x18,
                 unaff_x29 + -0xc);
    if (*(char *)(unaff_x29 + -0xc) == '\0') goto LAB_03c3cda0;
    FUN_0597a900(unaff_x26,6,0);
    (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
    FUN_0597a900(unaff_x26,6,0);
    pvVar3 = (void *)(*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
    memcpy(unaff_x25,pvVar3,unaff_x22);
    lVar6 = *(long *)(unaff_x19 + 0x38);
    lVar5 = *(long *)(lVar6 + 0x18);
    lVar12 = lVar5;
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_031c09d4(lVar5);
      lVar6 = *(long *)(unaff_x19 + 0x38);
      lVar12 = *(long *)(lVar6 + 0x18);
    }
    uVar2 = *(undefined8 *)(lVar6 + 0x28);
    puVar7 = unaff_x25;
    if (-1 < *(int *)(lVar12 + 0x28)) {
      puVar7 = (undefined8 *)*unaff_x25;
    }
    *(undefined8 **)(unaff_x29 + -0x18) = puVar7;
    FUN_031896ac(lVar5,uVar2);
    if (*(char *)(unaff_x29 + -0xc) == '\0') goto LAB_03c3cda0;
    FUN_0597a900(unaff_x26,7,0);
    (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
    FUN_0597a900(unaff_x26,7,0);
    pvVar3 = (void *)(*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
    memcpy(unaff_x25,pvVar3,unaff_x22);
    lVar6 = *(long *)(unaff_x19 + 0x38);
    lVar5 = *(long *)(lVar6 + 0x18);
    lVar12 = lVar5;
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_031c09d4(lVar5);
      lVar6 = *(long *)(unaff_x19 + 0x38);
      lVar12 = *(long *)(lVar6 + 0x18);
    }
    uVar2 = *(undefined8 *)(lVar6 + 0x28);
    puVar7 = unaff_x25;
    if (-1 < *(int *)(lVar12 + 0x28)) {
      puVar7 = (undefined8 *)*unaff_x25;
    }
    *(undefined8 **)(unaff_x29 + -0x18) = puVar7;
    FUN_031896ac(lVar5,uVar2);
    if (*(char *)(unaff_x29 + -0xc) == '\0') goto LAB_03c3cda0;
    unaff_x26 = FUN_0597a900(unaff_x26,8,0);
    unaff_w23 = uVar9 - 8;
    in_w8 = uVar9;
  }
  uVar10 = uVar9 - 4;
  if ((int)uVar9 < 4) {
    lVar12 = *(long *)(unaff_x29 + -0x28);
    uVar13 = *(undefined8 *)(unaff_x29 + -0x58);
    uVar10 = uVar9;
LAB_03c3ccc4:
                    /* try { // try from 03c3ccc8 to 03d3cd1b has its CatchHandler @ 03c3cd5c */
    if ((int)uVar10 < 1) {
      bVar1 = true;
    }
    else {
      iVar11 = uVar10 + 1;
      do {
        uVar2 = (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
        pvVar3 = (void *)(*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
        memcpy(unaff_x25,pvVar3,unaff_x22);
        lVar8 = *(long *)(unaff_x19 + 0x38);
        lVar6 = *(long *)(lVar8 + 0x18);
        lVar5 = lVar6;
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_031c09d4(lVar6);
          lVar8 = *(long *)(unaff_x19 + 0x38);
          lVar5 = *(long *)(lVar8 + 0x18);
        }
        uVar4 = *(undefined8 *)(lVar8 + 0x28);
        puVar7 = unaff_x25;
        if (-1 < *(int *)(lVar5 + 0x28)) {
          puVar7 = (undefined8 *)*unaff_x25;
        }
        *(undefined8 **)(unaff_x29 + -0x18) = puVar7;
        FUN_031896ac(lVar6,uVar4,uVar13,uVar2,unaff_x29 + -0x18,unaff_x29 + -0xc);
        bVar1 = *(char *)(unaff_x29 + -0xc) != '\0';
        if (*(char *)(unaff_x29 + -0xc) == '\0') break;
        unaff_x26 = FUN_0597a900(unaff_x26,1,0);
        iVar11 = iVar11 + -1;
      } while (1 < iVar11);
    }
  }
  else {
    uVar2 = (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
    pvVar3 = (void *)(*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
    memcpy(unaff_x25,pvVar3,unaff_x22);
    lVar8 = *(long *)(unaff_x19 + 0x38);
    lVar12 = *(long *)(unaff_x29 + -0x28);
    uVar13 = *(undefined8 *)(unaff_x29 + -0x58);
    lVar6 = *(long *)(lVar8 + 0x18);
    lVar5 = lVar6;
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_031c09d4(lVar6);
      lVar8 = *(long *)(unaff_x19 + 0x38);
      lVar5 = *(long *)(lVar8 + 0x18);
    }
    uVar4 = *(undefined8 *)(lVar8 + 0x28);
    puVar7 = unaff_x25;
    if (-1 < *(int *)(lVar5 + 0x28)) {
      puVar7 = (undefined8 *)*unaff_x25;
    }
    *(undefined8 **)(unaff_x29 + -0x18) = puVar7;
    FUN_031896ac(lVar6,uVar4,*(undefined8 *)(unaff_x29 + -0x60),uVar2,unaff_x29 + -0x18,
                 unaff_x29 + -0xc);
    if (*(char *)(unaff_x29 + -0xc) != '\0') {
      FUN_0597a900(unaff_x26,1,0);
      uVar2 = (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
      FUN_0597a900(unaff_x26,1,0);
      pvVar3 = (void *)(*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
      memcpy(unaff_x25,pvVar3,unaff_x22);
      lVar8 = *(long *)(unaff_x19 + 0x38);
      lVar6 = *(long *)(lVar8 + 0x18);
      lVar5 = lVar6;
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_031c09d4(lVar6);
        lVar8 = *(long *)(unaff_x19 + 0x38);
        lVar5 = *(long *)(lVar8 + 0x18);
      }
      uVar4 = *(undefined8 *)(lVar8 + 0x28);
      puVar7 = unaff_x25;
      if (-1 < *(int *)(lVar5 + 0x28)) {
        puVar7 = (undefined8 *)*unaff_x25;
      }
      *(undefined8 **)(unaff_x29 + -0x18) = puVar7;
      FUN_031896ac(lVar6,uVar4,*(undefined8 *)(unaff_x29 + -0x68),uVar2,unaff_x29 + -0x18,
                   unaff_x29 + -0xc);
      if (*(char *)(unaff_x29 + -0xc) != '\0') {
        FUN_0597a900(unaff_x26,2,0);
        uVar2 = (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
        FUN_0597a900(unaff_x26,2,0);
        pvVar3 = (void *)(*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
        memcpy(unaff_x25,pvVar3,unaff_x22);
        lVar8 = *(long *)(unaff_x19 + 0x38);
        lVar6 = *(long *)(lVar8 + 0x18);
        lVar5 = lVar6;
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_031c09d4(lVar6);
          lVar8 = *(long *)(unaff_x19 + 0x38);
          lVar5 = *(long *)(lVar8 + 0x18);
        }
        uVar4 = *(undefined8 *)(lVar8 + 0x28);
        puVar7 = unaff_x25;
        if (-1 < *(int *)(lVar5 + 0x28)) {
          puVar7 = (undefined8 *)*unaff_x25;
        }
        *(undefined8 **)(unaff_x29 + -0x18) = puVar7;
        FUN_031896ac(lVar6,uVar4,*(undefined8 *)(unaff_x29 + -0x70),uVar2,unaff_x29 + -0x18,
                     unaff_x29 + -0xc);
        if (*(char *)(unaff_x29 + -0xc) != '\0') {
          FUN_0597a900(unaff_x26,3,0);
          uVar2 = (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
          FUN_0597a900(unaff_x26,3,0);
          pvVar3 = (void *)(*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))();
          memcpy(unaff_x25,pvVar3,unaff_x22);
          lVar8 = *(long *)(unaff_x19 + 0x38);
          lVar6 = *(long *)(lVar8 + 0x18);
          lVar5 = lVar6;
          if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_031c09d4(lVar6);
            lVar8 = *(long *)(unaff_x19 + 0x38);
            lVar5 = *(long *)(lVar8 + 0x18);
          }
          uVar4 = *(undefined8 *)(lVar8 + 0x28);
          puVar7 = unaff_x25;
          if (-1 < *(int *)(lVar5 + 0x28)) {
            puVar7 = (undefined8 *)*unaff_x25;
          }
          *(undefined8 **)(unaff_x29 + -0x18) = puVar7;
          FUN_031896ac(lVar6,uVar4,*(undefined8 *)(unaff_x29 + -0x78),uVar2,unaff_x29 + -0x18,
                       unaff_x29 + -0xc);
          if (*(char *)(unaff_x29 + -0xc) != '\0') {
            unaff_x26 = FUN_0597a900(unaff_x26,4,0);
            goto LAB_03c3ccc4;
          }
        }
      }
    }
LAB_03c3cda4:
    bVar1 = false;
  }
  if (*(long *)(lVar12 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar1;
}


