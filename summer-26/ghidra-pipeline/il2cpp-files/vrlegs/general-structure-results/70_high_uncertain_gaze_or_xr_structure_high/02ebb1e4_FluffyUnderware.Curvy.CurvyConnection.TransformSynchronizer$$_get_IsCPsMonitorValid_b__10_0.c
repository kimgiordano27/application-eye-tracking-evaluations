/*
FUNCTION_NAME: FluffyUnderware.Curvy.CurvyConnection.TransformSynchronizer$$<get_IsCPsMonitorValid>b__10_0
ENTRY_POINT: 02ebb1e4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x02ebb294) */

void FluffyUnderware_Curvy_CurvyConnection_TransformSynchronizer__<get_IsCPsMonitorValid>b__10_0
               (void)

{
  long lVar1;
  long *unaff_x21;
  undefined8 in_stack_00000008;
  
  FUN_027e0bd8();
  lVar1 = *unaff_x21;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar1 = *unaff_x21;
  }
  lVar1 = **(long **)(lVar1 + 0xb8);
  thunk_FUN_01a4b338();
  if (lVar1 == 0) {
    lVar1 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d1fe50);
    *(undefined1 *)(lVar1 + 0x10) = 1;
    FUN_027b3d9c(lVar1,0);
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    thunk_FUN_01a4b338();
    **(long **)(*unaff_x21 + 0xb8) = lVar1;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              (*(undefined8 *)(*unaff_x21 + 0xb8),lVar1);
  }
  if (in_stack_00000008._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  return;
}


