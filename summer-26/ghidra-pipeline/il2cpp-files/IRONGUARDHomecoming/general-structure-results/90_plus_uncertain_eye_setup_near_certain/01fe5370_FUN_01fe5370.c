/*
FUNCTION_NAME: FUN_01fe5370
ENTRY_POINT: 01fe5370
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 93
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_12;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_01fe5370(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  puVar1 = Method_Oculus_Platform_Message<AssetDetailsList>_get_Data__;
  if ((DAT_0482ee4b & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<AssetDetailsList>_get_Data__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<byte>_ToArray__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<byte>_get_IsCreated__);
    thunk_FUN_01efb3a4(Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector2f>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Color>__ctor__);
    DAT_0482ee4b = 1;
  }
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  iVar2 = *(int *)(param_1 + 0x20);
  if (iVar2 == 4) {
    FUN_04035fe0(param_1 + 0x38,0);
    FUN_034a48f0(param_1 + 0x50,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    iVar2 = 3;
    *(undefined4 *)(param_1 + 0x20) = 3;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    iVar2 = *(int *)(param_1 + 0x20);
  }
  if (iVar2 != 1) {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      iVar2 = *(int *)(param_1 + 0x20);
    }
    if (iVar2 != 2) {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        iVar2 = *(int *)(param_1 + 0x20);
      }
      if (iVar2 != 4) {
        FUN_04035fe0(param_1 + 0x28,0);
        puVar3 = *(undefined8 **)(param_1 + 0x10);
        if (puVar3 == (undefined8 *)0x0) {
          return;
        }
        if (0 < *(int *)(param_1 + 0x18)) {
          local_40 = puVar3[2];
          uStack_48 = puVar3[1];
          local_50 = *puVar3;
          FUN_03b171e8(&local_50,0);
          if (1 < *(int *)(param_1 + 0x18)) {
            lVar4 = 1;
            lVar5 = 0x18;
            do {
              puVar3 = (undefined8 *)(*(long *)(param_1 + 0x10) + lVar5);
              local_40 = puVar3[2];
              uStack_48 = puVar3[1];
              local_50 = *puVar3;
              FUN_03b171e8(&local_50,0);
              lVar4 = lVar4 + 1;
              lVar5 = lVar5 + 0x18;
            } while (lVar4 < *(int *)(param_1 + 0x18));
          }
        }
        FUN_032ece54((long *)(param_1 + 0x10),
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


