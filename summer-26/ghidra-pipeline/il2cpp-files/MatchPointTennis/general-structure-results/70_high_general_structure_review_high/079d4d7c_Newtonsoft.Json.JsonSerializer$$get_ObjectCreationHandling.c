/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_ObjectCreationHandling
ENTRY_POINT: 079d4d7c
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


void Newtonsoft_Json_JsonSerializer__get_ObjectCreationHandling(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long lVar6;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  FUN_04447ba8();
  *(undefined1 *)(unaff_x22 + 0xd42) = 1;
  if (unaff_x20 == 0) {
    thunk_FUN_044adef4(PTR_DAT_09f251e0);
    uVar3 = thunk_FUN_0448520c();
    uVar4 = thunk_FUN_044adef4(PTR_DAT_09f251e8);
    FUN_07996cc8(uVar3,uVar4,0);
  }
  else {
    iVar2 = thunk_FUN_04457530();
    if (iVar2 == 1) {
      if (unaff_w19 < 0) {
        thunk_FUN_044adef4(PTR_DAT_09f25200);
        uVar3 = thunk_FUN_0448520c();
        uVar4 = thunk_FUN_044adef4(PTR_DAT_09f251f8);
        uVar5 = thunk_FUN_044adef4(PTR_DAT_09f25208);
        FUN_0799a4bc(uVar3,uVar4,uVar5,0);
      }
      else {
        iVar2 = FUN_07a56bec();
        puVar1 = PTR_DAT_09f283d0;
        if (*(int *)(unaff_x21 + 0x1c) <= iVar2 - unaff_w19) {
          lVar6 = *(long *)(unaff_x21 + 0x10);
          if (lVar6 != 0) {
            do {
              in_stack_00000010 = *(undefined8 *)(lVar6 + 0x10);
              uVar4 = *(undefined8 *)(lVar6 + 0x18);
              in_stack_00000018 = 0;
              thunk_FUN_044bb4b4(&stack0x00000010);
              in_stack_00000018 = uVar4;
              thunk_FUN_044bb4b4(&stack0x00000018,uVar4);
              thunk_FUN_04484e3c(*(undefined8 *)puVar1);
              FUN_07a60d64();
              lVar6 = *(long *)(lVar6 + 0x20);
            } while (lVar6 != 0);
          }
          return;
        }
        thunk_FUN_044adef4(PTR_DAT_09f217f8);
        uVar3 = thunk_FUN_0448520c();
        uVar4 = thunk_FUN_044adef4(PTR_DAT_09f25228);
        uVar5 = thunk_FUN_044adef4(PTR_DAT_09f251f8);
        FUN_07996d40(uVar3,uVar4,uVar5,0);
      }
    }
    else {
      thunk_FUN_044adef4(PTR_DAT_09f217f8);
      uVar3 = thunk_FUN_0448520c();
      uVar4 = thunk_FUN_044adef4(PTR_DAT_09f271f0);
      FUN_0799d598(uVar3,uVar4,0);
    }
  }
  uVar4 = thunk_FUN_044adef4(PTR_DAT_09f42cb8);
                    /* WARNING: Subroutine does not return */
  FUN_04447d10(uVar3,uVar4);
}


