/*
FUNCTION_NAME: OVRPlugin$$get_EyeTextureArrayEnabled
ENTRY_POINT: 03686ec4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_EyeTextureArrayEnabled(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long in_x9;
  int *piVar2;
  long unaff_x20;
  undefined8 in_stack_00000008;
  
  if (in_x9 != 0) {
    piVar2 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar2 + -2) == param_3) {
        puVar1 = (undefined8 *)(param_1 + (long)*piVar2 * 0x10 + 0x138);
        goto code_r0x03686f04;
      }
      in_x9 = in_x9 + -1;
      piVar2 = piVar2 + 4;
    } while (in_x9 != 0);
  }
  puVar1 = (undefined8 *)FUN_01ecb238(in_stack_00000008,param_3,0);
code_r0x03686f04:
  (*(code *)*puVar1)(in_stack_00000008,puVar1[1]);
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01fbfd14();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01eed990();
}


