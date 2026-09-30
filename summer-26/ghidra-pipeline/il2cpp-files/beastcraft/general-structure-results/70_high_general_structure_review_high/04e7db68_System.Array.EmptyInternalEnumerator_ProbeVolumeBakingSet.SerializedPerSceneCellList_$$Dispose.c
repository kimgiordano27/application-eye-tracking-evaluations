/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<ProbeVolumeBakingSet.SerializedPerSceneCellList>$$Dispose
ENTRY_POINT: 04e7db68
PROGRAM: beastcraft-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


long System_Array_EmptyInternalEnumerator<ProbeVolumeBakingSet_SerializedPerSceneCellList>__Dispose
               (undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x38);
  if (lVar1 == 0) {
    if ((*(ushort *)(*(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 200) + 0x135) & 1) == 0
       ) {
      FUN_02e7568c();
    }
    uVar2 = thunk_FUN_02e78ab8();
    FUN_03d99fb4();
    *(undefined8 *)(unaff_x19 + 0x38) = uVar2;
    thunk_FUN_02ee2be8((long *)(unaff_x20 + 0x38),uVar2);
    lVar1 = *(long *)(unaff_x19 + 0x38);
  }
  return lVar1;
}


