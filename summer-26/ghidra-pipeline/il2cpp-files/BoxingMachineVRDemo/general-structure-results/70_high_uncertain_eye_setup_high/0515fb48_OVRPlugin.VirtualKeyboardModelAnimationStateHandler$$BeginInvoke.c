/*
FUNCTION_NAME: OVRPlugin.VirtualKeyboardModelAnimationStateHandler$$BeginInvoke
ENTRY_POINT: 0515fb48
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong OVRPlugin_VirtualKeyboardModelAnimationStateHandler__BeginInvoke(ulong param_1)

{
  byte bVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  
  if ((param_1 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_067823e8);
    *(undefined1 *)(unaff_x20 + 0xe41) = 1;
  }
  plVar3 = *(long **)(unaff_x19 + 0x10);
  if (plVar3 != (long *)0x0) {
    lVar5 = *plVar3;
    bVar1 = *(byte *)(*(long *)PTR_DAT_067823e8 + 0x130);
    if ((bVar1 <= *(byte *)(lVar5 + 0x130)) &&
       (*(long *)(*(long *)(lVar5 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_067823e8)) {
                    /* WARNING: Could not recover jumptable at 0x0515fbe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(lVar5 + 0x4f8))(plVar3,*(undefined8 *)(lVar5 + 0x500));
      return uVar4;
    }
    plVar3 = (long *)(**(code **)(*plVar3 + 0x228))(plVar3,*(undefined8 *)(*plVar3 + 0x230));
    uVar4 = 0;
    if (plVar3 != (long *)0x0) {
      iVar2 = (**(code **)(*plVar3 + 0x1a8))(plVar3,*(undefined8 *)(*plVar3 + 0x1b0));
      uVar4 = (ulong)(0 < iVar2);
    }
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


