/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$GetExpectedDescription
ENTRY_POINT: 05925a10
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


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetExpectedDescription(void)

{
  undefined2 uVar1;
  uint uVar2;
  ulong uVar3;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  long lVar4;
  long *unaff_x22;
  long *unaff_x24;
  uint uVar5;
  
  thunk_FUN_032e1da0(PTR_DAT_07290a70);
  *(undefined1 *)(unaff_x21 + 0x3a2) = 1;
  uVar2 = unaff_w20;
  do {
    uVar5 = uVar2;
    uVar2 = uVar5 - 1;
    if ((int)uVar2 < 0) break;
    if (unaff_w20 <= uVar2) {
                    /* WARNING: Subroutine does not return */
      Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
    }
    uVar1 = *(undefined2 *)(unaff_x19 + (ulong)uVar2 * 2);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar3 = FUN_058a1fe4(uVar1,0);
  } while ((uVar3 & 1) != 0);
  lVar4 = *unaff_x22;
  if (unaff_w20 < uVar5) {
    FUN_05943e6c(0);
  }
  if ((*(byte *)(*(long *)(lVar4 + 0x20) + 0x135) & 1) == 0) {
    FUN_032934b8();
  }
  return;
}


