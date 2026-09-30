/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$set_AnchorRemovedEvent
ENTRY_POINT: 072c7ba0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKRoom__set_AnchorRemovedEvent(ulong param_1)

{
  long lVar1;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long lVar2;
  undefined8 uVar3;
  
  if ((param_1 & 1) == 0) {
    FUN_04077588(PTR_DAT_092c2b68);
    FUN_04077588(PTR_DAT_092c36b8);
    FUN_04077588(PTR_DAT_092c36c0);
    FUN_04077588(PTR_DAT_092c2bc0);
    *(undefined1 *)(unaff_x22 + 0xa26) = 1;
  }
  if (*unaff_x19 == 0) {
    lVar2 = *(long *)PTR_DAT_092c2b68;
    lVar1 = *(long *)(lVar2 + 0x38);
    if (lVar1 == 0) {
      FUN_040b1b28(lVar2);
      lVar1 = *(long *)(lVar2 + 0x38);
    }
    lVar1 = *(long *)(lVar1 + 0x10);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_040b1acc();
    }
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    lVar1 = *(long *)(*(long *)(lVar2 + 0x38) + 0x10);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_040b1acc();
    }
    uVar3 = **(undefined8 **)(lVar1 + 0xb8);
    lVar1 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c2bc0);
    FUN_073436a0(lVar1,uVar3,0);
    *unaff_x19 = lVar1;
    thunk_FUN_040ec700();
  }
  if (*unaff_x21 == 0) {
    lVar1 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c36c0);
    FUN_072c7cfc();
    *unaff_x21 = lVar1;
    thunk_FUN_040ec700();
  }
  if ((char)unaff_x20[5] != '\0') {
    lVar1 = (**(code **)(*unaff_x20 + 0x198))();
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(long *)(lVar1 + 0x18) != 0) {
      FUN_0678cfe4(*(long *)(lVar1 + 0x18),*unaff_x19,*(undefined8 *)PTR_DAT_092c36b8);
      return;
    }
  }
  return;
}


