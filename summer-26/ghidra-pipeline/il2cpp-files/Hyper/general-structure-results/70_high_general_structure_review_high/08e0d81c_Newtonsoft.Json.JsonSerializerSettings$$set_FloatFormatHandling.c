/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_FloatFormatHandling
ENTRY_POINT: 08e0d81c
PROGRAM: Hyper-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_JsonSerializerSettings__set_FloatFormatHandling(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long unaff_x19;
  undefined8 unaff_x20;
  long lVar13;
  undefined8 unaff_x21;
  undefined8 uVar14;
  undefined8 *unaff_x22;
  
  FUN_04947ee4(PTR_DAT_0ac6a978);
  FUN_04947ee4(PTR_DAT_0ac6a938);
                    /* try { // try from 08e0d838 to 08f0d83b has its CatchHandler @ 08e0d944 */
                    /* try { // try from 08e0d83c to 08f0d8cf has its CatchHandler @ 08e0d478 */
  FUN_04947ee4(PTR_DAT_0ac6a6e0);
  *(undefined1 *)(unaff_x19 + 0xc5a) = 1;
  lVar8 = thunk_FUN_04983f60(*unaff_x22);
  FUN_08dbf2f0(lVar8,0);
  puVar1 = PTR_DAT_0ac6a6e0;
  if (lVar8 != 0) {
    *(undefined8 *)(lVar8 + 0x18) = unaff_x21;
    thunk_FUN_049ee3d8();
    *(undefined8 *)(lVar8 + 0x10) = unaff_x20;
    thunk_FUN_049ee3d8();
    lVar9 = *(long *)puVar1;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      lVar9 = *(long *)puVar1;
    }
    puVar7 = PTR_DAT_0ac6a978;
    puVar6 = PTR_DAT_0ac6a968;
    puVar5 = PTR_DAT_0ac6a960;
    puVar4 = PTR_DAT_0ac6a958;
    puVar3 = PTR_DAT_0ac6a948;
    puVar2 = PTR_DAT_0ac6a940;
    puVar12 = *(undefined8 **)(lVar9 + 0xb8);
    lVar13 = puVar12[2];
    if (lVar13 == 0) {
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_049a583c();
        puVar12 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
      }
      uVar14 = *puVar12;
      lVar13 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac6a950);
      FUN_063d4f5c(lVar13,uVar14,*(undefined8 *)PTR_DAT_0ac6a970,0);
      plVar10 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
      *plVar10 = lVar13;
      thunk_FUN_049ee3d8(plVar10,lVar13);
    }
    uVar14 = thunk_FUN_04983f60(*(undefined8 *)puVar4);
    FUN_06421e50(uVar14,lVar8,*(undefined8 *)puVar7,0);
    uVar11 = thunk_FUN_04983f60(*(undefined8 *)puVar6);
    FUN_0717ef20(uVar11,lVar13,uVar14,*(undefined8 *)puVar5);
    uVar14 = thunk_FUN_04983f60(*(undefined8 *)puVar3);
    FUN_06351420(uVar14,uVar11,*(undefined8 *)puVar2);
    return uVar14;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


