/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_DateFormatHandling
ENTRY_POINT: 04f9b860
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04f9b97c) */

undefined8 Newtonsoft_Json_JsonSerializer__set_DateFormatHandling(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  uint unaff_w20;
  uint uVar6;
  long *unaff_x23;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0xb8) + 0x20);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  uVar2 = FUN_047cc89c(lVar1,unaff_w20,&stack0x00000008,*(undefined8 *)PTR_DAT_067781c8);
  uVar3 = in_stack_00000008;
  if ((uVar2 & 1) == 0) {
    lVar1 = *unaff_x23;
    uVar6 = 0;
    while( true ) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar1 = *unaff_x23;
      }
      lVar5 = *(long *)(*(long *)(lVar1 + 0xb8) + 8);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      if (*(uint *)(lVar5 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60af0();
      }
      uVar4 = (uint)*(ushort *)(lVar5 + (long)(int)uVar6 * 0x10 + 0x20);
      if (uVar4 == 0) {
        uVar3 = 0;
        goto LAB_04f9b940;
      }
      if (uVar4 == unaff_w20) break;
      uVar6 = uVar6 + 1;
    }
    uVar3 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06777458);
    FUN_04f90fec(uVar3,uVar6);
    lVar1 = *unaff_x23;
    in_stack_00000008 = uVar3;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x23;
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x20);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    FUN_047cadf0(lVar1,unaff_w20,in_stack_00000008,*(undefined8 *)PTR_DAT_067781d0);
    uVar3 = in_stack_00000008;
  }
LAB_04f9b940:
  if (in_stack_00000000._4_1_ != '\0') {
    thunk_FUN_02d6ec70();
  }
  return uVar3;
}


