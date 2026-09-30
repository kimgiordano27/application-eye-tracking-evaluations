/*
FUNCTION_NAME: System.ArraySegment<OVRPlugin.Vector4s>$$get_Array
ENTRY_POINT: 04153044
PROGRAM: vandalizer-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_ArraySegment<OVRPlugin_Vector4s>__get_Array(void)

{
  long lVar1;
  undefined8 uVar2;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  
  lVar1 = thunk_FUN_0322f04c();
  if (lVar1 != 0) {
    lVar1 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x48);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      FUN_0322bef4(lVar1);
    }
    lVar1 = thunk_FUN_0322f04c();
    if (lVar1 != 0) {
      lVar1 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x48);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_0322bef4(lVar1);
      }
      if (*(long *)(*unaff_x22 + 0x40) == *(long *)(lVar1 + 0x40)) {
        thunk_FUN_0322f29c();
        lVar1 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x48);
        if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_0322bef4(lVar1);
        }
        if (*(long *)(*unaff_x20 + 0x40) == *(long *)(lVar1 + 0x40)) {
          thunk_FUN_0322f29c();
                    /* WARNING: Could not recover jumptable at 0x0415311c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar2 = (**(code **)(*unaff_x19 + 0x1b8))();
          return uVar2;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_031f2730();
    }
  }
  FUN_05e223a8(2,0);
  return 0;
}


