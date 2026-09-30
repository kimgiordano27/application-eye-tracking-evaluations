/*
FUNCTION_NAME: FUN_05ca9c94
ENTRY_POINT: 05ca9c94
PROGRAM: hellodot-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


bool FUN_05ca9c94(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((DAT_06a7a0fc & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(Newtonsoft_Json_JsonTextReader_var);
    AkMIDIEventCallbackInfo__get_byProgramNum(Newtonsoft_Json_JsonTextWriter_var);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06612ec8);
    AkMIDIEventCallbackInfo__get_byProgramNum(Newtonsoft_Json_JsonToken_var);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Newtonsoft_Json_Serialization_JsonSerializerInternalWriter_var);
    DAT_06a7a0fc = 1;
  }
  iVar1 = *(int *)(param_1 + 0x28) + -1;
  *(int *)(param_1 + 0x28) = iVar1;
  puVar2 = Newtonsoft_Json_Serialization_JsonSerializerInternalWriter_var;
  if (iVar1 == 0) {
    lVar3 = *(long *)Newtonsoft_Json_Serialization_JsonSerializerInternalWriter_var;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
      lVar3 = *(long *)puVar2;
    }
    uVar5 = **(undefined8 **)(lVar3 + 0xb8);
    uVar4 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_06612ec8);
    FUN_0466bfa4(uVar4,uVar5,*(undefined8 *)Newtonsoft_Json_JsonTextReader_var);
    *(undefined8 *)(param_1 + 0x10) = uVar4;
    *(undefined4 *)(param_1 + 0x18) = 0;
    uVar4 = thunk_FUN_02cea894(*(undefined8 *)Newtonsoft_Json_JsonToken_var);
    FUN_045d8af8(uVar4,*(undefined8 *)Newtonsoft_Json_JsonTextWriter_var);
    iVar1 = *(int *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x20) = uVar4;
  }
  if (-1 < iVar1) {
    return iVar1 == 0;
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  thunk_FUN_02c7737c(PTR_DAT_065cfdb8);
  uVar4 = thunk_FUN_02cea894();
  uVar5 = thunk_FUN_02c7737c(UnityEngine_ResourceManagement_Util_ObjectInitializationData_var);
  FUN_04f30dfc(uVar4,uVar5,0);
  uVar5 = thunk_FUN_02c7737c(Niantic_Peridot_Telemetry_ObjectMove_var);
                    /* WARNING: Subroutine does not return */
  FUN_02ce7b54(uVar4,uVar5);
}


