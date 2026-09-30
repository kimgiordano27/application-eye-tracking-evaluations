/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionBegin
ENTRY_POINT: 06035458
PROGRAM: vandalizer-libil2cpp.so
SCORE: 99
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionBegin(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  
  FUN_05e44034();
  *(undefined1 *)(unaff_x20 + 0x10) = 1;
  *(long *)(unaff_x19 + 0x28) = unaff_x20;
  thunk_FUN_0329bf60();
  lVar2 = thunk_FUN_0322f148(*unaff_x21);
  FUN_05e44034(lVar2,0);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  *(long *)(unaff_x19 + 0x30) = lVar2;
                    /* try { // try from 06035490 to 06135507 has its CatchHandler @ 0603555c */
  thunk_FUN_0329bf60((long *)(unaff_x19 + 0x30),lVar2);
  uVar1 = DAT_014bb328;
  *(undefined1 *)(unaff_x19 + 0x20) = 1;
  *(undefined4 *)(unaff_x19 + 0x1c) = 0x3f800000;
  *(undefined8 *)(unaff_x19 + 0x14) = uVar1;
  return;
}


