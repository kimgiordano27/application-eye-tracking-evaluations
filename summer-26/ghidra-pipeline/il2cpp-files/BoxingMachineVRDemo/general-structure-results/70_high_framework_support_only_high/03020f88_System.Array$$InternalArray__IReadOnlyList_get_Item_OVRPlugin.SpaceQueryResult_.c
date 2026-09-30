/*
FUNCTION_NAME: System.Array$$InternalArray__IReadOnlyList_get_Item<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 03020f88
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__IReadOnlyList_get_Item<OVRPlugin_SpaceQueryResult>(long param_1)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x21;
  void *unaff_x22;
  undefined8 in_stack_00000078;
  
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 03020f70 with catch @ 03020f88
                        */
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 03020eac with catch @ 03020f8c
                        */
  lVar1 = *(long *)(*(long *)(param_1 + 0xc0) + 0x10);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02d9a2e0();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
                    /* try { // try from 03020fa4 to 03120fa7 has its CatchHandler @ 03020fc8 */
    thunk_FUN_02dbd7b4();
  }
                    /* try { // try from 03020fa8 to 03120fcf has its CatchHandler @ 03020dd8 */
  if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_02d9a2e0();
  }
  FUN_03ded7d8();
                    /* catch() { ... } // from try @ 03020fa4 with catch @ 03020fc8 */
                    /* try { // try from 03020fd8 to 03120fe3 has its CatchHandler @ 03020dd8 */
  FUN_04f2de80();
                    /* try { // try from 03020fe4 to 03120feb has its CatchHandler @ 03020fec */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03020fd0 with catch @ 03020fec
                       catch(type#2 @ 00000000) { ... } // from try @ 03020fe4 with catch @ 03020fec
                        */
  if (*unaff_x21 == 0) {
    lVar1 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02d9a2e0();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02d9a2e0();
    }
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_02d9a2e0();
    }
    FUN_03ded7d8();
    memcpy(&stack0x00000000,unaff_x22,0x70);
    thunk_FUN_02d9d164(*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 8));
    FUN_04f2e248();
  }
  FUN_0467d5f4();
  return;
}


