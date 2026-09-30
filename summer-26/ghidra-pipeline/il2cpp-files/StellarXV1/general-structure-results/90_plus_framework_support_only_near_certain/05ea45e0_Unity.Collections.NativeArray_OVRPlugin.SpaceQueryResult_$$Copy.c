/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Copy
ENTRY_POINT: 05ea45e0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


long Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Copy
               (long param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 05ea44d8 with catch @ 05ea45f0
                       try { // try from 05ea45f0 to 05fa4613 has its CatchHandler @ 05ea44a4 */
  if ((*(ushort *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_040b1acc(param_1);
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 05ea44f8 with catch @ 05ea45fc
                        */
  }
  if ((*(ushort *)(*(long *)(*(long *)(param_1 + 0xc0) + 0xe8) + 0x135) & 1) == 0) {
                    /* try { // try from 05ea4614 to 05fa462b has its CatchHandler @ 05ea4700 */
    FUN_040b1acc();
  }
  lVar1 = thunk_FUN_040b4efc();
  lVar2 = *(long *)(param_3 + 0x20);
                    /* try { // try from 05ea462c to 05fa464f has its CatchHandler @ 05ea44a4 */
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_040b1acc(lVar2);
  }
  FUN_06d76994(lVar1,0,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0xf0));
  if (lVar1 != 0) {
    uVar3 = *param_2;
    *(undefined8 *)(lVar1 + 0x28) = param_2[1];
    *(undefined8 *)(lVar1 + 0x20) = uVar3;
    thunk_FUN_040ec700(lVar1 + 0x28,0);
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


