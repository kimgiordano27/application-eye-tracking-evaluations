/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsBaseConverter$$SerializeMember<Vector3>
ENTRY_POINT: 03aab984
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


void Unity_VisualScripting_FullSerializer_fsBaseConverter__SerializeMember<Vector3>
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,long param_4)

{
  undefined4 uVar1;
  long lVar2;
  
                    /* catch() { ... } // from try @ 03aab978 with catch @ 03aab984 */
                    /* catch() { ... } // from try @ 03aab96c with catch @ 03aab988 */
  lVar2 = *(long *)(param_4 + 0x38);
                    /* catch() { ... } // from try @ 03aab6a8 with catch @ 03aab98c */
                    /* catch() { ... } // from try @ 03aab648 with catch @ 03aab990 */
                    /* catch() { ... } // from try @ 03aab7c0 with catch @ 03aab994 */
                    /* catch() { ... } // from try @ 03aab960 with catch @ 03aab998 */
  if (lVar2 == 0) {
                    /* catch() { ... } // from try @ 03aab764 with catch @ 03aab99c */
                    /* catch() { ... } // from try @ 03aab95c with catch @ 03aab9a0
                       catch() { ... } // from try @ 03aab964 with catch @ 03aab9a0 */
                    /* catch() { ... } // from try @ 03aab7e0 with catch @ 03aab9a4 */
    thunk_FUN_032e1da0(PTR_DAT_0727fef8);
    lVar2 = *(long *)(param_4 + 0x38);
    if (lVar2 == 0) {
      FUN_03293514(param_4);
      lVar2 = *(long *)(param_4 + 0x38);
    }
  }
                    /* try { // try from 03aab9bc to 03bab9bf has its CatchHandler @ 03aab9d8 */
  uVar1 = FUN_03b81b70(*(undefined8 *)(lVar2 + 0x10));
                    /* catch() { ... } // from try @ 03aab9bc with catch @ 03aab9d8 */
  if (*(int *)(*(long *)PTR_DAT_0727fef8 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(*(long *)PTR_DAT_0727fef8);
  }
  FUN_03aa9988(param_1,4,uVar1,param_3,*(undefined8 *)(*(long *)(param_4 + 0x38) + 0x18));
  return;
}


