/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$CopySafe
ENTRY_POINT: 03c6ac64
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__CopySafe(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x19;
  
  lVar1 = FUN_02d9a2e0();
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x18);
                    /* try { // try from 03c6ac70 to 03d6ac73 has its CatchHandler @ 03c6ac9c */
                    /* try { // try from 03c6ac74 to 03d6ac77 has its CatchHandler @ 03c6ac94 */
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
                    /* try { // try from 03c6ac78 to 03d6ac7b has its CatchHandler @ 03c6ac9c */
    lVar1 = FUN_02d9a2e0();
  }
                    /* try { // try from 03c6ac7c to 03d6ac7f has its CatchHandler @ 03c6a9c8 */
                    /* try { // try from 03c6ac80 to 03d6ac83 has its CatchHandler @ 03c6ac8c */
  uVar2 = FUN_02d60934(lVar1,0);
                    /* try { // try from 03c6ac84 to 03d6acbb has its CatchHandler @ 03c6a9c8 */
  lVar1 = *(long *)(unaff_x19 + 0x20);
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 03c6ac80 with catch @ 03c6ac8c
                        */
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 03c6abac with catch @ 03c6ac90
                        */
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 03c6ac74 with catch @ 03c6ac94
                        */
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 03c6abec with catch @ 03c6ac98
                        */
    lVar1 = FUN_02d9a2e0(lVar1);
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 03c6ac70 with catch @ 03c6ac9c
                       catch(type#1 @ 0638da48) { ... } // from try @ 03c6ac78 with catch @ 03c6ac9c
                        */
  }
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 03c6aadc with catch @ 03c6aca0
                        */
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 03c6ab1c with catch @ 03c6aca4
                        */
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02d9a2e0();
  }
  **(undefined8 **)(lVar1 + 0xb8) = uVar2;
                    /* try { // try from 03c6acbc to 03d6acbf has its CatchHandler @ 03c6accc */
  lVar1 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02d9a2e0();
  }
                    /* catch() { ... } // from try @ 03c6acbc with catch @ 03c6accc */
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02d9a2e0();
  }
  thunk_FUN_02dd37b4(*(undefined8 *)(lVar1 + 0xb8),uVar2);
  return;
}


