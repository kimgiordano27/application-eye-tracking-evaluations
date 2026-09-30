/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.BuildingBlocks.PointAndLocate$$GetRaycastRay
ENTRY_POINT: 0775a7c4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 163
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


bool Meta_XR_MRUtilityKit_BuildingBlocks_PointAndLocate__GetRaycastRay(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  long *unaff_x19;
  int unaff_w20;
  long unaff_x21;
  undefined8 uVar11;
  long lVar12;
  undefined1 unaff_w24;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  int iStack000000000000002c;
  
  while (param_1 != 0) {
    iVar7 = 0;
    while (iVar1 = *(int *)(param_1 + 0x18), iVar7 < iVar1) {
      lVar12 = unaff_x19[0x12];
      lVar8 = FUN_05badb74(param_1,iVar7,*unaff_x28);
      if ((lVar8 == 0) || (uVar6 = FUN_0952fcb8(lVar8,0), lVar12 == 0)) goto LAB_0775ab98;
      FUN_0731afd4(lVar12,uVar6,unaff_x21,*unaff_x29);
      param_1 = *(long *)(unaff_x21 + 0x28);
      iVar7 = iVar7 + 1;
      if (param_1 == 0) goto LAB_0775ab98;
    }
    lVar8 = *(long *)(unaff_x21 + 0x30);
    if (iVar1 < 1) {
      if (lVar8 == 0) break;
      if (0 < *(int *)(lVar8 + 0x18)) goto LAB_0775a840;
    }
    else {
      if (lVar8 == 0) break;
LAB_0775a840:
      *(undefined4 *)(lVar8 + 0x18) = 0;
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
      if (0 < iVar1) {
        FUN_07a61000(*(undefined8 *)(param_1 + 0x10),0,iVar1,0);
      }
      *(undefined4 *)(unaff_x21 + 0x1c) = 0;
      *(undefined4 *)(unaff_x21 + 0x20) = 0;
      *(undefined1 *)(unaff_x21 + 0x40) = unaff_w24;
    }
    lVar8 = unaff_x19[0x13];
    if (lVar8 == 0) break;
    unaff_w20 = unaff_w20 + 1;
    if (*(int *)(lVar8 + 0x18) <= unaff_w20) {
      iVar7 = (**(code **)(*unaff_x19 + 0x4f8))();
      puVar5 = PTR_DAT_09f329c8;
      puVar4 = PTR_DAT_09f329c0;
      puVar3 = PTR_DAT_09f28f78;
      puVar2 = PTR_DAT_09f1e5f0;
      if (iVar7 < 4) goto LAB_0775ab30;
      iStack000000000000002c = 0;
      lVar8 = unaff_x19[0x13];
      uVar11 = *(undefined8 *)PTR_DAT_09f329e0;
      if (lVar8 != 0) goto LAB_0775a8e8;
      break;
    }
    unaff_x21 = FUN_05badb74(lVar8,unaff_w20,*(undefined8 *)PTR_DAT_09f30d78);
    if (unaff_x21 == 0) break;
    param_1 = *(long *)(unaff_x21 + 0x28);
  }
LAB_0775ab98:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
LAB_0775a8e8:
  if (*(int *)(lVar8 + 0x18) <= iStack000000000000002c) {
    lVar8 = (**(code **)(*unaff_x19 + 0x4b8))();
    if ((lVar8 != 0) && (lVar8 = FUN_0952a094(lVar8,0), lVar8 != 0)) {
      uStack0000000000000028 = FUN_0953d2f8(lVar8,0);
      uVar10 = FUN_07a3b850(&stack0x00000028,0);
      uVar11 = FUN_078b4f58(uVar11,*(undefined8 *)PTR_DAT_09f329e8,uVar10,0);
      plVar9 = (long *)FUN_04447c90(*(undefined8 *)PTR_DAT_09f20d20,1);
      in_stack_00000020._4_4_ = (**(code **)(*unaff_x19 + 0x4f8))();
      lVar8 = thunk_FUN_04484e3c(*(undefined8 *)PTR_DAT_09f31348,(long)&stack0x00000020 + 4);
      if (plVar9 != (long *)0x0) {
        if ((lVar8 != 0) &&
           (lVar12 = thunk_FUN_04485110(lVar8,*(undefined8 *)(*plVar9 + 0x40)), lVar12 == 0)) {
          uVar11 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
          FUN_04447d10(uVar11,0);
        }
        if ((int)plVar9[3] == 0) goto LAB_0775ab9c;
        plVar9[4] = lVar8;
        thunk_FUN_044bb4b4(plVar9 + 4,lVar8);
        FUN_0771ec00(uVar11,plVar9,0);
LAB_0775ab30:
        if (unaff_x19[0x13] != 0) {
          return 0 < *(int *)(unaff_x19[0x13] + 0x18);
        }
      }
    }
    goto LAB_0775ab98;
  }
  lVar8 = FUN_04447c90(*(undefined8 *)puVar2,6);
  if (lVar8 == 0) goto LAB_0775ab98;
  if (*(int *)(lVar8 + 0x18) == 0) {
LAB_0775ab9c:
                    /* WARNING: Subroutine does not return */
    FUN_04447e4c();
  }
  *(undefined8 *)(lVar8 + 0x20) = uVar11;
  thunk_FUN_044bb4b4((undefined8 *)(lVar8 + 0x20),uVar11);
  if (*(uint *)(lVar8 + 0x18) < 2) goto LAB_0775ab9c;
  *(undefined8 *)(lVar8 + 0x28) = *(undefined8 *)puVar4;
  thunk_FUN_044bb4b4((undefined8 *)(lVar8 + 0x28));
  uVar11 = FUN_07a3b850((long)&stack0x00000028 + 4,0);
  if (*(uint *)(lVar8 + 0x18) < 3) goto LAB_0775ab9c;
  *(undefined8 *)(lVar8 + 0x30) = uVar11;
  thunk_FUN_044bb4b4((undefined8 *)(lVar8 + 0x30),uVar11);
  if (*(uint *)(lVar8 + 0x18) < 4) goto LAB_0775ab9c;
  *(undefined8 *)(lVar8 + 0x38) = *(undefined8 *)puVar3;
  thunk_FUN_044bb4b4();
  if ((((unaff_x19[0x13] == 0) ||
       (lVar12 = FUN_05badb74(unaff_x19[0x13],iStack000000000000002c,*(undefined8 *)PTR_DAT_09f30d78
                             ), lVar12 == 0)) ||
      (plVar9 = *(long **)(lVar12 + 0x10), plVar9 == (long *)0x0)) ||
     (lVar12 = (**(code **)(*plVar9 + 0x818))(plVar9,*(undefined8 *)(*plVar9 + 0x820)), lVar12 == 0)
     ) goto LAB_0775ab98;
  uStack0000000000000028 = *(undefined4 *)(lVar12 + 0x18);
  uVar11 = FUN_07a3b850(&stack0x00000028,0);
  if (*(uint *)(lVar8 + 0x18) < 5) goto LAB_0775ab9c;
  *(undefined8 *)(lVar8 + 0x40) = uVar11;
  thunk_FUN_044bb4b4((undefined8 *)(lVar8 + 0x40),uVar11);
  if (*(uint *)(lVar8 + 0x18) < 6) goto LAB_0775ab9c;
  *(undefined8 *)(lVar8 + 0x48) = *(undefined8 *)puVar5;
  thunk_FUN_044bb4b4();
  uVar11 = FUN_078b57fc(lVar8,0);
  iStack000000000000002c = iStack000000000000002c + 1;
  lVar8 = unaff_x19[0x13];
  if (lVar8 == 0) goto LAB_0775ab98;
  goto LAB_0775a8e8;
}


