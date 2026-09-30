/*
FUNCTION_NAME: OVRPlugin.LogCallback2DelegateType$$EndInvoke
ENTRY_POINT: 0696445c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_LogCallback2DelegateType__EndInvoke(undefined **param_1,long param_2,ulong param_3)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  int *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  int iVar11;
  long *unaff_x23;
  undefined8 *puVar12;
  ulong unaff_x24;
  int iVar13;
  long *plVar14;
  int iVar15;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000008;
  
  while( true ) {
    lVar7 = FUN_04de82e0(param_2,param_3,*(undefined8 *)param_1[0x1c6]);
    if ((lVar7 == 0) || (*(long *)(lVar7 + 0x20) == 0)) goto LAB_06964724;
    iVar5 = *(int *)(*(long *)(lVar7 + 0x20) + 0x18);
    if (0 < iVar5) {
      iVar15 = 0;
      do {
        if (*unaff_x23 == 0) goto LAB_06964724;
        uVar8 = FUN_07c99788(*unaff_x23,0);
        if (*(long *)(lVar7 + 0x20) == 0) goto LAB_06964724;
        uVar9 = FUN_04de82e0(*(long *)(lVar7 + 0x20),iVar15,*unaff_x29);
        uVar10 = thunk_FUN_065cbffc(uVar8,uVar9,0);
        if ((uVar10 & 1) != 0) {
          *unaff_x20 = *(undefined8 *)(lVar7 + 0x18);
          thunk_FUN_03afed3c();
          *unaff_x19 = (int)unaff_x24;
          return;
        }
        iVar15 = iVar15 + 1;
      } while (iVar5 != iVar15);
    }
    plVar14 = (long *)PTR_DAT_08486738;
    uVar1 = (int)unaff_x24 + 1;
    param_3 = (ulong)uVar1;
    if (uVar1 == in_stack_00000008._4_4_) break;
    if ((*(long *)(unaff_x21 + 0x28) == 0) ||
       (param_2 = *(long *)(*(long *)(unaff_x21 + 0x28) + 0x30), param_2 == 0)) goto LAB_06964724;
    param_1 = &PTR_DAT_084b6000;
    unaff_x24 = param_3;
  }
  if (*unaff_x23 != 0) {
    uVar8 = FUN_0447aad0(*unaff_x23,*(undefined8 *)PTR_DAT_084b6e20);
    puVar12 = (undefined8 *)(unaff_x21 + 0x38);
    *puVar12 = uVar8;
    thunk_FUN_03afed3c(puVar12,uVar8);
    uVar8 = *puVar12;
    if (*(int *)(*plVar14 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar10 = FUN_07ca21f0(uVar8,0);
    if ((uVar10 & 1) == 0) goto LAB_06964610;
    (**(code **)(*unaff_x22 + 0x578))();
    iVar5 = FUN_06964728();
    puVar4 = PTR_DAT_084b6e30;
    puVar3 = PTR_DAT_08487a70;
    if (iVar5 == -1) goto LAB_06964610;
    if ((*(long *)(unaff_x21 + 0x28) != 0) &&
       (lVar7 = *(long *)(*(long *)(unaff_x21 + 0x28) + 0x30), lVar7 != 0)) {
      iVar15 = *(int *)(lVar7 + 0x18);
      if (iVar15 < 1) goto LAB_06964610;
      iVar11 = 0;
      goto LAB_06964598;
    }
  }
  goto LAB_06964724;
  while( true ) {
    iVar2 = *(int *)(*(long *)(lVar7 + 0x28) + 0x18);
    if (0 < iVar2) {
      iVar13 = 0;
      do {
        if (*(long *)(lVar7 + 0x28) == 0) goto LAB_06964724;
        iVar6 = FUN_04d8be94(*(long *)(lVar7 + 0x28),iVar13,*(undefined8 *)puVar3);
        if (iVar6 == iVar5) {
          *unaff_x20 = *(undefined8 *)(lVar7 + 0x18);
          thunk_FUN_03afed3c();
          *unaff_x19 = iVar11;
          return;
        }
        iVar13 = iVar13 + 1;
      } while (iVar2 != iVar13);
    }
    iVar11 = iVar11 + 1;
    plVar14 = (long *)PTR_DAT_08486738;
    if (iVar11 == iVar15) break;
LAB_06964598:
    if ((((*(long *)(unaff_x21 + 0x28) == 0) ||
         (lVar7 = *(long *)(*(long *)(unaff_x21 + 0x28) + 0x30), lVar7 == 0)) ||
        (lVar7 = FUN_04de82e0(lVar7,iVar11,*(undefined8 *)puVar4), lVar7 == 0)) ||
       (*(long *)(lVar7 + 0x28) == 0)) goto LAB_06964724;
  }
LAB_06964610:
  if (*(long *)(unaff_x21 + 0x28) != 0) {
    uVar8 = *(undefined8 *)(*(long *)(unaff_x21 + 0x28) + 0x28);
    if (*(int *)(*plVar14 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar10 = FUN_07c9c218(uVar8,0,0);
    lVar7 = *(long *)(unaff_x21 + 0x28);
    if ((uVar10 & 1) == 0) {
      if (lVar7 != 0) {
        uVar8 = thunk_FUN_07ca227c(lVar7,0);
        uVar8 = FUN_065cddf0(*(undefined8 *)PTR_DAT_084b6e40,uVar8,*(undefined8 *)PTR_DAT_084b6e38,0
                            );
        if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
          thunk_FUN_03ae8be4(*(long *)PTR_DAT_08486be8);
        }
        FUN_07c4fb40(uVar8,0);
        *unaff_x20 = 0;
        goto LAB_069646c8;
      }
    }
    else if (lVar7 != 0) {
      *unaff_x20 = *(undefined8 *)(lVar7 + 0x28);
LAB_069646c8:
      thunk_FUN_03afed3c();
      *unaff_x19 = -1;
      return;
    }
  }
LAB_06964724:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


