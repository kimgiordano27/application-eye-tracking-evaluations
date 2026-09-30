/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<OVRPassthroughLayer.SerializedSurfaceGeometry>
ENTRY_POINT: 04a77a38
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void System_Array__InternalArray__ICollection_CopyTo<OVRPassthroughLayer_SerializedSurfaceGeometry>
               (void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int unaff_w20;
  int unaff_w21;
  long unaff_x24;
  undefined *puVar4;
  
  if (unaff_x24 == 0) {
    thunk_FUN_03d1e194(PTR_DAT_091adab0);
    uVar1 = thunk_FUN_03d2ef40();
    uVar2 = thunk_FUN_03d1e194(PTR_DAT_091b3178);
    FUN_070c4c34(uVar1,uVar2,0);
    goto LAB_04a77b30;
  }
  if (unaff_w21 < 0) {
LAB_04a77a88:
    thunk_FUN_03d1e194(PTR_DAT_091ab0b0);
    uVar1 = thunk_FUN_03d2ef40();
    uVar2 = thunk_FUN_03d1e194(PTR_DAT_091f9130);
    puVar4 = PTR_DAT_091f9138;
  }
  else {
    if (*(int *)(unaff_x24 + 0x18) < unaff_w21) goto LAB_04a77a88;
    if ((-1 < unaff_w20) && (unaff_w20 <= *(int *)(unaff_x24 + 0x18) - unaff_w21)) {
      FUN_04a94788();
      return;
    }
    thunk_FUN_03d1e194(PTR_DAT_091ab0b0);
    uVar1 = thunk_FUN_03d2ef40();
    uVar2 = thunk_FUN_03d1e194(PTR_DAT_091b4488);
    puVar4 = PTR_DAT_091f9140;
  }
  uVar3 = thunk_FUN_03d1e194(puVar4);
  FUN_070c848c(uVar1,uVar2,uVar3,0);
LAB_04a77b30:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d414(uVar1);
}


