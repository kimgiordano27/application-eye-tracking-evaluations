/*
FUNCTION_NAME: FUN_06b2a370
ENTRY_POINT: 06b2a370
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_06b2a370(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  
  puVar9 = Method_System_Array_Empty<Sequence_ActivationStep>__;
  puVar8 = Method_System_Array_Empty<PointableCanvasModule_PointerImpl>__;
  puVar7 = Method_System_Array_Empty<OvrSkinningTypes_SkinningQuality>__;
  puVar6 = Method_System_Array_Empty<OvrAvatarPrimitive_MorphTargetInfo>__;
  puVar5 = Method_System_Array_Empty<OvrAvatarManager_LoadRequest>__;
  puVar4 = Method_System_Array_Empty<OvrAvatarEntity_SkeletonJoint>__;
  puVar3 = Method_System_Array_Empty<OVRSpatialAnchor_UnboundAnchor>__;
  puVar2 = Method_System_Array_Empty<OVRPlugin_VirtualKeyboardModelAnimationState>__;
  puVar1 = Method_System_Array_Empty<CAPI_ovrAvatar2EventDefinition>__;
  if ((DAT_076e35bc & 1) == 0) {
    thunk_FUN_032e1da0(Method_System_Array_Empty<PointableCanvasModule_PointerImpl>__);
    thunk_FUN_032e1da0(Method_System_Array_Empty<OvrAvatarPrimitive_MorphTargetInfo>__);
    thunk_FUN_032e1da0(Method_System_Array_Empty<OVRPlugin_VirtualKeyboardModelAnimationState>__);
    thunk_FUN_032e1da0(Method_System_Array_Empty<OvrAvatarEntity_SkeletonJoint>__);
    thunk_FUN_032e1da0(Method_System_Array_Empty<CAPI_ovrAvatar2EventDefinition>__);
    thunk_FUN_032e1da0(Method_System_Array_Empty<OVRSpatialAnchor_UnboundAnchor>__);
    thunk_FUN_032e1da0(Method_System_Array_Empty<OvrAvatarManager_LoadRequest>__);
    thunk_FUN_032e1da0(Method_System_Array_Empty<OvrSkinningTypes_SkinningQuality>__);
    thunk_FUN_032e1da0(Method_System_Array_Empty<Sequence_ActivationStep>__);
    DAT_076e35bc = 1;
  }
  *(undefined8 *)(param_1 + 0x58) = DAT_0139e9a0;
  FUN_0560c4d0(param_1,*(undefined8 *)puVar1);
  uVar10 = thunk_FUN_032a56a0(*(undefined8 *)puVar2);
  FUN_055e45e8(uVar10,param_1,*(undefined8 *)puVar3,0);
  *(undefined8 *)(param_1 + 0x60) = uVar10;
  thunk_FUN_0333a630((undefined8 *)(param_1 + 0x60),uVar10);
  uVar10 = thunk_FUN_032a56a0(*(undefined8 *)puVar4);
  FUN_055e44e4(uVar10,param_1,*(undefined8 *)puVar5,0);
  *(undefined8 *)(param_1 + 0x68) = uVar10;
  thunk_FUN_0333a630((undefined8 *)(param_1 + 0x68),uVar10);
  uVar10 = thunk_FUN_032a56a0(*(undefined8 *)puVar6);
  FUN_0510f9b4(uVar10,0,*(undefined8 *)puVar7,0);
  *(undefined8 *)(param_1 + 0x70) = uVar10;
  thunk_FUN_0333a630((undefined8 *)(param_1 + 0x70),uVar10);
  uVar10 = thunk_FUN_032a56a0(*(undefined8 *)puVar8);
  FUN_0510f834(uVar10,0,*(undefined8 *)puVar9,0);
  *(undefined8 *)(param_1 + 0x78) = uVar10;
  thunk_FUN_0333a630((undefined8 *)(param_1 + 0x78),uVar10);
  return;
}


