/*
FUNCTION_NAME: OVRPlugin.GUID$$.ctor
ENTRY_POINT: 069642e0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_18;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_GUID___ctor(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  int *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  int iVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 *puVar11;
  int iVar12;
  int iVar13;
  long *plVar14;
  int iVar15;
  
  plVar14 = (long *)PTR_DAT_08486738;
  if (*(char *)(param_1 + 0x18) == '\0') {
    return;
  }
  uVar9 = *(undefined8 *)(unaff_x21 + 0x28);
  if (*(int *)(*(long *)PTR_DAT_08486738 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar5 = FUN_07c9e200(uVar9,0,0);
  if ((uVar5 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_07c4fb40(*(undefined8 *)PTR_DAT_084b6e48,0);
    return;
  }
  if (unaff_x22 != (long *)0x0) {
    uVar9 = (**(code **)(*unaff_x22 + 0x598))();
    if (*(int *)(*plVar14 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*plVar14);
    }
    uVar5 = FUN_07c9e200(uVar9,0,0);
    if ((uVar5 & 1) != 0) {
      return;
    }
    lVar6 = (**(code **)(*unaff_x22 + 0x598))();
    if (lVar6 != 0) {
      lVar6 = FUN_07c98f88(lVar6,0);
      plVar10 = (long *)(unaff_x21 + 0x40);
      *plVar10 = lVar6;
      thunk_FUN_03afed3c(plVar10,lVar6);
      uVar5 = (**(code **)(*unaff_x22 + 0x2e8))();
      if ((uVar5 & 1) != 0) {
        lVar6 = *plVar10;
        if (*(int *)(*plVar14 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar5 = FUN_07c9c218(lVar6,0,0);
        puVar1 = PTR_DAT_0848b328;
        if ((uVar5 & 1) != 0) {
          if ((*(long *)(unaff_x21 + 0x28) == 0) ||
             (lVar6 = *(long *)(*(long *)(unaff_x21 + 0x28) + 0x30), lVar6 == 0)) goto LAB_06964724;
          iVar3 = *(int *)(lVar6 + 0x18);
          if (0 < iVar3) {
            iVar12 = 0;
            do {
              if ((((*(long *)(unaff_x21 + 0x28) == 0) ||
                   (lVar6 = *(long *)(*(long *)(unaff_x21 + 0x28) + 0x30), lVar6 == 0)) ||
                  (lVar6 = FUN_04de82e0(lVar6,iVar12,*(undefined8 *)PTR_DAT_084b6e30), lVar6 == 0))
                 || (*(long *)(lVar6 + 0x20) == 0)) goto LAB_06964724;
              iVar8 = *(int *)(*(long *)(lVar6 + 0x20) + 0x18);
              if (0 < iVar8) {
                iVar15 = 0;
                do {
                  if (*plVar10 == 0) goto LAB_06964724;
                  uVar9 = FUN_07c99788(*plVar10,0);
                  if (*(long *)(lVar6 + 0x20) == 0) goto LAB_06964724;
                  uVar7 = FUN_04de82e0(*(long *)(lVar6 + 0x20),iVar15,*(undefined8 *)puVar1);
                  uVar5 = thunk_FUN_065cbffc(uVar9,uVar7,0);
                  if ((uVar5 & 1) != 0) {
                    *unaff_x20 = *(undefined8 *)(lVar6 + 0x18);
                    thunk_FUN_03afed3c();
                    *unaff_x19 = iVar12;
                    return;
                  }
                  iVar15 = iVar15 + 1;
                } while (iVar8 != iVar15);
              }
              iVar12 = iVar12 + 1;
              plVar14 = (long *)PTR_DAT_08486738;
            } while (iVar12 != iVar3);
          }
          if (*plVar10 == 0) goto LAB_06964724;
          uVar9 = FUN_0447aad0(*plVar10,*(undefined8 *)PTR_DAT_084b6e20);
          puVar11 = (undefined8 *)(unaff_x21 + 0x38);
          *puVar11 = uVar9;
          thunk_FUN_03afed3c(puVar11,uVar9);
          uVar9 = *puVar11;
          if (*(int *)(*plVar14 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar5 = FUN_07ca21f0(uVar9,0);
          if ((uVar5 & 1) != 0) {
            (**(code **)(*unaff_x22 + 0x578))();
            iVar3 = FUN_06964728();
            puVar2 = PTR_DAT_084b6e30;
            puVar1 = PTR_DAT_08487a70;
            if (iVar3 != -1) {
              if ((*(long *)(unaff_x21 + 0x28) == 0) ||
                 (lVar6 = *(long *)(*(long *)(unaff_x21 + 0x28) + 0x30), lVar6 == 0))
              goto LAB_06964724;
              iVar12 = *(int *)(lVar6 + 0x18);
              if (0 < iVar12) {
                iVar8 = 0;
                do {
                  if (((*(long *)(unaff_x21 + 0x28) == 0) ||
                      (lVar6 = *(long *)(*(long *)(unaff_x21 + 0x28) + 0x30), lVar6 == 0)) ||
                     ((lVar6 = FUN_04de82e0(lVar6,iVar8,*(undefined8 *)puVar2), lVar6 == 0 ||
                      (*(long *)(lVar6 + 0x28) == 0)))) goto LAB_06964724;
                  iVar15 = *(int *)(*(long *)(lVar6 + 0x28) + 0x18);
                  if (0 < iVar15) {
                    iVar13 = 0;
                    do {
                      if (*(long *)(lVar6 + 0x28) == 0) goto LAB_06964724;
                      iVar4 = FUN_04d8be94(*(long *)(lVar6 + 0x28),iVar13,*(undefined8 *)puVar1);
                      if (iVar4 == iVar3) {
                        *unaff_x20 = *(undefined8 *)(lVar6 + 0x18);
                        thunk_FUN_03afed3c();
                        *unaff_x19 = iVar8;
                        return;
                      }
                      iVar13 = iVar13 + 1;
                    } while (iVar15 != iVar13);
                  }
                  iVar8 = iVar8 + 1;
                  plVar14 = (long *)PTR_DAT_08486738;
                } while (iVar8 != iVar12);
              }
            }
          }
        }
      }
      if (*(long *)(unaff_x21 + 0x28) != 0) {
        uVar9 = *(undefined8 *)(*(long *)(unaff_x21 + 0x28) + 0x28);
        if (*(int *)(*plVar14 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar5 = FUN_07c9c218(uVar9,0,0);
        lVar6 = *(long *)(unaff_x21 + 0x28);
        if ((uVar5 & 1) == 0) {
          if (lVar6 != 0) {
            uVar9 = thunk_FUN_07ca227c(lVar6,0);
            uVar9 = FUN_065cddf0(*(undefined8 *)PTR_DAT_084b6e40,uVar9,
                                 *(undefined8 *)PTR_DAT_084b6e38,0);
            if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
              thunk_FUN_03ae8be4(*(long *)PTR_DAT_08486be8);
            }
            FUN_07c4fb40(uVar9,0);
            *unaff_x20 = 0;
            goto LAB_069646c8;
          }
        }
        else if (lVar6 != 0) {
          *unaff_x20 = *(undefined8 *)(lVar6 + 0x28);
LAB_069646c8:
          thunk_FUN_03afed3c();
          *unaff_x19 = -1;
          return;
        }
      }
    }
  }
LAB_06964724:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


