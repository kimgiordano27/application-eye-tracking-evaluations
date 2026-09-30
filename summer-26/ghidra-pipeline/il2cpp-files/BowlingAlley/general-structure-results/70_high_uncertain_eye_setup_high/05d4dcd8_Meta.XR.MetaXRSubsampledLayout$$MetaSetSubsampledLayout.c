/*
FUNCTION_NAME: Meta.XR.MetaXRSubsampledLayout$$MetaSetSubsampledLayout
ENTRY_POINT: 05d4dcd8
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MetaXRSubsampledLayout__MetaSetSubsampledLayout
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3)

{
  long lVar1;
  long in_x9;
  long lVar2;
  long *unaff_x19;
  long unaff_x20;
  long lVar3;
  undefined4 uVar4;
  
  if (((*(long *)(in_x9 + 0x10) != 0) && (*(long *)(in_x9 + 0x18) != 0)) && (*unaff_x19 != 0)) {
    FUN_05d05424(*(long *)(in_x9 + 0x10) + 0x20,*(long *)(in_x9 + 0x18) + 0x20,*unaff_x19 + 0x20,0);
    lVar2 = *(long *)(unaff_x20 + 0x20);
    if (((lVar2 != 0) && (lVar1 = *(long *)(lVar2 + 0x10), lVar1 != 0)) &&
       (lVar2 = *(long *)(lVar2 + 0x18), lVar2 != 0)) {
      lVar3 = *unaff_x19;
      if (*(int *)(*(long *)PTR_DAT_072ae838 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar4 = FUN_05d4e374(lVar1 + 0x3c,lVar2 + 0x3c);
      if (lVar3 != 0) {
        *(undefined4 *)(lVar3 + 0x3c) = uVar4;
        *(undefined4 *)(lVar3 + 0x40) = param_2;
        *(undefined4 *)(lVar3 + 0x44) = param_3;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


