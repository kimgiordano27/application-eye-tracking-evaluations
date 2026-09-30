/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.BuildingBlocks.PlaceWithAnchor$$.ctor
ENTRY_POINT: 0775a784
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


bool Meta_XR_MRUtilityKit_BuildingBlocks_PlaceWithAnchor___ctor(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  long *unaff_x19;
  int unaff_w20;
  undefined8 uVar12;
  int iVar13;
  long lVar14;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  int iStack000000000000002c;
  
  while( true ) {
    unaff_w20 = unaff_w20 + 1;
    if (*(int *)(param_1 + 0x18) <= unaff_w20) {
      if (*(int *)(param_1 + 0x18) < 1) goto LAB_0775a890;
      iVar7 = 0;
      goto LAB_0775a7a4;
    }
    lVar8 = FUN_05badb74(param_1,unaff_w20,*(undefined8 *)PTR_DAT_09f30d78);
    if ((lVar8 == 0) || (lVar9 = *(long *)(lVar8 + 0x30), lVar9 == 0)) break;
    iVar7 = 0;
    while (iVar7 < *(int *)(lVar9 + 0x18)) {
      lVar14 = unaff_x19[0x12];
      uVar6 = FUN_05b0452c(lVar9,iVar7,*unaff_x26);
      if (lVar14 == 0) goto LAB_0775ab98;
      FUN_0731c444(lVar14,uVar6,*unaff_x27);
      lVar9 = *(long *)(lVar8 + 0x30);
      iVar7 = iVar7 + 1;
      if (lVar9 == 0) goto LAB_0775ab98;
    }
    param_1 = unaff_x19[0x13];
    if (param_1 == 0) break;
  }
  goto LAB_0775ab98;
LAB_0775a7a4:
  do {
    lVar8 = FUN_05badb74(param_1,iVar7,*(undefined8 *)PTR_DAT_09f30d78);
    if ((lVar8 == 0) || (lVar9 = *(long *)(lVar8 + 0x28), lVar9 == 0)) goto LAB_0775ab98;
    iVar13 = 0;
    while (iVar1 = *(int *)(lVar9 + 0x18), iVar13 < iVar1) {
      lVar14 = unaff_x19[0x12];
      lVar9 = FUN_05badb74(lVar9,iVar13,*unaff_x28);
      if ((lVar9 == 0) || (uVar6 = FUN_0952fcb8(lVar9,0), lVar14 == 0)) goto LAB_0775ab98;
      FUN_0731afd4(lVar14,uVar6,lVar8,*unaff_x29);
      lVar9 = *(long *)(lVar8 + 0x28);
      iVar13 = iVar13 + 1;
      if (lVar9 == 0) goto LAB_0775ab98;
    }
    lVar14 = *(long *)(lVar8 + 0x30);
    if (iVar1 < 1) {
      if (lVar14 == 0) goto LAB_0775ab98;
      if (0 < *(int *)(lVar14 + 0x18)) goto LAB_0775a840;
    }
    else {
      if (lVar14 == 0) goto LAB_0775ab98;
LAB_0775a840:
      *(undefined4 *)(lVar14 + 0x18) = 0;
      *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
      *(undefined4 *)(lVar9 + 0x18) = 0;
      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
      if (0 < iVar1) {
        FUN_07a61000(*(undefined8 *)(lVar9 + 0x10),0,iVar1,0);
      }
      *(undefined4 *)(lVar8 + 0x1c) = 0;
      *(undefined4 *)(lVar8 + 0x20) = 0;
      *(undefined1 *)(lVar8 + 0x40) = 1;
    }
    param_1 = unaff_x19[0x13];
    if (param_1 == 0) goto LAB_0775ab98;
    iVar7 = iVar7 + 1;
  } while (iVar7 < *(int *)(param_1 + 0x18));
LAB_0775a890:
  iVar7 = (**(code **)(*unaff_x19 + 0x4f8))();
  puVar5 = PTR_DAT_09f329c8;
  puVar4 = PTR_DAT_09f329c0;
  puVar3 = PTR_DAT_09f28f78;
  puVar2 = PTR_DAT_09f1e5f0;
  if (iVar7 < 4) {
LAB_0775ab30:
    if (unaff_x19[0x13] != 0) {
      return 0 < *(int *)(unaff_x19[0x13] + 0x18);
    }
  }
  else {
    iStack000000000000002c = 0;
    lVar8 = unaff_x19[0x13];
    uVar12 = *(undefined8 *)PTR_DAT_09f329e0;
    if (lVar8 != 0) {
      while (iStack000000000000002c < *(int *)(lVar8 + 0x18)) {
        lVar8 = FUN_04447c90(*(undefined8 *)puVar2,6);
        if (lVar8 == 0) goto LAB_0775ab98;
        if (*(int *)(lVar8 + 0x18) == 0) goto LAB_0775ab9c;
        *(undefined8 *)(lVar8 + 0x20) = uVar12;
        thunk_FUN_044bb4b4((undefined8 *)(lVar8 + 0x20),uVar12);
        if (*(uint *)(lVar8 + 0x18) < 2) goto LAB_0775ab9c;
        *(undefined8 *)(lVar8 + 0x28) = *(undefined8 *)puVar4;
        thunk_FUN_044bb4b4((undefined8 *)(lVar8 + 0x28));
        uVar12 = FUN_07a3b850((long)&stack0x00000028 + 4,0);
        if (*(uint *)(lVar8 + 0x18) < 3) goto LAB_0775ab9c;
        *(undefined8 *)(lVar8 + 0x30) = uVar12;
        thunk_FUN_044bb4b4((undefined8 *)(lVar8 + 0x30),uVar12);
        if (*(uint *)(lVar8 + 0x18) < 4) goto LAB_0775ab9c;
        *(undefined8 *)(lVar8 + 0x38) = *(undefined8 *)puVar3;
        thunk_FUN_044bb4b4();
        if ((((unaff_x19[0x13] == 0) ||
             (lVar9 = FUN_05badb74(unaff_x19[0x13],iStack000000000000002c,
                                   *(undefined8 *)PTR_DAT_09f30d78), lVar9 == 0)) ||
            (plVar10 = *(long **)(lVar9 + 0x10), plVar10 == (long *)0x0)) ||
           (lVar9 = (**(code **)(*plVar10 + 0x818))(plVar10,*(undefined8 *)(*plVar10 + 0x820)),
           lVar9 == 0)) goto LAB_0775ab98;
        uStack0000000000000028 = *(undefined4 *)(lVar9 + 0x18);
        uVar12 = FUN_07a3b850(&stack0x00000028,0);
        if (*(uint *)(lVar8 + 0x18) < 5) goto LAB_0775ab9c;
        *(undefined8 *)(lVar8 + 0x40) = uVar12;
        thunk_FUN_044bb4b4((undefined8 *)(lVar8 + 0x40),uVar12);
        if (*(uint *)(lVar8 + 0x18) < 6) goto LAB_0775ab9c;
        *(undefined8 *)(lVar8 + 0x48) = *(undefined8 *)puVar5;
        thunk_FUN_044bb4b4();
        uVar12 = FUN_078b57fc(lVar8,0);
        iStack000000000000002c = iStack000000000000002c + 1;
        lVar8 = unaff_x19[0x13];
        if (lVar8 == 0) goto LAB_0775ab98;
      }
      lVar8 = (**(code **)(*unaff_x19 + 0x4b8))();
      if ((lVar8 != 0) && (lVar8 = FUN_0952a094(lVar8,0), lVar8 != 0)) {
        uStack0000000000000028 = FUN_0953d2f8(lVar8,0);
        uVar11 = FUN_07a3b850(&stack0x00000028,0);
        uVar12 = FUN_078b4f58(uVar12,*(undefined8 *)PTR_DAT_09f329e8,uVar11,0);
        plVar10 = (long *)FUN_04447c90(*(undefined8 *)PTR_DAT_09f20d20,1);
        in_stack_00000020._4_4_ = (**(code **)(*unaff_x19 + 0x4f8))();
        lVar8 = thunk_FUN_04484e3c(*(undefined8 *)PTR_DAT_09f31348,(long)&stack0x00000020 + 4);
        if (plVar10 != (long *)0x0) {
          if ((lVar8 != 0) &&
             (lVar9 = thunk_FUN_04485110(lVar8,*(undefined8 *)(*plVar10 + 0x40)), lVar9 == 0)) {
            uVar12 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
            FUN_04447d10(uVar12,0);
          }
          if ((int)plVar10[3] == 0) {
LAB_0775ab9c:
                    /* WARNING: Subroutine does not return */
            FUN_04447e4c();
          }
          plVar10[4] = lVar8;
          thunk_FUN_044bb4b4(plVar10 + 4,lVar8);
          FUN_0771ec00(uVar12,plVar10,0);
          goto LAB_0775ab30;
        }
      }
    }
  }
LAB_0775ab98:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


