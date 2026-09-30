/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
ENTRY_POINT: 06e2f570
PROGRAM: Hyper-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
               (long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long lVar5;
  long unaff_x22;
  ulong unaff_x23;
  undefined8 unaff_x24;
  undefined8 uVar6;
  ulong unaff_x27;
  uint uVar7;
  ulong unaff_x28;
  ulong uVar8;
  int iVar9;
  long unaff_x29;
  ulong in_stack_00000008;
  long in_stack_00000010;
  int in_stack_00000018;
  
  do {
    uVar7 = (uint)unaff_x28;
    iVar9 = (int)unaff_x29;
    lVar5 = unaff_x22 + (long)(int)uVar7 * (long)iVar9;
    uVar6 = *(undefined8 *)(lVar5 + 0x20);
    uVar2 = *(undefined4 *)(lVar5 + 0x28);
    if ((*(ushort *)(param_1 + 0x135) & 1) == 0) {
      FUN_04980b34();
    }
    iVar3 = (**(code **)(unaff_x20 + 0x18))
                      (*(undefined8 *)(unaff_x20 + 0x40),unaff_x24,unaff_x23,uVar6,uVar2,
                       *(undefined8 *)(unaff_x20 + 0x28));
    if (iVar3 < 0) {
      if ((*(uint *)(unaff_x22 + 0x18) <= uVar7) || (*(uint *)(unaff_x22 + 0x18) <= uVar7 + 1))
      goto LAB_06e2f63c;
      lVar4 = unaff_x22 + (long)(int)(uVar7 + 1) * (long)iVar9;
      uVar2 = *(undefined4 *)(lVar5 + 0x28);
      unaff_x28 = (ulong)(uVar7 - 1);
      *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)(lVar5 + 0x20);
      *(undefined4 *)(lVar4 + 0x28) = uVar2;
      if ((int)(uVar7 - 1) < in_stack_00000018) goto LAB_06e2f5f0;
    }
    else {
LAB_06e2f5f0:
      uVar7 = *(uint *)(unaff_x22 + 0x18);
      uVar8 = unaff_x28;
      do {
        unaff_x28 = unaff_x27;
        uVar1 = (int)uVar8 + 1;
        if (uVar7 <= uVar1) goto LAB_06e2f63c;
        lVar5 = unaff_x22 + (long)(int)uVar1 * (long)iVar9;
        *(undefined8 *)(lVar5 + 0x20) = unaff_x24;
        *(int *)(lVar5 + 0x28) = (int)unaff_x23;
        if (unaff_x28 == in_stack_00000008) {
          return;
        }
        uVar7 = *(uint *)(unaff_x22 + 0x18);
        unaff_x27 = unaff_x28 + 1;
        if (uVar7 <= (uint)unaff_x27) goto LAB_06e2f63c;
        lVar5 = unaff_x22 + unaff_x27 * unaff_x29;
        unaff_x24 = *(undefined8 *)(lVar5 + 0x20);
        unaff_x23 = (ulong)*(uint *)(lVar5 + 0x28);
        uVar8 = unaff_x28;
      } while ((long)unaff_x28 < in_stack_00000010);
    }
    if (*(uint *)(unaff_x22 + 0x18) <= (uint)unaff_x28) {
LAB_06e2f63c:
                    /* WARNING: Subroutine does not return */
      FUN_04948194();
    }
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    param_1 = *(long *)(unaff_x19 + 0x20);
  } while( true );
}


