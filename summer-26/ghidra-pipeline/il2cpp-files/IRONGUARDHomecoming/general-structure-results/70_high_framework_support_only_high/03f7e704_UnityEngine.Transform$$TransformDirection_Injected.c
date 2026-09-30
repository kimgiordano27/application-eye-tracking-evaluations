/*
FUNCTION_NAME: UnityEngine.Transform$$TransformDirection_Injected
ENTRY_POINT: 03f7e704
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x03f7e838) */

void UnityEngine_Transform__TransformDirection_Injected(long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  int *piVar5;
  int unaff_w20;
  long lVar6;
  long unaff_x23;
  
  uVar4 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar2 = (undefined8 *)(param_1 + (long)*piVar5 * 0x10 + 0x138);
        goto code_r0x03f7e764;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_01ecb238();
code_r0x03f7e764:
  (*(code *)*puVar2)();
  puVar1 = Method_Unity_Collections_NativeArray<byte>_ToArray__;
  if (unaff_x23 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01eed990();
  }
  if (unaff_w20 != 1) {
    FUN_02c7a3ec(&stack0x00000020,*(undefined8 *)PTR_DAT_045816b8);
                    /* WARNING: Subroutine does not return */
    FUN_01fbfd14();
  }
  plVar3 = (long *)__cxa_begin_catch();
  lVar6 = *plVar3;
  __cxa_end_catch();
  FUN_02c7a3ec(&stack0x00000020,*(undefined8 *)PTR_DAT_045816b8);
  if (lVar6 == 0) {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_0403f2cc();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01eed990(lVar6);
}


