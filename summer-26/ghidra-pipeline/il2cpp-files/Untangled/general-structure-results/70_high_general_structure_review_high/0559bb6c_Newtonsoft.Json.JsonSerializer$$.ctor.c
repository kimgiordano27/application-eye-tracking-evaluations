/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$.ctor
ENTRY_POINT: 0559bb6c
PROGRAM: Untangled-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_JsonSerializer___ctor(long param_1)

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
  
  FUN_02f07e70(*(undefined8 *)(param_1 + 0x430));
  FUN_02f07e70(PTR_DAT_06d4f378);
  *(undefined1 *)(unaff_x19 + 0x904) = 1;
  plVar9 = (long *)(unaff_x20 + 0x70);
  if (*plVar9 != 0) {
    return *plVar9;
  }
  uVar5 = FUN_0559b8b0();
  uVar6 = FUN_0559b6cc();
  lVar7 = FUN_05465414(uVar5,*(undefined8 *)PTR_DAT_06d09430,uVar6,0);
  lVar8 = FUN_0559b6cc();
  if (lVar8 != 0) {
    iVar10 = 0;
    bVar1 = false;
    sVar4 = 0x27;
LAB_0559bbe0:
    do {
      if (*(int *)(lVar8 + 0x10) <= iVar10) {
        lVar7 = FUN_05458458(lVar7,*(undefined8 *)PTR_DAT_06d4f378,0);
LAB_0559bccc:
        *plVar9 = lVar7;
        thunk_FUN_02f411dc(plVar9,lVar7);
        return *plVar9;
      }
      lVar8 = FUN_0559b6cc();
      if (lVar8 == 0) break;
      uVar2 = FUN_05460528(lVar8,iVar10,0);
      if (0x25 < uVar2) {
        if (uVar2 != 0x5c) {
          if (uVar2 == 0x7a) {
            if (!bVar1) goto LAB_0559bccc;
          }
          else if (uVar2 == 0x27) goto LAB_0559bc58;
          goto LAB_0559bc3c;
        }
LAB_0559bc38:
        iVar10 = iVar10 + 1;
LAB_0559bc3c:
        iVar10 = iVar10 + 1;
        lVar8 = FUN_0559b6cc();
        if (lVar8 == 0) break;
        goto LAB_0559bbe0;
      }
      if (uVar2 == 0x25) goto LAB_0559bc38;
      if (uVar2 != 0x22) goto LAB_0559bc3c;
LAB_0559bc58:
      lVar8 = FUN_0559b6cc();
      if (bVar1) {
        if (lVar8 != 0) {
          sVar3 = FUN_05460528(lVar8,iVar10,0);
          bVar1 = sVar4 != sVar3;
          goto LAB_0559bc3c;
        }
        break;
      }
      if (lVar8 == 0) break;
      sVar4 = FUN_05460528(lVar8,iVar10,0);
      iVar10 = iVar10 + 1;
      lVar8 = FUN_0559b6cc();
      bVar1 = true;
    } while (lVar8 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


