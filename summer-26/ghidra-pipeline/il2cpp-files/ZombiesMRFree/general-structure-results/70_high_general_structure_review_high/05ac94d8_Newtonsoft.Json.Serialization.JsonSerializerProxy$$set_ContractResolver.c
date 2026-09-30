/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_ContractResolver
ENTRY_POINT: 05ac94d8
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__set_ContractResolver
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  uint in_w8;
  long lVar4;
  long in_x9;
  long in_x10;
  int in_w11;
  undefined4 in_register_0000405c;
  long in_x12;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long *plVar5;
  long unaff_x23;
  
  while( true ) {
    uVar1 = *(uint *)(in_x12 + 0x30);
    if (-1 < (int)uVar1) {
      *(uint *)(in_x12 + 0x30) = uVar1 | 0x80000000;
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    }
    iVar2 = 0;
    if (in_x9 != 0) {
      iVar2 = (int)((unaff_x23 + in_x10) / in_x9);
    }
    uVar1 = (int)(unaff_x23 + in_x10) - iVar2 * (int)in_x9;
    if (in_w8 <= uVar1) goto LAB_05ac9508;
    plVar5 = (long *)(unaff_x20 + (long)(int)uVar1 * (long)in_w11 + 0x20);
    unaff_x23 = (long)(int)uVar1;
    if ((*plVar5 == 0) || (*plVar5 == *(long *)(param_1 + 0x10))) break;
    in_x12 = unaff_x20 + unaff_x23 * CONCAT44(in_register_0000405c,in_w11);
  }
  puVar3 = (undefined8 *)(unaff_x20 + unaff_x23 * 0x18 + 0x28);
  *puVar3 = param_4;
  thunk_FUN_03048534(puVar3,param_4);
  if (uVar1 < *(uint *)(unaff_x20 + 0x18)) {
    *plVar5 = unaff_x21;
    thunk_FUN_03048534(plVar5);
    if (uVar1 < *(uint *)(unaff_x20 + 0x18)) {
      lVar4 = unaff_x20 + unaff_x23 * 0x18;
      *(uint *)(lVar4 + 0x30) = *(uint *)(lVar4 + 0x30) | unaff_w19;
      return;
    }
  }
LAB_05ac9508:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94f0();
}


