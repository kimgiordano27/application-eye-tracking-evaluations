/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeObject
ENTRY_POINT: 058ae3ac
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonConvert__SerializeObject
               (long param_1,uint param_2,long param_3,uint param_4,uint *param_5,uint *param_6)

{
  ushort uVar1;
  uint uVar2;
  undefined *puVar3;
  long unaff_x19;
  ulong uVar4;
  
  if ((*(byte *)(unaff_x19 + 0xf99) & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_0727f070);
    thunk_FUN_032e1da0(PTR_DAT_07290a70);
    thunk_FUN_032e1da0(PTR_DAT_07291038);
    *(undefined1 *)(unaff_x19 + 0xf99) = 1;
  }
  *param_6 = 0;
  puVar3 = PTR_DAT_0727f070;
  if (0 < (int)param_2) {
    uVar4 = 0;
    do {
      uVar1 = *(ushort *)(param_1 + uVar4 * 2);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      if ((0x20 < uVar1) || ((1L << ((ulong)uVar1 & 0x3f) & 0x100002600U) == 0)) {
        uVar2 = *param_6;
        *param_6 = uVar2 + 1;
        if (param_4 <= uVar2) {
                    /* WARNING: Subroutine does not return */
          Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
        }
        *(ushort *)(param_3 + (long)(int)uVar2 * 2) = uVar1;
        if (uVar2 + 1 == param_4) {
          param_2 = (int)uVar4 + 1;
          break;
        }
      }
      uVar4 = uVar4 + 1;
    } while (param_2 != uVar4);
  }
  *param_5 = param_2;
  return;
}


