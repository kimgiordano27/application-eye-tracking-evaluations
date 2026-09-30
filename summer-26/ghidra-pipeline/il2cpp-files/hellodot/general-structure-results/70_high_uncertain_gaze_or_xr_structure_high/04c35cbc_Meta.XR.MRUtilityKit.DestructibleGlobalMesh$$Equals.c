/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.DestructibleGlobalMesh$$Equals
ENTRY_POINT: 04c35cbc
PROGRAM: hellodot-libil2cpp.so
SCORE: 88
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MRUtilityKit_DestructibleGlobalMesh__Equals(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined2 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  int *unaff_x19;
  long unaff_x20;
  long *plVar10;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  AkMIDIEventCallbackInfo__get_byProgramNum();
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e16d8);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e16e0);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e16e8);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e6558);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e5f18);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065cc870);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e54a8);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e1700);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e6560);
  *(undefined1 *)(unaff_x20 + 0x733) = 1;
  puVar1 = PTR_DAT_065e6510;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  if (*unaff_x19 == 0) {
    _in_stack_00000010 = *(undefined1 (*) [16])(unaff_x19 + 10);
    unaff_x19[10] = 0;
    unaff_x19[0xb] = 0;
    unaff_x19[0xc] = 0;
    unaff_x19[0xd] = 0;
    *unaff_x19 = -1;
  }
  else {
    plVar10 = *(long **)(unaff_x19 + 8);
    in_stack_00000008._4_2_ = 0;
    FUN_03c80878((long)&stack0x00000008 + 4,0,*(undefined8 *)PTR_DAT_065cc870);
    uVar3 = in_stack_00000008._4_2_;
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_065e6558) {
          puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 5) * 0x10 + 0x138);
          goto LAB_04c35de0;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_02ce0a7c(plVar10,*(long *)PTR_DAT_065e6558,5);
LAB_04c35de0:
    (*(code *)*puVar4)(plVar10,uVar3,puVar4[1]);
    lVar7 = FUN_04c35988();
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    _in_stack_00000010 = FUN_0404bcb8(lVar7,0,*(undefined8 *)PTR_DAT_065e1700);
    uVar8 = FUN_044a8fc8(&stack0x00000010,*(undefined8 *)PTR_DAT_065e16e8);
    if ((uVar8 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined1 (*) [16])(unaff_x19 + 10) = _in_stack_00000010;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      FUN_030afc04(unaff_x19 + 2,&stack0x00000010);
      return;
    }
  }
  uVar5 = FUN_044a9014(&stack0x00000010,*(undefined8 *)PTR_DAT_065e16e0);
  lVar7 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e54a8);
  FUN_054e1c10(lVar7,uVar5,0);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  lVar6 = FUN_054d80d0(lVar7,0);
  uVar5 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e5f18);
  System_Xml_XmlEncodedRawTextWriter__FlushBuffer(uVar5,*(undefined8 *)PTR_DAT_065e6560,0);
  if (lVar6 != 0) {
    FUN_054db260(lVar6,uVar5,0);
    *unaff_x19 = -2;
    puVar2 = PTR_DAT_065e6550;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    FUN_04266690(unaff_x19 + 2,lVar7,*(undefined8 *)puVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


