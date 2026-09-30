/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$Copy
ENTRY_POINT: 03203b1c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


long Unity_Collections_NativeArray<OVRPlugin_Vector4s>__Copy(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  
  if ((DAT_04831d79 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_BinaryOperatorHandler_Handle<byte,_short>__);
    DAT_04831d79 = 1;
  }
  plVar3 = (long *)(param_1 + 0x20);
  lVar1 = *plVar3;
  if (lVar1 == 0) {
    uVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                Method_Unity_VisualScripting_BinaryOperatorHandler_Handle<byte,_short>__
                              );
                    /* try { // try from 03203b64 to 03303b73 has its CatchHandler @ 03203b74 */
    FUN_035ac8e8(uVar2,0);
                    /* catch() { ... } // from try @ 03203ac4 with catch @ 03203b74
                       catch() { ... } // from try @ 03203af0 with catch @ 03203b74
                       catch() { ... } // from try @ 03203b64 with catch @ 03203b74 */
    FUN_01ec97e0(plVar3,uVar2,0);
                    /* try { // try from 03203b78 to 03303b7b has its CatchHandler @ 03203b84 */
    lVar1 = *plVar3;
  }
                    /* try { // try from 03203b7c to 03303b87 has its CatchHandler @ 03203a08 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03203b78 with catch @ 03203b84
                        */
  return lVar1;
}


