/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 06e2845c
PROGRAM: Hyper-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__System_Collections_IEnumerable_GetEnumerator
               (long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  ulong uVar3;
  ulong in_x9;
  long lVar4;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  
  do {
    if (in_x9 <= unaff_x23) {
LAB_06e28534:
                    /* WARNING: Subroutine does not return */
      FUN_04948194();
    }
    if (unaff_x22 == 0) {
LAB_06e28530:
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    puVar1 = (undefined8 *)(param_1 + unaff_x24);
    uVar7 = puVar1[1];
    uVar5 = *puVar1;
    uVar11 = puVar1[3];
    uVar9 = puVar1[2];
    uVar8 = puVar1[5];
    uVar6 = puVar1[4];
    uVar12 = puVar1[7];
    uVar10 = puVar1[6];
    lVar4 = *(long *)(unaff_x22 + 0x10);
    *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
    if (lVar4 == 0) goto LAB_06e28530;
    uVar2 = *(uint *)(unaff_x22 + 0x18);
    if (uVar2 < *(uint *)(lVar4 + 0x18)) {
      lVar4 = lVar4 + (long)(int)uVar2 * 0x40;
      *(uint *)(unaff_x22 + 0x18) = uVar2 + 1;
      *(undefined8 *)(lVar4 + 0x28) = uVar7;
      *(undefined8 *)(lVar4 + 0x20) = uVar5;
      *(undefined8 *)(lVar4 + 0x38) = uVar11;
      *(undefined8 *)(lVar4 + 0x30) = uVar9;
      *(undefined8 *)(lVar4 + 0x48) = uVar8;
      *(undefined8 *)(lVar4 + 0x40) = uVar6;
      *(undefined8 *)(lVar4 + 0x58) = uVar12;
      *(undefined8 *)(lVar4 + 0x50) = uVar10;
      thunk_FUN_049ee3d8(lVar4 + 0x20,0);
    }
    else {
      in_stack_00000080 = uVar5;
      in_stack_00000088 = uVar7;
      in_stack_00000090 = uVar9;
      in_stack_00000098 = uVar11;
      in_stack_000000a0 = uVar6;
      in_stack_000000a8 = uVar8;
      in_stack_000000b0 = uVar10;
      in_stack_000000b8 = uVar12;
      FUN_06e27b04();
    }
    do {
      unaff_x23 = unaff_x23 + 1;
      unaff_x24 = unaff_x24 + 0x40;
      if ((long)*(int *)(unaff_x21 + 0x18) <= (long)unaff_x23) {
        return;
      }
      lVar4 = *(long *)(unaff_x21 + 0x10);
      if (lVar4 == 0) goto LAB_06e28530;
      if (*(uint *)(lVar4 + 0x18) <= unaff_x23) goto LAB_06e28534;
      if (unaff_x20 == 0) goto LAB_06e28530;
      puVar1 = (undefined8 *)(lVar4 + unaff_x24);
      in_stack_00000088 = puVar1[1];
      in_stack_00000080 = *puVar1;
      in_stack_00000098 = puVar1[3];
      in_stack_00000090 = puVar1[2];
      in_stack_000000a8 = puVar1[5];
      in_stack_000000a0 = puVar1[4];
      in_stack_000000b8 = puVar1[7];
      in_stack_000000b0 = puVar1[6];
      uVar3 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000080,
                         *(undefined8 *)(unaff_x20 + 0x28));
    } while ((uVar3 & 1) == 0);
    param_1 = *(long *)(unaff_x21 + 0x10);
    if (param_1 == 0) goto LAB_06e28530;
    in_x9 = (ulong)*(uint *)(param_1 + 0x18);
  } while( true );
}


