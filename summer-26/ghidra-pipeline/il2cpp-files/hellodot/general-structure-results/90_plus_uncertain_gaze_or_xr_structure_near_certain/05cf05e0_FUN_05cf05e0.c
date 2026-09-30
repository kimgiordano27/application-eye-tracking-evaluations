/*
FUNCTION_NAME: FUN_05cf05e0
ENTRY_POINT: 05cf05e0
PROGRAM: hellodot-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_05cf05e0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  float local_38;
  undefined4 local_34;
  
  puVar1 = PTR_DAT_065ca3f8;
  if ((DAT_06a7a502 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dab00);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065ca3f8);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dce78);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Action<OVRColocationSession_Data>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Action<OVRManager_PassthroughInitializationState>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_0661c6a0);
    DAT_06a7a502 = 1;
  }
  lVar3 = FUN_05cef550(param_1);
  lVar4 = FUN_05cef550(param_1);
  local_34 = FUN_05efe82c(0);
  uVar5 = thunk_FUN_02cea4e8(*(undefined8 *)puVar1,&local_34);
  puVar2 = PTR_DAT_065dab00;
  if (lVar4 != 0) {
    FUN_04679278(lVar4,*(undefined8 *)
                        System_Action<OVRManager_PassthroughInitializationState>_TypeInfo,uVar5,
                 *(undefined8 *)PTR_DAT_065dab00);
    if (lVar3 != 0) {
      FUN_04679278(lVar3,*(undefined8 *)PTR_DAT_0661c6a0,uVar5,*(undefined8 *)puVar2);
      lVar3 = FUN_05cef550(param_1);
      lVar4 = FUN_05cef550(param_1);
      local_38 = (float)FUN_05efe82c(0);
      local_38 = 1.0 / local_38;
      uVar5 = thunk_FUN_02cea4e8(*(undefined8 *)puVar1,&local_38);
      if ((lVar4 != 0) &&
         (FUN_04679278(lVar4,*(undefined8 *)System_Action<OVRColocationSession_Data>_TypeInfo,uVar5,
                       *(undefined8 *)puVar2), lVar3 != 0)) {
        FUN_04679278(lVar3,*(undefined8 *)PTR_DAT_065dce78,uVar5,*(undefined8 *)puVar2);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


