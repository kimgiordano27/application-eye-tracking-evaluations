/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_StringEscapeHandling
ENTRY_POINT: 071149d4
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_17;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__get_StringEscapeHandling(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  short sVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  long unaff_x20;
  int iVar13;
  undefined8 *unaff_x21;
  uint uVar14;
  uint uVar15;
  long lVar16;
  undefined1 *in_stack_00000008;
  
  FUN_0711424c();
  FUN_0711424c();
  lVar7 = thunk_FUN_03d2ef40(*unaff_x21);
  FUN_07114ef8();
  if (lVar7 != 0) {
    lVar7 = FUN_07114f80(lVar7);
    puVar1 = (undefined8 *)PTR_DAT_091a5478;
    puVar2 = (undefined8 *)PTR_DAT_0920ff68;
    if (*(int *)(unaff_x20 + 0x144) == -1) {
      FUN_07113290();
      puVar1 = (undefined8 *)PTR_DAT_091a5478;
      puVar2 = (undefined8 *)PTR_DAT_0920ff68;
    }
    PTR_DAT_091a5478 = (undefined *)puVar1;
    PTR_DAT_0920ff68 = (undefined *)puVar2;
    if ((lVar7 != 0) && (uVar14 = *(uint *)(lVar7 + 0x18), 0 < (int)uVar14)) {
      lVar16 = 0;
      lVar12 = lVar7 + 0x20;
      do {
        uVar15 = (uint)lVar16;
        if (uVar14 <= uVar15) goto LAB_07114e48;
        lVar8 = *(long *)(lVar12 + lVar16 * 8);
        if (lVar8 == 0) goto LAB_07114e24;
        sVar6 = FUN_06fcd2c8(lVar8,0,0);
        if (sVar6 == -0x1fff) {
          if (*(uint *)(lVar7 + 0x18) <= uVar15) goto LAB_07114e48;
          lVar8 = *(long *)(lVar12 + lVar16 * 8);
          if (lVar8 == 0) goto LAB_07114e24;
          uVar10 = FUN_06fd63a4(lVar8,1,0);
          FUN_0711424c();
          lVar8 = FUN_07111310();
          if ((lVar8 == 0) || (lVar8 = FUN_06fd6ac0(lVar8,0,0), lVar8 == 0)) goto LAB_07114e24;
          uVar9 = FUN_06fd15d4(lVar8,uVar10,0);
          if ((uVar9 & 1) != 0) {
            *in_stack_00000008 = 1;
          }
        }
        else if (sVar6 == -0x2000) {
          if (*(uint *)(lVar7 + 0x18) <= uVar15) goto LAB_07114e48;
          lVar8 = *(long *)(lVar12 + lVar16 * 8);
          if (lVar8 == 0) goto LAB_07114e24;
          FUN_06fd63a4(lVar8,1,0);
          FUN_07114e4c();
        }
        else {
          if (*(uint *)(lVar7 + 0x18) <= uVar15) goto LAB_07114e48;
          FUN_0711424c();
          lVar8 = FUN_0710ffec();
          if (lVar8 == 0) goto LAB_07114e24;
          uVar9 = FUN_06fd15d4(lVar8,*puVar2,0);
          if ((uVar9 & 1) != 0) {
            if (*(uint *)(lVar7 + 0x18) <= uVar15) goto LAB_07114e48;
            FUN_06fc5244(*puVar1,*(undefined8 *)(lVar12 + lVar16 * 8),0);
            FUN_0711424c();
          }
        }
        uVar14 = *(uint *)(lVar7 + 0x18);
        lVar16 = lVar16 + 1;
      } while ((int)lVar16 < (int)uVar14);
    }
    lVar7 = FUN_0710ffec();
    if (lVar7 != 0) {
      uVar9 = FUN_06fd15d4(lVar7,*(undefined8 *)PTR_DAT_09208508,0);
      puVar4 = PTR_DAT_091a7128;
      puVar3 = PTR_DAT_091a15c8;
      if ((uVar9 & 1) == 0) {
        lVar7 = FUN_0710ff24();
        if (lVar7 != 0) {
          uVar9 = FUN_06fd15d4(lVar7,*(undefined8 *)PTR_DAT_0920fee8,0);
          if ((uVar9 & 1) == 0) {
            return;
          }
          if (*(int *)(*(long *)PTR_DAT_091addc8 + 0xe0) == 0) {
            thunk_FUN_03db619c();
          }
          lVar7 = FUN_07113838();
          if ((lVar7 != 0) && (plVar11 = *(long **)(lVar7 + 0x78), plVar11 != (long *)0x0)) {
            iVar13 = 1;
            do {
              lVar12 = (**(code **)(*plVar11 + 0x238))(plVar11,*(undefined8 *)(*plVar11 + 0x240));
              if (lVar12 == 0) break;
              if (*(int *)(lVar12 + 0x18) < iVar13) {
                return;
              }
              lVar12 = FUN_07111080(lVar7,iVar13);
              if (lVar12 == 0) break;
              if (0 < *(int *)(lVar12 + 0x10)) {
                FUN_07111080(lVar7,iVar13);
                FUN_0711424c();
              }
              plVar11 = *(long **)(lVar7 + 0x78);
              iVar13 = iVar13 + 1;
            } while (plVar11 != (long *)0x0);
          }
        }
      }
      else {
        iVar13 = 0;
        do {
          uVar10 = FUN_07112098();
          FUN_06fd2168(*(undefined8 *)puVar4,uVar10,*(undefined8 *)puVar3,0);
          FUN_0711424c();
          puVar5 = PTR_DAT_091addc8;
          iVar13 = iVar13 + 1;
        } while (iVar13 != 7);
        uVar10 = *(undefined8 *)(unaff_x20 + 0x78);
        if (*(int *)(*(long *)PTR_DAT_091addc8 + 0xe0) == 0) {
          thunk_FUN_03db619c();
        }
        uVar9 = FUN_0711522c(uVar10);
        if ((uVar9 & 1) != 0) {
          return;
        }
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_03db619c();
        }
        lVar7 = FUN_0711369c();
        if ((lVar7 != 0) && (plVar11 = *(long **)(lVar7 + 0x78), plVar11 != (long *)0x0)) {
          uVar14 = 0;
          do {
            lVar12 = (**(code **)(*plVar11 + 0x238))(plVar11,*(undefined8 *)(*plVar11 + 0x240));
            if (lVar12 == 0) break;
            iVar13 = uVar14 + 1;
            if (*(int *)(lVar12 + 0x18) < iVar13) {
              return;
            }
            FUN_07111080(lVar7,iVar13);
            FUN_0711424c();
            FUN_071111c0(lVar7,iVar13);
            FUN_0711424c();
            lVar12 = FUN_071112a8(lVar7);
            if (lVar12 == 0) break;
            if (*(uint *)(lVar12 + 0x18) <= uVar14) {
LAB_07114e48:
                    /* WARNING: Subroutine does not return */
              FUN_03d2d550();
            }
            FUN_0711424c();
            plVar11 = *(long **)(lVar7 + 0x78);
            uVar14 = uVar14 + 1;
          } while (plVar11 != (long *)0x0);
        }
      }
    }
  }
LAB_07114e24:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


