/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$.ctor
ENTRY_POINT: 032a6bb4
PROGRAM: gunraiders-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy___ctor(undefined8 *param_1)

{
  long lVar1;
  uint uVar2;
  char in_NG;
  char in_OV;
  long lVar3;
  ulong uVar4;
  int in_w9;
  int iVar5;
  ulong uVar6;
  int in_w10;
  long unaff_x19;
  long unaff_x20;
  
  if (in_NG == in_OV) {
    in_w10 = in_w9;
  }
  lVar3 = FUN_01c5d2fc(*param_1,(in_w10 >> 5) + 1);
  *(long *)(unaff_x19 + 0x10) = lVar3;
  uVar6 = *(ulong *)(unaff_x20 + 0x18);
  iVar5 = (int)uVar6;
  *(int *)(unaff_x19 + 0x18) = iVar5;
  if (0 < iVar5) {
    uVar4 = 0;
    do {
      if (*(char *)(unaff_x20 + 0x20 + uVar4) != '\0') {
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        uVar2 = (uint)(uVar4 >> 5) & 0x7ffffff;
        if (*(uint *)(lVar3 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4ac();
        }
        lVar1 = lVar3 + (ulong)uVar2 * 4;
        *(uint *)(lVar1 + 0x20) = *(uint *)(lVar1 + 0x20) | 1 << (ulong)((uint)uVar4 & 0x1f);
      }
      uVar4 = uVar4 + 1;
    } while ((uVar6 & 0xffffffff) != uVar4);
  }
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}


