/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.OpenXRSettings$$Internal_HasRequestedEyeTrackingPermissions
ENTRY_POINT: 036d5d64
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 150
LABEL: confirmed_eye_data_collection_near_certain
EYE_TRACKING_DECISION: yes
FUNCTIONALITY: permission_setup;foveated_rendering;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;foveation_rendering
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_8;validity_or_gating_hits_3;telemetry_or_network_hits_3;strong_foveation_hits_1;functionality_permission_setup;functionality_foveated_rendering;functionality_data_collection_or_telemetry_hits_3
*/


bool UnityEngine_XR_OpenXR_OpenXRSettings__Internal_HasRequestedEyeTrackingPermissions(void)

{
  char cVar1;
  char *local_40;
  undefined8 uStack_38;
  char *local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_14;
  
  if (DAT_03ef7190 == (code *)0x0) {
    local_40 = "UnityOpenXR";
    uStack_38 = 0xb;
    local_30 = "OculusFoveation_HasRequestedEyeTrackingPermissions";
    uStack_28 = 0x32;
    local_20 = DAT_00b46930;
    local_18 = 0;
    local_14 = 0;
    DAT_03ef7190 = (code *)thunk_FUN_01c8fee8(&local_40);
  }
  cVar1 = (*DAT_03ef7190)();
  return cVar1 != '\0';
}


