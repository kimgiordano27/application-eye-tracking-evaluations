/*
FUNCTION_NAME: System.Linq.Expressions.Interpreter.LessThanOrEqualInstruction.LessThanOrEqualSingle$$Run
ENTRY_POINT: 038b44fc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x038b45a8) */

void System_Linq_Expressions_Interpreter_LessThanOrEqualInstruction_LessThanOrEqualSingle__Run
               (long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  int *piVar4;
  long *unaff_x19;
  long *unaff_x20;
  undefined1 in_q3 [16];
  
  *(long *)(param_1 + 0x90) = in_q3._8_8_;
  *(long *)(param_1 + 0x88) = in_q3._0_8_;
  lVar1 = FUN_038b3ca0();
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  FUN_0407c270(lVar1,0);
  (**(code **)(*unaff_x20 + 0x1a8))();
  if (unaff_x19 != (long *)0x0) {
    lVar1 = *unaff_x19;
    uVar3 = (ulong)*(ushort *)(lVar1 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar2 = (undefined8 *)(lVar1 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_038b4580;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_038b4580:
    (*(code *)*puVar2)();
  }
  return;
}


