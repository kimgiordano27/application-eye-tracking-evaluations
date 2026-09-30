/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$Copy
ENTRY_POINT: 017d36fc
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Copy(long param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  
  do {
    unaff_x21 = unaff_x21 + 1;
    if (param_1 <= (long)unaff_x21) {
      return 0;
    }
    lVar2 = *(long *)(unaff_x19 + 0x10);
    if (lVar2 == 0) goto LAB_017d3738;
    if (*(uint *)(lVar2 + 0x18) <= unaff_x21) {
LAB_017d373c:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc53c();
    }
    if (unaff_x20 == 0) {
LAB_017d3738:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    uVar1 = (**(code **)(unaff_x20 + 0x18))
                      (*(undefined8 *)(unaff_x20 + 0x40),
                       *(undefined8 *)(lVar2 + unaff_x21 * 8 + 0x20),
                       *(undefined8 *)(unaff_x20 + 0x28));
    if ((uVar1 & 1) != 0) {
      lVar2 = *(long *)(unaff_x19 + 0x10);
      if (lVar2 != 0) {
        if ((uint)unaff_x21 < *(uint *)(lVar2 + 0x18)) {
          return *(undefined8 *)(lVar2 + unaff_x21 * 8 + 0x20);
        }
        goto LAB_017d373c;
      }
      goto LAB_017d3738;
    }
    param_1 = (long)*(int *)(unaff_x19 + 0x18);
  } while( true );
}


