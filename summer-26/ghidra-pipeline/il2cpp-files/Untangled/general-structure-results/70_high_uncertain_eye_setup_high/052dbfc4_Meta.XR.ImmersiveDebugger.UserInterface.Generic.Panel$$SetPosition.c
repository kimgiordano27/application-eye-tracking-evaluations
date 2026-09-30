/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Panel$$SetPosition
ENTRY_POINT: 052dbfc4
PROGRAM: Untangled-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


long Meta_XR_ImmersiveDebugger_UserInterface_Generic_Panel__SetPosition
               (undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_06d3d7c8;
  if ((DAT_071c110a & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d3d7c8);
    DAT_071c110a = 1;
  }
  lVar2 = thunk_FUN_02ef1808(*(undefined8 *)puVar1);
  FUN_052dd248(lVar2,0,0);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x20) = param_2;
    thunk_FUN_02f411dc((undefined8 *)(lVar2 + 0x20),param_2);
    *(undefined8 *)(lVar2 + 0x28) = param_3;
    thunk_FUN_02f411dc((undefined8 *)(lVar2 + 0x28),param_3);
    *(undefined4 *)(lVar2 + 0x30) = param_1;
    *(undefined4 *)(lVar2 + 0x34) = param_4;
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


