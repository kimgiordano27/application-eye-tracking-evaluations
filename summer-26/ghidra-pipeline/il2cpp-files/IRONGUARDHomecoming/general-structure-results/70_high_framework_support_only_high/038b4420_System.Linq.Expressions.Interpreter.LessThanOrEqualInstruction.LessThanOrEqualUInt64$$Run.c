/*
FUNCTION_NAME: System.Linq.Expressions.Interpreter.LessThanOrEqualInstruction.LessThanOrEqualUInt64$$Run
ENTRY_POINT: 038b4420
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x038b45a8) */

void System_Linq_Expressions_Interpreter_LessThanOrEqualInstruction_LessThanOrEqualUInt64__Run
               (undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  int *piVar13;
  long *unaff_x20;
  long *unaff_x22;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  
  plVar9 = (long *)FUN_03825b0c(param_1,param_2,0);
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*unaff_x22);
  }
  if (DAT_04837f9f == '\0') {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Component_GetComponent<OVRSystemPerfMetrics_OVRSystemPerfMetricsTcpServer>__
                      );
    DAT_04837f9f = '\x01';
  }
  lVar10 = *unaff_x22;
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar10 = *unaff_x22;
  }
  *(undefined4 *)(*(long *)(lVar10 + 0xb8) + 0xdc) = 8;
  FUN_038b4670(&stack0x00000040);
  uVar8 = in_stack_00000078;
  uVar7 = in_stack_00000070;
  uVar6 = in_stack_00000068;
  uVar5 = in_stack_00000060;
  uVar4 = in_stack_00000058;
  uVar3 = in_stack_00000050;
  uVar2 = in_stack_00000048;
  uVar1 = in_stack_00000040;
  if (DAT_04837e2a == '\0') {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Component_GetComponent<OVRSystemPerfMetrics_OVRSystemPerfMetricsTcpServer>__
                      );
    DAT_04837e2a = '\x01';
  }
  lVar10 = *unaff_x22;
  in_stack_00000040 = uVar1;
  in_stack_00000048 = uVar2;
  in_stack_00000050 = uVar3;
  in_stack_00000058 = uVar4;
  in_stack_00000060 = uVar5;
  in_stack_00000068 = uVar6;
  in_stack_00000070 = uVar7;
  in_stack_00000078 = uVar8;
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar10 = *unaff_x22;
  }
  lVar10 = *(long *)(lVar10 + 0xb8);
  *(undefined8 *)(lVar10 + 0xc0) = in_stack_00000078;
  *(undefined8 *)(lVar10 + 0xb8) = in_stack_00000070;
  *(undefined8 *)(lVar10 + 0xb0) = in_stack_00000068;
  *(undefined8 *)(lVar10 + 0xa8) = in_stack_00000060;
  *(undefined8 *)(lVar10 + 0xa0) = in_stack_00000058;
  *(undefined8 *)(lVar10 + 0x98) = in_stack_00000050;
  *(undefined8 *)(lVar10 + 0x90) = in_stack_00000048;
  *(undefined8 *)(lVar10 + 0x88) = in_stack_00000040;
  lVar10 = FUN_038b3ca0();
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  FUN_0407c270(lVar10,0);
  (**(code **)(*unaff_x20 + 0x1a8))();
  if (plVar9 != (long *)0x0) {
    lVar10 = *plVar9;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar11 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_038b4580;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar11 = (undefined8 *)
              FUN_01ecb238(plVar9,*(long *)
                                   Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                           ,0);
LAB_038b4580:
    (*(code *)*puVar11)(plVar9,puVar11[1]);
  }
  return;
}


