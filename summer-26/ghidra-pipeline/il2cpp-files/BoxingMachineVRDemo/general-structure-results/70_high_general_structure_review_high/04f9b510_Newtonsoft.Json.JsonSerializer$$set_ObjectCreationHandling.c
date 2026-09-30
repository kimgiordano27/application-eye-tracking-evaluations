/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_ObjectCreationHandling
ENTRY_POINT: 04f9b510
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04f9b6c0) */

undefined4 Newtonsoft_Json_JsonSerializer__set_ObjectCreationHandling(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 extraout_x1;
  undefined1 in_w8;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long *plVar9;
  long unaff_x20;
  undefined4 uStack0000000000000008;
  char cStack000000000000000c;
  
  *(undefined1 *)(unaff_x19 + 0xdd5) = in_w8;
  puVar1 = PTR_DAT_067718f8;
  cStack000000000000000c = 0;
  uStack0000000000000008 = 0;
  if (unaff_x20 == 0) {
    thunk_FUN_02dc61f4(PTR_DAT_06764070);
    uVar5 = thunk_FUN_02d9d534();
    uVar6 = thunk_FUN_02dc61f4(PTR_DAT_0676b5d0);
    FUN_04f77010(uVar5,uVar6,0);
    uVar6 = thunk_FUN_02dc61f4(PTR_DAT_067781c0);
                    /* WARNING: Subroutine does not return */
    FUN_02d609b4(uVar5,uVar6);
  }
  lVar3 = *(long *)PTR_DAT_067718f8;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *(long *)puVar1;
  }
  plVar9 = *(long **)(*(long *)(lVar3 + 0xb8) + 0x18);
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  lVar3 = *plVar9;
  uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_06767eb8) {
        puVar4 = (undefined8 *)(lVar3 + (long)(*piVar8 + 2) * 0x10 + 0x138);
        goto LAB_04f9b5a0;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined8 *)FUN_02d9a5d4(plVar9,*(long *)PTR_DAT_06767eb8,2);
LAB_04f9b5a0:
  uVar5 = (*(code *)*puVar4)(plVar9,puVar4[1]);
  cStack000000000000000c = '\0';
  FUN_0506ac34(uVar5,&stack0x0000000c,0);
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *(long *)puVar1;
  }
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  uVar7 = FUN_0488a014();
  if ((uVar7 & 1) == 0) {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uStack0000000000000008 = FUN_04f9b270();
    if (*(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8(0,extraout_x1,uStack0000000000000008);
    }
    FUN_04888538();
  }
  uVar2 = uStack0000000000000008;
  if (cStack000000000000000c != '\0') {
    thunk_FUN_02d6ec70(uVar5,0);
  }
  return uVar2;
}


