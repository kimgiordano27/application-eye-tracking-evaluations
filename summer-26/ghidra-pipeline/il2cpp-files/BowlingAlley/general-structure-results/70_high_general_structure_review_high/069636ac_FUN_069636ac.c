/*
FUNCTION_NAME: FUN_069636ac
ENTRY_POINT: 069636ac
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_1;ray_or_cast_sink_hits_8;telemetry_or_network_hits_6
*/


void FUN_069636ac(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 local_30;
  undefined8 uStack_28;
  
  puVar1 = Method_System_Collections_Generic_List<OpenXRInput_SerializedBinding>_Add__;
  if ((DAT_076e1bb4 & 1) == 0) {
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List<OpenXRInput_SerializedBinding>_ToArray__
                      );
    thunk_FUN_032e1da0(PTR_DAT_07281a70);
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List<OpenXRInput_SerializedBinding>_get_Count__
                      );
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<OpenXRInput_SerializedBinding>_Add__);
    DAT_076e1bb4 = 1;
  }
  puVar2 = Method_System_Collections_Generic_List<OpenXRInput_SerializedBinding>_get_Count__;
  uVar3 = FUN_06be4250(*(undefined8 *)puVar1,0);
                    /* try { // try from 06963718 to 06a63897 has its CatchHandler @ 06963718
                       catch() { ... } // from try @ 06963718 with catch @ 06963718
                       catch() { ... } // from try @ 069639b8 with catch @ 06963718
                       catch() { ... } // from try @ 069639f8 with catch @ 06963718
                       catch() { ... } // from try @ 06963a58 with catch @ 06963718
                       catch() { ... } // from try @ 06963a8c with catch @ 06963718 */
  if ((uVar3 & 1) != 0) {
    uVar4 = FUN_06be41e4(*(undefined8 *)puVar1,0);
    lVar9 = *(long *)Method_System_Collections_Generic_List<OpenXRInput_SerializedBinding>_ToArray__
    ;
    lVar8 = *(long *)(lVar9 + 0x38);
    if (lVar8 == 0) {
      FUN_03293514(lVar9);
      lVar8 = *(long *)(lVar9 + 0x38);
    }
    lVar8 = *(long *)(lVar8 + 0x10);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_032934b8();
    }
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    lVar8 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_032934b8();
    }
    local_30 = 0;
    uStack_28 = 0;
    thunk_FUN_0695b6ec(&local_30,uVar4,**(undefined8 **)(lVar8 + 0xb8),0);
    if (*(int *)(*(long *)PTR_DAT_07281a70 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    plVar5 = (long *)FUN_0695a0f0(local_30,uStack_28,0,0);
    if (plVar5 != (long *)0x0) {
      if (*plVar5 != *(long *)puVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_032d618c(plVar5);
      }
    }
    if (DAT_076e1cad == '\0') {
      thunk_FUN_032e1da0(Method_System_Collections_Generic_List<OVRRaycaster_RaycastHit>__ctor__);
      DAT_076e1cad = '\x01';
    }
    plVar6 = (long *)(*(long *)(*(long *)
                                 Method_System_Collections_Generic_List<OVRRaycaster_RaycastHit>__ctor__
                               + 0xb8) + 8);
    *plVar6 = (long)plVar5;
    thunk_FUN_0333a630(plVar6,plVar5);
    return;
  }
  uVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar2);
  FUN_06964b18();
  if (DAT_076e1cad == '\0') {
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<OVRRaycaster_RaycastHit>__ctor__);
    DAT_076e1cad = '\x01';
  }
  puVar7 = (undefined8 *)
           (*(long *)(*(long *)
                       Method_System_Collections_Generic_List<OVRRaycaster_RaycastHit>__ctor__ +
                     0xb8) + 8);
  *puVar7 = uVar4;
  thunk_FUN_0333a630(puVar7,uVar4);
  return;
}


