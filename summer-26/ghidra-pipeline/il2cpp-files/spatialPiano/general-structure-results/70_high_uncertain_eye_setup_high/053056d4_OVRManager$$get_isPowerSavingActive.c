/*
FUNCTION_NAME: OVRManager$$get_isPowerSavingActive
ENTRY_POINT: 053056d4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_isPowerSavingActive(long param_1)

{
  int iVar1;
  undefined4 in_w8;
  undefined8 *puVar2;
  long unaff_x19;
  long lVar3;
  undefined8 uVar4;
  long *unaff_x22;
  undefined4 uVar5;
  
  iVar1 = *(int *)(param_1 + 0xe4);
  *(ulong *)(unaff_x19 + 0x50) = CONCAT44(in_w8,in_w8) & 0xffff0000ffff | 0x3e4c00003e4c0000;
  if (iVar1 == 0) {
    thunk_FUN_02f6670c();
    param_1 = *unaff_x22;
  }
  puVar2 = *(undefined8 **)(param_1 + 0xb8);
  lVar3 = puVar2[1];
  if (lVar3 == 0) {
    if (*(int *)(param_1 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      puVar2 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar4 = *puVar2;
    lVar3 = thunk_FUN_02f45270(*(undefined8 *)
                                UnityEngine_UIElements_StyleValuePropertyBag<StyleList<StylePropertyName>,_List<StylePropertyName>>_TypeInfo
                              );
    FUN_04df8988(lVar3,uVar4,*(undefined8 *)System_Data_DataError_TypeInfo,0);
    param_1 = *unaff_x22;
    *(long *)(*(long *)(param_1 + 0xb8) + 8) = lVar3;
  }
  iVar1 = *(int *)(param_1 + 0xe4);
  *(long *)(unaff_x19 + 0x58) = lVar3;
  if (iVar1 == 0) {
    thunk_FUN_02f6670c();
    param_1 = *unaff_x22;
  }
  puVar2 = *(undefined8 **)(param_1 + 0xb8);
  lVar3 = puVar2[2];
  if (lVar3 == 0) {
    if (*(int *)(param_1 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      puVar2 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar4 = *puVar2;
    lVar3 = thunk_FUN_02f45270(*(undefined8 *)
                                UnityEngine_UIElements_StyleValuePropertyBag<StyleList<StylePropertyName>,_List<StylePropertyName>>_TypeInfo
                              );
    FUN_04df8988(lVar3,uVar4,*(undefined8 *)System_Data_DataException_TypeInfo,0);
    *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x10) = lVar3;
  }
  *(long *)(unaff_x19 + 0x60) = lVar3;
  if (DAT_06bb42c1 == '\0') {
    FUN_02f08768(PTR_DAT_067c8f78);
    DAT_06bb42c1 = '\x01';
  }
  uVar5 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_067c8f78 + 0xb8) + 1);
  *(undefined8 *)(unaff_x19 + 0x6c) = **(undefined8 **)(*(long *)PTR_DAT_067c8f78 + 0xb8);
  *(undefined4 *)(unaff_x19 + 0x74) = uVar5;
  thunk_FUN_060ed17c();
  return;
}


