/*
FUNCTION_NAME: OVRPlugin$$GetHandTrackingEnabled
ENTRY_POINT: 01f82d40
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_4;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__GetHandTrackingEnabled
               (long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((DAT_0293de47 & 1) == 0) {
    thunk_FUN_01279b34(PTR_DAT_027b37e0);
    thunk_FUN_01279b34(PTR_DAT_027b32e0);
    thunk_FUN_01279b34(PTR_DAT_027c13c8);
    DAT_0293de47 = 1;
  }
  FUN_01f9d1b8(param_1,param_2,param_3,param_4,0);
  if ((DAT_0293de48 & 1) == 0) {
    thunk_FUN_01279b34(PTR_DAT_027b3620);
    DAT_0293de48 = 1;
  }
  lVar1 = *(long *)(param_1 + 0x90);
  if (lVar1 == 0) {
    lVar1 = **(long **)(*(long *)PTR_DAT_027b3620 + 0xb8);
  }
  uVar2 = *(undefined8 *)PTR_DAT_027b37e0;
  if (*(int *)(*(long *)PTR_DAT_027b32e0 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  uVar2 = FUN_01f7d8a0(uVar2);
  if (param_2 != 0) {
    FUN_01ebcbe8(param_2,*(undefined8 *)PTR_DAT_027c13c8,lVar1,uVar2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
}


