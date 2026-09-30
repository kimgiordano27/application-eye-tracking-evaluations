/*
FUNCTION_NAME: System.Array$$InternalArray__IReadOnlyList_get_Item<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 030264ac
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__IReadOnlyList_get_Item<OVRPlugin_SpaceQueryResult>(void)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x21;
  void *unaff_x22;
  undefined8 in_stack_00000078;
  
  FUN_03d75ed8();
                    /* try { // try from 030264c8 to 031264e7 has its CatchHandler @ 030264c8
                       catch() { ... } // from try @ 030264c8 with catch @ 030264c8
                       catch() { ... } // from try @ 030264fc with catch @ 030264c8 */
  FUN_05008b14();
  if (*unaff_x21 == 0) {
    lVar1 = *(long *)(unaff_x20 + 0x20);
                    /* try { // try from 030264e8 to 031264fb has its CatchHandler @ 0302650c */
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02f41e9c();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
                    /* try { // try from 030264fc to 0312651f has its CatchHandler @ 030264c8 */
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02f41e9c();
    }
                    /* catch() { ... } // from try @ 030264e8 with catch @ 0302650c */
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_02f41e9c();
    }
    FUN_03d75ed8();
    memcpy(&stack0x00000008,unaff_x22,0x58);
                    /* try { // try from 03026550 to 0312656f has its CatchHandler @ 03026550
                       catch() { ... } // from try @ 03026550 with catch @ 03026550
                       catch() { ... } // from try @ 03026584 with catch @ 03026550 */
    thunk_FUN_02f44ec4(*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 8),&stack0x00000008);
    FUN_05008e78();
  }
  FUN_05006c74();
  return;
}


