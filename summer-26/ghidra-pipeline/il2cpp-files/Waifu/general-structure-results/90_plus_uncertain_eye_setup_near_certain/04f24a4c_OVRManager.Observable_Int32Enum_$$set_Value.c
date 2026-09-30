/*
FUNCTION_NAME: OVRManager.Observable<Int32Enum>$$set_Value
ENTRY_POINT: 04f24a4c
PROGRAM: Waifu-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRManager_Observable<Int32Enum>__set_Value(long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long in_x9;
  int *in_x10;
  long unaff_x20;
  
  do {
    if ((bool)in_ZR) {
      puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
OVRManager_Observable<Int32Enum>___ctor:
      (*(code *)*puVar1)();
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02e0237c();
      }
                    /* WARNING: Subroutine does not return */
      FUN_0336c660();
    }
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar1 = (undefined8 *)FUN_0338f71c();
      goto OVRManager_Observable<Int32Enum>___ctor;
    }
    in_ZR = *(long *)(in_x10 + 2) == param_3;
    in_x10 = in_x10 + 4;
  } while( true );
}


