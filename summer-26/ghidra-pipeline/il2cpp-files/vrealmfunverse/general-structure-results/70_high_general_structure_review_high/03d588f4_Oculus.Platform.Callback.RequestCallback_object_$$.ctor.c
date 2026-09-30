/*
FUNCTION_NAME: Oculus.Platform.Callback.RequestCallback<object>$$.ctor
ENTRY_POINT: 03d588f4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2
*/


void Oculus_Platform_Callback_RequestCallback<object>___ctor(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long *plVar8;
  int iVar9;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  plVar8 = *(long **)(unaff_x21 + 0x10);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02b76218(lVar4);
  }
  lVar5 = *plVar8;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == lVar4) {
        puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_03d589a4;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined8 *)FUN_02b7654c(plVar8,lVar4,0);
LAB_03d589a4:
  iVar1 = (*(code *)*puVar2)(plVar8,puVar2[1]);
  if (0 < iVar1) {
    iVar9 = 0;
    do {
      plVar8 = *(long **)(unaff_x21 + 0x10);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar4 = **(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02b76218(lVar4);
      }
      lVar5 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar4) {
            puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_03d58a38;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)FUN_02b7654c(plVar8,lVar4,0);
LAB_03d58a38:
      (*(code *)*puVar2)(&stack0x00000028,plVar8,iVar9,puVar2[1]);
      lVar4 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                        (*(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28));
      if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      if ((lVar4 != 0) &&
         (lVar5 = thunk_FUN_02b79548(lVar4,*(undefined8 *)(*unaff_x22 + 0x40)), lVar5 == 0)) {
        uVar3 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
        FUN_02b3c988(uVar3,0);
      }
      if (*(uint *)(unaff_x22 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      unaff_x22[(long)(int)unaff_w19 + 4] = lVar4;
      thunk_FUN_02bb0e9c(unaff_x22 + (long)(int)unaff_w19 + 4,lVar4);
      iVar9 = iVar9 + 1;
      unaff_w19 = unaff_w19 + 1;
    } while (iVar9 != iVar1);
  }
  return;
}


