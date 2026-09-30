/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_DateFormatHandling
ENTRY_POINT: 04f9b824
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

undefined8 Newtonsoft_Json_JsonSerializer__get_DateFormatHandling(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  int in_w9;
  uint unaff_w20;
  uint uVar7;
  long *unaff_x23;
  char cStack0000000000000004;
  undefined8 in_stack_00000008;
  
  uVar1 = (**(code **)(param_1 + (long)in_w9 * 0x10 + 0x138))();
  cStack0000000000000004 = '\0';
  FUN_0506ac34(uVar1,&stack0x00000004,0);
  lVar2 = *unaff_x23;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar2 = *unaff_x23;
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x20);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  uVar3 = FUN_047cc89c(lVar2,unaff_w20,&stack0x00000008,*(undefined8 *)PTR_DAT_067781c8);
  uVar4 = in_stack_00000008;
  if ((uVar3 & 1) == 0) {
    lVar2 = *unaff_x23;
    uVar7 = 0;
    while( true ) {
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar2 = *unaff_x23;
      }
      lVar6 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      if (*(uint *)(lVar6 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60af0();
      }
      uVar5 = (uint)*(ushort *)(lVar6 + (long)(int)uVar7 * 0x10 + 0x20);
      if (uVar5 == 0) {
        uVar4 = 0;
        goto LAB_04f9b940;
      }
      if (uVar5 == unaff_w20) break;
      uVar7 = uVar7 + 1;
    }
    uVar4 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06777458);
    FUN_04f90fec(uVar4,uVar7);
    lVar2 = *unaff_x23;
    in_stack_00000008 = uVar4;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar2 = *unaff_x23;
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x20);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    FUN_047cadf0(lVar2,unaff_w20,in_stack_00000008,*(undefined8 *)PTR_DAT_067781d0);
    uVar4 = in_stack_00000008;
  }
LAB_04f9b940:
  if (cStack0000000000000004 != '\0') {
    thunk_FUN_02d6ec70(uVar1,0);
  }
  return uVar4;
}


