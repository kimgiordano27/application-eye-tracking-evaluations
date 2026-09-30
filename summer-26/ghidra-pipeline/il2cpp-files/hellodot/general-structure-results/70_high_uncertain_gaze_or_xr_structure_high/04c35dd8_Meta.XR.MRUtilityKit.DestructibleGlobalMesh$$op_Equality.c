/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.DestructibleGlobalMesh$$op_Equality
ENTRY_POINT: 04c35dd8
PROGRAM: hellodot-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MRUtilityKit_DestructibleGlobalMesh__op_Equality(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  int in_w9;
  undefined4 *unaff_x19;
  long *unaff_x23;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  (**(code **)(param_1 + (long)in_w9 * 0x10 + 0x138))();
  lVar2 = FUN_04c35988();
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  _in_stack_00000010 = FUN_0404bcb8(lVar2,0,*(undefined8 *)PTR_DAT_065e1700);
  uVar3 = FUN_044a8fc8(&stack0x00000010,*(undefined8 *)PTR_DAT_065e16e8);
  if ((uVar3 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined1 (*) [16])(unaff_x19 + 10) = _in_stack_00000010;
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    FUN_030afc04(unaff_x19 + 2,&stack0x00000010);
  }
  else {
    uVar4 = FUN_044a9014(&stack0x00000010,*(undefined8 *)PTR_DAT_065e16e0);
    lVar2 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e54a8);
    FUN_054e1c10(lVar2,uVar4,0);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar5 = FUN_054d80d0(lVar2,0);
    uVar4 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e5f18);
    System_Xml_XmlEncodedRawTextWriter__FlushBuffer(uVar4,*(undefined8 *)PTR_DAT_065e6560,0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    FUN_054db260(lVar5,uVar4,0);
    *unaff_x19 = 0xfffffffe;
    puVar1 = PTR_DAT_065e6550;
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    FUN_04266690(unaff_x19 + 2,lVar2,*(undefined8 *)puVar1);
  }
  return;
}


