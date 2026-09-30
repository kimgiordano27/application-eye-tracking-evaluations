/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$.ctor
ENTRY_POINT: 041a3e1c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4 Unity_Collections_NativeArray<OVRPlugin_Vector4s>___ctor(void)

{
  ulong uVar1;
  int in_w8;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  long lVar3;
  ulong uVar4;
  undefined4 unaff_s8;
  
  if (0 < in_w8) {
    lVar3 = 0;
    uVar4 = 0;
    do {
      lVar2 = *(long *)(unaff_x19 + 0x10);
      if (lVar2 == 0) goto LAB_041a3ec0;
      if (*(uint *)(lVar2 + 0x18) <= uVar4) {
LAB_041a3ec4:
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      if (unaff_x20 == 0) {
LAB_041a3ec0:
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar2 = lVar2 + lVar3;
      uVar1 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined4 *)(lVar2 + 0x20),*(undefined4 *)(lVar2 + 0x24),
                         *(undefined4 *)(lVar2 + 0x28),*(undefined4 *)(lVar2 + 0x2c),
                         *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x28));
      if ((uVar1 & 1) != 0) {
        lVar2 = *(long *)(unaff_x19 + 0x10);
        if (lVar2 != 0) {
          if ((uint)uVar4 < *(uint *)(lVar2 + 0x18)) {
            return *(undefined4 *)(lVar2 + lVar3 + 0x20);
          }
          goto LAB_041a3ec4;
        }
        goto LAB_041a3ec0;
      }
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0x10;
    } while ((long)uVar4 < (long)*(int *)(unaff_x19 + 0x18));
  }
  return unaff_s8;
}


