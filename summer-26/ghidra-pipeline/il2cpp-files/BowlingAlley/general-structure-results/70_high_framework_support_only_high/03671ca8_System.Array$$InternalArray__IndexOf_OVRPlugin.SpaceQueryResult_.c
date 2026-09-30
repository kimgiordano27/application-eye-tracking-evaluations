/*
FUNCTION_NAME: System.Array$$InternalArray__IndexOf<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 03671ca8
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array__InternalArray__IndexOf<OVRPlugin_SpaceQueryResult>(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x19;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 03671c74 with catch @ 03671ca8
                        */
  FUN_03293514();
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 03671bc4 with catch @ 03671cac
                        */
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 03671b5c with catch @ 03671cb0
                        */
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 03671b74 with catch @ 03671cb4
                       catch(type#1 @ 06e40658) { ... } // from try @ 03671bec with catch @ 03671cb4
                        */
  iVar1 = FUN_0593be7c();
  if (iVar1 == 0) {
    lVar3 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_032934b8();
    }
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
                    /* try { // try from 03671d14 to 03771d23 has its CatchHandler @ 03671d24 */
    lVar3 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_032934b8();
    }
                    /* catch() { ... } // from try @ 03671ccc with catch @ 03671d24
                       catch() { ... } // from try @ 03671d14 with catch @ 03671d24 */
                    /* try { // try from 03671d28 to 03771d2b has its CatchHandler @ 03671d34 */
    uVar2 = **(undefined8 **)(lVar3 + 0xb8);
  }
  else {
    in_stack_00000010 = 0;
    in_stack_00000018 = 0;
                    /* try { // try from 03671ccc to 03771ce3 has its CatchHandler @ 03671d24 */
    FUN_03dfeab4(&stack0x00000010);
                    /* try { // try from 03671ce4 to 03771d13 has its CatchHandler @ 03671b24 */
    uVar2 = thunk_FUN_032a52d0(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10));
  }
                    /* try { // try from 03671d2c to 03771d37 has its CatchHandler @ 03671b24 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03671d28 with catch @ 03671d34
                        */
                    /* try { // try from 03671d38 to 03771d6f has its CatchHandler @ 03671d38
                       catch() { ... } // from try @ 03671d38 with catch @ 03671d38
                       catch() { ... } // from try @ 03671e94 with catch @ 03671d38
                       catch() { ... } // from try @ 03671ef8 with catch @ 03671d38
                       catch() { ... } // from try @ 03671f40 with catch @ 03671d38 */
  return uVar2;
}


