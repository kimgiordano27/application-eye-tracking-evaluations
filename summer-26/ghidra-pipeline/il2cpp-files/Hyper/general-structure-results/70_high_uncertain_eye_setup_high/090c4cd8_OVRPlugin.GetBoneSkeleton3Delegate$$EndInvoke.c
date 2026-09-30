/*
FUNCTION_NAME: OVRPlugin.GetBoneSkeleton3Delegate$$EndInvoke
ENTRY_POINT: 090c4cd8
PROGRAM: Hyper-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_GetBoneSkeleton3Delegate__EndInvoke(void)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar2 = FUN_090c4a88();
  if ((unaff_x20 != 0) && (lVar2 != 0)) {
    *(undefined4 *)(lVar2 + 0x10) = *(undefined4 *)(unaff_x20 + 0x10);
    lVar2 = FUN_090c4a88();
    puVar1 = PTR_DAT_0ac75888;
    if (lVar2 != 0) {
      *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(unaff_x20 + 0x18);
      thunk_FUN_049ee3d8();
      lVar2 = FUN_090c4a88();
      uVar3 = *(undefined8 *)(unaff_x19 + 0x70);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_049a583c(*(long *)puVar1);
      }
      uVar3 = FUN_090c1d38(uVar3);
      if (lVar2 != 0) {
        *(undefined8 *)(lVar2 + 0x20) = uVar3;
        thunk_FUN_049ee3d8((undefined8 *)(lVar2 + 0x20),uVar3);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


