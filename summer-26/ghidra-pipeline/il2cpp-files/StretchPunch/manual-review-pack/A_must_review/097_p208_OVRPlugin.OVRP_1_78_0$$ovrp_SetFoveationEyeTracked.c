/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_SetFoveationEyeTracked
ENTRY_POINT: 033f7270
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 142
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRPlugin_OVRP_1_78_0__ovrp_SetFoveationEyeTracked(long *param_1)

{
  byte bVar1;
  long lVar2;
  
  if ((DAT_044a6bca & 1) == 0) {
    FUN_01d7d918(StringLiteral_9367);
    DAT_044a6bca = 1;
  }
  if (param_1 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)StringLiteral_9367 + 0x130);
    if (((bVar1 <= *(byte *)(*param_1 + 0x130)) &&
        (*(long *)(*(long *)(*param_1 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)StringLiteral_9367
        )) && (lVar2 = param_1[2], lVar2 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x033f72ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar2 + 0x18))
                (*(undefined8 *)(lVar2 + 0x40),param_1[3],*(undefined8 *)(lVar2 + 0x28));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


