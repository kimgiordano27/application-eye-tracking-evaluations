/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_Culture
ENTRY_POINT: 07111918
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined8 Newtonsoft_Json_JsonSerializer__get_Culture(void)

{
  bool bVar1;
  ushort uVar2;
  short sVar3;
  short sVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *unaff_x19;
  int iVar8;
  
  uVar5 = FUN_07111634();
  uVar6 = FUN_07111450();
  uVar5 = FUN_06fd2168(uVar5,*(undefined8 *)PTR_DAT_091a29d8,uVar6,0);
  lVar7 = FUN_07111450();
  if (lVar7 != 0) {
    iVar8 = 0;
    bVar1 = false;
    sVar4 = 0x27;
LAB_07111964:
    do {
      if (*(int *)(lVar7 + 0x10) <= iVar8) {
        uVar5 = FUN_06fc5244(uVar5,*(undefined8 *)PTR_DAT_0920fe18,0);
Newtonsoft_Json_JsonSerializer__get_CheckAdditionalContent:
        *unaff_x19 = uVar5;
        thunk_FUN_03d1023c();
        return *unaff_x19;
      }
      lVar7 = FUN_07111450();
      if (lVar7 == 0) break;
      uVar2 = FUN_06fcd2c8(lVar7,iVar8,0);
      if (uVar2 < 0x26) {
        if (uVar2 == 0x25) {
LAB_071119bc:
          iVar8 = iVar8 + 1;
        }
        else if (uVar2 == 0x22) {
LAB_071119dc:
          lVar7 = FUN_07111450();
          if (!bVar1) {
            if (lVar7 == 0) break;
            sVar4 = FUN_06fcd2c8(lVar7,iVar8,0);
            iVar8 = iVar8 + 1;
            lVar7 = FUN_07111450();
            bVar1 = true;
            if (lVar7 == 0) break;
            goto LAB_07111964;
          }
          if (lVar7 == 0) break;
          sVar3 = FUN_06fcd2c8(lVar7,iVar8,0);
          bVar1 = sVar4 != sVar3;
        }
      }
      else {
        if (uVar2 == 0x5c) goto LAB_071119bc;
        if (uVar2 == 0x7a) {
          if (!bVar1) goto Newtonsoft_Json_JsonSerializer__get_CheckAdditionalContent;
        }
        else if (uVar2 == 0x27) goto LAB_071119dc;
      }
      iVar8 = iVar8 + 1;
      lVar7 = FUN_07111450();
    } while (lVar7 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


