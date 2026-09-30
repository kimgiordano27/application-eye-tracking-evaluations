/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$Copy
ENTRY_POINT: 03203b88
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__Copy
               (undefined8 *param_1,long param_2,uint param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
                    /* catch() { ... } // from try @ 03203c0c with catch @ 03203b88
                       catch() { ... } // from try @ 03203c4c with catch @ 03203b88
                       catch() { ... } // from try @ 03203c84 with catch @ 03203b88
                       catch() { ... } // from try @ 03203cb0 with catch @ 03203b88
                       catch() { ... } // from try @ 03203d24 with catch @ 03203b88 */
  if (*(uint *)(param_2 + 0x18) <= param_3) {
    FUN_0358b9a4(0);
  }
  lVar1 = *(long *)(param_2 + 0x10);
                    /* try { // try from 03203bb4 to 03303c0b has its CatchHandler @ 03203c1c */
  if (lVar1 != 0) {
    if (param_3 < *(uint *)(lVar1 + 0x18)) {
      lVar1 = lVar1 + (long)(int)param_3 * 0x20;
      uVar4 = *(undefined8 *)(lVar1 + 0x20);
      uVar3 = *(undefined8 *)(lVar1 + 0x38);
      uVar2 = *(undefined8 *)(lVar1 + 0x30);
      param_1[1] = *(undefined8 *)(lVar1 + 0x28);
      *param_1 = uVar4;
      param_1[3] = uVar3;
      param_1[2] = uVar2;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


