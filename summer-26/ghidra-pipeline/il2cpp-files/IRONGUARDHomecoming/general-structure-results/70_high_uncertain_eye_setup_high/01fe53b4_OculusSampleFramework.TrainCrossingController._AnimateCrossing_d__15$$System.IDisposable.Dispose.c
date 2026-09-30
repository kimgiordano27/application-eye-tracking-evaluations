/*
FUNCTION_NAME: OculusSampleFramework.TrainCrossingController.<AnimateCrossing>d__15$$System.IDisposable.Dispose
ENTRY_POINT: 01fe53b4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_10;functionality_eye_api_context_without_clear_sink_hits_1
*/


void OculusSampleFramework_TrainCrossingController_<AnimateCrossing>d__15__System_IDisposable_Dispose
               (long param_1)

{
  undefined *puVar1;
  int iVar2;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long lVar3;
  
  thunk_FUN_01efb3a4(*(undefined8 *)(param_1 + 0xa40));
  thunk_FUN_01efb3a4(Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector2f>__ctor__);
  thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Color>__ctor__);
  *(undefined1 *)(unaff_x21 + 0xe4b) = 1;
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  iVar2 = *(int *)(unaff_x19 + 0x20);
  if (iVar2 == 4) {
    FUN_04035fe0(unaff_x19 + 0x38,0);
    FUN_034a48f0(unaff_x19 + 0x50,0);
    if (*(int *)(*unaff_x20 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    iVar2 = 3;
    *(undefined4 *)(unaff_x19 + 0x20) = 3;
  }
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    iVar2 = *(int *)(unaff_x19 + 0x20);
  }
  if (iVar2 != 1) {
    if (*(int *)(*unaff_x20 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      iVar2 = *(int *)(unaff_x19 + 0x20);
    }
    if (iVar2 != 2) {
      if (*(int *)(*unaff_x20 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        iVar2 = *(int *)(unaff_x19 + 0x20);
      }
      if (iVar2 != 4) {
        FUN_04035fe0(unaff_x19 + 0x28,0);
        if (*(long *)(unaff_x19 + 0x10) == 0) {
          return;
        }
        if ((0 < *(int *)(unaff_x19 + 0x18)) && (FUN_03b171e8(), 1 < *(int *)(unaff_x19 + 0x18))) {
          lVar3 = 1;
          do {
            FUN_03b171e8();
            lVar3 = lVar3 + 1;
          } while (lVar3 < *(int *)(unaff_x19 + 0x18));
        }
        FUN_032ece54((long *)(unaff_x19 + 0x10),
                     *(undefined8 *)Method_Unity_Collections_NativeArray<byte>_get_IsCreated__);
        return;
      }
    }
  }
  puVar1 = Method_Unity_Collections_NativeArray<Color>__ctor__;
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_0403ed64(*(undefined8 *)puVar1,0);
  return;
}


