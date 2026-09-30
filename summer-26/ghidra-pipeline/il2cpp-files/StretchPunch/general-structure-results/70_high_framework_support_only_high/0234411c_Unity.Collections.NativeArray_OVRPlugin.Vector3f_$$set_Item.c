/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$set_Item
ENTRY_POINT: 0234411c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_Vector3f>__set_Item(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  uint in_w9;
  long in_x10;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  int iVar4;
  uint uVar5;
  ulong unaff_x22;
  long unaff_x23;
  long lVar6;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  
  while( true ) {
    uStack0000000000000018 = *(undefined8 *)(in_x10 + 0x38);
    uStack0000000000000010 = *(undefined8 *)(in_x10 + 0x30);
    uStack0000000000000028 = *(undefined8 *)(in_x10 + 0x48);
    uStack0000000000000020 = *(undefined8 *)(in_x10 + 0x40);
    uStack0000000000000030 = *(undefined8 *)(in_x10 + 0x50);
    uStack0000000000000008 = *(undefined8 *)(in_x10 + 0x28);
    uStack0000000000000000 = *(undefined8 *)(in_x10 + 0x20);
    if (in_w9 <= unaff_w21) break;
    param_1 = param_1 + (int)unaff_w21 * unaff_x23;
    unaff_w21 = unaff_w21 + 1;
    *(undefined8 *)(param_1 + 0x50) = uStack0000000000000030;
    *(undefined8 *)(param_1 + 0x38) = uStack0000000000000018;
    *(undefined8 *)(param_1 + 0x30) = uStack0000000000000010;
    *(undefined8 *)(param_1 + 0x48) = uStack0000000000000028;
    *(undefined8 *)(param_1 + 0x40) = uStack0000000000000020;
    *(undefined8 *)(param_1 + 0x28) = uStack0000000000000008;
    *(undefined8 *)(param_1 + 0x20) = uStack0000000000000000;
    thunk_FUN_01e10808(param_1 + 0x20,0);
    uVar3 = (ulong)*(uint *)(unaff_x19 + 0x18);
    unaff_x22 = (ulong)((int)unaff_x22 + 1);
    do {
      iVar4 = (int)unaff_x22;
      if ((int)uVar3 <= iVar4) {
        FUN_033b4c84(*(undefined8 *)(unaff_x19 + 0x10),unaff_w21,(int)uVar3 - unaff_w21,0);
        iVar4 = *(int *)(unaff_x19 + 0x18);
        *(uint *)(unaff_x19 + 0x18) = unaff_w21;
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        return iVar4 - unaff_w21;
      }
      lVar6 = (long)iVar4 * (long)(int)unaff_x23 + 0x20;
      unaff_x22 = (ulong)iVar4;
      do {
        lVar2 = *(long *)(unaff_x19 + 0x10);
        if (lVar2 == 0) goto LAB_023441bc;
        if (*(uint *)(lVar2 + 0x18) <= (uint)unaff_x22) goto LAB_023441c0;
        puVar1 = (undefined8 *)(lVar2 + lVar6);
        if (unaff_x20 == 0) goto LAB_023441bc;
        in_stack_00000080 = *puVar1;
        in_stack_00000088 = puVar1[1];
        in_stack_00000090 = puVar1[2];
        in_stack_00000098 = puVar1[3];
        in_stack_000000a0 = puVar1[4];
        in_stack_000000a8 = puVar1[5];
        in_stack_000000b0 = puVar1[6];
        uVar3 = (**(code **)(unaff_x20 + 0x18))
                          (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000080,
                           *(undefined8 *)(unaff_x20 + 0x28));
        if ((uVar3 & 1) == 0) {
          uVar3 = (ulong)*(uint *)(unaff_x19 + 0x18);
          break;
        }
        uVar3 = (ulong)*(int *)(unaff_x19 + 0x18);
        unaff_x22 = unaff_x22 + 1;
        lVar6 = lVar6 + 0x38;
      } while ((long)unaff_x22 < (long)uVar3);
      uVar5 = (uint)unaff_x22;
    } while ((int)uVar3 <= (int)uVar5);
    param_1 = *(long *)(unaff_x19 + 0x10);
    if (param_1 == 0) {
LAB_023441bc:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    in_w9 = *(uint *)(param_1 + 0x18);
    if (in_w9 <= uVar5) break;
    in_x10 = param_1 + (long)(int)uVar5 * (long)(int)unaff_x23;
  }
LAB_023441c0:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db78();
}


