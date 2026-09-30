/*
FUNCTION_NAME: FUN_074b84f4
ENTRY_POINT: 074b84f4
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_8;strong_pose_or_ray_construction_hits_21;functionality_eye_api_context_without_clear_sink_hits_8
*/


void FUN_074b84f4(long param_1)

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
  
  puVar8 = Method_Unity_Collections_NativeArray<ProbeBrickIndex_Brick>__ctor__;
  puVar7 = Method_Unity_Collections_NativeArray<Painter2D_Painter2DJobData>_Dispose__;
  puVar6 = Method_Unity_Collections_NativeArray<Painter2D_Painter2DJobData>__ctor__;
  puVar5 = Method_Unity_Collections_NativeArray<OVRRoomMesh_Face>_Reinterpret<OVRPlugin_RoomFace>__;
  puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_GetEnumerator__;
  puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  puVar1 = PTR_DAT_079f4db0;
  if ((DAT_07ef42d4 & 1) == 0) {
    FUN_03642964(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_GetEnumerator__);
    FUN_03642964(Method_Unity_Collections_NativeArray<Painter2D_Painter2DJobData>__ctor__);
    FUN_03642964(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    FUN_03642964(
                Method_Unity_Collections_NativeArray<OVRRoomMesh_Face>_Reinterpret<OVRPlugin_RoomFace>__
                );
    FUN_03642964(Method_Unity_Collections_NativeArray<ProbeBrickIndex_Brick>__ctor__);
    FUN_03642964(Method_Unity_Collections_NativeArray<Painter2D_Painter2DJobData>_Dispose__);
    FUN_03642964(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    FUN_03642964(PTR_DAT_079f4db0);
    DAT_07ef42d4 = 1;
  }
  uVar9 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
  FUN_072b9fd4(uVar9,0);
  *(undefined8 *)(param_1 + 0x20) = uVar9;
  thunk_FUN_036b7ad0((undefined8 *)(param_1 + 0x20),uVar9);
  uVar9 = thunk_FUN_0367fe20(*(undefined8 *)puVar3);
  FUN_0422a220(uVar9,*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0x30) = uVar9;
  thunk_FUN_036b7ad0((undefined8 *)(param_1 + 0x30),uVar9);
  uVar9 = thunk_FUN_0367fe20(*(undefined8 *)puVar5);
  FUN_0422a220(uVar9,*(undefined8 *)puVar6);
  *(undefined8 *)(param_1 + 0x38) = uVar9;
  thunk_FUN_036b7ad0((undefined8 *)(param_1 + 0x38),uVar9);
  uVar9 = thunk_FUN_0367fe20(*(undefined8 *)puVar7);
  FUN_0459e7d4(uVar9,*(undefined8 *)puVar8);
  *(undefined8 *)(param_1 + 0x48) = uVar9;
  thunk_FUN_036b7ad0((undefined8 *)(param_1 + 0x48),uVar9);
  uVar9 = FUN_03642a4c(*(undefined8 *)puVar1,4);
  *(undefined8 *)(param_1 + 0x88) = uVar9;
  thunk_FUN_036b7ad0();
  FUN_074cce08(param_1,0);
  return;
}


