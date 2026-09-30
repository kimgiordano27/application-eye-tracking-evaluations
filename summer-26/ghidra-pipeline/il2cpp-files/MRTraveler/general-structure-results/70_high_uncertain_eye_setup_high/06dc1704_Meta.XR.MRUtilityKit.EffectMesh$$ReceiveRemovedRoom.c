/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.EffectMesh$$ReceiveRemovedRoom
ENTRY_POINT: 06dc1704
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_EffectMesh__ReceiveRemovedRoom(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  long lVar2;
  undefined8 *unaff_x21;
  
  uVar1 = FUN_06f683f8(*param_1);
  FUN_06dfdd34(uVar1,0);
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    lVar2 = *(long *)(unaff_x19 + 0x20);
    uVar1 = FUN_05212a24(*(long *)(unaff_x19 + 0x28),*(undefined4 *)(unaff_x19 + 0x40),*unaff_x21);
    if (lVar2 != 0) {
      FUN_0859358c(lVar2,uVar1,0);
      lVar2 = *(long *)(unaff_x19 + 0x70);
      if (lVar2 != 0) {
        (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
      }
      if (*(long *)(unaff_x19 + 0x48) != 0) {
        FUN_05212a24(*(long *)(unaff_x19 + 0x48),*(undefined4 *)(unaff_x19 + 0x40),
                     *(undefined8 *)PTR_DAT_08e8cf18);
        FUN_06dc17c0();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


