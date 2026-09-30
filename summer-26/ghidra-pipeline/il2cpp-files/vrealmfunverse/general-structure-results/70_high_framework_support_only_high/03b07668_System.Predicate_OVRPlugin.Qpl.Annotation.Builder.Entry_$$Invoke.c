/*
FUNCTION_NAME: System.Predicate<OVRPlugin.Qpl.Annotation.Builder.Entry>$$Invoke
ENTRY_POINT: 03b07668
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 88
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Predicate<OVRPlugin_Qpl_Annotation_Builder_Entry>__Invoke(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  if ((*(ushort *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_02b76218();
  }
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  lVar1 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02b76218();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02b76218();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x20);
  if (lVar1 != 0) {
    lVar2 = *(long *)(unaff_x19 + 0x20);
    uVar4 = *unaff_x20;
    uVar5 = unaff_x20[1];
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02b76218();
    }
    uVar3 = FUN_0440ee6c(lVar1,uVar4,uVar5,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x2a8));
    if ((uVar3 & 1) == 0) {
      return;
    }
    thunk_FUN_02ba3594(PTR_DAT_0631fac8);
    uVar4 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody();
    uVar5 = thunk_FUN_02ba3594(PTR_DAT_06320e40);
    uVar4 = FUN_04c00984(uVar5,uVar4,0);
    thunk_FUN_02ba3594(PTR_DAT_0631cb60);
    uVar5 = thunk_FUN_02b79644();
    FUN_04d7b3f4(uVar5,uVar4,0);
                    /* WARNING: Subroutine does not return */
    FUN_02b3c988(uVar5);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


