/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.DestructibleMeshComponent.<>c__DisplayClass22_0$$.ctor
ENTRY_POINT: 04c35e48
PROGRAM: hellodot-libil2cpp.so
SCORE: 82
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MRUtilityKit_DestructibleMeshComponent_<>c__DisplayClass22_0___ctor
               (undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 *unaff_x19;
  long *unaff_x23;
  
  lVar2 = thunk_FUN_02cea894(*param_1);
  FUN_054e1c10(lVar2,param_2,0);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  lVar3 = FUN_054d80d0(lVar2,0);
  uVar4 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e5f18);
  System_Xml_XmlEncodedRawTextWriter__FlushBuffer(uVar4,*(undefined8 *)PTR_DAT_065e6560,0);
  if (lVar3 != 0) {
    FUN_054db260(lVar3,uVar4,0);
    *unaff_x19 = 0xfffffffe;
    puVar1 = PTR_DAT_065e6550;
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    FUN_04266690(unaff_x19 + 2,lVar2,*(undefined8 *)puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


