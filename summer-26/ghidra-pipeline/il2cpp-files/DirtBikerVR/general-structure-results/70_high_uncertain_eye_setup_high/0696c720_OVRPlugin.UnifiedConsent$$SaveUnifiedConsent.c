/*
FUNCTION_NAME: OVRPlugin.UnifiedConsent$$SaveUnifiedConsent
ENTRY_POINT: 0696c720
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRPlugin_UnifiedConsent__SaveUnifiedConsent
          (undefined1 param_1 [16],undefined8 param_2,float param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  int iVar12;
  int unaff_w23;
  undefined8 *unaff_x24;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 unaff_s8;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 *in_stack_00000028;
  long in_stack_00000030;
  
  while( true ) {
    if ((*(long *)(unaff_x19 + 0x20) == 0) ||
       (uVar4 = FUN_04de82e0(*(long *)(unaff_x19 + 0x20),unaff_w20,*unaff_x24), param_4 == 0))
    goto LAB_0696ca1c;
    uVar5 = FUN_07c99a88(param_4,uVar4,0);
    fVar18 = (float)param_2;
    if ((uVar5 & 1) != 0) {
      return 0;
    }
    unaff_w20 = unaff_w20 + 1;
    if (unaff_w23 == unaff_w20) break;
    param_4 = FUN_07d22c78();
  }
  lVar6 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084b70d8);
  FUN_0696cf88();
  if (lVar6 != 0) {
    *(long *)(lVar6 + 0x10) = unaff_x21;
    *(undefined4 *)(lVar6 + 0x18) = unaff_s8;
    thunk_FUN_03afed3c();
    if (unaff_x21 != 0) {
      FUN_07d22e2c();
      fVar13 = (float)FUN_0696cebc();
      if (*(char *)(unaff_x19 + 0x68) != '\0') goto LAB_0696cb64;
      fVar14 = *(float *)(unaff_x19 + 0x2c);
                    /* try { // try from 0696c7b8 to 06a6c7df has its CatchHandler @ 0696cb2c */
      if (fVar14 <= 0.0) goto LAB_0696cb64;
      fVar19 = 0.0;
      if ((0.0 <= fVar14) && (fVar19 = DAT_015c5ca0, fVar14 <= DAT_015c5ca0)) {
        fVar19 = fVar14;
      }
      *(float *)(unaff_x19 + 0x2c) = fVar19;
      fVar14 = param_3;
      fVar15 = (float)FUN_07d22ad8();
      fVar20 = fVar14;
      if (DAT_08974e24 == '\0') {
        FUN_03a8a718(PTR_DAT_08486c60);
        DAT_08974e24 = '\x01';
      }
      puVar2 = PTR_DAT_08486c60;
      if (*(int *)(*(long *)PTR_DAT_08486c60 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      fVar16 = (float)FUN_07ca88b8(0);
      if (*(long *)(unaff_x19 + 0x88) != 0) {
        fVar17 = (float)FUN_07d306c8(*(long *)(unaff_x19 + 0x88),0);
        fVar15 = *(float *)(unaff_x19 + 0x2c) *
                 (SQRT(fVar14 * fVar14 + fVar15 * fVar15 + fVar19 * fVar19) /
                 (fVar16 * fVar17 * 10.0)) * DAT_015c5634;
        fVar19 = *(float *)(unaff_x19 + 0x98) + fVar15;
        uVar5 = (ulong)(uint)fVar19;
        *(float *)(unaff_x19 + 0x98) = fVar19;
        puVar1 = PTR_DAT_08486738;
        fVar14 = 0.0;
        if ((0.0 <= fVar19) && (fVar14 = 1.0, fVar19 <= 1.0)) {
          fVar14 = fVar19;
        }
        *(float *)(unaff_x19 + 0x98) = fVar14;
        uVar4 = *(undefined8 *)(unaff_x19 + 0x90);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar7 = FUN_07ca21f0(uVar4,0);
        puVar1 = PTR_DAT_084b5d60;
        if ((uVar7 & 1) == 0) goto LAB_0696cb64;
        lVar11 = *(long *)(unaff_x19 + 0x90);
        if (lVar11 != 0) {
          iVar12 = 0;
          goto LAB_0696c904;
        }
      }
    }
  }
  goto LAB_0696ca1c;
LAB_0696c904:
  fVar14 = (float)uVar5;
  if (*(long *)(lVar11 + 0xe8) == 0) goto LAB_0696ca1c;
  iVar3 = FUN_06936294(*(long *)(lVar11 + 0xe8),0);
  lVar11 = *(long *)(unaff_x19 + 0x90);
  if (iVar12 < iVar3) {
    if ((((lVar11 == 0) || (*(long *)(lVar11 + 0xe8) == 0)) ||
        (lVar11 = *(long *)(*(long *)(lVar11 + 0xe8) + 0x58), lVar11 == 0)) ||
       ((lVar11 = FUN_04de82e0(lVar11,iVar12,*(undefined8 *)puVar1), lVar11 == 0 ||
        (plVar8 = *(long **)(lVar11 + 0x80), plVar8 == (long *)0x0)))) goto LAB_0696ca1c;
    fVar19 = (float)(**(code **)(*plVar8 + 0x2a8))(plVar8,*(undefined8 *)(*plVar8 + 0x2b0));
    if (DAT_08974e27 == '\0') {
      FUN_03a8a718(puVar2);
      DAT_08974e27 = '\x01';
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    plVar8 = *(long **)(lVar11 + 0x80);
    if (plVar8 == (long *)0x0) goto LAB_0696ca1c;
    fVar14 = (fVar18 - fVar14) * (fVar18 - fVar14);
    uVar5 = (ulong)(uint)fVar14;
    fVar20 = (param_3 - fVar20) * (param_3 - fVar20);
    fVar14 = fVar20 + (fVar13 - fVar19) * (fVar13 - fVar19) + fVar14;
    fVar19 = (float)(**(code **)(*plVar8 + 0x228))(plVar8,*(undefined8 *)(*plVar8 + 0x230));
    if (SQRT(fVar14) < fVar19 * 2.5) {
      plVar8 = *(long **)(lVar11 + 0x80);
      if (plVar8 == (long *)0x0) goto LAB_0696ca1c;
      fVar14 = (float)(**(code **)(*plVar8 + 0x2f8))(plVar8,*(undefined8 *)(*plVar8 + 0x300));
      (**(code **)(*plVar8 + 0x308))(fVar15 + fVar14,plVar8,*(undefined8 *)(*plVar8 + 0x310));
    }
    lVar11 = *(long *)(unaff_x19 + 0x90);
    iVar12 = iVar12 + 1;
    if (lVar11 == 0) goto LAB_0696ca1c;
    goto LAB_0696c904;
  }
  if (lVar11 == 0) goto LAB_0696ca1c;
  fVar19 = (float)FUN_069392f8(lVar11,0);
  if (DAT_08974e27 == '\0') {
    FUN_03a8a718(PTR_DAT_08486c60);
    DAT_08974e27 = '\x01';
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  fVar20 = fVar20 - param_3;
  fVar16 = 1.0;
  if (SQRT(fVar20 * fVar20 +
           (fVar19 - fVar13) * (fVar19 - fVar13) + (fVar14 - fVar18) * (fVar14 - fVar18)) < 1.0) {
    if (((*(long *)(unaff_x19 + 0x90) == 0) ||
        (lVar11 = *(long *)(*(long *)(unaff_x19 + 0x90) + 0xe8), lVar11 == 0)) ||
       (lVar11 = *(long *)(lVar11 + 0x40), lVar11 == 0)) goto LAB_0696ca1c;
    fVar16 = 1.0;
    FUN_069464c0(fVar15 + *(float *)(lVar11 + 0x6c),lVar11,0);
  }
  if (*(long *)(unaff_x19 + 0x90) == 0) goto LAB_0696ca1c;
  fVar14 = (float)FUN_06939358(*(long *)(unaff_x19 + 0x90),0);
  if (DAT_08974e27 == '\0') {
    FUN_03a8a718(PTR_DAT_08486c60);
    DAT_08974e27 = '\x01';
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  if (1.0 <= SQRT((fVar20 - param_3) * (fVar20 - param_3) +
                  (fVar14 - fVar13) * (fVar14 - fVar13) + (fVar16 - fVar18) * (fVar16 - fVar18)))
  goto LAB_0696cb64;
  if (((*(long *)(unaff_x19 + 0x90) == 0) ||
      (lVar11 = *(long *)(*(long *)(unaff_x19 + 0x90) + 0xe8), lVar11 == 0)) ||
     (lVar11 = *(long *)(lVar11 + 0x48), lVar11 == 0)) goto LAB_0696ca1c;
  FUN_069464c0(fVar15 + *(float *)(lVar11 + 0x6c),lVar11,0);
LAB_0696cb64:
  if (*(char *)(unaff_x19 + 0x5c) == '\0') {
    return 1;
  }
  if (*(long *)(unaff_x19 + 0x78) == 0) goto LAB_0696ca1c;
  FUN_04de90b8(&stack0x00000008,*(long *)(unaff_x19 + 0x78),*(undefined8 *)PTR_DAT_0849b370);
  puVar1 = PTR_DAT_084b70d0;
  puVar2 = PTR_DAT_0849b360;
  in_stack_00000028 = in_stack_00000010;
  in_stack_00000020 = in_stack_00000008;
  in_stack_00000030 = in_stack_00000018;
  in_stack_00000008 = 0;
  in_stack_00000010 = &stack0x00000020;
LAB_0696cbb0:
  uVar5 = FUN_061c1964(&stack0x00000020,*(undefined8 *)puVar2);
  lVar11 = in_stack_00000030;
  if ((uVar5 & 1) != 0) {
    if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar9 = FUN_07c99058(in_stack_00000030,0);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar9 = FUN_07c997a0(lVar9,0);
    if (lVar9 == 0) {
      if (*(long *)(lVar6 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      FUN_054c57ac(*(long *)(lVar6 + 0x20),lVar11,*(undefined8 *)puVar1);
    }
    else {
      lVar10 = *(long *)(unaff_x19 + 0x38);
      if (lVar10 == 0) {
LAB_0696ccc0:
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      iVar12 = 0;
      while (iVar12 < *(int *)(lVar10 + 0x18)) {
        uVar4 = FUN_04de82e0(lVar10,iVar12,*unaff_x24);
        uVar5 = thunk_FUN_065cbffc(lVar9,uVar4,0);
        if ((uVar5 & 1) != 0) goto LAB_0696cbb0;
        lVar10 = *(long *)(unaff_x19 + 0x38);
        iVar12 = iVar12 + 1;
        if (lVar10 == 0) goto LAB_0696ccc0;
      }
      if (*(long *)(lVar6 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      FUN_054c57ac(*(long *)(lVar6 + 0x20),lVar11,*(undefined8 *)puVar1);
    }
    goto LAB_0696cbb0;
  }
  FUN_061c1960(&stack0x00000020,*(undefined8 *)PTR_DAT_0849b358);
  if (*(long *)(unaff_x19 + 0x70) != 0) {
    FUN_054c57ac(*(long *)(unaff_x19 + 0x70),lVar6,*(undefined8 *)PTR_DAT_084b70c8);
    return 1;
  }
LAB_0696ca1c:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


