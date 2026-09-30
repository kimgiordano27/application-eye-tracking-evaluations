/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_MissingMemberHandling
ENTRY_POINT: 05ac94fc
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


void Newtonsoft_Json_Serialization_JsonSerializerProxy__set_MissingMemberHandling
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  uint in_w8;
  long in_x9;
  long in_x10;
  int in_w11;
  undefined4 in_register_0000405c;
  uint *puVar3;
  long in_x12;
  long in_x13;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long *plVar4;
  long lVar5;
  
  do {
    uVar1 = (int)in_x12 - (int)in_x13 * (int)in_x9;
    if (in_w8 <= uVar1) {
LAB_05ac9508:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    plVar4 = (long *)(unaff_x20 + (long)(int)uVar1 * (long)in_w11 + 0x20);
    lVar5 = (long)(int)uVar1;
    if ((*plVar4 == 0) || (*plVar4 == *(long *)(param_1 + 0x10))) {
      puVar2 = (undefined8 *)(unaff_x20 + lVar5 * 0x18 + 0x28);
      *puVar2 = param_4;
      thunk_FUN_03048534(puVar2,param_4);
      if (uVar1 < *(uint *)(unaff_x20 + 0x18)) {
        *plVar4 = unaff_x21;
        thunk_FUN_03048534(plVar4);
        if (uVar1 < *(uint *)(unaff_x20 + 0x18)) {
          lVar5 = unaff_x20 + lVar5 * 0x18;
          *(uint *)(lVar5 + 0x30) = *(uint *)(lVar5 + 0x30) | unaff_w19;
          return;
        }
      }
      goto LAB_05ac9508;
    }
    puVar3 = (uint *)(unaff_x20 + lVar5 * CONCAT44(in_register_0000405c,in_w11) + 0x30);
    uVar1 = *puVar3;
    if (-1 < (int)uVar1) {
      *puVar3 = uVar1 | 0x80000000;
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    }
    in_x12 = lVar5 + in_x10;
    in_x13 = 0;
    if (in_x9 != 0) {
      in_x13 = in_x12 / in_x9;
    }
  } while( true );
}


