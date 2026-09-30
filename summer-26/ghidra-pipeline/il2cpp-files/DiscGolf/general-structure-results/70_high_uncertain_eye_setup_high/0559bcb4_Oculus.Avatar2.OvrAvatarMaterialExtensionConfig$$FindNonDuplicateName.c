/*
FUNCTION_NAME: Oculus.Avatar2.OvrAvatarMaterialExtensionConfig$$FindNonDuplicateName
ENTRY_POINT: 0559bcb4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Oculus_Avatar2_OvrAvatarMaterialExtensionConfig__FindNonDuplicateName(undefined8 param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  long unaff_x19;
  long *unaff_x20;
  
  if ((*(long *)(unaff_x19 + 0x18) != 0) &&
     (plVar2 = *(long **)(*(long *)(unaff_x19 + 0x18) + 0x10), plVar2 != (long *)0x0)) {
    uVar3 = (**(code **)(*plVar2 + 0x208))(plVar2,*(undefined8 *)(*plVar2 + 0x210));
    uVar4 = thunk_FUN_0536b75c(param_1,uVar3,0);
    puVar1 = PTR_DAT_06a0e0a8;
    if ((uVar4 & 1) == 0) {
      return 0;
    }
    if (*(int *)(*(long *)PTR_DAT_06a0e0a8 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar4 = Oculus_Avatar2_OvrPluginTracking__CreateInputTrackingContextNative();
    if ((uVar4 & 1) == 0) {
      return 0;
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    plVar2 = (long *)FUN_05597c7c();
    if (((plVar2 != (long *)0x0) &&
        (plVar2 = (long *)(**(code **)(*plVar2 + 0x218))(plVar2,*(undefined8 *)(*plVar2 + 0x220)),
        plVar2 != (long *)0x0)) ||
       (plVar2 = (long *)(**(code **)(*unaff_x20 + 0x218))(), plVar2 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0559bd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*plVar2 + 0x328))
                        (plVar2,*(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)(*plVar2 + 0x330));
      return uVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


