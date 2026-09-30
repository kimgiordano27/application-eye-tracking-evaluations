/*
FUNCTION_NAME: System.ReadOnlySpan<OVRPlugin.SpaceDiscoveryResult>$$op_Implicit
ENTRY_POINT: 073ad6ec
PROGRAM: Hyper-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_ReadOnlySpan<OVRPlugin_SpaceDiscoveryResult>__op_Implicit(void)

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
  long unaff_x22;
  long unaff_x23;
  undefined8 uVar11;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined4 uStack0000000000000048;
  
  *(undefined1 *)(unaff_x23 + 0xf3f) = 1;
  uStack0000000000000048 = 0;
  if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_08d8ca5c(3,0);
  }
  iVar1 = thunk_FUN_049556fc();
  if (iVar1 != 1) {
    FUN_08d9cf18(7,0);
  }
  iVar1 = thunk_FUN_049556bc();
  if (iVar1 != 0) {
    FUN_08d9cf18(6,0);
  }
  if ((int)unaff_w19 < 0) {
    FUN_08d9d780(0);
  }
  iVar1 = FUN_08d948e8();
  iVar2 = FUN_073acffc();
  if ((int)(iVar1 - unaff_w19) < iVar2) {
    FUN_08d9cf18(5,0);
  }
  lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x38);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    FUN_04980b34(lVar5);
  }
  lVar5 = thunk_FUN_04983e64();
  if (lVar5 == 0) {
    plVar10 = (long *)thunk_FUN_04956588();
    if (plVar10 != (long *)0x0) {
      plVar10 = (long *)(**(code **)(*plVar10 + 0x428))(plVar10,*(undefined8 *)(*plVar10 + 0x430));
      uVar11 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x70);
      if (*(int *)(*(long *)(PTR_DAT_0ac09758 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_049a583c(*(long *)(PTR_DAT_0ac09758 + 0xe0));
      }
      plVar4 = (long *)FUN_08d895f0(uVar11,0);
      if (plVar10 != (long *)0x0) {
        uVar8 = (**(code **)(*plVar10 + 0x2a8))(plVar10,plVar4,*(undefined8 *)(*plVar10 + 0x2b0));
        if ((uVar8 & 1) == 0) {
          if (plVar4 == (long *)0x0) goto LAB_073adae8;
          uVar8 = (**(code **)(*plVar4 + 0x2a8))(plVar4,plVar10,*(undefined8 *)(*plVar4 + 0x2b0));
          if ((uVar8 & 1) == 0) {
            FUN_08d9d7b8(0);
          }
        }
        plVar10 = (long *)thunk_FUN_04983e64();
        if (plVar10 == (long *)0x0) {
          FUN_08d9d7b8();
        }
        plVar4 = *(long **)(unaff_x21 + 0x10);
        if (plVar4 != (long *)0x0) {
          lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10);
          if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_04980b34(lVar5);
          }
          lVar6 = *plVar4;
          uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == lVar5) {
                puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_073ad994;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar3 = (undefined8 *)FUN_04980e68(plVar4,lVar5,0);
LAB_073ad994:
          iVar1 = (*(code *)*puVar3)(plVar4,puVar3[1]);
          if (0 < iVar1) {
            iVar2 = 0;
            do {
              plVar4 = *(long **)(unaff_x21 + 0x10);
              if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_0494818c();
              }
              lVar5 = **(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
              if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
                lVar5 = FUN_04980b34(lVar5);
              }
              lVar6 = *plVar4;
              uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
              if (uVar8 != 0) {
                piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) == lVar5) {
                    puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
                    goto LAB_073ada28;
                  }
                  uVar8 = uVar8 - 1;
                  piVar9 = piVar9 + 4;
                } while (uVar8 != 0);
              }
              puVar3 = (undefined8 *)FUN_04980e68(plVar4,lVar5,0);
LAB_073ada28:
              (*(code *)*puVar3)(&stack0x00000020,plVar4,iVar2,puVar3[1]);
              lVar5 = thunk_FUN_04983b98(*(undefined8 *)
                                          (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28));
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_0494818c();
              }
              if ((lVar5 != 0) &&
                 (lVar6 = thunk_FUN_04983e64(lVar5,*(undefined8 *)(*plVar10 + 0x40)), lVar6 == 0)) {
                uVar11 = thunk_FUN_04991a58();
                    /* WARNING: Subroutine does not return */
                FUN_04948050(uVar11,0);
              }
              if (*(uint *)(plVar10 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
                FUN_04948194();
              }
              plVar10[(long)(int)unaff_w19 + 4] = lVar5;
              thunk_FUN_049ee3d8(plVar10 + (long)(int)unaff_w19 + 4,lVar5);
              iVar2 = iVar2 + 1;
              unaff_w19 = unaff_w19 + 1;
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
        lVar6 = FUN_04980b34(lVar6);
      }
      lVar7 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar6) {
            puVar3 = (undefined8 *)(lVar7 + (long)(*piVar9 + 5) * 0x10 + 0x138);
            goto LAB_073ad95c;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)FUN_04980e68(plVar10,lVar6,5);
LAB_073ad95c:
                    /* WARNING: Could not recover jumptable at 0x073ad984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar3)(plVar10,lVar5,unaff_w19,puVar3[1]);
      return;
    }
  }
LAB_073adae8:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


