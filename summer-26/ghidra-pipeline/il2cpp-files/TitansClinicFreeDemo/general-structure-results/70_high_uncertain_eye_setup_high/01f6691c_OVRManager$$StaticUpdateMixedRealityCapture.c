/*
FUNCTION_NAME: OVRManager$$StaticUpdateMixedRealityCapture
ENTRY_POINT: 01f6691c
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__StaticUpdateMixedRealityCapture(ulong param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long unaff_x20;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_01279b34(PTR_DAT_027ba7e8);
    *(undefined1 *)(unaff_x20 + 0xcfb) = 1;
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f795cc(0x30,0);
  }
  if (DAT_0293bfb6 == '\0') {
    thunk_FUN_01279b34(PTR_DAT_027b5200);
    DAT_0293bfb6 = '\x01';
  }
  puVar1 = PTR_DAT_027ba7e8;
  if (param_2 == 0) {
    uVar4 = 0;
    uVar2 = 0;
  }
  else {
    uVar2 = System_Int32__TryParse(param_2,0);
    uVar4 = *(undefined4 *)(param_2 + 0x10);
  }
  uVar3 = FUN_01f30f1c(0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01220628(*(long *)puVar1);
  }
  FUN_01f65ca8(uVar2,uVar4,7,uVar3);
  return;
}


