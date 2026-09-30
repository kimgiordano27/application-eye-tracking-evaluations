/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$GetHashCode
ENTRY_POINT: 017d36e4
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 Unity_Collections_NativeArray<OVRPlugin_Vector3f>__GetHashCode(long param_1)

{
  ulong uVar1;
  long lVar2;
  code *in_x9;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  
  while (uVar1 = (*in_x9)(*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(param_1 + 0x20),
                          *(undefined8 *)(unaff_x20 + 0x28)), (uVar1 & 1) == 0) {
    unaff_x21 = unaff_x21 + 1;
    if ((long)*(int *)(unaff_x19 + 0x18) <= (long)unaff_x21) {
      return 0;
    }
    param_1 = *(long *)(unaff_x19 + 0x10);
    if (param_1 == 0) goto LAB_017d3738;
    if (*(uint *)(param_1 + 0x18) <= unaff_x21) goto LAB_017d373c;
    if (unaff_x20 == 0) goto LAB_017d3738;
    param_1 = param_1 + unaff_x21 * 8;
    in_x9 = *(code **)(unaff_x20 + 0x18);
  }
  lVar2 = *(long *)(unaff_x19 + 0x10);
  if (lVar2 != 0) {
    if ((uint)unaff_x21 < *(uint *)(lVar2 + 0x18)) {
      return *(undefined8 *)(lVar2 + unaff_x21 * 8 + 0x20);
    }
LAB_017d373c:
                    /* WARNING: Subroutine does not return */
    FUN_00fdc53c();
  }
LAB_017d3738:
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


