/*
FUNCTION_NAME: System.ReadOnlySpan<OVRPlugin.Vector4f>$$Slice
ENTRY_POINT: 03d499ac
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 71
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;ray_or_cast_sink_hits_1;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_ReadOnlySpan<OVRPlugin_Vector4f>__Slice(long param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long *plVar9;
  int iVar10;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  plVar2 = (long *)thunk_FUN_02b79548(param_2,**(undefined8 **)(param_1 + 0x48));
  if (plVar2 == (long *)0x0) {
    FUN_04d9c940();
  }
  plVar9 = *(long **)(unaff_x21 + 0x10);
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02b76218(lVar5);
  }
  lVar6 = *plVar9;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
                    /* try { // try from 03d499fc to 03e49b7b has its CatchHandler @ 03d499fc
                       catch() { ... } // from try @ 03d499fc with catch @ 03d499fc
                       catch() { ... } // from try @ 03d49c78 with catch @ 03d499fc
                       catch() { ... } // from try @ 03d49d08 with catch @ 03d499fc
                       catch() { ... } // from try @ 03d49d5c with catch @ 03d499fc */
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar5) {
        puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_03d49a74;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_02b7654c(plVar9,lVar5,0);
LAB_03d49a74:
  iVar1 = (*(code *)*puVar3)(plVar9,puVar3[1]);
  if (0 < iVar1) {
    iVar10 = 0;
    do {
      plVar9 = *(long **)(unaff_x21 + 0x10);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar5 = **(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02b76218(lVar5);
      }
      lVar6 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar5) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_03d49b08;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_02b7654c(plVar9,lVar5,0);
LAB_03d49b08:
      (*(code *)*puVar3)(&stack0x00000018,plVar9,iVar10,puVar3[1]);
      lVar5 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                        (*(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28));
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      if ((lVar5 != 0) &&
         (lVar6 = thunk_FUN_02b79548(lVar5,*(undefined8 *)(*plVar2 + 0x40)), lVar6 == 0)) {
        uVar4 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
        FUN_02b3c988(uVar4,0);
      }
      if (*(uint *)(plVar2 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      plVar2[(long)(int)unaff_w19 + 4] = lVar5;
      thunk_FUN_02bb0e9c(plVar2 + (long)(int)unaff_w19 + 4,lVar5);
      iVar10 = iVar10 + 1;
      unaff_w19 = unaff_w19 + 1;
    } while (iVar10 != iVar1);
  }
  return;
}


