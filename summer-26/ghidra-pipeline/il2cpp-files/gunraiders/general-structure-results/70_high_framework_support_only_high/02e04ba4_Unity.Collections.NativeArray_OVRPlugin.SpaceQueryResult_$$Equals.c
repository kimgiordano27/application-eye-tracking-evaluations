/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Equals
ENTRY_POINT: 02e04ba4
PROGRAM: gunraiders-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Equals(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined4 unaff_w21;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01c72394();
  }
  uVar2 = FUN_01c5d2fc(lVar1,unaff_w21);
                    /* try { // try from 02e04bbc to 02f04ccf has its CatchHandler @ 02e04bbc
                       catch() { ... } // from try @ 02e04bbc with catch @ 02e04bbc
                       catch() { ... } // from try @ 02e04da8 with catch @ 02e04bbc
                       catch() { ... } // from try @ 02e04e64 with catch @ 02e04bbc
                       catch() { ... } // from try @ 02e04e6c with catch @ 02e04bbc
                       catch() { ... } // from try @ 02e04f10 with catch @ 02e04bbc */
  FUN_032f42b0(*(undefined8 *)(unaff_x20 + 0x10),0,uVar2,0,*(undefined4 *)(unaff_x20 + 0x18),0);
  return uVar2;
}


