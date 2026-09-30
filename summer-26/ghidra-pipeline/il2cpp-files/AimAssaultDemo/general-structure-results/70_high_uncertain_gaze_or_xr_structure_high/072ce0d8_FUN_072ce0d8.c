/*
FUNCTION_NAME: FUN_072ce0d8
ENTRY_POINT: 072ce0d8
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_gaze_retrieval_or_extraction
*/


undefined8 FUN_072ce0d8(long param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
                    /* try { // try from 072ce0e0 to 073ce107 has its CatchHandler @ 072ce11c */
  if ((DAT_08268aec & 1) == 0) {
    FUN_0373b518(PTR_DAT_07d86398);
    FUN_0373b518(PTR_DAT_07d987a8);
                    /* try { // try from 072ce108 to 073ce113 has its CatchHandler @ 072cdd50 */
    FUN_0373b518(OVRPlugin_TrackingConfidence___TypeInfo);
                    /* try { // try from 072ce114 to 073ce11b has its CatchHandler @ 072ce11c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 072ce0e0 with catch @ 072ce11c
                       catch(type#2 @ 00000000) { ... } // from try @ 072ce114 with catch @ 072ce11c
                        */
    FUN_0373b518(PTR_DAT_07d924b8);
    DAT_08268aec = 1;
  }
  puVar4 = (undefined8 *)PTR_DAT_07d924b8;
  if (param_1 != 0) {
    if (*(int *)(*(long *)PTR_DAT_07d987a8 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    uVar1 = FUN_072c7214(0);
    if ((uVar1 & 1) == 0) {
      plVar2 = (long *)thunk_FUN_0374b7cc(param_1,0);
      if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x072ce1b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (**(code **)(*plVar2 + 0x1b8))(plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
        return uVar3;
      }
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    if (*(int *)(*(long *)PTR_DAT_07d86398 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    uVar1 = FUN_075ac5e0(param_1,0,0);
    puVar4 = (undefined8 *)OVRPlugin_TrackingConfidence___TypeInfo;
    if ((uVar1 & 1) == 0) {
      uVar3 = thunk_FUN_075b0210(param_1,0);
      return uVar3;
    }
  }
  return *puVar4;
}


