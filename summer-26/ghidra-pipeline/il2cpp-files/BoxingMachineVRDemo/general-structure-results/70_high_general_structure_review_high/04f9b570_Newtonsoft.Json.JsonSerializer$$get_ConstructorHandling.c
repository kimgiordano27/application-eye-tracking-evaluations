/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_ConstructorHandling
ENTRY_POINT: 04f9b570
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04f9b6c0) */

undefined4
Newtonsoft_Json_JsonSerializer__get_ConstructorHandling
          (long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 extraout_x1;
  long in_x9;
  int *in_x10;
  long *unaff_x21;
  undefined4 in_stack_00000008;
  char cStack000000000000000c;
  
  do {
    if ((bool)in_ZR) {
      puVar1 = (undefined8 *)(param_1 + (long)(*in_x10 + 2) * 0x10 + 0x138);
LAB_04f9b5a0:
      uVar2 = (*(code *)*puVar1)();
      cStack000000000000000c = '\0';
      FUN_0506ac34(uVar2,&stack0x0000000c,0);
      lVar3 = *unaff_x21;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar3 = *unaff_x21;
      }
      if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      uVar4 = FUN_0488a014();
      if ((uVar4 & 1) == 0) {
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        in_stack_00000008 = FUN_04f9b270();
        if (*(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8(0,extraout_x1,in_stack_00000008);
        }
        FUN_04888538();
      }
      if (cStack000000000000000c != '\0') {
        thunk_FUN_02d6ec70(uVar2,0);
      }
      return in_stack_00000008;
    }
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar1 = (undefined8 *)FUN_02d9a5d4();
      goto LAB_04f9b5a0;
    }
    in_ZR = *(long *)(in_x10 + 2) == param_3;
    in_x10 = in_x10 + 4;
  } while( true );
}


