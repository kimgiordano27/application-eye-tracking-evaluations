/*
FUNCTION_NAME: MetaXRAcousticMaterial$$Meta.XR.Acoustics.IMaterialDataProvider.get_name
ENTRY_POINT: 04a05280
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint MetaXRAcousticMaterial__Meta_XR_Acoustics_IMaterialDataProvider_get_name(void)

{
  ulong uVar1;
  uint in_w8;
  uint unaff_w19;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long *unaff_x26;
  
  while (unaff_w19 < in_w8) {
    if (*(int *)(*unaff_x26 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      in_w8 = *(uint *)(unaff_x23 + 0x18);
    }
    if (in_w8 <= unaff_w19) break;
    uVar1 = FUN_05d3dae8(unaff_x24);
    if ((uVar1 & 1) != 0) {
      return unaff_w19;
    }
    unaff_x25 = unaff_x25 + -1;
    unaff_x24 = unaff_x24 + 0x10;
    unaff_w19 = unaff_w19 + 1;
    if (unaff_x25 == 0) {
      return 0xffffffff;
    }
    in_w8 = *(uint *)(unaff_x23 + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


