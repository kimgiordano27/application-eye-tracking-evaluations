/*
FUNCTION_NAME: Meta.WitAi.Requests.VRequest.RequestCompleteDelegate<bool>$$EndInvoke
ENTRY_POINT: 051ee37c
PROGRAM: Waifu-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6
*/


void Meta_WitAi_Requests_VRequest_RequestCompleteDelegate<bool>__EndInvoke(int param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  uint uVar12;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *plVar13;
  long *unaff_x22;
  int unaff_w23;
  int iVar14;
  undefined8 uVar15;
  undefined1 auVar16 [12];
  
  if (unaff_w23 - (int)unaff_x19 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_06850f64(5,0);
  }
  lVar7 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x38);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    FUN_0338f618(lVar7);
  }
  lVar7 = FUN_0339898c();
  if (lVar7 != 0) {
    plVar13 = *(long **)(unaff_x21 + 0x10);
    if (plVar13 != (long *)0x0) {
      lVar8 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_0338f618(lVar8);
      }
      lVar9 = *plVar13;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar8) {
            puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 5) * 0x10 + 0x138);
            goto LAB_051ee540;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)FUN_0338f71c(plVar13,lVar8,5);
LAB_051ee540:
                    /* WARNING: Could not recover jumptable at 0x051ee56c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar5)(plVar13,lVar7,(ulong)unaff_x19 & 0xffffffff,puVar5[1]);
      return;
    }
    goto LAB_051ee71c;
  }
  plVar13 = (long *)FUN_0339a700(*unaff_x22 + 0x20);
  if (plVar13 == (long *)0x0) goto LAB_051ee71c;
  plVar13 = (long *)(**(code **)(*plVar13 + 0x448))(plVar13,*(undefined8 *)(*plVar13 + 0x450));
  uVar15 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x70);
  if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
    FUN_033b9870(DAT_083d23b8);
  }
  plVar6 = (long *)FUN_0683eca4(uVar15,0);
  if (plVar13 == (long *)0x0) goto LAB_051ee71c;
  uVar10 = (**(code **)(*plVar13 + 0x2b8))(plVar13,plVar6,*(undefined8 *)(*plVar13 + 0x2c0));
  if ((uVar10 & 1) == 0) {
    if (plVar6 == (long *)0x0) goto LAB_051ee71c;
    uVar10 = (**(code **)(*plVar6 + 0x2b8))(plVar6,plVar13,*(undefined8 *)(*plVar6 + 0x2c0));
    if ((uVar10 & 1) != 0) goto LAB_051ee4b4;
  }
  else {
LAB_051ee4b4:
    plVar13 = (long *)FUN_0339898c();
    if (plVar13 != (long *)0x0) {
      plVar6 = *(long **)(unaff_x21 + 0x10);
      if (plVar6 != (long *)0x0) {
        lVar7 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_0338f618(lVar7);
        }
        lVar8 = *plVar6;
        uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == lVar7) {
              puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_051ee57c;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar5 = (undefined8 *)FUN_0338f71c(plVar6,lVar7,0);
LAB_051ee57c:
        iVar4 = (*(code *)*puVar5)(plVar6,puVar5[1]);
        if (0 < iVar4) {
          iVar14 = 0;
          do {
            plVar6 = *(long **)(unaff_x21 + 0x10);
            if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_033d1d3c();
            }
            lVar7 = **(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
            if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
              lVar7 = FUN_0338f618(lVar7);
            }
            lVar8 = *plVar6;
            uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == lVar7) {
                  puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
                  goto LAB_051ee620;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            puVar5 = (undefined8 *)FUN_0338f71c(plVar6,lVar7,0);
LAB_051ee620:
            (*(code *)*puVar5)(plVar6,iVar14,puVar5[1]);
            lVar7 = FUN_03398650(*(undefined8 *)
                                  (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28));
            if ((lVar7 != 0) &&
               (lVar8 = FUN_0339898c(lVar7,*(undefined8 *)(*plVar13 + 0x40)), lVar8 == 0)) {
              uVar15 = FUN_0334ef60(DAT_086f5c88,"System","ArrayTypeMismatchException",0);
                    /* WARNING: Subroutine does not return */
              FUN_033d1c20(uVar15,0);
            }
            uVar12 = (uint)unaff_x19;
            if (*(uint *)(plVar13 + 3) <= uVar12) {
                    /* WARNING: Subroutine does not return */
              FUN_033d1d44();
            }
            plVar6 = plVar13 + (long)(int)uVar12 + 4;
            *plVar6 = lVar7;
            if (DAT_08908cd0 != 0) {
              puVar1 = &DAT_0873ccb0 + ((ulong)plVar6 >> 0x12 & 0x7fff);
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                  *puVar1 = *puVar1 | 1L << ((ulong)plVar6 >> 0xc & 0x3f);
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            iVar14 = iVar14 + 1;
            unaff_x19 = (undefined8 *)(ulong)(uVar12 + 1);
          } while (iVar14 != iVar4);
        }
        return;
      }
LAB_051ee71c:
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    auVar16 = FUN_06851a2c();
    if (auVar16._8_4_ != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_02e0237c(auVar16._0_8_);
    }
    unaff_x19 = (undefined8 *)__cxa_begin_catch(auVar16._0_8_);
    uVar15 = FUN_0335b6c8(&DAT_083c8a88,1);
    uVar10 = FUN_033c6698(uVar15,*(undefined8 *)*unaff_x19);
    if ((uVar10 & 1) == 0) goto LAB_051ee7a4;
    __cxa_end_catch();
  }
  FUN_06851a2c(0);
LAB_051ee7a4:
  puVar5 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar5 = *unaff_x19;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar5,&PTR_PTR_07e8c608,0);
}


