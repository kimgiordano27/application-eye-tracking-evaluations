/*
FUNCTION_NAME: OVRPlugin.OVRP_1_84_0$$ovrp_QplMarkerStart
ENTRY_POINT: 07407410
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_84_0__ovrp_QplMarkerStart(void)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 uStack0000000000000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  
  lVar1 = unaff_x20 + 0x98;
  uStack0000000000000014 = *(undefined8 *)(unaff_x19 + -0x10);
  uStack0000000000000000 = *(undefined8 *)(unaff_x19 + -0x24);
  uStack0000000000000010 = (undefined4)((ulong)*(undefined8 *)(unaff_x19 + -0x18) >> 0x20);
  uStack0000000000000008 = (undefined4)*(undefined8 *)(unaff_x19 + -0x1c);
  uStack000000000000000c = (undefined4)((ulong)*(undefined8 *)(unaff_x19 + -0x1c) >> 0x20);
  FUN_07406b18(lVar1);
  iVar2 = FUN_07406fac(*(undefined4 *)(unaff_x20 + 0x88),lVar1);
  if (((iVar2 == 0) && (iVar2 = FUN_07406e4c(*(undefined4 *)(unaff_x20 + 0x8c)), iVar2 == 0)) &&
     (iVar2 = FUN_07406ec8(*(undefined4 *)(unaff_x20 + 0x8c),lVar1), iVar2 == 0)) {
    FUN_07406bec(lVar1);
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


