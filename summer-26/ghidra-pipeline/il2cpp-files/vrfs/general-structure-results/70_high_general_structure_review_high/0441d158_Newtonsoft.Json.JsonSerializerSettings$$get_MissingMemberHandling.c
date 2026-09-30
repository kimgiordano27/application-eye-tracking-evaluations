/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_MissingMemberHandling
ENTRY_POINT: 0441d158
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


void Newtonsoft_Json_JsonSerializerSettings__get_MissingMemberHandling(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long *plVar10;
  int iVar11;
  undefined8 uVar12;
  
  if ((*(byte *)(*(long *)(param_1 + 0x50) + 0x132) & 1) == 0) {
    FUN_015c2790(*(long *)(param_1 + 0x50));
  }
  lVar3 = thunk_FUN_015d0480();
  if (lVar3 == 0) {
    plVar10 = (long *)thunk_FUN_0164ba04();
    puVar1 = PTR_DAT_06dc26f0;
    if (plVar10 != (long *)0x0) {
      plVar10 = (long *)(**(code **)(*plVar10 + 0x418))(plVar10,*(undefined8 *)(*plVar10 + 0x420));
      uVar12 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x58);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_016466fc(*(long *)puVar1);
      }
      plVar5 = (long *)FUN_031c8668(uVar12,0);
      if (plVar10 != (long *)0x0) {
        uVar8 = (**(code **)(*plVar10 + 0x298))(plVar10,plVar5,*(undefined8 *)(*plVar10 + 0x2a0));
        if ((uVar8 & 1) == 0) {
          if (plVar5 == (long *)0x0) goto LAB_0441d4b0;
          uVar8 = (**(code **)(*plVar5 + 0x298))(plVar5,plVar10,*(undefined8 *)(*plVar5 + 0x2a0));
          if ((uVar8 & 1) == 0) {
            FUN_031dbd4c(0);
          }
        }
        plVar10 = (long *)thunk_FUN_015d0480();
        if (plVar10 == (long *)0x0) {
          FUN_031dbd4c();
        }
        plVar5 = *(long **)(unaff_x21 + 0x10);
        if (plVar5 != (long *)0x0) {
          lVar3 = **(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
          if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
            lVar3 = FUN_015c2790(lVar3);
          }
          lVar6 = *plVar5;
          uVar8 = (ulong)*(ushort *)(lVar6 + 0x12a);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == lVar3) {
                puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_0441d350;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar4 = (undefined8 *)FUN_015c2a80(plVar5,lVar3,0);
LAB_0441d350:
          iVar2 = (*(code *)*puVar4)(plVar5,puVar4[1]);
          if (0 < iVar2) {
            iVar11 = 0;
            do {
              plVar5 = *(long **)(unaff_x21 + 0x10);
              if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_0160eeb4();
              }
              lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10);
              if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
                lVar3 = FUN_015c2790(lVar3);
              }
              lVar6 = *plVar5;
              uVar8 = (ulong)*(ushort *)(lVar6 + 0x12a);
              if (uVar8 != 0) {
                piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) == lVar3) {
                    puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
                    goto LAB_0441d3dc;
                  }
                  uVar8 = uVar8 - 1;
                  piVar9 = piVar9 + 4;
                } while (uVar8 != 0);
              }
              puVar4 = (undefined8 *)FUN_015c2a80(plVar5,lVar3,0);
LAB_0441d3dc:
              (*(code *)*puVar4)(plVar5,iVar11,puVar4[1]);
              if ((*(byte *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x60) + 0x132
                            ) & 1) == 0) {
                FUN_015c2790();
              }
              lVar3 = thunk_FUN_015d01b0();
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_0160eeb4();
              }
              if ((lVar3 != 0) &&
                 (lVar6 = thunk_FUN_015d0480(lVar3,*(undefined8 *)(*plVar10 + 0x40)), lVar6 == 0)) {
                uVar12 = thunk_FUN_015f0d94();
                    /* WARNING: Subroutine does not return */
                FUN_0160ee7c(uVar12,0);
              }
              if (*(uint *)(plVar10 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
                FUN_0160eebc();
              }
              plVar10[(long)(int)unaff_w19 + 4] = lVar3;
              thunk_FUN_01656ef8(plVar10 + (long)(int)unaff_w19 + 4,lVar3);
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
            puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 5) * 0x10 + 0x138);
            goto LAB_0441d31c;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_015c2a80(plVar10,lVar6,5);
LAB_0441d31c:
                    /* WARNING: Could not recover jumptable at 0x0441d340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar4)(plVar10,lVar3,unaff_w19,puVar4[1]);
      return;
    }
  }
LAB_0441d4b0:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


