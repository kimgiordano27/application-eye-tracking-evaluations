/*
FUNCTION_NAME: Meta.WitAi.Requests.VRequest.RequestCompleteDelegate<object>$$EndInvoke
ENTRY_POINT: 05e81450
PROGRAM: m3ar-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6
*/


void Meta_WitAi_Requests_VRequest_RequestCompleteDelegate<object>__EndInvoke(void)

{
  int iVar1;
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
  undefined8 uVar11;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  iVar1 = thunk_FUN_040405ac();
  if (iVar1 != 0) {
    FUN_0750636c(6,0);
  }
  if ((int)unaff_w19 < 0) {
    FUN_07506bd4(0);
  }
  iVar1 = FUN_074fdcc4();
  iVar2 = FUN_05e80d08();
  if ((int)(iVar1 - unaff_w19) < iVar2) {
    FUN_0750636c(5,0);
  }
  lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x38);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    FUN_0406aaec(lVar5);
  }
  lVar5 = thunk_FUN_0406ddbc();
  if (lVar5 == 0) {
    plVar10 = (long *)thunk_FUN_0404145c();
    if (plVar10 != (long *)0x0) {
      plVar10 = (long *)(**(code **)(*plVar10 + 0x448))(plVar10,*(undefined8 *)(*plVar10 + 0x450));
      uVar11 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x70);
      if (*(int *)(*(long *)(PTR_DAT_08f65618 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_0408f364(*(long *)(PTR_DAT_08f65618 + 0xe0));
      }
      plVar4 = (long *)FUN_074f3c94(uVar11,0);
      if (plVar10 != (long *)0x0) {
        uVar8 = (**(code **)(*plVar10 + 0x2b8))(plVar10,plVar4,*(undefined8 *)(*plVar10 + 0x2c0));
        if ((uVar8 & 1) == 0) {
          if (plVar4 == (long *)0x0) goto LAB_05e8180c;
          uVar8 = (**(code **)(*plVar4 + 0x2b8))(plVar4,plVar10,*(undefined8 *)(*plVar4 + 0x2c0));
          if ((uVar8 & 1) == 0) {
            FUN_07506c0c(0);
          }
        }
        plVar10 = (long *)thunk_FUN_0406ddbc();
        if (plVar10 == (long *)0x0) {
          FUN_07506c0c();
        }
        plVar4 = *(long **)(unaff_x21 + 0x10);
        if (plVar4 != (long *)0x0) {
          lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10);
          if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_0406aaec(lVar5);
          }
          lVar6 = *plVar4;
          uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == lVar5) {
                puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_05e816c4;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar3 = (undefined8 *)FUN_0406ae20(plVar4,lVar5,0);
LAB_05e816c4:
          iVar1 = (*(code *)*puVar3)(plVar4,puVar3[1]);
          if (0 < iVar1) {
            iVar2 = 0;
            do {
              plVar4 = *(long **)(unaff_x21 + 0x10);
              if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_0403188c();
              }
              lVar5 = **(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
              if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
                lVar5 = FUN_0406aaec(lVar5);
              }
              lVar6 = *plVar4;
              uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
              if (uVar8 != 0) {
                piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) == lVar5) {
                    puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
                    goto LAB_05e81754;
                  }
                  uVar8 = uVar8 - 1;
                  piVar9 = piVar9 + 4;
                } while (uVar8 != 0);
              }
              puVar3 = (undefined8 *)FUN_0406ae20(plVar4,lVar5,0);
LAB_05e81754:
              (*(code *)*puVar3)(&stack0x00000018,plVar4,iVar2,puVar3[1]);
              lVar5 = thunk_FUN_0406db0c(*(undefined8 *)
                                          (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28));
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_0403188c();
              }
              if ((lVar5 != 0) &&
                 (lVar6 = thunk_FUN_0406ddbc(lVar5,*(undefined8 *)(*plVar10 + 0x40)), lVar6 == 0)) {
                uVar11 = thunk_FUN_0407b7a8();
                    /* WARNING: Subroutine does not return */
                FUN_04031750(uVar11,0);
              }
              if (*(uint *)(plVar10 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
                FUN_04031894();
              }
              lVar6 = (long)(int)unaff_w19;
              iVar2 = iVar2 + 1;
              unaff_w19 = unaff_w19 + 1;
              plVar10[lVar6 + 4] = lVar5;
            } while (iVar2 != iVar1);
          }
          return;
        }
      }
    }
  }
  else {
    plVar10 = *(long **)(unaff_x21 + 0x10);
    if (plVar10 != (long *)0x0) {
      lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0406aaec(lVar6);
      }
      lVar7 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar6) {
            puVar3 = (undefined8 *)(lVar7 + (long)(*piVar9 + 5) * 0x10 + 0x138);
            goto LAB_05e81690;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)FUN_0406ae20(plVar10,lVar6,5);
LAB_05e81690:
                    /* WARNING: Could not recover jumptable at 0x05e816b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar3)(plVar10,lVar5,unaff_w19,puVar3[1]);
      return;
    }
  }
LAB_05e8180c:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


