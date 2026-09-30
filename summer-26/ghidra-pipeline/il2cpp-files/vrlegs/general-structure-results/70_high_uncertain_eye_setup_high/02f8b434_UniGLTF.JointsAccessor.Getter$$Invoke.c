/*
FUNCTION_NAME: UniGLTF.JointsAccessor.Getter$$Invoke
ENTRY_POINT: 02f8b434
PROGRAM: vrlegs-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02f8b4ac) */

undefined4 UniGLTF_JointsAccessor_Getter__Invoke(long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long in_x9;
  int *in_x10;
  undefined4 unaff_w20;
  long unaff_x23;
  undefined8 in_stack_00000018;
  
  do {
    if ((bool)in_ZR) {
      puVar1 = (undefined8 *)FUN_01a472ec();
LAB_02f8b454:
      (*(code *)*puVar1)();
      if (unaff_x23 == 0) {
        if (in_stack_00000018._4_1_ != '\0') {
          OVRManager_<>c__<InitOVRManager>b__424_0();
        }
        return unaff_w20;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01a28d1c();
    }
    if (*(long *)(in_x10 + -2) == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_02f8b454;
    }
    in_x9 = in_x9 + -1;
    in_ZR = in_x9 == 0;
    in_x10 = in_x10 + 4;
  } while( true );
}


