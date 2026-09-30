/*
FUNCTION_NAME: OVRPlugin.OVRP_1_44_0$$ovrp_GetHandState
ENTRY_POINT: 033f2d30
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OVRPlugin_OVRP_1_44_0__ovrp_GetHandState
               (undefined1 param_1 [16],undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  uint in_w8;
  long *unaff_x20;
  
  *(long *)(param_3 + 0x78) = param_1._8_8_;
  *(long *)(param_3 + 0x70) = param_1._0_8_;
  uVar1 = _DAT_00bb02e0;
  if (6 < in_w8) {
    *(undefined8 *)(param_3 + 0x88) = _UNK_00bb02e8;
    *(undefined8 *)(param_3 + 0x80) = uVar1;
    uVar1 = _DAT_00bb0170;
    if (in_w8 != 7) {
      *(undefined8 *)(param_3 + 0x98) = _UNK_00bb0178;
      *(undefined8 *)(param_3 + 0x90) = uVar1;
      *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x18) = param_3;
      thunk_FUN_01e10808();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db78();
}


