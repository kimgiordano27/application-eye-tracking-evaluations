/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$get_IsCreated
ENTRY_POINT: 0276627c
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


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__get_IsCreated
               (long param_1,undefined1 param_2 [16],long param_3,undefined8 param_4)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
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
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  
  uVar8 = param_2._8_8_;
  uVar3 = param_2._0_8_;
  while( true ) {
    *(undefined8 *)(param_1 + 0x28) = uVar8;
    *(undefined8 *)(param_1 + 0x20) = uVar3;
    thunk_FUN_0188fd20(param_3,param_4);
    uVar5 = (int)unaff_x27 - 1;
    unaff_x27 = (ulong)uVar5;
    if ((int)uVar5 < unaff_w21) goto LAB_027662a8;
    bVar1 = *(uint *)(unaff_x22 + 0x18) <= uVar5;
    while( true ) {
      if (bVar1) goto LAB_0276631c;
      uVar5 = (uint)unaff_x27;
      lVar7 = unaff_x22 + (long)(int)uVar5 * (long)(int)unaff_x25;
      uVar3 = *(undefined8 *)(lVar7 + 0x30);
      uVar9 = *(undefined8 *)(lVar7 + 0x28);
      uVar8 = *(undefined8 *)(lVar7 + 0x20);
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_017fc5a8();
      }
      if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_0185daa4();
      }
      in_stack_00000108 = in_stack_000000c8;
      in_stack_00000100 = in_stack_000000c0;
      in_stack_000000e0 = uVar8;
      in_stack_000000e8 = uVar9;
      in_stack_000000f0 = uVar3;
      in_stack_00000110 = in_stack_000000d0;
      iVar2 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000100,&stack0x000000e0,
                         *(undefined8 *)(unaff_x20 + 0x28));
      if (iVar2 < 0) break;
LAB_027662a8:
      uVar4 = (ulong)*(uint *)(unaff_x22 + 0x18);
      uVar6 = unaff_x27;
      do {
        unaff_x27 = unaff_x26;
        uVar5 = (int)uVar6 + 1;
        if ((uint)uVar4 <= uVar5) goto LAB_0276631c;
        lVar7 = unaff_x22 + (int)uVar5 * unaff_x25;
        *(undefined8 *)(lVar7 + 0x30) = in_stack_000000d0;
        *(undefined8 *)(lVar7 + 0x28) = in_stack_000000c8;
        *(undefined8 *)(lVar7 + 0x20) = in_stack_000000c0;
        thunk_FUN_0188fd20(lVar7 + 0x20,0);
        if (unaff_x27 == unaff_x24) {
          return;
        }
        uVar4 = *(ulong *)(unaff_x22 + 0x18);
        unaff_x26 = unaff_x27 + 1;
        if ((uint)uVar4 <= (uint)unaff_x26) goto LAB_0276631c;
        lVar7 = unaff_x22 + unaff_x26 * unaff_x25;
        in_stack_000000d0 = *(undefined8 *)(lVar7 + 0x30);
        in_stack_000000c8 = *(undefined8 *)(lVar7 + 0x28);
        in_stack_000000c0 = *(undefined8 *)(lVar7 + 0x20);
        uVar6 = unaff_x27;
      } while ((long)unaff_x27 < unaff_x23);
      bVar1 = (uint)uVar4 <= (uint)unaff_x27;
    }
    if (*(uint *)(unaff_x22 + 0x18) <= uVar5) break;
    uVar8 = *(undefined8 *)(lVar7 + 0x28);
    uVar3 = *(undefined8 *)(lVar7 + 0x20);
    if (*(uint *)(unaff_x22 + 0x18) <= uVar5 + 1) break;
    param_1 = unaff_x22 + (int)(uVar5 + 1) * unaff_x25;
    param_3 = param_1 + 0x20;
    param_4 = 0;
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(lVar7 + 0x30);
  }
LAB_0276631c:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5b0();
}


