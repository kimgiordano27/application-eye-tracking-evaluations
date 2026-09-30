/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$CopySafe
ENTRY_POINT: 0276787c
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


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__CopySafe(int param_1)

{
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  ulong unaff_x25;
  uint uVar3;
  ulong unaff_x26;
  ulong uVar4;
  long unaff_x27;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  
  do {
    if (param_1 < 0) {
      uVar3 = (uint)unaff_x26;
      if (*(uint *)(unaff_x22 + 0x18) <= uVar3) goto LAB_02767944;
      uVar7 = *(undefined8 *)(unaff_x27 + 0x20);
      uVar6 = *(undefined8 *)(unaff_x27 + 0x38);
      uVar5 = *(undefined8 *)(unaff_x27 + 0x30);
      if (*(uint *)(unaff_x22 + 0x18) <= uVar3 + 1) goto LAB_02767944;
      lVar1 = unaff_x22 + (long)(int)(uVar3 + 1) * 0x20;
      *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(unaff_x27 + 0x28);
      *(undefined8 *)(lVar1 + 0x20) = uVar7;
      *(undefined8 *)(lVar1 + 0x38) = uVar6;
      *(undefined8 *)(lVar1 + 0x30) = uVar5;
      thunk_FUN_0188fd20(lVar1 + 0x20,0);
      uVar3 = uVar3 - 1;
      unaff_x26 = (ulong)uVar3;
      if ((int)uVar3 < unaff_w21) goto LAB_027678e4;
      if (*(uint *)(unaff_x22 + 0x18) <= uVar3) goto LAB_02767944;
    }
    else {
LAB_027678e4:
      uVar2 = (ulong)*(uint *)(unaff_x22 + 0x18);
      uVar4 = unaff_x26;
      do {
        unaff_x26 = unaff_x25;
        uVar3 = (int)uVar4 + 1;
        if ((uint)uVar2 <= uVar3) goto LAB_02767944;
        lVar1 = unaff_x22 + (long)(int)uVar3 * 0x20;
        *(undefined8 *)(lVar1 + 0x28) = in_stack_000000c8;
        *(undefined8 *)(lVar1 + 0x20) = in_stack_000000c0;
        *(undefined8 *)(lVar1 + 0x38) = in_stack_000000d8;
        *(undefined8 *)(lVar1 + 0x30) = in_stack_000000d0;
        thunk_FUN_0188fd20(lVar1 + 0x20,0);
        if (unaff_x26 == unaff_x24) {
          return;
        }
        uVar2 = *(ulong *)(unaff_x22 + 0x18);
        unaff_x25 = unaff_x26 + 1;
        if ((uint)uVar2 <= (uint)unaff_x25) goto LAB_02767944;
        lVar1 = unaff_x22 + unaff_x25 * 0x20;
        in_stack_000000c8 = *(undefined8 *)(lVar1 + 0x28);
        in_stack_000000c0 = *(undefined8 *)(lVar1 + 0x20);
        in_stack_000000d8 = *(undefined8 *)(lVar1 + 0x38);
        in_stack_000000d0 = *(undefined8 *)(lVar1 + 0x30);
        uVar4 = unaff_x26;
      } while ((long)unaff_x26 < unaff_x23);
      if ((uint)uVar2 <= (uint)unaff_x26) {
LAB_02767944:
                    /* WARNING: Subroutine does not return */
        FUN_017fc5b0();
      }
    }
    unaff_x27 = unaff_x22 + (long)(int)unaff_x26 * 0x20;
    uVar8 = *(undefined8 *)(unaff_x27 + 0x28);
    uVar7 = *(undefined8 *)(unaff_x27 + 0x20);
    uVar6 = *(undefined8 *)(unaff_x27 + 0x38);
    uVar5 = *(undefined8 *)(unaff_x27 + 0x30);
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_0185daa4();
    }
    in_stack_00000108 = in_stack_000000c8;
    in_stack_00000100 = in_stack_000000c0;
    in_stack_00000118 = in_stack_000000d8;
    in_stack_00000110 = in_stack_000000d0;
    in_stack_000000e0 = uVar7;
    in_stack_000000e8 = uVar8;
    in_stack_000000f0 = uVar5;
    in_stack_000000f8 = uVar6;
    param_1 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000100,&stack0x000000e0,
                         *(undefined8 *)(unaff_x20 + 0x28));
  } while( true );
}


