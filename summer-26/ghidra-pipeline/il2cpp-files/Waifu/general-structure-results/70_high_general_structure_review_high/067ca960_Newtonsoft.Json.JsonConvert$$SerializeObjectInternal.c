/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeObjectInternal
ENTRY_POINT: 067ca960
PROGRAM: Waifu-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_JsonConvert__SerializeObjectInternal(long *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  uint in_w9;
  
                    /* try { // try from 067ca968 to 068ca983 has its CatchHandler @ 067cab64 */
  iVar2 = (int)((ulong)((long)(param_2 + -1) * (long)(int)(in_w9 & 0xffff | 0x88880000)) >> 0x20) +
          param_2 + -1;
  uVar4 = ((iVar2 >> 4) - (iVar2 >> 0x1f)) * 0x1e;
                    /* try { // try from 067ca994 to 068ca99b has its CatchHandler @ 067cab24 */
  param_2 = ~uVar4 + param_2;
  lVar6 = SUB168(SEXT816((long)(int)uVar4 * 0x2987) * SEXT816(-0x7777777777777777),8) +
          (long)(int)uVar4 * 0x2987;
                    /* try { // try from 067ca9a8 to 068ca9c7 has its CatchHandler @ 067cab30 */
  lVar6 = ((lVar6 >> 4) - (lVar6 >> 0x3f)) + 0x376c5;
  if (0 < param_2) {
    do {
                    /* try { // try from 067ca9c8 to 068caa6f has its CatchHandler @ 067cab68 */
      uVar5 = (**(code **)(*param_1 + 0x288))(param_1,param_2,0,*(undefined8 *)(*param_1 + 0x290));
      lVar3 = 0x162;
      if ((uVar5 & 1) != 0) {
        lVar3 = 0x163;
      }
      iVar2 = param_2 + -1;
      lVar6 = lVar3 + lVar6;
      bVar1 = 0 < param_2;
      param_2 = iVar2;
    } while (iVar2 != 0 && bVar1);
  }
  return lVar6;
}


