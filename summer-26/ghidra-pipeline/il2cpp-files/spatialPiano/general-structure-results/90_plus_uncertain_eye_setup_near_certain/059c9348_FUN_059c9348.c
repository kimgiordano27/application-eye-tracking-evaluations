/*
FUNCTION_NAME: FUN_059c9348
ENTRY_POINT: 059c9348
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 109
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_059c9348(long param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>_Dispose__;
                    /* try { // try from 059c934c to 05ac934f has its CatchHandler @ 059c935c */
                    /* catch() { ... } // from try @ 059c934c with catch @ 059c935c */
                    /* try { // try from 059c9360 to 05ac9367 has its CatchHandler @ 059c9370 */
                    /* try { // try from 059c9368 to 05ac9373 has its CatchHandler @ 059c9148 */
  if ((DAT_06bc1d0e & 1) == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 059c9360 with catch @ 059c9370
                        */
    FUN_02f08768(
                Method_System_Collections_Generic_List<CompositionLayerManager_LayerInfo>_Contains__
                );
    FUN_02f08768(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>_Dispose__);
    DAT_06bc1d0e = 1;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x2d0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar3 = FUN_059c94f4(uVar1);
  FUN_06241820(param_1,uVar3,0);
  *(undefined4 *)(param_1 + 0x2d0) = param_2;
  uVar3 = FUN_059c94f4(param_2);
  FUN_0624193c(param_1,uVar3,0);
  puVar2 = Method_System_Collections_Generic_List<CompositionLayerManager_LayerInfo>_Contains__;
  if (*(long *)(param_1 + 0x2e0) != 0) {
    FUN_03e328c4(*(long *)(param_1 + 0x2e0),*(undefined4 *)(param_1 + 0x2d0),
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<CompositionLayerManager_LayerInfo>_Contains__
                );
    if (*(long *)(param_1 + 0x2e8) != 0) {
      FUN_03e328c4(*(long *)(param_1 + 0x2e8),*(undefined4 *)(param_1 + 0x2d0),*(undefined8 *)puVar2
                  );
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


