/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionStateChange
ENTRY_POINT: 06035314
PROGRAM: vandalizer-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionStateChange(void)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  FUN_031f20f4();
                    /* try { // try from 06035318 to 06135393 has its CatchHandler @ 06035560 */
  *(undefined1 *)(unaff_x21 + 0xc24) = 1;
  if (unaff_x19 == (long *)0x0) {
    *(undefined8 *)(unaff_x20 + 0x20) = 0;
    plVar2 = (long *)0x0;
  }
  else {
    lVar3 = *(long *)PTR_DAT_0759b2a8;
    bVar1 = *(byte *)(lVar3 + 0x130);
    if (*(byte *)(*unaff_x19 + 0x130) < bVar1) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = unaff_x19;
      if (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) != lVar3) {
        plVar2 = (long *)0x0;
      }
    }
    *(long **)(unaff_x20 + 0x20) = plVar2;
    if (*(byte *)(*unaff_x19 + 0x130) < bVar1) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = unaff_x19;
      if (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) != lVar3) {
        plVar2 = (long *)0x0;
      }
    }
  }
  thunk_FUN_0329bf60(unaff_x20 + 0x20,plVar2);
  *(undefined8 *)(unaff_x20 + 0x28) = unaff_x19;
  thunk_FUN_0329bf60((undefined8 *)(unaff_x20 + 0x28));
  return;
}


