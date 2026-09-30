/*
FUNCTION_NAME: Unity.Mathematics.double3$$set_yz
ENTRY_POINT: 05ac8290
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Mathematics_double3__set_yz(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  bool in_ZR;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long unaff_x19;
  long unaff_x20;
  ulong uVar6;
  long *plVar7;
  
  *(undefined8 *)(unaff_x20 + 0x360) = param_1;
  if ((((((!in_ZR) &&
         (*(undefined8 *)(unaff_x20 + 0x368) =
               *(undefined8 *)
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonWriter_<WriteTokenSyncReadingAsync>d__31>__
         , 0x6a < param_3)) &&
        (*(undefined8 *)(unaff_x20 + 0x370) =
              *(undefined8 *)Method_System_Reflection_Assembly_get_FullName__, param_3 != 0x6b)) &&
       ((*(undefined8 *)(unaff_x20 + 0x378) =
              *(undefined8 *)
               Method_UnityEngine_Rendering_AsyncGPUReadback_RequestIntoNativeArray<float>__,
        0x6c < param_3 &&
        (*(undefined8 *)(unaff_x20 + 0x380) =
              *(undefined8 *)
               Method_System_Runtime_CompilerServices_AsyncTaskCache_CreateCacheableTask<bool>__,
        param_3 != 0x6d)))) &&
      (((*(undefined8 *)(unaff_x20 + 0x388) =
              *(undefined8 *)
               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<CustomMatchmaking_RoomOperationResult>,_LocalMatchmaking_<StartAsHost>d__14>__
        , 0x6f < param_3 &&
        ((*(undefined8 *)(unaff_x20 + 0x398) =
               *(undefined8 *)
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<OVRAnchor_EraseResult>>,_SpatialAnchorCoreBuildingBlock_<EraseAnchorByUuidAsync>d__29>__
         , param_3 != 0x70 &&
         (*(undefined8 *)(unaff_x20 + 0x3a0) =
               *(undefined8 *)
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<CustomMatchmaking_RoomOperationResult>,_FriendsMatchmaking_<JoinRoom>d__25>__
         , 0x71 < param_3)))) &&
       (*(undefined8 *)(unaff_x20 + 0x3a8) =
             *(undefined8 *)
              Method_Meta_XR_ImmersiveDebugger_Utils_AssemblyParser_GetImmersiveDebuggerEnabled__,
       param_3 != 0x72)))) &&
     ((((*(undefined8 *)(unaff_x20 + 0x3b0) =
              *(undefined8 *)Method_System_Reflection_Assembly_get_CodeBase__, 0x73 < param_3 &&
        (*(undefined8 *)(unaff_x20 + 0x3b8) =
              *(undefined8 *)
               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonReader_<SkipAsync>d__1>__
        , param_3 != 0x74)) &&
       (*(undefined8 *)(unaff_x20 + 0x3c0) =
             *(undefined8 *)Method_UnityEngine_AssetBundle_LoadAsset__, 0x75 < param_3)) &&
      (((*(undefined8 *)(unaff_x20 + 0x3c8) =
              *(undefined8 *)Method_System_Security_Cryptography_AsymmetricAlgorithm_FromXmlString__
        , param_3 != 0x76 &&
        (*(undefined8 *)(unaff_x20 + 0x3d0) =
              *(undefined8 *)
               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<Nullable<int>>,_AsyncProtocolRequest_<ProcessOperation>d__24>__
        , 0x77 < param_3)) &&
       ((*(undefined8 *)(unaff_x20 + 0x3d8) =
              *(undefined8 *)
               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ProcessCarriageReturnAsync>d__11>__
        , param_3 != 0x78 &&
        ((*(undefined8 *)(unaff_x20 + 0x3e0) =
               *(undefined8 *)Method_System_Reflection_Assembly_IsDefined__, 0x79 < param_3 &&
         (*(undefined8 *)(unaff_x20 + 1000) =
               *(undefined8 *)
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<bool>,_LocalMatchmaking_<StartAsHost>d__14>__
         , puVar1 = Method_System_Reflection_Assembly_GetModule__, param_3 != 0x7a)))))))))) {
    *(undefined8 *)(unaff_x20 + 0x3f0) =
         *(undefined8 *)
          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonWriter_<WriteTokenAsync>d__30>__
    ;
    uVar2 = FUN_02f0880c(*(undefined8 *)puVar1);
    uVar5 = *(ulong *)(unaff_x20 + 0x18);
    *(undefined8 *)(unaff_x19 + 0x1d0) = uVar2;
    if (0 < (int)uVar5) {
      uVar6 = 0;
      uVar5 = uVar5 & 0xffffffff;
      do {
        if (uVar5 <= uVar6) goto LAB_05ac85c0;
        uVar5 = FUN_04f6ebb4(*(undefined8 *)(unaff_x20 + uVar6 * 8 + 0x20),0);
        if ((uVar5 & 1) == 0) {
          if (*(uint *)(unaff_x20 + 0x18) <= uVar6) goto LAB_05ac85c0;
          plVar7 = *(long **)(unaff_x19 + 0x1d0);
          lVar3 = FUN_03440bb0();
          if (plVar7 == (long *)0x0) {
Unity_Mathematics_double3x2___ctor:
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          if ((lVar3 != 0) &&
             (lVar4 = thunk_FUN_02f45174(lVar3,*(undefined8 *)(*plVar7 + 0x40)), lVar4 == 0)) {
            uVar2 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
            FUN_02f0888c(uVar2,0);
          }
          if (*(uint *)(plVar7 + 3) <= uVar6) goto LAB_05ac85c0;
          plVar7[uVar6 + 4] = lVar3;
          lVar3 = *(long *)(unaff_x19 + 0x1d0);
          if (lVar3 == 0) goto Unity_Mathematics_double3x2___ctor;
          if (*(uint *)(lVar3 + 0x18) <= uVar6) goto LAB_05ac85c0;
          lVar3 = *(long *)(lVar3 + uVar6 * 8 + 0x20);
          if (lVar3 == 0) goto Unity_Mathematics_double3x2___ctor;
          *(int *)(lVar3 + 0x140) = (int)uVar6 + 1;
        }
        uVar6 = uVar6 + 1;
        uVar5 = (ulong)*(uint *)(unaff_x20 + 0x18);
      } while ((long)uVar6 < (long)(int)*(uint *)(unaff_x20 + 0x18));
    }
    uVar2 = FUN_03440bb0();
    *(undefined8 *)(unaff_x19 + 0x188) = uVar2;
    uVar2 = FUN_03440bb0();
    *(undefined8 *)(unaff_x19 + 400) = uVar2;
    uVar2 = FUN_03440bb0();
    *(undefined8 *)(unaff_x19 + 0x198) = uVar2;
    uVar2 = FUN_03440bb0();
    *(undefined8 *)(unaff_x19 + 0x1a0) = uVar2;
    uVar2 = FUN_03440bb0();
    *(undefined8 *)(unaff_x19 + 0x1a8) = uVar2;
    FUN_05abc18c();
    return;
  }
LAB_05ac85c0:
                    /* WARNING: Subroutine does not return */
  FUN_02f089d0();
}


