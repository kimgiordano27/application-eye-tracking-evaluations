/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Controller$$RefreshLayoutPostChildren
ENTRY_POINT: 04c19c1c
PROGRAM: hellodot-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller__RefreshLayoutPostChildren(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  int *piVar8;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar9;
  long *unaff_x21;
  undefined8 *unaff_x22;
  undefined4 uStack000000000000000c;
  
  AkMIDIEventCallbackInfo__get_byProgramNum();
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e57b8);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e57c0);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e57c8);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e57d0);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e57d8);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e2c80);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e57e0);
  *(undefined1 *)(unaff_x19 + 0x62c) = 1;
  lVar3 = thunk_FUN_02cea894(*unaff_x22);
  FUN_04f7383c(lVar3,0);
  uVar9 = *unaff_x20;
                    /* try { // try from 04c19c9c to 04d19cc3 has its CatchHandler @ 04c19fbc */
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  uVar9 = FUN_04f3fb68(uVar9,0);
  plVar4 = (long *)FUN_04e6abd8(uVar9,0);
                    /* try { // try from 04c19cdc to 04d19d3b has its CatchHandler @ 04c19fc0 */
  if (((plVar4 == (long *)0x0) ||
      (plVar4 = (long *)(**(code **)(*plVar4 + 0x2e8))(plVar4,*(undefined8 *)(*plVar4 + 0x2f0)),
      plVar4 == (long *)0x0)) ||
     (uVar9 = (**(code **)(*plVar4 + 0x288))
                        (plVar4,*(undefined8 *)PTR_DAT_065e57b0,*(undefined8 *)(*plVar4 + 0x290)),
     lVar3 == 0)) goto LAB_04c19f28;
  *(undefined8 *)(lVar3 + 0x10) = uVar9;
  uVar5 = Newtonsoft_Json_Schema_JsonSchemaGenerator__HasFlag(uVar9,0,0);
  puVar1 = PTR_DAT_065c8a78;
  if ((uVar5 & 1) != 0) {
    return;
  }
  lVar6 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065c8a78);
  FUN_05683c18(lVar6,*(undefined8 *)PTR_DAT_065e57c0,0);
  if (lVar6 == 0) goto LAB_04c19f28;
  uVar9 = FUN_056859b8(lVar6,0);
  puVar2 = PTR_DAT_065e2c18;
  uVar5 = thunk_FUN_04db8ae0(uVar9,*(undefined8 *)PTR_DAT_065e2c18,0);
                    /* try { // try from 04c19d50 to 04d19d5f has its CatchHandler @ 04c19fa8 */
  if ((uVar5 & 1) == 0) {
    lVar6 = thunk_FUN_02cea894(*(undefined8 *)puVar1);
                    /* try { // try from 04c19d6c to 04d19d7b has its CatchHandler @ 04c19f98 */
    FUN_05683c18(lVar6,*(undefined8 *)PTR_DAT_065e57d0,0);
    if (lVar6 == 0) goto LAB_04c19f28;
                    /* try { // try from 04c19d80 to 04d19d8f has its CatchHandler @ 04c19ef8 */
    uVar9 = FUN_056859b8(lVar6,0);
    uVar5 = thunk_FUN_04db8ae0(uVar9,*(undefined8 *)puVar2,0);
                    /* try { // try from 04c19d90 to 04d19e1f has its CatchHandler @ 04c1995c */
    if ((uVar5 & 1) != 0) goto LAB_04c19d94;
  }
  else {
LAB_04c19d94:
    if (*(long *)(lVar3 + 0x10) == 0) goto LAB_04c19f28;
    uVar9 = FUN_04f4b11c(*(long *)(lVar3 + 0x10),*(undefined8 *)PTR_DAT_065e57c8,0x24,0);
    *(undefined8 *)(lVar3 + 0x18) = uVar9;
    uVar5 = FUN_04e6b900(uVar9,0,0);
    if ((uVar5 & 1) != 0) {
      lVar6 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065cbc80);
      FUN_047b3b70(lVar6,lVar3,*(undefined8 *)PTR_DAT_065e57a8,0);
      if (lVar6 == 0) goto LAB_04c19f28;
      (**(code **)(lVar6 + 0x18))
                (*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)PTR_DAT_065e57d8,
                 *(undefined8 *)(lVar6 + 0x28));
      (**(code **)(lVar6 + 0x18))
                (*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)PTR_DAT_065e57e0,
                 *(undefined8 *)(lVar6 + 0x28));
    }
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  puVar1 = PTR_DAT_065e2c80;
  uVar9 = FUN_0568f04c(*(undefined8 *)PTR_DAT_065e2c80,0);
  uVar5 = thunk_FUN_04db8ae0(uVar9,*(undefined8 *)puVar1,0);
  if ((uVar5 & 1) == 0) {
    return;
  }
  plVar4 = *(long **)(lVar3 + 0x10);
  if (plVar4 != (long *)0x0) {
    plVar4 = (long *)(**(code **)(*plVar4 + 0x6c8))
                               (plVar4,*(undefined8 *)PTR_DAT_065e57b8,0x28,
                                *(undefined8 *)(*plVar4 + 0x6d0));
    uVar5 = FUN_04e69d8c(plVar4,0,0);
    if ((uVar5 & 1) == 0) {
      return;
    }
    if ((plVar4 != (long *)0x0) &&
       (plVar7 = (long *)(**(code **)(*plVar4 + 0x2e8))(plVar4,0,*(undefined8 *)(*plVar4 + 0x2f0)),
       puVar1 = PTR_DAT_065c8a08, plVar7 != (long *)0x0)) {
      if (*(long *)(*plVar7 + 0x40) != *(long *)(*(long *)PTR_DAT_065c8a08 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce8018();
      }
      piVar8 = (int *)thunk_FUN_02cea9e8();
      if (2 < *piVar8) {
        return;
      }
      uStack000000000000000c = 3;
      uVar9 = thunk_FUN_02cea4e8(*(undefined8 *)puVar1,&stack0x0000000c);
      FUN_04e69dc8(plVar4,0,uVar9,0);
      return;
    }
  }
LAB_04c19f28:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


