/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$Deserialize
ENTRY_POINT: 05d9f700
PROGRAM: vandalizer-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


long Newtonsoft_Json_JsonSerializer__Deserialize(long param_1)

{
  ushort uVar1;
  short sVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int unaff_w19;
  long unaff_x20;
  long unaff_x21;
  int iVar7;
  long unaff_x22;
  int iStack0000000000000008;
  int iStack000000000000000c;
  undefined *puVar6;
  
  *(undefined1 *)(unaff_x22 + 0x1b5) = 1;
  if (unaff_x20 != 0) {
    if (0 < *(int *)(unaff_x20 + 0x10)) {
      iVar7 = 0;
      do {
        uVar1 = FUN_05c829ac();
        if ((uVar1 < 0x20) || (sVar2 = FUN_05c829ac(), sVar2 == 0x7f)) {
          iStack000000000000000c = unaff_w19 + iVar7;
          uVar4 = thunk_FUN_0322ed78(*(undefined8 *)(PTR_DAT_0759b388 + 0x48),
                                     (long)&stack0x00000008 + 4);
          puVar6 = PTR_DAT_075ea578;
          goto LAB_05d9f884;
        }
        param_1 = FUN_05c829ac();
        if (0x7f < ((uint)param_1 & 0xffff)) {
          param_1 = FUN_05d9fad0();
          unaff_x20 = param_1;
          break;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(unaff_x20 + 0x10));
    }
    if (*(char *)(unaff_x21 + 0x11) != '\0') {
      param_1 = FUN_05d9fbec(param_1,unaff_x20,unaff_w19);
    }
    if (unaff_x20 != 0) {
      if (0 < *(int *)(unaff_x20 + 0x10)) {
        iVar7 = 0;
        do {
          param_1 = FUN_05c829ac(unaff_x20,iVar7,0);
          puVar6 = PTR_DAT_075ea570;
          if (0x7f < ((uint)param_1 & 0xffff)) {
            uVar3 = FUN_05c87038(unaff_x20,*(undefined8 *)PTR_DAT_075ea570,5,0);
            if ((uVar3 & 1) != 0) {
              iStack0000000000000008 = unaff_w19 + iVar7;
              uVar4 = thunk_FUN_0322ed78(*(undefined8 *)(PTR_DAT_0759b388 + 0x48),&stack0x00000008);
              puVar6 = PTR_DAT_075ea588;
LAB_05d9f884:
              uVar5 = thunk_FUN_03257e30(puVar6);
              uVar4 = FUN_05c7ecc4(uVar5,uVar4,0);
              thunk_FUN_03257e30(PTR_DAT_0759c0b8);
              uVar5 = thunk_FUN_0322f148();
              FUN_05d75da4(uVar5,uVar4,0);
              uVar4 = thunk_FUN_03257e30(PTR_DAT_075ea580);
                    /* WARNING: Subroutine does not return */
              FUN_031f225c(uVar5,uVar4);
            }
            if (*(long *)(unaff_x21 + 0x18) == 0) goto LAB_05d9f8d0;
            uVar4 = FUN_05d9fdb4(*(long *)(unaff_x21 + 0x18),unaff_x20);
            param_1 = FUN_05c7e0d4(*(undefined8 *)puVar6,uVar4,0);
            unaff_x20 = param_1;
            break;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(unaff_x20 + 0x10));
      }
      FUN_05da00fc(param_1,unaff_x20,unaff_w19);
      return unaff_x20;
    }
  }
LAB_05d9f8d0:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


