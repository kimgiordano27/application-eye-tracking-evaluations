/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<OVRPassthroughLayer.SerializedSurfaceGeometry>
ENTRY_POINT: 0139a2c4
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void System_Array__InternalArray__ICollection_Add<OVRPassthroughLayer_SerializedSurfaceGeometry>
               (uint param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint unaff_w19;
  long unaff_x20;
  
  if (param_1 <= unaff_w19) {
    thunk_FUN_01279b34(PTR_DAT_027b3fa8);
    uVar5 = thunk_FUN_0124bba8();
    uVar4 = thunk_FUN_01279b34(PTR_DAT_027b3fa0);
    System_TimeSpan__get_Seconds(uVar5,uVar4,0);
                    /* WARNING: Subroutine does not return */
    FUN_01230b78(uVar5);
  }
  plVar1 = (long *)thunk_FUN_0124baac();
  if (plVar1 != (long *)0x0) {
    lVar2 = thunk_FUN_0124b7d8(**(undefined8 **)(unaff_x20 + 0x38));
    if ((lVar2 != 0) &&
       (lVar3 = thunk_FUN_0124baac(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0)) {
      uVar5 = thunk_FUN_012668ac();
                    /* WARNING: Subroutine does not return */
      FUN_01230b78(uVar5,0);
    }
    if (unaff_w19 < *(uint *)(plVar1 + 3)) {
      plVar1[(long)(int)unaff_w19 + 4] = lVar2;
      thunk_FUN_01286abc(plVar1 + (long)(int)unaff_w19 + 4,lVar2);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01230ca8();
  }
  FUN_01230ab0();
  return;
}


