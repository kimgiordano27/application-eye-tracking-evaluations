/*
FUNCTION_NAME: OVRPlugin$$GetCurrentInteractionProfileName
ENTRY_POINT: 05bbff48
PROGRAM: waitwhat-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetCurrentInteractionProfileName
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3)

{
  long lVar1;
  code *in_x9;
  long lVar2;
  long lVar3;
  long *unaff_x19;
  long unaff_x20;
  undefined4 uVar4;
  
                    /* catch() { ... } // from try @ 05bbfecc with catch @ 05bbff4c
                       catch() { ... } // from try @ 05bbff3c with catch @ 05bbff4c */
                    /* try { // try from 05bbff50 to 05cbff53 has its CatchHandler @ 05bbff5c */
                    /* try { // try from 05bbff54 to 05cbff5f has its CatchHandler @ 05bbfe30 */
  (*in_x9)();
  lVar2 = *(long *)(unaff_x20 + 0x20);
  if ((lVar2 == 0) || (lVar1 = *(long *)(lVar2 + 0x10), lVar1 == 0)) goto LAB_05bc0178;
  lVar2 = *(long *)(lVar2 + 0x18);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    if (lVar2 == 0) goto LAB_05bc0178;
    if (*(char *)(lVar2 + 0x10) != '\0') {
      lVar1 = *unaff_x19;
      if (lVar1 == 0) goto LAB_05bc0178;
                    /* try { // try from 05bc0090 to 05cc009f has its CatchHandler @ 05bc00a0 */
      *(undefined1 *)(lVar1 + 0x10) = 1;
      if (*(long *)(lVar1 + 0x18) == 0) goto LAB_05bc0178;
                    /* catch() { ... } // from try @ 05bc001c with catch @ 05bc00a0
                       catch() { ... } // from try @ 05bc0090 with catch @ 05bc00a0 */
                    /* try { // try from 05bc00a4 to 05cc00a7 has its CatchHandler @ 05bc00b0 */
      FUN_05bc03b4(*(long *)(lVar1 + 0x18),*(undefined8 *)(lVar2 + 0x18),0);
                    /* try { // try from 05bc00a8 to 05cc00b3 has its CatchHandler @ 05bbff60 */
      lVar2 = *unaff_x19;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05bc00a4 with catch @ 05bc00b0
                        */
      if ((lVar2 == 0) || (*(long *)(unaff_x20 + 0x20) == 0)) goto LAB_05bc0178;
      lVar1 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0x18);
      goto joined_r0x05bc00bc;
    }
  }
  else {
    if (lVar2 == 0) goto LAB_05bc0178;
    lVar3 = *unaff_x19;
                    /* try { // try from 05bbffe4 to 05cbffef has its CatchHandler @ 05bc0004 */
    if (*(char *)(lVar2 + 0x10) == '\0') {
      if (lVar3 == 0) goto LAB_05bc0178;
      *(undefined1 *)(lVar3 + 0x10) = 1;
      if (*(long *)(lVar3 + 0x18) == 0) goto LAB_05bc0178;
      FUN_05bc03b4(*(long *)(lVar3 + 0x18),*(undefined8 *)(lVar1 + 0x18),0);
      lVar2 = *unaff_x19;
      if ((lVar2 == 0) || (*(long *)(unaff_x20 + 0x20) == 0)) goto LAB_05bc0178;
      lVar1 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0x10);
joined_r0x05bc00bc:
      if (lVar1 == 0) goto LAB_05bc0178;
      FUN_05b74f50(lVar2 + 0x20,lVar1 + 0x20,0);
    }
    else {
      if (lVar3 == 0) goto LAB_05bc0178;
                    /* try { // try from 05bbfff0 to 05cc001b has its CatchHandler @ 05bbff60 */
      *(undefined1 *)(lVar3 + 0x10) = 1;
      if (*(long *)(lVar3 + 0x18) == 0) goto LAB_05bc0178;
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 05bbffe4 with catch @ 05bc0004
                        */
      FUN_05bc03b4(*(long *)(lVar3 + 0x18),*(undefined8 *)(lVar1 + 0x18),0);
      lVar2 = *(long *)(unaff_x20 + 0x20);
                    /* try { // try from 05bc001c to 05cc0033 has its CatchHandler @ 05bc00a0 */
      if ((((lVar2 == 0) || (*(long *)(lVar2 + 0x10) == 0)) || (*(long *)(lVar2 + 0x18) == 0)) ||
         (*unaff_x19 == 0)) goto LAB_05bc0178;
                    /* try { // try from 05bc0034 to 05cc008f has its CatchHandler @ 05bbff60 */
      FUN_05bc0494(*(long *)(lVar2 + 0x10) + 0x18,*(long *)(lVar2 + 0x18) + 0x18,*unaff_x19 + 0x18);
      lVar2 = *(long *)(unaff_x20 + 0x20);
      if (((lVar2 == 0) || (*(long *)(lVar2 + 0x10) == 0)) ||
         ((*(long *)(lVar2 + 0x18) == 0 || (*unaff_x19 == 0)))) goto LAB_05bc0178;
      FUN_05b74e80(*(long *)(lVar2 + 0x10) + 0x20,*(long *)(lVar2 + 0x18) + 0x20,*unaff_x19 + 0x20,0
                  );
    }
  }
  lVar2 = *(long *)(unaff_x20 + 0x20);
  if (((lVar2 != 0) && (lVar1 = *(long *)(lVar2 + 0x10), lVar1 != 0)) &&
     (lVar2 = *(long *)(lVar2 + 0x18), lVar2 != 0)) {
    lVar3 = *unaff_x19;
    if (*(int *)(*(long *)PTR_DAT_07113e80 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar4 = FUN_05bc066c(lVar1 + 0x3c,lVar2 + 0x3c);
    if (lVar3 != 0) {
      *(undefined4 *)(lVar3 + 0x3c) = uVar4;
      *(undefined4 *)(lVar3 + 0x40) = param_2;
      *(undefined4 *)(lVar3 + 0x44) = param_3;
      return;
    }
  }
LAB_05bc0178:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


