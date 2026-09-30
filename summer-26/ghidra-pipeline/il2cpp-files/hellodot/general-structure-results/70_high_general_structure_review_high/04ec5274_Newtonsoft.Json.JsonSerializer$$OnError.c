/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$OnError
ENTRY_POINT: 04ec5274
PROGRAM: hellodot-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__OnError(void)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int unaff_w21;
  int unaff_w22;
  long unaff_x23;
  long *unaff_x24;
  long unaff_x25;
  
  AkMIDIEventCallbackInfo__get_byProgramNum();
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f7ee0);
  *(undefined1 *)(unaff_x25 + 0x24f) = 1;
  if (unaff_x24[7] == 0) {
LAB_04ec53a0:
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  uVar1 = FUN_04e56b1c(unaff_x24[7],0);
  if ((uVar1 & 1) == 0) {
    uVar1 = (**(code **)(*unaff_x24 + 0x1e8))();
    if ((uVar1 & 1) == 0) {
      thunk_FUN_02c7737c(PTR_DAT_065c9f08);
      uVar5 = thunk_FUN_02cea894();
      uVar6 = thunk_FUN_02c7737c(PTR_DAT_065f7ee8);
      FUN_04f2c64c(uVar5,uVar6,0);
    }
    else if (unaff_x23 == 0) {
      thunk_FUN_02c7737c(PTR_DAT_065c96c8);
      uVar5 = thunk_FUN_02cea894();
      uVar6 = thunk_FUN_02c7737c(PTR_DAT_065dac10);
      FUN_04e97f6c(uVar5,uVar6,0);
    }
    else {
      if (unaff_w21 < 0) {
        thunk_FUN_02c7737c(PTR_DAT_065cb038);
        uVar5 = thunk_FUN_02cea894();
        puVar3 = PTR_DAT_065f7c68;
      }
      else {
        if (-1 < unaff_w22) {
          if (unaff_w21 <= *(int *)(unaff_x23 + 0x18) - unaff_w22) {
            if (*(char *)((long)unaff_x24 + 0x55) == '\0') {
              FUN_04eba2a4();
              return;
            }
            lVar2 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065f7ed8);
            FUN_04ec54f0();
            puVar3 = PTR_DAT_065f7ee0;
            if (lVar2 != 0) {
              *(int *)(lVar2 + 0x38) = unaff_w21;
              *(undefined4 *)(lVar2 + 0x3c) = 0xffffffff;
              *(int *)(lVar2 + 0x34) = unaff_w21;
              lVar2 = thunk_FUN_02cea894(*(undefined8 *)puVar3);
              FUN_04ec55bc();
              if (lVar2 != 0) {
                FUN_04ec565c(lVar2);
                return;
              }
            }
            goto LAB_04ec53a0;
          }
          thunk_FUN_02c7737c(PTR_DAT_065c96d8);
          uVar5 = thunk_FUN_02cea894();
          uVar6 = thunk_FUN_02c7737c(PTR_DAT_065f7ef0);
          FUN_04e9e938(uVar5,uVar6,0);
          goto FUN_04ec54d8;
        }
        thunk_FUN_02c7737c(PTR_DAT_065cb038);
        uVar5 = thunk_FUN_02cea894();
        puVar3 = PTR_DAT_065e8d68;
      }
      uVar6 = thunk_FUN_02c7737c(puVar3);
      uVar4 = thunk_FUN_02c7737c(PTR_DAT_065dfd88);
      FUN_04e9b6f4(uVar5,uVar6,uVar4,0);
    }
  }
  else {
    thunk_FUN_02c7737c(PTR_DAT_065de2c8);
    uVar5 = thunk_FUN_02cea894();
    uVar6 = thunk_FUN_02c7737c(PTR_DAT_065f7e18);
    FUN_04f3f918(uVar5,uVar6,0);
  }
FUN_04ec54d8:
  uVar6 = thunk_FUN_02c7737c(PTR_DAT_065f7ef8);
                    /* WARNING: Subroutine does not return */
  FUN_02ce7b54(uVar5,uVar6);
}


