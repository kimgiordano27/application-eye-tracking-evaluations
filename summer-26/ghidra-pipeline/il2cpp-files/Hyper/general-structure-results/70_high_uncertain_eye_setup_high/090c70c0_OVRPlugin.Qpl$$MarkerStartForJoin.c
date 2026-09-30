/*
FUNCTION_NAME: OVRPlugin.Qpl$$MarkerStartForJoin
ENTRY_POINT: 090c70c0
PROGRAM: Hyper-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Qpl__MarkerStartForJoin(long param_1)

{
  undefined4 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  FUN_04947ee4(*(undefined8 *)(param_1 + 0xd0));
  FUN_04947ee4(PTR_DAT_0ac760d8);
  *(undefined1 *)(unaff_x20 + 0x4c4) = 1;
  FUN_08fdfe38();
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    uVar1 = FUN_0a1227e4(*(long *)(unaff_x19 + 0x30),*(undefined8 *)PTR_DAT_0ac760d8,0);
    *(undefined4 *)(unaff_x19 + 0x54) = uVar1;
    if (*(long *)(unaff_x19 + 0x30) != 0) {
      uVar1 = FUN_0a1227e4(*(long *)(unaff_x19 + 0x30),*(undefined8 *)PTR_DAT_0ac760d0,0);
      *(undefined4 *)(unaff_x19 + 0x50) = uVar1;
      FUN_08fdfedc();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


