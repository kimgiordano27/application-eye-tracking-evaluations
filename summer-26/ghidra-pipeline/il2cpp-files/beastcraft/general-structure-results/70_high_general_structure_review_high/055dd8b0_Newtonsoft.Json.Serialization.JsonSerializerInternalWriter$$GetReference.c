/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$GetReference
ENTRY_POINT: 055dd8b0
PROGRAM: beastcraft-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__GetReference(void)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  int in_w8;
  long unaff_x19;
  int iVar6;
  undefined8 uVar7;
  long *unaff_x22;
  
  iVar6 = 2;
  iVar1 = 2;
  if (2 < in_w8) {
    do {
      iVar6 = iVar1;
      uVar2 = FUN_05487524();
      if (*(int *)(*unaff_x22 + 0xe4) == 0) {
        thunk_FUN_02e9a04c(*unaff_x22);
      }
      uVar3 = FUN_055d3e14(uVar2);
      in_w8 = *(int *)(unaff_x19 + 0x10);
    } while (((uVar3 & 1) == 0) &&
            (iVar6 = iVar6 + 1, iVar1 = iVar6, iVar6 < in_w8
                    /* try { // try from 055dd8f4 to 056dd91f has its CatchHandler @ 055ddc38 */));
  }
  if (iVar6 < in_w8) {
    do {
      iVar6 = iVar6 + 1;
      if (*(int *)(unaff_x19 + 0x10) <= iVar6) break;
      uVar2 = FUN_05487524();
      if (*(int *)(*unaff_x22 + 0xe4) == 0) {
        thunk_FUN_02e9a04c(*unaff_x22);
      }
      uVar3 = FUN_055d3e14(uVar2);
    } while ((uVar3 & 1) == 0);
  }
  lVar4 = *unaff_x22;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
    lVar4 = *unaff_x22;
  }
                    /* try { // try from 055dd968 to 056dd96b has its CatchHandler @ 055ddbf0 */
  uVar7 = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x10);
  lVar4 = FUN_0548f424();
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
                    /* try { // try from 055dd98c to 056dd98f has its CatchHandler @ 055ddc04 */
  uVar5 = FUN_0548fcdc(lVar4,*(undefined2 *)(*(long *)(*unaff_x22 + 0xb8) + 8),
                       *(undefined2 *)(*(long *)(*unaff_x22 + 0xb8) + 10),0);
  FUN_0548d5a0(uVar7,uVar7,uVar5,0);
  return;
}


