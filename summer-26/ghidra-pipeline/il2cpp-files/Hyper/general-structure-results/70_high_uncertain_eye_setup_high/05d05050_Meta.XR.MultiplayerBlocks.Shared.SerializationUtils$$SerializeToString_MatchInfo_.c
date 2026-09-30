/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.SerializationUtils$$SerializeToString<MatchInfo>
ENTRY_POINT: 05d05050
PROGRAM: Hyper-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Shared_SerializationUtils__SerializeToString<MatchInfo>(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  code *pcVar4;
  void *unaff_x19;
  long unaff_x20;
  size_t unaff_x21;
  undefined1 *__src;
  long unaff_x26;
  long unaff_x29;
  
  __src = &stack0x00000000 + -(unaff_x21 + 0xf & 0x1fffffff0);
  if (*(int *)(*(long *)PTR_DAT_0ac09f18 + 0xe4) == 0) {
    thunk_FUN_049a583c();
    param_1 = *(long *)(unaff_x20 + 0x38);
  }
  lVar3 = *(long *)(param_1 + 8);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_04980b34(lVar3);
  }
  lVar3 = thunk_FUN_04983f60(lVar3);
  (*(code *)**(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x10))();
  if (lVar3 == 0) {
                    /* try { // try from 05d05134 to 05e05143 has its CatchHandler @ 05d051b0 */
    if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
  }
  else {
                    /* try { // try from 05d050d8 to 05e050df has its CatchHandler @ 05d051b8 */
    puVar2 = *(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x18);
    uVar1 = *puVar2;
    pcVar4 = (code *)puVar2[2];
    *(undefined1 **)(unaff_x29 + -0x10) = __src;
    (*pcVar4)(uVar1,puVar2,lVar3,unaff_x29 + -0x10,__src);
                    /* try { // try from 05d050fc to 05e0510b has its CatchHandler @ 05d051b4 */
    memcpy(unaff_x19,__src,unaff_x21);
                    /* try { // try from 05d0510c to 05e05133 has its CatchHandler @ 05d0502c */
    if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 05d05144 to 05e051d3 has its CatchHandler @ 05d0502c */
  __stack_chk_fail();
}


