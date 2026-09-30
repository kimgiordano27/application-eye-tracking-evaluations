/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<float>$$get_Values
ENTRY_POINT: 0414b848
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 76
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;ray_or_cast_sink_hits_1;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<float>__get_Values(undefined8 param_1,long param_2)

{
  uint uVar1;
  int *piVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  int *piVar7;
  ulong uVar8;
  undefined8 in_stack_00000008;
  
  if ((*(ushort *)(param_2 + 0x135) & 1) == 0) {
    FUN_02b76218(param_2);
  }
  lVar3 = thunk_FUN_02b79548();
  if (lVar3 != 0) {
    FUN_0414b524();
    return;
  }
  plVar4 = (long *)thunk_FUN_02b79548();
  if (plVar4 == (long *)0x0) {
    FUN_04d9c940();
  }
  lVar3 = *(long *)(unaff_x21 + 0x10);
  if (lVar3 != 0) {
    uVar1 = *(uint *)(lVar3 + 0x20);
    if (0 < (int)uVar1) {
      piVar7 = *(int **)(lVar3 + 0x18);
      if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      uVar8 = 0;
      piVar2 = piVar7;
      do {
        if ((uint)piVar7[6] <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        if (-1 < piVar2[8]) {
          in_stack_00000008._4_4_ = piVar2[0xe];
          lVar3 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                            (*(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x40),
                             (long)&stack0x00000008 + 4);
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          if ((lVar3 != 0) &&
             (lVar5 = thunk_FUN_02b79548(lVar3,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0)) {
            uVar6 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
            FUN_02b3c988(uVar6,0);
          }
          if (*(uint *)(plVar4 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cacc();
          }
          plVar4[(long)(int)unaff_w19 + 4] = lVar3;
          thunk_FUN_02bb0e9c(plVar4 + (long)(int)unaff_w19 + 4,lVar3);
          unaff_w19 = unaff_w19 + 1;
        }
        uVar8 = uVar8 + 1;
        piVar2 = piVar2 + 8;
      } while (uVar1 != uVar8);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


