/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<__Il2CppFullySharedGenericType>$$Setup
ENTRY_POINT: 0414d79c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 76
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;ray_or_cast_sink_hits_1;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<__Il2CppFullySharedGenericType>__Setup
               (undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  ulong uVar7;
  int *piVar8;
  
  FUN_02b76218(param_2);
  lVar2 = thunk_FUN_02b79548();
  if (lVar2 != 0) {
    FUN_0414d400();
    return;
  }
  plVar3 = (long *)thunk_FUN_02b79548();
  if (plVar3 == (long *)0x0) {
    FUN_04d9c940();
  }
  lVar2 = *(long *)(unaff_x21 + 0x10);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  uVar1 = *(uint *)(lVar2 + 0x20);
  if (0 < (int)uVar1) {
    lVar2 = *(long *)(lVar2 + 0x18);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    uVar7 = 0;
    piVar8 = (int *)(lVar2 + 0x20);
    do {
      if (*(uint *)(lVar2 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      if (-1 < *piVar8) {
        lVar4 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                          (*(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x40));
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        if ((lVar4 != 0) &&
           (lVar5 = thunk_FUN_02b79548(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
          uVar6 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
          FUN_02b3c988(uVar6,0);
        }
        if (*(uint *)(plVar3 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        plVar3[(long)(int)unaff_w19 + 4] = lVar4;
        thunk_FUN_02bb0e9c(plVar3 + (long)(int)unaff_w19 + 4,lVar4);
        unaff_w19 = unaff_w19 + 1;
      }
      uVar7 = uVar7 + 1;
      piVar8 = piVar8 + 0xc;
    } while (uVar1 != uVar7);
  }
  return;
}


