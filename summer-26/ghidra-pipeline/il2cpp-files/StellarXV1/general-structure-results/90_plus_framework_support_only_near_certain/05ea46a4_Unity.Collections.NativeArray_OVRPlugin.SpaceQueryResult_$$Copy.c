/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Copy
ENTRY_POINT: 05ea46a4
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


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Copy(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  
  plVar1 = (long *)thunk_FUN_040b4b34(**(undefined8 **)(param_1 + 0xc0));
  lVar3 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_040b1acc(lVar3);
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x100);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_040b1acc(lVar3);
                    /* try { // try from 05ea46f0 to 05fa46ff has its CatchHandler @ 05ea4700 */
  }
  lVar4 = *plVar1;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
                    /* catch() { ... } // from try @ 05ea4614 with catch @ 05ea4700
                       catch() { ... } // from try @ 05ea4650 with catch @ 05ea4700
                       catch() { ... } // from try @ 05ea467c with catch @ 05ea4700
                       catch() { ... } // from try @ 05ea46f0 with catch @ 05ea4700 */
                    /* try { // try from 05ea4704 to 05fa4707 has its CatchHandler @ 05ea4710 */
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
                    /* try { // try from 05ea4708 to 05fa4713 has its CatchHandler @ 05ea44a4 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05ea4704 with catch @ 05ea4710
                        */
      if (*(long *)(piVar6 + -2) == lVar3) {
        puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_05ea473c;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)FUN_040b1e00(plVar1,lVar3,0);
LAB_05ea473c:
  (*(code *)*puVar2)(plVar1,puVar2[1]);
  return;
}


