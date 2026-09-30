/*
FUNCTION_NAME: FUN_036933f0
ENTRY_POINT: 036933f0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_036933f0(long param_1)

{
  undefined *puVar1;
  
  if ((DAT_04833ed8 & 1) == 0) {
                    /* catch() { ... } // from try @ 036933d8 with catch @ 03693408 */
                    /* try { // try from 0369340c to 03793417 has its CatchHandler @ 0369342c */
    thunk_FUN_01efb3a4(Method_Gameplay_MeleeWeaponModule_<>c_<Start>b__21_1__);
                    /* try { // try from 03693418 to 03793423 has its CatchHandler @ 03693384 */
    thunk_FUN_01efb3a4(Method_OVRPlugin_<>c_<_cctor>b__653_64__);
                    /* try { // try from 03693424 to 0379342b has its CatchHandler @ 0369342c */
    DAT_04833ed8 = 1;
  }
  puVar1 = Method_Gameplay_MeleeWeaponModule_<>c_<Start>b__21_1__;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0369340c with catch @ 0369342c
                       catch(type#2 @ 00000000) { ... } // from try @ 03693424 with catch @ 0369342c
                        */
  if (*(char *)(param_1 + 0x38) != '\0') {
                    /* try { // try from 03693430 to 03793483 has its CatchHandler @ 03693430
                       catch() { ... } // from try @ 03693430 with catch @ 03693430
                       catch() { ... } // from try @ 036934e4 with catch @ 03693430
                       catch() { ... } // from try @ 0369354c with catch @ 03693430
                       catch() { ... } // from try @ 0369355c with catch @ 03693430
                       catch() { ... } // from try @ 036935b0 with catch @ 03693430 */
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_02605e30(*(long *)(param_1 + 0x40),*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__653_64__
                  );
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_03666ca4(param_1,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  return;
}


