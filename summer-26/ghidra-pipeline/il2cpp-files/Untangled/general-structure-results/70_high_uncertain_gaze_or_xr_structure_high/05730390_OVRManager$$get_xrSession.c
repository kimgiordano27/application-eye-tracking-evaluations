/*
FUNCTION_NAME: OVRManager$$get_xrSession
ENTRY_POINT: 05730390
PROGRAM: Untangled-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRManager__get_xrSession(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *unaff_x20;
  
  thunk_FUN_02f12b58();
  FUN_056109c0();
  if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  uVar1 = (**(code **)(*unaff_x20 + 0x288))();
  if (((uVar1 & 1) == 0) && (uVar1 = FUN_0572e2a0(), (uVar1 & 1) == 0)) {
    thunk_FUN_02f239f0(PTR_DAT_06d06338);
    FUN_02a55ad4();
    uVar2 = FUN_055b5920(0);
    FUN_02a551a0();
    uVar3 = thunk_FUN_02ebbee0();
    uVar4 = thunk_FUN_02f239f0(PTR_DAT_06d58900);
    uVar2 = FUN_056f1630(uVar4,uVar2,uVar3,0);
    thunk_FUN_02f239f0(PTR_DAT_06d02080);
    uVar3 = thunk_FUN_02ef1808();
    uVar4 = thunk_FUN_02f239f0(PTR_DAT_06d44cb0);
    FUN_05558580(uVar3,uVar2,uVar4,0);
    uVar2 = thunk_FUN_02f239f0(PTR_DAT_06d58908);
                    /* WARNING: Subroutine does not return */
    FUN_02f07f94(uVar3,uVar2);
  }
  return;
}


