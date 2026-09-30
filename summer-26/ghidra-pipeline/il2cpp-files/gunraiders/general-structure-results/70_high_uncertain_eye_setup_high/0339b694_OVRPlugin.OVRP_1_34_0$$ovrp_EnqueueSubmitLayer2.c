/*
FUNCTION_NAME: OVRPlugin.OVRP_1_34_0$$ovrp_EnqueueSubmitLayer2
ENTRY_POINT: 0339b694
PROGRAM: gunraiders-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_34_0__ovrp_EnqueueSubmitLayer2(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x19;
  undefined8 uVar4;
  int unaff_w22;
  undefined *puVar3;
  
  uVar1 = FUN_03295500(0);
  uVar4 = *(undefined8 *)(unaff_x19 + 0x60);
  puVar3 = Method_System_Collections_Generic_HashSet<IValueAnimationUpdate>_Remove__;
  if (unaff_w22 == 0) {
    puVar3 = Method_System_Collections_Generic_HashSet<Guid>__ctor__;
  }
  uVar2 = thunk_FUN_01c273e8(puVar3);
  FUN_0336f2b8(uVar2,uVar1,uVar4,0);
  uVar1 = FUN_0335cdc4();
  uVar4 = thunk_FUN_01c273e8(Method_System_Collections_Generic_HashSet<IValueAnimationUpdate>_Add__)
  ;
                    /* WARNING: Subroutine does not return */
  FUN_01c5d37c(uVar1,uVar4);
}


