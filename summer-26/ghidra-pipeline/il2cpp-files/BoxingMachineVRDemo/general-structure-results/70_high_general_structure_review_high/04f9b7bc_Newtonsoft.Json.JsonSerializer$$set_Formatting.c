/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_Formatting
ENTRY_POINT: 04f9b7bc
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04f9b97c) */

undefined8 Newtonsoft_Json_JsonSerializer__set_Formatting(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int in_w8;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  uint unaff_w20;
  uint uVar10;
  long *unaff_x23;
  char cStack0000000000000004;
  undefined8 in_stack_00000008;
  
  if (in_w8 == 0) {
    thunk_FUN_02dbd7b4();
    param_1 = *unaff_x23;
  }
  plVar9 = *(long **)(*(long *)(param_1 + 0xb8) + 0x20);
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  lVar5 = *plVar9;
  uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_06767eb8) {
        puVar1 = (undefined8 *)(lVar5 + (long)(*piVar8 + 2) * 0x10 + 0x138);
        goto LAB_04f9b82c;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar1 = (undefined8 *)FUN_02d9a5d4(plVar9,*(long *)PTR_DAT_06767eb8,2);
LAB_04f9b82c:
  uVar2 = (*(code *)*puVar1)(plVar9,puVar1[1]);
  cStack0000000000000004 = '\0';
  FUN_0506ac34(uVar2,&stack0x00000004,0);
  lVar5 = *unaff_x23;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *unaff_x23;
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x20);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  uVar7 = FUN_047cc89c(lVar5,unaff_w20,&stack0x00000008,*(undefined8 *)PTR_DAT_067781c8);
  uVar3 = in_stack_00000008;
  if ((uVar7 & 1) == 0) {
    lVar5 = *unaff_x23;
    uVar10 = 0;
    while( true ) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar5 = *unaff_x23;
      }
      lVar6 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      if (*(uint *)(lVar6 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60af0();
      }
      uVar4 = (uint)*(ushort *)(lVar6 + (long)(int)uVar10 * 0x10 + 0x20);
      if (uVar4 == 0) {
        uVar3 = 0;
        goto LAB_04f9b940;
      }
      if (uVar4 == unaff_w20) break;
      uVar10 = uVar10 + 1;
    }
    uVar3 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06777458);
    FUN_04f90fec(uVar3,uVar10);
    lVar5 = *unaff_x23;
    in_stack_00000008 = uVar3;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *unaff_x23;
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x20);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    FUN_047cadf0(lVar5,unaff_w20,in_stack_00000008,*(undefined8 *)PTR_DAT_067781d0);
    uVar3 = in_stack_00000008;
  }
LAB_04f9b940:
  if (cStack0000000000000004 != '\0') {
    thunk_FUN_02d6ec70(uVar2,0);
  }
  return uVar3;
}


