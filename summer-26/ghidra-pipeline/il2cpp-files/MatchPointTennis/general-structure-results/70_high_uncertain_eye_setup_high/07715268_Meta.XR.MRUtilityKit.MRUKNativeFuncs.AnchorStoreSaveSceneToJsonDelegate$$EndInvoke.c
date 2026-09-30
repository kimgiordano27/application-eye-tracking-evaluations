/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.AnchorStoreSaveSceneToJsonDelegate$$EndInvoke
ENTRY_POINT: 07715268
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreSaveSceneToJsonDelegate__EndInvoke(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *unaff_x20;
  long unaff_x21;
  
  FUN_04447ba8(PTR_DAT_09f1eef8);
  FUN_04447ba8(PTR_DAT_09f1e540);
  FUN_04447ba8(PTR_DAT_09f1e538);
  FUN_04447ba8(PTR_DAT_09f30a88);
  FUN_04447ba8(PTR_DAT_09f30a90);
  *(undefined1 *)(unaff_x21 + 0x122) = 1;
  uVar4 = FUN_04c6bfdc();
  if (*(int *)(*unaff_x20 + 0xe4) == 0) {
    thunk_FUN_044a54b4(*unaff_x20);
  }
  uVar5 = FUN_0952c404(uVar4,0,0);
  puVar3 = PTR_DAT_09f30a90;
  puVar2 = PTR_DAT_09f30a88;
  puVar1 = PTR_DAT_09f1e540;
  if ((uVar5 & 1) != 0) {
    uVar4 = thunk_FUN_0952ff6c();
    uVar4 = FUN_078b4f58(*(undefined8 *)puVar2,uVar4,*(undefined8 *)puVar3,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)puVar1);
    }
    FUN_094c6b48(uVar4,0);
    return;
  }
  return;
}


