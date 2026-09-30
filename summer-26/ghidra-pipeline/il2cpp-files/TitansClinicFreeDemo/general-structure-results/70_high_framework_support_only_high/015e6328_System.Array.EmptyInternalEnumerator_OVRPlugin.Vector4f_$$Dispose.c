/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector4f>$$Dispose
ENTRY_POINT: 015e6328
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


void System_Array_EmptyInternalEnumerator<OVRPlugin_Vector4f>__Dispose(ulong param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_01279b34(PTR_DAT_027b1aa8);
    thunk_FUN_01279b34(PTR_DAT_027b32e0);
    thunk_FUN_01279b34(PTR_DAT_027b4df0);
    *(undefined1 *)(unaff_x22 + 0xb6f) = 1;
  }
  lVar2 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
  if (unaff_x21 == 0) {
    puVar1 = *(undefined8 **)(lVar2 + 0x18);
  }
  else {
    lVar2 = *(long *)(lVar2 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      FUN_0122e748(lVar2);
    }
    lVar2 = thunk_FUN_0124baac();
    lVar3 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
    if (lVar2 == 0) {
      uVar4 = *(undefined8 *)(lVar3 + 0x28);
      if (*(int *)(*(long *)PTR_DAT_027b32e0 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar4 = FUN_01f7d8a0(uVar4,0);
      uVar4 = FUN_01e5bce0(*(undefined8 *)PTR_DAT_027b4df0,uVar4,0);
      if (*(int *)(*(long *)PTR_DAT_027b1aa8 + 0xe0) == 0) {
        thunk_FUN_01220628(*(long *)PTR_DAT_027b1aa8);
      }
      FUN_024023dc(uVar4,0);
      return;
    }
    puVar1 = *(undefined8 **)(lVar3 + 0x18);
  }
                    /* WARNING: Could not recover jumptable at 0x015e63bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)();
  return;
}


