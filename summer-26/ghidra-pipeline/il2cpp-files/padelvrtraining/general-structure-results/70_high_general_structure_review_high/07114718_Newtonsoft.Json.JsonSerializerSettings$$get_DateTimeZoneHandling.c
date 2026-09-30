/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_DateTimeZoneHandling
ENTRY_POINT: 07114718
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_18;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__get_DateTimeZoneHandling
               (undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  short sVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long unaff_x20;
  uint uVar14;
  uint uVar15;
  long lVar16;
  undefined1 *in_stack_00000008;
  
  puVar3 = PTR_DAT_0920ada0;
  uVar8 = FUN_06fd15d4(param_2,*param_1,0);
  if ((uVar8 & 1) != 0) {
    uVar9 = FUN_07110ec0();
    puVar4 = PTR_DAT_091a5478;
    FUN_06fc5244(*(undefined8 *)PTR_DAT_091a5478,uVar9,0);
    FUN_0711424c();
    uVar9 = FUN_071115b8();
    FUN_06fc5244(*(undefined8 *)puVar4,uVar9,0);
    FUN_0711424c();
  }
  FUN_0711424c();
  FUN_0711424c();
  FUN_0711424c();
  FUN_0711424c();
  FUN_0711424c();
  FUN_0711424c();
  FUN_0711424c();
  FUN_0711424c();
  FUN_0711424c();
  FUN_0711424c();
  if (*(char *)(*(long *)(*(long *)puVar3 + 0xb8) + 3) == '\0') {
    plVar10 = *(long **)(unaff_x20 + 0x78);
    if (plVar10 == (long *)0x0) goto LAB_07114e24;
    iVar7 = (**(code **)(*plVar10 + 0x1a8))(plVar10,*(undefined8 *)(*plVar10 + 0x1b0));
    if (iVar7 == 3) {
      FUN_0711424c();
      FUN_0711424c();
      FUN_0711424c();
    }
  }
  lVar11 = FUN_0710ffec();
  puVar3 = PTR_DAT_0920ff28;
  if (lVar11 != 0) {
    uVar8 = FUN_06fd15d4(lVar11,*(undefined8 *)PTR_DAT_09208510,0);
    if ((uVar8 & 1) != 0) {
      FUN_0711424c();
      FUN_0711424c();
      FUN_0711424c();
    }
    lVar11 = thunk_FUN_03d2ef40(*(undefined8 *)puVar3);
    FUN_07114ef8();
    if (lVar11 != 0) {
      lVar11 = FUN_07114f80(lVar11);
      puVar1 = (undefined8 *)PTR_DAT_091a5478;
      puVar2 = (undefined8 *)PTR_DAT_0920ff68;
      if (*(int *)(unaff_x20 + 0x144) == -1) {
        FUN_07113290();
        puVar1 = (undefined8 *)PTR_DAT_091a5478;
        puVar2 = (undefined8 *)PTR_DAT_0920ff68;
      }
      PTR_DAT_091a5478 = (undefined *)puVar1;
      PTR_DAT_0920ff68 = (undefined *)puVar2;
      if ((lVar11 != 0) && (uVar14 = *(uint *)(lVar11 + 0x18), 0 < (int)uVar14)) {
        lVar16 = 0;
        lVar13 = lVar11 + 0x20;
        do {
          uVar15 = (uint)lVar16;
          if (uVar14 <= uVar15) goto LAB_07114e48;
          lVar12 = *(long *)(lVar13 + lVar16 * 8);
          if (lVar12 == 0) goto LAB_07114e24;
          sVar6 = FUN_06fcd2c8(lVar12,0,0);
          if (sVar6 == -0x1fff) {
            if (*(uint *)(lVar11 + 0x18) <= uVar15) goto LAB_07114e48;
            lVar12 = *(long *)(lVar13 + lVar16 * 8);
            if (lVar12 == 0) goto LAB_07114e24;
            uVar9 = FUN_06fd63a4(lVar12,1,0);
            FUN_0711424c();
            lVar12 = FUN_07111310();
            if ((lVar12 == 0) || (lVar12 = FUN_06fd6ac0(lVar12,0,0), lVar12 == 0))
            goto LAB_07114e24;
            uVar8 = FUN_06fd15d4(lVar12,uVar9,0);
            if ((uVar8 & 1) != 0) {
              *in_stack_00000008 = 1;
            }
          }
          else if (sVar6 == -0x2000) {
            if (*(uint *)(lVar11 + 0x18) <= uVar15) goto LAB_07114e48;
            lVar12 = *(long *)(lVar13 + lVar16 * 8);
            if (lVar12 == 0) goto LAB_07114e24;
            FUN_06fd63a4(lVar12,1,0);
            FUN_07114e4c();
          }
          else {
            if (*(uint *)(lVar11 + 0x18) <= uVar15) goto LAB_07114e48;
            FUN_0711424c();
            lVar12 = FUN_0710ffec();
            if (lVar12 == 0) goto LAB_07114e24;
            uVar8 = FUN_06fd15d4(lVar12,*puVar2,0);
            if ((uVar8 & 1) != 0) {
              if (*(uint *)(lVar11 + 0x18) <= uVar15) goto LAB_07114e48;
              FUN_06fc5244(*puVar1,*(undefined8 *)(lVar13 + lVar16 * 8),0);
              FUN_0711424c();
            }
          }
          uVar14 = *(uint *)(lVar11 + 0x18);
          lVar16 = lVar16 + 1;
        } while ((int)lVar16 < (int)uVar14);
      }
      lVar11 = FUN_0710ffec();
      if (lVar11 != 0) {
        uVar8 = FUN_06fd15d4(lVar11,*(undefined8 *)PTR_DAT_09208508,0);
        puVar4 = PTR_DAT_091a7128;
        puVar3 = PTR_DAT_091a15c8;
        if ((uVar8 & 1) == 0) {
          lVar11 = FUN_0710ff24();
          if (lVar11 != 0) {
            uVar8 = FUN_06fd15d4(lVar11,*(undefined8 *)PTR_DAT_0920fee8,0);
            if ((uVar8 & 1) == 0) {
              return;
            }
            if (*(int *)(*(long *)PTR_DAT_091addc8 + 0xe0) == 0) {
              thunk_FUN_03db619c();
            }
            lVar11 = FUN_07113838();
            if ((lVar11 != 0) && (plVar10 = *(long **)(lVar11 + 0x78), plVar10 != (long *)0x0)) {
              iVar7 = 1;
              do {
                lVar13 = (**(code **)(*plVar10 + 0x238))(plVar10,*(undefined8 *)(*plVar10 + 0x240));
                if (lVar13 == 0) break;
                if (*(int *)(lVar13 + 0x18) < iVar7) {
                  return;
                }
                lVar13 = FUN_07111080(lVar11,iVar7);
                if (lVar13 == 0) break;
                if (0 < *(int *)(lVar13 + 0x10)) {
                  FUN_07111080(lVar11,iVar7);
                  FUN_0711424c();
                }
                plVar10 = *(long **)(lVar11 + 0x78);
                iVar7 = iVar7 + 1;
              } while (plVar10 != (long *)0x0);
            }
          }
        }
        else {
          iVar7 = 0;
          do {
            uVar9 = FUN_07112098();
            FUN_06fd2168(*(undefined8 *)puVar4,uVar9,*(undefined8 *)puVar3,0);
            FUN_0711424c();
            puVar5 = PTR_DAT_091addc8;
            iVar7 = iVar7 + 1;
          } while (iVar7 != 7);
          uVar9 = *(undefined8 *)(unaff_x20 + 0x78);
          if (*(int *)(*(long *)PTR_DAT_091addc8 + 0xe0) == 0) {
            thunk_FUN_03db619c();
          }
          uVar8 = FUN_0711522c(uVar9);
          if ((uVar8 & 1) != 0) {
            return;
          }
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_03db619c();
          }
          lVar11 = FUN_0711369c();
          if ((lVar11 != 0) && (plVar10 = *(long **)(lVar11 + 0x78), plVar10 != (long *)0x0)) {
            uVar14 = 0;
            do {
              lVar13 = (**(code **)(*plVar10 + 0x238))(plVar10,*(undefined8 *)(*plVar10 + 0x240));
              if (lVar13 == 0) break;
              iVar7 = uVar14 + 1;
              if (*(int *)(lVar13 + 0x18) < iVar7) {
                return;
              }
              FUN_07111080(lVar11,iVar7);
              FUN_0711424c();
              FUN_071111c0(lVar11,iVar7);
              FUN_0711424c();
              lVar13 = FUN_071112a8(lVar11);
              if (lVar13 == 0) break;
              if (*(uint *)(lVar13 + 0x18) <= uVar14) {
LAB_07114e48:
                    /* WARNING: Subroutine does not return */
                FUN_03d2d550();
              }
              FUN_0711424c();
              plVar10 = *(long **)(lVar11 + 0x78);
              uVar14 = uVar14 + 1;
            } while (plVar10 != (long *)0x0);
          }
        }
      }
    }
  }
LAB_07114e24:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


