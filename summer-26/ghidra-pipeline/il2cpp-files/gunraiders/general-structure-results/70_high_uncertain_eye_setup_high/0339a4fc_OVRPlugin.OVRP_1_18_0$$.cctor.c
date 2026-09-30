/*
FUNCTION_NAME: OVRPlugin.OVRP_1_18_0$$.cctor
ENTRY_POINT: 0339a4fc
PROGRAM: gunraiders-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ui_or_gameplay_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_18_0___cctor(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x19;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  
  uVar1 = (**(code **)(*unaff_x19 + 0x188))();
  in_stack_00000018 = thunk_FUN_01c273e8(PTR_DAT_042308a0);
  in_stack_00000020 = 0xffffffffffffffff;
  in_stack_00000028 = uVar1;
  uVar2 = FUN_03307544(&stack0x00000018,0);
  uVar3 = thunk_FUN_01c273e8(
                            Method_UnityEngine_UIElements_FocusEventBase<FocusEvent>_get_IsFocusDelegated__
                            );
  FUN_03146988(uVar3,uVar2,0);
  uVar2 = FUN_0335cdc4();
  uVar3 = thunk_FUN_01c273e8(Method_System_Collections_Generic_HashSet<IClippable>_Clear__);
                    /* WARNING: Subroutine does not return */
  FUN_01c5d37c(uVar2,uVar3);
}


