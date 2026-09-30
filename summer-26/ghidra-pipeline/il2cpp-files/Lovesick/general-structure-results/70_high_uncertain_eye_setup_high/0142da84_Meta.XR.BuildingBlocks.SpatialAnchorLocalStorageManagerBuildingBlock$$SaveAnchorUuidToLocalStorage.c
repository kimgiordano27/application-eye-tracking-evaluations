/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.SpatialAnchorLocalStorageManagerBuildingBlock$$SaveAnchorUuidToLocalStorage
ENTRY_POINT: 0142da84
PROGRAM: Lovesick-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_BuildingBlocks_SpatialAnchorLocalStorageManagerBuildingBlock__SaveAnchorUuidToLocalStorage
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar8;
  undefined8 uVar9;
  long *unaff_x24;
  undefined4 in_stack_00000008;
  
  unaff_x19[4] = 0;
  *(undefined1 *)((long)unaff_x19 + 0x8c) = 0;
  lVar8 = unaff_x19[4];
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar5 = FUN_0268b4e0(lVar8,0,0);
  if (((unaff_x20 == 0) || ((uVar5 & 1) == 0)) || (*(long *)(unaff_x20 + 0x18) == 0))
  goto LAB_0142db20;
  if ((int)*(long *)(unaff_x20 + 0x18) == 0) goto LAB_0142de98;
  uVar9 = *(undefined8 *)(unaff_x20 + 0x20);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar5 = FUN_02681b9c(uVar9,0,0);
  if ((uVar5 & 1) == 0) {
LAB_0142db20:
    uVar5 = FUN_0142df2c();
    if ((uVar5 & 1) != 0) {
      FUN_0142e4d0();
      iVar3 = (**(code **)(*unaff_x19 + 0x4f8))();
      if (3 < iVar3) {
        plVar6 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,10);
        puVar1 = PTR_DAT_033eec90;
        if (plVar6 == (long *)0x0) {
LAB_0142dea8:
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if ((*(long *)PTR_DAT_033eec90 != 0) &&
           (lVar8 = thunk_FUN_00d6225c(*(long *)PTR_DAT_033eec90,*(undefined8 *)(*plVar6 + 0x40)),
           lVar8 == 0)) {
LAB_0142de9c:
          uVar9 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(uVar9,0);
        }
        if ((int)plVar6[3] == 0) goto LAB_0142de98;
        plVar6[4] = *(long *)puVar1;
        if (unaff_x19[0x13] == 0) goto LAB_0142dea8;
        in_stack_00000008 = *(undefined4 *)(unaff_x19[0x13] + 0x18);
        lVar8 = FUN_0176eb1c(&stack0x00000008,0);
        if ((lVar8 != 0) &&
           (lVar7 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
        goto LAB_0142de9c;
        puVar1 = Method_UnityEngine_GameObject_AddComponent<ScrollRect>__;
        uVar4 = *(uint *)(plVar6 + 3);
        if (uVar4 < 2) {
LAB_0142de98:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        plVar6[5] = lVar8;
        lVar8 = *(long *)puVar1;
        if (lVar8 != 0) {
          lVar8 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*plVar6 + 0x40));
          if (lVar8 == 0) goto LAB_0142de9c;
          uVar4 = *(uint *)(plVar6 + 3);
        }
        if (uVar4 < 3) goto LAB_0142de98;
        plVar6[6] = *(long *)puVar1;
        if (unaff_x20 == 0) {
          in_stack_00000008 = 0;
        }
        else {
          in_stack_00000008 = *(undefined4 *)(unaff_x20 + 0x18);
        }
        lVar8 = FUN_0176eb1c(&stack0x00000008,0);
        if ((lVar8 != 0) &&
           (lVar7 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
        goto LAB_0142de9c;
        puVar1 = PTR_DAT_033f0e50;
        uVar4 = *(uint *)(plVar6 + 3);
        if (uVar4 < 4) goto LAB_0142de98;
        plVar6[7] = lVar8;
        lVar8 = *(long *)puVar1;
        if (lVar8 != 0) {
          lVar8 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*plVar6 + 0x40));
          if (lVar8 == 0) goto LAB_0142de9c;
          uVar4 = *(uint *)(plVar6 + 3);
        }
        if (uVar4 < 5) goto LAB_0142de98;
        plVar6[8] = *(long *)puVar1;
        if (unaff_x21 == 0) {
          in_stack_00000008 = 0;
        }
        else {
          in_stack_00000008 = *(undefined4 *)(unaff_x21 + 0x18);
        }
        lVar8 = FUN_0176eb1c(&stack0x00000008,0);
        if ((lVar8 != 0) &&
           (lVar7 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
        goto LAB_0142de9c;
        puVar1 = Method_Oculus_Interaction_DistanceReticles_ReticleGhostDrawer_<Start>b__18_0__;
        uVar4 = *(uint *)(plVar6 + 3);
        if (uVar4 < 6) goto LAB_0142de98;
        plVar6[9] = lVar8;
        lVar8 = *(long *)puVar1;
        if (lVar8 != 0) {
          lVar8 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*plVar6 + 0x40));
          if (lVar8 == 0) goto LAB_0142de9c;
          uVar4 = *(uint *)(plVar6 + 3);
        }
        puVar2 = StringLiteral_9958;
        if (uVar4 < 7) goto LAB_0142de98;
        plVar6[10] = *(long *)puVar1;
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar8 = FUN_016f5f58(&stack0x0000000c,0);
        if ((lVar8 != 0) &&
           (lVar7 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
        goto LAB_0142de9c;
        puVar1 = System_Collections_Generic_IEnumerator<ShapeRecognizer>_TypeInfo;
        uVar4 = *(uint *)(plVar6 + 3);
        if (uVar4 < 8) goto LAB_0142de98;
        plVar6[0xb] = lVar8;
        lVar8 = *(long *)puVar1;
        if (lVar8 != 0) {
          lVar8 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*plVar6 + 0x40));
          if (lVar8 == 0) goto LAB_0142de9c;
          uVar4 = *(uint *)(plVar6 + 3);
        }
        if (uVar4 < 9) goto LAB_0142de98;
        plVar6[0xc] = *(long *)puVar1;
        lVar8 = FUN_0176eb1c(unaff_x19 + 0x14,0);
        if ((lVar8 != 0) &&
           (lVar7 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
        goto LAB_0142de9c;
        puVar1 = Method_System_Data_SqlTypes_SqlMoney_op_UnaryNegation__;
        if (*(uint *)(plVar6 + 3) < 10) goto LAB_0142de98;
        plVar6[0xd] = lVar8;
        uVar9 = FUN_01600844(plVar6,0);
        lVar7 = *(long *)puVar1;
        lVar8 = *(long *)(lVar7 + 0x38);
        if (lVar8 == 0) {
          FUN_00d59478(lVar7);
          lVar8 = *(long *)(lVar7 + 0x38);
        }
        lVar8 = *(long *)(lVar8 + 0x10);
        if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
          lVar8 = FUN_00d5941c();
        }
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar8 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
        if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
          lVar8 = FUN_00d5941c();
        }
        FUN_013f38b0(uVar9,**(undefined8 **)(lVar8 + 0xb8),0);
      }
      uVar4 = FUN_0142ed58();
      *(undefined4 *)(unaff_x19 + 2) = 1;
      goto LAB_0142dc38;
    }
  }
  else {
    (**(code **)(*unaff_x19 + 0x958))();
    uVar5 = (**(code **)(*unaff_x19 + 0x948))();
    if ((uVar5 & 1) != 0) goto LAB_0142db20;
  }
  uVar4 = 0;
LAB_0142dc38:
  return uVar4 & 1;
}


