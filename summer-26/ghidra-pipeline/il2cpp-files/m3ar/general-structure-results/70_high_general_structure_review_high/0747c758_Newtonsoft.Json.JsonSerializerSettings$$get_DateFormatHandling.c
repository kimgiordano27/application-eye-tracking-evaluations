/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_DateFormatHandling
ENTRY_POINT: 0747c758
PROGRAM: m3ar-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__get_DateFormatHandling(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  
  FUN_0403162c(PTR_DAT_08fa1270);
  FUN_0403162c(PTR_DAT_08fa1278);
  FUN_0403162c(PTR_DAT_08fa1280);
  FUN_0403162c(PTR_DAT_08f764d8);
  FUN_0403162c(PTR_DAT_08fa1288);
  FUN_0403162c(PTR_DAT_08fa1290);
  *(undefined1 *)(unaff_x21 + 0xaae) = 1;
  FUN_075273c0();
  if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  iVar5 = (**(code **)(*unaff_x20 + 0x198))();
  puVar4 = PTR_DAT_08fa1290;
  puVar2 = PTR_DAT_08fa1280;
  puVar1 = PTR_DAT_08fa1270;
  if (iVar5 == 0x7f) {
    *(undefined4 *)(unaff_x19 + 0x10) = 0xf4;
    puVar3 = PTR_DAT_08fa1278;
    uVar6 = *(undefined8 *)puVar1;
    uVar8 = *(undefined8 *)puVar4;
    *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)puVar2;
    *(undefined8 *)(unaff_x19 + 0x20) = uVar6;
    puVar2 = PTR_DAT_08f9fd38;
    uVar6 = *(undefined8 *)puVar3;
    *(undefined8 *)(unaff_x19 + 0x28) = uVar8;
    *(undefined8 *)(unaff_x19 + 0x30) = uVar6;
    puVar1 = PTR_DAT_08f764d8;
    uVar8 = *(undefined8 *)puVar2;
    uVar7 = *(undefined8 *)PTR_DAT_08fa1288;
    *(undefined8 *)(unaff_x19 + 0x38) = uVar6;
    *(undefined8 *)(unaff_x19 + 0x40) = uVar8;
    uVar6 = *(undefined8 *)puVar1;
    *(undefined8 *)(unaff_x19 + 0x50) = uVar7;
    *(undefined8 *)(unaff_x19 + 0x58) = uVar7;
    *(undefined8 *)(unaff_x19 + 0x48) = uVar6;
    return;
  }
  if (unaff_x20[0xf] != 0) {
    FUN_0736de10(unaff_x20[0xf],0);
    FUN_040381b4();
    return;
  }
  thunk_FUN_04097b88(PTR_DAT_08f7c590);
  uVar6 = thunk_FUN_0406deb8();
  uVar8 = thunk_FUN_04097b88(PTR_DAT_08fa1298);
  FUN_074e732c(uVar6,uVar8,0);
  uVar8 = thunk_FUN_04097b88(PTR_DAT_08fa12a0);
                    /* WARNING: Subroutine does not return */
  FUN_04031750(uVar6,uVar8);
}


