/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.RoomFace>$$CopySafe
ENTRY_POINT: 047a4f44
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


void Unity_Collections_NativeArray<OVRPlugin_RoomFace>__CopySafe(void)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  long unaff_x25;
  int iVar5;
  long unaff_x26;
  ulong unaff_x27;
  uint uVar6;
  ulong unaff_x28;
  ulong uVar7;
  long unaff_x29;
  undefined8 uVar8;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  
  do {
    uStack0000000000000008 = *(undefined8 *)(unaff_x29 + 0x28);
    uStack0000000000000000 = *(undefined8 *)(unaff_x29 + 0x20);
    uStack0000000000000010 = *(undefined8 *)(unaff_x29 + 0x30);
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_0367c9fc();
    }
    in_stack_00000070 = in_stack_00000030;
    in_stack_00000068 = in_stack_00000028;
    in_stack_00000060 = in_stack_00000020;
    in_stack_00000048 = uStack0000000000000008;
    in_stack_00000040 = uStack0000000000000000;
    in_stack_00000050 = uStack0000000000000010;
    iVar2 = (**(code **)(unaff_x20 + 0x18))
                      (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000060,&stack0x00000040,
                       *(undefined8 *)(unaff_x20 + 0x28));
    iVar5 = (int)unaff_x26;
    if (iVar2 < 0) {
      uVar6 = (uint)unaff_x28;
      if (*(uint *)(unaff_x22 + 0x18) <= uVar6) goto LAB_047a5048;
      uVar1 = uVar6 + 1;
      if (*(uint *)(unaff_x22 + 0x18) <= uVar1) goto LAB_047a5048;
      lVar3 = unaff_x22 + (long)(int)uVar1 * (long)iVar5;
      uVar8 = *(undefined8 *)(unaff_x29 + 0x20);
      uVar4 = *(undefined8 *)(unaff_x29 + 0x30);
      *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)(unaff_x29 + 0x28);
      *(undefined8 *)(lVar3 + 0x20) = uVar8;
      *(undefined8 *)(lVar3 + 0x30) = uVar4;
      thunk_FUN_036b7ad0(unaff_x25 + (long)(int)uVar1 * (long)iVar5,0);
      unaff_x28 = (ulong)(uVar6 - 1);
      if ((int)(uVar6 - 1) < unaff_w21) goto LAB_047a4fe8;
    }
    else {
LAB_047a4fe8:
      uVar6 = *(uint *)(unaff_x22 + 0x18);
      uVar7 = unaff_x28;
      do {
        unaff_x28 = unaff_x27;
        uVar1 = (int)uVar7 + 1;
        if (uVar6 <= uVar1) goto LAB_047a5048;
        lVar3 = unaff_x22 + (long)(int)uVar1 * (long)iVar5;
        *(undefined8 *)(lVar3 + 0x28) = in_stack_00000028;
        *(undefined8 *)(lVar3 + 0x20) = in_stack_00000020;
        *(undefined8 *)(lVar3 + 0x30) = in_stack_00000030;
        thunk_FUN_036b7ad0(unaff_x25 + (long)(int)uVar1 * (long)iVar5,0);
        if (unaff_x28 == unaff_x24) {
          return;
        }
        uVar6 = *(uint *)(unaff_x22 + 0x18);
        unaff_x27 = unaff_x28 + 1;
        if (uVar6 <= (uint)unaff_x27) goto LAB_047a5048;
        lVar3 = unaff_x22 + unaff_x27 * unaff_x26;
        in_stack_00000028 = *(undefined8 *)(lVar3 + 0x28);
        in_stack_00000020 = *(undefined8 *)(lVar3 + 0x20);
        in_stack_00000030 = *(undefined8 *)(lVar3 + 0x30);
        uVar7 = unaff_x28;
      } while ((long)unaff_x28 < unaff_x23);
    }
    if (*(uint *)(unaff_x22 + 0x18) <= (uint)unaff_x28) {
LAB_047a5048:
                    /* WARNING: Subroutine does not return */
      FUN_03642c20();
    }
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    unaff_x29 = unaff_x22 + (long)(int)(uint)unaff_x28 * (long)iVar5;
  } while( true );
}


