/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_StringEscapeHandling
ENTRY_POINT: 04ec5f94
PROGRAM: hellodot-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04ec6114) */
/* WARNING: Removing unreachable block (ram,0x04ec6118) */
/* WARNING: Removing unreachable block (ram,0x04ec611c) */
/* WARNING: Removing unreachable block (ram,0x04ec6184) */

void Newtonsoft_Json_JsonSerializerSettings__get_StringEscapeHandling(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long unaff_x19;
  ulong unaff_x21;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  char cStack0000000000000008;
  int iStack000000000000000c;
  
  FUN_04ec3e1c();
  if (*(char *)(unaff_x19 + 0x54) == '\0') {
LAB_04ec5ff4:
    *(undefined1 *)(unaff_x19 + 0x56) = 0;
    *(undefined4 *)(unaff_x19 + 0x50) = 0;
    puVar1 = PTR_DAT_065cfd90;
    if (((unaff_x21 & 1) != 0) && (*(long *)(unaff_x19 + 0x28) != 0)) {
      if (*(int *)(*(long *)(unaff_x19 + 0x28) + 0x18) == 0x1000) {
        lVar2 = *(long *)PTR_DAT_065cfd90;
        if (*(int *)(lVar2 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
          lVar2 = *(long *)puVar1;
        }
        plVar4 = *(long **)(lVar2 + 0xb8);
        if (*plVar4 == 0) {
          if (*(int *)(lVar2 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
            plVar4 = *(long **)(*(long *)puVar1 + 0xb8);
          }
          lVar5 = plVar4[1];
          cStack0000000000000008 = '\0';
          FUN_04f951b8(lVar5,&stack0x00000008,0);
          lVar2 = *(long *)puVar1;
          if (*(int *)(lVar2 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
            lVar2 = *(long *)puVar1;
          }
          plVar4 = *(long **)(lVar2 + 0xb8);
          if (*plVar4 == 0) {
            lVar7 = *(long *)(unaff_x19 + 0x28);
            if (*(int *)(lVar2 + 0xe0) == 0) {
              thunk_FUN_02cd038c();
              plVar4 = *(long **)(*(long *)puVar1 + 0xb8);
            }
            *plVar4 = lVar7;
          }
          if (cStack0000000000000008 != '\0') {
            thunk_FUN_02c6fbb4(lVar5,0);
          }
        }
      }
      *(undefined8 *)(unaff_x19 + 0x28) = 0;
      if (*(int *)(*(long *)PTR_DAT_065c91f8 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      FUN_04f69aa4();
    }
    return;
  }
  if (*(long *)(unaff_x19 + 0x38) != 0) {
    uVar6 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
    if (*(int *)(*(long *)PTR_DAT_065f1670 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    thunk_FUN_02cb2398(uVar6,(long)&stack0x00000008 + 4);
    if (iStack000000000000000c != 0) {
      uVar6 = FUN_04ec2c20();
      thunk_FUN_02c7737c(PTR_DAT_065f1670);
      FUN_028be084();
      uVar6 = FUN_04ec2c98(uVar6,iStack000000000000000c);
      uVar3 = thunk_FUN_02c7737c(PTR_DAT_065f7f50);
                    /* WARNING: Subroutine does not return */
      FUN_02ce7b54(uVar6,uVar3);
    }
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_04e562ec(*(long *)(unaff_x19 + 0x38),0);
      goto LAB_04ec5ff4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


