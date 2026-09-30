/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.BuildingBlocks.SpaceLocator$$set_MaxRaycastDistance
ENTRY_POINT: 0775a924
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;weak_pose_support;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;weak_vector_component_hits_1;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


bool Meta_XR_MRUtilityKit_BuildingBlocks_SpaceLocator__set_MaxRaycastDistance(void)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  int iStack000000000000002c;
  
code_r0x0775a924:
  if (*(uint *)(unaff_x22 + -1) < 2) {
LAB_0775ab9c:
                    /* WARNING: Subroutine does not return */
    FUN_04447e4c();
  }
  *(undefined8 *)(unaff_x20 + 0x28) = *unaff_x24;
  thunk_FUN_044bb4b4((undefined8 *)(unaff_x20 + 0x28));
  uVar1 = FUN_07a3b850((long)&stack0x00000028 + 4,0);
  if (*(uint *)(unaff_x20 + 0x18) < 3) goto LAB_0775ab9c;
  *(undefined8 *)(unaff_x20 + 0x30) = uVar1;
  thunk_FUN_044bb4b4((undefined8 *)(unaff_x20 + 0x30),uVar1);
  if (*(uint *)(unaff_x20 + 0x18) < 4) goto LAB_0775ab9c;
  *(undefined8 *)(unaff_x20 + 0x38) = *unaff_x25;
  thunk_FUN_044bb4b4();
  if ((((unaff_x19[0x13] != 0) &&
       (lVar2 = FUN_05badb74(unaff_x19[0x13],iStack000000000000002c,*(undefined8 *)PTR_DAT_09f30d78)
       , lVar2 != 0)) && (plVar3 = *(long **)(lVar2 + 0x10), plVar3 != (long *)0x0)) &&
     (lVar2 = (**(code **)(*plVar3 + 0x818))(plVar3,*(undefined8 *)(*plVar3 + 0x820)), lVar2 != 0))
  {
    uStack0000000000000028 = *(undefined4 *)(lVar2 + 0x18);
    uVar1 = FUN_07a3b850(&stack0x00000028,0);
    if (*(uint *)(unaff_x20 + 0x18) < 5) goto LAB_0775ab9c;
    *(undefined8 *)(unaff_x20 + 0x40) = uVar1;
    thunk_FUN_044bb4b4((undefined8 *)(unaff_x20 + 0x40),uVar1);
    if (*(uint *)(unaff_x20 + 0x18) < 6) goto LAB_0775ab9c;
    *(undefined8 *)(unaff_x20 + 0x48) = *unaff_x26;
    thunk_FUN_044bb4b4();
    uVar1 = FUN_078b57fc(unaff_x20,0);
    iStack000000000000002c = iStack000000000000002c + 1;
    if (unaff_x19[0x13] == 0) goto LAB_0775ab98;
    if (iStack000000000000002c < *(int *)(unaff_x19[0x13] + 0x18)) {
      unaff_x20 = FUN_04447c90(*unaff_x23,6);
      if (unaff_x20 == 0) goto LAB_0775ab98;
      if (*(int *)(unaff_x20 + 0x18) == 0) goto LAB_0775ab9c;
      unaff_x22 = (undefined8 *)(unaff_x20 + 0x20);
      *unaff_x22 = uVar1;
      thunk_FUN_044bb4b4(unaff_x22,uVar1);
      goto code_r0x0775a924;
    }
    lVar2 = (**(code **)(*unaff_x19 + 0x4b8))();
    if ((lVar2 != 0) && (lVar2 = FUN_0952a094(lVar2,0), lVar2 != 0)) {
      uStack0000000000000028 = FUN_0953d2f8(lVar2,0);
      uVar4 = FUN_07a3b850(&stack0x00000028,0);
      uVar1 = FUN_078b4f58(uVar1,*(undefined8 *)PTR_DAT_09f329e8,uVar4,0);
      plVar3 = (long *)FUN_04447c90(*(undefined8 *)PTR_DAT_09f20d20,1);
      in_stack_00000020._4_4_ = (**(code **)(*unaff_x19 + 0x4f8))();
      lVar2 = thunk_FUN_04484e3c(*(undefined8 *)PTR_DAT_09f31348,(long)&stack0x00000020 + 4);
      if (plVar3 == (long *)0x0) goto LAB_0775ab98;
      if ((lVar2 != 0) &&
         (lVar5 = thunk_FUN_04485110(lVar2,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
        uVar1 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
        FUN_04447d10(uVar1,0);
      }
      if ((int)plVar3[3] == 0) goto LAB_0775ab9c;
      plVar3[4] = lVar2;
      thunk_FUN_044bb4b4(plVar3 + 4,lVar2);
      FUN_0771ec00(uVar1,plVar3,0);
      if (unaff_x19[0x13] != 0) {
        return 0 < *(int *)(unaff_x19[0x13] + 0x18);
      }
    }
  }
LAB_0775ab98:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


