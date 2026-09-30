/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$Copy
ENTRY_POINT: 02bf2fac
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__Copy(long param_1)

{
  undefined8 *puVar1;
  undefined1 in_CY;
  ulong uVar2;
  long lVar3;
  long in_x10;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  while( true ) {
    if ((bool)in_CY) {
      in_stack_00000048 = in_stack_00000028;
      in_stack_00000040 = in_stack_00000020;
      in_stack_00000050 = in_stack_00000030;
      FUN_02bf25d0();
    }
    else {
      *(int *)(unaff_x22 + 0x18) = (int)in_x10 + 1;
      param_1 = param_1 + in_x10 * unaff_x25;
      *(undefined8 *)(param_1 + 0x30) = in_stack_00000030;
      *(undefined8 *)(param_1 + 0x28) = in_stack_00000028;
      *(undefined8 *)(param_1 + 0x20) = in_stack_00000020;
      thunk_FUN_01b4f09c(param_1 + 0x20,0);
    }
    do {
      unaff_x23 = unaff_x23 + 1;
      unaff_x24 = unaff_x24 + 0x18;
      if ((long)*(int *)(unaff_x21 + 0x18) <= (long)unaff_x23) {
        return;
      }
      lVar3 = *(long *)(unaff_x21 + 0x10);
      if (lVar3 == 0) goto LAB_02bf3038;
      if (*(uint *)(lVar3 + 0x18) <= unaff_x23) goto LAB_02bf303c;
      puVar1 = (undefined8 *)(lVar3 + unaff_x24);
      if (unaff_x20 == 0) goto LAB_02bf3038;
      in_stack_00000040 = *puVar1;
      in_stack_00000048 = puVar1[1];
      in_stack_00000050 = puVar1[2];
      uVar2 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000040,
                         *(undefined8 *)(unaff_x20 + 0x28));
    } while ((uVar2 & 1) == 0);
    lVar3 = *(long *)(unaff_x21 + 0x10);
    if (lVar3 == 0) break;
    if (*(uint *)(lVar3 + 0x18) <= unaff_x23) {
LAB_02bf303c:
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    puVar1 = (undefined8 *)(lVar3 + unaff_x24);
    in_stack_00000030 = puVar1[2];
    in_stack_00000028 = puVar1[1];
    in_stack_00000020 = *puVar1;
    if (unaff_x22 == 0) break;
    param_1 = *(long *)(unaff_x22 + 0x10);
    *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
    if (param_1 == 0) break;
    in_x10 = (long)(int)*(uint *)(unaff_x22 + 0x18);
    in_CY = *(uint *)(param_1 + 0x18) <= *(uint *)(unaff_x22 + 0x18);
  }
LAB_02bf3038:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


