/*
FUNCTION_NAME: UnityEngine.Rendering.GPUInstanceDataBufferUploader$$Dispose
ENTRY_POINT: 034551f0
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_21;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void UnityEngine_Rendering_GPUInstanceDataBufferUploader__Dispose(long param_1)

{
  undefined *puVar1;
  
  if ((DAT_03ef5b9e & 1) == 0) {
    FUN_01c5c92c(PTR_Method_Unity_Collections_NativeArray<int>_Dispose___03cd4998);
    FUN_01c5c92c(PTR_Method_Unity_Collections_NativeArray<uint>_Dispose___03cd89e8);
    FUN_01c5c92c(PTR_Method_Unity_Collections_NativeArray<bool>_Dispose___03cd8ce0);
    FUN_01c5c92c(PTR_Method_Unity_Collections_NativeArray<uint>_get_IsCreated___03cd2ab8);
    FUN_01c5c92c(PTR_Method_Unity_Collections_NativeArray<int>_get_IsCreated___03cd8bf0);
    FUN_01c5c92c(PTR_Method_Unity_Collections_NativeArray<bool>_get_IsCreated___03cd8ce8);
    FUN_01c5c92c(PTR_Method_Unity_Collections_NativeList<int>_Dispose___03cd8168);
    FUN_01c5c92c(PTR_Method_Unity_Collections_NativeList<int>_get_IsCreated___03cd8970);
    DAT_03ef5b9e = 1;
  }
  puVar1 = PTR_Method_Unity_Collections_NativeArray<int>_Dispose___03cd4998;
  if (*(long *)(param_1 + 0x20) != 0) {
    Unity_Collections_NativeArray<int>__Dispose
              ((long *)(param_1 + 0x20),
               *(undefined8 *)PTR_Method_Unity_Collections_NativeArray<int>_Dispose___03cd4998);
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    Unity_Collections_NativeArray<bool>__Dispose
              ((long *)(param_1 + 0x10),
               *(undefined8 *)PTR_Method_Unity_Collections_NativeArray<bool>_Dispose___03cd8ce0);
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    Unity_Collections_NativeArray<int>__Dispose((long *)(param_1 + 0x30),*(undefined8 *)puVar1);
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    Unity_Collections_NativeArray<uint>__Dispose
              ((long *)(param_1 + 0x40),
               *(undefined8 *)PTR_Method_Unity_Collections_NativeArray<uint>_Dispose___03cd89e8);
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    Unity_Collections_NativeList<int>__Dispose
              ((long *)(param_1 + 0x50),
               *(undefined8 *)PTR_Method_Unity_Collections_NativeList<int>_Dispose___03cd8168);
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    Unity_Collections_NativeArray<int>__Dispose((long *)(param_1 + 0x58),*(undefined8 *)puVar1);
    return;
  }
  return;
}


