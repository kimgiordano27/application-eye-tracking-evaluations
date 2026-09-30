/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.DebugGizmos.ColorScope$$Dispose
ENTRY_POINT: 05f4b27c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_ImmersiveDebugger_Gizmo_DebugGizmos_ColorScope__Dispose(void)

{
  long lVar1;
  undefined8 uVar2;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  
  lVar1 = thunk_FUN_037787d0();
  if (lVar1 == 0) {
    FUN_062638b4(2,0);
    return 0;
  }
  lVar1 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x48);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03775678(lVar1);
  }
  if (*(long *)(*unaff_x22 + 0x40) == *(long *)(lVar1 + 0x40)) {
    thunk_FUN_03778a20();
    lVar1 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x48);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03775678(lVar1);
    }
    if (*(long *)(*unaff_x20 + 0x40) == *(long *)(lVar1 + 0x40)) {
      thunk_FUN_03778a20();
                    /* WARNING: Could not recover jumptable at 0x05f4b324. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*unaff_x19 + 0x1b8))();
      return uVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373bb54();
}


