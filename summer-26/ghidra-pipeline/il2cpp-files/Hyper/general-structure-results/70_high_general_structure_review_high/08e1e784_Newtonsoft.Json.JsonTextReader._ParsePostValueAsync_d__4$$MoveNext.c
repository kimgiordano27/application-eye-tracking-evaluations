/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextReader.<ParsePostValueAsync>d__4$$MoveNext
ENTRY_POINT: 08e1e784
PROGRAM: Hyper-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonTextReader_<ParsePostValueAsync>d__4__MoveNext
               (undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined4 in_stack_00000058;
  long in_stack_00000070;
  undefined8 in_stack_00000078;
  
  if (param_2 != 1) {
    FUN_04871c6c(&stack0x00000070);
                    /* WARNING: Subroutine does not return */
    FUN_04a6935c(param_1);
  }
  plVar2 = (long *)__cxa_begin_catch(param_1);
  lVar4 = *plVar2;
  in_stack_00000070 = lVar4;
  __cxa_end_catch();
  FUN_05fefd34(in_stack_00000078,*(undefined8 *)PTR_DAT_0ac6b498);
  if (lVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04948184(lVar4);
  }
  if ((*(long *)(unaff_x19 + 0x10) != 0) && (unaff_x20 != 0)) {
    in_stack_00000058 = *(undefined4 *)(unaff_x20 + 0x18);
    uVar3 = *(undefined8 *)(*(long *)(unaff_x19 + 0x10) + 0x30);
    uVar1 = thunk_FUN_04983b98(*(undefined8 *)(PTR_DAT_0ac09758 + 0x48),&stack0x00000058);
    uVar1 = FUN_08bc9f74(*(undefined8 *)PTR_DAT_0ac6b580,uVar1,0);
    lVar5 = *(long *)PTR_DAT_0ac099d0;
    lVar4 = *(long *)(lVar5 + 0x38);
    if (lVar4 == 0) {
      FUN_04980b90(lVar5);
      lVar4 = *(long *)(lVar5 + 0x38);
    }
    lVar4 = *(long *)(lVar4 + 0x10);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_04980b34();
    }
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    lVar4 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_04980b34();
    }
    FUN_094db71c(uVar3,uVar1,**(undefined8 **)(lVar4 + 0xb8),0);
    lVar4 = *(long *)(unaff_x19 + 0x70);
    if (lVar4 != 0) {
      (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40));
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


