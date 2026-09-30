/*
FUNCTION_NAME: OVRPlugin$$EraseSpace
ENTRY_POINT: 05d29254
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__EraseSpace(undefined4 param_1,float param_2,undefined1 param_3 [16],float param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  undefined4 unaff_s8;
  
  if (param_4 <= param_2) {
    param_1 = unaff_s8;
  }
  *(undefined4 *)(unaff_x19 + 0xac) = param_1;
  puVar1 = PTR_DAT_06fb8c18;
  if (*(long *)(unaff_x19 + 0x40) != 0) {
    lVar2 = FUN_068ce534(*(long *)(unaff_x19 + 0x40),0);
    lVar3 = *(long *)puVar1;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar3);
    }
    if (lVar2 != 0) {
      FUN_068d1aec(*(undefined4 *)(unaff_x19 + 0xac),lVar2,**(undefined4 **)(*(long *)puVar1 + 0xb8)
                   ,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


