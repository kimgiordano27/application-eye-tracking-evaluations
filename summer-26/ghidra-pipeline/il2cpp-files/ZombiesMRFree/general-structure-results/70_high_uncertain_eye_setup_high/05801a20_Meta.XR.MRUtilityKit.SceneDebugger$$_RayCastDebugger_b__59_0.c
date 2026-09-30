/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDebugger$$<RayCastDebugger>b__59_0
ENTRY_POINT: 05801a20
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SceneDebugger__<RayCastDebugger>b__59_0
               (long param_1,long param_2,long param_3)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_3 + 8);
  *(long *)(param_1 + 0x28) = param_3;
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  *(long *)(param_1 + 0x20) = param_2;
  thunk_FUN_03048534();
  cVar1 = *(char *)(param_3 + 0x52);
  *(long *)(param_1 + 0x40) = param_1;
  uVar2 = FUN_02fe9358(param_3);
  if ((uVar2 & 1) == 0) {
    if (param_2 == 0) {
      uVar3 = thunk_FUN_03022100(0,"Delegate to an instance method cannot have null \'this\'.");
                    /* WARNING: Subroutine does not return */
      FUN_02fe93c0(uVar3,0);
    }
  }
  else if (cVar1 == '\x01') {
    *(code **)(param_1 + 0x18) = FUN_02c846c0;
    goto LAB_05801a8c;
  }
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x20);
LAB_05801a8c:
  *(code **)(param_1 + 0x38) = FUN_02c84640;
  return;
}


