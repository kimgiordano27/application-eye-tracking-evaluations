/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Dispose
ENTRY_POINT: 047a65d8
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Dispose(void)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 in_CY;
  int iVar6;
  uint in_w9;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  ulong unaff_x27;
  uint uVar7;
  long unaff_x29;
  undefined8 uVar8;
  ulong in_stack_00000008;
  long in_stack_00000010;
  int in_stack_00000018;
  
  while (!(bool)in_CY) {
    lVar2 = unaff_x22 + (long)(int)in_w9 * 0x10;
    *(undefined8 *)(lVar2 + 0x20) = unaff_x23;
    *(undefined8 *)(lVar2 + 0x28) = unaff_x24;
    thunk_FUN_036b7ad0(unaff_x29 + (long)(int)in_w9 * 0x10,0);
    if (unaff_x27 == in_stack_00000008) {
      return;
    }
    uVar7 = *(uint *)(unaff_x22 + 0x18);
    uVar4 = unaff_x27 + 1;
    if (uVar7 <= (uint)uVar4) break;
    lVar2 = unaff_x22 + uVar4 * 0x10;
    unaff_x23 = *(undefined8 *)(lVar2 + 0x20);
    unaff_x24 = *(undefined8 *)(lVar2 + 0x28);
    if (in_stack_00000010 <= (long)unaff_x27) {
      do {
        uVar7 = (uint)unaff_x27;
        if (*(uint *)(unaff_x22 + 0x18) <= uVar7) goto LAB_047a6620;
        if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        lVar2 = unaff_x22 + (long)(int)uVar7 * 0x10;
        uVar8 = *(undefined8 *)(lVar2 + 0x20);
        uVar5 = *(undefined8 *)(lVar2 + 0x28);
        if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
          FUN_0367c9fc();
        }
        iVar6 = (**(code **)(unaff_x20 + 0x18))
                          (*(undefined8 *)(unaff_x20 + 0x40),unaff_x23,unaff_x24,uVar8,uVar5,
                           *(undefined8 *)(unaff_x20 + 0x28));
        if (-1 < iVar6) break;
        if (*(uint *)(unaff_x22 + 0x18) <= uVar7) goto LAB_047a6620;
        uVar3 = uVar7 + 1;
        if (*(uint *)(unaff_x22 + 0x18) <= uVar3) goto LAB_047a6620;
        lVar1 = unaff_x22 + (long)(int)uVar3 * 0x10;
        uVar8 = *(undefined8 *)(lVar2 + 0x20);
        *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(lVar2 + 0x28);
        *(undefined8 *)(lVar1 + 0x20) = uVar8;
        thunk_FUN_036b7ad0(unaff_x29 + (long)(int)uVar3 * 0x10,0);
        unaff_x27 = (ulong)(uVar7 - 1);
      } while (in_stack_00000018 <= (int)(uVar7 - 1));
      uVar7 = *(uint *)(unaff_x22 + 0x18);
    }
    in_w9 = (int)unaff_x27 + 1;
    unaff_x27 = uVar4;
    in_CY = uVar7 <= in_w9;
  }
LAB_047a6620:
                    /* WARNING: Subroutine does not return */
  FUN_03642c20();
}


