/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$.ctor
ENTRY_POINT: 04d61818
PROGRAM: Waifu-libil2cpp.so
SCORE: 106
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>___ctor(void)

{
  ulong uVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *unaff_x23;
  
  lVar5 = FUN_0338f618();
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x30);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0338f618();
  }
                    /* catch() { ... } // from try @ 04d61968 with catch @ 04d61834
                       catch() { ... } // from try @ 04d61994 with catch @ 04d61834
                       catch() { ... } // from try @ 04d619c8 with catch @ 04d61834
                       catch() { ... } // from try @ 04d61a3c with catch @ 04d61834 */
  if (DAT_08908cd0 != 0) {
    uVar1 = *(long *)(lVar5 + 0xb8) + 8;
                    /* try { // try from 04d61864 to 04e61967 has its CatchHandler @ 04d61994 */
    puVar2 = &DAT_0873ccb0 + (uVar1 >> 0x12 & 0x7fff);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar4) {
        *puVar2 = *puVar2 | 1L << (uVar1 >> 0xc & 0x3f);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_040f3dc0();
                    /* WARNING: Could not recover jumptable at 0x04d618b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x23 + 0x188))();
  return;
}


