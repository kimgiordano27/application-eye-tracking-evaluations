/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$.ctor
ENTRY_POINT: 03c6c0e8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>___ctor(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  ulong uVar3;
  ulong in_x9;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  long unaff_x25;
  long unaff_x26;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  long in_stack_00000058;
  
  do {
    if (in_x9 <= unaff_x24) {
LAB_03c6c1dc:
                    /* WARNING: Subroutine does not return */
      FUN_02d60af0();
    }
    puVar1 = (undefined8 *)(param_1 + unaff_x25);
    uVar4 = puVar1[2];
    uVar7 = puVar1[1];
    uVar6 = *puVar1;
    if (unaff_x22 == 0) {
LAB_03c6c1d8:
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar5 = *(long *)(unaff_x22 + 0x10);
    *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
    if (lVar5 == 0) goto LAB_03c6c1d8;
    uVar2 = *(uint *)(unaff_x22 + 0x18);
    if (uVar2 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(unaff_x22 + 0x18) = uVar2 + 1;
      lVar5 = lVar5 + (int)uVar2 * unaff_x26;
      *(undefined8 *)(lVar5 + 0x30) = uVar4;
      *(undefined8 *)(lVar5 + 0x28) = uVar7;
      *(undefined8 *)(lVar5 + 0x20) = uVar6;
    }
    else {
      in_stack_00000040 = uVar6;
      in_stack_00000048 = uVar7;
      in_stack_00000050 = uVar4;
      FUN_03c6b678();
    }
    do {
      unaff_x24 = unaff_x24 + 1;
      unaff_x25 = unaff_x25 + 0x18;
      if ((long)*(int *)(unaff_x21 + 0x18) <= (long)unaff_x24) {
        if (*(long *)(unaff_x23 + 0x28) == in_stack_00000058) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      lVar5 = *(long *)(unaff_x21 + 0x10);
      if (lVar5 == 0) goto LAB_03c6c1d8;
      if (*(uint *)(lVar5 + 0x18) <= unaff_x24) goto LAB_03c6c1dc;
      puVar1 = (undefined8 *)(lVar5 + unaff_x25);
      if (unaff_x20 == 0) goto LAB_03c6c1d8;
      in_stack_00000040 = *puVar1;
      in_stack_00000048 = puVar1[1];
      in_stack_00000050 = puVar1[2];
      uVar3 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000040,
                         *(undefined8 *)(unaff_x20 + 0x28));
    } while ((uVar3 & 1) == 0);
    param_1 = *(long *)(unaff_x21 + 0x10);
    if (param_1 == 0) goto LAB_03c6c1d8;
    in_x9 = (ulong)*(uint *)(param_1 + 0x18);
  } while( true );
}


