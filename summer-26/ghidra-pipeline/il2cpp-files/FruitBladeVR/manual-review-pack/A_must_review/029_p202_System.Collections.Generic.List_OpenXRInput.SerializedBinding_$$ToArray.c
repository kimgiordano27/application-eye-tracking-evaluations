/*
FUNCTION_NAME: System.Collections.Generic.List<OpenXRInput.SerializedBinding>$$ToArray
ENTRY_POINT: 02c74684
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8
System_Collections_Generic_List<OpenXRInput_SerializedBinding>__ToArray(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  iVar1 = *(int *)(param_1 + 0x18);
  lVar3 = *(long *)(*(long *)(param_2 + 0x20) + 0xc0);
  if (iVar1 == 0) {
    lVar3 = *(long *)(lVar3 + 0x10);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01c8c820();
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_01cb0d4c();
    }
    lVar3 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x10);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01c8c820();
    }
    uVar2 = **(undefined8 **)(lVar3 + 0xb8);
  }
  else {
    lVar3 = *(long *)(lVar3 + 0x18);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01c8c820();
    }
    uVar2 = FUN_01c5ca18(lVar3,iVar1);
    System_Array__Copy(*(undefined8 *)(param_1 + 0x10),0,uVar2,0,*(undefined4 *)(param_1 + 0x18),0);
  }
  return uVar2;
}


