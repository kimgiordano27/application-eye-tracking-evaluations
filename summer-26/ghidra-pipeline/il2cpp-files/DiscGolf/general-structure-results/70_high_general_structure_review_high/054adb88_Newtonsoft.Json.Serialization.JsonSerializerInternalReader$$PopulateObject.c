/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$PopulateObject
ENTRY_POINT: 054adb88
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x054adeac) */

void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__PopulateObject(void)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 *unaff_x19;
  undefined8 uVar6;
  int iVar7;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  long *in_stack_00000038;
  int in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  
  FUN_02dcfd18();
  in_stack_00000098 = in_stack_00000008;
  in_stack_00000090 = in_stack_00000000;
  LeanTween__value(&stack0x00000090,0);
  uVar6 = in_stack_00000098;
  uVar5 = in_stack_00000090;
  in_stack_00000090 = 0;
  in_stack_00000098 = 0;
  if ((*(byte *)(*(long *)(*(long *)PTR_DAT_06a214a8 + 0x20) + 0x135) & 1) == 0) {
    FUN_02dcfd18();
  }
  in_stack_00000090 = uVar5;
  in_stack_00000098 = uVar6;
  LeanTween__value(&stack0x00000090,0);
  in_stack_00000058 = in_stack_00000098;
  in_stack_00000050 = in_stack_00000090;
  lVar3 = *(long *)(*(long *)PTR_DAT_06a214b8 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02dcfd18();
  }
  uVar4 = FUN_04a45dd8(&stack0x00000050,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x10));
  if ((uVar4 & 1) == 0) {
    in_stack_00000078._4_4_ = 2;
    *unaff_x19 = 2;
    *(undefined8 *)(unaff_x19 + 0x1e) = in_stack_00000058;
    *(undefined8 *)(unaff_x19 + 0x1c) = in_stack_00000050;
    LeanTween__value(unaff_x19 + 0x1c,0);
    FUN_0335af54(unaff_x19 + 2,&stack0x00000050);
    iVar2 = 0;
    iVar7 = 5;
  }
  else {
    lVar3 = *(long *)(*(long *)PTR_DAT_06a214b0 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02dcfd18();
    }
    iVar2 = FUN_04a45f04(&stack0x00000050,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x20));
    iVar2 = unaff_x19[0x1a] + iVar2;
    iVar7 = 0xb;
  }
  if (in_stack_00000078._4_4_ < 0) {
    if ((*in_stack_00000038 == 0) || (lVar3 = FUN_054a9814(), lVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    FUN_0554fe30(lVar3,0);
  }
  puVar1 = PTR_DAT_06a214a0;
  if (iVar7 == 0xb) {
    *unaff_x19 = 0xfffffffe;
    FUN_040b8a78(unaff_x19 + 2,iVar2,*(undefined8 *)puVar1);
  }
  else if (iVar7 == 0) {
    uVar6 = *(undefined8 *)(&stack0x00000040 + (long)(in_stack_00000048 + -1) * 8);
    *unaff_x19 = 0xfffffffe;
    uVar5 = thunk_FUN_02dfd288(PTR_DAT_06a214c8);
    FUN_040b8b14(unaff_x19 + 2,uVar6,uVar5);
  }
  return;
}


