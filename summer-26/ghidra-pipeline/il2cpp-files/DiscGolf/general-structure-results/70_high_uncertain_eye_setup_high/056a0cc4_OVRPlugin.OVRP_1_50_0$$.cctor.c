/*
FUNCTION_NAME: OVRPlugin.OVRP_1_50_0$$.cctor
ENTRY_POINT: 056a0cc4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_50_0___cctor(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  undefined8 *unaff_x21;
  
  lVar1 = thunk_FUN_02dd3144(*unaff_x21);
  FUN_062eabc8(lVar1,*(undefined8 *)System_Collections_Generic_Stack<Entry>_TypeInfo,0);
  lVar2 = FUN_02d966a4(*(undefined8 *)PTR_DAT_069fc180,1);
  if (lVar2 != 0) {
    if ((unaff_x19 != 0) && (lVar3 = thunk_FUN_02dd3048(), lVar3 == 0)) {
      uVar4 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 056a0d74 to 057a0d7f has its CatchHandler @ 056a1430 */
      FUN_02d96724(uVar4,0);
    }
    if (*(int *)(lVar2 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 056a0d68 to 057a0d73 has its CatchHandler @ 056a142c */
      FUN_02d96868();
    }
    *(long *)(lVar2 + 0x20) = unaff_x19;
    LeanTween__value();
    if (lVar1 != 0) {
                    /* try { // try from 056a0d48 to 057a0d4f has its CatchHandler @ 056a1434 */
      FUN_035c80dc(lVar1,*(undefined8 *)System_Collections_Generic_Stack<EventCallbackList>_TypeInfo
                   ,lVar2,*(undefined8 *)
                           System_Collections_Generic_Stack<DirectSendRpcTarget>_TypeInfo);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 056a0d64 to 057a0d67 has its CatchHandler @ 056a141c */
  FUN_02d96860();
}


