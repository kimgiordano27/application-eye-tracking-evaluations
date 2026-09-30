/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$DeserializeInternal
ENTRY_POINT: 01bc91e4
PROGRAM: vrfs-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


int Newtonsoft_Json_Serialization_JsonSerializerProxy__DeserializeInternal(void)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  byte in_w8;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  int unaff_w24;
  long unaff_x26;
  undefined1 unaff_w27;
  
  while( true ) {
    if ((in_w8 & 1) == 0) {
      thunk_FUN_0159f088();
      thunk_FUN_0159f088();
      thunk_FUN_0159f088();
      thunk_FUN_0159f088();
      *(undefined1 *)(unaff_x26 + 0xd13) = unaff_w27;
    }
    if (unaff_w24 == 0x37) {
      return 0x37;
    }
    if (unaff_x19 == 0) break;
    uVar1 = FUN_02679270();
    if (*(int *)(*unaff_x20 + 0xe0) == 0) {
      thunk_FUN_016466fc(*unaff_x20);
    }
    uVar2 = FUN_051d2ac0(uVar1,0,0);
    if ((uVar2 & 1) != 0) {
      return unaff_w24;
    }
    lVar3 = *unaff_x21;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      lVar3 = *unaff_x21;
    }
    if ((**(long **)(lVar3 + 0xb8) == 0) ||
       (lVar3 = FUN_03d20510(**(long **)(lVar3 + 0xb8),unaff_w24,*unaff_x22), lVar3 == 0)) break;
    unaff_w24 = *(int *)(lVar3 + 0x14);
    in_w8 = *(byte *)(unaff_x26 + 0xd13);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


