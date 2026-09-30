/*
FUNCTION_NAME: Game.Views.Network.SessionInfoExtensions$$IsSessionClosed
ENTRY_POINT: 033f1904
PROGRAM: beastcraft-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Game_Views_Network_SessionInfoExtensions__IsSessionClosed(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long in_x9;
  long *in_x10;
  int *piVar6;
  long *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x25;
  
  if (in_x9 != 0) {
    piVar6 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *in_x10) {
        puVar3 = (undefined8 *)(param_1 + (long)(*piVar6 + 0xd) * 0x10 + 0x138);
        goto LAB_033f194c;
      }
      in_x9 = in_x9 + -1;
      piVar6 = piVar6 + 4;
    } while (in_x9 != 0);
  }
  puVar3 = (undefined8 *)FUN_02e759c0();
LAB_033f194c:
  puVar2 = PTR_DAT_06a614e0;
  puVar1 = PTR_DAT_06a368b8;
  uVar4 = (*(code *)*puVar3)();
  uVar5 = thunk_FUN_02e78ab8(*unaff_x25);
  FUN_04d26ca4();
  uVar4 = FUN_039cf0a0(uVar4,uVar5,*unaff_x23);
  uVar5 = FUN_054114e0();
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_02e9a04c(*unaff_x22);
  }
  FUN_05c23ca0(&stack0x00000008,uVar4,uVar5,0);
  uVar4 = thunk_FUN_02e78ab8(*(undefined8 *)puVar2);
  FUN_0621dec8();
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  FUN_0621c2e4(uVar4,0);
  return;
}


