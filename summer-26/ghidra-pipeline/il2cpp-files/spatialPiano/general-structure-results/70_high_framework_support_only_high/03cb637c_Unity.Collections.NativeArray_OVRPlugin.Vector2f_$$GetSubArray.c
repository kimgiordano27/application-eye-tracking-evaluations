/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$GetSubArray
ENTRY_POINT: 03cb637c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_Vector2f>__GetSubArray(void)

{
  uint uVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  
  while( true ) {
    memcpy(&stack0x00000048,&stack0x00000000,0x48);
                    /* try { // try from 03cb6390 to 03db6393 has its CatchHandler @ 03cb6444 */
                    /* try { // try from 03cb6394 to 03db641b has its CatchHandler @ 03cb6158 */
    uVar1 = (**(code **)(unaff_x19 + 0x18))
                      (*(undefined8 *)(unaff_x19 + 0x40),&stack0x00000048,
                       *(undefined8 *)(unaff_x19 + 0x28));
    if ((uVar1 & 1) == 0) break;
    unaff_x21 = unaff_x21 + 1;
    unaff_x22 = unaff_x22 + 0x48;
    if ((long)*(int *)(unaff_x20 + 0x18) <= (long)unaff_x21) break;
    lVar2 = *(long *)(unaff_x20 + 0x10);
    if (lVar2 == 0) {
LAB_03cb63d8:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    if (*(uint *)(lVar2 + 0x18) <= unaff_x21) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    if (unaff_x19 == 0) goto LAB_03cb63d8;
    memcpy(&stack0x00000000,(void *)(lVar2 + unaff_x22),0x48);
  }
  return uVar1 & 1;
}


