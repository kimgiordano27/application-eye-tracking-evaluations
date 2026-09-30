/*
FUNCTION_NAME: OVRPlugin.OVRP_1_15_0$$ovrp_GetExternalCameraExtrinsics
ENTRY_POINT: 05d482a0
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_15_0__ovrp_GetExternalCameraExtrinsics(long param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  
  FUN_05c38dfc(param_1,param_1 + 0x38,0,0);
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 != 0) {
    uVar1 = *(uint *)(lVar2 + 0x18);
    if (0 < (int)uVar1) {
      uVar3 = 0;
      do {
        if (uVar1 <= uVar3) goto LAB_05d4834c;
        if (*(long *)(lVar2 + (long)(int)uVar3 * 8 + 0x20) == 0) goto LAB_05d48348;
        FUN_05d48350();
        uVar1 = *(uint *)(lVar2 + 0x18);
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < (int)uVar1);
    }
    FUN_05d483f8(param_1);
    if (*(long *)(param_1 + 0x30) == 0) {
      lVar2 = *(long *)(param_1 + 0x28);
      if (lVar2 == 0) goto LAB_05d48348;
      if (*(int *)(lVar2 + 0x18) == 0) {
LAB_05d4834c:
                    /* WARNING: Subroutine does not return */
        FUN_02fe94f0();
      }
      FUN_05d48480(param_1,*(undefined8 *)(lVar2 + 0x20));
    }
    FUN_05c38ea0(param_1,param_1 + 0x38,0);
    return;
  }
LAB_05d48348:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


