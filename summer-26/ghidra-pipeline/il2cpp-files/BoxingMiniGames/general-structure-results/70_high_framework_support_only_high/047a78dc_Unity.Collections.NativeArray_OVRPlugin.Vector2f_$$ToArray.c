/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$ToArray
ENTRY_POINT: 047a78dc
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__ToArray(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  undefined8 uVar5;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  do {
    unaff_x23 = unaff_x23 + 1;
    unaff_x22 = unaff_x22 + 0x18;
    if (param_1 <= (long)unaff_x23) {
      *unaff_x19 = 0;
      unaff_x19[1] = 0;
      unaff_x19[2] = 0;
      return;
    }
    lVar3 = *(long *)(unaff_x20 + 0x10);
    if (lVar3 == 0) goto LAB_047a7934;
    if (*(uint *)(lVar3 + 0x18) <= unaff_x23) {
LAB_047a7938:
                    /* WARNING: Subroutine does not return */
      FUN_03642c20();
    }
    if (unaff_x21 == 0) {
LAB_047a7934:
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    puVar1 = (undefined8 *)(lVar3 + unaff_x22);
    in_stack_00000028 = puVar1[1];
    in_stack_00000020 = *puVar1;
    in_stack_00000030 = puVar1[2];
    uVar2 = (**(code **)(unaff_x21 + 0x18))
                      (*(undefined8 *)(unaff_x21 + 0x40),&stack0x00000020,
                       *(undefined8 *)(unaff_x21 + 0x28));
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(unaff_x20 + 0x10);
      if (lVar3 != 0) {
        if ((uint)unaff_x23 < *(uint *)(lVar3 + 0x18)) {
          puVar1 = (undefined8 *)(lVar3 + unaff_x22);
          uVar5 = *puVar1;
          uVar4 = puVar1[2];
          unaff_x19[1] = puVar1[1];
          *unaff_x19 = uVar5;
          unaff_x19[2] = uVar4;
          return;
        }
        goto LAB_047a7938;
      }
      goto LAB_047a7934;
    }
    param_1 = (long)*(int *)(unaff_x20 + 0x18);
  } while( true );
}


