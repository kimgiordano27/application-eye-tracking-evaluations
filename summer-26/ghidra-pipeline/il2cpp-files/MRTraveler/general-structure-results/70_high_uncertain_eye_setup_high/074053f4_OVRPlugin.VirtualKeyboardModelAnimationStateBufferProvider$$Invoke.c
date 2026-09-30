/*
FUNCTION_NAME: OVRPlugin.VirtualKeyboardModelAnimationStateBufferProvider$$Invoke
ENTRY_POINT: 074053f4
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


undefined8 OVRPlugin_VirtualKeyboardModelAnimationStateBufferProvider__Invoke(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long unaff_x19;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  puVar1 = PTR_DAT_08eb62b0;
  if ((*(byte *)(unaff_x19 + 0x9db) & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08eb6318);
    FUN_03c8f898(PTR_DAT_08eb6320);
    FUN_03c8f898(PTR_DAT_08eb6328);
    FUN_03c8f898(PTR_DAT_08eb6330);
    FUN_03c8f898(PTR_DAT_08eb6338);
    FUN_03c8f898(PTR_DAT_08eb6340);
    FUN_03c8f898(PTR_DAT_08eb62b0);
    *(undefined1 *)(unaff_x19 + 0x9db) = 1;
  }
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
    lVar4 = *(long *)puVar1;
  }
  lVar6 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x28);
  if (lVar6 == 0) {
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar4 = *(long *)puVar1;
    }
    uVar7 = **(undefined8 **)(lVar4 + 0xb8);
    lVar6 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08eb6318);
    FUN_04d60f78(lVar6,uVar7,*(undefined8 *)PTR_DAT_08eb6338,0);
    plVar5 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x28);
    *plVar5 = lVar6;
    thunk_FUN_03d233cc(plVar5,lVar6);
    lVar4 = *(long *)puVar1;
  }
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
    lVar4 = *(long *)puVar1;
  }
  puVar3 = PTR_DAT_08eb6330;
  puVar2 = PTR_DAT_08eb6328;
  lVar8 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x30);
  if (lVar8 == 0) {
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar4 = *(long *)puVar1;
    }
    uVar7 = **(undefined8 **)(lVar4 + 0xb8);
    lVar8 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08eb6320);
    FUN_04d75c70(lVar8,uVar7,*(undefined8 *)PTR_DAT_08eb6340,0);
    plVar5 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x30);
    *plVar5 = lVar8;
    thunk_FUN_03d233cc(plVar5,lVar8);
  }
  uVar7 = thunk_FUN_03cf5234(*(undefined8 *)puVar3);
  FUN_057f2640(uVar7,4,lVar6,lVar8,*(undefined8 *)puVar2);
  return uVar7;
}


