/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.AnchorStoreSetBaseSpaceDelegate$$EndInvoke
ENTRY_POINT: 08a394b0
PROGRAM: Hyper-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreSetBaseSpaceDelegate__EndInvoke(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x22;
  
  FUN_04947ee4(*(undefined8 *)(param_1 + 0xcb0));
  *(undefined1 *)(unaff_x20 + 0x3b2) = 1;
  lVar2 = thunk_FUN_04983f60(*unaff_x21);
  FUN_0989e6b8(lVar2,0);
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  if (DAT_0b32c483 == '\0') {
    FUN_04947ee4(PTR_DAT_0ac52ca8);
    DAT_0b32c483 = '\x01';
  }
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_049a583c();
    lVar3 = *unaff_x22;
  }
  if (lVar2 != 0) {
    FUN_0989ec4c(lVar2,**(undefined8 **)(lVar3 + 0xb8),0);
    *(long *)(unaff_x19 + 0x10) = lVar2;
    thunk_FUN_049ee3d8((long *)(unaff_x19 + 0x10),lVar2);
    lVar2 = thunk_FUN_04983f60(*unaff_x21);
    FUN_0989e6b8(lVar2,0);
    puVar1 = PTR_DAT_0ac52cb0;
    if (lVar2 != 0) {
      FUN_0989ec80(lVar2,1,0);
      *(long *)(unaff_x19 + 0x18) = lVar2;
      thunk_FUN_049ee3d8((long *)(unaff_x19 + 0x18),lVar2);
      *(undefined8 *)(unaff_x19 + 0x20) = *(undefined8 *)puVar1;
      thunk_FUN_049ee3d8((undefined8 *)(unaff_x19 + 0x20));
      FUN_08dbf2f0();
      FUN_08a395bc();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


