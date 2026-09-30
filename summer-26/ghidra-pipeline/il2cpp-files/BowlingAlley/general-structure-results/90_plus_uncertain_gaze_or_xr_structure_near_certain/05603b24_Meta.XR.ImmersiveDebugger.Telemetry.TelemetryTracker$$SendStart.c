/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry.TelemetryTracker$$SendStart
ENTRY_POINT: 05603b24
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 103
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_4
*/


uint Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker__SendStart(void)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  uint uVar4;
  uint unaff_w19;
  long unaff_x23;
  int unaff_w24;
  long unaff_x25;
  
  thunk_FUN_032e1da0(PTR_DAT_072817f0);
  *(undefined1 *)(unaff_x25 + 0x84c) = 1;
  puVar2 = PTR_DAT_072817f0;
  iVar1 = (unaff_w19 - unaff_w24) + 1;
  if (iVar1 <= (int)unaff_w19) {
    if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    do {
      uVar4 = *(uint *)(unaff_x23 + 0x18);
      if (uVar4 <= unaff_w19) {
LAB_05603bcc:
                    /* WARNING: Subroutine does not return */
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        uVar4 = *(uint *)(unaff_x23 + 0x18);
      }
      if (uVar4 <= unaff_w19) goto LAB_05603bcc;
      uVar3 = FUN_06c15a2c(unaff_x23 + (long)(int)unaff_w19 * 0x10 + 0x20);
      if ((uVar3 & 1) != 0) {
        return unaff_w19;
      }
      unaff_w19 = unaff_w19 - 1;
    } while (iVar1 <= (int)unaff_w19);
  }
  return 0xffffffff;
}


