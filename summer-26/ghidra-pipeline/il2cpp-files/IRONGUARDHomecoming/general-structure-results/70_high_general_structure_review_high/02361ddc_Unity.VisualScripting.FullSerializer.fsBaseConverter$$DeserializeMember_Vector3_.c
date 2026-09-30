/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsBaseConverter$$DeserializeMember<Vector3>
ENTRY_POINT: 02361ddc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long Unity_VisualScripting_FullSerializer_fsBaseConverter__DeserializeMember<Vector3>(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long lVar4;
  
  uVar1 = FUN_03579868();
  if (*(int *)(*(long *)Method_System_Collections_Comparer_GetObjectData__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)Method_System_Collections_Comparer_GetObjectData__);
  }
  lVar2 = FUN_03b593b4(uVar1,0);
  lVar4 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01ecaf44(lVar4);
  }
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = thunk_FUN_01f116d0(lVar2,lVar4);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(lVar2,lVar4);
    }
  }
  return lVar3;
}


