/*
FUNCTION_NAME: OVRManager$$GetDynamicFoveatedRenderingEnabled
ENTRY_POINT: 05653f70
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 87
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__GetDynamicFoveatedRenderingEnabled
               (undefined4 param_1,undefined4 param_2,undefined8 param_3)

{
  char *local_60;
  undefined8 uStack_58;
  char *local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_34;
  
  if (DAT_06dbc418 == (code *)0x0) {
    local_60 = "ovrgpuskinning";
    uStack_58 = 0xe;
    local_50 = "ovrGpuSkinning_NeutralPositionsBufferDesc";
    uStack_48 = 0x29;
    local_40 = DAT_010fc3f0;
    local_38 = 0x10;
    local_34 = 0;
    DAT_06dbc418 = (code *)thunk_FUN_02dd33e4(&local_60);
  }
  (*DAT_06dbc418)(param_1,param_2,param_3);
  return;
}


