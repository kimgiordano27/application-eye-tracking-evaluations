/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.PanelRaycaster$$get_IsValid
ENTRY_POINT: 057a4038
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;functionality_gaze_retrieval_or_extraction
*/


void Meta_XR_ImmersiveDebugger_UserInterface_PanelRaycaster__get_IsValid
               (undefined8 param_1,long param_2,long param_3,long param_4)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long unaff_x19;
  
  *(long *)(param_2 + 0x28) = param_4;
  *(undefined8 *)(param_2 + 0x10) = param_1;
  *(long *)(param_2 + 0x20) = param_3;
  thunk_FUN_03048534();
  cVar1 = *(char *)(param_4 + 0x52);
  *(long *)(unaff_x19 + 0x40) = unaff_x19;
  uVar2 = FUN_02fe9358(param_4);
  if ((uVar2 & 1) == 0) {
    if (cVar1 != '\x04') {
      if (param_3 == 0) {
        uVar3 = thunk_FUN_03022100(0,"Delegate to an instance method cannot have null \'this\'.");
                    /* WARNING: Subroutine does not return */
        FUN_02fe93c0(uVar3,0);
      }
      goto LAB_057a4094;
    }
    pcVar4 = FUN_02c61ce8;
  }
  else {
    if (cVar1 != '\x05') {
LAB_057a4094:
      *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(unaff_x19 + 0x10);
      *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)(unaff_x19 + 0x20);
      goto LAB_057a40a4;
    }
    pcVar4 = FUN_02c61d08;
  }
  *(code **)(unaff_x19 + 0x18) = pcVar4;
LAB_057a40a4:
  *(code **)(unaff_x19 + 0x38) = FUN_02c61c70;
  return;
}


