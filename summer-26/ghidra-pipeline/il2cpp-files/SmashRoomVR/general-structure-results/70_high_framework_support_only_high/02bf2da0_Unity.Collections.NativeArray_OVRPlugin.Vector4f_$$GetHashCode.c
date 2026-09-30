/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$GetHashCode
ENTRY_POINT: 02bf2da0
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


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__GetHashCode
               (undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x20;
  long unaff_x21;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03051bf4(8);
  }
  if (0 < *(int *)(unaff_x20 + 0x18)) {
    uVar5 = 0;
    lVar4 = 0x20;
    do {
      lVar3 = *(long *)(unaff_x20 + 0x10);
      if (lVar3 == 0) goto LAB_02bf2e74;
      if (*(uint *)(lVar3 + 0x18) <= uVar5) {
LAB_02bf2e78:
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      puVar1 = (undefined8 *)(lVar3 + lVar4);
      if (unaff_x21 == 0) {
LAB_02bf2e74:
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      in_stack_00000020 = *puVar1;
      in_stack_00000028 = puVar1[1];
      in_stack_00000030 = puVar1[2];
      uVar2 = (**(code **)(unaff_x21 + 0x18))
                        (*(undefined8 *)(unaff_x21 + 0x40),&stack0x00000020,
                         *(undefined8 *)(unaff_x21 + 0x28));
      if ((uVar2 & 1) != 0) {
        lVar3 = *(long *)(unaff_x20 + 0x10);
        if (lVar3 != 0) {
          if ((uint)uVar5 < *(uint *)(lVar3 + 0x18)) {
            puVar1 = (undefined8 *)(lVar3 + lVar4);
            uVar7 = puVar1[1];
            uVar6 = *puVar1;
            param_1[2] = puVar1[2];
            param_1[1] = uVar7;
            *param_1 = uVar6;
            return;
          }
          goto LAB_02bf2e78;
        }
        goto LAB_02bf2e74;
      }
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 0x18;
    } while ((long)uVar5 < (long)*(int *)(unaff_x20 + 0x18));
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


