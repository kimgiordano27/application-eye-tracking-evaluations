/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$CopySafe
ENTRY_POINT: 02e088a8
PROGRAM: gunraiders-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__CopySafe
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  long in_x10;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  
  while( true ) {
    if ((uint)in_x10 < *(uint *)(param_1 + 0x18)) {
      param_1 = param_1 + in_x10 * 0x10;
      *(uint *)(unaff_x22 + 0x18) = (uint)in_x10 + 1;
      *(undefined8 *)(param_1 + 0x20) = param_3;
      *(undefined8 *)(param_1 + 0x28) = param_4;
    }
    else {
      FUN_02e08090();
    }
    do {
      unaff_x24 = unaff_x24 + 1;
      unaff_x23 = unaff_x23 + 0x10;
      if ((long)*(int *)(unaff_x21 + 0x18) <= (long)unaff_x24) {
        return;
      }
      lVar2 = *(long *)(unaff_x21 + 0x10);
      if (lVar2 == 0) goto LAB_02e08908;
      if (*(uint *)(lVar2 + 0x18) <= unaff_x24) goto LAB_02e0890c;
      if (unaff_x20 == 0) goto LAB_02e08908;
      uVar1 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(lVar2 + unaff_x23 + 0x20)
                         ,*(undefined8 *)(lVar2 + unaff_x23 + 0x28),
                         *(undefined8 *)(unaff_x20 + 0x28));
    } while ((uVar1 & 1) == 0);
    lVar2 = *(long *)(unaff_x21 + 0x10);
    if (lVar2 == 0) break;
    if (*(uint *)(lVar2 + 0x18) <= unaff_x24) {
LAB_02e0890c:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4ac();
    }
    if (unaff_x22 == 0) break;
    param_3 = *(undefined8 *)(lVar2 + unaff_x23 + 0x20);
    param_4 = *(undefined8 *)(lVar2 + unaff_x23 + 0x28);
    param_1 = *(long *)(unaff_x22 + 0x10);
    *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
    if (param_1 == 0) break;
    in_x10 = (long)*(int *)(unaff_x22 + 0x18);
  }
LAB_02e08908:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


