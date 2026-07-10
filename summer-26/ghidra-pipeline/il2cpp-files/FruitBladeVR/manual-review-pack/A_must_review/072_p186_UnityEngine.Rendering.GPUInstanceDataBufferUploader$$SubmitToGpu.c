/*
FUNCTION_NAME: UnityEngine.Rendering.GPUInstanceDataBufferUploader$$SubmitToGpu
ENTRY_POINT: 0345510c
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_15;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_3;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_Rendering_GPUInstanceDataBufferUploader__SubmitToGpu
               (long param_1,long param_2,undefined8 param_3,ulong param_4,undefined8 param_5,
               uint param_6)

{
  undefined *puVar1;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if ((DAT_03ef5b9d & 1) == 0) {
    FUN_01c5c92c(PTR_Method_Unity_Collections_NativeArray<GPUInstanceIndex>_Dispose___03cd8188);
    FUN_01c5c92c(PTR_Method_Unity_Collections_NativeArray<GPUInstanceIndex>__ctor___03cd8190);
    DAT_03ef5b9d = 1;
  }
  local_50 = 0;
  uStack_48 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    Unity_Collections_NativeArray<GPUInstanceIndex>___ctor
              (&local_50,param_4 & 0xffffffff,3,0,
               *(undefined8 *)
                PTR_Method_Unity_Collections_NativeArray<GPUInstanceIndex>__ctor___03cd8190);
    puVar1 = PTR_Method_Unity_Collections_NativeArray<GPUInstanceIndex>_Dispose___03cd8188;
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5cbd4();
    }
    UnityEngine_Rendering_GPUInstanceDataBuffer__CPUInstanceArrayToGPUInstanceArray
              (param_2,param_3,param_4,local_50,uStack_48);
    UnityEngine_Rendering_GPUInstanceDataBufferUploader__SubmitToGpu
              (param_1,param_2,local_50,uStack_48,param_5,param_6 & 1);
    Unity_Collections_NativeArray<GPUInstanceIndex>__Dispose(&local_50,*(undefined8 *)puVar1);
  }
  return;
}


