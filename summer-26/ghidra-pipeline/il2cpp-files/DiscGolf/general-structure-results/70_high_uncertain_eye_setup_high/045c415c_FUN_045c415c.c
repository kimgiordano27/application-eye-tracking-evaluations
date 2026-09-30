/*
FUNCTION_NAME: FUN_045c415c
ENTRY_POINT: 045c415c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_045c415c(long param_1,long param_2,uint param_3,long param_4)

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
  long *plVar10;
  undefined8 uVar11;
  undefined4 local_44;
  
                    /* try { // try from 045c4168 to 046c4193 has its CatchHandler @ 045c42ac */
  if ((DAT_06db730c & 1) == 0) {
    FUN_02d965b8(PTR_DAT_069fc180);
    DAT_06db730c = 1;
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_054fa008(3,0);
  }
  iVar1 = thunk_FUN_02da56d8(param_2,0);
  if (iVar1 != 1) {
    FUN_05508fa4(7,0);
  }
  iVar1 = thunk_FUN_02da5698(param_2,0,0);
  if (iVar1 != 0) {
    FUN_05508fa4(6,0);
  }
  if ((int)param_3 < 0) {
    FUN_0550980c(0);
  }
  iVar1 = FUN_0550100c(param_2,0);
  iVar2 = FUN_045c3b10(param_1,*(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x68));
  if ((int)(iVar1 - param_3) < iVar2) {
    FUN_05508fa4(5,0);
  }
  lVar5 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x38);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02dcfd18(lVar5);
  }
  lVar5 = thunk_FUN_02dd3048(param_2,lVar5);
  if (lVar5 == 0) {
    plVar10 = (long *)thunk_FUN_02da6564(param_2,0);
    if (plVar10 != (long *)0x0) {
      plVar10 = (long *)(**(code **)(*plVar10 + 0x4a8))(plVar10,*(undefined8 *)(*plVar10 + 0x4b0));
      uVar11 = *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x70);
      if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02df485c(*(long *)(PTR_DAT_069fb9c0 + 0xe0));
      }
      plVar4 = (long *)FUN_054f73b4(uVar11,0);
      if (plVar10 != (long *)0x0) {
        uVar8 = (**(code **)(*plVar10 + 0x328))(plVar10,plVar4,*(undefined8 *)(*plVar10 + 0x330));
        if ((uVar8 & 1) == 0) {
          if (plVar4 == (long *)0x0) goto LAB_045c4594;
          uVar8 = (**(code **)(*plVar4 + 0x328))(plVar4,plVar10,*(undefined8 *)(*plVar4 + 0x330));
          if ((uVar8 & 1) == 0) {
            FUN_05509844(0);
          }
        }
        plVar10 = (long *)thunk_FUN_02dd3048(param_2,*(undefined8 *)PTR_DAT_069fc180);
        if (plVar10 == (long *)0x0) {
          FUN_05509844();
        }
        plVar4 = *(long **)(param_1 + 0x10);
        if (plVar4 != (long *)0x0) {
          lVar5 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x10);
          if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_02dcfd18(lVar5);
          }
          lVar6 = *plVar4;
          uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == lVar5) {
                puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
                goto System_ReadOnlySpan<OVRPlugin_Vector4s>__get_Empty;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar3 = (undefined8 *)FUN_02dd004c(plVar4,lVar5,0);
System_ReadOnlySpan<OVRPlugin_Vector4s>__get_Empty:
          iVar1 = (*(code *)*puVar3)(plVar4,puVar3[1]);
          if (0 < iVar1) {
            iVar2 = 0;
            do {
              plVar4 = *(long **)(param_1 + 0x10);
              if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              lVar5 = **(long **)(*(long *)(param_4 + 0x20) + 0xc0);
              if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
                lVar5 = FUN_02dcfd18(lVar5);
              }
              lVar6 = *plVar4;
              uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
              if (uVar8 != 0) {
                piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) == lVar5) {
                    puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
                    goto LAB_045c44d8;
                  }
                  uVar8 = uVar8 - 1;
                  piVar9 = piVar9 + 4;
                } while (uVar8 != 0);
              }
              puVar3 = (undefined8 *)FUN_02dd004c(plVar4,lVar5,0);
LAB_045c44d8:
              local_44 = (*(code *)*puVar3)(plVar4,iVar2,puVar3[1]);
              lVar5 = thunk_FUN_02dd2d7c(*(undefined8 *)
                                          (*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x28),
                                         &local_44);
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              if ((lVar5 != 0) &&
                 (lVar6 = thunk_FUN_02dd3048(lVar5,*(undefined8 *)(*plVar10 + 0x40)), lVar6 == 0)) {
                uVar11 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
                FUN_02d96724(uVar11,0);
              }
              if (*(uint *)(plVar10 + 3) <= param_3) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96868();
              }
              plVar10[(long)(int)param_3 + 4] = lVar5;
              LeanTween__value(plVar10 + (long)(int)param_3 + 4,lVar5);
              iVar2 = iVar2 + 1;
              param_3 = param_3 + 1;
            } while (iVar2 != iVar1);
          }
          return;
        }
      }
    }
  }
  else {
    plVar10 = *(long **)(param_1 + 0x10);
    if (plVar10 != (long *)0x0) {
      lVar6 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x10);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_02dcfd18(lVar6);
      }
      lVar7 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar6) {
            puVar3 = (undefined8 *)(lVar7 + (long)(*piVar9 + 5) * 0x10 + 0x138);
            goto LAB_045c440c;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)FUN_02dd004c(plVar10,lVar6,5);
LAB_045c440c:
                    /* WARNING: Could not recover jumptable at 0x045c4434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar3)(plVar10,lVar5,param_3,puVar3[1]);
      return;
    }
  }
LAB_045c4594:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


