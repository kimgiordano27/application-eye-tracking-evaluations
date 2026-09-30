/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_DefaultValueHandling
ENTRY_POINT: 02708f08
PROGRAM: vrlegs-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


int Newtonsoft_Json_JsonSerializerSettings__get_DefaultValueHandling(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int unaff_w19;
  int unaff_w20;
  int iVar3;
  long *unaff_x24;
  
  if (unaff_w19 == 2) {
    iVar3 = 0xc;
  }
  else {
    if (*(int *)(param_2 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      param_1 = *(long *)(*(long *)(*unaff_x24 + 0xb8) + 8);
      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
    }
    if (*(uint *)(param_1 + 0x18) < 0xc) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    if (unaff_w19 != 3) {
      uVar1 = thunk_FUN_01a6ca08(PTR_DAT_03cf7fe0);
      uVar1 = FUN_027b3d94(uVar1,0);
      thunk_FUN_01a6ca08(PTR_DAT_03cbdd28);
      uVar2 = thunk_FUN_01a89e68();
      FUN_0276a4a8(uVar2,uVar1,0);
      uVar1 = thunk_FUN_01a6ca08(PTR_DAT_03cf7fe8);
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar2,uVar1);
    }
    iVar3 = unaff_w20 - *(int *)(param_1 + 0x4c);
  }
  return iVar3;
}


