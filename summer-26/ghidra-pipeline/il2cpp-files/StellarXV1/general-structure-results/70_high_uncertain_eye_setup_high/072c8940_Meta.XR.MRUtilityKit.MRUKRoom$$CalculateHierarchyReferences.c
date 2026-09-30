/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$CalculateHierarchyReferences
ENTRY_POINT: 072c8940
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKRoom__CalculateHierarchyReferences(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  if (DAT_0988ba6c == '\0') {
    FUN_04077588(PTR_DAT_092ba6e8);
    DAT_0988ba6c = '\x01';
  }
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar2 = *unaff_x22;
  }
  if ((unaff_x20 != 0) && (*(long *)(unaff_x20 + 0x30) != 0)) {
    lVar2 = **(long **)(lVar2 + 0xb8);
    uVar3 = FUN_08ce5d04(*(undefined8 *)(*(long *)(unaff_x20 + 0x30) + 0x10),0);
    puVar1 = PTR_DAT_092c3720;
    if (lVar2 != 0) {
      FUN_08ce64b0(lVar2,uVar3,4,0);
      FUN_074d875c(*(undefined8 *)puVar1);
      (**(code **)(*unaff_x21 + 0x288))();
      lVar2 = (**(code **)(*unaff_x21 + 0x198))();
      if ((lVar2 != 0) && (*(long *)(lVar2 + 0xd0) != 0)) {
        FUN_0678cfe4();
      }
      lVar2 = (**(code **)(*unaff_x21 + 0x198))();
      if ((lVar2 == 0) || (*(long *)(lVar2 + 0xe0) == 0)) {
        return;
      }
      if (*(long *)(unaff_x20 + 0x30) != 0) {
        FUN_06791340(*(long *)(lVar2 + 0xe0),*(undefined8 *)(*(long *)(unaff_x20 + 0x30) + 0x18));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


