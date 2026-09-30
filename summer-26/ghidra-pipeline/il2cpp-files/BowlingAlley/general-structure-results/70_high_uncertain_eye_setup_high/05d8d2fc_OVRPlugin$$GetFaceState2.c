/*
FUNCTION_NAME: OVRPlugin$$GetFaceState2
ENTRY_POINT: 05d8d2fc
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05d8d3e4) */

void OVRPlugin__GetFaceState2(long param_1)

{
  int iVar1;
  char local_24 [4];
  
  if ((DAT_076d88e2 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_072798f8);
    thunk_FUN_032e1da0(PTR_DAT_072b18c8);
    thunk_FUN_032e1da0(PTR_DAT_072b1980);
    DAT_076d88e2 = 1;
  }
  local_24[0] = '\0';
  FUN_05987d14(param_1,local_24,0);
  iVar1 = *(int *)(param_1 + 0x38);
  if (iVar1 != 0) {
    if (*(int *)(*(long *)PTR_DAT_072b18c8 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    iVar1 = FUN_05d8bb20(iVar1);
    if (iVar1 != 0) {
      if (*(int *)(*(long *)PTR_DAT_072798f8 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      FUN_06bb2a00(*(undefined8 *)PTR_DAT_072b1980,0);
    }
  }
  if (local_24[0] != '\0') {
    thunk_FUN_03313794(param_1,0);
  }
  return;
}


