/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDebugger$$<GetBestPoseFromRaycastDebugger>b__58_0
ENTRY_POINT: 05801550
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SceneDebugger__<GetBestPoseFromRaycastDebugger>b__58_0
               (undefined8 param_1,long param_2,long param_3)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  long unaff_x19;
  long unaff_x21;
  
  *(undefined8 *)(param_2 + 0x10) = param_1;
  *(long *)(param_2 + 0x20) = param_3;
  thunk_FUN_03048534();
  cVar1 = *(char *)(unaff_x21 + 0x52);
  *(long *)(unaff_x19 + 0x40) = unaff_x19;
  uVar2 = FUN_02fe9358();
  if ((uVar2 & 1) == 0) {
    if (param_3 == 0) {
      uVar3 = thunk_FUN_03022100(0,"Delegate to an instance method cannot have null \'this\'.");
                    /* WARNING: Subroutine does not return */
      FUN_02fe93c0(uVar3,0);
    }
  }
  else if (cVar1 == '\x01') {
    *(code **)(unaff_x19 + 0x18) = FUN_02c84370;
    goto LAB_058015a0;
  }
  *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(unaff_x19 + 0x10);
  *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)(unaff_x19 + 0x20);
LAB_058015a0:
  *(code **)(unaff_x19 + 0x38) = FUN_02c84310;
  return;
}


