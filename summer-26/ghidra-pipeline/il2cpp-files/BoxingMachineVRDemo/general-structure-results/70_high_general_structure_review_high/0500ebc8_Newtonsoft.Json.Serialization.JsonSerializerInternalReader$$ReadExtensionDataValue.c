/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ReadExtensionDataValue
ENTRY_POINT: 0500ebc8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ReadExtensionDataValue
               (short *param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  short *psVar4;
  short *psVar5;
  uint in_w9;
  int in_w11;
  ulong uVar6;
  long unaff_x19;
  ulong unaff_x20;
  ulong uVar7;
  short *psVar8;
  
  psVar8 = param_1;
  do {
    do {
      uVar6 = (unaff_x20 & 0xffffffff) * (ulong)(in_w9 & 0xffff | 0xcccc0000);
      uVar3 = (uint)unaff_x20;
      uVar7 = uVar6 >> 0x23;
      psVar8 = psVar8 + -1;
                    /* try { // try from 0500ebec to 0510ec07 has its CatchHandler @ 0500ec20 */
      *psVar8 = (short)unaff_x20 + (short)(uint)(uVar6 >> 0x23) * -10 + 0x30;
      iVar2 = in_w11 + -1;
      bVar1 = -1 < in_w11;
      unaff_x20 = uVar7;
      in_w11 = iVar2;
    } while (bVar1);
  } while (9 < uVar3);
                    /* try { // try from 0500ec08 to 0510ec0b has its CatchHandler @ 0500ec14 */
  uVar6 = (long)param_1 - (long)psVar8;
                    /* try { // try from 0500ec0c to 0510ec33 has its CatchHandler @ 0500e92c */
  if ((long)uVar6 < 0) {
    uVar6 = uVar6 + 1;
  }
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 0500ec08 with catch @ 0500ec14
                        */
  uVar6 = uVar6 >> 1;
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 0500eaac with catch @ 0500ec18
                        */
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 0500ea50 with catch @ 0500ec1c
                        */
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 0500ebec with catch @ 0500ec20
                        */
  *(int *)(unaff_x19 + 4) = (int)uVar6;
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 0500eae0 with catch @ 0500ec24
                        */
  psVar4 = (short *)FUN_05015994();
  psVar5 = psVar4;
  if (-1 < (int)uVar6 + -1) {
    do {
                    /* try { // try from 0500ec34 to 0510ec37 has its CatchHandler @ 0500ec48 */
      uVar3 = (int)uVar6 - 1;
      uVar6 = (ulong)uVar3;
      psVar4 = psVar5 + 1;
      *psVar5 = *psVar8;
      psVar5 = psVar4;
      psVar8 = psVar8 + 1;
    } while (0 < (int)uVar3);
  }
                    /* catch() { ... } // from try @ 0500ec34 with catch @ 0500ec48 */
  *psVar4 = 0;
  return;
}


