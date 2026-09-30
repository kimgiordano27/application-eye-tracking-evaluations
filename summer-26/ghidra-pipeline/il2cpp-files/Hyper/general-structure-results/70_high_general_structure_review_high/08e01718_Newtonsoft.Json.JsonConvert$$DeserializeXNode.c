/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeXNode
ENTRY_POINT: 08e01718
PROGRAM: Hyper-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonConvert__DeserializeXNode(long *param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  long unaff_x19;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  
  if (unaff_x19 != 0) {
    lVar9 = *param_1;
                    /* catch(type#1 @ 0a568bf8) { ... } // from try @ 08e016b4 with catch @ 08e01720
                        */
    lVar10 = *(long *)(unaff_x19 + 0x30);
    uVar2 = FUN_08df9828();
    uVar3 = 0;
    if (lVar9 != 0) {
      uVar3 = FUN_08df4448(lVar9);
    }
    uVar4 = FUN_08df4448();
                    /* try { // try from 08e0174c to 08f0174f has its CatchHandler @ 08e017ac */
    uVar5 = 0;
    if (lVar10 != 0) {
                    /* try { // try from 08e01750 to 08f0179b has its CatchHandler @ 08e01628 */
      uVar5 = FUN_08df4448(lVar10);
    }
    uVar6 = FUN_08df5130();
    FUN_08bd623c(uVar2,uVar3,uVar4,uVar5,uVar6,0);
    uVar7 = FUN_08df5130();
    puVar1 = PTR_DAT_0ac6a088;
    if ((uVar7 >> 1 & 1) == 0) {
      FUN_08df5130();
                    /* try { // try from 08e0179c to 08f017ab has its CatchHandler @ 08e017ac */
                    /* catch() { ... } // from try @ 08e0174c with catch @ 08e017ac
                       catch() { ... } // from try @ 08e0179c with catch @ 08e017ac */
                    /* try { // try from 08e017b0 to 08f017b3 has its CatchHandler @ 08e017bc */
                    /* try { // try from 08e017b4 to 08f017bf has its CatchHandler @ 08e01628 */
      FUN_08deecd8();
      return;
    }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 08e017b0 with catch @ 08e017bc
                        */
    lVar9 = *(long *)PTR_DAT_0ac6a088;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      lVar9 = *(long *)puVar1;
    }
                    /* try { // try from 08e017e0 to 08f01877 has its CatchHandler @ 08e017e0
                       catch() { ... } // from try @ 08e017e0 with catch @ 08e017e0
                       catch() { ... } // from try @ 08e01888 with catch @ 08e017e0
                       catch() { ... } // from try @ 08e01924 with catch @ 08e017e0
                       catch() { ... } // from try @ 08e01984 with catch @ 08e017e0 */
    uVar8 = **(undefined8 **)(lVar9 + 0xb8);
    if (*(int *)(*(long *)PTR_DAT_0ac44968 + 0xe4) == 0) {
      thunk_FUN_049a583c(*(long *)PTR_DAT_0ac44968);
    }
    lVar9 = FUN_08bd645c(uVar8,0,0);
    if (lVar9 != 0) {
      FUN_08bd6500(lVar9,1,0);
      FUN_08bd651c(lVar9);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


