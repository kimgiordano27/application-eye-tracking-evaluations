/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.SpaceQueryResult>$$.ctor
ENTRY_POINT: 0379ced4
PROGRAM: vrfs-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_SpaceQueryResult>___ctor(void)

{
  long lVar1;
  long lVar2;
  long *unaff_x22;
  long *unaff_x23;
  
                    /* try { // try from 0379ced4 to 0389cee3 has its CatchHandler @ 0379cee4 */
  lVar1 = FUN_047a50f0(0);
  if (lVar1 != 0) {
                    /* catch() { ... } // from try @ 0379cea0 with catch @ 0379cee4
                       catch() { ... } // from try @ 0379ced4 with catch @ 0379cee4 */
    lVar1 = *unaff_x22;
                    /* try { // try from 0379cee8 to 0389ceeb has its CatchHandler @ 0379cef4 */
                    /* try { // try from 0379ceec to 0389cef7 has its CatchHandler @ 0379cde4 */
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    lVar2 = FUN_047a50f0(0);
    if ((lVar2 == 0) || (lVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    FUN_02783288(lVar1,*(undefined8 *)PTR_DAT_06de5db0,*(undefined8 *)(lVar2 + 0x40),
                 *(undefined8 *)PTR_DAT_06e5ebe8);
  }
  FUN_0379cf50();
  return;
}


