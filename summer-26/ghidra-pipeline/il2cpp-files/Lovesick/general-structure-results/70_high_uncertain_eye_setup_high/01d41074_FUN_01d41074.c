/*
FUNCTION_NAME: FUN_01d41074
ENTRY_POINT: 01d41074
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_01d41074(long param_1)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  long local_28;
  
  if ((DAT_0377f4b7 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_PointerInteractable<HandGrabInteractor,_HandGrabInteractable>_InjectOptionalPointableElement__
                      );
    thunk_FUN_00d48444(OVRPlugin_Hand_TypeInfo);
    DAT_0377f4b7 = 1;
  }
  puVar1 = OVRPlugin_Hand_TypeInfo;
  if (0 < *(int *)(param_1 + 0x168)) {
LAB_01d41118:
    return *(undefined8 *)(param_1 + 0x70);
  }
  lVar2 = *(long *)(param_1 + 0x70);
  if (lVar2 != 0) {
    iVar3 = *(int *)(lVar2 + 0x18) + -1;
    if (iVar3 < 0) goto LAB_01d41118;
    do {
      FUN_0132138c(lVar2,iVar3,&local_28,*(undefined8 *)puVar1);
      if (local_28 == 0) break;
      if (*(int *)(local_28 + 0x44) < 2) {
        FUN_01d8b59c(local_28,0);
      }
      iVar3 = iVar3 + -1;
      if (iVar3 < 0) goto LAB_01d41118;
      lVar2 = *(long *)(param_1 + 0x70);
    } while (lVar2 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


