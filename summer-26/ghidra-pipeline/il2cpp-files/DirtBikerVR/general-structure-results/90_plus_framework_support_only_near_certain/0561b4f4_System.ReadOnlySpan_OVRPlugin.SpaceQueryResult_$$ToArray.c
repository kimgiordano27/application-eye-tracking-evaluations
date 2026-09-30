/*
FUNCTION_NAME: System.ReadOnlySpan<OVRPlugin.SpaceQueryResult>$$ToArray
ENTRY_POINT: 0561b4f4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_ReadOnlySpan<OVRPlugin_SpaceQueryResult>__ToArray(long param_1)

{
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
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  lVar4 = *(long *)(*(long *)(param_1 + 0xc0) + 0x38);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    FUN_03ac4090(lVar4);
  }
  lVar4 = thunk_FUN_03ac73c0();
  if (lVar4 == 0) {
    plVar9 = (long *)thunk_FUN_03a9a6e8();
    if (plVar9 != (long *)0x0) {
      plVar9 = (long *)(**(code **)(*plVar9 + 0x438))(plVar9,*(undefined8 *)(*plVar9 + 0x440));
      uVar11 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x70);
      if (*(int *)(*(long *)(PTR_DAT_08486760 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03ae8be4(*(long *)(PTR_DAT_08486760 + 0xe0));
      }
      plVar3 = (long *)FUN_0675ff58(uVar11,0);
      if (plVar9 != (long *)0x0) {
        uVar7 = (**(code **)(*plVar9 + 0x2b8))(plVar9,plVar3,*(undefined8 *)(*plVar9 + 0x2c0));
        if ((uVar7 & 1) == 0) {
          if (plVar3 == (long *)0x0) goto LAB_0561b85c;
          uVar7 = (**(code **)(*plVar3 + 0x2b8))(plVar3,plVar9,*(undefined8 *)(*plVar3 + 0x2c0));
          if ((uVar7 & 1) == 0) {
            FUN_067721fc(0);
          }
        }
        plVar9 = (long *)thunk_FUN_03ac73c0();
        if (plVar9 == (long *)0x0) {
          FUN_067721fc();
        }
        plVar3 = *(long **)(unaff_x21 + 0x10);
        if (plVar3 != (long *)0x0) {
          lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10);
          if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_03ac4090(lVar4);
          }
          lVar5 = *plVar3;
          uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == lVar4) {
                puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_0561b700;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar2 = (undefined8 *)FUN_03ac43c4(plVar3,lVar4,0);
LAB_0561b700:
          iVar1 = (*(code *)*puVar2)(plVar3,puVar2[1]);
          if (0 < iVar1) {
            iVar10 = 0;
            do {
              plVar3 = *(long **)(unaff_x21 + 0x10);
              if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              lVar4 = **(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
              if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
                lVar4 = FUN_03ac4090(lVar4);
              }
              lVar5 = *plVar3;
              uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
              if (uVar7 != 0) {
                piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar8 + -2) == lVar4) {
                    puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
                    goto LAB_0561b794;
                  }
                  uVar7 = uVar7 - 1;
                  piVar8 = piVar8 + 4;
                } while (uVar7 != 0);
              }
              puVar2 = (undefined8 *)FUN_03ac43c4(plVar3,lVar4,0);
LAB_0561b794:
              (*(code *)*puVar2)(&stack0x00000018,plVar3,iVar10,puVar2[1]);
              lVar4 = thunk_FUN_03ac70f4(*(undefined8 *)
                                          (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28));
              if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              if ((lVar4 != 0) &&
                 (lVar5 = thunk_FUN_03ac73c0(lVar4,*(undefined8 *)(*plVar9 + 0x40)), lVar5 == 0)) {
                uVar11 = thunk_FUN_03ad4f64();
                    /* WARNING: Subroutine does not return */
                FUN_03a8a884(uVar11,0);
              }
              if (*(uint *)(plVar9 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c8();
              }
              plVar9[(long)(int)unaff_w19 + 4] = lVar4;
              thunk_FUN_03afed3c(plVar9 + (long)(int)unaff_w19 + 4,lVar4);
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
        lVar5 = FUN_03ac4090(lVar5);
      }
      lVar6 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar5) {
            puVar2 = (undefined8 *)(lVar6 + (long)(*piVar8 + 5) * 0x10 + 0x138);
            goto LAB_0561b6c8;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar2 = (undefined8 *)FUN_03ac43c4(plVar9,lVar5,5);
LAB_0561b6c8:
                    /* WARNING: Could not recover jumptable at 0x0561b6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar2)(plVar9,lVar4,unaff_w19,puVar2[1]);
      return;
    }
  }
LAB_0561b85c:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


