/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_DateFormatString
ENTRY_POINT: 071118f4
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


long Newtonsoft_Json_JsonSerializer__set_DateFormatString(void)

{
  bool bVar1;
  ushort uVar2;
  short sVar3;
  short sVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long unaff_x19;
  long *plVar9;
  long unaff_x20;
  int iVar10;
  
  FUN_03d2d2b0();
  FUN_03d2d2b0(PTR_DAT_0920fe18);
  *(undefined1 *)(unaff_x19 + 0xc0d) = 1;
  plVar9 = (long *)(unaff_x20 + 0x70);
  if (*plVar9 != 0) {
    return *plVar9;
  }
  uVar5 = FUN_07111634();
  uVar6 = FUN_07111450();
  lVar7 = FUN_06fd2168(uVar5,*(undefined8 *)PTR_DAT_091a29d8,uVar6,0);
  lVar8 = FUN_07111450();
  if (lVar8 != 0) {
    iVar10 = 0;
    bVar1 = false;
    sVar4 = 0x27;
LAB_07111964:
    do {
      if (*(int *)(lVar8 + 0x10) <= iVar10) {
        lVar7 = FUN_06fc5244(lVar7,*(undefined8 *)PTR_DAT_0920fe18,0);
Newtonsoft_Json_JsonSerializer__get_CheckAdditionalContent:
        *plVar9 = lVar7;
        thunk_FUN_03d1023c(plVar9,lVar7);
        return *plVar9;
      }
      lVar8 = FUN_07111450();
      if (lVar8 == 0) break;
      uVar2 = FUN_06fcd2c8(lVar8,iVar10,0);
      if (0x25 < uVar2) {
        if (uVar2 != 0x5c) {
          if (uVar2 == 0x7a) {
            if (!bVar1) goto Newtonsoft_Json_JsonSerializer__get_CheckAdditionalContent;
          }
          else if (uVar2 == 0x27) goto LAB_071119dc;
          goto LAB_071119c0;
        }
LAB_071119bc:
        iVar10 = iVar10 + 1;
LAB_071119c0:
        iVar10 = iVar10 + 1;
        lVar8 = FUN_07111450();
        if (lVar8 == 0) break;
        goto LAB_07111964;
      }
      if (uVar2 == 0x25) goto LAB_071119bc;
      if (uVar2 != 0x22) goto LAB_071119c0;
LAB_071119dc:
      lVar8 = FUN_07111450();
      if (bVar1) {
        if (lVar8 != 0) {
          sVar3 = FUN_06fcd2c8(lVar8,iVar10,0);
          bVar1 = sVar4 != sVar3;
          goto LAB_071119c0;
        }
        break;
      }
      if (lVar8 == 0) break;
      sVar4 = FUN_06fcd2c8(lVar8,iVar10,0);
      iVar10 = iVar10 + 1;
      lVar8 = FUN_07111450();
      bVar1 = true;
    } while (lVar8 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


