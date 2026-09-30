/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$GetSubArray
ENTRY_POINT: 017d3b7c
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 Unity_Collections_NativeArray<OVRPlugin_Vector3f>__GetSubArray(void)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar3;
  
  uVar1 = FUN_017d2e20();
  if ((uVar1 & 1) == 0) {
    return 0xffffffff;
  }
  lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x48);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    FUN_0103c244(lVar3);
  }
  if (unaff_x21 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = thunk_FUN_0103ffe0();
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc8d0();
    }
  }
  uVar2 = FUN_01209ef8(*(undefined8 *)(unaff_x20 + 0x10),lVar3,0,*(undefined4 *)(unaff_x20 + 0x18),
                       *(undefined8 *)
                        (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0)
                                                      + 0xd0) + 0x20) + 0xc0) + 0x148));
  return uVar2;
}


