/*
FUNCTION_NAME: FUN_05ccf8ac
ENTRY_POINT: 05ccf8ac
PROGRAM: hellodot-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_21;validity_or_gating_hits_5;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_05ccf8ac(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  
  puVar8 = UnityEngine_XR_OpenXR_Features_Meta_MetaOpenXRCameraSubsystem_MetaOpenXRProvider_var;
  puVar7 = UnityEngine_UIElements_ListViewDragger_DragPosition_var;
  puVar6 = UnityEngine_InputSystem_InputControlPath_ParsedPathComponent_var;
  puVar5 = PTR_DAT_065e2678;
  puVar4 = PTR_DAT_065e2670;
  puVar3 = PTR_DAT_065df1b0;
  puVar2 = PTR_DAT_065df1a0;
  puVar1 = PTR_DAT_065df198;
  if ((DAT_06a7a355 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e2670);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (
              UnityEngine_XR_OpenXR_Features_Meta_MetaOpenXRPlaneSubsystem_MetaOpenXRPlaneProvider_var
              );
    AkMIDIEventCallbackInfo__get_byProgramNum
              (
              UnityEngine_XR_OpenXR_Features_Meta_MetaOpenXRRaycastSubsystem_MetaOpenXRRaycastProvider_var
              );
    AkMIDIEventCallbackInfo__get_byProgramNum
              (UnityEngine_XR_OpenXR_Features_Meta_MetaOpenXRSessionSubsystem_MetaOpenXRProvider_var
              );
    AkMIDIEventCallbackInfo__get_byProgramNum
              (
              UnityEngine_XR_OpenXR_Features_Interactions_MetaQuestTouchPlusControllerProfile_QuestTouchPlusController_var
              );
    AkMIDIEventCallbackInfo__get_byProgramNum
              (UnityEngine_XR_OpenXR_Features_Meta_MetaOpenXRCameraSubsystem_MetaOpenXRProvider_var)
    ;
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065df1b0);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (UnityEngine_InputSystem_InputControlPath_ParsedPathComponent_var);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e2678);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (UnityEngine_UIElements_ListViewDragger_DragPosition_var);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065df198);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Runtime_Remoting_Messaging_LogicalCallContext_Reader_var);
    AkMIDIEventCallbackInfo__get_byProgramNum(Meta_XR_MRUtilityKit_MRUK_CreateSceneDataResults_var);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065df1a0);
    AkMIDIEventCallbackInfo__get_byProgramNum(Meta_XR_MRUtilityKit_MRUK_SceneTrackingSettings_var);
    AkMIDIEventCallbackInfo__get_byProgramNum(Meta_XR_MRUtilityKit_MRUKRoom_CouchSeat_var);
    DAT_06a7a355 = 1;
  }
  uVar9 = FUN_0353fc18(param_1,*(undefined8 *)puVar1,*(undefined8 *)puVar6);
  *(undefined8 *)(param_1 + 0x90) = uVar9;
  uVar9 = FUN_0354009c(0,param_1,*(undefined8 *)puVar2,*(undefined8 *)puVar3);
  *(undefined8 *)(param_1 + 0x98) = uVar9;
  uVar9 = thunk_FUN_02cea894(*(undefined8 *)puVar4);
  FUN_04a5632c(uVar9,param_1,*(undefined8 *)puVar8,0);
  lVar10 = FUN_03540880(param_1,*(undefined8 *)puVar7,uVar9,*(undefined8 *)puVar5);
  puVar2 = 
  UnityEngine_XR_OpenXR_Features_Interactions_MetaQuestTouchPlusControllerProfile_QuestTouchPlusController_var
  ;
  puVar1 = Meta_XR_MRUtilityKit_MRUKRoom_CouchSeat_var;
  if (lVar10 != 0) {
    uVar9 = FUN_05ce3c44(lVar10,0);
    *(undefined8 *)(param_1 + 0xa0) = uVar9;
    uVar9 = thunk_FUN_02cea894(*(undefined8 *)puVar4);
    FUN_04a5632c(uVar9,param_1,*(undefined8 *)puVar2,0);
    lVar10 = FUN_03540880(param_1,*(undefined8 *)puVar1,uVar9,*(undefined8 *)puVar5);
    puVar2 = 
    UnityEngine_XR_OpenXR_Features_Meta_MetaOpenXRPlaneSubsystem_MetaOpenXRPlaneProvider_var;
    puVar1 = Meta_XR_MRUtilityKit_MRUK_SceneTrackingSettings_var;
    if (lVar10 != 0) {
      uVar9 = FUN_05ce3c44(lVar10,0);
      *(undefined8 *)(param_1 + 0xa8) = uVar9;
      uVar9 = thunk_FUN_02cea894(*(undefined8 *)puVar4);
      FUN_04a5632c(uVar9,param_1,*(undefined8 *)puVar2,0);
      lVar10 = FUN_03540880(param_1,*(undefined8 *)puVar1,uVar9,*(undefined8 *)puVar5);
      puVar2 = 
      UnityEngine_XR_OpenXR_Features_Meta_MetaOpenXRRaycastSubsystem_MetaOpenXRRaycastProvider_var;
      puVar1 = System_Runtime_Remoting_Messaging_LogicalCallContext_Reader_var;
      if (lVar10 != 0) {
        uVar9 = FUN_05ce3c44(lVar10,0);
        *(undefined8 *)(param_1 + 0xb0) = uVar9;
        uVar9 = thunk_FUN_02cea894(*(undefined8 *)puVar4);
        FUN_04a5632c(uVar9,param_1,*(undefined8 *)puVar2,0);
        lVar10 = FUN_03540880(param_1,*(undefined8 *)puVar1,uVar9,*(undefined8 *)puVar5);
        puVar2 = 
        UnityEngine_XR_OpenXR_Features_Meta_MetaOpenXRSessionSubsystem_MetaOpenXRProvider_var;
        puVar1 = Meta_XR_MRUtilityKit_MRUK_CreateSceneDataResults_var;
        if (lVar10 != 0) {
          uVar9 = FUN_05ce3c44(lVar10,0);
          *(undefined8 *)(param_1 + 0xb8) = uVar9;
          uVar9 = thunk_FUN_02cea894(*(undefined8 *)puVar4);
          FUN_04a5632c(uVar9,param_1,*(undefined8 *)puVar2,0);
          lVar10 = FUN_03540880(param_1,*(undefined8 *)puVar1,uVar9,*(undefined8 *)puVar5);
          if (lVar10 != 0) {
            uVar9 = FUN_05ce3c44(lVar10,0);
            *(undefined8 *)(param_1 + 0xc0) = uVar9;
            thunk_FUN_05ce98c4(param_1,*(undefined8 *)(param_1 + 0x90),
                               *(undefined8 *)(param_1 + 0xa0),0);
            thunk_FUN_05ce98c4(param_1,*(undefined8 *)(param_1 + 0x98),
                               *(undefined8 *)(param_1 + 0xa0),0);
            thunk_FUN_05ce98c4(param_1,*(undefined8 *)(param_1 + 0x90),
                               *(undefined8 *)(param_1 + 0xa8),0);
            thunk_FUN_05ce98c4(param_1,*(undefined8 *)(param_1 + 0x98),
                               *(undefined8 *)(param_1 + 0xa8),0);
            thunk_FUN_05ce98c4(param_1,*(undefined8 *)(param_1 + 0x90),
                               *(undefined8 *)(param_1 + 0xb0),0);
            thunk_FUN_05ce98c4(param_1,*(undefined8 *)(param_1 + 0x98),
                               *(undefined8 *)(param_1 + 0xb0),0);
            thunk_FUN_05ce98c4(param_1,*(undefined8 *)(param_1 + 0x90),
                               *(undefined8 *)(param_1 + 0xb8),0);
            thunk_FUN_05ce98c4(param_1,*(undefined8 *)(param_1 + 0x98),
                               *(undefined8 *)(param_1 + 0xb8),0);
            thunk_FUN_05ce98c4(param_1,*(undefined8 *)(param_1 + 0x90),
                               *(undefined8 *)(param_1 + 0xc0),0);
            thunk_FUN_05ce98c4(param_1,*(undefined8 *)(param_1 + 0x98),
                               *(undefined8 *)(param_1 + 0xc0),0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


