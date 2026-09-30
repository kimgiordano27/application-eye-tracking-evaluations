/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeObject
ENTRY_POINT: 076066ac
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long * Newtonsoft_Json_JsonConvert__DeserializeObject(uint param_1)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long unaff_x20;
  uint uStack000000000000000c;
  
  uStack000000000000000c = param_1;
  if ((*(byte *)(unaff_x20 + 0xd95) & 1) == 0) {
    FUN_04077588(PTR_DAT_092d5e40);
    FUN_04077588(PTR_DAT_092d7d08);
    FUN_04077588(PTR_DAT_092d5e20);
    FUN_04077588(PTR_DAT_092bbfe0);
    FUN_04077588(PTR_DAT_092d7d10);
    FUN_04077588(PTR_DAT_092d7d18);
    FUN_04077588(PTR_DAT_092d7d20);
    *(undefined1 *)(unaff_x20 + 0xd95) = 1;
  }
  puVar4 = PTR_DAT_092d7d08;
  puVar3 = PTR_DAT_092bbfe0;
  iVar1 = (int)param_1 >> 8;
  if (iVar1 < 3) {
    if (iVar1 == 1) {
      plVar6 = (long *)thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092d5e20);
      param_1 = param_1 & 0xff;
      goto LAB_076067ec;
    }
    puVar8 = (undefined8 *)PTR_DAT_092d7d18;
    if (iVar1 != 2) goto LAB_0760685c;
  }
  else {
    puVar8 = (undefined8 *)PTR_DAT_092d7d20;
    if ((iVar1 != 3) && (puVar8 = (undefined8 *)PTR_DAT_092d7d10, iVar1 != 4)) {
LAB_0760685c:
      uVar9 = FUN_07676bc4(&stack0x0000000c,0);
      uVar7 = thunk_FUN_040dedf8(PTR_DAT_092d7d28);
      uVar9 = FUN_074d875c(uVar7,uVar9,0);
      thunk_FUN_040dedf8(PTR_DAT_09285a38);
      uVar7 = thunk_FUN_040b4efc();
      FUN_0767bcbc(uVar7,uVar9,0);
      uVar9 = thunk_FUN_040dedf8(PTR_DAT_092d7d08);
                    /* WARNING: Subroutine does not return */
      FUN_040776f4(uVar7,uVar9);
    }
  }
  uVar9 = *puVar8;
  if (*(int *)(*(long *)(PTR_DAT_09285980 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  uVar9 = FUN_04077a98(uVar9,0,*(undefined8 *)puVar3,*(undefined8 *)puVar4);
  uVar5 = FUN_07691f40(uVar9,0,0);
  if ((uVar5 & 1) == 0) {
    plVar6 = (long *)FUN_076a477c(uVar9,0);
    if (plVar6 == (long *)0x0) {
      return (long *)0x0;
    }
    bVar2 = *(byte *)(*(long *)PTR_DAT_092d5e40 + 0x130);
    if ((bVar2 <= *(byte *)(*plVar6 + 0x130)) &&
       (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)PTR_DAT_092d5e40)) {
      return plVar6;
    }
                    /* WARNING: Subroutine does not return */
    FUN_04077bb0(plVar6);
  }
  plVar6 = (long *)thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092d5e20);
  param_1 = 1;
LAB_076067ec:
  FUN_075ef888(plVar6,param_1,0);
  return plVar6;
}


