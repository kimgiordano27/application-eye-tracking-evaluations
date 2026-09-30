/*
FUNCTION_NAME: FUN_01d851a0
ENTRY_POINT: 01d851a0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_1;source_validity_pose_sink_structure
*/


void FUN_01d851a0(long param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_2 < 4) {
    *(uint *)(param_1 + 0x38) = param_2;
    return;
  }
  thunk_FUN_00d48444(Method_System_Collections_ObjectModel_ReadOnlyCollection<Vector3>__ctor__);
  FUN_00acb0a4();
  uVar1 = FUN_01dddadc(param_2,0);
  uVar2 = thunk_FUN_00d48444(
                            Method_UnityEngine_XR_ARFoundation_ARTrackable<XRReferencePoint,_ARReferencePoint>_get_sessionRelativeData__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar1,uVar2);
}


