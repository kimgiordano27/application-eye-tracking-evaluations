/*
FUNCTION_NAME: OVRPlugin$$get_eyeTrackingSupported
ENTRY_POINT: 05758bdc
PROGRAM: Untangled-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x05758d94) */

void OVRPlugin__get_eyeTrackingSupported(void)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long lVar10;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  
  plVar6 = (long *)RootMotion_FinalIK_IKSolverFABRIK__MapToSolverPositionsLimited();
  lVar10 = *plVar6;
  __cxa_end_catch();
  iVar3 = 0;
code_r0x05758adc:
  plVar6 = (long *)thunk_FUN_02ef170c(unaff_x23,*(undefined8 *)PTR_DAT_06d01f60);
  if (plVar6 != (long *)0x0) {
    lVar7 = *plVar6;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_06d01f60) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_05758b4c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_02eea86c(plVar6,*(long *)PTR_DAT_06d01f60,0);
LAB_05758b4c:
    (*(code *)*puVar5)(plVar6,puVar5[1]);
  }
  if (lVar10 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ecbb70(lVar10);
  }
  if ((iVar3 == 10) || (iVar3 == 0)) {
    (**(code **)(*unaff_x19 + 0x588))();
    lVar10 = *unaff_x20;
    uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x28) {
          puVar5 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_05758858;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_02eea86c();
LAB_05758858:
    uVar8 = (*(code *)*puVar5)();
    if ((uVar8 & 1) != 0) {
      lVar10 = *unaff_x20;
      uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x28) {
            puVar5 = (undefined8 *)(lVar10 + (long)(*piVar9 + 1) * 0x10 + 0x138);
            goto LAB_057588b8;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_02eea86c();
LAB_057588b8:
      plVar6 = (long *)(*(code *)*puVar5)();
      if (plVar6 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)PTR_DAT_06d59710 + 0x130);
        if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_06d59710
           )) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08440(plVar6);
        }
      }
      (**(code **)(*unaff_x19 + 0x578))();
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      if (plVar6[2] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      plVar4 = *(long **)(plVar6[2] + 0x40);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      unaff_x23 = (long *)(**(code **)(*plVar4 + 0x1e8))(plVar4,*(undefined8 *)(*plVar4 + 0x1f0));
      do {
        if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        do {
          do {
            lVar10 = *unaff_x23;
            uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == *unaff_x28) {
                  puVar5 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
                  goto LAB_05758988;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            puVar5 = (undefined8 *)FUN_02eea86c(unaff_x23,*unaff_x28,0);
LAB_05758988:
            uVar8 = (*(code *)*puVar5)(unaff_x23,puVar5[1]);
            if ((uVar8 & 1) == 0) {
              lVar10 = 0;
              iVar3 = 10;
              goto code_r0x05758adc;
            }
            lVar10 = *unaff_x23;
            uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == *unaff_x28) {
                  puVar5 = (undefined8 *)(lVar10 + (long)(*piVar9 + 1) * 0x10 + 0x138);
                  goto LAB_057589e8;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            puVar5 = (undefined8 *)FUN_02eea86c(unaff_x23,*unaff_x28,1);
LAB_057589e8:
            plVar4 = (long *)(*(code *)*puVar5)(unaff_x23,puVar5[1]);
            if (plVar4 != (long *)0x0) {
              bVar1 = *(byte *)(*unaff_x29 + 0x130);
              if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x29)) {
                    /* WARNING: Subroutine does not return */
                FUN_02f08440(plVar4);
              }
            }
            lVar10 = FUN_05b9a820(plVar6,plVar4,0);
            iVar3 = (**(code **)(*unaff_x21 + 0x2f8))();
            if (iVar3 != 1) goto LAB_05758a80;
          } while (lVar10 == 0);
          lVar7 = *unaff_x27;
          if (*(int *)(lVar7 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
            lVar7 = *unaff_x27;
          }
        } while (lVar10 == **(long **)(lVar7 + 0xb8));
LAB_05758a80:
        if (unaff_x22 == 0) {
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
        }
        else {
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          FUN_056fd0d8();
        }
        (**(code **)(*unaff_x19 + 0x5d8))();
        FUN_0569d504();
      } while( true );
    }
    iVar3 = 0xb;
  }
  puVar2 = PTR_DAT_06d01f60;
  plVar6 = (long *)thunk_FUN_02ef170c();
  if (plVar6 != (long *)0x0) {
    lVar10 = *plVar6;
    uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_05758c70;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_02eea86c(plVar6,*(long *)puVar2,0);
LAB_05758c70:
    (*(code *)*puVar5)(plVar6,puVar5[1]);
  }
  if ((iVar3 != 0xb) && (iVar3 != 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x05758cb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x19 + 0x5a8))();
  return;
}


