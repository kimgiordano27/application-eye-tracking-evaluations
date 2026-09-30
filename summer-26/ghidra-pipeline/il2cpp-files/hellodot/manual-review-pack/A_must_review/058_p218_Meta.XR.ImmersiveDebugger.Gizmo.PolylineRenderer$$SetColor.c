/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.PolylineRenderer$$SetColor
ENTRY_POINT: 04c297c0
PROGRAM: hellodot-libil2cpp.so
SCORE: 117
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction;data_collection
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_4;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Gizmo_PolylineRenderer__SetColor(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar8;
  
  AkMIDIEventCallbackInfo__get_byProgramNum(*(undefined8 *)(param_1 + 0xe00));
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e5f18);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e54a8);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e5f20);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c89a0);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8a78);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e5f28);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e14a8);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e5f30);
  *(undefined1 *)(unaff_x21 + 0x6bb) = 1;
  puVar2 = PTR_DAT_065e2e00;
  if (unaff_x19 == 0) goto LAB_04c29aa4;
  uVar8 = *(undefined8 *)(unaff_x19 + 0x18);
  if (*(int *)(*(long *)PTR_DAT_065e2e00 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  if (DAT_06a6d3a9 == '\0') {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e2e00);
    DAT_06a6d3a9 = '\x01';
  }
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
    lVar4 = *(long *)puVar2;
  }
  puVar1 = PTR_DAT_065c89a0;
  uVar5 = FUN_054dedf8(uVar8,*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 8),0);
  if ((uVar5 & 1) == 0) {
    if ((*(long *)(unaff_x19 + 0x30) == 0) ||
       (lVar4 = FUN_05685b20(*(long *)(unaff_x19 + 0x30),0), lVar4 == 0)) goto LAB_04c29aa4;
    if ((long)*(int *)(lVar4 + 0x10) <= (long)(ulong)*(uint *)(unaff_x20 + 0x10)) goto LAB_04c29a74;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    if (DAT_06a6d60e == '\0') {
      AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e2e00);
      DAT_06a6d60e = '\x01';
    }
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    FUN_054df144();
    if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_04c29aa4;
    lVar4 = FUN_05687260(*(long *)(unaff_x19 + 0x30),0);
    uVar5 = FUN_04db9688(lVar4,0);
    if ((uVar5 & 1) == 0) {
      if (lVar4 == 0) goto LAB_04c29aa4;
      uVar8 = FUN_04dbd134(lVar4,1,0);
      lVar4 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e54a8);
      FUN_054e1c10(lVar4,uVar8,0);
      *(long *)(unaff_x19 + 0x40) = lVar4;
      if (lVar4 == 0) goto LAB_04c29aa4;
      lVar4 = FUN_054d80d0(lVar4,0);
      uVar8 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e5f18);
      System_Xml_XmlEncodedRawTextWriter__FlushBuffer(uVar8,*(undefined8 *)PTR_DAT_065e5f28,0);
      if (lVar4 == 0) goto LAB_04c29aa4;
      FUN_054db260(lVar4,uVar8,0);
      plVar6 = *(long **)(unaff_x19 + 0x30);
      if (plVar6 == (long *)0x0) goto LAB_04c29aa4;
      lVar4 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
      if (lVar4 == 0) goto LAB_04c29aa4;
      uVar3 = FUN_04dbda48(lVar4,0x3f,0);
      uVar8 = FUN_04dbae1c(lVar4,uVar3,0);
      uVar7 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065c8a78);
      FUN_05683c18(uVar7,uVar8,0);
      FUN_054d8238();
    }
    lVar4 = FUN_054d7998();
    if (lVar4 == 0) {
LAB_04c29aa4:
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    FUN_054e8f38(lVar4,*(undefined8 *)PTR_DAT_065e5f30,*(undefined8 *)PTR_DAT_065e14a8,0);
  }
LAB_04c29a74:
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  FUN_03532d08(0,*(undefined8 *)PTR_DAT_065e5f20);
  return;
}


