/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$HandleError
ENTRY_POINT: 01bb8cac
PROGRAM: vrfs-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__HandleError
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_06dfae18;
  if ((bRam000000000722bcbb & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06e397e8);
    thunk_FUN_0159f088(PTR_DAT_06da8dc0);
    thunk_FUN_0159f088(PTR_DAT_06dfae18);
    bRam000000000722bcbb = 1;
  }
  FUN_02d76b34(param_1,0);
  *(undefined8 *)(param_1 + 0x10) = param_2;
  thunk_FUN_01656ef8((undefined8 *)(param_1 + 0x10),param_2);
  lVar3 = thunk_FUN_015d056c(*(undefined8 *)puVar1);
  if (lVar3 != 0) {
    FUN_01bbac40(lVar3,param_1,0x11e,0x101,0xf);
    *(long *)(param_1 + 0x18) = lVar3;
    thunk_FUN_01656ef8((long *)(param_1 + 0x18),lVar3);
    lVar3 = thunk_FUN_015d056c(*(undefined8 *)puVar1);
    if (lVar3 != 0) {
      FUN_01bbac40(lVar3,param_1,0x1e,1,0xf);
      *(long *)(param_1 + 0x20) = lVar3;
      thunk_FUN_01656ef8((long *)(param_1 + 0x20),lVar3);
      lVar3 = thunk_FUN_015d056c(*(undefined8 *)puVar1);
      puVar2 = PTR_DAT_06e397e8;
      puVar1 = PTR_DAT_06da8dc0;
      if (lVar3 != 0) {
        FUN_01bbac40(lVar3,param_1,0x13,4,7);
        *(long *)(param_1 + 0x28) = lVar3;
        thunk_FUN_01656ef8((long *)(param_1 + 0x28),lVar3);
        uVar4 = FUN_0160edfc(*(undefined8 *)puVar1,0x4000);
        *(undefined8 *)(param_1 + 0x30) = uVar4;
        thunk_FUN_01656ef8();
        uVar4 = FUN_0160edfc(*(undefined8 *)puVar2,0x4000);
        *(undefined8 *)(param_1 + 0x38) = uVar4;
        thunk_FUN_01656ef8((undefined8 *)(param_1 + 0x38));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


