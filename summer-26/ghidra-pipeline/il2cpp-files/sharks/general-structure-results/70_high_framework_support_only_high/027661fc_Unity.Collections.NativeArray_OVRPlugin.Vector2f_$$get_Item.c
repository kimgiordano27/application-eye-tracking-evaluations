/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$get_Item
ENTRY_POINT: 027661fc
PROGRAM: sharks-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__get_Item(undefined1 param_1 [16])

{
  bool bVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 in_x9;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  long unaff_x25;
  ulong unaff_x26;
  uint uVar5;
  ulong unaff_x27;
  ulong uVar6;
  long unaff_x28;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 uStack00000000000000e0;
  undefined8 uStack00000000000000e8;
  undefined8 uStack00000000000000f0;
  undefined8 uStack0000000000000100;
  undefined8 uStack0000000000000108;
  undefined8 uStack0000000000000110;
  
  uVar7 = param_1._0_8_;
  uVar8 = param_1._8_8_;
  do {
    uStack00000000000000e8 = in_stack_00000028;
    uStack00000000000000e0 = in_stack_00000020;
    uStack00000000000000f0 = in_stack_00000030;
    uStack0000000000000100 = uVar7;
    uStack0000000000000108 = uVar8;
    uStack0000000000000110 = in_x9;
    iVar2 = (**(code **)(unaff_x20 + 0x18))
                      (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000100,&stack0x000000e0,
                       *(undefined8 *)(unaff_x20 + 0x28));
    if (iVar2 < 0) {
      uVar5 = (uint)unaff_x27;
      if (*(uint *)(unaff_x22 + 0x18) <= uVar5) goto LAB_0276631c;
      uVar8 = *(undefined8 *)(unaff_x28 + 0x28);
      uVar7 = *(undefined8 *)(unaff_x28 + 0x20);
      if (*(uint *)(unaff_x22 + 0x18) <= uVar5 + 1) goto LAB_0276631c;
      lVar3 = unaff_x22 + (int)(uVar5 + 1) * unaff_x25;
      *(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)(unaff_x28 + 0x30);
      *(undefined8 *)(lVar3 + 0x28) = uVar8;
      *(undefined8 *)(lVar3 + 0x20) = uVar7;
      thunk_FUN_0188fd20(lVar3 + 0x20,0);
      uVar5 = uVar5 - 1;
      unaff_x27 = (ulong)uVar5;
      if ((int)uVar5 < unaff_w21) goto LAB_027662a8;
      bVar1 = *(uint *)(unaff_x22 + 0x18) <= uVar5;
    }
    else {
LAB_027662a8:
      uVar4 = (ulong)*(uint *)(unaff_x22 + 0x18);
      uVar6 = unaff_x27;
      do {
        unaff_x27 = unaff_x26;
        uVar5 = (int)uVar6 + 1;
        if ((uint)uVar4 <= uVar5) goto LAB_0276631c;
        lVar3 = unaff_x22 + (int)uVar5 * unaff_x25;
        *(undefined8 *)(lVar3 + 0x30) = in_stack_000000d0;
        *(undefined8 *)(lVar3 + 0x28) = in_stack_000000c8;
        *(undefined8 *)(lVar3 + 0x20) = in_stack_000000c0;
        thunk_FUN_0188fd20(lVar3 + 0x20,0);
        if (unaff_x27 == unaff_x24) {
          return;
        }
        uVar4 = *(ulong *)(unaff_x22 + 0x18);
        unaff_x26 = unaff_x27 + 1;
        if ((uint)uVar4 <= (uint)unaff_x26) goto LAB_0276631c;
        lVar3 = unaff_x22 + unaff_x26 * unaff_x25;
        in_stack_000000d0 = *(undefined8 *)(lVar3 + 0x30);
        in_stack_000000c8 = *(undefined8 *)(lVar3 + 0x28);
        in_stack_000000c0 = *(undefined8 *)(lVar3 + 0x20);
        uVar6 = unaff_x27;
      } while ((long)unaff_x27 < unaff_x23);
      bVar1 = (uint)uVar4 <= (uint)unaff_x27;
    }
    if (bVar1) {
LAB_0276631c:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5b0();
    }
    unaff_x28 = unaff_x22 + (long)(int)unaff_x27 * (long)(int)unaff_x25;
    in_stack_00000030 = *(undefined8 *)(unaff_x28 + 0x30);
    in_stack_00000028 = *(undefined8 *)(unaff_x28 + 0x28);
    in_stack_00000020 = *(undefined8 *)(unaff_x28 + 0x20);
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    in_x9 = in_stack_000000d0;
    uVar7 = in_stack_000000c0;
    uVar8 = in_stack_000000c8;
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_0185daa4();
    }
  } while( true );
}


