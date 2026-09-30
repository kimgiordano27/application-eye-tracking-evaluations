/*
FUNCTION_NAME: FUN_0619bc14
ENTRY_POINT: 0619bc14
PROGRAM: hellodot-libil2cpp.so
SCORE: 110
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_7;validity_or_gating_hits_2;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


undefined1  [16] FUN_0619bc14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  ulong local_48;
  
  puVar1 = OVRManager_SystemHeadsetType_TypeInfo;
  if ((DAT_06a83d23 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065df8f0);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065df8f8);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065df900);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065df908);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065df910);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065cbbe0);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065cefb0);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRManager_XrApi_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRMesh_IOVRMeshDataProvider_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRManager_SystemHeadsetType_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRManager_PassthroughCapabilities_TypeInfo);
    DAT_06a83d23 = 1;
  }
  local_48 = 0;
  lVar5 = thunk_FUN_02cea894(*(undefined8 *)puVar1);
  FUN_04f7383c(lVar5,0);
  puVar1 = PTR_DAT_065df908;
  if (lVar5 != 0) {
    *(undefined8 *)(lVar5 + 0x10) = param_2;
    puVar4 = OVRMesh_IOVRMeshDataProvider_TypeInfo;
    puVar3 = OVRManager_PassthroughCapabilities_TypeInfo;
    puVar2 = PTR_DAT_065df900;
    uVar6 = thunk_FUN_02cea894(*(undefined8 *)puVar1);
    FUN_04a5632c(uVar6,lVar5,*(undefined8 *)puVar4,0);
    uVar6 = UnityEngine_Rendering_RenderPipeline__IsRenderRequestSupported<__Il2CppFullySharedGenericType>
                      (param_3,uVar6,*(undefined8 *)puVar2);
    lVar8 = *(long *)puVar3;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_02cd038c(lVar8);
      lVar8 = *(long *)puVar3;
    }
    puVar2 = PTR_DAT_065df8f8;
    puVar1 = PTR_DAT_065df8f0;
    lVar9 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x18);
    if (lVar9 == 0) {
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_02cd038c(lVar8);
        lVar8 = *(long *)puVar3;
      }
      uVar10 = **(undefined8 **)(lVar8 + 0xb8);
      lVar9 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065df910);
      FUN_04a550b8(lVar9,uVar10,*(undefined8 *)OVRManager_XrApi_TypeInfo,0);
      *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18) = lVar9;
    }
    uVar6 = FUN_033ea058(uVar6,lVar9,*(undefined8 *)puVar1);
    local_48 = FUN_033f41ac(uVar6,*(undefined8 *)puVar2);
    if ((local_48 & 0xff) == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = FUN_03c868c4(&local_48,*(undefined8 *)PTR_DAT_065cefb0);
      uVar7 = uVar7 & 0xffffffff;
    }
    auVar11._0_8_ = *(undefined8 *)(lVar5 + 0x10);
    auVar11._8_8_ = uVar7;
    return auVar11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


