/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.EffectMesh$$set_ToggleColliders
ENTRY_POINT: 02a0fc7c
PROGRAM: vrfs-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Meta_XR_MRUtilityKit_EffectMesh__set_ToggleColliders(undefined8 param_1,undefined8 param_2)

{
  char *pcStack_50;
  undefined8 uStack_48;
  char *pcStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined1 uStack_24;
  
  if (pcRam0000000007234df8 == (code *)0x0) {
    pcStack_50 = "OVRPlugin";
    uStack_48 = 9;
    pcStack_40 = "ovrp_GetVirtualKeyboardTextureData";
    uStack_38 = 0x22;
    uStack_28 = 0x10;
    uStack_30 = DAT_0533f8a8;
    uStack_24 = 0;
    pcRam0000000007234df8 = (code *)thunk_FUN_015d07f0(&pcStack_50);
  }
  (*pcRam0000000007234df8)(param_1,param_2);
  return;
}


