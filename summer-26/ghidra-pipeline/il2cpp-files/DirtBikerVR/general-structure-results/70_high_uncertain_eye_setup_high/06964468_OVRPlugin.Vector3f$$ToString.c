/*
FUNCTION_NAME: OVRPlugin.Vector3f$$ToString
ENTRY_POINT: 06964468
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Vector3f__ToString(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  int *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  int iVar10;
  long *unaff_x23;
  undefined8 *puVar11;
  int unaff_w24;
  int iVar12;
  long *plVar13;
  int iVar14;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000008;
  
  while( true ) {
    if ((param_1 == 0) || (*(long *)(param_1 + 0x20) == 0)) goto LAB_06964724;
    iVar4 = *(int *)(*(long *)(param_1 + 0x20) + 0x18);
    if (0 < iVar4) {
      iVar14 = 0;
      do {
        if (*unaff_x23 == 0) goto LAB_06964724;
        uVar6 = FUN_07c99788(*unaff_x23,0);
        if (*(long *)(param_1 + 0x20) == 0) goto LAB_06964724;
        uVar7 = FUN_04de82e0(*(long *)(param_1 + 0x20),iVar14,*unaff_x29);
        uVar8 = thunk_FUN_065cbffc(uVar6,uVar7,0);
        if ((uVar8 & 1) != 0) {
          *unaff_x20 = *(undefined8 *)(param_1 + 0x18);
          thunk_FUN_03afed3c();
          *unaff_x19 = unaff_w24;
          return;
        }
        iVar14 = iVar14 + 1;
      } while (iVar4 != iVar14);
    }
    plVar13 = (long *)PTR_DAT_08486738;
    unaff_w24 = unaff_w24 + 1;
    if (unaff_w24 == in_stack_00000008._4_4_) break;
    if ((*(long *)(unaff_x21 + 0x28) == 0) ||
       (lVar9 = *(long *)(*(long *)(unaff_x21 + 0x28) + 0x30), lVar9 == 0)) goto LAB_06964724;
    param_1 = FUN_04de82e0(lVar9,unaff_w24,*(undefined8 *)PTR_DAT_084b6e30);
  }
  if (*unaff_x23 != 0) {
    uVar6 = FUN_0447aad0(*unaff_x23,*(undefined8 *)PTR_DAT_084b6e20);
    puVar11 = (undefined8 *)(unaff_x21 + 0x38);
    *puVar11 = uVar6;
    thunk_FUN_03afed3c(puVar11,uVar6);
    uVar6 = *puVar11;
    if (*(int *)(*plVar13 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar8 = FUN_07ca21f0(uVar6,0);
    if ((uVar8 & 1) == 0) goto LAB_06964610;
    (**(code **)(*unaff_x22 + 0x578))();
    iVar4 = FUN_06964728();
    puVar3 = PTR_DAT_084b6e30;
    puVar2 = PTR_DAT_08487a70;
    if (iVar4 == -1) goto LAB_06964610;
    if ((*(long *)(unaff_x21 + 0x28) != 0) &&
       (lVar9 = *(long *)(*(long *)(unaff_x21 + 0x28) + 0x30), lVar9 != 0)) {
      iVar14 = *(int *)(lVar9 + 0x18);
      if (iVar14 < 1) goto LAB_06964610;
      iVar10 = 0;
      goto LAB_06964598;
    }
  }
  goto LAB_06964724;
  while( true ) {
    iVar1 = *(int *)(*(long *)(lVar9 + 0x28) + 0x18);
    if (0 < iVar1) {
      iVar12 = 0;
      do {
        if (*(long *)(lVar9 + 0x28) == 0) goto LAB_06964724;
        iVar5 = FUN_04d8be94(*(long *)(lVar9 + 0x28),iVar12,*(undefined8 *)puVar2);
        if (iVar5 == iVar4) {
          *unaff_x20 = *(undefined8 *)(lVar9 + 0x18);
          thunk_FUN_03afed3c();
          *unaff_x19 = iVar10;
          return;
        }
        iVar12 = iVar12 + 1;
      } while (iVar1 != iVar12);
    }
    iVar10 = iVar10 + 1;
    plVar13 = (long *)PTR_DAT_08486738;
    if (iVar10 == iVar14) break;
LAB_06964598:
    if ((((*(long *)(unaff_x21 + 0x28) == 0) ||
         (lVar9 = *(long *)(*(long *)(unaff_x21 + 0x28) + 0x30), lVar9 == 0)) ||
        (lVar9 = FUN_04de82e0(lVar9,iVar10,*(undefined8 *)puVar3), lVar9 == 0)) ||
       (*(long *)(lVar9 + 0x28) == 0)) goto LAB_06964724;
  }
LAB_06964610:
  if (*(long *)(unaff_x21 + 0x28) != 0) {
    uVar6 = *(undefined8 *)(*(long *)(unaff_x21 + 0x28) + 0x28);
    if (*(int *)(*plVar13 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar8 = FUN_07c9c218(uVar6,0,0);
    lVar9 = *(long *)(unaff_x21 + 0x28);
    if ((uVar8 & 1) == 0) {
      if (lVar9 != 0) {
        uVar6 = thunk_FUN_07ca227c(lVar9,0);
        uVar6 = FUN_065cddf0(*(undefined8 *)PTR_DAT_084b6e40,uVar6,*(undefined8 *)PTR_DAT_084b6e38,0
                            );
        if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
          thunk_FUN_03ae8be4(*(long *)PTR_DAT_08486be8);
        }
        FUN_07c4fb40(uVar6,0);
        *unaff_x20 = 0;
        goto LAB_069646c8;
      }
    }
    else if (lVar9 != 0) {
      *unaff_x20 = *(undefined8 *)(lVar9 + 0x28);
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


