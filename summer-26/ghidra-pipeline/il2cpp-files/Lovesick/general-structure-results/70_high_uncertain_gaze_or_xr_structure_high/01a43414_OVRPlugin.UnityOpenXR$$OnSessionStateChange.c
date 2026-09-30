/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionStateChange
ENTRY_POINT: 01a43414
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_UnityOpenXR__OnSessionStateChange(void)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x22;
  long *in_stack_00000008;
  
  uVar1 = FUN_0129eff4();
  if ((uVar1 & 1) == 0) {
    lVar2 = *unaff_x22;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar2 = *unaff_x22;
    }
    lVar3 = *(long *)(lVar2 + 0xb8);
    if ((*(char *)(lVar3 + 0x10) == '\0') && (*(int *)(unaff_x19 + 0x10) == 0x773889f6)) {
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar3 = *(long *)(*unaff_x22 + 0xb8);
      }
      *(long *)(lVar3 + 0x18) = unaff_x19;
    }
  }
  else {
    if (in_stack_00000008 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    (**(code **)(*in_stack_00000008 + 0x178))();
  }
  return;
}


