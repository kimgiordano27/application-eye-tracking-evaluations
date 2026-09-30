/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 04d92468
PROGRAM: Waifu-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__System_Collections_IEnumerable_GetEnumerator
               (long *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((*(byte *)(*(long *)(param_2 + 0x20) + 0x135) & 1) == 0) {
    FUN_0338f618(*(long *)(param_2 + 0x20));
  }
  lVar4 = *param_1;
  if (lVar4 != 0) {
    iVar1 = *(int *)((long)param_1 + 0xc);
    if (iVar1 == 0) {
      FUN_033d1ba8(&DAT_083cdc60);
      uVar2 = thunk_FUN_03398a84();
      uVar3 = FUN_033d1ba8(&DAT_08447ea8);
      FUN_0682eb84(uVar2,uVar3,0);
                    /* WARNING: Subroutine does not return */
      FUN_033d1c20(uVar2,param_2);
    }
    if (1 < iVar1) {
      if (DAT_086ed1a0 == (code *)0x0) {
        DAT_086ed1a0 = (code *)FUN_033d1b68(
                                           "Unity.Collections.LowLevel.Unsafe.UnsafeUtility::FreeTracked(System.Void*,Unity.Collections.Allocator)"
                                           );
      }
      (*DAT_086ed1a0)(lVar4,iVar1);
      *(undefined4 *)((long)param_1 + 0xc) = 0;
    }
    *param_1 = 0;
  }
  return;
}


