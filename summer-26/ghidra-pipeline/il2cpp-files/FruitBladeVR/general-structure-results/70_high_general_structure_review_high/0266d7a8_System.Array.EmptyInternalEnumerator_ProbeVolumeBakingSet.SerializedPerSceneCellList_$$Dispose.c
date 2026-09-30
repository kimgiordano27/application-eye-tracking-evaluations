/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<ProbeVolumeBakingSet.SerializedPerSceneCellList>$$Dispose
ENTRY_POINT: 0266d7a8
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


undefined8
System_Array_EmptyInternalEnumerator<ProbeVolumeBakingSet_SerializedPerSceneCellList>__Dispose(void)

{
  ulong uVar1;
  int in_w8;
  long unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  
  do {
    if ((long)in_w8 <= (long)unaff_x23) {
      return 0;
    }
    if (*(uint *)(unaff_x22 + 0x18) <= unaff_x23) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5cbdc();
    }
    if (-1 < *(int *)(unaff_x24 + 8)) {
      if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5cbd4();
      }
      uVar1 = (**(code **)(*unaff_x21 + 0x1b8))();
      if ((uVar1 & 1) != 0) {
        return 1;
      }
      in_w8 = *(int *)(unaff_x19 + 0x20);
    }
    unaff_x23 = unaff_x23 + 1;
    unaff_x24 = unaff_x24 + 0x18;
  } while( true );
}


