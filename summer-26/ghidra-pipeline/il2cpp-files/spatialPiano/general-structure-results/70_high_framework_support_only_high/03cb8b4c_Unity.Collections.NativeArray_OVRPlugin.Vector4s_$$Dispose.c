/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$Dispose
ENTRY_POINT: 03cb8b4c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__Dispose(void)

{
  int iVar1;
  char in_NG;
  char in_OV;
  long unaff_x19;
  int unaff_w20;
  int unaff_w21;
  
  if (in_NG == in_OV) {
    iVar1 = *(int *)(unaff_x19 + 0x18) - unaff_w20;
    *(int *)(unaff_x19 + 0x18) = iVar1;
    if (iVar1 - unaff_w21 != 0 && unaff_w21 <= iVar1) {
      FUN_050f7d68(*(undefined8 *)(unaff_x19 + 0x10),unaff_w20 + unaff_w21,
                   *(undefined8 *)(unaff_x19 + 0x10),unaff_w21,iVar1 - unaff_w21,0);
      iVar1 = *(int *)(unaff_x19 + 0x18);
    }
                    /* try { // try from 03cb8b8c to 03db8cb3 has its CatchHandler @ 03cb8b8c
                       catch() { ... } // from try @ 03cb8b8c with catch @ 03cb8b8c
                       catch() { ... } // from try @ 03cb8df0 with catch @ 03cb8b8c
                       catch() { ... } // from try @ 03cb8e88 with catch @ 03cb8b8c
                       catch() { ... } // from try @ 03cb8ee0 with catch @ 03cb8b8c */
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    Newtonsoft_Json_Linq_JObject__LoadAsync(*(undefined8 *)(unaff_x19 + 0x10),iVar1,unaff_w20,0);
    return;
  }
  return;
}


