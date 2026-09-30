/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<Dictionary.Entry<OVRSpace,-OVRPlugin.SpaceQueryResult>>
ENTRY_POINT: 023fb664
PROGRAM: gunraiders-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_Remove<Dictionary_Entry<OVRSpace,_OVRPlugin_SpaceQueryResult>>
               (long param_1)

{
  long *plVar1;
  undefined1 *puVar2;
  
  plVar1 = (long *)thunk_FUN_01c49334(*(undefined8 *)(param_1 + 8));
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
                    /* catch() { ... } // from try @ 023fb64c with catch @ 023fb670 */
                    /* try { // try from 023fb674 to 024fb67f has its CatchHandler @ 023fb694 */
                    /* try { // try from 023fb680 to 024fb68b has its CatchHandler @ 023fb598 */
                    /* try { // try from 023fb68c to 024fb693 has its CatchHandler @ 023fb694 */
  if (*(long *)(*plVar1 + 0x40) == *(long *)(*(long *)PTR_DAT_04230588 + 0x40)) {
    puVar2 = (undefined1 *)thunk_FUN_01c49834();
                    /* catch(type#2 @ 00000000) { ... } // from try @ 023fb674 with catch @ 023fb694
                       catch(type#2 @ 00000000) { ... } // from try @ 023fb68c with catch @ 023fb694
                        */
                    /* try { // try from 023fb698 to 024fb6f3 has its CatchHandler @ 023fb698
                       catch() { ... } // from try @ 023fb698 with catch @ 023fb698
                       catch() { ... } // from try @ 023fb714 with catch @ 023fb698
                       catch() { ... } // from try @ 023fb750 with catch @ 023fb698
                       catch() { ... } // from try @ 023fb780 with catch @ 023fb698 */
    FUN_023f3e1c(*puVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d748();
}


