/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$Copy
ENTRY_POINT: 017d37c8
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Copy(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  
  do {
    uVar2 = (**(code **)(unaff_x20 + 0x18))
                      (*(undefined8 *)(unaff_x20 + 0x40),param_2,*(undefined8 *)(unaff_x20 + 0x28));
    if ((uVar2 & 1) != 0) {
      lVar4 = *(long *)(unaff_x21 + 0x10);
      if (lVar4 == 0) {
LAB_017d3880:
                    /* WARNING: Subroutine does not return */
        FUN_00fdc534();
      }
      if (*(uint *)(lVar4 + 0x18) <= unaff_x24) goto LAB_017d3884;
      if (unaff_x22 == 0) goto LAB_017d3880;
      uVar3 = *(undefined8 *)(lVar4 + unaff_x23 * 8);
      lVar4 = *(long *)(unaff_x22 + 0x10);
      *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
      if (lVar4 == 0) goto LAB_017d3880;
      uVar1 = *(uint *)(unaff_x22 + 0x18);
      if (uVar1 < *(uint *)(lVar4 + 0x18)) {
        *(uint *)(unaff_x22 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) = uVar3;
        thunk_FUN_0106e12c();
      }
      else {
        FUN_017d3030();
      }
    }
    if ((long)*(int *)(unaff_x21 + 0x18) <= unaff_x23 + -3) {
      return;
    }
    lVar4 = *(long *)(unaff_x21 + 0x10);
    if (lVar4 == 0) goto LAB_017d3880;
    unaff_x24 = unaff_x23 - 3;
    if (*(uint *)(lVar4 + 0x18) <= unaff_x24) {
LAB_017d3884:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc53c();
    }
    if (unaff_x20 == 0) goto LAB_017d3880;
    param_2 = *(undefined8 *)(lVar4 + (unaff_x23 + 1) * 8);
    unaff_x23 = unaff_x23 + 1;
  } while( true );
}


