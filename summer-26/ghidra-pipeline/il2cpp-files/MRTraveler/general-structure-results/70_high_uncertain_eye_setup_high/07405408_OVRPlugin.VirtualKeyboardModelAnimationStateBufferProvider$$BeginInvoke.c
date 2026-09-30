/*
FUNCTION_NAME: OVRPlugin.VirtualKeyboardModelAnimationStateBufferProvider$$BeginInvoke
ENTRY_POINT: 07405408
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


undefined8 OVRPlugin_VirtualKeyboardModelAnimationStateBufferProvider__BeginInvoke(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long unaff_x19;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long *unaff_x22;
  
  FUN_03c8f898(*(undefined8 *)(param_1 + 0x318));
  FUN_03c8f898(PTR_DAT_08eb6320);
  FUN_03c8f898(PTR_DAT_08eb6328);
  FUN_03c8f898(PTR_DAT_08eb6330);
  FUN_03c8f898(PTR_DAT_08eb6338);
  FUN_03c8f898(PTR_DAT_08eb6340);
  FUN_03c8f898(PTR_DAT_08eb62b0);
  *(undefined1 *)(unaff_x19 + 0x9db) = 1;
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
    lVar3 = *unaff_x22;
  }
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x28);
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar3 = *unaff_x22;
    }
    uVar6 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08eb6318);
    FUN_04d60f78(lVar5,uVar6,*(undefined8 *)PTR_DAT_08eb6338,0);
    plVar4 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x28);
    *plVar4 = lVar5;
    thunk_FUN_03d233cc(plVar4,lVar5);
    lVar3 = *unaff_x22;
  }
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
    lVar3 = *unaff_x22;
  }
  puVar2 = PTR_DAT_08eb6330;
  puVar1 = PTR_DAT_08eb6328;
  lVar7 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x30);
  if (lVar7 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar3 = *unaff_x22;
    }
    uVar6 = **(undefined8 **)(lVar3 + 0xb8);
    lVar7 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08eb6320);
    FUN_04d75c70(lVar7,uVar6,*(undefined8 *)PTR_DAT_08eb6340,0);
    plVar4 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x30);
    *plVar4 = lVar7;
    thunk_FUN_03d233cc(plVar4,lVar7);
  }
  uVar6 = thunk_FUN_03cf5234(*(undefined8 *)puVar2);
  FUN_057f2640(uVar6,4,lVar5,lVar7,*(undefined8 *)puVar1);
  return uVar6;
}


