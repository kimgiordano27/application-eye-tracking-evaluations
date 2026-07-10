/*
FUNCTION_NAME: Unity.Collections.NativeArrayExtensions$$Initialize<InstanceOcclusionEventDebugArray.Request>
ENTRY_POINT: 01f95178
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_3;telemetry_or_network_hits_3;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Collections_NativeArrayExtensions__Initialize<InstanceOcclusionEventDebugArray_Request>
               (undefined8 *param_1,undefined4 param_2,undefined4 param_3,int param_4,long param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  local_64 = param_3;
  if (*(long *)(param_5 + 0x38) == 0) {
    FUN_01c5c92c(&Unity_Collections_AllocatorManager_TypeInfo);
    if (*(long *)(param_5 + 0x38) == 0) {
      FUN_01c8c87c(param_5);
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  local_68 = param_3;
  if (*(int *)(Unity_Collections_AllocatorManager_TypeInfo + 0xe4) == 0) {
    thunk_FUN_01cb0d4c();
  }
  local_40 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uVar2 = Unity_Collections_AllocatorManager__AllocateStruct<AllocatorManager_AllocatorHandle,_InstanceOcclusionEventDebugArray_Request>
                    (&local_68,&local_60,param_2,*(undefined8 *)(*(long *)(param_5 + 0x38) + 0x18));
  *param_1 = uVar2;
  *(undefined4 *)(param_1 + 1) = param_2;
  uVar3 = Unity_Collections_AllocatorManager_AllocatorHandle__get_IsAutoDispose(&local_64,0);
  if ((uVar3 & 1) == 0) {
    uVar1 = Unity_Collections_AllocatorManager_AllocatorHandle__get_ToAllocator(&local_64,0);
  }
  else {
    uVar1 = 1;
  }
  *(undefined4 *)((long)param_1 + 0xc) = uVar1;
  if (param_4 == 1) {
    Unity_Collections_LowLevel_Unsafe_UnsafeUtility__MemClear
              (*param_1,(long)(*(int *)(param_1 + 1) * 0x28),0);
  }
  return;
}


