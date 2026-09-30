/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$get_Length
ENTRY_POINT: 04a0db58
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


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__get_Length(long param_1)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  int iVar6;
  long unaff_x25;
  ulong unaff_x26;
  uint uVar7;
  ulong unaff_x27;
  ulong uVar8;
  long unaff_x28;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
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
  
  do {
    if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
      FUN_0322bef4();
    }
    in_stack_00000188 = in_stack_00000068;
    in_stack_00000180 = in_stack_00000060;
    in_stack_00000198 = in_stack_00000078;
    in_stack_00000190 = in_stack_00000070;
    in_stack_000001a8 = in_stack_00000088;
    in_stack_000001a0 = in_stack_00000080;
    in_stack_00000158 = in_stack_00000038;
    in_stack_00000150 = in_stack_00000030;
    in_stack_00000168 = in_stack_00000048;
    in_stack_00000160 = in_stack_00000040;
    in_stack_00000178 = in_stack_00000058;
    in_stack_00000170 = in_stack_00000050;
    iVar3 = (**(code **)(unaff_x20 + 0x18))
                      (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000180,&stack0x00000150,
                       *(undefined8 *)(unaff_x20 + 0x28));
    iVar6 = (int)unaff_x25;
    if (iVar3 < 0) {
      uVar7 = (uint)unaff_x27;
      if (*(uint *)(unaff_x22 + 0x18) <= uVar7) goto LAB_04a0dc68;
      uVar13 = *(undefined8 *)(unaff_x28 + 0x30);
      uVar10 = *(undefined8 *)(unaff_x28 + 0x48);
      uVar9 = *(undefined8 *)(unaff_x28 + 0x40);
      uVar12 = *(undefined8 *)(unaff_x28 + 0x28);
      uVar11 = *(undefined8 *)(unaff_x28 + 0x20);
      if (*(uint *)(unaff_x22 + 0x18) <= uVar7 + 1) goto LAB_04a0dc68;
      uVar1 = uVar7 - 1;
      unaff_x27 = (ulong)uVar1;
      lVar4 = unaff_x22 + (long)(int)(uVar7 + 1) * (long)iVar6;
      *(undefined8 *)(lVar4 + 0x38) = *(undefined8 *)(unaff_x28 + 0x38);
      *(undefined8 *)(lVar4 + 0x30) = uVar13;
      *(undefined8 *)(lVar4 + 0x48) = uVar10;
      *(undefined8 *)(lVar4 + 0x40) = uVar9;
      *(undefined8 *)(lVar4 + 0x28) = uVar12;
      *(undefined8 *)(lVar4 + 0x20) = uVar11;
      if ((int)uVar1 < unaff_w21) goto LAB_04a0dc04;
      bVar2 = *(uint *)(unaff_x22 + 0x18) <= uVar1;
    }
    else {
LAB_04a0dc04:
      uVar5 = (ulong)*(uint *)(unaff_x22 + 0x18);
      uVar8 = unaff_x27;
      do {
        unaff_x27 = unaff_x26;
        uVar7 = (int)uVar8 + 1;
        if ((uint)uVar5 <= uVar7) goto LAB_04a0dc68;
        lVar4 = unaff_x22 + (long)(int)uVar7 * (long)iVar6;
        *(undefined8 *)(lVar4 + 0x38) = in_stack_00000138;
        *(undefined8 *)(lVar4 + 0x30) = in_stack_00000130;
        *(undefined8 *)(lVar4 + 0x48) = in_stack_00000148;
        *(undefined8 *)(lVar4 + 0x40) = in_stack_00000140;
        *(undefined8 *)(lVar4 + 0x28) = in_stack_00000128;
        *(undefined8 *)(lVar4 + 0x20) = in_stack_00000120;
        if (unaff_x27 == unaff_x24) {
          return;
        }
        uVar5 = *(ulong *)(unaff_x22 + 0x18);
        unaff_x26 = unaff_x27 + 1;
        if ((uint)uVar5 <= (uint)unaff_x26) goto LAB_04a0dc68;
        lVar4 = unaff_x22 + unaff_x26 * unaff_x25;
        in_stack_00000138 = *(undefined8 *)(lVar4 + 0x38);
        in_stack_00000130 = *(undefined8 *)(lVar4 + 0x30);
        in_stack_00000148 = *(undefined8 *)(lVar4 + 0x48);
        in_stack_00000140 = *(undefined8 *)(lVar4 + 0x40);
        in_stack_00000128 = *(undefined8 *)(lVar4 + 0x28);
        in_stack_00000120 = *(undefined8 *)(lVar4 + 0x20);
        uVar8 = unaff_x27;
      } while ((long)unaff_x27 < unaff_x23);
      bVar2 = (uint)uVar5 <= (uint)unaff_x27;
    }
    if (bVar2) {
LAB_04a0dc68:
                    /* WARNING: Subroutine does not return */
      FUN_031f2398();
    }
    unaff_x28 = unaff_x22 + (long)(int)unaff_x27 * (long)iVar6;
    in_stack_00000048 = *(undefined8 *)(unaff_x28 + 0x38);
    in_stack_00000040 = *(undefined8 *)(unaff_x28 + 0x30);
    in_stack_00000058 = *(undefined8 *)(unaff_x28 + 0x48);
    in_stack_00000050 = *(undefined8 *)(unaff_x28 + 0x40);
    in_stack_00000038 = *(undefined8 *)(unaff_x28 + 0x28);
    in_stack_00000030 = *(undefined8 *)(unaff_x28 + 0x20);
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    in_stack_00000078 = in_stack_00000138;
    in_stack_00000070 = in_stack_00000130;
    in_stack_00000068 = in_stack_00000128;
    in_stack_00000060 = in_stack_00000120;
    param_1 = *(long *)(unaff_x19 + 0x20);
    in_stack_00000080 = in_stack_00000140;
    in_stack_00000088 = in_stack_00000148;
  } while( true );
}


