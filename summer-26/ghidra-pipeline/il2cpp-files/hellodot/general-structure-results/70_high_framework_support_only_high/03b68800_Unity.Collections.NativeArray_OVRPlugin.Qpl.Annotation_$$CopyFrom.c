/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$CopyFrom
ENTRY_POINT: 03b68800
PROGRAM: hellodot-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__CopyFrom(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  do {
    unaff_x23 = unaff_x23 + 1;
    unaff_x24 = unaff_x24 + 0x18;
    if (param_1 <= (long)unaff_x23) {
      return;
    }
    lVar4 = *(long *)(unaff_x21 + 0x10);
    if (lVar4 == 0) goto LAB_03b6882c;
    if (*(uint *)(lVar4 + 0x18) <= unaff_x23) {
LAB_03b68830:
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c84();
    }
    puVar1 = (undefined8 *)(lVar4 + unaff_x24);
    if (unaff_x20 == 0) goto LAB_03b6882c;
    in_stack_00000040 = *puVar1;
    in_stack_00000048 = puVar1[1];
    in_stack_00000050 = puVar1[2];
    uVar3 = (**(code **)(unaff_x20 + 0x18))
                      (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000040,
                       *(undefined8 *)(unaff_x20 + 0x28));
    if ((uVar3 & 1) != 0) {
      lVar4 = *(long *)(unaff_x21 + 0x10);
      if (lVar4 == 0) goto LAB_03b6882c;
      if (*(uint *)(lVar4 + 0x18) <= unaff_x23) goto LAB_03b68830;
      puVar1 = (undefined8 *)(lVar4 + unaff_x24);
      uVar5 = puVar1[2];
      uVar7 = puVar1[1];
      uVar6 = *puVar1;
      if (unaff_x22 == 0) {
LAB_03b6882c:
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar4 = *(long *)(unaff_x22 + 0x10);
      *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
      if (lVar4 == 0) goto LAB_03b6882c;
      uVar2 = *(uint *)(unaff_x22 + 0x18);
      if (uVar2 < *(uint *)(lVar4 + 0x18)) {
        *(uint *)(unaff_x22 + 0x18) = uVar2 + 1;
        lVar4 = lVar4 + (int)uVar2 * unaff_x25;
        *(undefined8 *)(lVar4 + 0x30) = uVar5;
        *(undefined8 *)(lVar4 + 0x28) = uVar7;
        *(undefined8 *)(lVar4 + 0x20) = uVar6;
      }
      else {
        in_stack_00000040 = uVar6;
        in_stack_00000048 = uVar7;
        in_stack_00000050 = uVar5;
        FUN_03b67de8();
      }
    }
    param_1 = (long)*(int *)(unaff_x21 + 0x18);
  } while( true );
}


