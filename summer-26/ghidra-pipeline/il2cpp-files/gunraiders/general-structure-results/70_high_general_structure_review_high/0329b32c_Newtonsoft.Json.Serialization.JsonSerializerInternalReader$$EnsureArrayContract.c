/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$EnsureArrayContract
ENTRY_POINT: 0329b32c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__EnsureArrayContract(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int unaff_w19;
  long unaff_x20;
  int iVar5;
  int iStack000000000000000c;
  
  puVar1 = PTR_DAT_042303d0;
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  if (0 < *(int *)(unaff_x20 + 0x10)) {
    iVar5 = 0;
    do {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      iVar2 = FUN_0324e0c0();
      if (iVar2 == 0x1d) {
        iStack000000000000000c = unaff_w19 + iVar5;
        uVar3 = thunk_FUN_01c273e8(PTR_DAT_0422fd80);
        uVar3 = thunk_FUN_01c49334(uVar3,&stack0x0000000c);
        uVar4 = thunk_FUN_01c273e8(
                                  Method_System_Collections_Generic_Dictionary<byte,_object>_set_Item__
                                  );
        uVar3 = System_Convert__ToSingle(uVar4,uVar3,0);
        thunk_FUN_01c273e8(PTR_DAT_04231770);
        uVar4 = thunk_FUN_01c496e0();
        FUN_032467a0(uVar4,uVar3,0);
        uVar3 = thunk_FUN_01c273e8(
                                  Method_System_Collections_Generic_Dictionary<byte,_PhotonTeam>__ctor__
                                  );
                    /* WARNING: Subroutine does not return */
        FUN_01c5d37c(uVar4,uVar3);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(unaff_x20 + 0x10));
  }
  return;
}


