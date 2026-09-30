/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.ManagerUtils.RegisterMember<__Il2CppFullySharedGenericType>$$EndInvoke
ENTRY_POINT: 03d530a4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_ManagerUtils_RegisterMember<__Il2CppFullySharedGenericType>__EndInvoke
               (void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  int unaff_w23;
  int unaff_w24;
  long *unaff_x25;
  long unaff_x26;
  
  do {
    if (unaff_x25 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar3 = **(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02b76218(lVar3);
    }
    lVar4 = *unaff_x25;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_03d53114;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_02b7654c(unaff_x25,lVar3,0);
LAB_03d53114:
    (*(code *)*puVar1)(unaff_x25,unaff_w24,puVar1[1]);
    lVar3 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                      (*(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28));
    if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if ((lVar3 != 0) &&
       (lVar4 = thunk_FUN_02b79548(lVar3,*(undefined8 *)(*unaff_x22 + 0x40)), lVar4 == 0)) {
      uVar2 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
      FUN_02b3c988(uVar2,0);
    }
    if (*(uint *)(unaff_x22 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    unaff_x22[(long)(int)unaff_w19 + 4] = lVar3;
    thunk_FUN_02bb0e9c(unaff_x26 + (long)(int)unaff_w19 * 8,lVar3);
    unaff_w24 = unaff_w24 + 1;
    unaff_w19 = unaff_w19 + 1;
    if (unaff_w24 == unaff_w23) {
      return;
    }
    unaff_x25 = *(long **)(unaff_x21 + 0x10);
  } while( true );
}


