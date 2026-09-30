/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$Deserialize
ENTRY_POINT: 054ae71c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x054aeab8) */

void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__Deserialize(void)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  uint in_w8;
  undefined4 *unaff_x19;
  long *unaff_x20;
  uint uVar4;
  long *unaff_x22;
  undefined8 *unaff_x23;
  uint unaff_w25;
  unkbyte10 Var5;
  undefined8 in_stack_00000008;
  long *in_stack_00000028;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  long in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  uint3 uStack0000000000000088;
  undefined5 uStack000000000000008b;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  
  if (in_w8 < unaff_w25) {
    FUN_05508bc8(0);
  }
  LeanTween__value(&stack0x00000008);
  if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  Var5 = (**(code **)(*unaff_x20 + 0x328))();
                    /* catch() { ... } // from try @ 054ae89c with catch @ 054ae878
                       catch() { ... } // from try @ 054ae8d4 with catch @ 054ae878
                       catch() { ... } // from try @ 054ae8fc with catch @ 054ae878 */
  if (*(int *)(*(long *)PTR_DAT_06a111f8 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  _uStack0000000000000088 = 0;
                    /* try { // try from 054ae894 to 055ae89b has its CatchHandler @ 054ae8b4 */
  in_stack_00000080 = (long)Var5;
                    /* try { // try from 054ae89c to 055ae8cf has its CatchHandler @ 054ae878 */
  LeanTween__value(&stack0x00000080,(long)Var5);
  uStack0000000000000088 = (uint3)(ushort)((unkuint10)Var5 >> 0x40);
  in_stack_00000090 = 0;
  in_stack_00000098 = 0;
  unaff_x23[1] = _uStack0000000000000088;
  *unaff_x23 = in_stack_00000080;
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 054ae894 with catch @ 054ae8b4
                        */
  LeanTween__value(&stack0x00000090,0);
  in_stack_00000090 = 0;
  in_stack_00000098 = 0;
  unaff_x23[1] = unaff_x23[1];
  *unaff_x23 = *unaff_x23;
                    /* try { // try from 054ae8d0 to 055ae8d3 has its CatchHandler @ 054ae8f0 */
                    /* try { // try from 054ae8d4 to 055ae8f3 has its CatchHandler @ 054ae878 */
  LeanTween__value(&stack0x00000090,0);
  in_stack_00000058 = unaff_x23[1];
  in_stack_00000050 = *unaff_x23;
  uVar3 = FUN_05415d34(&stack0x00000050,0);
  if ((uVar3 & 1) == 0) {
                    /* catch() { ... } // from try @ 054ae8d0 with catch @ 054ae8f0 */
                    /* try { // try from 054ae8f4 to 055ae8fb has its CatchHandler @ 054ae904 */
    in_stack_00000078._4_4_ = 3;
                    /* try { // try from 054ae8fc to 055ae907 has its CatchHandler @ 054ae878 */
    *unaff_x19 = 3;
    *(undefined8 *)(unaff_x19 + 0x18) = in_stack_00000058;
    *(undefined8 *)(unaff_x19 + 0x16) = in_stack_00000050;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 054ae8f4 with catch @ 054ae904
                        */
    LeanTween__value(unaff_x19 + 0x16,0);
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    FUN_0353b784(unaff_x19 + 2,&stack0x00000050);
  }
  else {
    FUN_05415e74(&stack0x00000050,0);
    if (in_stack_00000070 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    *(undefined4 *)(in_stack_00000070 + 0x44) = 0;
    plVar1 = *(long **)(in_stack_00000070 + 0x28);
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    Var5 = (**(code **)(*plVar1 + 0x328))
                     (plVar1,*(undefined8 *)(unaff_x19 + 0xc),*(undefined8 *)(unaff_x19 + 0xe),
                      *(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)(*plVar1 + 0x330));
    if (*(int *)(*(long *)PTR_DAT_06a111f8 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    _uStack0000000000000088 = 0;
    in_stack_00000080 = (long)Var5;
    LeanTween__value(&stack0x00000080,(long)Var5);
    uStack0000000000000088 = (uint3)(ushort)((unkuint10)Var5 >> 0x40);
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
    if ((uVar3 & 1) != 0) {
      FUN_05415e74(&stack0x00000050,0);
      uVar4 = 0x1c;
      goto LAB_054ae5b8;
    }
    in_stack_00000078._4_4_ = 4;
    *unaff_x19 = 4;
    *(undefined8 *)(unaff_x19 + 0x18) = in_stack_00000058;
    *(undefined8 *)(unaff_x19 + 0x16) = in_stack_00000050;
    LeanTween__value(unaff_x19 + 0x16,0);
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    FUN_0353b784(unaff_x19 + 2,&stack0x00000050);
  }
  uVar4 = 5;
LAB_054ae5b8:
  if (in_stack_00000078._4_4_ < 0) {
    if ((*in_stack_00000028 == 0) || (lVar2 = FUN_054a9814(), lVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    FUN_0554fe30(lVar2,0);
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


