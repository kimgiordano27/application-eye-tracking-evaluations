/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$op_Implicit
ENTRY_POINT: 03c6f168
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 Unity_Collections_NativeArray<OVRPlugin_Vector4s>__op_Implicit(void)

{
  char in_NG;
  char in_OV;
  undefined8 *puVar1;
  uint in_w8;
  long lVar2;
  long unaff_x19;
  undefined8 uVar3;
  
  if (in_NG == in_OV) {
    lVar2 = *(long *)(unaff_x19 + 0x10);
    *(uint *)(unaff_x19 + 0x18) = in_w8;
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
                    /* try { // try from 03c6f17c to 03d6f193 has its CatchHandler @ 03c6f20c */
    if (*(uint *)(lVar2 + 0x18) <= in_w8) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60af0();
    }
    puVar1 = (undefined8 *)(lVar2 + (ulong)in_w8 * 8 + 0x20);
    uVar3 = *puVar1;
    *puVar1 = 0;
                    /* try { // try from 03c6f194 to 03d6f1fb has its CatchHandler @ 03c6f098 */
    thunk_FUN_02dd37b4(puVar1,0);
  }
  else {
    uVar3 = 0;
  }
  thunk_FUN_02d6ec70();
  return uVar3;
}


