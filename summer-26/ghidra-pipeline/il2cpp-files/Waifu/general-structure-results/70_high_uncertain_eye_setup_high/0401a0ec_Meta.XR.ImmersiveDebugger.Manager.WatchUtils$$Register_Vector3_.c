/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.WatchUtils$$Register<Vector3>
ENTRY_POINT: 0401a0ec
PROGRAM: Waifu-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_ImmersiveDebugger_Manager_WatchUtils__Register<Vector3>(void)

{
  char in_NG;
  char in_OV;
  long lVar1;
  undefined8 uVar2;
  long *unaff_x20;
  int iVar3;
  long unaff_x26;
  undefined1 auVar4 [16];
  
  if (in_NG == in_OV) {
    iVar3 = 0;
    do {
      lVar1 = FUN_05a1d0b0();
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      auVar4 = (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40));
      if ((auVar4._0_8_ & 0xff) != 0) {
        return auVar4._8_8_;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(unaff_x26 + 0x1d8));
  }
  FUN_05a1d50c();
                    /* WARNING: Could not recover jumptable at 0x0401a26c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*unaff_x20 + 0x288))();
  return uVar2;
}


