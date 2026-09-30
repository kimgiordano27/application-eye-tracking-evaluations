/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 047a5cf8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


byte System_Array__InternalArray__IEnumerable_GetEnumerator<OVRPlugin_SpaceDiscoveryResult>
               (long param_1)

{
  ulong uVar1;
  byte in_w9;
  long unaff_x19;
  void *unaff_x20;
  long *unaff_x21;
  void *unaff_x22;
  ulong unaff_x24;
  long unaff_x25;
  ulong unaff_x26;
  byte unaff_w27;
  
  while( true ) {
    if ((in_w9 & 1) == 0) {
      FUN_04481fb8(param_1);
    }
    memcpy(unaff_x22,unaff_x20,0x60);
                    /* try { // try from 047a5d24 to 048a5d27 has its CatchHandler @ 047a6558 */
                    /* try { // try from 047a5d28 to 048a5d33 has its CatchHandler @ 047a65bc */
    uVar1 = thunk_FUN_07a98984();
    if ((uVar1 & 1) != 0) break;
    unaff_x24 = unaff_x24 + 1;
    unaff_w27 = unaff_x24 < unaff_x26;
    if (unaff_x26 == unaff_x24) break;
    memcpy(&stack0x000000d0,(void *)(unaff_x25 + unaff_x24 * *(uint *)(*unaff_x21 + 0x104)),
           (ulong)*(uint *)(*unaff_x21 + 0x104));
    memcpy(&stack0x00000070,&stack0x000000d0,0x60);
    thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8),&stack0x00000070);
    param_1 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
    in_w9 = *(byte *)(param_1 + 0x135);
  }
                    /* try { // try from 047a5d50 to 048a5d5b has its CatchHandler @ 047a65a4 */
                    /* try { // try from 047a5d64 to 048a5d6b has its CatchHandler @ 047a658c */
                    /* try { // try from 047a5d6c to 048a5d7f has its CatchHandler @ 047a6580 */
  return unaff_w27 & 1;
}


