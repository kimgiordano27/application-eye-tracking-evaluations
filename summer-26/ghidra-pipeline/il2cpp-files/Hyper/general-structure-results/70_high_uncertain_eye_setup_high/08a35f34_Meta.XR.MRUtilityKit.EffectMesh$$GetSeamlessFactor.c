/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.EffectMesh$$GetSeamlessFactor
ENTRY_POINT: 08a35f34
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_EffectMesh__GetSeamlessFactor(void)

{
  undefined8 uVar1;
  int in_w8;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  
  if (in_w8 == 0) {
    thunk_FUN_049a583c();
  }
  uVar1 = FUN_08d59ac8(0);
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    uVar1 = FUN_08d5b404(uVar1,*(undefined8 *)(*(long *)(unaff_x19 + 0x10) + 0x88),0);
    *(undefined8 *)(unaff_x20 + 0x80) = uVar1;
    lVar2 = *(long *)(unaff_x19 + 0x18);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
    }
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      lVar2 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x38);
      if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x08a35f9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),1,*(undefined8 *)(lVar2 + 0x28));
        return;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


