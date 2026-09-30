/*
FUNCTION_NAME: System.Array$$IndexOfImpl<OVRPassthroughLayer.SerializedSurfaceGeometry>
ENTRY_POINT: 03f28ea8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void System_Array__IndexOfImpl<OVRPassthroughLayer_SerializedSurfaceGeometry>
               (long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  undefined8 *unaff_x21;
  
  if (((param_1 != 0) &&
      (lVar1 = FUN_04de82e0(param_1,*(undefined4 *)(unaff_x19 + 400),*unaff_x21), lVar1 != 0)) &&
     (param_2 != 0)) {
    lVar2 = *(long *)(unaff_x19 + 0x180);
    *(undefined8 *)(param_2 + 0x200) = *(undefined8 *)(lVar1 + 0x208);
    if (lVar2 != 0) {
      lVar1 = FUN_04de82e0(lVar2,*(undefined4 *)(unaff_x19 + 400),*unaff_x21);
      if (((*(long *)(unaff_x19 + 0x180) != 0) &&
          (lVar2 = FUN_04de82e0(*(long *)(unaff_x19 + 0x180),*(undefined4 *)(unaff_x19 + 400),
                                *unaff_x21), lVar2 != 0)) && (lVar1 != 0)) {
        *(undefined8 *)(lVar1 + 0x210) = *(undefined8 *)(lVar2 + 0x218);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


