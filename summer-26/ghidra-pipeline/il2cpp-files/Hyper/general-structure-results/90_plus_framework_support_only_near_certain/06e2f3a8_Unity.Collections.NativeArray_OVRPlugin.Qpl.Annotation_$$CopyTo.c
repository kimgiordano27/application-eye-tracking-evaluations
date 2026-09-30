/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$CopyTo
ENTRY_POINT: 06e2f3a8
PROGRAM: Hyper-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__CopyTo(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint in_w8;
  long lVar5;
  long lVar6;
  uint uVar7;
  long in_x9;
  long unaff_x19;
  int unaff_w20;
  int unaff_w21;
  long unaff_x22;
  long unaff_x23;
  undefined8 uVar8;
  uint unaff_w25;
  uint unaff_w26;
  undefined8 uVar9;
  int iStack0000000000000000;
  int iStack0000000000000004;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
code_r0x06e2f3a8:
  lVar5 = unaff_x19 + (long)(int)in_w8 * (long)unaff_w21;
  uVar9 = *(undefined8 *)(in_x9 + 0x20);
  uVar1 = *(undefined4 *)(in_x9 + 0x28);
  uVar8 = *(undefined8 *)(lVar5 + 0x20);
  uVar2 = *(undefined4 *)(lVar5 + 0x28);
  if ((*(ushort *)(param_1 + 0x135) & 1) == 0) {
    FUN_04980b34();
  }
  uVar3 = (**(code **)(unaff_x23 + 0x18))
                    (*(undefined8 *)(unaff_x23 + 0x40),uVar9,uVar1,uVar8,uVar2,
                     *(undefined8 *)(unaff_x23 + 0x28));
  unaff_w26 = unaff_w26 | uVar3 >> 0x1f;
  uVar3 = unaff_w20 + unaff_w26;
  uVar7 = unaff_w25;
  if (uVar3 < *(uint *)(unaff_x19 + 0x18)) {
    do {
      unaff_w25 = unaff_w26;
      lVar5 = unaff_x19 + (long)(int)uVar3 * (long)unaff_w21;
      uVar8 = *(undefined8 *)(lVar5 + 0x20);
      uVar1 = *(undefined4 *)(lVar5 + 0x28);
      if ((*(ushort *)(*(long *)(unaff_x22 + 0x20) + 0x135) & 1) == 0) {
        FUN_04980b34();
      }
      iVar4 = (**(code **)(unaff_x23 + 0x18))
                        (*(undefined8 *)(unaff_x23 + 0x40),in_stack_00000010,in_stack_00000008,uVar8
                         ,uVar1,*(undefined8 *)(unaff_x23 + 0x28));
      if (-1 < iVar4) {
        uVar3 = unaff_w20 + uVar7;
LAB_06e2f49c:
        if (uVar3 < *(uint *)(unaff_x19 + 0x18)) {
          lVar5 = unaff_x19 + (long)(int)uVar3 * 0xc;
          *(undefined8 *)(lVar5 + 0x20) = in_stack_00000010;
          *(int *)(lVar5 + 0x28) = (int)in_stack_00000008;
          return;
        }
        break;
      }
      if ((*(uint *)(unaff_x19 + 0x18) <= uVar3) ||
         (*(uint *)(unaff_x19 + 0x18) <= unaff_w20 + uVar7)) break;
      lVar6 = unaff_x19 + (long)(int)(unaff_w20 + uVar7) * (long)unaff_w21;
      uVar1 = *(undefined4 *)(lVar5 + 0x28);
      *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)(lVar5 + 0x20);
      *(undefined4 *)(lVar6 + 0x28) = uVar1;
      if (iStack0000000000000004 < (int)unaff_w25) goto LAB_06e2f49c;
      unaff_w26 = unaff_w25 * 2;
      uVar7 = (uint)*(undefined8 *)(unaff_x19 + 0x18);
      if ((int)unaff_w26 < in_stack_00000018._4_4_) goto code_r0x06e2f37c;
      uVar3 = unaff_w20 + unaff_w26;
      if (uVar7 <= uVar3) break;
      uVar7 = unaff_w25;
      if (unaff_x23 == 0) goto LAB_06e2f4e4;
    } while( true );
  }
  goto Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__GetEnumerator;
code_r0x06e2f37c:
  in_w8 = unaff_w26 + iStack0000000000000000;
  if ((uVar7 <= in_w8 - 1) || (uVar7 <= in_w8)) {
Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__GetEnumerator:
                    /* WARNING: Subroutine does not return */
    FUN_04948194();
  }
  if (unaff_x23 == 0) {
LAB_06e2f4e4:
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  in_x9 = unaff_x19 + (long)(int)(in_w8 - 1) * (long)unaff_w21;
  param_1 = *(long *)(unaff_x22 + 0x20);
  goto code_r0x06e2f3a8;
}


