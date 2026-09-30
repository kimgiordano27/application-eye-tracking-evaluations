/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_ObjectCreationHandling
ENTRY_POINT: 04f9e0d8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__set_ObjectCreationHandling(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x21;
  
  uVar1 = thunk_FUN_02d9d534();
  FUN_04894d4c(uVar1,*(undefined8 *)PTR_DAT_06778328);
  puVar2 = (undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x30);
  *puVar2 = uVar1;
  thunk_FUN_02dd37b4(puVar2,uVar1);
  lVar3 = *unaff_x21;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x21;
  }
  if ((unaff_x19 != 0) && (lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x28), lVar3 != 0)) {
    FUN_047cadf0(lVar3,*(undefined4 *)(unaff_x19 + 0x14));
    lVar3 = *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x30);
    if (lVar3 != 0) {
      FUN_048956dc(lVar3,*(undefined8 *)(unaff_x19 + 0x48));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


