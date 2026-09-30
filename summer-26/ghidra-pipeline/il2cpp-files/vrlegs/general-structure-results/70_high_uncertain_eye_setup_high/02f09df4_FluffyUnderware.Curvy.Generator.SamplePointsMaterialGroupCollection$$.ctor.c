/*
FUNCTION_NAME: FluffyUnderware.Curvy.Generator.SamplePointsMaterialGroupCollection$$.ctor
ENTRY_POINT: 02f09df4
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

void FluffyUnderware_Curvy_Generator_SamplePointsMaterialGroupCollection___ctor(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  int in_w8;
  long lVar9;
  undefined8 uVar10;
  int iVar11;
  long lVar12;
  long *unaff_x23;
  char cStack000000000000000c;
  long *in_stack_00000018;
  
  if (in_w8 == 0) {
    thunk_FUN_01a58e78();
    param_1 = *unaff_x23;
  }
  uVar10 = **(undefined8 **)(param_1 + 0xb8);
  cStack000000000000000c = '\0';
  FUN_027e0bd8(uVar10,&stack0x0000000c,0);
  lVar6 = *unaff_x23;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar6 = *unaff_x23;
  }
  puVar1 = PTR_DAT_03cc4f10;
  iVar11 = *(int *)(*(long *)(lVar6 + 0xb8) + 8);
  if (*(int *)(*(long *)PTR_DAT_03cc4f10 + 0xe0) == 0) {
    thunk_FUN_01a58e78(*(long *)PTR_DAT_03cc4f10);
  }
  iVar4 = FUN_027a9460(2,0);
  if (iVar11 != iVar4) {
    lVar6 = *unaff_x23;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar6 = *unaff_x23;
    }
    if (**(long **)(lVar6 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar5 = *(undefined4 *)(**(long **)(lVar6 + 0xb8) + 0x18);
    lVar6 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d13a08);
    FUN_02215594(lVar6,uVar5,*(undefined8 *)PTR_DAT_03d22278);
    puVar3 = PTR_DAT_03d139d8;
    puVar2 = PTR_DAT_03d139c0;
    iVar11 = 0;
    while( true ) {
      lVar9 = *unaff_x23;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar9);
        lVar9 = *unaff_x23;
      }
      lVar12 = **(long **)(lVar9 + 0xb8);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(int *)(lVar12 + 0x18) <= iVar11) break;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar9);
        lVar12 = **(long **)(*unaff_x23 + 0xb8);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
      }
      FUN_02215a88(lVar12,iVar11,&stack0x00000018,*(undefined8 *)puVar3);
      if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      plVar7 = (long *)(**(code **)(*in_stack_00000018 + 0x198))
                                 (in_stack_00000018,*(undefined8 *)(*in_stack_00000018 + 0x1a0));
      if (plVar7 != (long *)0x0) {
        lVar9 = *unaff_x23;
        if ((*(byte *)(*plVar7 + 0x130) < *(byte *)(lVar9 + 0x130)) ||
           (*(long *)(*(long *)(*plVar7 + 200) + (ulong)*(byte *)(lVar9 + 0x130) * 8 + -8) != lVar9)
           ) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6ee0();
        }
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar9);
          lVar9 = *unaff_x23;
        }
        if (**(long **)(lVar9 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        FUN_02215a88(**(long **)(lVar9 + 0xb8),iVar11,&stack0x00000018,*(undefined8 *)puVar3);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        FUN_01b5f01c(lVar6,in_stack_00000018,*(undefined8 *)puVar2);
      }
      iVar11 = iVar11 + 1;
    }
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    iVar11 = *(int *)(lVar6 + 0x18);
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_01a58e78(lVar9);
      lVar9 = *unaff_x23;
      lVar12 = **(long **)(lVar9 + 0xb8);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
    }
    if (iVar11 < *(int *)(lVar12 + 0x18)) {
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar9);
        lVar12 = **(long **)(*unaff_x23 + 0xb8);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
      }
      lVar9 = *(long *)PTR_DAT_03d22268;
      *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
      uVar8 = FUN_01ab7534(*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 200));
      if ((uVar8 & 1) == 0) {
        *(undefined4 *)(lVar12 + 0x18) = 0;
      }
      else {
        iVar11 = *(int *)(lVar12 + 0x18);
        *(undefined4 *)(lVar12 + 0x18) = 0;
        if (0 < iVar11) {
          FUN_02793a34(*(undefined8 *)(lVar12 + 0x10),0,iVar11,0);
        }
      }
      if (**(long **)(*unaff_x23 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_02216540(**(long **)(*unaff_x23 + 0xb8),lVar6,*(undefined8 *)PTR_DAT_03d22260);
      if (**(long **)(*unaff_x23 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_02219654(**(long **)(*unaff_x23 + 0xb8),*(undefined8 *)PTR_DAT_03d22270);
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar5 = FUN_027a9460(2,0);
    lVar6 = *unaff_x23;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar6 = *unaff_x23;
    }
    *(undefined4 *)(*(long *)(lVar6 + 0xb8) + 8) = uVar5;
  }
  if (cStack000000000000000c != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar10,0);
  }
  return;
}


