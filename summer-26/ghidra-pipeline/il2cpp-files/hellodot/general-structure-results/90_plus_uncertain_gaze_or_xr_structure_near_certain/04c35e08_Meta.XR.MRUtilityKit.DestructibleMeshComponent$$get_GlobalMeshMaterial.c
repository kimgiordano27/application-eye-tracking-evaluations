/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.DestructibleMeshComponent$$get_GlobalMeshMaterial
ENTRY_POINT: 04c35e08
PROGRAM: hellodot-libil2cpp.so
SCORE: 96
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;ui_interaction;data_collection
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MRUtilityKit_DestructibleMeshComponent__get_GlobalMeshMaterial(void)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined4 *unaff_x19;
  long *unaff_x23;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  _in_stack_00000010 = FUN_0404bcb8();
  uVar2 = FUN_044a8fc8(&stack0x00000010,*(undefined8 *)PTR_DAT_065e16e8);
  if ((uVar2 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined1 (*) [16])(unaff_x19 + 10) = _in_stack_00000010;
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    FUN_030afc04(unaff_x19 + 2,&stack0x00000010);
  }
  else {
    uVar3 = FUN_044a9014(&stack0x00000010,*(undefined8 *)PTR_DAT_065e16e0);
    lVar4 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e54a8);
    FUN_054e1c10(lVar4,uVar3,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar5 = FUN_054d80d0(lVar4,0);
    uVar3 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e5f18);
    System_Xml_XmlEncodedRawTextWriter__FlushBuffer(uVar3,*(undefined8 *)PTR_DAT_065e6560,0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    FUN_054db260(lVar5,uVar3,0);
    *unaff_x19 = 0xfffffffe;
    puVar1 = PTR_DAT_065e6550;
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    FUN_04266690(unaff_x19 + 2,lVar4,*(undefined8 *)puVar1);
  }
  return;
}


