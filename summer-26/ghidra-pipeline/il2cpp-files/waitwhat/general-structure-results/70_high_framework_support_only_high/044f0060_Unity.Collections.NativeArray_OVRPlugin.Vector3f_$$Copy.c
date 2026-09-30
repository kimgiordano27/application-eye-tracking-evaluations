/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$Copy
ENTRY_POINT: 044f0060
PROGRAM: waitwhat-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Copy
               (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  code *in_x9;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  int unaff_w25;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 uStack0000000000000050;
  
  do {
    uStack0000000000000050 = param_1;
    uVar3 = (*in_x9)(param_2,param_3,param_4);
    if ((uVar3 & 1) != 0) {
      lVar4 = *(long *)(unaff_x21 + 0x10);
      if (lVar4 == 0) {
LAB_044f0140:
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      if (*(uint *)(lVar4 + 0x18) <= unaff_x23) goto LAB_044f0144;
      if (unaff_x22 == 0) goto LAB_044f0140;
      puVar1 = (undefined8 *)(lVar4 + unaff_x24);
      uVar7 = puVar1[1];
      uVar6 = *puVar1;
      uVar5 = puVar1[2];
      lVar4 = *(long *)(unaff_x22 + 0x10);
      *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
      if (lVar4 == 0) goto LAB_044f0140;
      uVar2 = *(uint *)(unaff_x22 + 0x18);
      if (uVar2 < *(uint *)(lVar4 + 0x18)) {
        lVar4 = lVar4 + (long)(int)uVar2 * (long)unaff_w25;
        *(uint *)(unaff_x22 + 0x18) = uVar2 + 1;
        *(undefined8 *)(lVar4 + 0x28) = uVar7;
        *(undefined8 *)(lVar4 + 0x20) = uVar6;
        *(undefined8 *)(lVar4 + 0x30) = uVar5;
      }
      else {
        in_stack_00000040 = uVar6;
        in_stack_00000048 = uVar7;
        uStack0000000000000050 = uVar5;
        FUN_044ef788();
      }
    }
    unaff_x23 = unaff_x23 + 1;
    unaff_x24 = unaff_x24 + 0x18;
    if ((long)*(int *)(unaff_x21 + 0x18) <= (long)unaff_x23) {
      return;
    }
    lVar4 = *(long *)(unaff_x21 + 0x10);
    if (lVar4 == 0) goto LAB_044f0140;
    if (*(uint *)(lVar4 + 0x18) <= unaff_x23) {
LAB_044f0144:
                    /* WARNING: Subroutine does not return */
      FUN_03188ce0();
    }
    if (unaff_x20 == 0) goto LAB_044f0140;
    puVar1 = (undefined8 *)(lVar4 + unaff_x24);
    in_x9 = *(code **)(unaff_x20 + 0x18);
    param_2 = *(undefined8 *)(unaff_x20 + 0x40);
    in_stack_00000048 = puVar1[1];
    in_stack_00000040 = *puVar1;
    param_1 = puVar1[2];
    param_3 = &stack0x00000040;
    param_4 = *(undefined8 *)(unaff_x20 + 0x28);
  } while( true );
}


