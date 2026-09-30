/*
FUNCTION_NAME: OVRPlugin.Ktx$$.ctor
ENTRY_POINT: 0339507c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Ktx___ctor(ulong param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x25;
  undefined8 uVar6;
  
  if ((param_1 & 1) != 0) {
    __cxa_end_catch();
    lVar1 = thunk_FUN_01c273e8(PTR_DAT_042305b0);
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar2 = FUN_03295500(0);
    uVar3 = (**(code **)(*unaff_x19 + 0x198))();
    uVar6 = *(undefined8 *)(unaff_x20 + 200);
    uVar4 = thunk_FUN_01c273e8(Method_UnityEngine_UIElements_FocusEventBase<FocusEvent>_GetPooled__)
    ;
    FUN_033704d4(uVar4,uVar2,uVar3,uVar6,0);
    uVar2 = FUN_0335d3b4();
    uVar3 = thunk_FUN_01c273e8(Method_UnityEngine_UIElements_FocusEventBase<FocusEvent>__ctor__);
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar2,uVar3);
  }
  puVar5 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar5 = *unaff_x25;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar5,&PTR_PTR_04025298,0);
}


