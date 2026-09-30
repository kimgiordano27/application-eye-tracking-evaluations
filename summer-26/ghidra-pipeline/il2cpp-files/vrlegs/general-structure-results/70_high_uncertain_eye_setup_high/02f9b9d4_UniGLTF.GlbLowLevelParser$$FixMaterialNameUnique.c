/*
FUNCTION_NAME: UniGLTF.GlbLowLevelParser$$FixMaterialNameUnique
ENTRY_POINT: 02f9b9d4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02f9bdb8) */

long UniGLTF_GlbLowLevelParser__FixMaterialNameUnique(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  byte bVar7;
  int iVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  long unaff_x19;
  undefined8 uVar18;
  long *unaff_x20;
  long unaff_x21;
  long *plVar19;
  undefined8 *unaff_x22;
  undefined8 *unaff_x24;
  undefined8 unaff_x25;
  long in_stack_00000008;
  char cStack0000000000000014;
  long in_stack_00000018;
  
  lVar14 = *unaff_x20;
  plVar19 = *(long **)(unaff_x21 + 0x860);
  uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar16 != 0) {
    piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == *plVar19) {
        puVar9 = (undefined8 *)(lVar14 + (long)(*piVar17 + 1) * 0x10 + 0x138);
        goto LAB_02f9ba30;
      }
      uVar16 = uVar16 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar16 != 0);
  }
  puVar9 = (undefined8 *)FUN_01a472ec();
LAB_02f9ba30:
  uVar16 = (*(code *)*puVar9)();
  uVar18 = 0;
  if ((uVar16 & 1) == 0) {
    uVar18 = unaff_x25;
  }
  if ((uVar16 & 1) == 0) {
    uVar11 = FUN_02ea2a34();
    uVar10 = thunk_FUN_025bd1c0(uVar11,*(undefined8 *)PTR_DAT_03d18950,0);
    lVar14 = *unaff_x20;
    uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *plVar19) {
          puVar9 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_02f9bacc;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar9 = (undefined8 *)FUN_01a472ec();
LAB_02f9bacc:
    unaff_x19 = (*(code *)*puVar9)();
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar11 = FUN_02ea2a34(unaff_x19,0);
    puVar5 = PTR_DAT_03d20e90;
    uVar16 = FUN_025bd4ac(uVar11,*(undefined8 *)PTR_DAT_03d20e90,0);
    if ((uVar16 & 1) != 0) {
      thunk_FUN_01a6ca08(PTR_DAT_03cbee40);
      uVar18 = thunk_FUN_01a89e68();
      uVar11 = thunk_FUN_01a6ca08(PTR_DAT_03d25b40);
      FUN_02765308(uVar18,uVar11,0);
      uVar11 = thunk_FUN_01a6ca08(PTR_DAT_03d25b48);
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar18,uVar11);
    }
    if ((uVar10 & 1) == 0) {
      bVar7 = 0;
    }
    else {
      uVar11 = FUN_02ea2a34(unaff_x19,0);
      bVar7 = thunk_FUN_025bd1c0(uVar11,*(undefined8 *)puVar5,0);
    }
    bVar4 = true;
  }
  else {
    bVar7 = 0;
    bVar4 = false;
    uVar18 = unaff_x25;
  }
  puVar6 = PTR_DAT_03d25b30;
  puVar5 = PTR_DAT_03ceec20;
  uVar11 = FUN_02ea2a34(unaff_x19,0);
  uVar12 = FUN_02ea1800(unaff_x19,0);
  uVar11 = FUN_025bdc88(uVar11,*unaff_x24,uVar12,0);
  uVar12 = thunk_FUN_01a89e68(*unaff_x22);
  FUN_02e9f010(uVar12,uVar11,0);
  uVar11 = uVar12;
  if (!bVar4) {
    uVar11 = 0;
  }
  uVar13 = thunk_FUN_01a89e68(*(undefined8 *)puVar6);
  FUN_02fa5320(uVar13,uVar18,uVar11,bVar7 & 1);
  lVar14 = *(long *)puVar5;
  if (*(int *)(lVar14 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar14 = *(long *)puVar5;
  }
  uVar18 = **(undefined8 **)(lVar14 + 0xb8);
  cStack0000000000000014 = '\0';
  FUN_027e0bd8(uVar18,&stack0x00000014,0);
  lVar14 = *(long *)puVar5;
  if (*(int *)(lVar14 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar14 = *(long *)puVar5;
  }
  if (**(long **)(lVar14 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar16 = FUN_02180b80(**(long **)(lVar14 + 0xb8),uVar13,&stack0x00000008,
                        *(undefined8 *)PTR_DAT_03d25b20);
  lVar14 = in_stack_00000008;
  if ((uVar16 & 1) == 0) {
    lVar14 = *(long *)puVar5;
    if (*(int *)(lVar14 + 0xe0) == 0) {
      thunk_FUN_01a58e78(lVar14);
      lVar14 = *(long *)puVar5;
    }
    if (0 < *(int *)(*(long *)(lVar14 + 0xb8) + 0x18)) {
      if (*(int *)(lVar14 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar14);
        lVar14 = *(long *)puVar5;
      }
      if (**(long **)(lVar14 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      iVar8 = FUN_02182fb4(**(long **)(lVar14 + 0xb8),*(undefined8 *)PTR_DAT_03d25b28);
      lVar14 = *(long *)puVar5;
      if (*(int *)(*(long *)(lVar14 + 0xb8) + 0x18) <= iVar8) {
        thunk_FUN_01a6ca08(PTR_DAT_03cbdd28);
        uVar18 = thunk_FUN_01a89e68();
        uVar11 = thunk_FUN_01a6ca08(PTR_DAT_03d25b50);
        FUN_0276a4a8(uVar18,uVar11,0);
        uVar11 = thunk_FUN_01a6ca08(PTR_DAT_03d25b48);
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar18,uVar11);
      }
    }
    if (*(int *)(lVar14 + 0xe0) == 0) {
      thunk_FUN_01a58e78(lVar14);
      lVar14 = *(long *)puVar5;
    }
    uVar1 = *(undefined4 *)(*(long *)(lVar14 + 0xb8) + 0x10);
    uVar2 = *(undefined4 *)(*(long *)(lVar14 + 0xb8) + 0x14);
    lVar14 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d25b38);
    FUN_02fa408c(lVar14,uVar13,uVar12,uVar1,uVar2);
    in_stack_00000008 = lVar14;
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar15 = *(long *)(*(long *)puVar5 + 0xb8);
    *(undefined1 *)(lVar14 + 0x31) = *(undefined1 *)(lVar15 + 0x28);
    uVar3 = *(undefined1 *)(lVar15 + 0x29);
    *(bool *)(lVar14 + 0x30) = bVar4;
    *(byte *)(lVar14 + 0x32) = bVar7 & 1;
    *(undefined1 *)(lVar14 + 0x40) = uVar3;
    FUN_02fa4400(lVar14,*(undefined1 *)(lVar15 + 0x38),*(undefined4 *)(lVar15 + 0x3c),
                 *(undefined4 *)(lVar15 + 0x40));
    if (**(long **)(*(long *)puVar5 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_02183548(**(long **)(*(long *)puVar5 + 0xb8),uVar13,in_stack_00000008,&stack0x00000018,
                 *(undefined8 *)PTR_DAT_03d25b18);
    lVar14 = in_stack_00000018;
  }
  if (cStack0000000000000014 != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar18,0);
  }
  return lVar14;
}


