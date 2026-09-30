/*
FUNCTION_NAME: OVRPlugin$$AreHandPosesGeneratedByControllerData
ENTRY_POINT: 02c1ca98
PROGRAM: sharks-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRPlugin__AreHandPosesGeneratedByControllerData(long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 uVar2;
  long in_x9;
  int *in_x10;
  long unaff_x19;
  long unaff_x20;
  
  do {
    if ((bool)in_ZR) {
      puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
LAB_02c1cd1c:
      (*(code *)*puVar1)();
      if (unaff_x19 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_017fc5a0();
      }
      if (unaff_x20 != 0) {
        uVar2 = FUN_0270bdd0();
        return uVar2;
      }
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar1 = (undefined8 *)FUN_0185dba8();
      goto LAB_02c1cd1c;
    }
    in_ZR = *(long *)(in_x10 + 2) == param_3;
    in_x10 = in_x10 + 4;
  } while( true );
}


