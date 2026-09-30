/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.AnchorStoreRaycastRoomDelegate$$EndInvoke
ENTRY_POINT: 05ae04f4
PROGRAM: vandalizer-libil2cpp.so
SCORE: 85
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreRaycastRoomDelegate__EndInvoke
               (long *param_1,long param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  *param_1 = param_2;
  thunk_FUN_0329bf60();
  if (param_2 != 0) {
    uVar1 = *(undefined4 *)(param_2 + 0x2c);
    param_1[2] = 0;
    *(undefined4 *)(param_1 + 3) = 0;
    *(undefined4 *)((long)param_1 + 0x1c) = param_3;
    *(undefined4 *)(param_1 + 1) = uVar1;
    *(undefined4 *)((long)param_1 + 0xc) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


