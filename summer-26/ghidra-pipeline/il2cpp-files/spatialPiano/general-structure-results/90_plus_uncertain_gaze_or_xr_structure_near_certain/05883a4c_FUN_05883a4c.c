/*
FUNCTION_NAME: FUN_05883a4c
ENTRY_POINT: 05883a4c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_4;telemetry_or_network_hits_1;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_1
*/


undefined4 FUN_05883a4c(undefined8 param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_058801bc();
  if (param_2 != 0) {
                    /* try { // try from 05883a70 to 05983a77 has its CatchHandler @ 05883bf8 */
    iVar2 = thunk_FUN_02f4195c(param_2 + 0xa8,1,0,0);
    if (iVar2 == 1) {
      thunk_FUN_02f6ef30(PTR_DAT_067c9b80);
                    /* try { // try from 05883adc to 05983aff has its CatchHandler @ 05883c00 */
      uVar4 = thunk_FUN_02f45270();
      uVar5 = thunk_FUN_02f6ef30(
                                Method_System_Collections_Generic_HashSet<OVRManager_EventListener>_Remove__
                                );
      FUN_050d5404(uVar4,uVar5,0);
      uVar5 = thunk_FUN_02f6ef30(
                                Method_System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>__ctor__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_02f0888c(uVar4,uVar5);
    }
    if (*(char *)(param_2 + 0x29) == '\0') {
                    /* try { // try from 05883a8c to 05983a9b has its CatchHandler @ 05883bf0 */
      plVar3 = (long *)FUN_058955ac(param_2,0);
      if (plVar3 == (long *)0x0) goto LAB_05883acc;
      (**(code **)(*plVar3 + 0x1e8))(plVar3,*(undefined8 *)(*plVar3 + 0x1f0));
    }
                    /* try { // try from 05883aac to 05983abf has its CatchHandler @ 05883c08 */
    FUN_0588c08c(param_2,0);
    if (param_3 != 0) {
      uVar1 = *(undefined4 *)(param_2 + 0xa0);
      *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(param_2 + 0x48);
                    /* try { // try from 05883ac4 to 05983acf has its CatchHandler @ 05883be8 */
      return uVar1;
    }
  }
LAB_05883acc:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


