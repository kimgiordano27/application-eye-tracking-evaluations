/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.PolylineRenderer$$SetColors
ENTRY_POINT: 04c29890
PROGRAM: hellodot-libil2cpp.so
SCORE: 117
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction;data_collection
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_4;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Gizmo_PolylineRenderer__SetColors(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  long *plVar7;
  long *unaff_x23;
  
  plVar7 = *(long **)(unaff_x22 + 0x9a0);
  uVar2 = FUN_054dedf8(param_2,*(undefined8 *)(param_1 + 8),0);
  if ((uVar2 & 1) == 0) {
    if ((*(long *)(unaff_x19 + 0x30) == 0) ||
       (lVar3 = FUN_05685b20(*(long *)(unaff_x19 + 0x30),0), lVar3 == 0)) goto LAB_04c29aa4;
    if ((long)*(int *)(lVar3 + 0x10) <= (long)(ulong)*(uint *)(unaff_x20 + 0x10)) goto LAB_04c29a74;
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    if (DAT_06a6d60e == '\0') {
      AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e2e00);
      DAT_06a6d60e = '\x01';
    }
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    FUN_054df144();
    if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_04c29aa4;
    lVar3 = FUN_05687260(*(long *)(unaff_x19 + 0x30),0);
    uVar2 = FUN_04db9688(lVar3,0);
    if ((uVar2 & 1) == 0) {
      if (lVar3 == 0) goto LAB_04c29aa4;
      uVar4 = FUN_04dbd134(lVar3,1,0);
      lVar3 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e54a8);
      FUN_054e1c10(lVar3,uVar4,0);
      *(long *)(unaff_x19 + 0x40) = lVar3;
      if (lVar3 == 0) goto LAB_04c29aa4;
      lVar3 = FUN_054d80d0(lVar3,0);
      uVar4 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e5f18);
      System_Xml_XmlEncodedRawTextWriter__FlushBuffer(uVar4,*(undefined8 *)PTR_DAT_065e5f28,0);
      if (lVar3 == 0) goto LAB_04c29aa4;
      FUN_054db260(lVar3,uVar4,0);
      plVar5 = *(long **)(unaff_x19 + 0x30);
      if (plVar5 == (long *)0x0) goto LAB_04c29aa4;
      lVar3 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
      if (lVar3 == 0) goto LAB_04c29aa4;
      uVar1 = FUN_04dbda48(lVar3,0x3f,0);
      uVar4 = FUN_04dbae1c(lVar3,uVar1,0);
      uVar6 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065c8a78);
      FUN_05683c18(uVar6,uVar4,0);
      FUN_054d8238();
    }
    lVar3 = FUN_054d7998();
    if (lVar3 == 0) {
LAB_04c29aa4:
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    FUN_054e8f38(lVar3,*(undefined8 *)PTR_DAT_065e5f30,*(undefined8 *)PTR_DAT_065e14a8,0);
  }
LAB_04c29a74:
  if (*(int *)(*plVar7 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  FUN_03532d08(0,*(undefined8 *)PTR_DAT_065e5f20);
  return;
}


