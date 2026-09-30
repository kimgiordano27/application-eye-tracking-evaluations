/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$CopySafe
ENTRY_POINT: 050a2a00
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__CopySafe
               (undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  long lVar1;
  long in_x9;
  long in_x10;
  long unaff_x19;
  
  while (!(bool)in_ZR) {
    if (*(long *)(in_x10 + -8) == param_2) goto LAB_050a2a20;
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 0x10;
    in_ZR = in_x9 == 0;
  }
  FUN_03ac43c4();
LAB_050a2a20:
  FUN_05d3df84();
  lVar1 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x48);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03ac4090();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
                    /* try { // try from 050a2a74 to 051a2ab3 has its CatchHandler @ 050a2a74
                       catch() { ... } // from try @ 050a2a74 with catch @ 050a2a74
                       catch() { ... } // from try @ 050a2ac8 with catch @ 050a2a74
                       catch() { ... } // from try @ 050a2b04 with catch @ 050a2a74
                       catch() { ... } // from try @ 050a2b44 with catch @ 050a2a74 */
  FUN_050a3240();
  return;
}


