/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionDestroy
ENTRY_POINT: 090c6d90
PROGRAM: Hyper-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionDestroy(void)

{
  byte bVar1;
  long *plVar2;
  undefined1 in_w8;
  long lVar3;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  *(undefined1 *)(unaff_x21 + 0x4bf) = in_w8;
  if (unaff_x19 == (long *)0x0) {
    *(undefined8 *)(unaff_x20 + 0x78) = 0;
    plVar2 = (long *)0x0;
  }
  else {
    lVar3 = *(long *)PTR_DAT_0ac09788;
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
    *(long **)(unaff_x20 + 0x78) = plVar2;
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
  thunk_FUN_049ee3d8(unaff_x20 + 0x78,plVar2);
  *(undefined8 *)(unaff_x20 + 0x80) = unaff_x19;
  thunk_FUN_049ee3d8((undefined8 *)(unaff_x20 + 0x80));
  return;
}


