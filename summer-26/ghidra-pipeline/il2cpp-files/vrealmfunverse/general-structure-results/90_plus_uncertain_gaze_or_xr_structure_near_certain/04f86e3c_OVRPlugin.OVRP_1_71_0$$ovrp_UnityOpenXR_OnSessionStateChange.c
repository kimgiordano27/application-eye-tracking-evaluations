/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionStateChange
ENTRY_POINT: 04f86e3c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;telemetry_or_network_hits_2;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionStateChange(long param_1)

{
  undefined4 uVar1;
  
  if ((DAT_066c9d34 & 1) == 0) {
    FUN_02b3c81c(UnityEngine_Rendering_Universal_PixelValidationChannels_var);
    FUN_02b3c81c(Meta_XR_MultiplayerBlocks_Shared_PlatformInfo_var);
    DAT_066c9d34 = 1;
  }
  FUN_04e83350(param_1,param_1 + 0x84,0,0);
  if (*(long *)(param_1 + 0x30) != 0) {
    uVar1 = FUN_05c24514(*(long *)(param_1 + 0x30),
                         *(undefined8 *)Meta_XR_MultiplayerBlocks_Shared_PlatformInfo_var,0);
    *(undefined4 *)(param_1 + 0x54) = uVar1;
    if (*(long *)(param_1 + 0x30) != 0) {
      uVar1 = FUN_05c24514(*(long *)(param_1 + 0x30),
                           *(undefined8 *)
                            UnityEngine_Rendering_Universal_PixelValidationChannels_var,0);
      *(undefined4 *)(param_1 + 0x50) = uVar1;
      FUN_04e833f4(param_1,param_1 + 0x84,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


