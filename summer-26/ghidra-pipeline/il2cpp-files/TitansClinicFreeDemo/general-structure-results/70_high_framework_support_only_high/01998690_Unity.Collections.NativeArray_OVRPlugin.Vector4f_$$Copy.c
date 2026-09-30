/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$Copy
ENTRY_POINT: 01998690
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__Copy
               (long param_1,int param_2,int param_3,void *param_4,undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_120 [112];
  undefined1 auStack_b0 [112];
  
                    /* catch(type#1 @ 026574d8) { ... } // from try @ 01998598 with catch @ 01998694
                        */
                    /* try { // try from 019986ac to 01a986c3 has its CatchHandler @ 01998798 */
  if (param_2 < 0) {
    FUN_01f88388(0);
  }
  if (param_3 < 0) {
    FUN_01f87fcc(0x10,4,0);
  }
                    /* try { // try from 019986c4 to 01a986e7 has its CatchHandler @ 01998548 */
  if (*(int *)(param_1 + 0x18) - param_2 < param_3) {
    FUN_01f87b08(0x17,0);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x10);
                    /* try { // try from 019986e8 to 01a986ff has its CatchHandler @ 01998798 */
  memcpy(auStack_120,param_4,0x6c);
                    /* try { // try from 01998700 to 01a98713 has its CatchHandler @ 01998548 */
  uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0xb8);
  memcpy(auStack_b0,auStack_120,0x6c);
  FUN_0137d648(uVar2,param_2,param_3,auStack_b0,param_5,uVar1);
  return;
}


