/*
FUNCTION_NAME: Meta.XR.MetaXRSpaceWarp$$MetaSetAppSpaceRotation
ENTRY_POINT: 020fadd8
PROGRAM: vrfs-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MetaXRSpaceWarp__MetaSetAppSpaceRotation(long param_1)

{
  uint uVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  uint uVar14;
  
  thunk_FUN_0159f088(*(undefined8 *)(param_1 + 0xea0));
  thunk_FUN_0159f088(PTR_DAT_06deee30);
  thunk_FUN_0159f088(PTR_DAT_06e51f70);
  thunk_FUN_0159f088(PTR_DAT_06d8ac58);
  thunk_FUN_0159f088(PTR_DAT_06e61c20);
  thunk_FUN_0159f088(PTR_DAT_06e5d090);
  *(undefined1 *)(unaff_x20 + 0x1a6) = 1;
  puVar3 = PTR_DAT_06d893c8;
  if (*(char *)(unaff_x19 + 0x1b) != '\0') {
    return;
  }
  cVar2 = *(char *)(unaff_x19 + 0x18);
  lVar7 = *(long *)PTR_DAT_06d893c8;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_016466fc();
    lVar7 = *(long *)puVar3;
  }
  puVar5 = PTR_DAT_06e5d090;
  puVar4 = PTR_DAT_06e35508;
  puVar3 = PTR_DAT_06df55f8;
  if (cVar2 == '\0') {
    lVar8 = *(long *)PTR_DAT_06e5d090;
    uVar11 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x18);
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      lVar8 = *(long *)puVar5;
    }
    lVar7 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x18);
    if (lVar7 == 0) {
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_016466fc();
        lVar8 = *(long *)puVar5;
      }
      uVar12 = **(undefined8 **)(lVar8 + 0xb8);
      lVar7 = thunk_FUN_015d056c(*(undefined8 *)puVar3);
      if (lVar7 == 0) goto LAB_020fb198;
      FUN_022e6dcc(lVar7,uVar12,*(undefined8 *)PTR_DAT_06e51f70,0);
      plVar9 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x18);
      *plVar9 = lVar7;
      thunk_FUN_01656ef8(plVar9,lVar7);
      lVar8 = *(long *)puVar5;
    }
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      lVar8 = *(long *)puVar5;
    }
    lVar13 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x20);
    if (lVar13 == 0) {
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_016466fc();
        lVar8 = *(long *)puVar5;
      }
      uVar12 = **(undefined8 **)(lVar8 + 0xb8);
      lVar13 = thunk_FUN_015d056c(*(undefined8 *)puVar4);
      if (lVar13 == 0) goto LAB_020fb198;
      FUN_022e6dcc(lVar13,uVar12,*(undefined8 *)PTR_DAT_06d8ac58,0);
      plVar9 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x20);
      *plVar9 = lVar13;
      goto LAB_020fb038;
    }
  }
  else {
    lVar8 = *(long *)PTR_DAT_06e5d090;
    uVar11 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x10);
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      lVar8 = *(long *)puVar5;
    }
    lVar7 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
    if (lVar7 == 0) {
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_016466fc();
        lVar8 = *(long *)puVar5;
      }
      uVar12 = **(undefined8 **)(lVar8 + 0xb8);
      lVar7 = thunk_FUN_015d056c(*(undefined8 *)puVar3);
      if (lVar7 == 0) goto LAB_020fb198;
      FUN_022e6dcc(lVar7,uVar12,*(undefined8 *)PTR_DAT_06da1ea0,0);
      plVar9 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 8);
      *plVar9 = lVar7;
      thunk_FUN_01656ef8(plVar9,lVar7);
      lVar8 = *(long *)puVar5;
    }
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      lVar8 = *(long *)puVar5;
    }
    lVar13 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x10);
    if (lVar13 == 0) {
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_016466fc();
        lVar8 = *(long *)puVar5;
      }
      uVar12 = **(undefined8 **)(lVar8 + 0xb8);
      lVar13 = thunk_FUN_015d056c(*(undefined8 *)puVar4);
      if (lVar13 == 0) goto LAB_020fb198;
      FUN_022e6dcc(lVar13,uVar12,*(undefined8 *)PTR_DAT_06deee30,0);
      plVar9 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x10);
      *plVar9 = lVar13;
LAB_020fb038:
      thunk_FUN_01656ef8(plVar9,lVar13);
    }
  }
  lVar7 = FUN_01b6daf4(uVar11,lVar7,lVar13,*(undefined8 *)PTR_DAT_06e07dc8);
  puVar3 = PTR_DAT_06d8cbb8;
  plVar9 = (long *)(unaff_x19 + 0x10);
  lVar8 = *plVar9;
  if (lVar8 == 0) {
LAB_020fb198:
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  uVar1 = *(uint *)(lVar8 + 0x18);
  if (0 < (int)uVar1) {
    uVar14 = 0;
    do {
      if (uVar1 <= uVar14) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eebc();
      }
      lVar13 = *(long *)(lVar8 + (long)(int)uVar14 * 8 + 0x20);
      if ((lVar13 == 0) || (lVar7 == 0)) goto LAB_020fb198;
      uVar6 = FUN_04278a08(lVar7,*(undefined4 *)(lVar13 + 0x14),*(undefined8 *)puVar3);
      *(undefined4 *)(lVar13 + 0x10) = uVar6;
      uVar1 = *(uint *)(lVar8 + 0x18);
      uVar14 = uVar14 + 1;
    } while ((int)uVar14 < (int)uVar1);
  }
  lVar7 = *(long *)puVar5;
  lVar8 = *plVar9;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_016466fc();
    lVar7 = *(long *)puVar5;
  }
  puVar3 = PTR_DAT_06e24698;
  lVar13 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x28);
  if (lVar13 == 0) {
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      lVar7 = *(long *)puVar5;
    }
    uVar11 = **(undefined8 **)(lVar7 + 0xb8);
    lVar13 = thunk_FUN_015d056c(*(undefined8 *)puVar3);
    if (lVar13 == 0) goto LAB_020fb198;
    FUN_020d36bc(lVar13,uVar11,*(undefined8 *)PTR_DAT_06e61c20,0);
    plVar10 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x28);
    *plVar10 = lVar13;
    thunk_FUN_01656ef8(plVar10,lVar13);
  }
  puVar3 = PTR_DAT_06d976d8;
  uVar11 = FUN_01b60bcc(lVar8,lVar13,*(undefined8 *)PTR_DAT_06e12410);
  uVar11 = FUN_01b6d874(uVar11,*(undefined8 *)puVar3);
  *(undefined8 *)(unaff_x19 + 0x10) = uVar11;
  thunk_FUN_01656ef8(plVar9,uVar11);
  *(undefined1 *)(unaff_x19 + 0x1b) = 1;
  return;
}


