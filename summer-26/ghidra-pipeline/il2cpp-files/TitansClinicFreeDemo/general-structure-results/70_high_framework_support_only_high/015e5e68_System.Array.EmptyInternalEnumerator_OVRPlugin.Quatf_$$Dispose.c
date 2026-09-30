/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Quatf>$$Dispose
ENTRY_POINT: 015e5e68
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_Quatf>__Dispose(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  
  thunk_FUN_01279b34();
  thunk_FUN_01279b34(PTR_DAT_027b4df0);
  *(undefined1 *)(unaff_x22 + 0xb6e) = 1;
  if (unaff_x21 != 0) {
    lVar1 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      FUN_0122e748(lVar1);
    }
    lVar1 = thunk_FUN_0124baac();
    if (lVar1 == 0) {
      uVar2 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28);
      if (*(int *)(*(long *)PTR_DAT_027b32e0 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar2 = FUN_01f7d8a0(uVar2,0);
      uVar2 = FUN_01e5bce0(*(undefined8 *)PTR_DAT_027b4df0,uVar2,0);
      if (*(int *)(*(long *)PTR_DAT_027b1aa8 + 0xe0) == 0) {
        thunk_FUN_01220628(*(long *)PTR_DAT_027b1aa8);
      }
      FUN_024023dc(uVar2,0);
      return;
    }
  }
  FUN_015e5f60();
  return;
}


