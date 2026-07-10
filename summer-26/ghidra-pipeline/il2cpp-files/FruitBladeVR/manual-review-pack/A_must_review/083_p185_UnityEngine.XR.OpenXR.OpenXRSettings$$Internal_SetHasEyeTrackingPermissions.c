/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.OpenXRSettings$$Internal_SetHasEyeTrackingPermissions
ENTRY_POINT: 036d5298
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 113
LABEL: confirmed_eye_permission_setup_near_certain
EYE_TRACKING_DECISION: yes
FUNCTIONALITY: permission_setup;foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_8;validity_or_gating_hits_3;strong_foveation_hits_1;functionality_permission_setup;functionality_foveated_rendering
*/


void UnityEngine_XR_OpenXR_OpenXRSettings__Internal_SetHasEyeTrackingPermissions(uint param_1)

{
  char *local_50;
  undefined8 uStack_48;
  char *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  
  if (DAT_03ef71a0 == (code *)0x0) {
    local_50 = "UnityOpenXR";
    uStack_48 = 0xb;
    local_40 = "OculusFoveation_SetHasEyeTrackingPermissions";
    uStack_38 = 0x2c;
    local_30 = DAT_00b46930;
    local_28 = 4;
    local_24 = 0;
    DAT_03ef71a0 = (code *)thunk_FUN_01c8fee8(&local_50);
  }
  (*DAT_03ef71a0)(param_1 & 1);
  return;
}


