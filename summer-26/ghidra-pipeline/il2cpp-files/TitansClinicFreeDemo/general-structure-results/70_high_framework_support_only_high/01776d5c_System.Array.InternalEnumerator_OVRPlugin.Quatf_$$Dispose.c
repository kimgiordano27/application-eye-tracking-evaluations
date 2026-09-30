/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Quatf>$$Dispose
ENTRY_POINT: 01776d5c
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 88
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_5
*/


void System_Array_InternalEnumerator<OVRPlugin_Quatf>__Dispose(void)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x20;
  
  lVar1 = FUN_0122e748();
  if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01230ca0();
  }
  uVar2 = (ulong)*(ushort *)(*unaff_x20 + 0x12e);
  if (uVar2 != 0) {
    lVar3 = *(long *)(*unaff_x20 + 0xb0) + 8;
    do {
      if (*(long *)(lVar3 + -8) == lVar1)
      goto System_Array_InternalEnumerator<OVRPlugin_Quatf>__get_Current;
      uVar2 = uVar2 - 1;
      lVar3 = lVar3 + 0x10;
    } while (uVar2 != 0);
  }
  FUN_0122ea3c();
System_Array_InternalEnumerator<OVRPlugin_Quatf>__get_Current:
  FUN_015cadb4();
  lVar1 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x48);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0122e748();
  }
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  System_Array_InternalEnumerator<OVRPlugin_Vector4f>__MoveNext();
  return;
}


