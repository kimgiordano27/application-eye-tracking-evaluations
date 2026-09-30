/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateNewObject
ENTRY_POINT: 05926a1c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateNewObject(void)

{
  uint uVar1;
  undefined2 uVar2;
  ulong uVar3;
  long unaff_x19;
  long unaff_x21;
  long lVar4;
  long lVar5;
  
  if (*(int *)(*(long *)PTR_DAT_072969e0 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  FUN_0592b640();
  uVar3 = FUN_059321b0();
  if ((uVar3 & 1) == 0) {
LAB_05926adc:
    if (*(int *)(*(long *)PTR_DAT_072969e0 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    FUN_0592c380();
    return;
  }
  if (unaff_x19 != 0) {
    lVar4 = *(long *)(unaff_x19 + 0x30);
    if (DAT_076d53fa == '\0') {
      thunk_FUN_032e1da0(PTR_DAT_07291038);
      DAT_076d53fa = '\x01';
    }
    if (lVar4 != 0) {
      if (*(int *)(lVar4 + 0x10) == 1) {
        uVar1 = *(uint *)(unaff_x21 + 0x18);
        if ((int)uVar1 < (int)*(uint *)(unaff_x21 + 0x10)) {
          if (*(uint *)(unaff_x21 + 0x10) <= uVar1) {
                    /* WARNING: Subroutine does not return */
            Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
          }
          lVar5 = *(long *)(unaff_x21 + 8);
          uVar2 = FUN_057a62b4(lVar4,0,0);
          *(undefined2 *)(lVar5 + (long)(int)uVar1 * 2) = uVar2;
          *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
          goto LAB_05926adc;
        }
      }
      FUN_057c5e60();
      goto LAB_05926adc;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


