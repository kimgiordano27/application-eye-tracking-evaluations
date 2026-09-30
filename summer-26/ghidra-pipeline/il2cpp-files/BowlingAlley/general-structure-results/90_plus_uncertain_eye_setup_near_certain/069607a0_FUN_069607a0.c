/*
FUNCTION_NAME: FUN_069607a0
ENTRY_POINT: 069607a0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 107
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_2;ray_or_cast_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_5
*/


void FUN_069607a0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  if ((DAT_076e1bad & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_0727ee10);
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_GetEnumerator__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_get_Count__
                      );
    DAT_076e1bad = 1;
  }
  FUN_069636ac();
  FUN_06963bd4();
  if (DAT_076e1cac == '\0') {
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<OVRRaycaster_RaycastHit>__ctor__);
    DAT_076e1cac = '\x01';
  }
  puVar2 = Method_System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_get_Count__;
  lVar4 = *(long *)(*(long *)(*(long *)
                               Method_System_Collections_Generic_List<OVRRaycaster_RaycastHit>__ctor__
                             + 0xb8) + 0x10);
  if (lVar4 != 0) {
    plVar5 = (long *)(lVar4 + 0x20);
    lVar6 = *plVar5;
    lVar4 = *(long *)
             Method_System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_get_Count__;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar4 = *(long *)puVar2;
    }
    puVar1 = PTR_DAT_0727ee10;
    lVar7 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
    if (lVar7 == 0) {
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar4 = *(long *)puVar2;
      }
      uVar8 = **(undefined8 **)(lVar4 + 0xb8);
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
      FUN_0589e07c(lVar7,uVar8,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_GetEnumerator__
                   ,0);
      plVar3 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
      *plVar3 = lVar7;
      thunk_FUN_0333a630(plVar3,lVar7);
    }
    plVar3 = (long *)FUN_059692bc(lVar6,lVar7,0);
    if (plVar3 == (long *)0x0) {
      *plVar5 = 0;
    }
    else {
      lVar4 = *(long *)puVar1;
                    /* try { // try from 069608c8 to 06a60af7 has its CatchHandler @ 069608c8
                       catch() { ... } // from try @ 069608c8 with catch @ 069608c8
                       catch() { ... } // from try @ 06960f28 with catch @ 069608c8
                       catch() { ... } // from try @ 06960fe0 with catch @ 069608c8
                       catch() { ... } // from try @ 06961000 with catch @ 069608c8
                       catch() { ... } // from try @ 06961130 with catch @ 069608c8 */
      if ((*plVar3 != lVar4) || (*plVar5 = (long)plVar3, *plVar3 != lVar4)) {
                    /* WARNING: Subroutine does not return */
        FUN_032d618c(plVar3);
      }
    }
    thunk_FUN_0333a630(plVar5,plVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


