/*
FUNCTION_NAME: System.Collections.Generic.Comparer<OVRPassthroughLayer.SerializedSurfaceGeometry>$$.ctor
ENTRY_POINT: 0546410c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void System_Collections_Generic_Comparer<OVRPassthroughLayer_SerializedSurfaceGeometry>___ctor(void)

{
  long lVar1;
  undefined8 uVar2;
  long *unaff_x20;
  
  FUN_03e24aa0();
  lVar1 = (*(code *)**(undefined8 **)(*(long *)(*unaff_x20 + 0xc0) + 0x268))();
  uVar2 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_075dabb0);
  FUN_04292d74();
  if (lVar1 != 0) {
    Fusion_Native__MallocAndClearArray<NetPeerGroup>(lVar1,uVar2,0,*(undefined8 *)PTR_DAT_075dabd0);
    lVar1 = (*(code *)**(undefined8 **)(*(long *)(*unaff_x20 + 0xc0) + 0x268))();
    uVar2 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_075dabc8);
    FUN_04292d74();
    if (lVar1 != 0) {
      Fusion_Native__MallocAndClearArray<NetPeerGroup>
                (lVar1,uVar2,0,*(undefined8 *)PTR_DAT_075dabd8);
                    /* WARNING: Could not recover jumptable at 0x05464218. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)**(undefined8 **)(*(long *)(*unaff_x20 + 0xc0) + 0x270))();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


