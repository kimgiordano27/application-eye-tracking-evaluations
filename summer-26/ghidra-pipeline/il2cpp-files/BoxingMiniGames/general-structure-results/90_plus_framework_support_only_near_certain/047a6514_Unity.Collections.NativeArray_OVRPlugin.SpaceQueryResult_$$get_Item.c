/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$get_Item
ENTRY_POINT: 047a6514
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__get_Item(ulong param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  uint uVar9;
  ulong unaff_x28;
  ulong uVar10;
  long unaff_x29;
  undefined8 uVar11;
  ulong uStack0000000000000008;
  int in_stack_00000018;
  
  uVar10 = unaff_x28;
  uStack0000000000000008 = param_1;
  while( true ) {
    uVar9 = *(uint *)(unaff_x22 + 0x18);
    uVar3 = uVar10 + 1;
    if (uVar9 <= (uint)uVar3) break;
    lVar4 = unaff_x22 + uVar3 * 0x10;
    uVar5 = *(undefined8 *)(lVar4 + 0x20);
    uVar6 = *(undefined8 *)(lVar4 + 0x28);
    if ((long)unaff_x28 <= (long)uVar10) {
      do {
        uVar9 = (uint)uVar10;
        if (*(uint *)(unaff_x22 + 0x18) <= uVar9) goto LAB_047a6620;
        if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        lVar4 = unaff_x22 + (long)(int)uVar9 * 0x10;
        uVar11 = *(undefined8 *)(lVar4 + 0x20);
        uVar7 = *(undefined8 *)(lVar4 + 0x28);
        if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
          FUN_0367c9fc();
        }
        iVar8 = (**(code **)(unaff_x20 + 0x18))
                          (*(undefined8 *)(unaff_x20 + 0x40),uVar5,uVar6,uVar11,uVar7,
                           *(undefined8 *)(unaff_x20 + 0x28));
        if (-1 < iVar8) break;
        if (*(uint *)(unaff_x22 + 0x18) <= uVar9) goto LAB_047a6620;
        uVar2 = uVar9 + 1;
        if (*(uint *)(unaff_x22 + 0x18) <= uVar2) goto LAB_047a6620;
        lVar1 = unaff_x22 + (long)(int)uVar2 * 0x10;
        uVar11 = *(undefined8 *)(lVar4 + 0x20);
        *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(lVar4 + 0x28);
        *(undefined8 *)(lVar1 + 0x20) = uVar11;
        thunk_FUN_036b7ad0(unaff_x29 + (long)(int)uVar2 * 0x10,0);
        uVar10 = (ulong)(uVar9 - 1);
      } while (in_stack_00000018 <= (int)(uVar9 - 1));
      uVar9 = *(uint *)(unaff_x22 + 0x18);
    }
    uVar2 = (int)uVar10 + 1;
    if (uVar9 <= uVar2) break;
    lVar4 = unaff_x22 + (long)(int)uVar2 * 0x10;
    *(undefined8 *)(lVar4 + 0x20) = uVar5;
    *(undefined8 *)(lVar4 + 0x28) = uVar6;
    thunk_FUN_036b7ad0(unaff_x29 + (long)(int)uVar2 * 0x10,0);
    uVar10 = uVar3;
    if (uVar3 == uStack0000000000000008) {
      return;
    }
  }
LAB_047a6620:
                    /* WARNING: Subroutine does not return */
  FUN_03642c20();
}


