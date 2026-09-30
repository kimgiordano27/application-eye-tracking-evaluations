/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPassthroughLayer.SerializedSurfaceGeometry>
ENTRY_POINT: 0300d810
PROGRAM: hellodot-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void System_Array__InternalArray__ICollection_Contains<OVRPassthroughLayer_SerializedSurfaceGeometry>
               (code *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  long unaff_x22;
  long lVar2;
  
  uVar1 = (*param_1)();
  if (unaff_x22 != 0) {
    *(undefined8 *)(unaff_x22 + 0x20) = uVar1;
    *(undefined1 *)(unaff_x20 + 0x38) = 0;
    if ((*(long *)(unaff_x20 + 0x18) != 0) && (lVar2 = *(long *)(unaff_x20 + 0x10), lVar2 != 0)) {
      if (*(long *)(unaff_x20 + 0x60) == 0) goto LAB_0300d8d8;
      FUN_046acac8(*(long *)(unaff_x20 + 0x60),*(long *)(unaff_x20 + 0x18),
                   *(undefined8 *)PTR_DAT_065d8918);
      FUN_02f0157c(lVar2);
    }
    FUN_0300ead4();
    return;
  }
LAB_0300d8d8:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


