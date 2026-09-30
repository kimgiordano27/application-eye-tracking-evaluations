/*
FUNCTION_NAME: System.Linq.Expressions.Interpreter.NotEqualInstruction.NotEqualInt32LiftedToNull$$.ctor
ENTRY_POINT: 038cd7b0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 92
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x038cda7c) */

void System_Linq_Expressions_Interpreter_NotEqualInstruction_NotEqualInt32LiftedToNull___ctor
               (long param_1,undefined8 param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  int iVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x21;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  puVar3 = 
  Method_UnityEngine_Component_GetComponent<OVRSystemPerfMetrics_OVRSystemPerfMetricsTcpServer>__;
  if ((*(byte *)(unaff_x21 + 0x6b) & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Component_GetComponent<OVRSystemPerfMetrics_OVRSystemPerfMetricsTcpServer>__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    *(undefined1 *)(unaff_x21 + 0x6b) = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  plVar5 = (long *)FUN_03825b0c(param_2,0x226,0);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)puVar3);
  }
  FUN_038968d0(0);
  if (DAT_04838076 == '\0') {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Component_GetComponent<OVRSystemPerfMetrics_OVRSystemPerfMetricsTcpServer>__
                      );
    DAT_04838076 = '\x01';
  }
  lVar6 = *(long *)puVar3;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar6 = *(long *)puVar3;
  }
  *(undefined4 *)(*(long *)(lVar6 + 0xb8) + 0x108) = 2;
  puVar4 = 
  Method_UnityEngine_Component_GetComponent<OVRSystemPerfMetrics_OVRSystemPerfMetricsTcpServer>__;
  uVar13 = *(undefined4 *)(param_1 + 0x24);
  if (DAT_04838078 == '\0') {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Component_GetComponent<OVRSystemPerfMetrics_OVRSystemPerfMetricsTcpServer>__
                      );
    lVar6 = *(long *)puVar4;
    DAT_04838078 = '\x01';
  }
  iVar8 = *(int *)(lVar6 + 0xe0);
  if (iVar8 == 0) {
    thunk_FUN_01ee6d7c();
    lVar6 = *(long *)puVar3;
    iVar8 = *(int *)(lVar6 + 0xe0);
  }
  *(undefined4 *)(*(long *)(lVar6 + 0xb8) + 0x18c) = uVar13;
  bVar1 = *(byte *)(param_1 + 0x54);
  if (iVar8 == 0) {
    thunk_FUN_01ee6d7c();
  }
  if (DAT_04838080 == '\0') {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Component_GetComponent<OVRSystemPerfMetrics_OVRSystemPerfMetricsTcpServer>__
                      );
    DAT_04838080 = '\x01';
  }
  lVar6 = *(long *)puVar3;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar6 = *(long *)puVar3;
  }
  *(uint *)(*(long *)(lVar6 + 0xb8) + 0x1a0) = (uint)bVar1 << 1;
  puVar4 = 
  Method_UnityEngine_Component_GetComponent<OVRSystemPerfMetrics_OVRSystemPerfMetricsTcpServer>__;
  if (DAT_04838091 == '\0') {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Component_GetComponent<OVRSystemPerfMetrics_OVRSystemPerfMetricsTcpServer>__
                      );
    lVar6 = *(long *)puVar4;
    DAT_04838091 = '\x01';
  }
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar6 = *(long *)puVar3;
  }
  *(undefined4 *)(*(long *)(lVar6 + 0xb8) + 400) = 0;
  puVar4 = 
  Method_UnityEngine_Component_GetComponent<OVRSystemPerfMetrics_OVRSystemPerfMetricsTcpServer>__;
  uVar12 = *(undefined8 *)(param_1 + 0x30);
  uVar11 = *(undefined8 *)(param_1 + 0x28);
  if (DAT_04837e42 == '\0') {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Component_GetComponent<OVRSystemPerfMetrics_OVRSystemPerfMetricsTcpServer>__
                      );
    lVar6 = *(long *)puVar4;
    DAT_04837e42 = '\x01';
  }
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar6 = *(long *)puVar3;
  }
  lVar6 = *(long *)(lVar6 + 0xb8);
  *(undefined8 *)(lVar6 + 0x100) = uVar12;
  *(undefined8 *)(lVar6 + 0xf8) = uVar11;
  FUN_0406de20(*(undefined4 *)(param_1 + 0x38),0);
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (DAT_04837e1f == '\0') {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Component_GetComponent<OVRSystemPerfMetrics_OVRSystemPerfMetricsTcpServer>__
                      );
    DAT_04837e1f = '\x01';
  }
  lVar6 = *(long *)puVar3;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar6 = *(long *)puVar3;
  }
  lVar6 = *(long *)(lVar6 + 0xb8);
  in_stack_00000048 = *(undefined8 *)(lVar6 + 0xc0);
  in_stack_00000040 = *(undefined8 *)(lVar6 + 0xb8);
  in_stack_00000038 = *(undefined8 *)(lVar6 + 0xb0);
  in_stack_00000030 = *(undefined8 *)(lVar6 + 0xa8);
  in_stack_00000028 = *(undefined8 *)(lVar6 + 0xa0);
  in_stack_00000020 = *(undefined8 *)(lVar6 + 0x98);
  in_stack_00000018 = *(undefined8 *)(lVar6 + 0x90);
  in_stack_00000010 = *(undefined8 *)(lVar6 + 0x88);
  FUN_038cdb38(param_1,&stack0x00000010);
  if (plVar5 != (long *)0x0) {
    lVar6 = *plVar5;
    uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_038cda50;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar2,0);
LAB_038cda50:
    (*(code *)*puVar7)(plVar5,puVar7[1]);
  }
  return;
}


