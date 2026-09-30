/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$SerializeInternal
ENTRY_POINT: 032a6c9c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__SerializeInternal(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  long unaff_x21;
  
  if ((*(byte *)(unaff_x21 + 0xd36) & 1) == 0) {
    FUN_01c5d288(PTR_DAT_04232bd8);
    *(undefined1 *)(unaff_x21 + 0xd36) = 1;
  }
  FUN_03313b6c(param_1,0);
  if (param_2 != 0) {
    iVar4 = *(int *)(param_2 + 0x18);
    if (iVar4 < 1) {
      iVar4 = 0;
    }
    else {
      iVar1 = iVar4 + 0x1e;
      if (-1 < iVar4 + -1) {
        iVar1 = iVar4 + -1;
      }
      iVar4 = (iVar1 >> 5) + 1;
    }
    uVar2 = FUN_01c5d2fc(*(undefined8 *)PTR_DAT_04232bd8,iVar4);
    *(undefined8 *)(param_1 + 0x10) = uVar2;
    FUN_032f42b0(*(undefined8 *)(param_2 + 0x10),0,uVar2,0,iVar4,0);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    return;
  }
  thunk_FUN_01c273e8(PTR_DAT_0422fa20);
  uVar2 = thunk_FUN_01c496e0();
  uVar3 = thunk_FUN_01c273e8(
                            Method_System_Collections_Generic_Dictionary<Hash128,_int[]>_ContainsKey__
                            );
  FUN_0323fc78(uVar2,uVar3,0);
  uVar3 = thunk_FUN_01c273e8(
                            Method_System_Collections_Generic_Dictionary<Hash128,_int[]>_get_Count__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01c5d37c(uVar2,uVar3);
}


