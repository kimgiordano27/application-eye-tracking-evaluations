/*
FUNCTION_NAME: FUN_06960414
ENTRY_POINT: 06960414
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_6
*/


void FUN_06960414(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar2 = Method_System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_Add__;
  if ((DAT_076e1b75 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_0727a130);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_Clear__)
    ;
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_Add__);
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_Contains__
                      );
    DAT_076e1b75 = 1;
  }
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar3 = *(long *)puVar2;
  }
  puVar1 = PTR_DAT_0727a130;
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar3 = *(long *)puVar2;
    }
    uVar6 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_Contains__
                              );
    FUN_04af466c(lVar5,uVar6,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_Clear__,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    *plVar4 = lVar5;
    thunk_FUN_0333a630(plVar4,lVar5);
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  FUN_06bfd0c8(lVar5,0);
  return;
}


