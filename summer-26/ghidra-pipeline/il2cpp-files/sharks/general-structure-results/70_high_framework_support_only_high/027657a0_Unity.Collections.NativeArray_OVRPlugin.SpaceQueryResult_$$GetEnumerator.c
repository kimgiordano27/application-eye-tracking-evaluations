/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$GetEnumerator
ENTRY_POINT: 027657a0
PROGRAM: sharks-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__GetEnumerator(void)

{
  bool in_ZR;
  long lVar1;
  int in_w8;
  long unaff_x23;
  
                    /* try { // try from 027657a0 to 028657a3 has its CatchHandler @ 027654f8 */
  if (in_ZR) {
    lVar1 = *(long *)(unaff_x23 + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0185daa4();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x48);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0185daa4();
    }
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    if ((*(byte *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
      FUN_0185daa4();
    }
    FUN_02765358();
    if ((*(byte *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
      FUN_0185daa4();
    }
    FUN_02765358();
    if ((*(byte *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
      FUN_0185daa4();
    }
  }
  else {
                    /* try { // try from 027657a4 to 028657a7 has its CatchHandler @ 027657b0 */
                    /* try { // try from 027657a8 to 028657db has its CatchHandler @ 027654f8 */
    if (in_w8 != 1) {
      lVar1 = *(long *)(unaff_x23 + 0x20);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_0185daa4();
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x48);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_0185daa4();
      }
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      if ((*(byte *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
        FUN_0185daa4();
      }
      FUN_02766120();
      return;
    }
    lVar1 = *(long *)(unaff_x23 + 0x20);
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 027657a4 with catch @ 027657b0
                        */
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 027656dc with catch @ 027657b4
                        */
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 02765794 with catch @ 027657b8
                        */
      lVar1 = FUN_0185daa4();
    }
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 02765798 with catch @ 027657bc
                        */
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 0276560c with catch @ 027657c0
                        */
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x48);
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 0276564c with catch @ 027657c4
                        */
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0185daa4();
    }
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
                    /* try { // try from 027657dc to 028657df has its CatchHandler @ 027657ec */
    if ((*(byte *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
      FUN_0185daa4();
    }
  }
  FUN_02765358();
  return;
}


