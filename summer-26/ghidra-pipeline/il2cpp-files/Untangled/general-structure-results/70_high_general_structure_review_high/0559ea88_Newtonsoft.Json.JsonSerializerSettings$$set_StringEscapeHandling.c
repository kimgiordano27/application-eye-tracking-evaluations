/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_StringEscapeHandling
ENTRY_POINT: 0559ea88
PROGRAM: Untangled-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_16;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__set_StringEscapeHandling(void)

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
  long unaff_x20;
  int iVar10;
  undefined1 *unaff_x21;
  long unaff_x22;
  uint uVar11;
  uint uVar12;
  long lVar13;
  
  FUN_0559d424();
  puVar2 = PTR_DAT_06d107c0;
  puVar1 = PTR_DAT_06d03438;
  if ((unaff_x22 != 0) && (uVar11 = *(uint *)(unaff_x22 + 0x18), 0 < (int)uVar11)) {
    lVar13 = 0;
    lVar6 = unaff_x22 + 0x20;
    do {
      uVar12 = (uint)lVar13;
      if (uVar11 <= uVar12) goto LAB_0559ee7c;
      lVar5 = *(long *)(lVar6 + lVar13 * 8);
      if (lVar5 == 0) goto LAB_0559ee58;
      sVar4 = FUN_05460528(lVar5,0,0);
      if (sVar4 == -0x1fff) {
        if (*(uint *)(unaff_x22 + 0x18) <= uVar12) goto LAB_0559ee7c;
        lVar5 = *(long *)(lVar6 + lVar13 * 8);
        if (lVar5 == 0) goto LAB_0559ee58;
        uVar8 = FUN_054693ec(lVar5,1,0);
        FUN_0559e27c();
        lVar5 = FUN_0559b58c();
        if ((lVar5 == 0) || (lVar5 = FUN_05469b08(lVar5,0,0), lVar5 == 0)) goto LAB_0559ee58;
        uVar7 = FUN_05464898(lVar5,uVar8,0);
        if ((uVar7 & 1) != 0) {
          *unaff_x21 = 1;
        }
      }
      else {
                    /* try { // try from 0559eae4 to 0569eaf3 has its CatchHandler @ 0559eaf4 */
        if (sVar4 == -0x2000) {
          if (*(uint *)(unaff_x22 + 0x18) <= uVar12) goto LAB_0559ee7c;
          lVar5 = *(long *)(lVar6 + lVar13 * 8);
          if (lVar5 == 0) goto LAB_0559ee58;
          FUN_054693ec(lVar5,1,0);
          FUN_0559ee80();
        }
        else {
          if (*(uint *)(unaff_x22 + 0x18) <= uVar12) goto LAB_0559ee7c;
          FUN_0559e27c();
          lVar5 = FUN_0559a338();
          if (lVar5 == 0) goto LAB_0559ee58;
          uVar7 = FUN_05464898(lVar5,*(undefined8 *)puVar2,0);
          if ((uVar7 & 1) != 0) {
            if (*(uint *)(unaff_x22 + 0x18) <= uVar12) goto LAB_0559ee7c;
            FUN_05458458(*(undefined8 *)puVar1,*(undefined8 *)(lVar6 + lVar13 * 8),0);
            FUN_0559e27c();
          }
        }
      }
      uVar11 = *(uint *)(unaff_x22 + 0x18);
      lVar13 = lVar13 + 1;
    } while ((int)lVar13 < (int)uVar11);
  }
  lVar6 = FUN_0559a338();
  if (lVar6 != 0) {
    uVar7 = FUN_05464898(lVar6,*(undefined8 *)PTR_DAT_06d10770,0);
    puVar2 = PTR_DAT_06d09aa8;
    puVar1 = PTR_DAT_06d09aa0;
    if ((uVar7 & 1) == 0) {
      lVar6 = FUN_0559a270();
      if (lVar6 != 0) {
        uVar7 = FUN_05464898(lVar6,*(undefined8 *)PTR_DAT_06d4f438,0);
        if ((uVar7 & 1) == 0) {
          return;
        }
        if (*(int *)(*(long *)PTR_DAT_06d4f330 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        lVar6 = FUN_0559d868();
        if ((lVar6 != 0) && (plVar9 = *(long **)(lVar6 + 0x78), plVar9 != (long *)0x0)) {
          iVar10 = 1;
          do {
            lVar13 = (**(code **)(*plVar9 + 0x238))(plVar9,*(undefined8 *)(*plVar9 + 0x240));
            if (lVar13 == 0) break;
            if (*(int *)(lVar13 + 0x18) < iVar10) {
              return;
            }
            lVar13 = FUN_0559b2fc(lVar6,iVar10);
            if (lVar13 == 0) break;
            if (0 < *(int *)(lVar13 + 0x10)) {
              FUN_0559b2fc(lVar6,iVar10);
              FUN_0559e27c();
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
        uVar8 = FUN_0559c314();
        FUN_05465414(*(undefined8 *)puVar1,uVar8,*(undefined8 *)puVar2,0);
        FUN_0559e27c();
        puVar3 = PTR_DAT_06d4f330;
        iVar10 = iVar10 + 1;
      } while (iVar10 != 7);
      uVar8 = *(undefined8 *)(unaff_x20 + 0x78);
      if (*(int *)(*(long *)PTR_DAT_06d4f330 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar7 = FUN_0559ef2c(uVar8);
      if ((uVar7 & 1) != 0) {
        return;
      }
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      lVar6 = FUN_0559d6cc();
      if ((lVar6 != 0) && (plVar9 = *(long **)(lVar6 + 0x78), plVar9 != (long *)0x0)) {
        uVar11 = 0;
        do {
          lVar13 = (**(code **)(*plVar9 + 0x238))(plVar9,*(undefined8 *)(*plVar9 + 0x240));
          if (lVar13 == 0) break;
          iVar10 = uVar11 + 1;
          if (*(int *)(lVar13 + 0x18) < iVar10) {
            return;
          }
          FUN_0559b2fc(lVar6,iVar10);
          FUN_0559e27c();
          FUN_0559b43c(lVar6,iVar10);
          FUN_0559e27c();
          lVar13 = FUN_0559b524(lVar6);
          if (lVar13 == 0) break;
          if (*(uint *)(lVar13 + 0x18) <= uVar11) {
LAB_0559ee7c:
                    /* WARNING: Subroutine does not return */
            FUN_02f080c8();
          }
          FUN_0559e27c();
          plVar9 = *(long **)(lVar6 + 0x78);
          uVar11 = uVar11 + 1;
        } while (plVar9 != (long *)0x0);
      }
    }
  }
LAB_0559ee58:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


