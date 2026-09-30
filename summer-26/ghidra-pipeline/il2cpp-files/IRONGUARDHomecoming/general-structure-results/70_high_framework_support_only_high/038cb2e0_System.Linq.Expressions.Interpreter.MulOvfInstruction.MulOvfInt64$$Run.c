/*
FUNCTION_NAME: System.Linq.Expressions.Interpreter.MulOvfInstruction.MulOvfInt64$$Run
ENTRY_POINT: 038cb2e0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 79
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x038cb458) */

void System_Linq_Expressions_Interpreter_MulOvfInstruction_MulOvfInt64__Run(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  long unaff_x20;
  long lVar6;
  long unaff_x21;
  long *plVar7;
  long *unaff_x22;
  long unaff_x23;
  float fVar8;
  
  plVar7 = *(long **)(unaff_x21 + 0x2d0);
  thunk_FUN_01efb3a4(plVar7);
  lVar2 = *plVar7;
  *(undefined1 *)(unaff_x23 + 0x76) = 1;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar2 = *unaff_x22;
  }
  *(undefined4 *)(*(long *)(lVar2 + 0xb8) + 0x108) = 1;
  puVar1 = 
  Method_UnityEngine_Component_GetComponent<OVRSystemPerfMetrics_OVRSystemPerfMetricsTcpServer>__;
  if (DAT_04838080 == '\0') {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Component_GetComponent<OVRSystemPerfMetrics_OVRSystemPerfMetricsTcpServer>__
                      );
    lVar2 = *(long *)puVar1;
    DAT_04838080 = '\x01';
  }
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar2 = *unaff_x22;
  }
  *(undefined4 *)(*(long *)(lVar2 + 0xb8) + 0x1a0) = 0;
  if (*(long *)(unaff_x20 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  FUN_038ca848();
  if (*(long *)(unaff_x20 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar2 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x40);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (*(long *)(unaff_x20 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  fVar8 = *(float *)(unaff_x20 + 0x94) + *(float *)(unaff_x20 + 0x98) * *(float *)(lVar2 + 0x20);
  FUN_038c8ea8(fVar8);
  if (*(long *)(unaff_x20 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  FUN_038c9468(fVar8);
  if (*(long *)(unaff_x20 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar6 = *(long *)(unaff_x20 + 0x50);
  lVar2 = FUN_04070398(*(long *)(unaff_x20 + 0x28),0);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  FUN_0407d840(lVar2,0);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  FUN_038c9d60(lVar6);
  if (unaff_x19 != (long *)0x0) {
    lVar2 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar3 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_038cb430;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238();
LAB_038cb430:
    (*(code *)*puVar3)();
  }
  return;
}


