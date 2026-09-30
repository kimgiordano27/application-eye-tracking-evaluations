/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_FloatParseHandling
ENTRY_POINT: 04ec5f2c
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


/* WARNING: Removing unreachable block (ram,0x04ec6114) */
/* WARNING: Removing unreachable block (ram,0x04ec6118) */
/* WARNING: Removing unreachable block (ram,0x04ec611c) */
/* WARNING: Removing unreachable block (ram,0x04ec6184) */

void Newtonsoft_Json_JsonSerializerSettings__set_FloatParseHandling(long param_1,ulong param_2)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  char in_stack_00000008;
  int iStack000000000000000c;
  
  if ((DAT_06a6f253 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065cfd90);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c91f8);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f1670);
    DAT_06a6f253 = 1;
  }
  iStack000000000000000c = 0;
  in_stack_00000008 = '\0';
  if (((*(long *)(param_1 + 0x38) == 0) ||
      (uVar3 = FUN_04e56b1c(*(long *)(param_1 + 0x38),0), (uVar3 & 1) != 0)) ||
     (FUN_04ec3e1c(param_1), *(char *)(param_1 + 0x54) == '\0')) {
LAB_04ec5ff4:
    *(undefined1 *)(param_1 + 0x56) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    puVar1 = PTR_DAT_065cfd90;
    if (((param_2 & 1) != 0) && (*(long *)(param_1 + 0x28) != 0)) {
      if (*(int *)(*(long *)(param_1 + 0x28) + 0x18) == 0x1000) {
        lVar4 = *(long *)PTR_DAT_065cfd90;
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
          lVar4 = *(long *)puVar1;
        }
        plVar6 = *(long **)(lVar4 + 0xb8);
        if (*plVar6 == 0) {
          if (*(int *)(lVar4 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
            plVar6 = *(long **)(*(long *)puVar1 + 0xb8);
          }
          lVar7 = plVar6[1];
          in_stack_00000008 = '\0';
          FUN_04f951b8(lVar7,&stack0x00000008,0);
          lVar4 = *(long *)puVar1;
          if (*(int *)(lVar4 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
            lVar4 = *(long *)puVar1;
          }
          plVar6 = *(long **)(lVar4 + 0xb8);
          if (*plVar6 == 0) {
            lVar9 = *(long *)(param_1 + 0x28);
            if (*(int *)(lVar4 + 0xe0) == 0) {
              thunk_FUN_02cd038c();
              plVar6 = *(long **)(*(long *)puVar1 + 0xb8);
            }
            *plVar6 = lVar9;
          }
          if (in_stack_00000008 != '\0') {
            thunk_FUN_02c6fbb4(lVar7,0);
          }
        }
      }
      *(undefined8 *)(param_1 + 0x28) = 0;
      if (*(int *)(*(long *)PTR_DAT_065c91f8 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      FUN_04f69aa4(param_1,0);
    }
    return;
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x10);
    if (*(int *)(*(long *)PTR_DAT_065f1670 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    thunk_FUN_02cb2398(uVar8,&stack0x0000000c);
    if (iStack000000000000000c != 0) {
      uVar8 = FUN_04ec2c20(param_1,*(undefined8 *)(param_1 + 0x30));
      iVar2 = iStack000000000000000c;
      thunk_FUN_02c7737c(PTR_DAT_065f1670);
      FUN_028be084();
      uVar8 = FUN_04ec2c98(uVar8,iVar2);
      uVar5 = thunk_FUN_02c7737c(PTR_DAT_065f7f50);
                    /* WARNING: Subroutine does not return */
      FUN_02ce7b54(uVar8,uVar5);
    }
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_04e562ec(*(long *)(param_1 + 0x38),0);
      goto LAB_04ec5ff4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


