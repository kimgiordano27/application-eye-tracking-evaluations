/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_TypeNameAssemblyFormatHandling
ENTRY_POINT: 079d4b0c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__get_TypeNameAssemblyFormatHandling(long *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x19;
  undefined8 uVar4;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long *unaff_x23;
  long unaff_x24;
  
  while( true ) {
    uVar1 = (**(code **)(*param_1 + 0x138))();
    if ((uVar1 & 1) != 0) {
      uVar4 = *(undefined8 *)(unaff_x24 + 0x10);
      uVar2 = thunk_FUN_044adef4(PTR_DAT_09f42ca0);
      uVar2 = FUN_07895cb8(uVar2,uVar4);
      thunk_FUN_044adef4(PTR_DAT_09f217f8);
      uVar4 = thunk_FUN_0448520c();
      FUN_0799d598(uVar4,uVar2,0);
      uVar2 = thunk_FUN_044adef4(PTR_DAT_09f42ca8);
                    /* WARNING: Subroutine does not return */
      FUN_04447d10(uVar4,uVar2);
    }
    lVar3 = *(long *)(unaff_x24 + 0x20);
    if (lVar3 == 0) break;
    param_1 = *(long **)(lVar3 + 0x10);
    unaff_x24 = lVar3;
    if (param_1 == (long *)0x0) {
LAB_079d4ba8:
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
  }
  lVar3 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f42c88);
  FUN_07a80df4(lVar3,0);
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 0x10) = unaff_x20;
    thunk_FUN_044bb4b4();
    *(undefined8 *)(lVar3 + 0x18) = unaff_x21;
    thunk_FUN_044bb4b4();
    if (unaff_x24 != 0) {
      unaff_x23 = (long *)(unaff_x24 + 0x20);
    }
    *unaff_x23 = lVar3;
    thunk_FUN_044bb4b4(unaff_x23,lVar3);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    return;
  }
  goto LAB_079d4ba8;
}


