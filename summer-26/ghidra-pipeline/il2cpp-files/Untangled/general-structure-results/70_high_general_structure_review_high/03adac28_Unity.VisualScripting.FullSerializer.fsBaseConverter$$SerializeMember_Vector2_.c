/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsBaseConverter$$SerializeMember<Vector2>
ENTRY_POINT: 03adac28
PROGRAM: Untangled-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


long Unity_VisualScripting_FullSerializer_fsBaseConverter__SerializeMember<Vector2>
               (undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long in_x9;
  long unaff_x19;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *param_1;
  if (*(int *)(**(long **)(in_x9 + 0xeb0) + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  FUN_056109c0(uVar4,0);
  lVar1 = FUN_0672705c();
  lVar3 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02eea768(lVar3);
  }
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = thunk_FUN_02ef170c(lVar1,lVar3);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08440(lVar1,lVar3);
    }
  }
  return lVar2;
}


