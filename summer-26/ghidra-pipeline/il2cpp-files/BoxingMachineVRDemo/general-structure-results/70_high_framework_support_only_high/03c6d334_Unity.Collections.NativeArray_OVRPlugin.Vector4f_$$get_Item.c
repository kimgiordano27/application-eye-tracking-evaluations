/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$get_Item
ENTRY_POINT: 03c6d334
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__get_Item
               (undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  code *in_x9;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  uint uVar6;
  long unaff_x22;
  int unaff_w23;
  uint unaff_w24;
  long unaff_x25;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  long in_stack_00000058;
  
  do {
    uVar2 = (*in_x9)(param_1,param_2,param_3);
    if ((uVar2 & 1) == 0) {
      iVar3 = *(int *)(unaff_x19 + 0x18);
LAB_03c6d358:
      uVar6 = (uint)unaff_x22;
      if ((int)uVar6 < iVar3) {
        lVar4 = *(long *)(unaff_x19 + 0x10);
        if (lVar4 == 0) {
LAB_03c6d3f4:
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        if (*(uint *)(lVar4 + 0x18) <= uVar6) goto LAB_03c6d3f8;
        lVar5 = lVar4 + (long)(int)uVar6 * (long)unaff_w23;
        uVar8 = *(undefined8 *)(lVar5 + 0x28);
        uVar7 = *(undefined8 *)(lVar5 + 0x20);
        if (*(uint *)(lVar4 + 0x18) <= unaff_w24) goto LAB_03c6d3f8;
        lVar4 = lVar4 + (long)(int)unaff_w24 * (long)unaff_w23;
        unaff_w24 = unaff_w24 + 1;
        *(undefined8 *)(lVar4 + 0x30) = *(undefined8 *)(lVar5 + 0x30);
        *(undefined8 *)(lVar4 + 0x28) = uVar8;
        *(undefined8 *)(lVar4 + 0x20) = uVar7;
        iVar3 = *(int *)(unaff_x19 + 0x18);
        uVar6 = uVar6 + 1;
      }
      if (iVar3 <= (int)uVar6) {
        *(uint *)(unaff_x19 + 0x18) = unaff_w24;
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        if (*(long *)(unaff_x21 + 0x28) != in_stack_00000058) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail(iVar3 - unaff_w24);
        }
        return;
      }
      unaff_x25 = (long)(int)uVar6 * (long)unaff_w23 + 0x20;
      unaff_x22 = (long)(int)uVar6;
    }
    else {
      iVar3 = *(int *)(unaff_x19 + 0x18);
      unaff_x22 = unaff_x22 + 1;
      unaff_x25 = unaff_x25 + 0x18;
      if (iVar3 <= unaff_x22) goto LAB_03c6d358;
    }
    lVar4 = *(long *)(unaff_x19 + 0x10);
    if (lVar4 == 0) goto LAB_03c6d3f4;
    if (*(uint *)(lVar4 + 0x18) <= (uint)unaff_x22) {
LAB_03c6d3f8:
                    /* WARNING: Subroutine does not return */
      FUN_02d60af0();
    }
    puVar1 = (undefined8 *)(lVar4 + unaff_x25);
    if (unaff_x20 == 0) goto LAB_03c6d3f4;
    in_x9 = *(code **)(unaff_x20 + 0x18);
    param_1 = *(undefined8 *)(unaff_x20 + 0x40);
    param_3 = *(undefined8 *)(unaff_x20 + 0x28);
    param_2 = &stack0x00000040;
    in_stack_00000040 = *puVar1;
    in_stack_00000048 = puVar1[1];
    in_stack_00000050 = puVar1[2];
  } while( true );
}


