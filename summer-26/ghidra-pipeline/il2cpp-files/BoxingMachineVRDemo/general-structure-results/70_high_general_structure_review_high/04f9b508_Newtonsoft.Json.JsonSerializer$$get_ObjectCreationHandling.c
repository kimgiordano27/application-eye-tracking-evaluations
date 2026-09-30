/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_ObjectCreationHandling
ENTRY_POINT: 04f9b508
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

undefined4 Newtonsoft_Json_JsonSerializer__get_ObjectCreationHandling(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 extraout_x1;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long *plVar8;
  long unaff_x20;
  undefined4 uStack0000000000000008;
  char cStack000000000000000c;
  
  FUN_02d6084c();
  *(undefined1 *)(unaff_x19 + 0xdd5) = 1;
  puVar1 = PTR_DAT_067718f8;
  cStack000000000000000c = 0;
  uStack0000000000000008 = 0;
  if (unaff_x20 == 0) {
    thunk_FUN_02dc61f4(PTR_DAT_06764070);
    uVar4 = thunk_FUN_02d9d534();
    uVar5 = thunk_FUN_02dc61f4(PTR_DAT_0676b5d0);
    FUN_04f77010(uVar4,uVar5,0);
    uVar5 = thunk_FUN_02dc61f4(PTR_DAT_067781c0);
                    /* WARNING: Subroutine does not return */
    FUN_02d609b4(uVar4,uVar5);
  }
  lVar2 = *(long *)PTR_DAT_067718f8;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar2 = *(long *)puVar1;
  }
  plVar8 = *(long **)(*(long *)(lVar2 + 0xb8) + 0x18);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  lVar2 = *plVar8;
  uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_06767eb8) {
        puVar3 = (undefined8 *)(lVar2 + (long)(*piVar7 + 2) * 0x10 + 0x138);
        goto LAB_04f9b5a0;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_02d9a5d4(plVar8,*(long *)PTR_DAT_06767eb8,2);
LAB_04f9b5a0:
  uVar4 = (*(code *)*puVar3)(plVar8,puVar3[1]);
  cStack000000000000000c = '\0';
  FUN_0506ac34(uVar4,&stack0x0000000c,0);
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar2 = *(long *)puVar1;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  uVar6 = FUN_0488a014();
  if ((uVar6 & 1) == 0) {
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
  if (cStack000000000000000c != '\0') {
    thunk_FUN_02d6ec70(uVar4,0);
  }
  return uStack0000000000000008;
}


