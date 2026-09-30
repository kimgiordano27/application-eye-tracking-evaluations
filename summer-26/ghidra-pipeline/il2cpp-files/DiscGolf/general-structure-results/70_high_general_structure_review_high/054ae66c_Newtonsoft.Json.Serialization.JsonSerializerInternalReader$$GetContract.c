/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$GetContract
ENTRY_POINT: 054ae66c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_10;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x054aeab8) */

void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetContract(void)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  undefined4 *unaff_x19;
  uint uVar4;
  undefined8 *unaff_x21;
  long *unaff_x22;
  undefined8 *unaff_x23;
  uint unaff_w24;
  long lVar5;
  unkbyte10 Var6;
  long in_stack_00000008;
  long in_stack_00000010;
  long *in_stack_00000028;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  long in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  uint3 uStack0000000000000088;
  undefined5 uStack000000000000008b;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  
  _in_stack_00000040 = FUN_04684010(unaff_x19 + 0xc,*(undefined8 *)PTR_DAT_06a21090);
  if (in_stack_00000070 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar5 = *(long *)(in_stack_00000070 + 0x30);
  uVar4 = *(uint *)(in_stack_00000070 + 0x44);
  uVar2 = FUN_0467d48c(unaff_x19 + 0xc,*unaff_x21);
  if (lVar5 == 0) {
    if (uVar2 == 0 && uVar4 == 0) {
      lVar5 = 0;
      uVar2 = 0;
    }
    else {
      FUN_05508bc8(0);
      lVar5 = 0;
      uVar2 = 0;
    }
  }
  else {
    if ((*(uint *)(lVar5 + 0x18) < uVar4) || (*(uint *)(lVar5 + 0x18) - uVar4 < uVar2)) {
      FUN_05508bc8(0);
    }
    lVar5 = lVar5 + (int)uVar4 + 0x20;
  }
  FUN_0468b9d4(&stack0x00000040,lVar5,uVar2,*(undefined8 *)PTR_DAT_06a21070);
  if (in_stack_00000070 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  plVar1 = *(long **)(in_stack_00000070 + 0x28);
  lVar5 = *(long *)(in_stack_00000070 + 0x30);
  in_stack_00000008 = 0;
  in_stack_00000010 = 0;
  if (lVar5 == 0) {
    if (unaff_w24 != 0) {
      FUN_05508bc8(0);
    }
    in_stack_00000008 = 0;
    in_stack_00000010 = 0;
  }
  else {
    if (*(uint *)(lVar5 + 0x18) < unaff_w24) {
      FUN_05508bc8(0);
    }
    in_stack_00000008 = lVar5;
    LeanTween__value(&stack0x00000008,lVar5);
    in_stack_00000010 = (ulong)unaff_w24 << 0x20;
  }
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  Var6 = (**(code **)(*plVar1 + 0x328))
                   (plVar1,in_stack_00000008,in_stack_00000010,*(undefined8 *)(unaff_x19 + 0x10),
                    *(undefined8 *)(*plVar1 + 0x330));
  if (*(int *)(*(long *)PTR_DAT_06a111f8 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  _uStack0000000000000088 = 0;
  in_stack_00000080 = (long)Var6;
  LeanTween__value(&stack0x00000080,(long)Var6);
  uStack0000000000000088 = (uint3)(ushort)((unkuint10)Var6 >> 0x40);
  in_stack_00000090 = 0;
  in_stack_00000098 = 0;
  unaff_x23[1] = _uStack0000000000000088;
  *unaff_x23 = in_stack_00000080;
  LeanTween__value(&stack0x00000090,0);
  in_stack_00000090 = 0;
  in_stack_00000098 = 0;
  unaff_x23[1] = unaff_x23[1];
  *unaff_x23 = *unaff_x23;
  LeanTween__value(&stack0x00000090,0);
  in_stack_00000058 = unaff_x23[1];
  in_stack_00000050 = *unaff_x23;
  uVar3 = FUN_05415d34(&stack0x00000050,0);
  if ((uVar3 & 1) == 0) {
    in_stack_00000078._4_4_ = 2;
    *unaff_x19 = 2;
    *(undefined8 *)(unaff_x19 + 0x18) = in_stack_00000058;
    *(undefined8 *)(unaff_x19 + 0x16) = in_stack_00000050;
    LeanTween__value(unaff_x19 + 0x16,0);
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    FUN_0353b784(unaff_x19 + 2,&stack0x00000050);
    uVar4 = 5;
  }
  else {
    FUN_05415e74(&stack0x00000050,0);
    if (in_stack_00000070 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    *(undefined4 *)(in_stack_00000070 + 0x44) = 0;
    uVar4 = 0x14;
  }
  if (in_stack_00000078._4_4_ < 0) {
    if ((*in_stack_00000028 == 0) || (lVar5 = FUN_054a9814(), lVar5 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    FUN_0554fe30(lVar5,0);
  }
  if ((uVar4 < 0x1d) && ((1 << (ulong)uVar4 & 0x10100001U) != 0)) {
    *unaff_x19 = 0xfffffffe;
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    FUN_05410914(unaff_x19 + 2,0);
  }
  return;
}


