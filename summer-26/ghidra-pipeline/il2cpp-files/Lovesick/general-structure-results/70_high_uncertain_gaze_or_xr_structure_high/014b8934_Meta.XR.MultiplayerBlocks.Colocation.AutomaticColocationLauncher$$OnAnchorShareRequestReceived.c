/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.AutomaticColocationLauncher$$OnAnchorShareRequestReceived
ENTRY_POINT: 014b8934
PROGRAM: Lovesick-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher__OnAnchorShareRequestReceived
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  long lVar1;
  undefined4 local_38;
  undefined4 uStack_34;
  
  if ((DAT_03776d95 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_String_Substring__);
    DAT_03776d95 = 1;
  }
  lVar1 = FUN_014b4c8c(param_1);
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0xf8) != 0)) {
    local_38 = param_4;
    uStack_34 = param_3;
    FUN_013e0924(*(long *)(lVar1 + 0xf8),param_2,&uStack_34,&local_38,
                 *(undefined8 *)Method_System_String_Substring__);
  }
  return;
}


