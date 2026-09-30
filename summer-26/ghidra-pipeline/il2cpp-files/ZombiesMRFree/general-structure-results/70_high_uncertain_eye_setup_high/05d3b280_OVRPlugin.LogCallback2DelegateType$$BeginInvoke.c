/*
FUNCTION_NAME: OVRPlugin.LogCallback2DelegateType$$BeginInvoke
ENTRY_POINT: 05d3b280
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_LogCallback2DelegateType__BeginInvoke(ulong param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long unaff_x19;
  long unaff_x20;
  long lVar4;
  undefined8 uVar5;
  long *unaff_x22;
  
  if ((param_1 & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06f73f20);
    FUN_02fe925c(PTR_DAT_06fb8f48);
    FUN_02fe925c(PTR_DAT_06fb8f50);
    FUN_02fe925c(PTR_DAT_06fb8f58);
    FUN_02fe925c(PTR_DAT_06fb8f40);
    *(undefined1 *)(unaff_x20 + 0xaa8) = 1;
  }
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
    lVar2 = *unaff_x22;
  }
  lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
  if (lVar4 == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar2 = *unaff_x22;
    }
    uVar5 = **(undefined8 **)(lVar2 + 0xb8);
    lVar4 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06f73f20);
    FUN_05a645d0(lVar4,uVar5,*(undefined8 *)PTR_DAT_06fb8f58,0);
    plVar3 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 8);
    *plVar3 = lVar4;
    thunk_FUN_03048534(plVar3,lVar4);
  }
  puVar1 = PTR_DAT_06fb8f50;
  if (unaff_x19 != 0) {
    *(long *)(unaff_x19 + 0x70) = lVar4;
    thunk_FUN_03048534((long *)(unaff_x19 + 0x70),lVar4);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    FUN_05100b8c();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


