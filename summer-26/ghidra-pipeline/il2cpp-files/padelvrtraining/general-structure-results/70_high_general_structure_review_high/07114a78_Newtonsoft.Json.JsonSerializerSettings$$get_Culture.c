/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_Culture
ENTRY_POINT: 07114a78
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_15;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__get_Culture(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  short sVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  uint in_w8;
  long unaff_x20;
  int iVar10;
  undefined1 *unaff_x21;
  long unaff_x22;
  uint uVar11;
  long lVar12;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  
  lVar12 = 0;
  lVar6 = unaff_x22 + 0x20;
  do {
    uVar11 = (uint)lVar12;
    if (in_w8 <= uVar11) goto LAB_07114e48;
    lVar5 = *(long *)(lVar6 + lVar12 * 8);
    if (lVar5 == 0) goto LAB_07114e24;
    sVar4 = FUN_06fcd2c8(lVar5,0,0);
    if (sVar4 == -0x1fff) {
      if (*(uint *)(unaff_x22 + 0x18) <= uVar11) goto LAB_07114e48;
      lVar5 = *(long *)(lVar6 + lVar12 * 8);
      if (lVar5 == 0) goto LAB_07114e24;
      uVar8 = FUN_06fd63a4(lVar5,1,0);
      FUN_0711424c();
      lVar5 = FUN_07111310();
      if ((lVar5 == 0) || (lVar5 = FUN_06fd6ac0(lVar5,0,0), lVar5 == 0)) goto LAB_07114e24;
      uVar7 = FUN_06fd15d4(lVar5,uVar8,0);
      if ((uVar7 & 1) != 0) {
        *unaff_x21 = 1;
      }
    }
    else if (sVar4 == -0x2000) {
      if (*(uint *)(unaff_x22 + 0x18) <= uVar11) goto LAB_07114e48;
      lVar5 = *(long *)(lVar6 + lVar12 * 8);
      if (lVar5 == 0) goto LAB_07114e24;
      FUN_06fd63a4(lVar5,1,0);
      FUN_07114e4c();
    }
    else {
      if (*(uint *)(unaff_x22 + 0x18) <= uVar11) goto LAB_07114e48;
      FUN_0711424c();
      lVar5 = FUN_0710ffec();
      if (lVar5 == 0) goto LAB_07114e24;
      uVar7 = FUN_06fd15d4(lVar5,*unaff_x28,0);
      if ((uVar7 & 1) != 0) {
        if (*(uint *)(unaff_x22 + 0x18) <= uVar11) goto LAB_07114e48;
        FUN_06fc5244(*unaff_x29,*(undefined8 *)(lVar6 + lVar12 * 8),0);
        FUN_0711424c();
      }
    }
    in_w8 = *(uint *)(unaff_x22 + 0x18);
    lVar12 = lVar12 + 1;
  } while ((int)lVar12 < (int)in_w8);
  lVar6 = FUN_0710ffec();
  if (lVar6 != 0) {
    uVar7 = FUN_06fd15d4(lVar6,*(undefined8 *)PTR_DAT_09208508,0);
    puVar2 = PTR_DAT_091a7128;
    puVar1 = PTR_DAT_091a15c8;
    if ((uVar7 & 1) == 0) {
      lVar6 = FUN_0710ff24();
      if (lVar6 != 0) {
        uVar7 = FUN_06fd15d4(lVar6,*(undefined8 *)PTR_DAT_0920fee8,0);
        if ((uVar7 & 1) == 0) {
          return;
        }
        if (*(int *)(*(long *)PTR_DAT_091addc8 + 0xe0) == 0) {
          thunk_FUN_03db619c();
        }
        lVar6 = FUN_07113838();
        if ((lVar6 != 0) && (plVar9 = *(long **)(lVar6 + 0x78), plVar9 != (long *)0x0)) {
          iVar10 = 1;
          do {
            lVar12 = (**(code **)(*plVar9 + 0x238))(plVar9,*(undefined8 *)(*plVar9 + 0x240));
            if (lVar12 == 0) break;
            if (*(int *)(lVar12 + 0x18) < iVar10) {
              return;
            }
            lVar12 = FUN_07111080(lVar6,iVar10);
            if (lVar12 == 0) break;
            if (0 < *(int *)(lVar12 + 0x10)) {
              FUN_07111080(lVar6,iVar10);
              FUN_0711424c();
            }
            plVar9 = *(long **)(lVar6 + 0x78);
            iVar10 = iVar10 + 1;
          } while (plVar9 != (long *)0x0);
        }
      }
    }
    else {
      iVar10 = 0;
      do {
        uVar8 = FUN_07112098();
        FUN_06fd2168(*(undefined8 *)puVar2,uVar8,*(undefined8 *)puVar1,0);
        FUN_0711424c();
        puVar3 = PTR_DAT_091addc8;
        iVar10 = iVar10 + 1;
      } while (iVar10 != 7);
      uVar8 = *(undefined8 *)(unaff_x20 + 0x78);
      if (*(int *)(*(long *)PTR_DAT_091addc8 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      uVar7 = FUN_0711522c(uVar8);
      if ((uVar7 & 1) != 0) {
        return;
      }
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      lVar6 = FUN_0711369c();
      if ((lVar6 != 0) && (plVar9 = *(long **)(lVar6 + 0x78), plVar9 != (long *)0x0)) {
        uVar11 = 0;
        do {
          lVar12 = (**(code **)(*plVar9 + 0x238))(plVar9,*(undefined8 *)(*plVar9 + 0x240));
          if (lVar12 == 0) break;
          iVar10 = uVar11 + 1;
          if (*(int *)(lVar12 + 0x18) < iVar10) {
            return;
          }
          FUN_07111080(lVar6,iVar10);
          FUN_0711424c();
          FUN_071111c0(lVar6,iVar10);
          FUN_0711424c();
          lVar12 = FUN_071112a8(lVar6);
          if (lVar12 == 0) break;
          if (*(uint *)(lVar12 + 0x18) <= uVar11) {
LAB_07114e48:
                    /* WARNING: Subroutine does not return */
            FUN_03d2d550();
          }
          FUN_0711424c();
          plVar9 = *(long **)(lVar6 + 0x78);
          uVar11 = uVar11 + 1;
        } while (plVar9 != (long *)0x0);
      }
    }
  }
LAB_07114e24:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


