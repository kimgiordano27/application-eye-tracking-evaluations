/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry.TelemetryTracker$$SendComponentTracked
ENTRY_POINT: 05603b48
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 91
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


uint Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker__SendComponentTracked(void)

{
  undefined *puVar1;
  ulong uVar2;
  uint uVar3;
  uint unaff_w19;
  long unaff_x23;
  int unaff_w24;
  
  puVar1 = PTR_DAT_072817f0;
  if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  while (uVar3 = *(uint *)(unaff_x23 + 0x18), unaff_w19 < uVar3) {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      uVar3 = *(uint *)(unaff_x23 + 0x18);
    }
    if (uVar3 <= unaff_w19) break;
    uVar2 = FUN_06c15a2c(unaff_x23 + (long)(int)unaff_w19 * 0x10 + 0x20);
    if ((uVar2 & 1) != 0) {
      return unaff_w19;
    }
    unaff_w19 = unaff_w19 - 1;
    if ((int)unaff_w19 < unaff_w24) {
      return 0xffffffff;
    }
  }
                    /* WARNING: Subroutine does not return */
  Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
}


