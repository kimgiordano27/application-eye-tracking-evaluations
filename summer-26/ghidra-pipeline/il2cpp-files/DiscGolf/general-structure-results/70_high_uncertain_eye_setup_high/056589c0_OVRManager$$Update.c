/*
FUNCTION_NAME: OVRManager$$Update
ENTRY_POINT: 056589c0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__Update(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x22;
  undefined8 in_stack_00000000;
  undefined4 in_stack_00000008;
  
  lVar2 = thunk_FUN_02dd2d7c();
                    /* try { // try from 056589dc to 05758a43 has its CatchHandler @ 056589dc
                       catch() { ... } // from try @ 056589dc with catch @ 056589dc
                       catch() { ... } // from try @ 05658af8 with catch @ 056589dc
                       catch() { ... } // from try @ 05658b3c with catch @ 056589dc
                       catch() { ... } // from try @ 05658b48 with catch @ 056589dc
                       catch() { ... } // from try @ 05658b58 with catch @ 056589dc
                       catch() { ... } // from try @ 05658bb0 with catch @ 056589dc */
  if ((lVar2 != 0) &&
     (lVar3 = thunk_FUN_02dd3048(lVar2,*(undefined8 *)(*unaff_x19 + 0x40)), lVar3 == 0)) {
LAB_05658ac4:
    uVar4 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar4,0);
  }
  if (2 < *(uint *)(unaff_x19 + 3)) {
    unaff_x19[6] = lVar2;
    LeanTween__value(unaff_x19 + 6,lVar2);
    in_stack_00000008 = *(undefined4 *)(unaff_x20 + 0xc);
    lVar2 = thunk_FUN_02dd2d7c(*(undefined8 *)(unaff_x22 + 0x50),&stack0x00000008);
    if ((lVar2 != 0) &&
       (lVar3 = thunk_FUN_02dd3048(lVar2,*(undefined8 *)(*unaff_x19 + 0x40)), lVar3 == 0))
    goto LAB_05658ac4;
    if ((*(uint *)(unaff_x19 + 3) & 0xfffffffc) != 0) {
      unaff_x19[7] = lVar2;
                    /* try { // try from 05658a44 to 05758a57 has its CatchHandler @ 05658b78 */
      LeanTween__value(unaff_x19 + 7,lVar2);
      in_stack_00000000._4_4_ = *(undefined4 *)(unaff_x20 + 0x10);
      lVar2 = thunk_FUN_02dd2d7c(*(undefined8 *)(unaff_x22 + 0x50),(long)&stack0x00000000 + 4);
                    /* try { // try from 05658a5c to 05758a67 has its CatchHandler @ 05658b6c */
      if ((lVar2 != 0) &&
         (lVar3 = thunk_FUN_02dd3048(lVar2,*(undefined8 *)(*unaff_x19 + 0x40)), lVar3 == 0))
      goto LAB_05658ac4;
      puVar1 = System_Collections_Generic_KeyValuePair<string,_string>_TypeInfo;
                    /* try { // try from 05658a78 to 05758a83 has its CatchHandler @ 05658b64 */
      if (4 < *(uint *)(unaff_x19 + 3)) {
        unaff_x19[8] = lVar2;
        LeanTween__value(unaff_x19 + 8,lVar2);
                    /* try { // try from 05658aa8 to 05758ab7 has its CatchHandler @ 05658b5c */
        FUN_0536e164(*(undefined8 *)puVar1);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96868();
}


