/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.Qpl.Annotation>$$Reset
ENTRY_POINT: 0222b6f0
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


void Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_Qpl_Annotation>__Reset
               (long param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  ulong uVar9;
  ulong unaff_x25;
  ulong uVar10;
  uint *puVar11;
  
  if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_0185daa4(param_1);
  }
  lVar6 = FUN_017fc3f4(param_1,unaff_w20);
  uVar2 = *(uint *)(unaff_x19 + 0x20);
  uVar9 = (ulong)uVar2;
  FUN_02bf1608(*(undefined8 *)(unaff_x19 + 0x18),0,lVar6,0,uVar9,0);
  if ((0 < (int)uVar2) && ((unaff_x25 & 1) != 0)) {
    if (lVar6 == 0) goto LAB_0222b84c;
    uVar8 = (ulong)*(uint *)(lVar6 + 0x18);
    uVar10 = 0;
    puVar11 = (uint *)(lVar6 + 0x20);
    do {
      if (uVar8 <= uVar10) goto LAB_0222b848;
      if (-1 < (int)*puVar11) {
        plVar7 = *(long **)(puVar11 + 2);
        if (plVar7 == (long *)0x0) goto LAB_0222b84c;
        uVar5 = (**(code **)(*plVar7 + 0x158))(plVar7,*(undefined8 *)(*plVar7 + 0x160));
        uVar8 = (ulong)*(uint *)(lVar6 + 0x18);
        if (uVar8 <= uVar10) goto LAB_0222b848;
        *puVar11 = uVar5 & 0x7fffffff;
      }
      uVar10 = uVar10 + 1;
      puVar11 = puVar11 + 0x1a;
    } while (uVar9 != uVar10);
  }
  if (0 < (int)uVar2) {
    if (lVar6 == 0) {
LAB_0222b84c:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    uVar2 = *(uint *)(lVar6 + 0x18);
    uVar10 = 0;
    do {
      if (uVar2 <= uVar10) {
LAB_0222b848:
                    /* WARNING: Subroutine does not return */
        FUN_017fc5b0();
      }
      iVar3 = *(int *)(lVar6 + uVar10 * 0x68 + 0x20);
      if (-1 < iVar3) {
        if (unaff_x21 == 0) goto LAB_0222b84c;
        iVar4 = 0;
        if (unaff_w20 != 0) {
          iVar4 = iVar3 / unaff_w20;
        }
        uVar5 = iVar3 - iVar4 * unaff_w20;
        if (*(uint *)(unaff_x21 + 0x18) <= uVar5) goto LAB_0222b848;
        lVar1 = unaff_x21 + (ulong)uVar5 * 4;
        *(int *)(lVar6 + uVar10 * 0x68 + 0x24) = *(int *)(lVar1 + 0x20) + -1;
        *(int *)(lVar1 + 0x20) = (int)uVar10 + 1;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 != uVar9);
  }
  *(long *)(unaff_x19 + 0x10) = unaff_x21;
  thunk_FUN_0188fd20((long *)(unaff_x19 + 0x10));
  *(long *)(unaff_x19 + 0x18) = lVar6;
  thunk_FUN_0188fd20((undefined8 *)(unaff_x19 + 0x18),lVar6);
  return;
}


