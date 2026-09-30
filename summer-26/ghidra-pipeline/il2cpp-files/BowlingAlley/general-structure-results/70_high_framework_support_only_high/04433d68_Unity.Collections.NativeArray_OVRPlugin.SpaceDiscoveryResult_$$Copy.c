/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Copy
ENTRY_POINT: 04433d68
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Copy(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  
  if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_032934b8();
  }
  if (*unaff_x21 == param_1) {
    lVar2 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_032934b8();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x18);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_032934b8(lVar2);
    }
                    /* try { // try from 04433db8 to 04533dff has its CatchHandler @ 04433db8
                       catch() { ... } // from try @ 04433db8 with catch @ 04433db8
                       catch() { ... } // from try @ 04433e5c with catch @ 04433db8
                       catch() { ... } // from try @ 04433e8c with catch @ 04433db8
                       catch() { ... } // from try @ 04433f08 with catch @ 04433db8 */
    if (*(long *)(*unaff_x21 + 0x40) != *(long *)(lVar2 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_032d618c();
    }
    plVar3 = (long *)thunk_FUN_032a57f4();
    lVar2 = *plVar3;
    lVar1 = plVar3[1];
    if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_032934b8();
    }
    if (lVar2 == *unaff_x19) {
      return (int)unaff_x19[1] == (int)lVar1;
    }
  }
  return false;
}


