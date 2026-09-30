/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$ToArray
ENTRY_POINT: 0417703c
PROGRAM: Untangled-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__ToArray(undefined8 param_1)

{
  undefined8 in_x4;
  long lVar1;
  long unaff_x19;
  uint unaff_w20;
  undefined8 *unaff_x21;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_0562505c(param_1,unaff_w20,param_1,unaff_w20 + 1,in_x4,0);
  lVar1 = *(long *)(unaff_x19 + 0x10);
  uVar3 = unaff_x21[1];
  uVar2 = *unaff_x21;
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  if (unaff_w20 < *(uint *)(lVar1 + 0x18)) {
    lVar1 = lVar1 + (long)(int)unaff_w20 * 0x18;
                    /* try { // try from 04177098 to 042770df has its CatchHandler @ 04177098
                       catch() { ... } // from try @ 04177098 with catch @ 04177098
                       catch() { ... } // from try @ 04177144 with catch @ 04177098
                       catch() { ... } // from try @ 04177174 with catch @ 04177098
                       catch() { ... } // from try @ 041771f0 with catch @ 04177098 */
    *(undefined8 *)(lVar1 + 0x30) = unaff_x21[2];
    *(undefined8 *)(lVar1 + 0x28) = uVar3;
    *(undefined8 *)(lVar1 + 0x20) = uVar2;
    thunk_FUN_02f411dc(lVar1 + 0x20,0);
    *(ulong *)(unaff_x19 + 0x18) =
         CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x18) >> 0x20) + 1,
                  (int)*(undefined8 *)(unaff_x19 + 0x18) + 1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c8();
}


