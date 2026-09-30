/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDebugger$$GetBestPoseFromRaycastDebugger
ENTRY_POINT: 048351ec
PROGRAM: vrfs-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_1;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SceneDebugger__GetBestPoseFromRaycastDebugger(undefined8 param_1)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  *(undefined8 *)(unaff_x19 + 0x10) = param_1;
  *(long *)(unaff_x19 + 0x28) = unaff_x20;
  *(long *)(unaff_x19 + 0x20) = unaff_x21;
  thunk_FUN_01656ef8();
  cVar1 = *(char *)(unaff_x20 + 0x52);
  *(long *)(unaff_x19 + 0x40) = unaff_x19;
  uVar2 = FUN_0160ee14();
  if ((uVar2 & 1) == 0) {
    if (unaff_x21 == 0) {
      uVar3 = thunk_FUN_015f058c(0,"Delegate to an instance method cannot have null \'this\'.");
                    /* WARNING: Subroutine does not return */
      FUN_0160ee7c(uVar3,0);
    }
LAB_04835238:
    *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(unaff_x19 + 0x10);
    *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)(unaff_x19 + 0x20);
  }
  else {
    if ((*(byte *)(unaff_x20 + 0x53) >> 4 & 1) == 0) {
      if (cVar1 != '\x01') goto LAB_04835238;
      pcVar4 = FUN_014e4ae0;
    }
    else if (cVar1 == '\x01') {
      pcVar4 = FUN_014e4af4;
    }
    else {
      pcVar4 = FUN_014e4b34;
    }
    *(code **)(unaff_x19 + 0x18) = pcVar4;
  }
  *(code **)(unaff_x19 + 0x38) = FUN_014e4a88;
  return;
}


