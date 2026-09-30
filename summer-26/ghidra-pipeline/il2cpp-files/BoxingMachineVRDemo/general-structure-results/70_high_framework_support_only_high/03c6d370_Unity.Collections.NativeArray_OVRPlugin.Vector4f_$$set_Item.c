/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$set_Item
ENTRY_POINT: 03c6d370
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__set_Item(long param_1)

{
  undefined8 *puVar1;
  undefined1 in_CY;
  long lVar2;
  ulong uVar3;
  uint in_w9;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  int iVar5;
  ulong unaff_x22;
  int unaff_w23;
  uint unaff_w24;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  long in_stack_00000058;
  
  while (!(bool)in_CY) {
    lVar4 = param_1 + (long)(int)unaff_x22 * (long)unaff_w23;
    uVar7 = *(undefined8 *)(lVar4 + 0x28);
    uVar6 = *(undefined8 *)(lVar4 + 0x20);
                    /* try { // try from 03c6d38c to 03d6d3b3 has its CatchHandler @ 03c6d550 */
    if (in_w9 <= unaff_w24) break;
    param_1 = param_1 + (long)(int)unaff_w24 * (long)unaff_w23;
    unaff_w24 = unaff_w24 + 1;
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(lVar4 + 0x30);
    *(undefined8 *)(param_1 + 0x28) = uVar7;
    *(undefined8 *)(param_1 + 0x20) = uVar6;
    uVar3 = (ulong)*(uint *)(unaff_x19 + 0x18);
    unaff_x22 = (ulong)((int)unaff_x22 + 1);
    do {
      iVar5 = (int)unaff_x22;
      if ((int)uVar3 <= iVar5) {
        *(uint *)(unaff_x19 + 0x18) = unaff_w24;
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        if (*(long *)(unaff_x21 + 0x28) != in_stack_00000058) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail((int)uVar3 - unaff_w24);
        }
        return;
      }
      lVar4 = (long)iVar5 * (long)unaff_w23 + 0x20;
      unaff_x22 = (ulong)iVar5;
      do {
        lVar2 = *(long *)(unaff_x19 + 0x10);
        if (lVar2 == 0) goto LAB_03c6d3f4;
        if (*(uint *)(lVar2 + 0x18) <= (uint)unaff_x22) goto LAB_03c6d3f8;
        puVar1 = (undefined8 *)(lVar2 + lVar4);
        if (unaff_x20 == 0) goto LAB_03c6d3f4;
        in_stack_00000040 = *puVar1;
        in_stack_00000048 = puVar1[1];
        in_stack_00000050 = puVar1[2];
        uVar3 = (**(code **)(unaff_x20 + 0x18))
                          (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000040,
                           *(undefined8 *)(unaff_x20 + 0x28));
        if ((uVar3 & 1) == 0) {
          uVar3 = (ulong)*(uint *)(unaff_x19 + 0x18);
          break;
        }
        uVar3 = (ulong)*(int *)(unaff_x19 + 0x18);
        unaff_x22 = unaff_x22 + 1;
        lVar4 = lVar4 + 0x18;
      } while ((long)unaff_x22 < (long)uVar3);
    } while ((int)uVar3 <= (int)(uint)unaff_x22);
    param_1 = *(long *)(unaff_x19 + 0x10);
    if (param_1 == 0) {
LAB_03c6d3f4:
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    in_w9 = *(uint *)(param_1 + 0x18);
    in_CY = in_w9 <= (uint)unaff_x22;
  }
LAB_03c6d3f8:
                    /* WARNING: Subroutine does not return */
  FUN_02d60af0();
}


