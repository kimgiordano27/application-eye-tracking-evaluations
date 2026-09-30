/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.SpaceQueryResult>$$.cctor
ENTRY_POINT: 049ad26c
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


void System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceQueryResult>___cctor(void)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long unaff_x21;
  long unaff_x25;
  
                    /* catch() { ... } // from try @ 049ad1a4 with catch @ 049ad26c
                       catch() { ... } // from try @ 049ad254 with catch @ 049ad26c
                       try { // try from 049ad26c to 04aad293 has its CatchHandler @ 049ad14c */
  FUN_04fe0c98();
  if (*(long *)(unaff_x21 + 0x10) != 0) {
                    /* catch() { ... } // from try @ 049ad1ec with catch @ 049ad278
                       catch() { ... } // from try @ 049ad260 with catch @ 049ad278 */
    iVar1 = *(int *)(unaff_x21 + 0x20);
    iVar2 = *(int *)(unaff_x21 + 0x28);
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x170);
                    /* try { // try from 049ad294 to 04aad2ab has its CatchHandler @ 049ad328 */
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02f41e9c();
    }
    FUN_02f0880c(lVar3,iVar1 - iVar2);
                    /* try { // try from 049ad2b0 to 04aad2b3 has its CatchHandler @ 049ad320 */
    FUN_049acf84();
                    /* try { // try from 049ad2d4 to 04aad2d7 has its CatchHandler @ 049ad31c */
                    /* try { // try from 049ad2d8 to 04aad2f3 has its CatchHandler @ 049ad324 */
    uVar4 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x180);
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
                    /* try { // try from 049ad2f4 to 04aad307 has its CatchHandler @ 049ad14c */
    FUN_050e4454(uVar4,0);
                    /* try { // try from 049ad308 to 04aad317 has its CatchHandler @ 049ad328 */
                    /* catch() { ... } // from try @ 049ad2d4 with catch @ 049ad31c */
                    /* catch() { ... } // from try @ 049ad2b0 with catch @ 049ad320 */
    FUN_04feb168();
    return;
  }
                    /* catch() { ... } // from try @ 049ad2d8 with catch @ 049ad324 */
                    /* catch() { ... } // from try @ 049ad294 with catch @ 049ad328
                       catch() { ... } // from try @ 049ad308 with catch @ 049ad328 */
                    /* try { // try from 049ad330 to 04aad333 has its CatchHandler @ 049ad3e4 */
                    /* try { // try from 049ad334 to 04aad347 has its CatchHandler @ 049ad14c */
  return;
}


