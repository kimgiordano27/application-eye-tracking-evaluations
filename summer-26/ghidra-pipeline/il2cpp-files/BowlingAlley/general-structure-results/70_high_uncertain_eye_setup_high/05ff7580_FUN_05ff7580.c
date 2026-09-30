/*
FUNCTION_NAME: FUN_05ff7580
ENTRY_POINT: 05ff7580
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_7;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_7
*/


void FUN_05ff7580(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  
  puVar3 = System_Xml_Schema_XmlSchemaChoice_var;
  if ((DAT_076dcff6 & 1) == 0) {
                    /* try { // try from 05ff75a8 to 060f75cf has its CatchHandler @ 05ff77b8 */
    thunk_FUN_032e1da0(OVRPlugin_SpaceQueryResult_var);
    thunk_FUN_032e1da0(System_Xml_Schema_XmlSchemaChoice_var);
    thunk_FUN_032e1da0(OVRPlugin_Vector3f_var);
    thunk_FUN_032e1da0(OVRPlugin_VirtualKeyboardModelAnimationState_var);
    thunk_FUN_032e1da0(OVRScenePlane_GetBoundaryJob_var);
    thunk_FUN_032e1da0(PTR_DAT_07284210);
    thunk_FUN_032e1da0(System_Xml_Schema_XmlSchema_var);
    DAT_076dcff6 = 1;
  }
  puVar6 = OVRScenePlane_GetBoundaryJob_var;
  puVar5 = OVRPlugin_VirtualKeyboardModelAnimationState_var;
  puVar4 = OVRPlugin_Vector3f_var;
  lVar7 = *(long *)puVar3;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar7 = *(long *)puVar3;
  }
  uVar1 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x28);
  uVar2 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x30);
  uVar8 = thunk_FUN_032a56a0(*(undefined8 *)puVar5);
  FUN_04ac43d0(uVar8,uVar1,uVar2,*(undefined8 *)puVar6,*(undefined8 *)puVar4);
  puVar4 = OVRPlugin_SpaceQueryResult_var;
  lVar7 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18);
  if (lVar7 != 0) {
    FUN_050f8b10(lVar7,*(undefined8 *)PTR_DAT_07284210,uVar8,
                 *(undefined8 *)OVRPlugin_SpaceQueryResult_var);
    lVar7 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18);
    if (lVar7 != 0) {
      FUN_050f8b10(lVar7,*(undefined8 *)System_Xml_Schema_XmlSchema_var,uVar8,*(undefined8 *)puVar4)
      ;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


