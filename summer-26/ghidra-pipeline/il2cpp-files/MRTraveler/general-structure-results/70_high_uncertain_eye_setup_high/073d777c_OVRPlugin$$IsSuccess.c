/*
FUNCTION_NAME: OVRPlugin$$IsSuccess
ENTRY_POINT: 073d777c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__IsSuccess(void)

{
  long lVar1;
  long *plVar2;
  long unaff_x19;
  long lVar3;
  undefined8 uVar4;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  lVar3 = *(long *)(*(long *)(lVar1 + 0xb8) + 8);
  if (lVar3 == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    lVar3 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08eb5b20);
    System_Array_InternalEnumerator<Dictionary_Entry<object,_OvrGpuMorphTargetsCombiner_BlockData>>___ctor
              (lVar3,uVar4,*(undefined8 *)PTR_DAT_08eb5b30,0);
    plVar2 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 8);
    *plVar2 = lVar3;
    thunk_FUN_03d233cc(plVar2,lVar3);
  }
  *(long *)(unaff_x19 + 0x178) = lVar3;
  thunk_FUN_03d233cc(unaff_x19 + 0x178,lVar3);
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
    lVar1 = *unaff_x22;
  }
  lVar3 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x10);
  if (lVar3 == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    lVar3 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08eb5b20);
    System_Array_InternalEnumerator<Dictionary_Entry<object,_OvrGpuMorphTargetsCombiner_BlockData>>___ctor
              (lVar3,uVar4,*(undefined8 *)PTR_DAT_08eb5b38,0);
    plVar2 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
    *plVar2 = lVar3;
    thunk_FUN_03d233cc(plVar2,lVar3);
  }
  *(long *)(unaff_x19 + 0x180) = lVar3;
  thunk_FUN_03d233cc(unaff_x19 + 0x180,lVar3);
  FUN_04ec3888();
  return;
}


