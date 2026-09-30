/*
FUNCTION_NAME: Photon.Pun.Demo.Cockpit.RegionListCell.<AnimateAddition>d__10$$System.IDisposable.Dispose
ENTRY_POINT: 02d564d8
PROGRAM: sharks-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Photon_Pun_Demo_Cockpit_RegionListCell_<AnimateAddition>d__10__System_IDisposable_Dispose(void)

{
  code *pcVar1;
  long in_x12;
  long unaff_x19;
  char *pcStack0000000000000000;
  undefined8 uStack0000000000000008;
  char *pcStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined1 uStack000000000000002c;
  
  uStack0000000000000020 = *(undefined8 *)(in_x12 + 0x708);
  uStack0000000000000028 = 0;
  pcStack0000000000000000 = "OVRPlugin";
  uStack0000000000000008 = 9;
  pcStack0000000000000010 = "ovrp_StartBodyTracking";
  uStack0000000000000018 = 0x16;
  uStack000000000000002c = 0;
  pcVar1 = (code *)thunk_FUN_01861e78();
  *(code **)(unaff_x19 + 0x480) = pcVar1;
  (*pcVar1)();
  return;
}


