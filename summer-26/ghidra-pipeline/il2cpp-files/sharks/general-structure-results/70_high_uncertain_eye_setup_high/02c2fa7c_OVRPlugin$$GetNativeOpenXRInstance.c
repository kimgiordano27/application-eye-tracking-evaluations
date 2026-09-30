/*
FUNCTION_NAME: OVRPlugin$$GetNativeOpenXRInstance
ENTRY_POINT: 02c2fa7c
PROGRAM: sharks-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OVRPlugin__GetNativeOpenXRInstance(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  uint in_w8;
  long *unaff_x20;
  
  uVar1 = _DAT_009a7fe0;
  *(undefined8 *)(param_2 + 0x48) = _UNK_009a7fe8;
  *(undefined8 *)(param_2 + 0x40) = uVar1;
  uVar1 = _DAT_009a6990;
  if (in_w8 != 3) {
    *(undefined8 *)(param_2 + 0x58) = _UNK_009a6998;
    *(undefined8 *)(param_2 + 0x50) = uVar1;
    uVar1 = _DAT_009a80a0;
    if (4 < in_w8) {
      *(undefined8 *)(param_2 + 0x68) = _UNK_009a80a8;
      *(undefined8 *)(param_2 + 0x60) = uVar1;
      uVar1 = _DAT_009a76c0;
      if (in_w8 != 5) {
        *(undefined8 *)(param_2 + 0x78) = _UNK_009a76c8;
        *(undefined8 *)(param_2 + 0x70) = uVar1;
        uVar1 = _DAT_009a6820;
        if (6 < in_w8) {
          *(undefined8 *)(param_2 + 0x88) = _UNK_009a6828;
          *(undefined8 *)(param_2 + 0x80) = uVar1;
          uVar1 = _DAT_009a66f0;
          if (in_w8 != 7) {
            *(undefined8 *)(param_2 + 0x98) = _UNK_009a66f8;
            *(undefined8 *)(param_2 + 0x90) = uVar1;
            *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x18) = param_2;
            thunk_FUN_0188fd20();
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5b0();
}


