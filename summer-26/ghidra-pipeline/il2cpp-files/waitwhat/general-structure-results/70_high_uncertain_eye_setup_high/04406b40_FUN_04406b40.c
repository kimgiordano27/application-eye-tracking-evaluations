/*
FUNCTION_NAME: FUN_04406b40
ENTRY_POINT: 04406b40
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_04406b40(long param_1,int param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  FUN_05971910(param_1,0);
  if (param_2 < 0) {
    LipSyncMicInput__CanStartMic(0xc,4,0);
  }
  else if (param_2 == 0) {
    lVar1 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x10);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_031c09d4();
    }
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    lVar1 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x10);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_031c09d4();
    }
    uVar2 = **(undefined8 **)(lVar1 + 0xb8);
    goto System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>__InsertRange;
  }
  lVar1 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x18);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_031c09d4();
  }
  uVar2 = FUN_03188b1c(lVar1,param_2);
System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>__InsertRange:
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  return;
}


