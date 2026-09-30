/*
FUNCTION_NAME: FUN_06d5cb44
ENTRY_POINT: 06d5cb44
PROGRAM: vandalizer-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction
*/


void FUN_06d5cb44(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  undefined8 local_38;
  
  puVar2 = System_ParameterizedStrings_FormatParam___TypeInfo;
  puVar1 = OVRPlugin_FaceTrackingDataSource___TypeInfo;
  if ((DAT_07a51091 & 1) == 0) {
    FUN_031f20f4(Oculus_Interaction_GrabAPI_PinchGrabAPI_FingerPinchData___TypeInfo);
    FUN_031f20f4(System_ParameterizedStrings_FormatParam___TypeInfo);
    FUN_031f20f4(Oculus_Interaction_PointableCanvasModule_PointerImpl___TypeInfo);
    FUN_031f20f4(UnityEngine_UIElements_PointerDeviceState_PointerLocation___TypeInfo);
    FUN_031f20f4(UnityEngine_Rendering_ProbeBrickIndex_IndirectionEntryUpdateInfo___TypeInfo);
    FUN_031f20f4(OVRPlugin_FaceTrackingDataSource___TypeInfo);
    DAT_07a51091 = 1;
  }
  puVar4 = UnityEngine_Rendering_ProbeBrickIndex_IndirectionEntryUpdateInfo___TypeInfo;
  puVar3 = Oculus_Interaction_PointableCanvasModule_PointerImpl___TypeInfo;
  local_70 = *(undefined8 *)puVar1;
  uStack_48 = 0;
  local_50 = 0;
  local_38 = 0;
  local_40 = 0;
  uStack_68 = 0;
  local_58 = 0;
  local_60 = 0;
  thunk_FUN_0329bf60(&local_70);
  uVar7 = *(undefined8 *)puVar2;
  if (*(int *)(*(long *)(PTR_DAT_0759b388 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uStack_68 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar7,0);
  thunk_FUN_0329bf60((ulong)&local_70 | 8);
  local_60 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(undefined8 *)puVar3,0);
  thunk_FUN_0329bf60(&local_60);
  local_58 = 0;
  thunk_FUN_0329bf60(&local_58,0);
  local_50 = 0;
  thunk_FUN_0329bf60(&local_50,0);
  uStack_48 = 0;
  thunk_FUN_0329bf60(&uStack_48,0);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    lVar5 = *(long *)puVar4;
  }
  lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
  if (lVar8 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      lVar5 = *(long *)puVar4;
    }
    uVar7 = **(undefined8 **)(lVar5 + 0xb8);
    lVar8 = thunk_FUN_0322f148(*(undefined8 *)
                                Oculus_Interaction_GrabAPI_PinchGrabAPI_FingerPinchData___TypeInfo);
    FUN_042cb89c(lVar8,uVar7,
                 *(undefined8 *)UnityEngine_UIElements_PointerDeviceState_PointerLocation___TypeInfo
                 ,0);
    plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
    *plVar6 = lVar8;
    thunk_FUN_0329bf60(plVar6,lVar8);
  }
  local_40 = lVar8;
  thunk_FUN_0329bf60(&local_40,lVar8);
  local_38 = 0;
  thunk_FUN_0329bf60(&local_38,0);
  uStack_a8 = uStack_68;
  local_b0 = local_70;
  uStack_98 = local_58;
  uStack_a0 = local_60;
  uStack_88 = uStack_48;
  local_90 = local_50;
  uStack_78 = local_38;
  lStack_80 = local_40;
  FUN_06c2c3e4(&local_b0,0);
  return;
}


