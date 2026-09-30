/*
FUNCTION_NAME: FUN_01a7f570
ENTRY_POINT: 01a7f570
PROGRAM: Lovesick-libil2cpp.so
SCORE: 90
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_01a7f570(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  
  puVar2 = Method_System_Nullable<MRUKAnchor_SceneLabels>_get_Value__;
  if ((DAT_0377cca4 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Nullable<MRUKAnchor_SceneLabels>_get_Value__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                      );
    thunk_FUN_00d48444(PTR_DAT_033f2ad0);
    thunk_FUN_00d48444(GoogleSheetsToUnity_GoogleAuthrisationHelper_TypeInfo);
    DAT_0377cca4 = 1;
  }
  puVar1 = PTR_DAT_033f2ad0;
  FUN_017b46ec(param_1,0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar4 = FUN_01a564ec(param_2,0);
  *(undefined8 *)(param_1 + 0x10) = uVar4;
  uVar4 = FUN_01a565c0(param_2,0);
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  uVar4 = FUN_01a566a8(param_2,0);
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  uVar3 = OVRPlugin_<>c__<_cctor>b__796_68(param_2,0);
  *(undefined4 *)(param_1 + 0x28) = uVar3;
  uVar4 = FUN_01a567a0(param_2,0);
  *(undefined8 *)(param_1 + 0x30) = uVar4;
  uVar4 = FUN_01a5681c(param_2,0);
  lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  puVar1 = Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__;
  if (lVar5 != 0) {
    FUN_01a7f71c(lVar5,uVar4);
    *(long *)(param_1 + 0x40) = lVar5;
    uVar6 = FUN_017b4f64(uVar4,**(undefined8 **)(*(long *)puVar1 + 0xb8),0);
    if ((uVar6 & 1) == 0) {
      *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x40);
    }
    else {
      *(undefined8 *)(param_1 + 0x38) = 0;
    }
    puVar1 = GoogleSheetsToUnity_GoogleAuthrisationHelper_TypeInfo;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar4 = FUN_01a56898(param_2,0);
    *(undefined8 *)(param_1 + 0x48) = uVar4;
    uVar4 = FUN_01a5696c(param_2,0);
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar5 != 0) {
      FUN_01a7dbcc(lVar5,uVar4);
      *(long *)(param_1 + 0x50) = lVar5;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


