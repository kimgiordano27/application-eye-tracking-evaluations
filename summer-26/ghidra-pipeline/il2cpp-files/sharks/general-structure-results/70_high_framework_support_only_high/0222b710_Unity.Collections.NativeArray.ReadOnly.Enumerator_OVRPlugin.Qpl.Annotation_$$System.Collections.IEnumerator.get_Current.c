/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.Qpl.Annotation>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 0222b710
PROGRAM: sharks-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_Qpl_Annotation>__System_Collections_IEnumerator_get_Current
               (long param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  ulong uVar8;
  ulong unaff_x25;
  ulong uVar9;
  uint *puVar10;
  
  uVar2 = *(uint *)(unaff_x19 + 0x20);
  uVar8 = (ulong)uVar2;
  FUN_02bf1608(*(undefined8 *)(unaff_x19 + 0x18),0,param_1,0,uVar8,0);
  if ((0 < (int)uVar2) && ((unaff_x25 & 1) != 0)) {
    if (param_1 == 0) goto LAB_0222b84c;
    uVar7 = (ulong)*(uint *)(param_1 + 0x18);
    uVar9 = 0;
    puVar10 = (uint *)(param_1 + 0x20);
    do {
      if (uVar7 <= uVar9) goto LAB_0222b848;
      if (-1 < (int)*puVar10) {
        plVar6 = *(long **)(puVar10 + 2);
        if (plVar6 == (long *)0x0) goto LAB_0222b84c;
        uVar5 = (**(code **)(*plVar6 + 0x158))(plVar6,*(undefined8 *)(*plVar6 + 0x160));
        uVar7 = (ulong)*(uint *)(param_1 + 0x18);
        if (uVar7 <= uVar9) goto LAB_0222b848;
        *puVar10 = uVar5 & 0x7fffffff;
      }
      uVar9 = uVar9 + 1;
      puVar10 = puVar10 + 0x1a;
    } while (uVar8 != uVar9);
  }
  if (0 < (int)uVar2) {
    if (param_1 == 0) {
LAB_0222b84c:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar9 = 0;
    do {
      if (uVar2 <= uVar9) {
LAB_0222b848:
                    /* WARNING: Subroutine does not return */
        FUN_017fc5b0();
      }
      iVar3 = *(int *)(param_1 + uVar9 * 0x68 + 0x20);
      if (-1 < iVar3) {
        if (unaff_x21 == 0) goto LAB_0222b84c;
        iVar4 = 0;
        if (unaff_w20 != 0) {
          iVar4 = iVar3 / unaff_w20;
        }
        uVar5 = iVar3 - iVar4 * unaff_w20;
        if (*(uint *)(unaff_x21 + 0x18) <= uVar5) goto LAB_0222b848;
        lVar1 = unaff_x21 + (ulong)uVar5 * 4;
        *(int *)(param_1 + uVar9 * 0x68 + 0x24) = *(int *)(lVar1 + 0x20) + -1;
        *(int *)(lVar1 + 0x20) = (int)uVar9 + 1;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar8);
  }
  *(long *)(unaff_x19 + 0x10) = unaff_x21;
  thunk_FUN_0188fd20((long *)(unaff_x19 + 0x10));
  *(long *)(unaff_x19 + 0x18) = param_1;
  thunk_FUN_0188fd20((undefined8 *)(unaff_x19 + 0x18),param_1);
  return;
}


