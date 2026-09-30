/*
FUNCTION_NAME: OVRPlugin.VirtualKeyboardModelAnimationStateHandler$$EndInvoke
ENTRY_POINT: 0740561c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_VirtualKeyboardModelAnimationStateHandler__EndInvoke(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *unaff_x22;
  
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
    param_1 = *unaff_x22;
  }
  lVar4 = *(long *)(*(long *)(param_1 + 0xb8) + 0x38);
  if (lVar4 == 0) {
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      param_1 = *unaff_x22;
    }
    uVar5 = **(undefined8 **)(param_1 + 0xb8);
    lVar4 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08eb6348);
    FUN_04d60334(lVar4,uVar5,*(undefined8 *)PTR_DAT_08eb6368,0);
    plVar3 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x38);
    *plVar3 = lVar4;
    thunk_FUN_03d233cc(plVar3,lVar4);
    param_1 = *unaff_x22;
  }
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
    param_1 = *unaff_x22;
  }
  puVar2 = PTR_DAT_08eb6360;
  puVar1 = PTR_DAT_08eb6358;
  lVar6 = *(long *)(*(long *)(param_1 + 0xb8) + 0x40);
  if (lVar6 == 0) {
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      param_1 = *unaff_x22;
    }
    uVar5 = **(undefined8 **)(param_1 + 0xb8);
    lVar6 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08eb6350);
    FUN_04d6f8ec(lVar6,uVar5,*(undefined8 *)PTR_DAT_08eb6370,0);
    plVar3 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x40);
    *plVar3 = lVar6;
    thunk_FUN_03d233cc(plVar3,lVar6);
  }
  uVar5 = thunk_FUN_03cf5234(*(undefined8 *)puVar2);
  FUN_057f1748(uVar5,4,lVar4,lVar6,*(undefined8 *)puVar1);
  return uVar5;
}


