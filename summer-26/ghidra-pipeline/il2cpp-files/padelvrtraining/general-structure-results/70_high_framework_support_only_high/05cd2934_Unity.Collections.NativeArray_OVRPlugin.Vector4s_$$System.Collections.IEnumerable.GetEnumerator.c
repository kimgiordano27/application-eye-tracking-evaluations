/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 05cd2934
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05cd2a20) */

void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__System_Collections_IEnumerable_GetEnumerator
               (long param_1,long param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  char cStack000000000000000c;
  
  uVar3 = *(undefined8 *)(param_1 + 0xb8);
  cStack000000000000000c = '\0';
  FUN_071e78b0(uVar3,&stack0x0000000c,0);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  if (0 < (int)*(ulong *)(param_2 + 0x18)) {
    uVar5 = 0;
    uVar2 = *(ulong *)(param_2 + 0x18) & 0xffffffff;
    do {
      if (uVar2 <= uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d550();
      }
      if (*(long *)(param_1 + 0x110) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      uVar4 = *(undefined8 *)(param_2 + 0x20 + uVar5 * 8);
      iVar1 = FUN_05a3a438(*(long *)(param_1 + 0x110),uVar4,
                           *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x48));
      if (-1 < iVar1) {
        if (iVar1 < *(int *)(param_1 + 0x108)) {
          *(int *)(param_1 + 0x108) = *(int *)(param_1 + 0x108) + -1;
        }
        if (*(long *)(param_1 + 0x110) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d548();
        }
        FUN_05a3acc0(*(long *)(param_1 + 0x110),uVar4,
                     *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x50));
      }
      uVar2 = (ulong)*(uint *)(param_2 + 0x18);
      uVar5 = uVar5 + 1;
    } while ((long)uVar5 < (long)(int)*(uint *)(param_2 + 0x18));
  }
  if (cStack000000000000000c != '\0') {
    thunk_FUN_03d180a8(uVar3,0);
  }
  return;
}


