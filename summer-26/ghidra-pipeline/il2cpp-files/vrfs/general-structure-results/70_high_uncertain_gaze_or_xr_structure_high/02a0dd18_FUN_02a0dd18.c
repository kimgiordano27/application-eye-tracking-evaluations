/*
FUNCTION_NAME: FUN_02a0dd18
ENTRY_POINT: 02a0dd18
PROGRAM: vrfs-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


undefined4 FUN_02a0dd18(uint *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  char *pcStack_60;
  undefined8 uStack_58;
  char *pcStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined1 uStack_34;
  
  if (pcRam0000000007234c38 == (code *)0x0) {
    pcStack_60 = "OVRPlugin";
    uStack_58 = 9;
    pcStack_50 = "ovrp_RequestSceneCapture";
    uStack_48 = 0x18;
    uStack_38 = 0x10;
    uStack_40 = DAT_0533f8a8;
    uStack_34 = 0;
    pcRam0000000007234c38 = (code *)thunk_FUN_015d07f0(&pcStack_60);
  }
  pcStack_60 = (char *)(ulong)*param_1;
  uStack_58 = thunk_FUN_015d0c84(*(undefined8 *)(param_1 + 2));
  uVar1 = (*pcRam0000000007234c38)(&pcStack_60,param_2);
  uStack_70 = 0;
  uStack_68 = 0;
  FUN_0127bdf8(&pcStack_60,&uStack_70);
  thunk_FUN_015d0c78(uStack_58);
  uStack_58 = 0;
  *(undefined8 *)(param_1 + 2) = uStack_68;
  *(undefined8 *)param_1 = uStack_70;
  thunk_FUN_01656ef8(param_1 + 2,0);
  return uVar1;
}


