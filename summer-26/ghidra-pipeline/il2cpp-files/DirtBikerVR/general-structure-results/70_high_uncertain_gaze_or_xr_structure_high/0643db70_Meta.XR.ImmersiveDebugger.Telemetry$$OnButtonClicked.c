/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry$$OnButtonClicked
ENTRY_POINT: 0643db70
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 84
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


long * Meta_XR_ImmersiveDebugger_Telemetry__OnButtonClicked(void)

{
  long *plVar1;
  long lVar2;
  long unaff_x19;
  
  plVar1 = (long *)thunk_FUN_03ac74bc(DAT_0861aa30);
  FUN_066fc4ac(plVar1,0);
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03ac4090();
  }
  lVar2 = **(long **)(lVar2 + 0xc0);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03ac4090(lVar2);
  }
  if (plVar1 != (long *)0x0) {
    if ((*(byte *)(*plVar1 + 0x130) < *(byte *)(lVar2 + 0x130)) ||
       (*(long *)(*(long *)(*plVar1 + 200) + (ulong)*(byte *)(lVar2 + 0x130) * 8 + -8) != lVar2)) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8ad40(plVar1);
    }
  }
  return plVar1;
}


