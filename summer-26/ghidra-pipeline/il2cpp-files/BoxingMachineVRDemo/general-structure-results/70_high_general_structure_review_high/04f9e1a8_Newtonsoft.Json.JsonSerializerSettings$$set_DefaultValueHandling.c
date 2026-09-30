/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_DefaultValueHandling
ENTRY_POINT: 04f9e1a8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04f9e32c) */

undefined8 Newtonsoft_Json_JsonSerializerSettings__set_DefaultValueHandling(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x19;
  undefined8 uVar7;
  int unaff_w20;
  char cStack000000000000000c;
  undefined8 in_stack_00000018;
  
  FUN_02d6084c();
  *(undefined1 *)(unaff_x19 + 0xdeb) = 1;
  puVar1 = PTR_DAT_0675eef8;
  in_stack_00000018 = 0;
  cStack000000000000000c = 0;
  if (unaff_w20 < 1) {
    thunk_FUN_02dc61f4(PTR_DAT_06764080);
    uVar7 = thunk_FUN_02d9d534();
    uVar5 = thunk_FUN_02dc61f4(PTR_DAT_06770f40);
    uVar6 = thunk_FUN_02dc61f4(PTR_DAT_06775f60);
    FUN_04f7a804(uVar7,uVar5,uVar6,0);
    uVar5 = thunk_FUN_02dc61f4(PTR_DAT_06778360);
                    /* WARNING: Subroutine does not return */
    FUN_02d609b4(uVar7,uVar5);
  }
  lVar2 = *(long *)PTR_DAT_0675eef8;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar2 = *(long *)puVar1;
  }
  uVar7 = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 8);
  cStack000000000000000c = '\0';
  FUN_0506ac34(uVar7,&stack0x0000000c,0);
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar2);
    lVar2 = *(long *)puVar1;
  }
  lVar3 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x28);
  if (lVar3 != 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar2);
      lVar3 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x28);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
    }
    uVar4 = FUN_047cc89c(lVar3,unaff_w20,&stack0x00000018,*(undefined8 *)PTR_DAT_06778358);
    if ((uVar4 & 1) != 0) goto LAB_04f9e298;
    lVar2 = *(long *)puVar1;
  }
  uVar5 = thunk_FUN_02d9d534(lVar2);
  FUN_04f9d984(uVar5,unaff_w20,0,1);
  in_stack_00000018 = uVar5;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_04f9dfe8(uVar5);
LAB_04f9e298:
  uVar5 = in_stack_00000018;
  if (cStack000000000000000c != '\0') {
    thunk_FUN_02d6ec70(uVar7,0);
  }
  return uVar5;
}


