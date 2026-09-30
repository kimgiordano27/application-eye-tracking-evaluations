/*
FUNCTION_NAME: OVRPlugin.OVRP_1_92_0$$ovrp_GetFaceTracking2Supported
ENTRY_POINT: 05d51498
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_92_0__ovrp_GetFaceTracking2Supported(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  if ((DAT_07398bc1 & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06f99248);
    FUN_02fe925c(PTR_DAT_06f6d668);
    FUN_02fe925c(PTR_DAT_06fb9400);
    FUN_02fe925c(PTR_DAT_06fb9408);
    DAT_07398bc1 = 1;
  }
  puVar1 = PTR_DAT_06f99248;
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x18) == 0) {
      if (*(int *)(*(long *)PTR_DAT_06f6d668 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      FUN_068bd958(*(undefined8 *)PTR_DAT_06fb9408,0);
      return;
    }
    lVar2 = *(long *)PTR_DAT_06f99248;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar2 = *(long *)puVar1;
    }
    if (**(long **)(lVar2 + 0xb8) != 0) {
      FUN_053580c0(**(long **)(lVar2 + 0xb8),*(undefined8 *)(param_1 + 0x18),param_1,
                   *(undefined8 *)PTR_DAT_06fb9400);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


