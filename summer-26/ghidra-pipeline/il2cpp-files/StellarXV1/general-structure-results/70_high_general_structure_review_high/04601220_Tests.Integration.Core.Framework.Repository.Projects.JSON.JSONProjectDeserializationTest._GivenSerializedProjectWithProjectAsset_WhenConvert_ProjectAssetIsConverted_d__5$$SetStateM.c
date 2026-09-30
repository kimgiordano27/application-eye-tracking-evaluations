/*
FUNCTION_NAME: Tests.Integration.Core.Framework.Repository.Projects.JSON.JSONProjectDeserializationTest.<GivenSerializedProjectWithProjectAsset_WhenConvert_ProjectAssetIsConverted>d__5$$SetStateMachine
ENTRY_POINT: 04601220
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Tests_Integration_Core_Framework_Repository_Projects_JSON_JSONProjectDeserializationTest_<GivenSerializedProjectWithProjectAsset_WhenConvert_ProjectAssetIsConverted>d__5__SetStateMachine
               (undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *plVar2;
  long lVar3;
  long *unaff_x25;
  
  plVar2 = (long *)(unaff_x20 + 0x28);
  if (*plVar2 != 0) {
    *(undefined8 *)(*plVar2 + 0x10) = param_2;
    thunk_FUN_040ec700();
    lVar3 = *plVar2;
    uVar1 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_09295c80);
    FUN_07895900(uVar1,lVar3,*(undefined8 *)PTR_DAT_092a1468,0);
    FUN_04e339c4(uVar1,*(undefined8 *)PTR_DAT_092a1458);
    *unaff_x19 = 0xfffffffe;
    *(undefined8 *)(unaff_x19 + 10) = 0;
    thunk_FUN_040ec700(plVar2,0);
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_0759053c(unaff_x19 + 2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


