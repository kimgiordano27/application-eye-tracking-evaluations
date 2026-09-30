/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_Media_GetCameraAnchorHandle
ENTRY_POINT: 06974808
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OVRPlugin_OVRP_1_49_0__ovrp_Media_GetCameraAnchorHandle(ulong param_1)

{
  int iVar1;
  undefined8 uVar2;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  
  if ((param_1 & 1) == 0) {
    FUN_03a8a718(PTR_DAT_084b58d8);
    *(undefined1 *)(unaff_x21 + 0x118) = 1;
  }
  uVar2 = _DAT_015c7e80;
  iVar1 = *(int *)(*unaff_x20 + 0xe4);
  *(undefined8 *)(unaff_x19 + 0xbc) = _UNK_015c7e88;
  *(undefined8 *)(unaff_x19 + 0xb4) = uVar2;
  if (iVar1 == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_06926a50();
  return;
}


