/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$CopyTo
ENTRY_POINT: 047a994c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__CopyTo
               (long param_1,int param_2,long param_3)

{
  int in_w8;
  long lVar1;
  long *plVar2;
  
                    /* try { // try from 047a994c to 048a994f has its CatchHandler @ 047a9968 */
                    /* try { // try from 047a9950 to 048a998b has its CatchHandler @ 047a96ac */
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 047a98c4 with catch @ 047a9954
                        */
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 047a9948 with catch @ 047a9958
                        */
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 047a9944 with catch @ 047a995c
                        */
  if (param_2 < in_w8) {
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 047a9928 with catch @ 047a9960
                        */
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 047a993c with catch @ 047a9964
                        */
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 047a9940 with catch @ 047a9968
                       catch(type#1 @ 07542bc8) { ... } // from try @ 047a994c with catch @ 047a9968
                        */
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 047a97d8 with catch @ 047a996c
                        */
    FUN_05e39590(0xf,0x15,0);
  }
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 047a9824 with catch @ 047a9970
                        */
  plVar2 = (long *)(param_1 + 0x10);
  if (*plVar2 != 0) {
    if (*(int *)(*plVar2 + 0x18) == param_2) {
                    /* try { // try from 047a998c to 048a998f has its CatchHandler @ 047a9a1c */
                    /* try { // try from 047a9990 to 048a9a1f has its CatchHandler @ 047a96ac */
      return;
    }
    lVar1 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
    if (param_2 < 1) {
      lVar1 = *(long *)(lVar1 + 0x10);
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_0367c9fc();
      }
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      lVar1 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x10);
                    /* catch() { ... } // from try @ 047a998c with catch @ 047a9a1c */
                    /* try { // try from 047a9a20 to 048a9a27 has its CatchHandler @ 047a9a30 */
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
                    /* try { // try from 047a9a28 to 048a9a33 has its CatchHandler @ 047a96ac */
        lVar1 = FUN_0367c9fc();
      }
      lVar1 = **(long **)(lVar1 + 0xb8);
    }
    else {
      lVar1 = *(long *)(lVar1 + 0x18);
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_0367c9fc();
      }
      lVar1 = FUN_03642a4c(lVar1,param_2);
      if (0 < *(int *)(param_1 + 0x18)) {
        FUN_05e3b3a4(*plVar2,0,lVar1,0,*(int *)(param_1 + 0x18),0);
      }
    }
    *plVar2 = lVar1;
    thunk_FUN_036b7ad0(plVar2,lVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


