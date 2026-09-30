/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$.ctor
ENTRY_POINT: 047a63dc
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>___ctor
               (code *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long unaff_x19;
  int unaff_w20;
  uint unaff_w21;
  long unaff_x22;
  long unaff_x23;
  undefined8 unaff_x24;
  int unaff_w25;
  uint unaff_w26;
  uint uVar8;
  undefined8 unaff_x29;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  do {
    uVar4 = (*param_1)(param_2,param_3,param_4,unaff_x29,unaff_x24,param_7);
    uVar7 = *(undefined8 *)(unaff_x19 + 0x18);
    unaff_w26 = unaff_w26 | uVar4 >> 0x1f;
    uVar4 = unaff_w21;
    do {
      unaff_w21 = unaff_w26;
      uVar8 = unaff_w20 + unaff_w21;
      if ((uint)uVar7 <= uVar8) goto LAB_047a64c4;
      if (unaff_x23 == 0) goto LAB_047a64c8;
      lVar1 = unaff_x19 + (long)(int)uVar8 * 0x10;
      uVar7 = *(undefined8 *)(lVar1 + 0x20);
      uVar3 = *(undefined8 *)(lVar1 + 0x28);
      if ((*(ushort *)(*(long *)(unaff_x22 + 0x20) + 0x135) & 1) == 0) {
        FUN_0367c9fc();
      }
      iVar5 = (**(code **)(unaff_x23 + 0x18))
                        (*(undefined8 *)(unaff_x23 + 0x40),in_stack_00000020,in_stack_00000028,uVar7
                         ,uVar3,*(undefined8 *)(unaff_x23 + 0x28));
      if (-1 < iVar5) {
        uVar8 = unaff_w20 + uVar4;
LAB_047a6488:
        if (uVar8 < *(uint *)(unaff_x19 + 0x18)) {
          lVar1 = unaff_x19 + (long)(int)uVar8 * 0x10;
          puVar6 = (undefined8 *)(lVar1 + 0x20);
          *puVar6 = in_stack_00000020;
          *(undefined8 *)(lVar1 + 0x28) = in_stack_00000028;
          thunk_FUN_036b7ad0(puVar6,0);
          return;
        }
        goto LAB_047a64c4;
      }
      if ((*(uint *)(unaff_x19 + 0x18) <= uVar8) ||
         (uVar4 = unaff_w20 + uVar4, *(uint *)(unaff_x19 + 0x18) <= uVar4)) goto LAB_047a64c4;
      lVar2 = unaff_x19 + (long)(int)uVar4 * 0x10;
      uVar7 = *(undefined8 *)(lVar1 + 0x20);
      *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(lVar1 + 0x28);
      *(undefined8 *)(lVar2 + 0x20) = uVar7;
      thunk_FUN_036b7ad0(in_stack_00000010 + (long)(int)uVar4 * 0x10,0);
      if (in_stack_00000018._4_4_ < (int)unaff_w21) goto LAB_047a6488;
      unaff_w26 = unaff_w21 * 2;
      uVar7 = *(undefined8 *)(unaff_x19 + 0x18);
      uVar4 = unaff_w21;
    } while (unaff_w25 <= (int)unaff_w26);
    uVar4 = unaff_w26 + in_stack_00000008._4_4_;
    if (((uint)uVar7 <= uVar4 - 1) || ((uint)uVar7 <= uVar4)) {
LAB_047a64c4:
                    /* WARNING: Subroutine does not return */
      FUN_03642c20();
    }
    if (unaff_x23 == 0) {
LAB_047a64c8:
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    lVar1 = unaff_x19 + (long)(int)(uVar4 - 1) * 0x10;
    lVar2 = unaff_x19 + (long)(int)uVar4 * 0x10;
    param_3 = *(undefined8 *)(lVar1 + 0x20);
    param_4 = *(undefined8 *)(lVar1 + 0x28);
    unaff_x29 = *(undefined8 *)(lVar2 + 0x20);
    unaff_x24 = *(undefined8 *)(lVar2 + 0x28);
    if ((*(ushort *)(*(long *)(unaff_x22 + 0x20) + 0x135) & 1) == 0) {
      FUN_0367c9fc();
    }
    param_1 = *(code **)(unaff_x23 + 0x18);
    param_2 = *(undefined8 *)(unaff_x23 + 0x40);
    param_7 = *(undefined8 *)(unaff_x23 + 0x28);
  } while( true );
}


