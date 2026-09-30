/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_DateFormatHandling
ENTRY_POINT: 07613314
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__set_DateFormatHandling(void)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int unaff_w20;
  long unaff_x21;
  
  iVar2 = FUN_0769286c();
  iVar1 = *(int *)(unaff_x21 + 0x20);
                    /* try { // try from 0761331c to 0771331f has its CatchHandler @ 076134d8 */
  if (iVar2 - unaff_w20 < iVar1) {
    thunk_FUN_040dedf8(PTR_DAT_09287028);
    uVar3 = thunk_FUN_040b4efc();
    uVar4 = thunk_FUN_040dedf8(PTR_DAT_092b7000);
    FUN_075d4b88(uVar3,uVar4,0);
    uVar4 = thunk_FUN_040dedf8(PTR_DAT_092d8658);
                    /* WARNING: Subroutine does not return */
    FUN_040776f4(uVar3,uVar4);
  }
  if (iVar1 == 0) {
    return;
  }
  if (*(long *)(unaff_x21 + 0x10) != 0) {
                    /* try { // try from 07613334 to 07713343 has its CatchHandler @ 076134d4 */
    iVar2 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - *(int *)(unaff_x21 + 0x18);
    if (iVar1 <= iVar2) {
      iVar2 = iVar1;
    }
    FUN_0769cb24();
    if (iVar1 - iVar2 < 1) {
      return;
    }
                    /* try { // try from 0761336c to 0771336f has its CatchHandler @ 076134f4 */
    if (*(long *)(unaff_x21 + 0x10) != 0) {
      FUN_0769cb24(*(long *)(unaff_x21 + 0x10),0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


