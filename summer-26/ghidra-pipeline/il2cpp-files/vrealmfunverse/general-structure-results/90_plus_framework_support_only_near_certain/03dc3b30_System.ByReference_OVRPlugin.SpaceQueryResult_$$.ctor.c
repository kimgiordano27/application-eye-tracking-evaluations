/*
FUNCTION_NAME: System.ByReference<OVRPlugin.SpaceQueryResult>$$.ctor
ENTRY_POINT: 03dc3b30
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;ray_or_cast_sink_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_ByReference<OVRPlugin_SpaceQueryResult>___ctor(void)

{
  char in_NG;
  char in_OV;
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
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
  
  if (in_NG != in_OV) {
    Oculus_Interaction_SecondaryInteractorConnection__Start(5,0);
  }
  lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x38);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    FUN_02b76218(lVar4);
  }
  lVar4 = thunk_FUN_02b79548();
  if (lVar4 == 0) {
    plVar9 = (long *)thunk_FUN_02b4c898();
    if (plVar9 != (long *)0x0) {
      plVar9 = (long *)(**(code **)(*plVar9 + 0x418))(plVar9,*(undefined8 *)(*plVar9 + 0x420));
      uVar11 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x70);
      if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02b9ad44(*(long *)(PTR_DAT_06312310 + 0xe0));
      }
      plVar3 = (long *)FUN_04d8a7b0(uVar11,0);
      if (plVar9 != (long *)0x0) {
        uVar7 = (**(code **)(*plVar9 + 0x298))(plVar9,plVar3,*(undefined8 *)(*plVar9 + 0x2a0));
        if ((uVar7 & 1) == 0) {
          if (plVar3 == (long *)0x0) goto LAB_03dc3e9c;
          uVar7 = (**(code **)(*plVar3 + 0x298))(plVar3,plVar9,*(undefined8 *)(*plVar3 + 0x2a0));
          if ((uVar7 & 1) == 0) {
            FUN_04d9c940(0);
          }
        }
        plVar9 = (long *)thunk_FUN_02b79548();
        if (plVar9 == (long *)0x0) {
          FUN_04d9c940();
        }
        plVar3 = *(long **)(unaff_x21 + 0x10);
        if (plVar3 != (long *)0x0) {
          lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10);
          if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_02b76218(lVar4);
          }
          lVar5 = *plVar3;
          uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == lVar4) {
                puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
                goto FUN_03dc3d50;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar2 = (undefined8 *)FUN_02b7654c(plVar3,lVar4,0);
FUN_03dc3d50:
          iVar1 = (*(code *)*puVar2)(plVar3,puVar2[1]);
          if (0 < iVar1) {
            iVar10 = 0;
            do {
              plVar3 = *(long **)(unaff_x21 + 0x10);
              if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              lVar4 = **(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
              if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
                lVar4 = FUN_02b76218(lVar4);
              }
              lVar5 = *plVar3;
              uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
              if (uVar7 != 0) {
                piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar8 + -2) == lVar4) {
                    puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
                    goto FUN_03dc3de4;
                  }
                  uVar7 = uVar7 - 1;
                  piVar8 = piVar8 + 4;
                } while (uVar7 != 0);
              }
              puVar2 = (undefined8 *)FUN_02b7654c(plVar3,lVar4,0);
FUN_03dc3de4:
              (*(code *)*puVar2)(plVar3,iVar10,puVar2[1]);
              lVar4 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                (*(undefined8 *)
                                  (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28));
              if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              if ((lVar4 != 0) &&
                 (lVar5 = thunk_FUN_02b79548(lVar4,*(undefined8 *)(*plVar9 + 0x40)), lVar5 == 0)) {
                uVar11 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
                FUN_02b3c988(uVar11,0);
              }
              if (*(uint *)(plVar9 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cacc();
              }
              plVar9[(long)(int)unaff_w19 + 4] = lVar4;
              thunk_FUN_02bb0e9c(plVar9 + (long)(int)unaff_w19 + 4,lVar4);
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
        lVar5 = FUN_02b76218(lVar5);
      }
      lVar6 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar5) {
            puVar2 = (undefined8 *)(lVar6 + (long)(*piVar8 + 5) * 0x10 + 0x138);
            goto LAB_03dc3d18;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar2 = (undefined8 *)FUN_02b7654c(plVar9,lVar5,5);
LAB_03dc3d18:
                    /* WARNING: Could not recover jumptable at 0x03dc3d40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar2)(plVar9,lVar4,unaff_w19,puVar2[1]);
      return;
    }
  }
LAB_03dc3e9c:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


