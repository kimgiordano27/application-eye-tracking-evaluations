/*
FUNCTION_NAME: System.EmptyArray<OVRPlugin.Vector3f>$$.cctor
ENTRY_POINT: 074abc24
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_EmptyArray<OVRPlugin_Vector3f>___cctor(undefined8 param_1,long param_2)

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
  long unaff_x22;
  ulong uVar8;
  ulong unaff_x25;
  ulong uVar9;
  uint *puVar10;
  
  uVar2 = *(uint *)(unaff_x22 + 8);
  uVar8 = (ulong)uVar2;
  FUN_07a612b4(param_1,0,param_2,0,uVar8,0);
  if ((0 < (int)uVar2) && ((unaff_x25 & 1) != 0)) {
    if (param_2 == 0) goto LAB_074abd58;
    uVar7 = (ulong)*(uint *)(param_2 + 0x18);
    uVar9 = 0;
    puVar10 = (uint *)(param_2 + 0x20);
    do {
      if (uVar7 <= uVar9) goto LAB_074abd54;
      if (-1 < (int)*puVar10) {
        plVar6 = *(long **)(puVar10 + 2);
        if (plVar6 == (long *)0x0) goto LAB_074abd58;
        uVar5 = (**(code **)(*plVar6 + 0x158))(plVar6,*(undefined8 *)(*plVar6 + 0x160));
        uVar7 = (ulong)*(uint *)(param_2 + 0x18);
        if (uVar7 <= uVar9) goto LAB_074abd54;
        *puVar10 = uVar5 & 0x7fffffff;
      }
      uVar9 = uVar9 + 1;
      puVar10 = puVar10 + 10;
    } while (uVar8 != uVar9);
  }
  if (0 < (int)uVar2) {
    if (param_2 == 0) {
LAB_074abd58:
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    uVar2 = *(uint *)(param_2 + 0x18);
    uVar9 = 0;
    do {
      if (uVar2 <= uVar9) {
LAB_074abd54:
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
      iVar3 = *(int *)(param_2 + uVar9 * 0x28 + 0x20);
      if (-1 < iVar3) {
        if (unaff_x21 == 0) goto LAB_074abd58;
        iVar4 = 0;
        if (unaff_w20 != 0) {
          iVar4 = iVar3 / unaff_w20;
        }
        uVar5 = iVar3 - iVar4 * unaff_w20;
        if (*(uint *)(unaff_x21 + 0x18) <= uVar5) goto LAB_074abd54;
        lVar1 = unaff_x21 + (ulong)uVar5 * 4;
        *(int *)(param_2 + uVar9 * 0x28 + 0x24) = *(int *)(lVar1 + 0x20) + -1;
        *(int *)(lVar1 + 0x20) = (int)uVar9 + 1;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar8);
  }
  *(long *)(unaff_x19 + 0x10) = unaff_x21;
  thunk_FUN_044bb4b4((long *)(unaff_x19 + 0x10));
  *(long *)(unaff_x19 + 0x18) = param_2;
  thunk_FUN_044bb4b4();
  return;
}


