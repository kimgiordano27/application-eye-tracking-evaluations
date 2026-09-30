/*
FUNCTION_NAME: System.ReadOnlySpan<OVRPlugin.Qpl.Annotation>$$.ctor
ENTRY_POINT: 03d4e3dc
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 71
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;ray_or_cast_sink_hits_1;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_ReadOnlySpan<OVRPlugin_Qpl_Annotation>___ctor(void)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  int iVar9;
  undefined8 uVar10;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  plVar2 = (long *)thunk_FUN_02b4c898();
  if (plVar2 != (long *)0x0) {
    plVar2 = (long *)(**(code **)(*plVar2 + 0x418))(plVar2,*(undefined8 *)(*plVar2 + 0x420));
    uVar10 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x70);
    if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)(PTR_DAT_06312310 + 0xe0));
    }
    plVar3 = (long *)FUN_04d8a7b0(uVar10,0);
    if (plVar2 != (long *)0x0) {
      uVar4 = (**(code **)(*plVar2 + 0x298))(plVar2,plVar3,*(undefined8 *)(*plVar2 + 0x2a0));
      if ((uVar4 & 1) == 0) {
        if (plVar3 == (long *)0x0) goto LAB_03d4e6ac;
        uVar4 = (**(code **)(*plVar3 + 0x298))(plVar3,plVar2,*(undefined8 *)(*plVar3 + 0x2a0));
        if ((uVar4 & 1) == 0) {
          FUN_04d9c940(0);
        }
      }
      plVar2 = (long *)thunk_FUN_02b79548();
      if (plVar2 == (long *)0x0) {
        FUN_04d9c940();
      }
      plVar3 = *(long **)(unaff_x21 + 0x10);
      if (plVar3 != (long *)0x0) {
        lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_02b76218(lVar6);
        }
        lVar7 = *plVar3;
        uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar4 != 0) {
          piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == lVar6) {
              puVar5 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_03d4e550;
            }
            uVar4 = uVar4 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar4 != 0);
        }
        puVar5 = (undefined8 *)FUN_02b7654c(plVar3,lVar6,0);
LAB_03d4e550:
        iVar1 = (*(code *)*puVar5)(plVar3,puVar5[1]);
        if (0 < iVar1) {
          iVar9 = 0;
          do {
            plVar3 = *(long **)(unaff_x21 + 0x10);
            if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            lVar6 = **(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
            if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
              lVar6 = FUN_02b76218(lVar6);
            }
            lVar7 = *plVar3;
            uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar4 != 0) {
              piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == lVar6) {
                  puVar5 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
                  goto LAB_03d4e5e4;
                }
                uVar4 = uVar4 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar4 != 0);
            }
            puVar5 = (undefined8 *)FUN_02b7654c(plVar3,lVar6,0);
LAB_03d4e5e4:
            (*(code *)*puVar5)(&stack0x00000018,plVar3,iVar9,puVar5[1]);
            lVar6 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                              (*(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28)
                              );
            if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            if ((lVar6 != 0) &&
               (lVar7 = thunk_FUN_02b79548(lVar6,*(undefined8 *)(*plVar2 + 0x40)), lVar7 == 0)) {
              uVar10 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
              FUN_02b3c988(uVar10,0);
            }
            if (*(uint *)(plVar2 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cacc();
            }
            plVar2[(long)(int)unaff_w19 + 4] = lVar6;
            thunk_FUN_02bb0e9c(plVar2 + (long)(int)unaff_w19 + 4,lVar6);
            iVar9 = iVar9 + 1;
            unaff_w19 = unaff_w19 + 1;
          } while (iVar9 != iVar1);
        }
        return;
      }
    }
  }
LAB_03d4e6ac:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


