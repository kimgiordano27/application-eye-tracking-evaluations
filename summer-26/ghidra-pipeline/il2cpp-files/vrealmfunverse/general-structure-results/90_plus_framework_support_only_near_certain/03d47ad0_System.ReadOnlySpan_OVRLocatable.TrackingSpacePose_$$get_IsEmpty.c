/*
FUNCTION_NAME: System.ReadOnlySpan<OVRLocatable.TrackingSpacePose>$$get_IsEmpty
ENTRY_POINT: 03d47ad0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 154
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_retrieval_or_extraction
*/


void System_ReadOnlySpan<OVRLocatable_TrackingSpacePose>__get_IsEmpty(long param_1)

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
  
  if ((*(ushort *)(*(long *)(param_1 + 0x38) + 0x135) & 1) == 0) {
    FUN_02b76218(*(long *)(param_1 + 0x38));
  }
  lVar2 = thunk_FUN_02b79548();
  if (lVar2 == 0) {
    plVar9 = (long *)thunk_FUN_02b4c898();
    if (plVar9 != (long *)0x0) {
      plVar9 = (long *)(**(code **)(*plVar9 + 0x418))(plVar9,*(undefined8 *)(*plVar9 + 0x420));
      uVar11 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x70);
      if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02b9ad44(*(long *)(PTR_DAT_06312310 + 0xe0));
      }
      plVar4 = (long *)FUN_04d8a7b0(uVar11,0);
      if (plVar9 != (long *)0x0) {
        uVar7 = (**(code **)(*plVar9 + 0x298))(plVar9,plVar4,*(undefined8 *)(*plVar9 + 0x2a0));
        if ((uVar7 & 1) == 0) {
          if (plVar4 == (long *)0x0) goto LAB_03d47e24;
          uVar7 = (**(code **)(*plVar4 + 0x298))(plVar4,plVar9,*(undefined8 *)(*plVar4 + 0x2a0));
          if ((uVar7 & 1) == 0) {
            FUN_04d9c940(0);
          }
        }
        plVar9 = (long *)thunk_FUN_02b79548();
        if (plVar9 == (long *)0x0) {
          FUN_04d9c940();
        }
        plVar4 = *(long **)(unaff_x21 + 0x10);
        if (plVar4 != (long *)0x0) {
          lVar2 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10);
          if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
            lVar2 = FUN_02b76218(lVar2);
          }
          lVar5 = *plVar4;
          uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == lVar2) {
                puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
                goto System_ReadOnlySpan<OVRPlugin_SpaceDiscoveryResult>__GetPinnableReference;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar3 = (undefined8 *)FUN_02b7654c(plVar4,lVar2,0);
System_ReadOnlySpan<OVRPlugin_SpaceDiscoveryResult>__GetPinnableReference:
          iVar1 = (*(code *)*puVar3)(plVar4,puVar3[1]);
          if (0 < iVar1) {
            iVar10 = 0;
            do {
              plVar4 = *(long **)(unaff_x21 + 0x10);
              if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              lVar2 = **(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
              if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
                lVar2 = FUN_02b76218(lVar2);
              }
              lVar5 = *plVar4;
              uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
              if (uVar7 != 0) {
                piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar8 + -2) == lVar2) {
                    puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
                    goto LAB_03d47d6c;
                  }
                  uVar7 = uVar7 - 1;
                  piVar8 = piVar8 + 4;
                } while (uVar7 != 0);
              }
              puVar3 = (undefined8 *)FUN_02b7654c(plVar4,lVar2,0);
LAB_03d47d6c:
              (*(code *)*puVar3)(plVar4,iVar10,puVar3[1]);
              lVar2 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                (*(undefined8 *)
                                  (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28));
              if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              if ((lVar2 != 0) &&
                 (lVar5 = thunk_FUN_02b79548(lVar2,*(undefined8 *)(*plVar9 + 0x40)), lVar5 == 0)) {
                uVar11 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
                FUN_02b3c988(uVar11,0);
              }
              if (*(uint *)(plVar9 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cacc();
              }
              plVar9[(long)(int)unaff_w19 + 4] = lVar2;
              thunk_FUN_02bb0e9c(plVar9 + (long)(int)unaff_w19 + 4,lVar2);
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
            puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 5) * 0x10 + 0x138);
            goto LAB_03d47ca0;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_02b7654c(plVar9,lVar5,5);
LAB_03d47ca0:
                    /* WARNING: Could not recover jumptable at 0x03d47cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar3)(plVar9,lVar2,unaff_w19,puVar3[1]);
      return;
    }
  }
LAB_03d47e24:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


