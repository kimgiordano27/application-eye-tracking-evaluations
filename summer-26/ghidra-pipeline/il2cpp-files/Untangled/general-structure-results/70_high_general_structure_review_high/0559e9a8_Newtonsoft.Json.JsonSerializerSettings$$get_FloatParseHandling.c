/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_FloatParseHandling
ENTRY_POINT: 0559e9a8
PROGRAM: Untangled-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_18;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__get_FloatParseHandling
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  short sVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  long unaff_x20;
  int iVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  undefined1 *in_stack_00000008;
  
  FUN_0559e27c(param_2,param_3,*param_1,param_5,0);
  lVar7 = FUN_0559a338();
  puVar3 = PTR_DAT_06d4f478;
  if (lVar7 != 0) {
    uVar8 = FUN_05464898(lVar7,*(undefined8 *)PTR_DAT_06d107a8,0);
    if ((uVar8 & 1) != 0) {
      FUN_0559e27c();
      FUN_0559e27c();
      FUN_0559e27c();
    }
    lVar7 = thunk_FUN_02ef1808(*(undefined8 *)puVar3);
    FUN_055a146c(lVar7,0);
    if (lVar7 != 0) {
      lVar7 = FUN_055a0c64(lVar7);
      puVar1 = (undefined8 *)PTR_DAT_06d03438;
      puVar2 = (undefined8 *)PTR_DAT_06d107c0;
      if (*(int *)(unaff_x20 + 0x144) == -1) {
        FUN_0559d424();
        puVar1 = (undefined8 *)PTR_DAT_06d03438;
        puVar2 = (undefined8 *)PTR_DAT_06d107c0;
      }
      PTR_DAT_06d03438 = (undefined *)puVar1;
      PTR_DAT_06d107c0 = (undefined *)puVar2;
      if ((lVar7 != 0) && (uVar14 = *(uint *)(lVar7 + 0x18), 0 < (int)uVar14)) {
        lVar16 = 0;
        lVar12 = lVar7 + 0x20;
        do {
          uVar15 = (uint)lVar16;
          if (uVar14 <= uVar15) goto LAB_0559ee7c;
          lVar9 = *(long *)(lVar12 + lVar16 * 8);
          if (lVar9 == 0) goto LAB_0559ee58;
          sVar6 = FUN_05460528(lVar9,0,0);
          if (sVar6 == -0x1fff) {
            if (*(uint *)(lVar7 + 0x18) <= uVar15) goto LAB_0559ee7c;
            lVar9 = *(long *)(lVar12 + lVar16 * 8);
            if (lVar9 == 0) goto LAB_0559ee58;
            uVar10 = FUN_054693ec(lVar9,1,0);
            FUN_0559e27c();
            lVar9 = FUN_0559b58c();
            if ((lVar9 == 0) || (lVar9 = FUN_05469b08(lVar9,0,0), lVar9 == 0)) goto LAB_0559ee58;
            uVar8 = FUN_05464898(lVar9,uVar10,0);
            if ((uVar8 & 1) != 0) {
              *in_stack_00000008 = 1;
            }
          }
          else if (sVar6 == -0x2000) {
            if (*(uint *)(lVar7 + 0x18) <= uVar15) goto LAB_0559ee7c;
            lVar9 = *(long *)(lVar12 + lVar16 * 8);
            if (lVar9 == 0) goto LAB_0559ee58;
            FUN_054693ec(lVar9,1,0);
            FUN_0559ee80();
          }
          else {
            if (*(uint *)(lVar7 + 0x18) <= uVar15) goto LAB_0559ee7c;
            FUN_0559e27c();
            lVar9 = FUN_0559a338();
            if (lVar9 == 0) goto LAB_0559ee58;
            uVar8 = FUN_05464898(lVar9,*puVar2,0);
            if ((uVar8 & 1) != 0) {
              if (*(uint *)(lVar7 + 0x18) <= uVar15) goto LAB_0559ee7c;
              FUN_05458458(*puVar1,*(undefined8 *)(lVar12 + lVar16 * 8),0);
              FUN_0559e27c();
            }
          }
          uVar14 = *(uint *)(lVar7 + 0x18);
          lVar16 = lVar16 + 1;
        } while ((int)lVar16 < (int)uVar14);
      }
      lVar7 = FUN_0559a338();
      if (lVar7 != 0) {
        uVar8 = FUN_05464898(lVar7,*(undefined8 *)PTR_DAT_06d10770,0);
        puVar4 = PTR_DAT_06d09aa8;
        puVar3 = PTR_DAT_06d09aa0;
        if ((uVar8 & 1) == 0) {
          lVar7 = FUN_0559a270();
          if (lVar7 != 0) {
            uVar8 = FUN_05464898(lVar7,*(undefined8 *)PTR_DAT_06d4f438,0);
            if ((uVar8 & 1) == 0) {
              return;
            }
            if (*(int *)(*(long *)PTR_DAT_06d4f330 + 0xe0) == 0) {
              thunk_FUN_02f12b58();
            }
            lVar7 = FUN_0559d868();
            if ((lVar7 != 0) && (plVar11 = *(long **)(lVar7 + 0x78), plVar11 != (long *)0x0)) {
              iVar13 = 1;
              do {
                lVar12 = (**(code **)(*plVar11 + 0x238))(plVar11,*(undefined8 *)(*plVar11 + 0x240));
                if (lVar12 == 0) break;
                if (*(int *)(lVar12 + 0x18) < iVar13) {
                  return;
                }
                lVar12 = FUN_0559b2fc(lVar7,iVar13);
                if (lVar12 == 0) break;
                if (0 < *(int *)(lVar12 + 0x10)) {
                  FUN_0559b2fc(lVar7,iVar13);
                  FUN_0559e27c();
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
            uVar10 = FUN_0559c314();
            FUN_05465414(*(undefined8 *)puVar3,uVar10,*(undefined8 *)puVar4,0);
            FUN_0559e27c();
            puVar5 = PTR_DAT_06d4f330;
            iVar13 = iVar13 + 1;
          } while (iVar13 != 7);
          uVar10 = *(undefined8 *)(unaff_x20 + 0x78);
          if (*(int *)(*(long *)PTR_DAT_06d4f330 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
          }
          uVar8 = FUN_0559ef2c(uVar10);
          if ((uVar8 & 1) != 0) {
            return;
          }
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
          }
          lVar7 = FUN_0559d6cc();
          if ((lVar7 != 0) && (plVar11 = *(long **)(lVar7 + 0x78), plVar11 != (long *)0x0)) {
            uVar14 = 0;
            do {
              lVar12 = (**(code **)(*plVar11 + 0x238))(plVar11,*(undefined8 *)(*plVar11 + 0x240));
              if (lVar12 == 0) break;
              iVar13 = uVar14 + 1;
              if (*(int *)(lVar12 + 0x18) < iVar13) {
                return;
              }
              FUN_0559b2fc(lVar7,iVar13);
              FUN_0559e27c();
              FUN_0559b43c(lVar7,iVar13);
              FUN_0559e27c();
              lVar12 = FUN_0559b524(lVar7);
              if (lVar12 == 0) break;
              if (*(uint *)(lVar12 + 0x18) <= uVar14) {
LAB_0559ee7c:
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              FUN_0559e27c();
              plVar11 = *(long **)(lVar7 + 0x78);
              uVar14 = uVar14 + 1;
            } while (plVar11 != (long *)0x0);
          }
        }
      }
    }
  }
LAB_0559ee58:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


