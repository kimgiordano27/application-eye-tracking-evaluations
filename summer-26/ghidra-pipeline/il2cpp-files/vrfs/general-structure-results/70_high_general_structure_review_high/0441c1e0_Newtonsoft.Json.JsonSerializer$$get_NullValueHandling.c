/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_NullValueHandling
ENTRY_POINT: 0441c1e0
PROGRAM: vrfs-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__get_NullValueHandling(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long *plVar10;
  int unaff_w23;
  int iVar11;
  undefined8 uVar12;
  
  iVar2 = (**(code **)(*(long *)(*(long *)(param_1 + 0xc0) + 0x48) + 8))();
  if ((int)(unaff_w23 - unaff_w19) < iVar2) {
    FUN_031db448(5,0);
  }
  lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x50);
  if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
    FUN_015c2790(lVar5);
  }
  lVar5 = thunk_FUN_015d0480();
  if (lVar5 == 0) {
    plVar10 = (long *)thunk_FUN_0164ba04();
    puVar1 = PTR_DAT_06dc26f0;
    if (plVar10 != (long *)0x0) {
      plVar10 = (long *)(**(code **)(*plVar10 + 0x418))(plVar10,*(undefined8 *)(*plVar10 + 0x420));
      uVar12 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x58);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_016466fc(*(long *)puVar1);
      }
      plVar4 = (long *)FUN_031c8668(uVar12,0);
      if (plVar10 != (long *)0x0) {
        uVar8 = (**(code **)(*plVar10 + 0x298))(plVar10,plVar4,*(undefined8 *)(*plVar10 + 0x2a0));
        if ((uVar8 & 1) == 0) {
          if (plVar4 == (long *)0x0) goto LAB_0441c550;
          uVar8 = (**(code **)(*plVar4 + 0x298))(plVar4,plVar10,*(undefined8 *)(*plVar4 + 0x2a0));
          if ((uVar8 & 1) == 0) {
            FUN_031dbd4c(0);
          }
        }
        plVar10 = (long *)thunk_FUN_015d0480();
        if (plVar10 == (long *)0x0) {
          FUN_031dbd4c();
        }
        plVar4 = *(long **)(unaff_x21 + 0x10);
        if (plVar4 != (long *)0x0) {
          lVar5 = **(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
          if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
            lVar5 = FUN_015c2790(lVar5);
          }
          lVar6 = *plVar4;
          uVar8 = (ulong)*(ushort *)(lVar6 + 0x12a);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == lVar5) {
                puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_0441c408;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar3 = (undefined8 *)FUN_015c2a80(plVar4,lVar5,0);
LAB_0441c408:
          iVar2 = (*(code *)*puVar3)(plVar4,puVar3[1]);
          if (0 < iVar2) {
            iVar11 = 0;
            do {
              plVar4 = *(long **)(unaff_x21 + 0x10);
              if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_0160eeb4();
              }
              lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10);
              if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
                lVar5 = FUN_015c2790(lVar5);
              }
              lVar6 = *plVar4;
              uVar8 = (ulong)*(ushort *)(lVar6 + 0x12a);
              if (uVar8 != 0) {
                piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) == lVar5) {
                    puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
                    goto LAB_0441c494;
                  }
                  uVar8 = uVar8 - 1;
                  piVar9 = piVar9 + 4;
                } while (uVar8 != 0);
              }
              puVar3 = (undefined8 *)FUN_015c2a80(plVar4,lVar5,0);
LAB_0441c494:
              (*(code *)*puVar3)(plVar4,iVar11,puVar3[1]);
              if ((*(byte *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x60) + 0x132
                            ) & 1) == 0) {
                FUN_015c2790();
              }
              lVar5 = thunk_FUN_015d01b0();
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_0160eeb4();
              }
              if ((lVar5 != 0) &&
                 (lVar6 = thunk_FUN_015d0480(lVar5,*(undefined8 *)(*plVar10 + 0x40)), lVar6 == 0)) {
                uVar12 = thunk_FUN_015f0d94();
                    /* WARNING: Subroutine does not return */
                FUN_0160ee7c(uVar12,0);
              }
              if (*(uint *)(plVar10 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
                FUN_0160eebc();
              }
              plVar10[(long)(int)unaff_w19 + 4] = lVar5;
              thunk_FUN_01656ef8(plVar10 + (long)(int)unaff_w19 + 4,lVar5);
              iVar11 = iVar11 + 1;
              unaff_w19 = unaff_w19 + 1;
            } while (iVar11 != iVar2);
          }
          return;
        }
      }
    }
  }
  else {
    plVar10 = *(long **)(unaff_x21 + 0x10);
    if (plVar10 != (long *)0x0) {
      lVar6 = **(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
      if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
        lVar6 = FUN_015c2790(lVar6);
      }
      lVar7 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar6) {
            puVar3 = (undefined8 *)(lVar7 + (long)(*piVar9 + 5) * 0x10 + 0x138);
            goto LAB_0441c3d4;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)FUN_015c2a80(plVar10,lVar6,5);
LAB_0441c3d4:
                    /* WARNING: Could not recover jumptable at 0x0441c3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar3)(plVar10,lVar5,unaff_w19,puVar3[1]);
      return;
    }
  }
LAB_0441c550:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


