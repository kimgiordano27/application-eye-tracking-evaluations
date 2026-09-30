/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$Copy
ENTRY_POINT: 041a1758
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Copy
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  int in_w10;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  
  while (*(int *)(unaff_x22 + 0x1c) = in_w10, param_1 != 0) {
    uVar1 = *(uint *)(unaff_x22 + 0x18);
    if (uVar1 < *(uint *)(param_1 + 0x18)) {
      param_1 = param_1 + (long)(int)uVar1 * 0x10;
      *(uint *)(unaff_x22 + 0x18) = uVar1 + 1;
      puVar3 = (undefined8 *)(param_1 + 0x20);
      *puVar3 = param_3;
      *(undefined8 *)(param_1 + 0x28) = param_4;
      LeanTween__value(puVar3,0);
    }
    else {
      FUN_041a0f4c();
    }
    do {
      unaff_x24 = unaff_x24 + 1;
      unaff_x23 = unaff_x23 + 0x10;
      if ((long)*(int *)(unaff_x21 + 0x18) <= (long)unaff_x24) {
        return;
      }
      lVar4 = *(long *)(unaff_x21 + 0x10);
      if (lVar4 == 0) goto LAB_041a17cc;
      if (*(uint *)(lVar4 + 0x18) <= unaff_x24)
      goto Unity_Collections_NativeArray<OVRPlugin_Vector2f>__CopySafe;
      if (unaff_x20 == 0) goto LAB_041a17cc;
      uVar2 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(lVar4 + unaff_x23 + 0x20)
                         ,*(undefined8 *)(lVar4 + unaff_x23 + 0x28),
                         *(undefined8 *)(unaff_x20 + 0x28));
    } while ((uVar2 & 1) == 0);
    lVar4 = *(long *)(unaff_x21 + 0x10);
    if (lVar4 == 0) break;
    if (*(uint *)(lVar4 + 0x18) <= unaff_x24) {
Unity_Collections_NativeArray<OVRPlugin_Vector2f>__CopySafe:
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    if (unaff_x22 == 0) break;
    param_3 = *(undefined8 *)(lVar4 + unaff_x23 + 0x20);
    param_4 = *(undefined8 *)(lVar4 + unaff_x23 + 0x28);
    in_w10 = *(int *)(unaff_x22 + 0x1c) + 1;
    param_1 = *(long *)(unaff_x22 + 0x10);
  }
LAB_041a17cc:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


