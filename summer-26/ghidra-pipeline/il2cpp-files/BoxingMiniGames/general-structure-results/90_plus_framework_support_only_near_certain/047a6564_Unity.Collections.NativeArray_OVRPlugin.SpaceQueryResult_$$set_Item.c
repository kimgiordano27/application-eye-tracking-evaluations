/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$set_Item
ENTRY_POINT: 047a6564
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


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__set_Item(void)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  ulong unaff_x27;
  uint uVar4;
  ulong unaff_x28;
  ulong uVar5;
  long unaff_x29;
  undefined8 uVar6;
  ulong in_stack_00000008;
  long in_stack_00000010;
  int in_stack_00000018;
  
  do {
    FUN_0367c9fc();
    do {
      iVar3 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),unaff_x23,unaff_x24,unaff_x25,unaff_x26,
                         *(undefined8 *)(unaff_x20 + 0x28));
      if (iVar3 < 0) {
        uVar4 = (uint)unaff_x28;
        if (*(uint *)(unaff_x22 + 0x18) <= uVar4) goto LAB_047a6620;
        uVar2 = uVar4 + 1;
        if (*(uint *)(unaff_x22 + 0x18) <= uVar2) goto LAB_047a6620;
        lVar1 = unaff_x22 + (long)(int)uVar2 * 0x10;
        uVar6 = *unaff_x21;
        *(undefined8 *)(lVar1 + 0x28) = unaff_x21[1];
        *(undefined8 *)(lVar1 + 0x20) = uVar6;
        thunk_FUN_036b7ad0(unaff_x29 + (long)(int)uVar2 * 0x10,0);
        unaff_x28 = (ulong)(uVar4 - 1);
        if ((int)(uVar4 - 1) < in_stack_00000018) goto LAB_047a65cc;
      }
      else {
LAB_047a65cc:
        uVar4 = *(uint *)(unaff_x22 + 0x18);
        uVar5 = unaff_x28;
        do {
          unaff_x28 = unaff_x27;
          uVar2 = (int)uVar5 + 1;
          if (uVar4 <= uVar2) goto LAB_047a6620;
          lVar1 = unaff_x22 + (long)(int)uVar2 * 0x10;
          *(undefined8 *)(lVar1 + 0x20) = unaff_x23;
          *(undefined8 *)(lVar1 + 0x28) = unaff_x24;
          thunk_FUN_036b7ad0(unaff_x29 + (long)(int)uVar2 * 0x10,0);
          if (unaff_x28 == in_stack_00000008) {
            return;
          }
          uVar4 = *(uint *)(unaff_x22 + 0x18);
          unaff_x27 = unaff_x28 + 1;
          if (uVar4 <= (uint)unaff_x27) goto LAB_047a6620;
          lVar1 = unaff_x22 + unaff_x27 * 0x10;
          unaff_x23 = *(undefined8 *)(lVar1 + 0x20);
          unaff_x24 = *(undefined8 *)(lVar1 + 0x28);
          uVar5 = unaff_x28;
        } while ((long)unaff_x28 < in_stack_00000010);
      }
      if (*(uint *)(unaff_x22 + 0x18) <= (uint)unaff_x28) {
LAB_047a6620:
                    /* WARNING: Subroutine does not return */
        FUN_03642c20();
      }
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      lVar1 = unaff_x22 + (long)(int)(uint)unaff_x28 * 0x10;
      unaff_x21 = (undefined8 *)(lVar1 + 0x20);
      unaff_x25 = *unaff_x21;
      unaff_x26 = *(undefined8 *)(lVar1 + 0x28);
    } while ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) != 0);
  } while( true );
}


