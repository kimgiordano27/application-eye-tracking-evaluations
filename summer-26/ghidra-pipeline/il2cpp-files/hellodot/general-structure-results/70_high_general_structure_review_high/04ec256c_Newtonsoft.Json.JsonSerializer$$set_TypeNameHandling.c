/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_TypeNameHandling
ENTRY_POINT: 04ec256c
PROGRAM: hellodot-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_JsonSerializer__set_TypeNameHandling(void)

{
  short sVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int in_w8;
  long lVar6;
  long lVar7;
  undefined8 unaff_x19;
  undefined4 unaff_w20;
  long *unaff_x23;
  long in_stack_00000008;
  
  if (in_w8 != 2) {
    FUN_04db48b0();
    iVar2 = FUN_04dbda58();
    if (-1 < iVar2) {
      sVar1 = FUN_04db48b0();
      lVar6 = *unaff_x23;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02cd038c(lVar6);
        lVar6 = *unaff_x23;
      }
      if (*(short *)(*(long *)(lVar6 + 0xb8) + 10) != sVar1) {
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_02cd038c(lVar6);
        }
        unaff_x19 = FUN_04dbb06c();
      }
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      lVar6 = FUN_04ec786c(unaff_x19);
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      uVar3 = FUN_04ebdab0(unaff_w20);
      if ((uVar3 & 1) != 0) {
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        sVar1 = FUN_04db48b0(lVar6,*(int *)(lVar6 + 0x10) + -1,0);
        lVar7 = *unaff_x23;
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_02cd038c(lVar7);
          lVar7 = *unaff_x23;
        }
        if (*(short *)(*(long *)(lVar7 + 0xb8) + 10) != sVar1) {
          if (*(int *)(lVar7 + 0xe0) == 0) {
            thunk_FUN_02cd038c(lVar7);
          }
          if (*(int *)(*(long *)PTR_DAT_065c9808 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          uVar4 = FUN_04e945d8(*(long *)(*unaff_x23 + 0xb8) + 10,0);
          lVar6 = FUN_04db00f0(lVar6,uVar4,0);
        }
      }
      if (*(int *)(*(long *)PTR_DAT_065f1670 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      uVar3 = FUN_02ccba1c(lVar6,&stack0x00000008);
      if ((uVar3 & 1) == 0) {
        in_stack_00000008 = lVar6;
      }
      return in_stack_00000008;
    }
  }
  thunk_FUN_02c7737c(PTR_DAT_065c96d8);
  uVar4 = thunk_FUN_02cea894();
  uVar5 = thunk_FUN_02c7737c(PTR_DAT_065f7d68);
  FUN_04e9e938(uVar4,uVar5,0);
  uVar5 = thunk_FUN_02c7737c(PTR_DAT_065f7d60);
                    /* WARNING: Subroutine does not return */
  FUN_02ce7b54(uVar4,uVar5);
}


