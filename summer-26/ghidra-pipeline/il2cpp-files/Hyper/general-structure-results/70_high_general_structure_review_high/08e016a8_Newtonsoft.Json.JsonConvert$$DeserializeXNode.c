/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeXNode
ENTRY_POINT: 08e016a8
PROGRAM: Hyper-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonConvert__DeserializeXNode(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long unaff_x19;
  undefined8 uVar11;
  long unaff_x21;
  long lVar12;
  
  FUN_04947ee4(PTR_DAT_0ac6a088);
                    /* try { // try from 08e016b4 to 08f016c3 has its CatchHandler @ 08e01720 */
  *(undefined1 *)(unaff_x21 + 0xbfe) = 1;
  uVar8 = FUN_08bd6050(0);
  puVar1 = PTR_DAT_0ac10af0;
                    /* try { // try from 08e016c4 to 08f0174b has its CatchHandler @ 08e01628 */
  if ((uVar8 & 1) == 0) {
    if (unaff_x19 == 0) goto LAB_08e01838;
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_0ac10af0 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    if (DAT_0b32413f == '\0') {
      FUN_04947ee4(PTR_DAT_0ac10af0);
      DAT_0b32413f = '\x01';
    }
    lVar9 = *(long *)puVar1;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      lVar9 = *(long *)puVar1;
    }
    plVar10 = (long *)FUN_04947efc(lVar9);
    if (unaff_x19 == 0) goto LAB_08e01838;
    lVar9 = *plVar10;
    lVar12 = *(long *)(unaff_x19 + 0x30);
    uVar2 = FUN_08df9828();
    uVar3 = 0;
    if (lVar9 != 0) {
      uVar3 = FUN_08df4448(lVar9);
    }
    uVar4 = FUN_08df4448();
    uVar5 = 0;
    if (lVar12 != 0) {
      uVar5 = FUN_08df4448(lVar12);
    }
    uVar6 = FUN_08df5130();
    FUN_08bd623c(uVar2,uVar3,uVar4,uVar5,uVar6,0);
  }
  uVar7 = FUN_08df5130();
  puVar1 = PTR_DAT_0ac6a088;
  if ((uVar7 >> 1 & 1) == 0) {
    FUN_08df5130();
    FUN_08deecd8();
    return;
  }
  lVar9 = *(long *)PTR_DAT_0ac6a088;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_049a583c();
    lVar9 = *(long *)puVar1;
  }
  uVar11 = **(undefined8 **)(lVar9 + 0xb8);
  if (*(int *)(*(long *)PTR_DAT_0ac44968 + 0xe4) == 0) {
    thunk_FUN_049a583c(*(long *)PTR_DAT_0ac44968);
  }
  lVar9 = FUN_08bd645c(uVar11,0,0);
  if (lVar9 != 0) {
    FUN_08bd6500(lVar9,1,0);
    FUN_08bd651c(lVar9);
    return;
  }
LAB_08e01838:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


