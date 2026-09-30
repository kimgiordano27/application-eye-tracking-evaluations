/*
FUNCTION_NAME: FUN_01d4a17c
ENTRY_POINT: 01d4a17c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01d4a294) */

void FUN_01d4a17c(long param_1,undefined4 param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  int iVar4;
  long local_38;
  
                    /* try { // try from 01d4a184 to 01e4a18f has its CatchHandler @ 01d4abf8 */
  if ((DAT_0377f4ee & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_PointerInteractable<HandGrabInteractor,_HandGrabInteractable>_InjectOptionalPointableElement__
                      );
                    /* try { // try from 01d4a1b4 to 01e4a1c7 has its CatchHandler @ 01d4abf4 */
    thunk_FUN_00d48444(OVRPlugin_Hand_TypeInfo);
    DAT_0377f4ee = 1;
  }
  lVar3 = *(long *)(param_1 + 0x78);
  if (lVar3 == 0) {
                    /* try { // try from 01d4a1dc to 01e4a1e7 has its CatchHandler @ 01d4a4a4 */
    lVar3 = FUN_01d41074(param_1);
                    /* try { // try from 01d4a1e8 to 01e4a207 has its CatchHandler @ 01d48d40 */
    *(long *)(param_1 + 0x78) = lVar3;
                    /* catch() { ... } // from try @ 01d4a1d4 with catch @ 01d4a1ec */
    *(undefined4 *)(param_1 + 0x80) = 1;
                    /* catch() { ... } // from try @ 01d49e34 with catch @ 01d4a1f0 */
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
  }
  else {
    *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
                    /* try { // try from 01d4a1d4 to 01e4a1d7 has its CatchHandler @ 01d4a1ec */
  }
  puVar2 = OVRPlugin_Hand_TypeInfo;
  iVar1 = *(int *)(lVar3 + 0x18);
  if (iVar1 < 1) {
LAB_01d4a260:
    iVar1 = *(int *)(param_1 + 0x80) + -1;
    *(int *)(param_1 + 0x80) = iVar1;
    if (iVar1 == 0) {
      *(undefined8 *)(param_1 + 0x78) = 0;
    }
    return;
  }
  if (lVar3 != 0) {
    iVar4 = 0;
    do {
      FUN_0132138c(lVar3,iVar4,&local_38,*(undefined8 *)puVar2);
      if (local_38 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (0 < *(int *)(local_38 + 0x44)) {
        FUN_01d8d164(local_38,param_2,0);
      }
      iVar4 = iVar4 + 1;
      if (iVar1 == iVar4) goto LAB_01d4a260;
      lVar3 = *(long *)(param_1 + 0x78);
    } while (lVar3 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


