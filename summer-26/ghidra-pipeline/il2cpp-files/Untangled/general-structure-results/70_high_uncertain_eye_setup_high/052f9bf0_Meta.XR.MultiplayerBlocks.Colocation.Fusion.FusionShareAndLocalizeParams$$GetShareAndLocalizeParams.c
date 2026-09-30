/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.Fusion.FusionShareAndLocalizeParams$$GetShareAndLocalizeParams
ENTRY_POINT: 052f9bf0
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionShareAndLocalizeParams__GetShareAndLocalizeParams
               (long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x19;
  uint uVar8;
  ulong unaff_x20;
  long *plVar9;
  ulong uVar10;
  int unaff_w22;
  undefined4 unaff_w23;
  undefined8 unaff_x24;
  int unaff_w25;
  long *plVar11;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000018;
  
  while( true ) {
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    FUN_0669dd20(unaff_x24,unaff_x26,unaff_x27,unaff_w25,0);
    lVar7 = *(long *)(unaff_x19 + 0x50);
    if (lVar7 == 0) goto LAB_052f9de4;
    uVar8 = (uint)unaff_x20;
    if (*(uint *)(lVar7 + 0x18) <= uVar8) break;
    unaff_x24 = *(undefined8 *)(lVar7 + unaff_x20 * 8 + 0x20);
    uVar1 = uVar8 - 1;
    if ((int)uVar8 < 1) {
      if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_052f9de4;
      FUN_066a3538(*(long *)(unaff_x19 + 0x40),*(undefined8 *)PTR_DAT_06d3dfe0,in_stack_00000018,0);
      uVar6 = *(undefined8 *)(unaff_x19 + 0x40);
      uVar2 = 7;
      if (*(char *)(unaff_x19 + 0x30) != '\0') {
        uVar2 = 8;
      }
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_02f12b58(7);
      }
      FUN_0669dd20(unaff_x24,in_stack_00000008,uVar6,uVar2,0);
      uVar10 = 0;
      lVar7 = 0x20;
      goto LAB_052f9ca8;
    }
    lVar7 = *(long *)(unaff_x19 + 0x48);
    if (lVar7 == 0) goto LAB_052f9de4;
    if (*(uint *)(lVar7 + 0x18) <= uVar1) break;
    if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_052f9de4;
    unaff_x20 = (ulong)uVar1;
    plVar11 = *(long **)(lVar7 + unaff_x20 * 8 + 0x20);
    FUN_066a3538(*(long *)(unaff_x19 + 0x40),*(undefined8 *)PTR_DAT_06d3dfe0,plVar11,0);
    if (plVar11 == (long *)0x0) goto LAB_052f9de4;
    plVar9 = *(long **)(unaff_x19 + 0x50);
    uVar2 = (**(code **)(*plVar11 + 0x188))(plVar11,*(undefined8 *)(*plVar11 + 400));
    uVar3 = (**(code **)(*plVar11 + 0x1a8))(plVar11,*(undefined8 *)(*plVar11 + 0x1b0));
    lVar7 = FUN_066b5a9c(uVar2,uVar3,0,unaff_w23,0);
    if (plVar9 == (long *)0x0) goto LAB_052f9de4;
    if ((lVar7 != 0) &&
       (lVar4 = thunk_FUN_02ef170c(lVar7,*(undefined8 *)(*plVar9 + 0x40)), lVar4 == 0)) {
      uVar6 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
      FUN_02f07f94(uVar6,0);
    }
    if (*(uint *)(plVar9 + 3) <= uVar1) break;
    plVar9[unaff_x20 + 4] = lVar7;
    thunk_FUN_02f411dc(plVar9 + unaff_x20 + 4,lVar7);
    lVar7 = *(long *)(unaff_x19 + 0x50);
    unaff_w25 = unaff_w22;
    if (*(char *)(unaff_x19 + 0x30) != '\0') {
      unaff_w25 = unaff_w22 + 1;
    }
    if (lVar7 == 0) goto LAB_052f9de4;
    if (*(uint *)(lVar7 + 0x18) <= uVar1) break;
    param_1 = *unaff_x29;
    unaff_x26 = *(undefined8 *)(lVar7 + unaff_x20 * 8 + 0x20);
    unaff_x27 = *(undefined8 *)(unaff_x19 + 0x40);
  }
LAB_052f9de8:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c8();
LAB_052f9ca8:
  lVar4 = *(long *)(unaff_x19 + 0x48);
  if (lVar4 == 0) {
LAB_052f9de4:
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  if (*(uint *)(lVar4 + 0x18) <= uVar10) goto LAB_052f9de8;
  uVar6 = *(undefined8 *)(lVar4 + lVar7);
  if (*(int *)(*unaff_x28 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar5 = FUN_066c971c(uVar6,0,0);
  if ((uVar5 & 1) != 0) {
    lVar4 = *(long *)(unaff_x19 + 0x48);
    if (lVar4 == 0) goto LAB_052f9de4;
    if (*(uint *)(lVar4 + 0x18) <= uVar10) goto LAB_052f9de8;
    FUN_066b42b8(*(undefined8 *)(lVar4 + lVar7),0);
  }
  lVar4 = *(long *)(unaff_x19 + 0x50);
  if (lVar4 == 0) goto LAB_052f9de4;
  if (*(uint *)(lVar4 + 0x18) <= uVar10) goto LAB_052f9de8;
  uVar6 = *(undefined8 *)(lVar4 + lVar7);
  if (*(int *)(*unaff_x28 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar5 = FUN_066c971c(uVar6,0,0);
  if ((uVar5 & 1) != 0) {
    lVar4 = *(long *)(unaff_x19 + 0x50);
    if (lVar4 == 0) goto LAB_052f9de4;
    if (*(uint *)(lVar4 + 0x18) <= uVar10) goto LAB_052f9de8;
    FUN_066b42b8(*(undefined8 *)(lVar4 + lVar7),0);
  }
  lVar4 = *(long *)(unaff_x19 + 0x48);
  if (lVar4 == 0) goto LAB_052f9de4;
  if (*(uint *)(lVar4 + 0x18) <= uVar10) goto LAB_052f9de8;
  *(undefined8 *)(lVar4 + lVar7) = 0;
  thunk_FUN_02f411dc((undefined8 *)(lVar4 + lVar7),0);
  lVar4 = *(long *)(unaff_x19 + 0x50);
  if (lVar4 == 0) goto LAB_052f9de4;
  if (*(uint *)(lVar4 + 0x18) <= uVar10) goto LAB_052f9de8;
  *(undefined8 *)(lVar4 + lVar7) = 0;
  thunk_FUN_02f411dc((undefined8 *)(lVar4 + lVar7),0);
  lVar7 = lVar7 + 8;
  uVar10 = uVar10 + 1;
  if (lVar7 == 0xa0) {
    FUN_066b42b8(in_stack_00000000,0);
    return;
  }
  goto LAB_052f9ca8;
}


