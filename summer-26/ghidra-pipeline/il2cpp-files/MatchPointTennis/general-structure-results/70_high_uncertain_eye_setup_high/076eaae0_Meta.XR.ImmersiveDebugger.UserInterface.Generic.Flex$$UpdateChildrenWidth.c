/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Flex$$UpdateChildrenWidth
ENTRY_POINT: 076eaae0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Flex__UpdateChildrenWidth(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 *unaff_x22;
  undefined8 uVar13;
  long unaff_x23;
  undefined8 uVar14;
  uint uStack000000000000000c;
  
  FUN_04447ba8(PTR_DAT_09f2f438);
  FUN_04447ba8(PTR_DAT_09f2f358);
  FUN_04447ba8(PTR_DAT_09f2f440);
  FUN_04447ba8(PTR_DAT_09f2f448);
  FUN_04447ba8(PTR_DAT_09f2f450);
  FUN_04447ba8(PTR_DAT_09f2f458);
  FUN_04447ba8(PTR_DAT_09f2f460);
  FUN_04447ba8(PTR_DAT_09f2f468);
  FUN_04447ba8(PTR_DAT_09f2f470);
  FUN_04447ba8(PTR_DAT_09f2f478);
  FUN_04447ba8(PTR_DAT_09f2f3f0);
  FUN_04447ba8(PTR_DAT_09f2f480);
  FUN_04447ba8(PTR_DAT_09f1e538);
  *(undefined1 *)(unaff_x23 + 0xea0) = 1;
  puVar4 = PTR_DAT_09f2f3f0;
  uStack000000000000000c = 0;
  lVar7 = *(long *)(unaff_x19 + 0x2b0);
  if (lVar7 == 0) goto LAB_076eb030;
  uVar1 = *(undefined4 *)(unaff_x22 + 2);
  iVar2 = *(int *)(lVar7 + 0x18) + -1;
  if (*(int *)(lVar7 + 0x18) < 1) {
    lVar7 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2f420,iVar2);
    FUN_07a80df4(lVar7,0);
  }
  else {
    lVar7 = FUN_05badb74(lVar7,iVar2,*(undefined8 *)PTR_DAT_09f2f3f0);
    lVar9 = *(long *)(unaff_x19 + 0x2b0);
    if (lVar9 == 0) goto LAB_076eb030;
    FUN_05baf638(lVar9,*(int *)(lVar9 + 0x18) + -1,*(undefined8 *)PTR_DAT_09f2f470);
  }
  if (lVar7 == 0) goto LAB_076eb030;
  FUN_076e5e50(lVar7,*unaff_x22,unaff_x22[1]);
  if (*(long *)(unaff_x19 + 0x210) == 0) goto LAB_076eb030;
  bVar5 = FUN_07432780(*(long *)(unaff_x19 + 0x210),lVar7,&stack0x0000000c,
                       *(undefined8 *)PTR_DAT_09f2f448);
  if ((bVar5 & 1) == 0) {
    if (*(long *)(unaff_x19 + 0xa0) == 0) goto LAB_076eb030;
    uVar14 = FUN_07376aa8(*(long *)(unaff_x19 + 0xa0),uVar1,*(undefined8 *)PTR_DAT_09f2f450);
    *(undefined8 *)(lVar7 + 0x28) = uVar14;
    thunk_FUN_044bb4b4();
    lVar9 = *(long *)(unaff_x19 + 0x200);
    if (lVar9 == 0) goto LAB_076eb030;
    uStack000000000000000c = *(uint *)(lVar9 + 0x18);
    lVar10 = *(long *)(lVar9 + 0x10);
    lVar12 = *(long *)PTR_DAT_09f2f468;
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    if (lVar10 == 0) goto LAB_076eb030;
    if (uStack000000000000000c < *(uint *)(lVar10 + 0x18)) {
      *(uint *)(lVar9 + 0x18) = uStack000000000000000c + 1;
      plVar11 = (long *)(lVar10 + (long)(int)uStack000000000000000c * 8 + 0x20);
      *plVar11 = lVar7;
      thunk_FUN_044bb4b4(plVar11,lVar7);
    }
    else {
      FUN_05bade44(lVar9,lVar7,*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
    }
    if (*(long *)(unaff_x19 + 0x210) == 0) goto LAB_076eb030;
    FUN_07430ca4(*(long *)(unaff_x19 + 0x210),lVar7,uStack000000000000000c,
                 *(undefined8 *)PTR_DAT_09f2f458);
    lVar9 = *(long *)(unaff_x19 + 0x208);
    if (lVar9 != 0) {
      lVar10 = *(long *)(lVar9 + 0x10);
      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
      if (lVar10 == 0) goto LAB_076eb030;
      uVar6 = *(uint *)(lVar9 + 0x18);
      if (uVar6 < *(uint *)(lVar10 + 0x18)) {
        lVar10 = lVar10 + (long)(int)uVar6 * 0x10;
        *(uint *)(lVar9 + 0x18) = uVar6 + 1;
        *(undefined8 *)(lVar10 + 0x20) = unaff_x21;
        *(undefined8 *)(lVar10 + 0x28) = unaff_x20;
      }
      else {
        FUN_05ab7700();
      }
    }
  }
  else {
    lVar9 = *(long *)(unaff_x19 + 0x2b0);
    if (lVar9 == 0) goto LAB_076eb030;
    lVar10 = *(long *)(lVar9 + 0x10);
    lVar12 = *(long *)PTR_DAT_09f2f468;
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    if (lVar10 == 0) goto LAB_076eb030;
    uVar6 = *(uint *)(lVar9 + 0x18);
    if (uVar6 < *(uint *)(lVar10 + 0x18)) {
      *(uint *)(lVar9 + 0x18) = uVar6 + 1;
      plVar11 = (long *)(lVar10 + (long)(int)uVar6 * 8 + 0x20);
      *plVar11 = lVar7;
      thunk_FUN_044bb4b4(plVar11,lVar7);
    }
    else {
      FUN_05bade44(lVar9,lVar7,*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
    }
    if ((*(long *)(unaff_x19 + 0x200) == 0) ||
       (lVar7 = FUN_05badb74(*(long *)(unaff_x19 + 0x200),uStack000000000000000c,
                             *(undefined8 *)puVar4), lVar7 == 0)) goto LAB_076eb030;
    *(int *)(lVar7 + 0x30) = *(int *)(lVar7 + 0x30) + 1;
    if (*(long *)(unaff_x19 + 0x208) != 0) {
      FUN_05ab7454(*(long *)(unaff_x19 + 0x208),uStack000000000000000c);
    }
  }
  puVar4 = PTR_DAT_09f2f428;
  if (*(long *)(unaff_x19 + 0x218) == 0) goto LAB_076eb030;
  FUN_071c086c(*(long *)(unaff_x19 + 0x218),uStack000000000000000c,*(undefined8 *)PTR_DAT_09f2f428);
  if (*(long *)(unaff_x19 + 0x220) != 0) {
    FUN_071c0708();
  }
  if ((bVar5 & *(byte *)(unaff_x19 + 0x1e4) & 1) == 0) {
    uVar14 = *(undefined8 *)(lVar7 + 0x28);
    if ((*(char *)(unaff_x19 + 0x1f8) == '\0') || (uVar8 = FUN_076e6108(), (uVar8 & 1) != 0)) {
      puVar3 = PTR_DAT_09f1e538;
      if (*(int *)(unaff_x19 + 0x1e8) != 7) {
        uVar13 = *(undefined8 *)(unaff_x19 + 0x78);
        if (*(int *)(*(long *)PTR_DAT_09f1e538 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        uVar8 = FUN_0952c404(uVar14,uVar13,0);
        if (((uVar8 & 1) == 0) || ((*(byte *)(unaff_x19 + 0x1e8) & 1) == 0)) {
          uVar13 = *(undefined8 *)(unaff_x19 + 0x80);
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          uVar8 = FUN_0952c404(uVar14,uVar13,0);
          if (((uVar8 & 1) == 0) || ((*(byte *)(unaff_x19 + 0x1e8) >> 1 & 1) == 0)) {
            uVar13 = *(undefined8 *)(unaff_x19 + 0x88);
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
            }
            uVar8 = FUN_0952c404(uVar14,uVar13,0);
            if (((uVar8 & 1) == 0) || ((*(byte *)(unaff_x19 + 0x1e8) >> 2 & 1) == 0))
            goto LAB_076eafac;
          }
        }
      }
      if (*(long *)(unaff_x19 + 0x228) == 0) {
LAB_076eb030:
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      FUN_071c086c(*(long *)(unaff_x19 + 0x228),uStack000000000000000c,*(undefined8 *)puVar4);
      if (*(long *)(unaff_x19 + 0x228) == 0) goto LAB_076eb030;
      uVar6 = *(int *)(*(long *)(unaff_x19 + 0x228) + 0x18) - 1;
      if (*(long *)(unaff_x19 + 0x230) != 0) {
        FUN_071c0708();
      }
      *(undefined1 *)(unaff_x19 + 0x23c) = 1;
      goto LAB_076eaff8;
    }
  }
  else if ((*(char *)(unaff_x19 + 0x1c0) != '\0') || (*(long *)(unaff_x19 + 0x230) != 0)) {
    if ((*(char *)(unaff_x19 + 0x1f8) != '\0') ||
       (uVar6 = uStack000000000000000c, *(int *)(unaff_x19 + 0x1e8) != 7)) {
      if (*(long *)(unaff_x19 + 0x228) == 0) goto LAB_076eb030;
      uVar6 = FUN_071c08f4(*(long *)(unaff_x19 + 0x228),uStack000000000000000c,
                           *(undefined8 *)PTR_DAT_09f2f438);
    }
    if (-1 < (int)uVar6) {
      if (*(long *)(unaff_x19 + 0x230) != 0) {
        FUN_071c067c(*(long *)(unaff_x19 + 0x230),uVar6);
      }
      if (*(char *)(unaff_x19 + 0x1c0) != '\0') {
        if (*(long *)(unaff_x19 + 0x1b8) == 0) goto LAB_076eb030;
        FUN_076eb034(*(long *)(unaff_x19 + 0x1b8),uVar6);
      }
    }
    goto LAB_076eaff8;
  }
LAB_076eafac:
  uVar6 = 0xffffffff;
LAB_076eaff8:
  iVar2 = *(int *)(unaff_x19 + 600);
  if (((0 < iVar2) && (*(int *)(unaff_x19 + 600) = iVar2 + -1, -1 < (int)uVar6)) && (iVar2 == 1)) {
    *(uint *)(unaff_x19 + 0x238) = uVar6;
  }
  return;
}


