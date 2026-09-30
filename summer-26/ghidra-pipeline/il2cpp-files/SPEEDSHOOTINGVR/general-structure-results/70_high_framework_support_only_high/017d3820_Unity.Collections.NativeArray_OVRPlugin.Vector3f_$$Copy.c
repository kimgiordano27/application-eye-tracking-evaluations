/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$Copy
ENTRY_POINT: 017d3820
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Copy
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long in_x10;
  uint in_w11;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  ulong uVar4;
  
  while( true ) {
    lVar3 = unaff_x23;
    if ((uint)in_x10 < in_w11) {
      *(uint *)(unaff_x22 + 0x18) = (uint)in_x10 + 1;
      *(undefined8 *)(param_1 + in_x10 * 8 + 0x20) = param_3;
      thunk_FUN_0106e12c();
    }
    else {
      FUN_017d3030();
    }
    do {
      unaff_x23 = lVar3 + 1;
      if ((long)*(int *)(unaff_x21 + 0x18) <= lVar3 + -3) {
        return;
      }
      lVar2 = *(long *)(unaff_x21 + 0x10);
      if (lVar2 == 0) goto LAB_017d3880;
      uVar4 = lVar3 - 3;
      if (*(uint *)(lVar2 + 0x18) <= uVar4) goto LAB_017d3884;
      if (unaff_x20 == 0) goto LAB_017d3880;
      uVar1 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(lVar2 + unaff_x23 * 8),
                         *(undefined8 *)(unaff_x20 + 0x28));
      lVar3 = unaff_x23;
    } while ((uVar1 & 1) == 0);
    lVar3 = *(long *)(unaff_x21 + 0x10);
    if (lVar3 == 0) break;
    if (*(uint *)(lVar3 + 0x18) <= uVar4) {
LAB_017d3884:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc53c();
    }
    if (unaff_x22 == 0) break;
    param_3 = *(undefined8 *)(lVar3 + unaff_x23 * 8);
    param_1 = *(long *)(unaff_x22 + 0x10);
    *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
    if (param_1 == 0) break;
    in_x10 = (long)*(int *)(unaff_x22 + 0x18);
    in_w11 = *(uint *)(param_1 + 0x18);
  }
LAB_017d3880:
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


