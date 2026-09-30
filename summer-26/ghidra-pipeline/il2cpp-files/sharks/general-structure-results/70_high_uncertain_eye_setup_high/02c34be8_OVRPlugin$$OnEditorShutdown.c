/*
FUNCTION_NAME: OVRPlugin$$OnEditorShutdown
ENTRY_POINT: 02c34be8
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02c34aa8) */
/* WARNING: Removing unreachable block (ram,0x02c34ae4) */
/* WARNING: Removing unreachable block (ram,0x02c34ba8) */
/* WARNING: Removing unreachable block (ram,0x02c34ab0) */

undefined1 OVRPlugin__OnEditorShutdown(long *param_1)

{
  int iVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  long unaff_x19;
  long lVar6;
  undefined8 in_stack_00000038;
  
                    /* catch() { ... } // from try @ 02c34778 with catch @ 02c34be8 */
                    /* catch() { ... } // from try @ 02c346e8 with catch @ 02c34bec */
                    /* catch() { ... } // from try @ 02c346b4 with catch @ 02c34bf0 */
                    /* catch() { ... } // from try @ 02c348bc with catch @ 02c34bf4 */
  uVar3 = thunk_FUN_01851c08(PTR_DAT_037f9a80);
                    /* catch() { ... } // from try @ 02c34888 with catch @ 02c34bf8 */
                    /* catch() { ... } // from try @ 02c34590 with catch @ 02c34bfc */
                    /* catch() { ... } // from try @ 02c34750 with catch @ 02c34c00 */
  uVar4 = thunk_FUN_0184d740(uVar3,*(undefined8 *)*param_1);
                    /* catch() { ... } // from try @ 02c34744 with catch @ 02c34c04 */
  if ((uVar4 & 1) == 0) {
                    /* catch() { ... } // from try @ 02c344cc with catch @ 02c34c14 */
                    /* catch() { ... } // from try @ 02c344bc with catch @ 02c34c18 */
    plVar5 = (long *)__cxa_allocate_exception(8);
                    /* catch() { ... } // from try @ 02c34b4c with catch @ 02c34c1c */
                    /* catch() { ... } // from try @ 02c34718 with catch @ 02c34c20 */
    *plVar5 = *param_1;
                    /* catch() { ... } // from try @ 02c348ec with catch @ 02c34c24 */
                    /* catch() { ... } // from try @ 02c34644 with catch @ 02c34c28 */
                    /* catch() { ... } // from try @ 02c34818 with catch @ 02c34c2c */
                    /* WARNING: Subroutine does not return */
    __cxa_throw(plVar5,&PTR_StringLiteral_14485_0361ba68,0);
  }
                    /* catch() { ... } // from try @ 02c34b54 with catch @ 02c34c08 */
  lVar6 = *param_1;
                    /* catch() { ... } // from try @ 02c34b50 with catch @ 02c34c0c */
  __cxa_end_catch();
  uVar2 = 0;
  iVar1 = *(int *)(unaff_x19 + 0x10);
  thunk_FUN_0181f594();
                    /* catch() { ... } // from try @ 02c345ac with catch @ 02c34c10 */
  if (iVar1 < 1) {
    if (lVar6 != 0) {
                    /* catch() { ... } // from try @ 02c34a34 with catch @ 02c34bb4
                       catch() { ... } // from try @ 02c34b68 with catch @ 02c34bb4 */
                    /* catch() { ... } // from try @ 02c349bc with catch @ 02c34bb8 */
      uVar3 = thunk_FUN_01851c08(PTR_DAT_0380c010);
                    /* catch() { ... } // from try @ 02c34618 with catch @ 02c34bbc */
                    /* catch() { ... } // from try @ 02c34b40 with catch @ 02c34bc0 */
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 02c347f0 with catch @ 02c34bc4 */
      FUN_017fc474(lVar6,uVar3);
    }
  }
  else {
    iVar1 = *(int *)(unaff_x19 + 0x10);
    thunk_FUN_0181f594();
    thunk_FUN_0181f594();
    uVar2 = 1;
    *(int *)(unaff_x19 + 0x10) = iVar1 + -1;
  }
  lVar6 = *(long *)(unaff_x19 + 0x28);
  thunk_FUN_0181f594();
  if ((lVar6 != 0) && (iVar1 = *(int *)(unaff_x19 + 0x10), thunk_FUN_0181f594(), iVar1 == 0)) {
    lVar6 = *(long *)(unaff_x19 + 0x28);
    thunk_FUN_0181f594();
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    FUN_02c35188(lVar6);
  }
  if (in_stack_00000038._4_1_ != '\0') {
    iVar1 = *(int *)(unaff_x19 + 0x18);
    thunk_FUN_0181f594();
    thunk_FUN_0181f594();
    *(int *)(unaff_x19 + 0x18) = iVar1 + -1;
    FUN_0184c01c(*(undefined8 *)(unaff_x19 + 0x20));
  }
  FUN_02c328cc(&stack0x00000020);
  return uVar2;
}


