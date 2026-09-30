/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Allocate
ENTRY_POINT: 047a647c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Allocate(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  uint uVar9;
  long unaff_x19;
  int unaff_w20;
  uint unaff_w21;
  long unaff_x22;
  long unaff_x23;
  int unaff_w25;
  uint uVar10;
  uint unaff_w28;
  undefined8 uVar11;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  do {
    if (!(bool)in_ZR && in_NG == in_OV) {
LAB_047a6488:
      if (unaff_w28 < *(uint *)(unaff_x19 + 0x18)) {
        lVar2 = unaff_x19 + (long)(int)unaff_w28 * 0x10;
        puVar8 = (undefined8 *)(lVar2 + 0x20);
        *puVar8 = in_stack_00000020;
        *(undefined8 *)(lVar2 + 0x28) = in_stack_00000028;
        thunk_FUN_036b7ad0(puVar8,0);
        return;
      }
LAB_047a64c4:
                    /* WARNING: Subroutine does not return */
      FUN_03642c20();
    }
    uVar10 = unaff_w21 * 2;
    uVar9 = (uint)*(undefined8 *)(unaff_x19 + 0x18);
    if ((int)uVar10 < unaff_w25) {
      uVar6 = uVar10 + in_stack_00000008._4_4_;
      if ((uVar9 <= uVar6 - 1) || (uVar9 <= uVar6)) goto LAB_047a64c4;
      if (unaff_x23 == 0) goto LAB_047a64c8;
      lVar2 = unaff_x19 + (long)(int)(uVar6 - 1) * 0x10;
      lVar1 = unaff_x19 + (long)(int)uVar6 * 0x10;
      uVar11 = *(undefined8 *)(lVar2 + 0x20);
      uVar4 = *(undefined8 *)(lVar2 + 0x28);
      uVar3 = *(undefined8 *)(lVar1 + 0x20);
      uVar5 = *(undefined8 *)(lVar1 + 0x28);
      if ((*(ushort *)(*(long *)(unaff_x22 + 0x20) + 0x135) & 1) == 0) {
        FUN_0367c9fc();
      }
      uVar6 = (**(code **)(unaff_x23 + 0x18))
                        (*(undefined8 *)(unaff_x23 + 0x40),uVar11,uVar4,uVar3,uVar5,
                         *(undefined8 *)(unaff_x23 + 0x28));
      uVar9 = (uint)*(undefined8 *)(unaff_x19 + 0x18);
      uVar10 = uVar10 | uVar6 >> 0x1f;
    }
    unaff_w28 = unaff_w20 + uVar10;
    if (uVar9 <= unaff_w28) goto LAB_047a64c4;
    if (unaff_x23 == 0) {
LAB_047a64c8:
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    lVar2 = unaff_x19 + (long)(int)unaff_w28 * 0x10;
    uVar11 = *(undefined8 *)(lVar2 + 0x20);
    uVar3 = *(undefined8 *)(lVar2 + 0x28);
    if ((*(ushort *)(*(long *)(unaff_x22 + 0x20) + 0x135) & 1) == 0) {
      FUN_0367c9fc();
    }
    iVar7 = (**(code **)(unaff_x23 + 0x18))
                      (*(undefined8 *)(unaff_x23 + 0x40),in_stack_00000020,in_stack_00000028,uVar11,
                       uVar3,*(undefined8 *)(unaff_x23 + 0x28));
    if (-1 < iVar7) {
      unaff_w28 = unaff_w20 + unaff_w21;
      goto LAB_047a6488;
    }
    if ((*(uint *)(unaff_x19 + 0x18) <= unaff_w28) ||
       (uVar9 = unaff_w20 + unaff_w21, *(uint *)(unaff_x19 + 0x18) <= uVar9)) goto LAB_047a64c4;
    lVar1 = unaff_x19 + (long)(int)uVar9 * 0x10;
    uVar11 = *(undefined8 *)(lVar2 + 0x20);
    *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(lVar2 + 0x28);
    *(undefined8 *)(lVar1 + 0x20) = uVar11;
    thunk_FUN_036b7ad0(in_stack_00000010 + (long)(int)uVar9 * 0x10,0);
    in_OV = SBORROW4(uVar10,in_stack_00000018._4_4_);
    in_NG = (int)(uVar10 - in_stack_00000018._4_4_) < 0;
    in_ZR = uVar10 == in_stack_00000018._4_4_;
    unaff_w21 = uVar10;
  } while( true );
}


