/*
FUNCTION_NAME: FluffyUnderware.Curvy.Generator.SamplePointsMaterialGroupCollection$$CalculateAspectCorrection
ENTRY_POINT: 02f09e78
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02f0a13c) */

void FluffyUnderware_Curvy_Generator_SamplePointsMaterialGroupCollection__CalculateAspectCorrection
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  int in_w8;
  long lVar7;
  int iVar8;
  long lVar9;
  long *unaff_x23;
  long *unaff_x24;
  undefined8 in_stack_00000008;
  long *in_stack_00000018;
  
  if (in_w8 == 0) {
    thunk_FUN_01a58e78();
    param_1 = *unaff_x23;
  }
  if (**(long **)(param_1 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar3 = *(undefined4 *)(**(long **)(param_1 + 0xb8) + 0x18);
  lVar4 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d13a08);
  FUN_02215594(lVar4,uVar3,*(undefined8 *)PTR_DAT_03d22278);
  puVar2 = PTR_DAT_03d139d8;
  puVar1 = PTR_DAT_03d139c0;
  iVar8 = 0;
  while( true ) {
    lVar7 = *unaff_x23;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01a58e78(lVar7);
      lVar7 = *unaff_x23;
    }
    lVar9 = **(long **)(lVar7 + 0xb8);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(int *)(lVar9 + 0x18) <= iVar8) break;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01a58e78(lVar7);
      lVar9 = **(long **)(*unaff_x23 + 0xb8);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
    }
    FUN_02215a88(lVar9,iVar8,&stack0x00000018,*(undefined8 *)puVar2);
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    plVar5 = (long *)(**(code **)(*in_stack_00000018 + 0x198))
                               (in_stack_00000018,*(undefined8 *)(*in_stack_00000018 + 0x1a0));
    if (plVar5 != (long *)0x0) {
      lVar7 = *unaff_x23;
      if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(lVar7 + 0x130)) ||
         (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(lVar7 + 0x130) * 8 + -8) != lVar7))
      {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0();
      }
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar7);
        lVar7 = *unaff_x23;
      }
      if (**(long **)(lVar7 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_02215a88(**(long **)(lVar7 + 0xb8),iVar8,&stack0x00000018,*(undefined8 *)puVar2);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_01b5f01c(lVar4,in_stack_00000018,*(undefined8 *)puVar1);
    }
    iVar8 = iVar8 + 1;
  }
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  iVar8 = *(int *)(lVar4 + 0x18);
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01a58e78(lVar7);
    lVar7 = *unaff_x23;
    lVar9 = **(long **)(lVar7 + 0xb8);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
  }
  if (iVar8 < *(int *)(lVar9 + 0x18)) {
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01a58e78(lVar7);
      lVar9 = **(long **)(*unaff_x23 + 0xb8);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
    }
    lVar7 = *(long *)PTR_DAT_03d22268;
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    uVar6 = FUN_01ab7534(*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 200));
    if ((uVar6 & 1) == 0) {
      *(undefined4 *)(lVar9 + 0x18) = 0;
    }
    else {
      iVar8 = *(int *)(lVar9 + 0x18);
      *(undefined4 *)(lVar9 + 0x18) = 0;
      if (0 < iVar8) {
        FUN_02793a34(*(undefined8 *)(lVar9 + 0x10),0,iVar8,0);
      }
    }
    if (**(long **)(*unaff_x23 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_02216540(**(long **)(*unaff_x23 + 0xb8),lVar4,*(undefined8 *)PTR_DAT_03d22260);
    if (**(long **)(*unaff_x23 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_02219654(**(long **)(*unaff_x23 + 0xb8),*(undefined8 *)PTR_DAT_03d22270);
  }
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar3 = FUN_027a9460(2,0);
  lVar4 = *unaff_x23;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar4 = *unaff_x23;
  }
  *(undefined4 *)(*(long *)(lVar4 + 0xb8) + 8) = uVar3;
  if (in_stack_00000008._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  return;
}


