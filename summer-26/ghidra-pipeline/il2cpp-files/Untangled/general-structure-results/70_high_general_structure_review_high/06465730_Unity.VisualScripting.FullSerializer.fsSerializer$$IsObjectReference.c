/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsSerializer$$IsObjectReference
ENTRY_POINT: 06465730
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


void Unity_VisualScripting_FullSerializer_fsSerializer__IsObjectReference(ulong param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  undefined8 uVar3;
  long unaff_x22;
  
  if ((param_1 & 1) == 0) {
                    /* try { // try from 06465734 to 06565743 has its CatchHandler @ 06466850 */
    FUN_02f07e70(System_Collections_Generic_HashSet<Vector3>_TypeInfo);
    *(undefined1 *)(unaff_x22 + 0xab6) = 1;
  }
                    /* try { // try from 06465758 to 0656575b has its CatchHandler @ 06466834 */
  (**(code **)(*unaff_x19 + 0x508))();
  lVar1 = (**(code **)(*unaff_x19 + 0x4b8))();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)System_Collections_Generic_HashSet<Vector3>_TypeInfo;
    lVar2 = thunk_FUN_02ef170c(lVar1,uVar3);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08440(lVar1,uVar3);
    }
  }
  return;
}


