/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$set_Item
ENTRY_POINT: 04a0dbc4
PROGRAM: vandalizer-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__set_Item
               (undefined1 param_1 [16],undefined1 param_2 [16])

{
  undefined1 in_CY;
  bool bVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  uint in_w9;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  int iVar5;
  long unaff_x25;
  ulong unaff_x26;
  uint uVar6;
  ulong unaff_x27;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uStack00000000000000f0;
  undefined8 uStack00000000000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  
  uStack00000000000000f8 = param_2._8_8_;
  uStack00000000000000f0 = param_2._0_8_;
  while( true ) {
    if ((bool)in_CY) break;
    uVar6 = (int)unaff_x27 - 1;
    unaff_x27 = (ulong)uVar6;
    iVar5 = (int)unaff_x25;
    lVar3 = unaff_x22 + (long)(int)in_w9 * (long)iVar5;
    *(undefined8 *)(lVar3 + 0x38) = in_stack_00000108;
    *(undefined8 *)(lVar3 + 0x30) = in_stack_00000100;
    *(undefined8 *)(lVar3 + 0x48) = in_stack_00000118;
    *(undefined8 *)(lVar3 + 0x40) = in_stack_00000110;
    *(undefined8 *)(lVar3 + 0x28) = uStack00000000000000f8;
    *(undefined8 *)(lVar3 + 0x20) = uStack00000000000000f0;
    if ((int)uVar6 < unaff_w21) goto LAB_04a0dc04;
    bVar1 = *(uint *)(unaff_x22 + 0x18) <= uVar6;
    while( true ) {
      if (bVar1) goto LAB_04a0dc68;
      uVar6 = (uint)unaff_x27;
      lVar3 = unaff_x22 + (long)(int)uVar6 * (long)iVar5;
      uVar11 = *(undefined8 *)(lVar3 + 0x38);
      uVar10 = *(undefined8 *)(lVar3 + 0x30);
      uVar9 = *(undefined8 *)(lVar3 + 0x48);
      uVar8 = *(undefined8 *)(lVar3 + 0x40);
      uVar13 = *(undefined8 *)(lVar3 + 0x28);
      uVar12 = *(undefined8 *)(lVar3 + 0x20);
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_0322bef4();
      }
      in_stack_00000188 = in_stack_00000128;
      in_stack_00000180 = in_stack_00000120;
      in_stack_00000198 = in_stack_00000138;
      in_stack_00000190 = in_stack_00000130;
      in_stack_00000150 = uVar12;
      in_stack_00000158 = uVar13;
      in_stack_00000160 = uVar10;
      in_stack_00000168 = uVar11;
      in_stack_00000170 = uVar8;
      in_stack_00000178 = uVar9;
      in_stack_000001a0 = in_stack_00000140;
      in_stack_000001a8 = in_stack_00000148;
      iVar2 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000180,&stack0x00000150,
                         *(undefined8 *)(unaff_x20 + 0x28));
      if (iVar2 < 0) break;
LAB_04a0dc04:
      uVar4 = (ulong)*(uint *)(unaff_x22 + 0x18);
      uVar7 = unaff_x27;
      do {
        unaff_x27 = unaff_x26;
        uVar6 = (int)uVar7 + 1;
        if ((uint)uVar4 <= uVar6) goto LAB_04a0dc68;
        lVar3 = unaff_x22 + (long)(int)uVar6 * (long)iVar5;
        *(undefined8 *)(lVar3 + 0x38) = in_stack_00000138;
        *(undefined8 *)(lVar3 + 0x30) = in_stack_00000130;
        *(undefined8 *)(lVar3 + 0x48) = in_stack_00000148;
        *(undefined8 *)(lVar3 + 0x40) = in_stack_00000140;
        *(undefined8 *)(lVar3 + 0x28) = in_stack_00000128;
        *(undefined8 *)(lVar3 + 0x20) = in_stack_00000120;
        if (unaff_x27 == unaff_x24) {
          return;
        }
        uVar4 = *(ulong *)(unaff_x22 + 0x18);
        unaff_x26 = unaff_x27 + 1;
        if ((uint)uVar4 <= (uint)unaff_x26) goto LAB_04a0dc68;
        lVar3 = unaff_x22 + unaff_x26 * unaff_x25;
        in_stack_00000138 = *(undefined8 *)(lVar3 + 0x38);
        in_stack_00000130 = *(undefined8 *)(lVar3 + 0x30);
        in_stack_00000148 = *(undefined8 *)(lVar3 + 0x48);
        in_stack_00000140 = *(undefined8 *)(lVar3 + 0x40);
        in_stack_00000128 = *(undefined8 *)(lVar3 + 0x28);
        in_stack_00000120 = *(undefined8 *)(lVar3 + 0x20);
        uVar7 = unaff_x27;
      } while ((long)unaff_x27 < unaff_x23);
      bVar1 = (uint)uVar4 <= (uint)unaff_x27;
    }
    if (*(uint *)(unaff_x22 + 0x18) <= uVar6) break;
    in_stack_00000108 = *(undefined8 *)(lVar3 + 0x38);
    in_stack_00000100 = *(undefined8 *)(lVar3 + 0x30);
    in_stack_00000118 = *(undefined8 *)(lVar3 + 0x48);
    in_stack_00000110 = *(undefined8 *)(lVar3 + 0x40);
    uStack00000000000000f8 = *(undefined8 *)(lVar3 + 0x28);
    uStack00000000000000f0 = *(undefined8 *)(lVar3 + 0x20);
    in_w9 = uVar6 + 1;
    in_CY = *(uint *)(unaff_x22 + 0x18) <= in_w9;
  }
LAB_04a0dc68:
                    /* WARNING: Subroutine does not return */
  FUN_031f2398();
}


