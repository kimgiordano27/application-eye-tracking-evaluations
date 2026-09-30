/*
FUNCTION_NAME: OVRPlugin.LogCallback2DelegateType$$BeginInvoke
ENTRY_POINT: 0696439c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_18;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_LogCallback2DelegateType__BeginInvoke(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  int iVar9;
  long *plVar10;
  undefined8 *puVar11;
  int iVar12;
  int iVar13;
  long *unaff_x25;
  int iVar14;
  
  uVar5 = FUN_07c9e200();
  if ((uVar5 & 1) == 0) {
    lVar6 = (**(code **)(*unaff_x22 + 0x598))();
    if (lVar6 == 0) goto LAB_06964724;
    lVar6 = FUN_07c98f88(lVar6,0);
    plVar10 = (long *)(unaff_x21 + 0x40);
    *plVar10 = lVar6;
    thunk_FUN_03afed3c(plVar10,lVar6);
    uVar5 = (**(code **)(*unaff_x22 + 0x2e8))();
    if ((uVar5 & 1) != 0) {
      lVar6 = *plVar10;
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
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
                (lVar6 = FUN_04de82e0(lVar6,iVar12,*(undefined8 *)PTR_DAT_084b6e30), lVar6 == 0)) ||
               (*(long *)(lVar6 + 0x20) == 0)) goto LAB_06964724;
            iVar9 = *(int *)(*(long *)(lVar6 + 0x20) + 0x18);
            if (0 < iVar9) {
              iVar14 = 0;
              do {
                if (*plVar10 == 0) goto LAB_06964724;
                uVar7 = FUN_07c99788(*plVar10,0);
                if (*(long *)(lVar6 + 0x20) == 0) goto LAB_06964724;
                uVar8 = FUN_04de82e0(*(long *)(lVar6 + 0x20),iVar14,*(undefined8 *)puVar1);
                uVar5 = thunk_FUN_065cbffc(uVar7,uVar8,0);
                if ((uVar5 & 1) != 0) {
                  *unaff_x20 = *(undefined8 *)(lVar6 + 0x18);
                  thunk_FUN_03afed3c();
                  *unaff_x19 = iVar12;
                  return;
                }
                iVar14 = iVar14 + 1;
              } while (iVar9 != iVar14);
            }
            iVar12 = iVar12 + 1;
            unaff_x25 = (long *)PTR_DAT_08486738;
          } while (iVar12 != iVar3);
        }
        if (*plVar10 == 0) goto LAB_06964724;
        uVar7 = FUN_0447aad0(*plVar10,*(undefined8 *)PTR_DAT_084b6e20);
        puVar11 = (undefined8 *)(unaff_x21 + 0x38);
        *puVar11 = uVar7;
        thunk_FUN_03afed3c(puVar11,uVar7);
        uVar7 = *puVar11;
        if (*(int *)(*unaff_x25 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar5 = FUN_07ca21f0(uVar7,0);
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
              iVar9 = 0;
              do {
                if (((*(long *)(unaff_x21 + 0x28) == 0) ||
                    (lVar6 = *(long *)(*(long *)(unaff_x21 + 0x28) + 0x30), lVar6 == 0)) ||
                   ((lVar6 = FUN_04de82e0(lVar6,iVar9,*(undefined8 *)puVar2), lVar6 == 0 ||
                    (*(long *)(lVar6 + 0x28) == 0)))) goto LAB_06964724;
                iVar14 = *(int *)(*(long *)(lVar6 + 0x28) + 0x18);
                if (0 < iVar14) {
                  iVar13 = 0;
                  do {
                    if (*(long *)(lVar6 + 0x28) == 0) goto LAB_06964724;
                    iVar4 = FUN_04d8be94(*(long *)(lVar6 + 0x28),iVar13,*(undefined8 *)puVar1);
                    if (iVar4 == iVar3) {
                      *unaff_x20 = *(undefined8 *)(lVar6 + 0x18);
                      thunk_FUN_03afed3c();
                      *unaff_x19 = iVar9;
                      return;
                    }
                    iVar13 = iVar13 + 1;
                  } while (iVar14 != iVar13);
                }
                iVar9 = iVar9 + 1;
                unaff_x25 = (long *)PTR_DAT_08486738;
              } while (iVar9 != iVar12);
            }
          }
        }
      }
    }
    if (*(long *)(unaff_x21 + 0x28) == 0) {
LAB_06964724:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar7 = *(undefined8 *)(*(long *)(unaff_x21 + 0x28) + 0x28);
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar5 = FUN_07c9c218(uVar7,0,0);
    lVar6 = *(long *)(unaff_x21 + 0x28);
    if ((uVar5 & 1) == 0) {
      if (lVar6 == 0) goto LAB_06964724;
      uVar7 = thunk_FUN_07ca227c(lVar6,0);
      uVar7 = FUN_065cddf0(*(undefined8 *)PTR_DAT_084b6e40,uVar7,*(undefined8 *)PTR_DAT_084b6e38,0);
      if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
        thunk_FUN_03ae8be4(*(long *)PTR_DAT_08486be8);
      }
      FUN_07c4fb40(uVar7,0);
      *unaff_x20 = 0;
    }
    else {
      if (lVar6 == 0) goto LAB_06964724;
      *unaff_x20 = *(undefined8 *)(lVar6 + 0x28);
    }
    thunk_FUN_03afed3c();
    *unaff_x19 = -1;
  }
  return;
}


