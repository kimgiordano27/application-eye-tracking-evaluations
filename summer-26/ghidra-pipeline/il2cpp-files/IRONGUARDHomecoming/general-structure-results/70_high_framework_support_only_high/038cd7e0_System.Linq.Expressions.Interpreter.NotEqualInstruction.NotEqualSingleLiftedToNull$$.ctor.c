/*
FUNCTION_NAME: System.Linq.Expressions.Interpreter.NotEqualInstruction.NotEqualSingleLiftedToNull$$.ctor
ENTRY_POINT: 038cd7e0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 76
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x038cda7c) */

void System_Linq_Expressions_Interpreter_NotEqualInstruction_NotEqualSingleLiftedToNull___ctor(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  int iVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x23;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  
  *(undefined1 *)(unaff_x21 + 0x6b) = 1;
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  plVar4 = (long *)FUN_03825b0c();
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*unaff_x23);
  }
  FUN_038968d0(0);
  if (DAT_04838076 == '\0') {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Component_GetComponent<OVRSystemPerfMetrics_OVRSystemPerfMetricsTcpServer>__
                      );
    DAT_04838076 = '\x01';
  }
  lVar5 = *unaff_x23;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar5 = *unaff_x23;
  }
  *(undefined4 *)(*(long *)(lVar5 + 0xb8) + 0x108) = 2;
  puVar3 = 
  Method_UnityEngine_Component_GetComponent<OVRSystemPerfMetrics_OVRSystemPerfMetricsTcpServer>__;
  uVar12 = *(undefined4 *)(unaff_x20 + 0x24);
  if (DAT_04838078 == '\0') {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Component_GetComponent<OVRSystemPerfMetrics_OVRSystemPerfMetricsTcpServer>__
                      );
    lVar5 = *(long *)puVar3;
    DAT_04838078 = '\x01';
  }
  iVar7 = *(int *)(lVar5 + 0xe0);
  if (iVar7 == 0) {
    thunk_FUN_01ee6d7c();
    lVar5 = *unaff_x23;
    iVar7 = *(int *)(lVar5 + 0xe0);
  }
  *(undefined4 *)(*(long *)(lVar5 + 0xb8) + 0x18c) = uVar12;
  bVar1 = *(byte *)(unaff_x20 + 0x54);
  if (iVar7 == 0) {
    thunk_FUN_01ee6d7c();
  }
  if (DAT_04838080 == '\0') {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Component_GetComponent<OVRSystemPerfMetrics_OVRSystemPerfMetricsTcpServer>__
                      );
    DAT_04838080 = '\x01';
  }
  lVar5 = *unaff_x23;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar5 = *unaff_x23;
  }
  *(uint *)(*(long *)(lVar5 + 0xb8) + 0x1a0) = (uint)bVar1 << 1;
  puVar3 = 
  Method_UnityEngine_Component_GetComponent<OVRSystemPerfMetrics_OVRSystemPerfMetricsTcpServer>__;
  if (DAT_04838091 == '\0') {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Component_GetComponent<OVRSystemPerfMetrics_OVRSystemPerfMetricsTcpServer>__
                      );
    lVar5 = *(long *)puVar3;
    DAT_04838091 = '\x01';
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar5 = *unaff_x23;
  }
  *(undefined4 *)(*(long *)(lVar5 + 0xb8) + 400) = 0;
  puVar3 = 
  Method_UnityEngine_Component_GetComponent<OVRSystemPerfMetrics_OVRSystemPerfMetricsTcpServer>__;
  uVar11 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x28);
  if (DAT_04837e42 == '\0') {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Component_GetComponent<OVRSystemPerfMetrics_OVRSystemPerfMetricsTcpServer>__
                      );
    lVar5 = *(long *)puVar3;
    DAT_04837e42 = '\x01';
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar5 = *unaff_x23;
  }
  lVar5 = *(long *)(lVar5 + 0xb8);
  *(undefined8 *)(lVar5 + 0x100) = uVar11;
  *(undefined8 *)(lVar5 + 0xf8) = uVar10;
  FUN_0406de20(*(undefined4 *)(unaff_x20 + 0x38),0);
  *(undefined4 *)(unaff_x20 + 0x58) = 0;
  if (DAT_04837e1f == '\0') {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Component_GetComponent<OVRSystemPerfMetrics_OVRSystemPerfMetricsTcpServer>__
                      );
    DAT_04837e1f = '\x01';
  }
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_038cdb38();
  if (plVar4 != (long *)0x0) {
    lVar5 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_038cda50;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar2,0);
LAB_038cda50:
    (*(code *)*puVar6)(plVar4,puVar6[1]);
  }
  return;
}


