/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$OnSerializing
ENTRY_POINT: 068643fc
PROGRAM: Waifu-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__OnSerializing(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long unaff_x19;
  long *unaff_x20;
  uint uVar14;
  long lVar15;
  long *plVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  ulong uVar20;
  
  if (0 < (int)param_1) {
    uVar14 = 0;
    uVar19 = 0;
    do {
      if ((uint)param_1 <= uVar19) goto LAB_068648ac;
      plVar16 = unaff_x20 + (long)(int)uVar19 + 4;
      plVar6 = (long *)*plVar16;
      if (((plVar6 == (long *)0x0) ||
          (lVar7 = (**(code **)(*plVar6 + 1000))(plVar6,*(undefined8 *)(*plVar6 + 0x3f0)),
          lVar7 == 0)) || (unaff_x19 == 0)) goto LAB_068648b0;
      iVar5 = *(int *)(lVar7 + 0x18);
      if (iVar5 == *(int *)(unaff_x19 + 0x18)) {
        if (iVar5 < 1) {
          iVar18 = 0;
        }
        else {
          uVar20 = 0;
          while( true ) {
            plVar6 = *(long **)(lVar7 + 0x20 + uVar20 * 8);
            if (plVar6 == (long *)0x0) goto LAB_068648b0;
            plVar6 = (long *)(**(code **)(*plVar6 + 0x1e8))(plVar6,*(undefined8 *)(*plVar6 + 0x1f0))
            ;
            uVar17 = (uint)uVar20;
            if ((*(uint *)(unaff_x19 + 0x18) <= uVar17) || (*(uint *)(lVar7 + 0x18) <= uVar17))
            goto LAB_068648ac;
            uVar8 = FUN_06744d80(*(undefined8 *)(unaff_x19 + 0x20 + uVar20 * 8),
                                 *(undefined8 *)(lVar7 + 0x20 + uVar20 * 8),0);
            uVar11 = DAT_083bd010;
            if ((uVar8 & 1) == 0) {
              if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
                FUN_033b9870();
              }
              plVar9 = (long *)FUN_0683eca4(uVar11,0);
              if (plVar9 != plVar6) {
                if (*(uint *)(unaff_x19 + 0x18) <= uVar17) goto LAB_068648ac;
                plVar9 = *(long **)(unaff_x19 + 0x20 + uVar20 * 8);
                if (plVar9 != (long *)0x0) {
                  if ((*(byte *)(DAT_083d11c8 + 0x130) <= *(byte *)(*plVar9 + 0x130)) &&
                     (*(long *)(*(long *)(*plVar9 + 200) +
                                (ulong)*(byte *)(DAT_083d11c8 + 0x130) * 8 + -8) == DAT_083d11c8)) {
                    if (*(uint *)(unaff_x20 + 3) <= uVar19) goto LAB_068648ac;
                    plVar10 = (long *)*plVar16;
                    if (plVar10 == (long *)0x0) goto LAB_06864678;
                    lVar13 = *plVar10;
                    if ((*(byte *)(lVar13 + 0x130) < *(byte *)(DAT_083cedb0 + 0x130)) ||
                       (*(long *)(*(long *)(lVar13 + 200) +
                                  (ulong)*(byte *)(DAT_083cedb0 + 0x130) * 8 + -8) != DAT_083cedb0))
                    goto LAB_06864678;
                    uVar11 = (**(code **)(lVar13 + 0x348))(plVar10,*(undefined8 *)(lVar13 + 0x350));
                    plVar9 = (long *)FUN_0674522c(plVar9,uVar11);
                    if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
                      FUN_033b9870(DAT_083d23b8);
                    }
                    if (plVar9 == (long *)0x0) goto LAB_06864678;
                  }
                }
                if (plVar6 == (long *)0x0) goto LAB_068648b0;
                uVar8 = (**(code **)(*plVar6 + 0x608))(plVar6,*(undefined8 *)(*plVar6 + 0x610));
                if ((uVar8 & 1) == 0) {
                  uVar8 = (**(code **)(*plVar6 + 0x2b8))
                                    (plVar6,plVar9,*(undefined8 *)(*plVar6 + 0x2c0));
                }
                else {
                  if ((plVar9 == (long *)0x0) ||
                     (lVar13 = (**(code **)(*plVar9 + 0x338))
                                         (plVar9,*(undefined8 *)(*plVar9 + 0x340)), lVar13 == 0))
                  goto LAB_068648b0;
                  uVar8 = FUN_06848930(lVar13,0);
                  if ((uVar8 & 1) == 0) goto LAB_06864678;
                  uVar11 = (**(code **)(*plVar9 + 0x338))(plVar9,*(undefined8 *)(*plVar9 + 0x340));
                  uVar12 = (**(code **)(*plVar6 + 0x338))(plVar6,*(undefined8 *)(*plVar6 + 0x340));
                  if (*(int *)(DAT_083ca578 + 0xe0) == 0) {
                    FUN_033b9870(DAT_083ca578);
                  }
                  uVar8 = FUN_0686498c(uVar11,uVar12);
                }
                if ((uVar8 & 1) == 0) goto LAB_06864678;
              }
            }
            if (*(int *)(unaff_x19 + 0x18) <= (int)(uVar17 + 1)) break;
            uVar20 = uVar20 + 1;
            if (*(uint *)(lVar7 + 0x18) <= (uint)uVar20) goto LAB_068648ac;
          }
          uVar20 = (ulong)(uVar17 + 1);
LAB_06864678:
          iVar18 = (int)uVar20;
          iVar5 = *(int *)(unaff_x19 + 0x18);
        }
        if (iVar18 == iVar5) {
          uVar17 = *(uint *)(unaff_x20 + 3);
          if (uVar17 <= uVar19) goto LAB_068648ac;
          lVar7 = *plVar16;
          if (lVar7 != 0) {
            lVar13 = FUN_0339898c(lVar7,*(undefined8 *)(*unaff_x20 + 0x40));
            if (lVar13 == 0) {
              uVar11 = FUN_033d1d78();
                    /* WARNING: Subroutine does not return */
              FUN_033d1c20(uVar11,0);
            }
            uVar17 = *(uint *)(unaff_x20 + 3);
          }
          if (uVar17 <= uVar14) goto LAB_068648ac;
          plVar6 = unaff_x20 + (long)(int)uVar14 + 4;
          *plVar6 = lVar7;
          uVar14 = uVar14 + 1;
          if (DAT_08908cd0 != 0) {
            puVar1 = &DAT_0873ccb0 + ((ulong)plVar6 >> 0x12 & 0x7fff);
            do {
              cVar2 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = *puVar1 | 1L << ((ulong)plVar6 >> 0xc & 0x3f);
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
        }
      }
      param_1 = unaff_x20[3];
      uVar19 = uVar19 + 1;
    } while ((int)uVar19 < (int)param_1);
    if (uVar14 != 0) {
      if (uVar14 == 1) {
        if ((int)param_1 != 0) {
          return unaff_x20[4];
        }
      }
      else {
        lVar7 = FUN_03398188(DAT_083c7838,*(undefined4 *)(unaff_x19 + 0x18));
        iVar5 = *(int *)(unaff_x19 + 0x18);
        if (0 < iVar5) {
          if (lVar7 == 0) {
LAB_068648b0:
                    /* WARNING: Subroutine does not return */
            FUN_033d1d3c();
          }
          uVar19 = *(uint *)(lVar7 + 0x18);
          uVar20 = 0;
          do {
            if (uVar19 == uVar20) goto LAB_068648ac;
            *(int *)(lVar7 + 0x20 + uVar20 * 4) = (int)uVar20;
            uVar20 = uVar20 + 1;
          } while ((long)iVar5 != uVar20);
        }
        if ((int)uVar14 < 2) {
          uVar19 = 0;
        }
        else {
          uVar8 = (ulong)uVar14 - 1;
          uVar19 = 0;
          uVar20 = 1;
          do {
            bVar4 = false;
            while( true ) {
              while( true ) {
                if (((uint)unaff_x20[3] <= uVar19) || ((unaff_x20[3] & 0xffffffffU) <= uVar20))
                goto LAB_068648ac;
                lVar15 = unaff_x20[(long)(int)uVar19 + 4];
                lVar13 = unaff_x20[uVar20 + 4];
                if (*(int *)(DAT_083ca578 + 0xe0) == 0) {
                  FUN_033b9870();
                }
                iVar5 = FUN_06861580(lVar15,lVar7,0,lVar13,lVar7,0);
                if (iVar5 != 0) break;
                bVar4 = true;
                bVar3 = uVar8 == uVar20;
                uVar20 = uVar20 + 1;
                if (bVar3) goto LAB_06864958;
              }
              if (iVar5 == 2) break;
              uVar20 = uVar20 + 1;
              if (uVar14 == uVar20) {
                if (bVar4) {
LAB_06864958:
                  FUN_033d1ba8(&DAT_083c8758);
                  uVar12 = thunk_FUN_03398a84();
                  uVar11 = FUN_033d1ba8(&DAT_08433710);
                  FUN_0673e2f4(uVar12,uVar11,0);
                  uVar11 = FUN_033d1ba8(&DAT_08407e20);
                    /* WARNING: Subroutine does not return */
                  FUN_033d1c20(uVar12,uVar11);
                }
                goto LAB_06864878;
              }
            }
            uVar19 = (uint)uVar20;
            bVar4 = uVar8 != uVar20;
            uVar20 = uVar20 + 1;
          } while (bVar4);
        }
LAB_06864878:
        if (uVar19 < *(uint *)(unaff_x20 + 3)) {
          return unaff_x20[(long)(int)uVar19 + 4];
        }
      }
LAB_068648ac:
                    /* WARNING: Subroutine does not return */
      FUN_033d1d44();
    }
  }
  return 0;
}


