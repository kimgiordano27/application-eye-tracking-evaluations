/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$Allocate
ENTRY_POINT: 03c6d2a8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__Allocate(ulong param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  int iVar5;
  uint uVar6;
  ulong unaff_x22;
  long unaff_x23;
  uint uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  long in_stack_00000058;
  
  for (; (long)unaff_x22 < (long)param_1; unaff_x22 = unaff_x22 + 1) {
    lVar4 = *(long *)(unaff_x19 + 0x10);
    if (lVar4 == 0) goto LAB_03c6d3f4;
    if (*(uint *)(lVar4 + 0x18) <= unaff_x22) goto LAB_03c6d3f8;
    puVar1 = (undefined8 *)(lVar4 + unaff_x23);
    if (unaff_x20 == 0) goto LAB_03c6d3f4;
    in_stack_00000040 = *puVar1;
    in_stack_00000048 = puVar1[1];
    in_stack_00000050 = puVar1[2];
    uVar8 = (**(code **)(unaff_x20 + 0x18))
                      (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000040,
                       *(undefined8 *)(unaff_x20 + 0x28));
    if ((uVar8 & 1) != 0) {
      param_1 = (ulong)*(uint *)(unaff_x19 + 0x18);
      break;
    }
    param_1 = (ulong)*(int *)(unaff_x19 + 0x18);
    unaff_x23 = unaff_x23 + 0x18;
  }
  if ((int)param_1 <= (int)unaff_x22) {
    iVar5 = 0;
Unity_Collections_NativeArray<OVRPlugin_Vector4f>__get_IsCreated:
    if (*(long *)(unaff_x21 + 0x28) != in_stack_00000058) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(iVar5);
    }
    return;
  }
  uVar8 = unaff_x22 & 0xffffffff;
  do {
    unaff_x22 = (ulong)((int)unaff_x22 + 1);
    do {
      iVar5 = (int)unaff_x22;
      uVar7 = (uint)uVar8;
      if ((int)param_1 <= iVar5) {
        iVar5 = (int)param_1 - uVar7;
        *(uint *)(unaff_x19 + 0x18) = uVar7;
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        goto Unity_Collections_NativeArray<OVRPlugin_Vector4f>__get_IsCreated;
      }
      lVar4 = (long)iVar5 * 0x18 + 0x20;
      unaff_x22 = (ulong)iVar5;
      do {
        lVar3 = *(long *)(unaff_x19 + 0x10);
        if (lVar3 == 0) goto LAB_03c6d3f4;
        if (*(uint *)(lVar3 + 0x18) <= (uint)unaff_x22) goto LAB_03c6d3f8;
        puVar1 = (undefined8 *)(lVar3 + lVar4);
        if (unaff_x20 == 0) goto LAB_03c6d3f4;
        in_stack_00000040 = *puVar1;
        in_stack_00000048 = puVar1[1];
        in_stack_00000050 = puVar1[2];
        uVar2 = (**(code **)(unaff_x20 + 0x18))
                          (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000040,
                           *(undefined8 *)(unaff_x20 + 0x28));
        if ((uVar2 & 1) == 0) {
          param_1 = (ulong)*(uint *)(unaff_x19 + 0x18);
          break;
        }
        param_1 = (ulong)*(int *)(unaff_x19 + 0x18);
        unaff_x22 = unaff_x22 + 1;
        lVar4 = lVar4 + 0x18;
      } while ((long)unaff_x22 < (long)param_1);
      uVar6 = (uint)unaff_x22;
    } while ((int)param_1 <= (int)uVar6);
    lVar4 = *(long *)(unaff_x19 + 0x10);
    if (lVar4 == 0) {
LAB_03c6d3f4:
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    if (*(uint *)(lVar4 + 0x18) <= uVar6) {
LAB_03c6d3f8:
                    /* WARNING: Subroutine does not return */
      FUN_02d60af0();
    }
    lVar3 = lVar4 + (long)(int)uVar6 * 0x18;
    uVar10 = *(undefined8 *)(lVar3 + 0x28);
    uVar9 = *(undefined8 *)(lVar3 + 0x20);
    if (*(uint *)(lVar4 + 0x18) <= uVar7) goto LAB_03c6d3f8;
    lVar4 = lVar4 + (long)(int)uVar7 * 0x18;
    uVar8 = (ulong)(uVar7 + 1);
    *(undefined8 *)(lVar4 + 0x30) = *(undefined8 *)(lVar3 + 0x30);
    *(undefined8 *)(lVar4 + 0x28) = uVar10;
    *(undefined8 *)(lVar4 + 0x20) = uVar9;
    param_1 = (ulong)*(uint *)(unaff_x19 + 0x18);
  } while( true );
}


