/*
FUNCTION_NAME: UnityEngine.Rendering.AsyncGPUReadbackRequest$$GetData<uint>
ENTRY_POINT: 01e73898
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_8;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_Rendering_AsyncGPUReadbackRequest__GetData<uint>
               (undefined8 param_1,int param_2,long param_3)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 local_28;
  int local_24;
  
  if (*(long *)(param_3 + 0x38) == 0) {
    FUN_01c8c87c(param_3);
  }
  uVar4 = UnityEngine_Rendering_AsyncGPUReadbackRequest__get_done(param_1,0);
  if (((uVar4 & 1) == 0) ||
     (uVar4 = UnityEngine_Rendering_AsyncGPUReadbackRequest__get_hasError(param_1,0),
     (uVar4 & 1) != 0)) {
    thunk_FUN_01cb9718(&System_InvalidOperationException_TypeInfo);
    uVar6 = thunk_FUN_01c8fc48();
    uVar5 = thunk_FUN_01cb9718(&StringLiteral_1781);
    System_InvalidOperationException___ctor(uVar6,uVar5,0);
  }
  else {
    if ((-1 < param_2) &&
       (iVar2 = UnityEngine_Rendering_AsyncGPUReadbackRequest__get_layerCount(param_1,0),
       param_2 < iVar2)) {
      uVar5 = UnityEngine_Rendering_AsyncGPUReadbackRequest__GetDataRaw(param_1,param_2,0);
      uVar5 = System_IntPtr__op_Explicit(uVar5,0);
      iVar3 = UnityEngine_Rendering_AsyncGPUReadbackRequest__get_layerDataSize(param_1,0);
      iVar2 = iVar3 + 3;
      if (-1 < iVar3) {
        iVar2 = iVar3;
      }
      Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__ConvertExistingDataToNativeArray<uint>
                (uVar5,iVar2 >> 2,1,*(undefined8 *)(*(long *)(param_3 + 0x38) + 8));
      return;
    }
    puVar1 = PTR_DAT_03cb5cf0;
    local_24 = param_2;
    uVar5 = thunk_FUN_01c8f880(*(undefined8 *)(PTR_DAT_03cb5cf0 + 0x48),&local_24);
    local_28 = UnityEngine_Rendering_AsyncGPUReadbackRequest__get_layerCount(param_1,0);
    uVar6 = thunk_FUN_01c8f880(*(undefined8 *)(puVar1 + 0x48),&local_28);
    uVar7 = thunk_FUN_01cb9718(&StringLiteral_3665);
    uVar5 = System_String__Format(uVar7,uVar5,uVar6,0);
    thunk_FUN_01cb9718(&System_ArgumentException_TypeInfo);
    uVar6 = thunk_FUN_01c8fc48();
    System_ArgumentException___ctor(uVar6,uVar5,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5ca98(uVar6,param_3);
}


