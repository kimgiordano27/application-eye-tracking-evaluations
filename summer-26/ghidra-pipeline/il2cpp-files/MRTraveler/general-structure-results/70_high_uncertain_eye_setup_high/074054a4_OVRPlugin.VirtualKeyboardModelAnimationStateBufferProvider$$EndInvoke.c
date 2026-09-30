/*
FUNCTION_NAME: OVRPlugin.VirtualKeyboardModelAnimationStateBufferProvider$$EndInvoke
ENTRY_POINT: 074054a4
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_VirtualKeyboardModelAnimationStateBufferProvider__EndInvoke(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long *unaff_x22;
  
  uVar3 = thunk_FUN_03cf5234();
  FUN_04d60f78();
  puVar4 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x28);
  *puVar4 = uVar3;
  thunk_FUN_03d233cc(puVar4,uVar3);
  lVar5 = *unaff_x22;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
    lVar5 = *unaff_x22;
  }
  puVar2 = PTR_DAT_08eb6330;
  puVar1 = PTR_DAT_08eb6328;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x30);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar5 = *unaff_x22;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08eb6320);
    FUN_04d75c70(lVar7,uVar8,*(undefined8 *)PTR_DAT_08eb6340,0);
    plVar6 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x30);
    *plVar6 = lVar7;
    thunk_FUN_03d233cc(plVar6,lVar7);
  }
  uVar8 = thunk_FUN_03cf5234(*(undefined8 *)puVar2);
  FUN_057f2640(uVar8,4,uVar3,lVar7,*(undefined8 *)puVar1);
  return uVar8;
}


