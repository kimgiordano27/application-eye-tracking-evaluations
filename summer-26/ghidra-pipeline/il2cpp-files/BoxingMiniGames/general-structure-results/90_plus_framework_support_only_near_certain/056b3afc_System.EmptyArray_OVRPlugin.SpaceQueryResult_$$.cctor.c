/*
FUNCTION_NAME: System.EmptyArray<OVRPlugin.SpaceQueryResult>$$.cctor
ENTRY_POINT: 056b3afc
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_EmptyArray<OVRPlugin_SpaceQueryResult>___cctor(uint *param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
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
  
  uVar2 = *(uint *)(unaff_x22 + 0x20);
  uVar8 = (ulong)uVar2;
  FUN_05e3b3a4(*(undefined8 *)(unaff_x22 + 0x18),0,param_1,0,uVar8,0);
  if ((0 < (int)uVar2) && ((unaff_x25 & 1) != 0)) {
    if (param_1 == (uint *)0x0) goto LAB_056b3c30;
    uVar7 = (ulong)param_1[6];
    uVar9 = 0;
    puVar4 = param_1;
    do {
      puVar10 = puVar4 + 8;
      if (uVar7 <= uVar9) goto LAB_056b3c2c;
      if (-1 < (int)*puVar10) {
        plVar6 = *(long **)(puVar4 + 10);
        if (plVar6 == (long *)0x0) goto LAB_056b3c30;
        uVar5 = (**(code **)(*plVar6 + 0x158))(plVar6,*(undefined8 *)(*plVar6 + 0x160));
        uVar7 = (ulong)param_1[6];
        if (uVar7 <= uVar9) goto LAB_056b3c2c;
        *puVar10 = uVar5 & 0x7fffffff;
      }
      uVar9 = uVar9 + 1;
      puVar4 = puVar10;
    } while (uVar8 != uVar9);
  }
  if (0 < (int)uVar2) {
    if (param_1 == (uint *)0x0) {
LAB_056b3c30:
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    uVar2 = param_1[6];
    uVar9 = 0;
    do {
      if (uVar9 == uVar2) {
LAB_056b3c2c:
                    /* WARNING: Subroutine does not return */
        FUN_03642c20();
      }
      uVar5 = param_1[uVar9 * 8 + 8];
      if (-1 < (int)uVar5) {
        if (unaff_x21 == 0) goto LAB_056b3c30;
        iVar3 = 0;
        if (unaff_w20 != 0) {
          iVar3 = (int)uVar5 / unaff_w20;
        }
        uVar5 = uVar5 - iVar3 * unaff_w20;
        if (*(uint *)(unaff_x21 + 0x18) <= uVar5) goto LAB_056b3c2c;
        lVar1 = unaff_x21 + (ulong)uVar5 * 4;
        param_1[uVar9 * 8 + 9] = *(int *)(lVar1 + 0x20) - 1;
        *(int *)(lVar1 + 0x20) = (int)uVar9 + 1;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar8);
  }
  *(long *)(unaff_x19 + 0x10) = unaff_x21;
  thunk_FUN_036b7ad0((long *)(unaff_x19 + 0x10));
  *(uint **)(unaff_x19 + 0x18) = param_1;
  thunk_FUN_036b7ad0((undefined8 *)(unaff_x22 + 0x18),param_1);
  return;
}


