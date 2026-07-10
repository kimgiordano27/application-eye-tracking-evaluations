/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<ProbeVolumeBakingSet.SerializedPerSceneCellList>
ENTRY_POINT: 021766d8
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_3
*/


undefined8
System_Array__InternalArray__IEnumerable_GetEnumerator<ProbeVolumeBakingSet_SerializedPerSceneCellList>
          (undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if (*(long *)(param_2 + 0x38) == 0) {
    FUN_01c8c87c(param_2);
  }
  iVar1 = System_Array__get_Length(param_1,0);
  if (iVar1 == 0) {
    lVar3 = *(long *)(*(long *)(param_2 + 0x38) + 8);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01c8c820();
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_01cb0d4c();
    }
    lVar3 = *(long *)(*(long *)(param_2 + 0x38) + 8);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01c8c820();
    }
    uVar2 = **(undefined8 **)(lVar3 + 0xb8);
  }
  else {
    local_30 = 0;
    uStack_28 = 0;
    System_Array_InternalEnumerator<ProbeVolumeBakingSet_SerializedPerSceneCellList>___ctor
              (&local_30,param_1,*(undefined8 *)(*(long *)(param_2 + 0x38) + 0x18));
    uStack_38 = uStack_28;
    local_40 = local_30;
    uVar2 = thunk_FUN_01c8f880(*(undefined8 *)(*(long *)(param_2 + 0x38) + 0x10),&local_40);
  }
  return uVar2;
}


