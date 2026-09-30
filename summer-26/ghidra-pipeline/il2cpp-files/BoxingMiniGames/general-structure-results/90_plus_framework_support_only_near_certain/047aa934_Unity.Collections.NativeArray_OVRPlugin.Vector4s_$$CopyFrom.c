/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$CopyFrom
ENTRY_POINT: 047aa934
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_12;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__CopyFrom(void)

{
  ulong uVar1;
  long lVar2;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  uVar3 = *(uint *)(unaff_x20 + 0x18);
  uVar4 = uVar3;
  do {
    uVar4 = uVar4 - 1;
    uVar3 = uVar3 - 1;
    if ((int)uVar3 < 0) {
      unaff_x19[1] = 0;
      *unaff_x19 = 0;
      unaff_x19[3] = 0;
      unaff_x19[2] = 0;
      return;
    }
    lVar2 = *(long *)(unaff_x20 + 0x10);
    if (lVar2 == 0) goto LAB_047aa9d0;
    if (*(uint *)(lVar2 + 0x18) <= uVar3)
    goto Unity_Collections_NativeArray<OVRPlugin_Vector4s>__ToArray;
    if (unaff_x21 == 0) goto LAB_047aa9d0;
    lVar2 = lVar2 + (ulong)uVar4 * 0x20;
    in_stack_00000028 = *(undefined8 *)(lVar2 + 0x28);
    in_stack_00000020 = *(undefined8 *)(lVar2 + 0x20);
    in_stack_00000038 = *(undefined8 *)(lVar2 + 0x38);
    in_stack_00000030 = *(undefined8 *)(lVar2 + 0x30);
    uVar1 = (**(code **)(unaff_x21 + 0x18))
                      (*(undefined8 *)(unaff_x21 + 0x40),&stack0x00000020,
                       *(undefined8 *)(unaff_x21 + 0x28));
  } while ((uVar1 & 1) == 0);
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if (lVar2 != 0) {
    if (uVar3 < *(uint *)(lVar2 + 0x18)) {
      lVar2 = lVar2 + (ulong)uVar4 * 0x20;
      uVar5 = *(undefined8 *)(lVar2 + 0x20);
      uVar7 = *(undefined8 *)(lVar2 + 0x38);
      uVar6 = *(undefined8 *)(lVar2 + 0x30);
      unaff_x19[1] = *(undefined8 *)(lVar2 + 0x28);
      *unaff_x19 = uVar5;
      unaff_x19[3] = uVar7;
      unaff_x19[2] = uVar6;
      return;
    }
Unity_Collections_NativeArray<OVRPlugin_Vector4s>__ToArray:
                    /* WARNING: Subroutine does not return */
    FUN_03642c20();
  }
LAB_047aa9d0:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


