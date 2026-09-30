/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$GetEnumerator
ENTRY_POINT: 03cb6be4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__GetEnumerator
               (long param_1,int param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
                    /* try { // try from 03cb6be8 to 03db6c37 has its CatchHandler @ 03cb6be8
                       catch() { ... } // from try @ 03cb6be8 with catch @ 03cb6be8
                       catch() { ... } // from try @ 03cb6c9c with catch @ 03cb6be8
                       catch() { ... } // from try @ 03cb6ccc with catch @ 03cb6be8
                       catch() { ... } // from try @ 03cb6d4c with catch @ 03cb6be8 */
  if (param_2 < *(int *)(param_1 + 0x18)) {
    FUN_050f6004(0xf,0x15,0);
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    if (*(int *)(*(long *)(param_1 + 0x10) + 0x18) != param_2) {
      lVar2 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
      if (param_2 < 1) {
        lVar2 = *(long *)(lVar2 + 0x10);
        if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_02f41e9c();
        }
        if (*(int *)(lVar2 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        lVar2 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x10);
        if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_02f41e9c();
        }
        uVar1 = **(undefined8 **)(lVar2 + 0xb8);
      }
      else {
        lVar2 = *(long *)(lVar2 + 0x18);
                    /* try { // try from 03cb6c38 to 03db6c9b has its CatchHandler @ 03cb6c9c */
        if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_02f41e9c();
        }
        uVar1 = FUN_02f0880c(lVar2,param_2);
        if (0 < *(int *)(param_1 + 0x18)) {
          FUN_050f7d68(*(undefined8 *)(param_1 + 0x10),0,uVar1,0,*(int *)(param_1 + 0x18),0);
        }
      }
      *(undefined8 *)(param_1 + 0x10) = uVar1;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03cb6ccc to 03db6d33 has its CatchHandler @ 03cb6be8 */
  FUN_02f089c8();
}


