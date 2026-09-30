/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.ManagerUtils.RegisterMember<__Il2CppFullySharedGenericType>$$Invoke
ENTRY_POINT: 063bacec
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_ManagerUtils_RegisterMember<__Il2CppFullySharedGenericType>__Invoke
               (void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long *plVar9;
  int iVar10;
  undefined8 uVar11;
  
  lVar2 = thunk_FUN_040b4e00();
  if (lVar2 == 0) {
    plVar9 = (long *)thunk_FUN_0408781c();
    if (plVar9 != (long *)0x0) {
      plVar9 = (long *)(**(code **)(*plVar9 + 0x438))(plVar9,*(undefined8 *)(*plVar9 + 0x440));
      uVar11 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x70);
      if (*(int *)(*(long *)(PTR_DAT_09285980 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_040d65a8(*(long *)(PTR_DAT_09285980 + 0xe0));
      }
      plVar4 = (long *)FUN_0768890c(uVar11,0);
      if (plVar9 != (long *)0x0) {
        uVar7 = (**(code **)(*plVar9 + 0x2b8))(plVar9,plVar4,*(undefined8 *)(*plVar9 + 0x2c0));
        if ((uVar7 & 1) == 0) {
          if (plVar4 == (long *)0x0) goto LAB_063bb020;
          uVar7 = (**(code **)(*plVar4 + 0x2b8))(plVar4,plVar9,*(undefined8 *)(*plVar4 + 0x2c0));
          if ((uVar7 & 1) == 0) {
            FUN_0769b160(0);
          }
        }
        plVar9 = (long *)thunk_FUN_040b4e00();
        if (plVar9 == (long *)0x0) {
          FUN_0769b160();
        }
        plVar4 = *(long **)(unaff_x21 + 0x10);
        if (plVar4 != (long *)0x0) {
          lVar2 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10);
          if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
            lVar2 = FUN_040b1acc(lVar2);
          }
          lVar5 = *plVar4;
          uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == lVar2) {
                puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_063baed4;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar3 = (undefined8 *)FUN_040b1e00(plVar4,lVar2,0);
LAB_063baed4:
          iVar1 = (*(code *)*puVar3)(plVar4,puVar3[1]);
          if (0 < iVar1) {
            iVar10 = 0;
            do {
              plVar4 = *(long **)(unaff_x21 + 0x10);
              if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              lVar2 = **(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
              if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
                lVar2 = FUN_040b1acc(lVar2);
              }
              lVar5 = *plVar4;
              uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
              if (uVar7 != 0) {
                piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar8 + -2) == lVar2) {
                    puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
                    goto LAB_063baf68;
                  }
                  uVar7 = uVar7 - 1;
                  piVar8 = piVar8 + 4;
                } while (uVar7 != 0);
              }
              puVar3 = (undefined8 *)FUN_040b1e00(plVar4,lVar2,0);
LAB_063baf68:
              (*(code *)*puVar3)(plVar4,iVar10,puVar3[1]);
              lVar2 = thunk_FUN_040b4b34(*(undefined8 *)
                                          (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28));
              if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              if ((lVar2 != 0) &&
                 (lVar5 = thunk_FUN_040b4e00(lVar2,*(undefined8 *)(*plVar9 + 0x40)), lVar5 == 0)) {
                uVar11 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
                FUN_040776f4(uVar11,0);
              }
              if (*(uint *)(plVar9 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
                FUN_04077838();
              }
              plVar9[(long)(int)unaff_w19 + 4] = lVar2;
              thunk_FUN_040ec700(plVar9 + (long)(int)unaff_w19 + 4,lVar2);
              iVar10 = iVar10 + 1;
              unaff_w19 = unaff_w19 + 1;
            } while (iVar10 != iVar1);
          }
          return;
        }
      }
    }
  }
  else {
    plVar9 = *(long **)(unaff_x21 + 0x10);
    if (plVar9 != (long *)0x0) {
      lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_040b1acc(lVar5);
      }
      lVar6 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar5) {
            puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 5) * 0x10 + 0x138);
            goto LAB_063bae9c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_040b1e00(plVar9,lVar5,5);
LAB_063bae9c:
                    /* WARNING: Could not recover jumptable at 0x063baec4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar3)(plVar9,lVar2,unaff_w19,puVar3[1]);
      return;
    }
  }
LAB_063bb020:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


