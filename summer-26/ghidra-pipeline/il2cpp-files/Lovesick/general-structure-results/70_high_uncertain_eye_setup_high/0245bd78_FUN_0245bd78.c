/*
FUNCTION_NAME: FUN_0245bd78
ENTRY_POINT: 0245bd78
PROGRAM: Lovesick-libil2cpp.so
SCORE: 76
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_0245bd78(long param_1)

{
  if ((DAT_03782506 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_4340);
    thunk_FUN_00d48444(Method_System_Span<Vector2Int>__ctor__);
    thunk_FUN_00d48444(RCG_Events_MessageListener_var);
                    /* catch() { ... } // from try @ 0245bd3c with catch @ 0245bdb4 */
                    /* catch() { ... } // from try @ 0245bd38 with catch @ 0245bdb8 */
                    /* catch() { ... } // from try @ 0245bd34 with catch @ 0245bdbc */
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_SetResult__
                      );
                    /* catch() { ... } // from try @ 0245bd30 with catch @ 0245bdc0 */
                    /* catch() { ... } // from try @ 0245bd2c with catch @ 0245bdc4 */
                    /* catch() { ... } // from try @ 0245bd24 with catch @ 0245bdc8 */
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_90__);
                    /* catch() { ... } // from try @ 0245bd20 with catch @ 0245bdcc */
                    /* catch() { ... } // from try @ 0245bd1c with catch @ 0245bdd0
                       catch() { ... } // from try @ 0245bd28 with catch @ 0245bdd0 */
                    /* catch() { ... } // from try @ 0245b9e4 with catch @ 0245bdd4 */
    thunk_FUN_00d48444(
                      System_Linq_Expressions_Interpreter_NotEqualInstruction_NotEqualSingleLiftedToNull_TypeInfo
                      );
    DAT_03782506 = 1;
  }
                    /* catch() { ... } // from try @ 0245b834 with catch @ 0245bde0 */
                    /* catch() { ... } // from try @ 0245b96c with catch @ 0245bde4 */
                    /* catch() { ... } // from try @ 0245b954 with catch @ 0245bde8 */
  if (*(long *)(param_1 + 0x58) != 0) {
                    /* catch() { ... } // from try @ 0245b84c with catch @ 0245bdec */
                    /* catch() { ... } // from try @ 0245b930 with catch @ 0245bdf0 */
                    /* catch() { ... } // from try @ 0245b814 with catch @ 0245bdf4 */
                    /* catch() { ... } // from try @ 0245b7cc with catch @ 0245bdf8 */
    FUN_01342a94((long *)(param_1 + 0x58),*(undefined8 *)RCG_Events_MessageListener_var);
  }
                    /* catch() { ... } // from try @ 0245b760 with catch @ 0245bdfc */
                    /* catch() { ... } // from try @ 0245b7bc with catch @ 0245be00 */
                    /* catch() { ... } // from try @ 0245b78c with catch @ 0245be04 */
  if (*(long *)(param_1 + 0x48) != 0) {
                    /* catch() { ... } // from try @ 0245b750 with catch @ 0245be08 */
                    /* catch() { ... } // from try @ 0245b77c with catch @ 0245be0c */
                    /* catch() { ... } // from try @ 0245b7a0 with catch @ 0245be10 */
                    /* catch() { ... } // from try @ 0245b6f8 with catch @ 0245be14 */
    FUN_01342a94((long *)(param_1 + 0x48),*(undefined8 *)Method_System_Span<Vector2Int>__ctor__);
  }
                    /* catch() { ... } // from try @ 0245b710 with catch @ 0245be18 */
                    /* catch() { ... } // from try @ 0245b72c with catch @ 0245be1c */
  if (*(long *)(param_1 + 0x38) != 0) {
                    /* catch() { ... } // from try @ 0245b410 with catch @ 0245be38 */
    FUN_01342a94((long *)(param_1 + 0x38),*(undefined8 *)StringLiteral_4340);
    return;
  }
                    /* catch() { ... } // from try @ 0245b3d8 with catch @ 0245be3c */
                    /* catch() { ... } // from try @ 0245b6d8 with catch @ 0245be40 */
  return;
}


