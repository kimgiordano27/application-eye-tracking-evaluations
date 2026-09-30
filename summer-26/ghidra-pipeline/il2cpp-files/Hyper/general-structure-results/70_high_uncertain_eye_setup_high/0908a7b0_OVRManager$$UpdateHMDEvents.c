/*
FUNCTION_NAME: OVRManager$$UpdateHMDEvents
ENTRY_POINT: 0908a7b0
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__UpdateHMDEvents(void)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long unaff_x19;
  long lVar5;
  long *unaff_x22;
  
  uVar1 = FUN_0a130018();
  *(undefined8 *)(unaff_x19 + 0x38) = uVar1;
  thunk_FUN_049ee3d8();
  uVar1 = FUN_0a130018(0xbf800000,0xbf800000,0x3f800000,0x3f800000,0);
  *(undefined8 *)(unaff_x19 + 0x40) = uVar1;
  thunk_FUN_049ee3d8();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_049a583c();
    lVar2 = *unaff_x22;
  }
  puVar4 = *(undefined8 **)(lVar2 + 0xb8);
  lVar5 = puVar4[1];
  if (lVar5 == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      puVar4 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar1 = *puVar4;
    lVar5 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac787b0);
    FUN_05f8d9c0(lVar5,uVar1,*(undefined8 *)PTR_DAT_0ac78870,0);
    plVar3 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 8);
    *plVar3 = lVar5;
    thunk_FUN_049ee3d8(plVar3,lVar5);
  }
  *(long *)(unaff_x19 + 0x48) = lVar5;
  thunk_FUN_049ee3d8((long *)(unaff_x19 + 0x48),lVar5);
  thunk_FUN_0a177cbc();
  return;
}


