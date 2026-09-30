/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_Formatting
ENTRY_POINT: 0559e648
PROGRAM: Untangled-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_19;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__get_Formatting(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  short sVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long unaff_x20;
  undefined1 *unaff_x21;
  long unaff_x22;
  uint uVar14;
  uint uVar15;
  long lVar16;
  
  FUN_02f07e70();
  FUN_02f07e70(PTR_DAT_06d4f4a0);
  FUN_02f07e70(PTR_DAT_06d4f4a8);
  FUN_02f07e70(PTR_DAT_06d107a8);
  FUN_02f07e70(PTR_DAT_06d4f4b0);
  FUN_02f07e70(PTR_DAT_06d107c0);
  FUN_02f07e70(PTR_DAT_06d4f460);
  FUN_02f07e70(PTR_DAT_06d4f4b8);
  FUN_02f07e70(PTR_DAT_06d09aa0);
  FUN_02f07e70(PTR_DAT_06d4f4c0);
  FUN_02f07e70(PTR_DAT_06d4f4c8);
  FUN_02f07e70(PTR_DAT_06d09aa8);
  FUN_02f07e70(PTR_DAT_06d4f438);
  FUN_02f07e70(PTR_DAT_06d4f4d0);
  FUN_02f07e70(PTR_DAT_06d4f4d8);
  FUN_02f07e70(PTR_DAT_06d03438);
  *(undefined1 *)(unaff_x22 + 0x91b) = 1;
  lVar8 = FUN_0559a338();
  puVar4 = PTR_DAT_06d4a418;
  if (lVar8 != 0) {
    uVar9 = FUN_05464898(lVar8,*(undefined8 *)PTR_DAT_06d4f4a8,0);
    if ((uVar9 & 1) != 0) {
      uVar10 = FUN_0559b13c();
      puVar3 = PTR_DAT_06d03438;
      FUN_05458458(*(undefined8 *)PTR_DAT_06d03438,uVar10,0);
      FUN_0559e27c();
      uVar10 = FUN_0559b834();
      FUN_05458458(*(undefined8 *)puVar3,uVar10,0);
      FUN_0559e27c();
    }
    FUN_0559e27c();
    FUN_0559e27c();
    FUN_0559e27c();
    FUN_0559e27c();
    FUN_0559e27c();
    FUN_0559e27c();
    FUN_0559e27c();
    FUN_0559e27c();
    FUN_0559e27c();
    FUN_0559e27c();
    if (*(char *)(*(long *)(*(long *)puVar4 + 0xb8) + 3) == '\0') {
      plVar11 = *(long **)(unaff_x20 + 0x78);
      if (plVar11 == (long *)0x0) goto LAB_0559ee58;
      iVar7 = (**(code **)(*plVar11 + 0x1a8))(plVar11,*(undefined8 *)(*plVar11 + 0x1b0));
      if (iVar7 == 3) {
        FUN_0559e27c();
        FUN_0559e27c();
        FUN_0559e27c();
      }
    }
    lVar8 = FUN_0559a338();
    puVar4 = PTR_DAT_06d4f478;
    if (lVar8 != 0) {
      uVar9 = FUN_05464898(lVar8,*(undefined8 *)PTR_DAT_06d107a8,0);
      if ((uVar9 & 1) != 0) {
        FUN_0559e27c();
        FUN_0559e27c();
        FUN_0559e27c();
      }
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)puVar4);
      FUN_055a146c(lVar8,0);
      if (lVar8 != 0) {
        lVar8 = FUN_055a0c64(lVar8);
        puVar1 = (undefined8 *)PTR_DAT_06d03438;
        puVar2 = (undefined8 *)PTR_DAT_06d107c0;
        if (*(int *)(unaff_x20 + 0x144) == -1) {
          FUN_0559d424();
          puVar1 = (undefined8 *)PTR_DAT_06d03438;
          puVar2 = (undefined8 *)PTR_DAT_06d107c0;
        }
        PTR_DAT_06d03438 = (undefined *)puVar1;
        PTR_DAT_06d107c0 = (undefined *)puVar2;
        if ((lVar8 != 0) && (uVar14 = *(uint *)(lVar8 + 0x18), 0 < (int)uVar14)) {
          lVar16 = 0;
          lVar13 = lVar8 + 0x20;
          do {
            uVar15 = (uint)lVar16;
            if (uVar14 <= uVar15) goto LAB_0559ee7c;
            lVar12 = *(long *)(lVar13 + lVar16 * 8);
            if (lVar12 == 0) goto LAB_0559ee58;
            sVar6 = FUN_05460528(lVar12,0,0);
            if (sVar6 == -0x1fff) {
              if (*(uint *)(lVar8 + 0x18) <= uVar15) goto LAB_0559ee7c;
              lVar12 = *(long *)(lVar13 + lVar16 * 8);
              if (lVar12 == 0) goto LAB_0559ee58;
              uVar10 = FUN_054693ec(lVar12,1,0);
              FUN_0559e27c();
              lVar12 = FUN_0559b58c();
              if ((lVar12 == 0) || (lVar12 = FUN_05469b08(lVar12,0,0), lVar12 == 0))
              goto LAB_0559ee58;
              uVar9 = FUN_05464898(lVar12,uVar10,0);
              if ((uVar9 & 1) != 0) {
                *unaff_x21 = 1;
              }
            }
            else if (sVar6 == -0x2000) {
              if (*(uint *)(lVar8 + 0x18) <= uVar15) goto LAB_0559ee7c;
              lVar12 = *(long *)(lVar13 + lVar16 * 8);
              if (lVar12 == 0) goto LAB_0559ee58;
              FUN_054693ec(lVar12,1,0);
              FUN_0559ee80();
            }
            else {
              if (*(uint *)(lVar8 + 0x18) <= uVar15) goto LAB_0559ee7c;
              FUN_0559e27c();
              lVar12 = FUN_0559a338();
              if (lVar12 == 0) goto LAB_0559ee58;
              uVar9 = FUN_05464898(lVar12,*puVar2,0);
              if ((uVar9 & 1) != 0) {
                if (*(uint *)(lVar8 + 0x18) <= uVar15) goto LAB_0559ee7c;
                FUN_05458458(*puVar1,*(undefined8 *)(lVar13 + lVar16 * 8),0);
                FUN_0559e27c();
              }
            }
            uVar14 = *(uint *)(lVar8 + 0x18);
            lVar16 = lVar16 + 1;
          } while ((int)lVar16 < (int)uVar14);
        }
        lVar8 = FUN_0559a338();
        if (lVar8 != 0) {
          uVar9 = FUN_05464898(lVar8,*(undefined8 *)PTR_DAT_06d10770,0);
          puVar3 = PTR_DAT_06d09aa8;
          puVar4 = PTR_DAT_06d09aa0;
          if ((uVar9 & 1) == 0) {
            lVar8 = FUN_0559a270();
            if (lVar8 != 0) {
              uVar9 = FUN_05464898(lVar8,*(undefined8 *)PTR_DAT_06d4f438,0);
              if ((uVar9 & 1) == 0) {
                return;
              }
              if (*(int *)(*(long *)PTR_DAT_06d4f330 + 0xe0) == 0) {
                thunk_FUN_02f12b58();
              }
              lVar8 = FUN_0559d868();
              if ((lVar8 != 0) && (plVar11 = *(long **)(lVar8 + 0x78), plVar11 != (long *)0x0)) {
                iVar7 = 1;
                do {
                  lVar13 = (**(code **)(*plVar11 + 0x238))
                                     (plVar11,*(undefined8 *)(*plVar11 + 0x240));
                  if (lVar13 == 0) break;
                  if (*(int *)(lVar13 + 0x18) < iVar7) {
                    return;
                  }
                  lVar13 = FUN_0559b2fc(lVar8,iVar7);
                  if (lVar13 == 0) break;
                  if (0 < *(int *)(lVar13 + 0x10)) {
                    FUN_0559b2fc(lVar8,iVar7);
                    FUN_0559e27c();
                  }
                  plVar11 = *(long **)(lVar8 + 0x78);
                  iVar7 = iVar7 + 1;
                } while (plVar11 != (long *)0x0);
              }
            }
          }
          else {
            iVar7 = 0;
            do {
              uVar10 = FUN_0559c314();
              FUN_05465414(*(undefined8 *)puVar4,uVar10,*(undefined8 *)puVar3,0);
              FUN_0559e27c();
              puVar5 = PTR_DAT_06d4f330;
              iVar7 = iVar7 + 1;
            } while (iVar7 != 7);
            uVar10 = *(undefined8 *)(unaff_x20 + 0x78);
            if (*(int *)(*(long *)PTR_DAT_06d4f330 + 0xe0) == 0) {
              thunk_FUN_02f12b58();
            }
            uVar9 = FUN_0559ef2c(uVar10);
            if ((uVar9 & 1) != 0) {
              return;
            }
            if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
              thunk_FUN_02f12b58();
            }
            lVar8 = FUN_0559d6cc();
            if ((lVar8 != 0) && (plVar11 = *(long **)(lVar8 + 0x78), plVar11 != (long *)0x0)) {
              uVar14 = 0;
              do {
                lVar13 = (**(code **)(*plVar11 + 0x238))(plVar11,*(undefined8 *)(*plVar11 + 0x240));
                if (lVar13 == 0) break;
                iVar7 = uVar14 + 1;
                if (*(int *)(lVar13 + 0x18) < iVar7) {
                  return;
                }
                FUN_0559b2fc(lVar8,iVar7);
                FUN_0559e27c();
                FUN_0559b43c(lVar8,iVar7);
                FUN_0559e27c();
                lVar13 = FUN_0559b524(lVar8);
                if (lVar13 == 0) break;
                if (*(uint *)(lVar13 + 0x18) <= uVar14) {
LAB_0559ee7c:
                    /* WARNING: Subroutine does not return */
                  FUN_02f080c8();
                }
                FUN_0559e27c();
                plVar11 = *(long **)(lVar8 + 0x78);
                uVar14 = uVar14 + 1;
              } while (plVar11 != (long *)0x0);
            }
          }
        }
      }
    }
  }
LAB_0559ee58:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


