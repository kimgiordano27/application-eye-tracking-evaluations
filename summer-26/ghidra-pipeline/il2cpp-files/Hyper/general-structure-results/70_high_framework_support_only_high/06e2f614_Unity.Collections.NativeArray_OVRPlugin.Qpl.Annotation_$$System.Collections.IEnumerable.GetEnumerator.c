/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 06e2f614
PROGRAM: Hyper-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__System_Collections_IEnumerable_GetEnumerator
               (long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined1 in_ZR;
  int iVar4;
  long lVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  undefined4 unaff_w23;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  ulong unaff_x28;
  int iVar10;
  long unaff_x29;
  ulong in_stack_00000008;
  long in_stack_00000010;
  int in_stack_00000018;
  
  while( true ) {
    *(undefined4 *)(param_1 + 0x28) = unaff_w23;
    if ((bool)in_ZR) {
      return;
    }
    uVar9 = *(uint *)(unaff_x22 + 0x18);
    uVar2 = unaff_x28 + 1;
    if (uVar9 <= (uint)uVar2) break;
    lVar6 = unaff_x22 + uVar2 * unaff_x29;
    uVar7 = *(undefined8 *)(lVar6 + 0x20);
    unaff_w23 = *(undefined4 *)(lVar6 + 0x28);
    iVar10 = (int)unaff_x29;
    if (in_stack_00000010 <= (long)unaff_x28) {
      do {
        uVar9 = (uint)unaff_x28;
        if (*(uint *)(unaff_x22 + 0x18) <= uVar9) goto LAB_06e2f63c;
        if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        lVar6 = unaff_x22 + (long)(int)uVar9 * (long)iVar10;
        uVar8 = *(undefined8 *)(lVar6 + 0x20);
        uVar3 = *(undefined4 *)(lVar6 + 0x28);
        if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
          FUN_04980b34();
        }
        iVar4 = (**(code **)(unaff_x20 + 0x18))
                          (*(undefined8 *)(unaff_x20 + 0x40),uVar7,unaff_w23,uVar8,uVar3,
                           *(undefined8 *)(unaff_x20 + 0x28));
        if (-1 < iVar4) break;
        if ((*(uint *)(unaff_x22 + 0x18) <= uVar9) || (*(uint *)(unaff_x22 + 0x18) <= uVar9 + 1))
        goto LAB_06e2f63c;
        lVar5 = unaff_x22 + (long)(int)(uVar9 + 1) * (long)iVar10;
        uVar3 = *(undefined4 *)(lVar6 + 0x28);
        unaff_x28 = (ulong)(uVar9 - 1);
        *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)(lVar6 + 0x20);
        *(undefined4 *)(lVar5 + 0x28) = uVar3;
      } while (in_stack_00000018 <= (int)(uVar9 - 1));
      uVar9 = *(uint *)(unaff_x22 + 0x18);
    }
    uVar1 = (int)unaff_x28 + 1;
    if (uVar9 <= uVar1) break;
    param_1 = unaff_x22 + (long)(int)uVar1 * (long)iVar10;
    in_ZR = uVar2 == in_stack_00000008;
    *(undefined8 *)(param_1 + 0x20) = uVar7;
    unaff_x28 = uVar2;
  }
LAB_06e2f63c:
                    /* WARNING: Subroutine does not return */
  FUN_04948194();
}


