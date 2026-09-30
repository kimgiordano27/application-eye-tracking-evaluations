/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.RuntimeSettings$$OnBeforeSerialize
ENTRY_POINT: 05602d74
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_ImmersiveDebugger_RuntimeSettings__OnBeforeSerialize(void)

{
  ulong uVar1;
  uint in_w8;
  uint unaff_w19;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  
  while (unaff_w19 < in_w8) {
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      in_w8 = *(uint *)(unaff_x22 + 0x18);
    }
    if (in_w8 <= unaff_w19) break;
    uVar1 = FUN_05dfc4d4(unaff_x23);
    if ((uVar1 & 1) != 0) {
      return unaff_w19;
    }
    unaff_w19 = unaff_w19 + 1;
    unaff_x24 = unaff_x24 + -1;
    unaff_x23 = unaff_x23 + 0x18;
    if (unaff_x24 == 0) {
      return 0xffffffff;
    }
    in_w8 = *(uint *)(unaff_x22 + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
}


