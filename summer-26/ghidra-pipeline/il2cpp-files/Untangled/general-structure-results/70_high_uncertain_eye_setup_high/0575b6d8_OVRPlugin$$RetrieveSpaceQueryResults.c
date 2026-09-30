/*
FUNCTION_NAME: OVRPlugin$$RetrieveSpaceQueryResults
ENTRY_POINT: 0575b6d8
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__RetrieveSpaceQueryResults(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  code *in_x9;
  code *pcVar3;
  long *unaff_x19;
  long unaff_x21;
  long *unaff_x22;
  
  (*in_x9)(param_2,*(undefined8 *)(param_1 + 0x580));
  if (unaff_x21 != 0) {
    FUN_056fd0d8();
  }
  (**(code **)(*unaff_x19 + 0x5d8))();
  (**(code **)(*unaff_x19 + 0x698))();
  if (unaff_x21 != 0) {
    FUN_056fd0d8();
  }
  (**(code **)(*unaff_x19 + 0x5d8))();
  if (unaff_x22 != (long *)0x0) {
    (**(code **)(*unaff_x22 + 0x2d8))();
  }
  puVar1 = PTR_DAT_06d01eb0;
  (**(code **)(*unaff_x19 + 0x698))();
  if (unaff_x21 != 0) {
    FUN_056fd0d8();
  }
  (**(code **)(*unaff_x19 + 0x5d8))();
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar2 = FUN_0561ab0c();
  if ((uVar2 & 1) == 0) {
    (**(code **)(*unaff_x19 + 0x658))();
  }
  else {
    uVar2 = FUN_057149e4();
    if ((uVar2 & 1) == 0) {
      pcVar3 = *(code **)(*unaff_x19 + 0x8e8);
    }
    else {
      pcVar3 = *(code **)(*unaff_x19 + 0x698);
    }
    (*pcVar3)();
  }
  (**(code **)(*unaff_x19 + 0x588))();
  return;
}


