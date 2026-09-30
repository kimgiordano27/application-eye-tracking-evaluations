/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_ReferenceResolver
ENTRY_POINT: 05065c88
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


int Newtonsoft_Json_JsonSerializer__set_ReferenceResolver
              (undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  int iStack000000000000000c;
  int in_stack_00000010;
  int iStack0000000000000014;
  undefined8 uStack0000000000000018;
  
  puVar1 = PTR_DAT_067c9980;
  uStack0000000000000018 = param_2;
  if ((DAT_06bb97a4 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c9980);
    FUN_02f08768(PTR_DAT_067dc088);
    DAT_06bb97a4 = 1;
  }
  puVar2 = PTR_DAT_067dc088;
  iStack0000000000000014 = 0;
  iStack000000000000000c = 0;
  in_stack_00000010 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar6 = FUN_050b3fb8(&stack0x00000018,0);
  lVar8 = *(long *)puVar2;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02f6670c(lVar8);
  }
  FUN_050654c4(uVar6);
  FUN_05065990(uStack0000000000000018,&stack0x00000014,&stack0x00000010,&stack0x0000000c);
  iVar5 = iStack0000000000000014;
  iVar4 = in_stack_00000010;
  iVar3 = iStack000000000000000c;
  if (param_3 < 2) {
    if (param_3 != 0) {
      if (param_3 != 1) goto LAB_05065db4;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      iVar3 = FUN_050653fc(iVar5,iVar4,iVar3);
      iVar4 = FUN_050653fc(iVar5,1,1);
      iVar5 = (iVar3 - iVar4) + 1;
    }
  }
  else {
    iVar5 = in_stack_00000010;
    if ((param_3 != 2) && (iVar5 = iStack000000000000000c, param_3 != 3)) {
LAB_05065db4:
      uVar6 = thunk_FUN_02f6ef30(PTR_DAT_067db528);
      uVar6 = FUN_05116b30(uVar6,0);
      thunk_FUN_02f6ef30(PTR_DAT_067c9b80);
      uVar7 = thunk_FUN_02f45270();
      FUN_050d5404(uVar7,uVar6,0);
      uVar6 = thunk_FUN_02f6ef30(PTR_DAT_067dc0b0);
                    /* WARNING: Subroutine does not return */
      FUN_02f0888c(uVar7,uVar6);
    }
  }
  return iVar5;
}


