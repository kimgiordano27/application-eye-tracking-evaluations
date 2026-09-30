/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.Qpl.Annotation>$$get_Current
ENTRY_POINT: 0222b6fc
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


void Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_Qpl_Annotation>__get_Current(void)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  ulong uVar10;
  ulong unaff_x25;
  ulong uVar11;
  uint *puVar12;
  
  uVar6 = FUN_0185daa4();
  lVar7 = FUN_017fc3f4(uVar6,unaff_w20);
  uVar2 = *(uint *)(unaff_x19 + 0x20);
  uVar10 = (ulong)uVar2;
  FUN_02bf1608(*(undefined8 *)(unaff_x19 + 0x18),0,lVar7,0,uVar10,0);
  if ((0 < (int)uVar2) && ((unaff_x25 & 1) != 0)) {
    if (lVar7 == 0) goto LAB_0222b84c;
    uVar9 = (ulong)*(uint *)(lVar7 + 0x18);
    uVar11 = 0;
    puVar12 = (uint *)(lVar7 + 0x20);
    do {
      if (uVar9 <= uVar11) goto LAB_0222b848;
      if (-1 < (int)*puVar12) {
        plVar8 = *(long **)(puVar12 + 2);
        if (plVar8 == (long *)0x0) goto LAB_0222b84c;
        uVar5 = (**(code **)(*plVar8 + 0x158))(plVar8,*(undefined8 *)(*plVar8 + 0x160));
        uVar9 = (ulong)*(uint *)(lVar7 + 0x18);
        if (uVar9 <= uVar11) goto LAB_0222b848;
        *puVar12 = uVar5 & 0x7fffffff;
      }
      uVar11 = uVar11 + 1;
      puVar12 = puVar12 + 0x1a;
    } while (uVar10 != uVar11);
  }
  if (0 < (int)uVar2) {
    if (lVar7 == 0) {
LAB_0222b84c:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    uVar2 = *(uint *)(lVar7 + 0x18);
    uVar11 = 0;
    do {
      if (uVar2 <= uVar11) {
LAB_0222b848:
                    /* WARNING: Subroutine does not return */
        FUN_017fc5b0();
      }
      iVar3 = *(int *)(lVar7 + uVar11 * 0x68 + 0x20);
      if (-1 < iVar3) {
        if (unaff_x21 == 0) goto LAB_0222b84c;
        iVar4 = 0;
        if (unaff_w20 != 0) {
          iVar4 = iVar3 / unaff_w20;
        }
        uVar5 = iVar3 - iVar4 * unaff_w20;
        if (*(uint *)(unaff_x21 + 0x18) <= uVar5) goto LAB_0222b848;
        lVar1 = unaff_x21 + (ulong)uVar5 * 4;
        *(int *)(lVar7 + uVar11 * 0x68 + 0x24) = *(int *)(lVar1 + 0x20) + -1;
        *(int *)(lVar1 + 0x20) = (int)uVar11 + 1;
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar10);
  }
  *(long *)(unaff_x19 + 0x10) = unaff_x21;
  thunk_FUN_0188fd20((long *)(unaff_x19 + 0x10));
  *(long *)(unaff_x19 + 0x18) = lVar7;
  thunk_FUN_0188fd20((undefined8 *)(unaff_x19 + 0x18),lVar7);
  return;
}


