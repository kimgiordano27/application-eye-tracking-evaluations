/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.SpaceQueryResult>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 04421f40
PROGRAM: vandalizer-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_SpaceQueryResult>__System_Collections_IEnumerator_get_Current
               (void)

{
  long lVar1;
  int *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  
  do {
    if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
                    /* try { // try from 04421f4c to 04521f4f has its CatchHandler @ 04421f60 */
      FUN_0322bef4();
    }
                    /* catch() { ... } // from try @ 04421f4c with catch @ 04421f60 */
    FUN_04421d44();
                    /* try { // try from 04421f6c to 04521f77 has its CatchHandler @ 04421f8c */
    unaff_w22 = unaff_w22 + 1;
                    /* try { // try from 04421f78 to 04521f83 has its CatchHandler @ 04421ae4 */
  } while (unaff_w22 < *unaff_x19);
  *unaff_x19 = unaff_w21;
                    /* try { // try from 04421f84 to 04521f8b has its CatchHandler @ 04421f8c */
  if (1 < unaff_w21) {
    lVar1 = *(long *)(unaff_x19 + 6);
                    /* catch() { ... } // from try @ 04421f6c with catch @ 04421f8c
                       catch() { ... } // from try @ 04421f84 with catch @ 04421f8c */
                    /* try { // try from 04421f90 to 04522013 has its CatchHandler @ 04421f90
                       catch() { ... } // from try @ 04421f90 with catch @ 04421f90
                       catch() { ... } // from try @ 04422208 with catch @ 04421f90
                       catch() { ... } // from try @ 0442229c with catch @ 04421f90
                       catch() { ... } // from try @ 044222f8 with catch @ 04421f90 */
    if ((lVar1 == 0) || (*(int *)(lVar1 + 0x18) < unaff_w21 + -1)) {
      lVar1 = *(long *)(unaff_x20 + 0x20);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_0322bef4();
      }
      FUN_03ca173c(unaff_x19 + 6,unaff_w21 + -1,*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x60));
      return;
    }
  }
  return;
}


