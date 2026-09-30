/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Dispose
ENTRY_POINT: 03997e64
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Dispose
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5,uint param_6)

{
  long lVar1;
  
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 03997dd4 with catch @ 03997e64
                        */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 03997e58 with catch @ 03997e68
                        */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 03997e54 with catch @ 03997e6c
                        */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 03997e38 with catch @ 03997e70
                        */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 03997e4c with catch @ 03997e74
                        */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 03997e50 with catch @ 03997e78
                       catch(type#1 @ 05fbf508) { ... } // from try @ 03997e5c with catch @ 03997e78
                        */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 03997ce8 with catch @ 03997e7c
                        */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 03997d34 with catch @ 03997e80
                        */
  if (*(uint *)(param_5 + 0x18) <= param_6) {
    FUN_04d9c8d0(0);
  }
  lVar1 = *(long *)(param_5 + 0x10);
  if (lVar1 != 0) {
                    /* try { // try from 03997e9c to 03a97e9f has its CatchHandler @ 03997f2c */
                    /* try { // try from 03997ea0 to 03a97f2f has its CatchHandler @ 03997bbc */
    if (param_6 < *(uint *)(lVar1 + 0x18)) {
      lVar1 = lVar1 + (long)(int)param_6 * 0x10;
      *(undefined4 *)(lVar1 + 0x20) = param_1;
      *(undefined4 *)(lVar1 + 0x24) = param_2;
      *(undefined4 *)(lVar1 + 0x28) = param_3;
      *(undefined4 *)(lVar1 + 0x2c) = param_4;
      *(int *)(param_5 + 0x1c) = *(int *)(param_5 + 0x1c) + 1;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02b3cacc();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


