/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$ToArray
ENTRY_POINT: 06e2f448
PROGRAM: Hyper-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_7;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_18;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_7
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__ToArray
               (code *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long unaff_x19;
  int unaff_w20;
  int unaff_w21;
  long unaff_x22;
  long unaff_x23;
  undefined8 uVar8;
  ulong unaff_x24;
  uint unaff_w25;
  uint unaff_w26;
  uint uVar9;
  undefined8 uVar10;
  uint unaff_w28;
  undefined8 *unaff_x29;
  int iStack0000000000000000;
  int iStack0000000000000004;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  while (uVar9 = unaff_w26,
        iVar5 = (*param_1)(param_2,param_3,param_4,param_5,unaff_x24,
                           *(undefined8 *)(unaff_x23 + 0x28)), iVar5 < 0) {
    if ((*(uint *)(unaff_x19 + 0x18) <= unaff_w28) ||
       (*(uint *)(unaff_x19 + 0x18) <= unaff_w20 + unaff_w25))
    goto Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__GetEnumerator;
    lVar6 = unaff_x19 + (long)(int)(unaff_w20 + unaff_w25) * (long)unaff_w21;
    uVar3 = *(undefined4 *)(unaff_x29 + 1);
    *(undefined8 *)(lVar6 + 0x20) = *unaff_x29;
    *(undefined4 *)(lVar6 + 0x28) = uVar3;
    if (iStack0000000000000004 < (int)uVar9) goto LAB_06e2f49c;
    unaff_w26 = uVar9 * 2;
    uVar4 = (uint)*(undefined8 *)(unaff_x19 + 0x18);
    if ((int)unaff_w26 < in_stack_00000018._4_4_) {
      uVar1 = unaff_w26 + iStack0000000000000000;
      if ((uVar4 <= uVar1 - 1) || (uVar4 <= uVar1))
      goto Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__GetEnumerator;
      if (unaff_x23 == 0) {
LAB_06e2f4e4:
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      lVar7 = unaff_x19 + (long)(int)(uVar1 - 1) * (long)unaff_w21;
      lVar6 = unaff_x19 + (long)(int)uVar1 * (long)unaff_w21;
      uVar10 = *(undefined8 *)(lVar7 + 0x20);
      uVar3 = *(undefined4 *)(lVar7 + 0x28);
      uVar8 = *(undefined8 *)(lVar6 + 0x20);
      uVar2 = *(undefined4 *)(lVar6 + 0x28);
      if ((*(ushort *)(*(long *)(unaff_x22 + 0x20) + 0x135) & 1) == 0) {
        FUN_04980b34();
      }
      uVar4 = (**(code **)(unaff_x23 + 0x18))
                        (*(undefined8 *)(unaff_x23 + 0x40),uVar10,uVar3,uVar8,uVar2,
                         *(undefined8 *)(unaff_x23 + 0x28));
      unaff_w26 = unaff_w26 | uVar4 >> 0x1f;
      unaff_w28 = unaff_w20 + unaff_w26;
      if (*(uint *)(unaff_x19 + 0x18) <= unaff_w28)
      goto Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__GetEnumerator;
    }
    else {
      unaff_w28 = unaff_w20 + unaff_w26;
      if (uVar4 <= unaff_w28)
      goto Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__GetEnumerator;
      if (unaff_x23 == 0) goto LAB_06e2f4e4;
    }
    lVar6 = unaff_x19 + (long)(int)unaff_w28 * (long)unaff_w21;
    unaff_x29 = (undefined8 *)(lVar6 + 0x20);
    param_5 = *unaff_x29;
    unaff_x24 = (ulong)*(uint *)(lVar6 + 0x28);
    if ((*(ushort *)(*(long *)(unaff_x22 + 0x20) + 0x135) & 1) == 0) {
      FUN_04980b34();
    }
    param_1 = *(code **)(unaff_x23 + 0x18);
    param_2 = *(undefined8 *)(unaff_x23 + 0x40);
    param_3 = in_stack_00000010;
    param_4 = in_stack_00000008;
    unaff_w25 = uVar9;
  }
  unaff_w28 = unaff_w20 + unaff_w25;
LAB_06e2f49c:
  if (unaff_w28 < *(uint *)(unaff_x19 + 0x18)) {
    lVar6 = unaff_x19 + (long)(int)unaff_w28 * 0xc;
    *(undefined8 *)(lVar6 + 0x20) = in_stack_00000010;
    *(int *)(lVar6 + 0x28) = (int)in_stack_00000008;
    return;
  }
Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__GetEnumerator:
                    /* WARNING: Subroutine does not return */
  FUN_04948194();
}


